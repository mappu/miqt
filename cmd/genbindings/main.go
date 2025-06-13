package main

import (
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
	MaxClangSubprocessCount = 16
	BaseModule              = "github.com/mappu/miqt"
)

func cacheFileRoot(inputHeader string) string {
	return filepath.Join("cachedir", strings.Replace(inputHeader, `/`, `__`, -1))
}

func parsedPath(inputHeader string) string {
	return cacheFileRoot(inputHeader) + ".ours.json"
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
		log.Printf("pkg-config(%q): %v", packageName, string(err.(*exec.ExitError).Stderr))
		panic(err)
	}

	return string(stdout)
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func parseHeaders(includeFiles []string, clangBin string, cflags []string, matcher HeaderMatcher) []*CppParsedHeader {
	result := make([]*CppParsedHeader, len(includeFiles))

	// Run clang / parsing in parallel but not too parallel
	var wg sync.WaitGroup
	ch := make(chan struct{}, min(runtime.NumCPU(), MaxClangSubprocessCount))

	for i, includeFile := range includeFiles {
		ch <- struct{}{}
		wg.Add(1)

		go func(i int, includeFile string) {
			defer func() {
				wg.Done()
				<-ch
			}()

			result[i] = &CppParsedHeader{Filename: includeFile}
			ast := getFilteredAst(includeFile, clangBin, cflags)
			// Convert it to our intermediate format
			parseHeader(ast, "", result[i], matcher)
		}(i, includeFile)
	}
	wg.Wait()
	return result
}

func generate(packageName string, srcDirs []string, allowHeaderFn func(string) bool, clangBin, cflagsCombined, outDir string, matcher HeaderMatcher) {

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

	atr := astTransformRedundant{
		preserve: make(map[string]*CppEnum),
	}

	//
	// PASS 1 (Parse headers and generate IL)
	//

	processHeaders := parseHeaders(includeFiles, clangBin, cflags, matcher)

	for _, parsed := range processHeaders {
		// AST transforms on our IL
		astTransformChildClasses(parsed)             // must be first
		astTransformApplyQuirks(packageName, parsed) // must be before optional/overload expansion
		astTransformOptional(parsed)
		astTransformOverloads(parsed)
		astTransformConstructorOrder(parsed)
		atr.Process(parsed)

		// Update global state tracker (AFTER astTransformChildClasses)
		addKnownTypes(packageName, parsed)
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
			file, err := os.Create(parsedPath(parsed.Filename))
			if err != nil {
				panic(err)
			}
			defer file.Close()
			enc := json.NewEncoder(file)
			enc.SetIndent("", "\t")
			enc.Encode(parsed)
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

func main() {
	// data/time flags make logs hard to compare across runs
	log.SetFlags(log.Flags() &^ (log.Ldate | log.Ltime))
	clang := flag.String("clang", "clang", "Custom path to clang")
	outDir := flag.String("outdir", "../../", "Output directory for generated gen_** files")
	extraLibsDir := flag.String("extralibs", "/usr/local/src/", "Base directory to find extra library checkouts")

	flag.Parse()

	ProcessLibraries(*clang, *outDir, *extraLibsDir)
}
