package main

import (
	"context"
	"encoding/json"
	"flag"
	"fmt"
	"log"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"strings"
	"sync"
)

const (
	ClangSubprocessCount = 2
	BaseModule           = "github.com/mappu/miqt"
)

func cacheFilePath(inputHeader string) string {
	return filepath.Join("cachedir", strings.Replace(inputHeader, `/`, `__`, -1)+".json")
}

func importPathForQtPackage(packageName string) string {
	return BaseModule + "/" + packageName
}

func findHeadersInDir(srcDir string, allowHeader func(string) bool) []string {
	content, err := os.ReadDir(srcDir)
	if err != nil {
		panic(err)
	}

	var ret []string

	for _, includeFile := range content {
		if includeFile.IsDir() {
			continue
		}
		if !strings.HasSuffix(includeFile.Name(), `.h`) {
			continue
		}
		fullPath := filepath.Join(srcDir, includeFile.Name())
		if !allowHeader(fullPath) {
			continue
		}
		ret = append(ret, fullPath)
	}

	return ret
}

func cleanGeneratedFilesInDir(dirpath string) {
	log.Printf("Cleaning up output directory %q...", dirpath)

	_ = os.MkdirAll(dirpath, 0755)

	existing, err := os.ReadDir(dirpath)
	if err != nil {
		panic(err)
	}

	cleaned := 0
	for _, e := range existing {
		if e.IsDir() {
			continue
		}
		if !strings.HasPrefix(e.Name(), `gen_`) {
			continue
		}
		// One of ours, clean up
		err := os.Remove(filepath.Join(dirpath, e.Name()))
		if err != nil {
			log.Printf("WARNING: Failed to remove existing file %q", e.Name())
			continue
		}

		cleaned++
	}

	log.Printf("Removed %d file(s).", cleaned)
}

func pkgConfigCflags(packageName string) string {
	stdout, err := exec.Command(`pkg-config`, `--cflags`, packageName).Output()
	if err != nil {
		panic(err)
	}

	return string(stdout)
}

