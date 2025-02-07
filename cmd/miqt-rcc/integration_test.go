package main

import (
	"io/ioutil"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"strings"
	"testing"
)

func TestRcc(t *testing.T) {

	// Temporary directory

	td := t.TempDir() // The go test package auto cleans this up

	// Simulate working out of a Go module that has this miqt checkout as a
	// local dependency

	RccDir, err := os.Getwd()
	if err != nil {
		t.Fatal(err)
	}

	fakeGoMod := `module miqt-rcc-integration-test

go 1.19

require (
	github.com/mappu/miqt v1.0.0
)

replace github.com/mappu/miqt => ` + filepath.Clean(RccDir+`/../../`) + `
`
	err = ioutil.WriteFile(filepath.Join(td, `go.mod`), []byte(fakeGoMod), 0644)
	if err != nil {
		t.Fatal(err)
	}

	// Add some test content

	err = ioutil.WriteFile(filepath.Join(td, "sample.data"), []byte("the quick brown fox jumps over the lazy dog"), 0644)
	if err != nil {
		t.Fatal(err)
	}

	// Make a .qrc that includes this file

	err = ioutil.WriteFile(filepath.Join(td, "resources.qrc"), []byte(
		`<RCC>
    <qresource prefix="/">
        <file>sample.data</file>
    </qresource>
</RCC>`), 0644)
	if err != nil {
		t.Fatal(err)
	}

	// Build miqt-rcc and add it to our fake tools path

	toolsDir := t.TempDir()
	newPathEnv := "PATH=" + toolsDir + `:` + os.Getenv(`PATH`)
	if runtime.GOOS == "windows" { // uses a different separator
		newPathEnv = "PATH=" + toolsDir + `;` + os.Getenv(`PATH`)
	}

	t.Run("Compile miqt-rcc", func(t *testing.T) {

		buildCmd := exec.Command(`go`, `build`, `-o`, filepath.Join(toolsDir, `miqt-rcc`))
		buildCmd.Stderr = os.Stderr
		buildCmd.Stdout = os.Stdout
		err = buildCmd.Run()
		if err != nil {
			t.Fatal(err)
		}

	})

	t.Run("Initial build", func(t *testing.T) {

		// Run miqt-rcc

		rccCmd := exec.Command(filepath.Join(toolsDir, `miqt-rcc`), `-Input`, filepath.Join(td, `resources.qrc`), `-OutputGo`, filepath.Join(td, `resources.go`))
		rccCmd.Stderr = os.Stderr
		err = rccCmd.Run()
		if err != nil {
			t.Fatal(err)
		}

		// Verify that files are created

		_, err = os.Stat(filepath.Join(td, `resources.rcc`))
		if err != nil {
			t.Errorf("resources.rcc should exist: %v", err)
		}

		goResult, err := ioutil.ReadFile(filepath.Join(td, `resources.go`))
		if err != nil {
			t.Fatal(err)
		}

		// Verify the go:embed line accurately used a relative path

		if !strings.Contains(string(goResult), "//go:embed resources.rcc\n") {
			t.Fatal("missing expected embed line")
		}

		// Verify the go:generate line matches our expectation

		expect := `//go:generate miqt-rcc -Input "` + filepath.Join(td, `resources.qrc`) + `" -OutputGo "resources.go" -OutputRcc "resources.rcc"`
		if !strings.Contains(string(goResult), expect) {
			t.Fatal("missing expected generate line")
		}

	})

	t.Run("Go generate", func(t *testing.T) {

		// Check timestamp before generation

		fiBefore, err := os.Stat(filepath.Join(td, `resources.go`))
		if err != nil {
			t.Fatal(err)
		}

		// Verify that `go generate` works

		regenCmd := exec.Command(`go`, `generate`)
		regenCmd.Env = []string{newPathEnv}
		regenCmd.Dir = td
		regenCmd.Stderr = os.Stderr
		err = regenCmd.Run()
		if err != nil {
			t.Fatal(err)
		}

		goResult, err := ioutil.ReadFile(filepath.Join(td, `resources.go`))
		if err != nil {
			t.Fatal(err)
		}

		// Verify that the resources.go file was actually replaced

		fiAfter, err := os.Stat(filepath.Join(td, `resources.go`))
		if err != nil {
			t.Fatal(err)
		}

		if !fiAfter.ModTime().After(fiBefore.ModTime()) {
			t.Errorf("expected mtime %v to be after original mtime %v", fiAfter.ModTime(), fiBefore.ModTime())
		}

		// Verify the go:embed line accurately used a relative path

		if !strings.Contains(string(goResult), "//go:embed resources.rcc\n") {
			t.Fatal("missing expected embed line")
		}

		// Verify the go:generate line matches our expectation

		expect := `//go:generate miqt-rcc -Input "` + filepath.Join(td, `resources.qrc`) + `" -OutputGo "resources.go" -OutputRcc "resources.rcc"`
		if !strings.Contains(string(goResult), expect) {
			t.Fatal("missing expected generate line")
		}
	})
}
