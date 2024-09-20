package main

import (
	"encoding/xml"
	"fmt"
	"io/ioutil"
)

func main() {
	in, err := ioutil.ReadFile(`test.ui`)
	if err != nil {
		panic(err)
	}

	var parsed UiFile
	err = xml.Unmarshal(in, &parsed)
	if err != nil {
		panic(err)
	}

	ret, err := xml.MarshalIndent(parsed, "", "  ")
	if err != nil {
		panic(err)
	}

	fmt.Println(string(ret))

	gosrc, err := generate("main", parsed)
	if err != nil {
		panic(err)
	}

	fmt.Println(string(gosrc))
}
