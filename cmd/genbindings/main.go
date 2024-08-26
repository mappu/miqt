package main

import (
	"context"
	"encoding/json"
	"flag"
	"io/ioutil"
	"log"
	"os"
	"path/filepath"
	"strings"
)

func cacheFilePath(inputHeader string) string {
	return filepath.Join("cachedir", strings.Replace(inputHeader, `/`, `__`, -1)+".json")
}

func main() {
	ctx := context.Background()

	clang := flag.String("clang", "clang", "Custom path to clang")
	cflags := flag.String("cflags", `-DQT_WIDGETS_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtCore -DQT_GUI_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtGui -DQT_CORE_LIB`, "Cflags to pass to clang (e.g. `pkg-config --cflags Qt5Widgets`)")
	outDir := flag.String("outdir", "../../qt", "Output directory for generated gen_** files")

	flag.Parse()

	var includeFiles []string

	for _, srcDir := range []string{
		"/usr/include/x86_64-linux-gnu/qt5/QtCore",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets",
	} {
		content, err := os.ReadDir(srcDir)
		if err != nil {
			panic(err)
		}

		for _, includeFile := range content {
			if includeFile.IsDir() {
				continue
			}
			if !strings.HasSuffix(includeFile.Name(), `.h`) {
				continue
			}
			fullPath := filepath.Join(srcDir, includeFile.Name())
			if !AllowHeader(fullPath) {
				continue
			}
			includeFiles = append(includeFiles, fullPath)
		}
	}

	log.Printf("Found %d header files to process.", len(includeFiles))

	{
		log.Printf("Cleaning up output directory %q...", *outDir)

		existing, err := os.ReadDir(*outDir)
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
			err := os.Remove(filepath.Join(*outDir, e.Name()))
			if err != nil {
				log.Printf("WARNING: Failed to remove existing file %q", e.Name())
				continue
			}

			cleaned++
		}

		log.Printf("Removed %d file(s).", cleaned)
	}

	var processHeaders []*CppParsedHeader

	for _, inputHeader := range includeFiles {

		// If we have a cached clang AST, use that instead
		cacheFile := cacheFilePath(inputHeader)
		astJson, err := ioutil.ReadFile(cacheFile)
		var astInner []interface{} = nil
		if err != nil {

			// Nonexistent cache file, regenerate from clang
			log.Printf("No AST cache for file %q, running clang...", filepath.Base(inputHeader))

			// Parse the file
			astInner, err = clangExec(ctx, *clang, inputHeader, strings.Fields(*cflags))
			if err != nil {
				panic(err)
			}

			// Write to cache
			jb, err := json.MarshalIndent(astInner, "", "\t")
			if err != nil {
				panic(err)
			}

			err = ioutil.WriteFile(cacheFile, jb, 0644)
			if err != nil {
				panic(err)
			}

		} else {
			log.Printf("Reused cache AST for file %q", filepath.Base(inputHeader))

			// Json decode
			err = json.Unmarshal(astJson, &astInner)
			if err != nil {
				panic(err)
			}

		}

		// Convert it to our intermediate format
		parsed, err := parseHeader(astInner)
		if err != nil {
			panic(err)
		}

		parsed.Filename = inputHeader // Stash

		// AST transforms on our IL
		astTransformChildClasses(parsed) // must be first
		astTransformOptional(parsed)
		astTransformOverloads(parsed)

		processHeaders = append(processHeaders, parsed)
	}

	//
	// PASS 2
	//

	for _, parsed := range processHeaders {

		log.Printf("Processing %q...", parsed.Filename)
		{
			// Save the IL file for debug inspection
			jb, err := json.MarshalIndent(parsed, "", "\t")
			if err != nil {
				panic(err)
			}

			err = ioutil.WriteFile(cacheFilePath(parsed.Filename)+".ours.json", jb, 0644)
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
		outputName := filepath.Join(*outDir, "gen_"+strings.TrimSuffix(filepath.Base(parsed.Filename), `.h`))

		goSrc, err := emitGo(parsed, filepath.Base(parsed.Filename))
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(outputName+".go", []byte(goSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingCppSrc, err := emitBindingCpp(parsed, filepath.Base(parsed.Filename))
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(outputName+".cpp", []byte(bindingCppSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingHSrc, err := emitBindingHeader(parsed, filepath.Base(parsed.Filename))
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(outputName+".h", []byte(bindingHSrc), 0644)
		if err != nil {
			panic(err)
		}

		// Done

	}

	log.Printf("Processing %d file(s) completed", len(includeFiles))
}
