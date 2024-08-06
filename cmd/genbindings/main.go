package main

import (
	"context"
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
	outDir := flag.String("outdir", "..", "Output directory for generated gen_** files")

	flag.Parse()

	// Parse the file
	astInner, err := clangExec(ctx, *clang, *inputHeader, strings.Fields(*cflags))
	if err != nil {
		panic(err)
	}

	// Convert it to our intermediate format
	parsed, err := parseHeader(astInner)
	if err != nil {
		panic(err)
	}

	// Emit 3 code files from the intermediate format
	outputName := filepath.Join(*outDir, "gen_"+strings.TrimSuffix(filepath.Base(*inputHeader), `.h`))

	goSrc, err := emitGo(parsed)
	if err != nil {
		panic(err)
	}

	err = ioutil.WriteFile(outputName+".go", []byte(goSrc), 0644)
	if err != nil {
		panic(err)
	}

	bindingCppSrc, err := emitBindingCpp(parsed)
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
