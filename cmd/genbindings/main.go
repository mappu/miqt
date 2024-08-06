package main

import (
	"context"
	"flag"
	"fmt"
	"log"
	"strings"
)

func main() {
	ctx := context.Background()

	clang := flag.String("clang", "clang", "Custom path to clang")
	inputHeader := flag.String("inputHeader", `/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qpushbutton.h`, "Input file")
	cflags := flag.String("cflags", `-DQT_WIDGETS_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtCore -DQT_GUI_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtGui -DQT_CORE_LIB`, "Cflags to pass to clang (e.g. `pkg-config --cflags Qt5Widgets`)")

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

	// Emit Go code from the intermediate format
	goSrc, err := emitGo(parsed)
	if err != nil {
		panic(err)
	}

	fmt.Println(goSrc)

	log.Printf("Processing %q completed", inputHeader)
}