func generate(packageName string, srcDirs []string, allowHeaderFn func(string) bool, clangBin, cflagsCombined, outDir string, matcher ClangMatcher) {

	var includeFiles []string
	for _, srcDir := range srcDirs {
		if strings.HasSuffix(srcDir, `.h`) {
			includeFiles = append(includeFiles, srcDir) // single .h
		} else {
			includeFiles = append(includeFiles, findHeadersInDir(srcDir, allowHeaderFn)...)
		}
	}

	log.Printf("Found %d header files to process.", len(includeFiles))

	cflags := strings.Fields(cflagsCombined)

	outDir = filepath.Join(outDir, packageName)

	cleanGeneratedFilesInDir(outDir)

	var processHeaders []*CppParsedHeader
	atr := astTransformRedundant{
		preserve: make(map[string]*CppEnum),
	}

	//
	// PASS 0 (Fill clang cache)
	//

	generateClangCaches(includeFiles, clangBin, cflags, matcher)

	// The cache should now be fully populated.

	//
	// PASS 1 (clang2il)
	//

	for _, inputHeader := range includeFiles {

		cacheFile := cacheFilePath(inputHeader)

		astJson, err := os.ReadFile(cacheFile)
		if err != nil {
			panic("Expected cache to be created for " + inputHeader + ", but got error " + err.Error())
		}

		// Json decode
		var astInner []interface{} = nil
		err = json.Unmarshal(astJson, &astInner)
		if err != nil {
			panic(err)
		}

		if astInner == nil {
			panic("Null in cache file for " + inputHeader)
		}

		// Convert it to our intermediate format
		parsed, err := parseHeader(astInner, "")
		if err != nil {
			panic(err)
		}

		parsed.Filename = inputHeader // Stash

		// AST transforms on our IL
		astTransformChildClasses(parsed) // must be first
		astTransformOptional(parsed)
		astTransformOverloads(parsed)
		astTransformConstructorOrder(parsed)
		atr.Process(parsed)

		// Update global state tracker (AFTER astTransformChildClasses)
		addKnownTypes(packageName, parsed)

		processHeaders = append(processHeaders, parsed)
	}

	//
	// PASS 2
	//

	for _, parsed := range processHeaders {

		log.Printf("Processing %q...", parsed.Filename)

		// More AST transforms on our IL
		astTransformTypedefs(parsed)
		astTransformBlocklist(parsed) // Must happen after typedef transformation

		{
			// Save the IL file for debug inspection
			jb, err := json.MarshalIndent(parsed, "", "\t")
			if err != nil {
				panic(err)
			}

			err = os.WriteFile(cacheFilePath(parsed.Filename)+".ours.json", jb, 0644)
			if err != nil {
				panic(err)
			}
		}

		// Breakout if there is nothing bindable
		if parsed.Empty() {
			log.Printf("Nothing in this header was bindable.")
			continue
		}

		// Emit 3 code files from the intermediate format
		outputName := filepath.Join(outDir, "gen_"+strings.TrimSuffix(filepath.Base(parsed.Filename), `.h`))

		// For packages where we scan multiple directories, it's possible that
		// there are filename collisions (e.g. Qt 6 has QtWidgets/qaction.h include
		// QtGui/qaction.h as a compatibility measure).
		// If the path exists, disambiguate it
		var counter = 0
		for {
			testName := outputName
			if counter > 0 {
				testName += fmt.Sprintf(".%d", counter)
			}

			if _, err := os.Stat(testName + ".go"); err != nil && os.IsNotExist(err) {
				outputName = testName // Safe
				break
			}

			counter++
		}

		goSrc, go64Src, err := emitGo(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(outputName+".go", []byte(goSrc), 0644)
		if err != nil {
			panic(err)
		}

		if len(go64Src) > 0 {
			err = os.WriteFile(outputName+"_64bit.go", []byte(go64Src), 0644)
			if err != nil {
				panic(err)
			}
		}

		bindingCppSrc, err := emitBindingCpp(parsed, filepath.Base(parsed.Filename))
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(outputName+".cpp", []byte(bindingCppSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingHSrc, err := emitBindingHeader(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(outputName+".h", []byte(bindingHSrc), 0644)
		if err != nil {
			panic(err)
		}

		// Done

	}

	log.Printf("Processing %d file(s) completed", len(includeFiles))
}

func generateClangCaches(includeFiles []string, clangBin string, cflags []string, matcher ClangMatcher) {

	var clangChan = make(chan string)
	var clangWg sync.WaitGroup
	ctx := context.Background()

	for i := 0; i < ClangSubprocessCount; i++ {
		clangWg.Add(1)
		go func() {
			defer clangWg.Done()
			log.Printf("Clang worker: starting")

			for {
				inputHeader, ok := <-clangChan
				if !ok {
					return // Done
				}

				log.Printf("Clang worker got message for file %q", inputHeader)

				// Parse the file
				// This seems to intermittently fail, so allow retrying
				astInner := mustClangExec(ctx, clangBin, inputHeader, cflags, matcher)

				// Write to cache
				jb, err := json.MarshalIndent(astInner, "", "\t")
				if err != nil {
					panic(err)
				}

				err = os.WriteFile(cacheFilePath(inputHeader), jb, 0644)
				if err != nil {
					panic(err)
				}

				astInner = nil
				jb = nil
				runtime.GC()

			}
			log.Printf("Clang worker: exiting")
		}()
	}

	for _, inputHeader := range includeFiles {

		// Check if there is a matching cache hit
		cacheFile := cacheFilePath(inputHeader)

		if _, err := os.Stat(cacheFile); err != nil && os.IsNotExist(err) {

			// Nonexistent cache file, regenerate from clang
			log.Printf("No AST cache for file %q, running clang...", filepath.Base(inputHeader))
			clangChan <- inputHeader
		}
	}

	// Done with all clang workers
	close(clangChan)
	clangWg.Wait()
}

func main() {
	clang := flag.String("clang", "clang", "Custom path to clang")
	outDir := flag.String("outdir", "../../", "Output directory for generated gen_** files")
	extraLibsDir := flag.String("extralibs", "/usr/local/src/", "Base directory to find extra library checkouts")

	flag.Parse()

	ProcessLibraries(*clang, *outDir, *extraLibsDir)
}
