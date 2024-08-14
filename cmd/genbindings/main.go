package main

import (
	"context"
	"encoding/json"
	"flag"
	"io/ioutil"
	"log"
	"path/filepath"
	"strings"
)

func main() {
	ctx := context.Background()

	clang := flag.String("clang", "clang", "Custom path to clang")
	cflags := flag.String("cflags", `-DQT_WIDGETS_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtCore -DQT_GUI_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtGui -DQT_CORE_LIB`, "Cflags to pass to clang (e.g. `pkg-config --cflags Qt5Widgets`)")
	outDir := flag.String("outdir", "../../qt", "Output directory for generated gen_** files")
	dumpIL := flag.String("dumpil", "", "(Optional) File to dump intermediate IL JSON")

	flag.Parse()

	includeFiles := []string{
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qwidget.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qabstractbutton.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qpushbutton.h",
	}

	for _, inputHeader := range includeFiles {

		// If we have a cached clang AST, use that instead
		cacheFile := filepath.Join("cachedir", strings.Replace(inputHeader, `/`, `__`, -1)+".json")
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

		if *dumpIL != "" {
			jb, err := json.MarshalIndent(parsed, "", "\t")
			if err != nil {
				panic(err)
			}

			err = ioutil.WriteFile(*dumpIL, jb, 0644)
			if err != nil {
				panic(err)
			}
		}

		// AST transforms on our IL
		astTransformOptional(parsed)
		astTransformOverloads(parsed)

		// Emit 3 code files from the intermediate format
		outputName := filepath.Join(*outDir, "gen_"+strings.TrimSuffix(filepath.Base(inputHeader), `.h`))

		goSrc, err := emitGo(parsed, filepath.Base(inputHeader))
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(outputName+".go", []byte(goSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingCppSrc, err := emitBindingCpp(parsed, filepath.Base(inputHeader))
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(outputName+".cpp", []byte(bindingCppSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingHSrc, err := emitBindingHeader(parsed, filepath.Base(inputHeader))
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(outputName+".h", []byte(bindingHSrc), 0644)
		if err != nil {
			panic(err)
		}

		// Done

		log.Printf("Processing %q completed", inputHeader)

	}

	log.Printf("Processing %d file(s) completed", len(includeFiles))
}
