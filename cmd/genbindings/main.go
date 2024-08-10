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
	inputHeader := flag.String("inputHeader", `/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qpushbutton.h`, "Input file")
	cflags := flag.String("cflags", `-DQT_WIDGETS_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtCore -DQT_GUI_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtGui -DQT_CORE_LIB`, "Cflags to pass to clang (e.g. `pkg-config --cflags Qt5Widgets`)")
	outDir := flag.String("outdir", "../../qt", "Output directory for generated gen_** files")
	dumpClang := flag.String("dumpclang", "", "(Optional) File to dump output clang JSON")
	dumpIL := flag.String("dumpil", "", "(Optional) File to dump intermediate IL JSON")

	flag.Parse()

	// Parse the file
	astInner, err := clangExec(ctx, *clang, *inputHeader, strings.Fields(*cflags))
	if err != nil {
		panic(err)
	}

	if *dumpClang != "" {
		jb, err := json.MarshalIndent(astInner, "", "\t")
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(*dumpClang, jb, 0644)
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

	// Emit 3 code files from the intermediate format
	outputName := filepath.Join(*outDir, "gen_"+strings.TrimSuffix(filepath.Base(*inputHeader), `.h`))

	goSrc, err := emitGo(parsed, filepath.Base(*inputHeader))
	if err != nil {
		panic(err)
	}

	err = ioutil.WriteFile(outputName+".go", []byte(goSrc), 0644)
	if err != nil {
		panic(err)
	}

	bindingCppSrc, err := emitBindingCpp(parsed, filepath.Base(*inputHeader))
	if err != nil {
		panic(err)
	}

	err = ioutil.WriteFile(outputName+".cpp", []byte(bindingCppSrc), 0644)
	if err != nil {
		panic(err)
	}

	bindingHSrc, err := emitBindingHeader(parsed, filepath.Base(*inputHeader))
	if err != nil {
		panic(err)
	}

	err = ioutil.WriteFile(outputName+".h", []byte(bindingHSrc), 0644)
	if err != nil {
		panic(err)
	}

	// Done

	log.Printf("Processing %q completed", *inputHeader)
}
