package main

import (
	"bytes"
	"encoding/xml"
	"io/ioutil"
	"testing"
)

func TestFixtureMarshalRoundtrip(t *testing.T) {

	testFixture := func(fixtureFile string) {
		in, err := ioutil.ReadFile(fixtureFile)
		if err != nil {
			t.Fatalf("ReadFile: %v", err)
		}

		in = bytes.Replace(in, []byte("\r"), []byte{}, -1) // Replace CRLF to LF

		var parsed UiFile
		err = xml.Unmarshal(in, &parsed)
		if err != nil {
			t.Fatalf("Unmarshal: %v", err)
		}

		ret, err := xml.MarshalIndent(parsed, "", " ")
		if err != nil {
			t.Fatalf("Marshal: %v", err)
		}

		// Make some minor changes to our generated file to more closely match
		// Qt Designer's generated ui file
		// - Prepend XML header
		// - Convert to self-closing tags
		ret = []byte(xml.Header + xmlConvertToSelfClosing(string(ret)) + "\n")

		// Verify that the marshalled result matches the original identically,
		// i.e. we did not miss any properties in our XML type definitions
		if string(in) != string(ret) {
			t.Errorf("Mismatch")
			t.Log(lineDiff(string(in), string(ret)))
		}

	}

	testFixture("testdata/fixture1.ui")
}
