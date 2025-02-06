// miqt-rcc compiles a Qt resource XML file (*.qrc) to a binary resource file and
// creates a Go stub to load it.
package main

import (
	"flag"
	"fmt"
	"go/format"
	"io/ioutil"
	"os"
	"os/exec"
	"strings"
)

func main() {

	// Parse arguments

	input := flag.String("Input", "", "Path to .qrc input file")
	outputGo := flag.String("OutputGo", "", "(Optional) Path to .go output file. If omitted, interred from the input file path")
	outputRcc := flag.String("OutputRcc", "", "(Optional) Path to .rcc output file. If omitted, inferred from the output Go file path")
	packageName := flag.String("Package", "main", "Package to use in generated Go files")
	variableName := flag.String("VariableName", "_resourceRcc", "Temporary global variable name for loading embedded data")
	useQt6 := flag.Bool("Qt6", false, "Use Qt 6 instead of Qt 5")
	flag.Parse()

	// Check if input file exists

	if _, err := os.Stat(*input); os.IsNotExist(err) {
		fmt.Fprintf(os.Stderr, "Input file '%s' not found\n", *input)
		os.Exit(1)
	}

	// Fill in default output names, if not specified

	if *outputGo == "" {
		*outputGo = strings.TrimSuffix(*input, `.qrc`) + `.go`
	}
	if *outputRcc == "" {
		// Base this on the outputGo filename, not the input filename
		*outputRcc = strings.TrimSuffix(*outputGo, `.go`) + `.rcc`
	}

	// Compile qrc to binary resource file

	rccCmd := exec.Command(`rcc`, `--binary`, `-o`, *outputRcc, *input)
	rccCmd.Stderr = os.Stderr
	rccCmd.Stdout = os.Stdout
	err := rccCmd.Run()
	if err != nil {
		fmt.Fprintf(os.Stderr, "rcc: %s\n", err.Error())
		os.Exit(1)
	}

	//  Create Go file that loads the resource

	miqtImport := `"github.com/mappu/miqt/qt"`
	if *useQt6 {
		miqtImport = `qt "github.com/mappu/miqt/qt6"`
	}

	goSrcData := `
package ` + *packageName + `

//go:generate miqt-rcc "` + strings.Join(os.Args[1:], `" "`) + `"

import (
	"embed"
	
	` + miqtImport + `
)

//go:embed ` + *outputRcc + `
var ` + *variableName + ` []byte

func init() {
	_ = embed.FS{}
	qt.QResource_RegisterResourceWithRccData(& ` + *variableName + `[0])
}

`

	outputData, err := format.Source([]byte(goSrcData))
	if err != nil {
		panic(err)
	}

	err = ioutil.WriteFile(*outputGo, outputData, 0644)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Writing to '%s': %s\n", *outputGo, err.Error())
		os.Exit(1)
	}

	fmt.Println("RCC OK")
	os.Exit(0)
}
