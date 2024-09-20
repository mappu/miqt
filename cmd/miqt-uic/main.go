package main

import (
	"encoding/xml"
	"flag"
	"fmt"
	"io/ioutil"
	"os"
	"strings"
)

func main() {
	inFile := flag.String("InFile", "", "Input .ui file")
	outFile := flag.String("OutFile", "-", "Output .go file, or - for stdout")
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

	gosrc, err := generate(*packageName, strings.Join(os.Args[1:], " "), parsed)
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
