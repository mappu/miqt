package main

import (
	"bytes"
	"encoding/xml"
	"io/ioutil"
	"os"
	"path/filepath"
	"strings"
	"testing"
)

func TestFixtureMarshalRoundtrip(t *testing.T) {

	testFixture := func(fixtureFile string, qt6 bool) {
		in, err := ioutil.ReadFile(fixtureFile)
		if err != nil {
			t.Fatalf("ReadFile(%q): %v", fixtureFile, err)
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
			t.Errorf("Mismatch(%q)", fixtureFile)
			t.Log(lineDiff(string(in), string(ret)))
		}

		if strings.HasPrefix(fixtureFile, `..`) {
			return
		}

		// Generate Go code
		goSrc, err := generate("test_package_name", "go_generate_args", parsed, qt6)
		if err != nil {
			t.Fatalf("Generate: %v", err)
		}

		fixtureExpect := fixtureFile + ".go.expected"
		expectGoSrc, err := os.ReadFile(fixtureExpect)
		if err != nil {
			if os.IsNotExist(err) {
				t.Errorf("WARNING: %q does not exist, creating for the first time", fixtureExpect)
				_ = os.WriteFile(fixtureExpect, goSrc, 0644)
			} else {
				t.Errorf("ReadFile(%q): %v", fixtureExpect, err)
			}
		} else {
			if string(expectGoSrc) != string(goSrc) {
				t.Errorf("Mismatch(%q)", fixtureExpect)
				t.Log(lineDiff(string(expectGoSrc), string(goSrc)))
			}

		}

	}

	testFixture("../../examples/uidesigner/design.ui", false)

	ents, err := os.ReadDir("testdata")
	if err != nil {
		t.Fatal(err)
	}

	for _, ent := range ents {
		if !strings.HasSuffix(ent.Name(), ".ui") {
			continue
		}
		testFixture(filepath.Join("testdata", ent.Name()), strings.HasPrefix(ent.Name(), "qt6"))
	}

}
