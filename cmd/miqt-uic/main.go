package main

import (
	"encoding/xml"
	"flag"
	"fmt"
	"io/ioutil"
	"os"
	"strings"
)

const (
	DefaultIsQt6 = false
)

func main() {
	inFile := flag.String("InFile", "", "Input .ui file")
	outFile := flag.String("OutFile", "-", "Output .go file, or - for stdout")
	useQt6 := flag.Bool("Qt6", DefaultIsQt6, "Use Qt 6 instead of Qt 5")
	packageName := flag.String("Package", "main", "Custom package name")
	flag.Parse()

	if *inFile == "" {
		flag.Usage()
		os.Exit(1)
	}

	inXml, err := ioutil.ReadFile(*inFile)
	if err != nil {
		panic(err)
	}

	var parsed UiFile
	err = xml.Unmarshal(inXml, &parsed)
	if err != nil {
		panic(err)
	}

	gosrc, err := generate(*packageName, strings.Join(os.Args[1:], " "), parsed, *useQt6)
	if err != nil {
		panic(err)
	}

	if *outFile == "-" {
		fmt.Println(string(gosrc))

	} else {

		err = ioutil.WriteFile(*outFile, gosrc, 0644)
		if err != nil {
			panic(err)
		}
	}
}
