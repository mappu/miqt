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
	"path/filepath"
	"strconv"
	"strings"
)

const (
	DefaultPackageName  string = "main"
	DefaultVariableName string = "_resourceRcc"
	DefaultIsQt6        bool   = false
	DefaultRccBinary    string = "rcc"
)

func RccExec() error {

	// Parse arguments

	input := flag.String("Input", "", "Path to .qrc input file")
	outputGo := flag.String("OutputGo", "", "(Optional) Path to .go output file. If omitted, interred from the input file path")
	outputRcc := flag.String("OutputRcc", "", "(Optional) Path to .rcc output file. If omitted, inferred from the output Go file path")
	packageName := flag.String("Package", DefaultPackageName, "Package to use in generated Go files")
	variableName := flag.String("VariableName", DefaultVariableName, "Temporary global variable name for loading embedded data")
	useQt6 := flag.Bool("Qt6", DefaultIsQt6, "Use Qt 6 instead of Qt 5")
	rccBinary := flag.String("RccBinary", DefaultRccBinary, "(Optional) Custom path to the Qt rcc program")
	flag.Parse()

	// Check if input file exists

	if _, err := os.Stat(*input); os.IsNotExist(err) {
		return fmt.Errorf("Input file '%s' not found\n", *input)
	}

	// Fill in default output names, if not specified

	if *outputGo == "" {
		*outputGo = strings.TrimSuffix(*input, `.qrc`) + `.go`
	}
	if *outputRcc == "" {
		// Base this on the outputGo filename, not the input filename
		*outputRcc = strings.TrimSuffix(*outputGo, `.go`) + `.rcc`
	}

	// The rcc output path must be relative to the output go file path

	embedPath, err := filepath.Rel(filepath.Dir(*outputGo), *outputRcc)
	if err != nil {
		return err
	}

	// Compile qrc to binary resource file

	rccCmd := exec.Command(*rccBinary, `--binary`, `-o`, *outputRcc, *input)
	rccCmd.Stderr = os.Stderr
	rccCmd.Stdout = os.Stdout
	err = rccCmd.Run()
	if err != nil {
		return err
	}

	// Figure out import statement

	miqtImport := `"github.com/mappu/miqt/qt"`
	if *useQt6 {
		miqtImport = `qt "github.com/mappu/miqt/qt6"`
	}

	// Figure out regeneration command

	generate := `miqt-rcc` +
		` -Input ` + strconv.Quote(*input) +
		` -OutputGo ` + strconv.Quote(filepath.Base(*outputGo)) +
		` -OutputRcc ` + strconv.Quote(embedPath)
	if *packageName != DefaultPackageName {
		generate += ` -Package ` + strconv.Quote(*packageName)
	}
	if *variableName != DefaultVariableName {
		generate += ` -Variable ` + strconv.Quote(*variableName)
	}
	if *useQt6 != DefaultIsQt6 {
		generate += ` -Qt6`
	}
	if *rccBinary != DefaultRccBinary {
		generate += ` -RccBinary ` + strconv.Quote(*rccBinary)
	}

	// Create Go file that loads the resource

	goSrcData := `
package ` + *packageName + `

//go:generate ` + generate + `

import (
	"embed"
	
	` + miqtImport + `
)

//go:embed ` + embedPath + `
var ` + *variableName + ` []byte

func init() {
	_ = embed.FS{}
	qt.QResource_RegisterResourceWithRccData(& ` + *variableName + `[0])
}

`

	outputData, err := format.Source([]byte(goSrcData))
	if err != nil {
		return err
	}

	err = ioutil.WriteFile(*outputGo, outputData, 0644)
	if err != nil {
		return fmt.Errorf("Writing to '%s': %w", *outputGo, err)
	}

	return nil
}

func main() {
	err := RccExec()
	if err != nil {
		fmt.Fprintf(os.Stderr, "rcc: %s\n", err.Error())
		os.Exit(1)
	}

	fmt.Println("RCC OK")
	os.Exit(0)
}
