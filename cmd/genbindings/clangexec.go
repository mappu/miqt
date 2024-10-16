package main

import (
	"context"
	"encoding/json"
	"errors"
	"fmt"
	"io"
	"log"
	"os"
	"os/exec"
	"sync"
	"time"
)

const (
	ClangMaxRetries = 5
	ClangRetryDelay = 3 * time.Second
)

func clangExec(ctx context.Context, clangBin, inputHeader string, cflags []string) ([]interface{}, error) {

	clangArgs := []string{`-x`, `c++`}
	clangArgs = append(clangArgs, cflags...)
	clangArgs = append(clangArgs, `-Xclang`, `-ast-dump=json`, `-fsyntax-only`, inputHeader)

	cmd := exec.CommandContext(ctx, clangBin, clangArgs...)
	pr, err := cmd.StdoutPipe()
	if err != nil {
		return nil, fmt.Errorf("StdoutPipe: %w", err)
	}

	cmd.Stderr = os.Stderr

	err = cmd.Start()
	if err != nil {
		return nil, fmt.Errorf("Start: %w", err)
	}

	var wg sync.WaitGroup
	var inner []interface{}
	var innerErr error

	wg.Add(1)
	go func() {
		defer wg.Done()
		inner, innerErr = clangStripUpToFile(pr, inputHeader)
	}()

	err = cmd.Wait()
	if err != nil {
		return nil, fmt.Errorf("Command: %w", err)
	}

	wg.Wait()

	return inner, innerErr
}

func mustClangExec(ctx context.Context, clangBin, inputHeader string, cflags []string) []interface{} {

	for i := 0; i < ClangMaxRetries; i++ {
		astInner, err := clangExec(ctx, clangBin, inputHeader, cflags)
		if err != nil {
			// Log and continue with next retry
			log.Printf("WARNING: Clang execution failed: %v", err)
			time.Sleep(ClangRetryDelay)
			log.Printf("Retrying...")
			continue
		}

		// Success
		return astInner
	}

	// Failed 5x
	// Panic
	panic("Clang failed 5x parsing file " + inputHeader)
}

// clangStripUpToFile strips all AST nodes from the clang output until we find
// one that really originated in the source file.
// This cleans out everything in the translation unit that came from an
// #included file.
// @ref https://stackoverflow.com/a/71128654
func clangStripUpToFile(stdout io.Reader, inputFilePath string) ([]interface{}, error) {

	var obj = map[string]interface{}{}
	err := json.NewDecoder(stdout).Decode(&obj)
	if err != nil {
		return nil, fmt.Errorf("json.Decode: %v", err)
	}

	inner, ok := obj["inner"].([]interface{})
	if !ok {
		return nil, errors.New("no inner")
	}

	// This can't be done by matching the first position only, since it's possible
	// that there are more #include<>s further down the file

	ret := make([]interface{}, 0, len(inner))

	for _, entry := range inner {

		entry, ok := entry.(map[string]interface{})
		if !ok {
			return nil, errors.New("entry is not a map")
		}

		if _, ok := entry["isImplicit"]; ok {
			// Don't keep
			continue
		}

		var match_filename = ""

		if loc, ok := entry["loc"].(map[string]interface{}); ok {
			if includedFrom, ok := loc["includedFrom"].(map[string]interface{}); ok {
				if filename, ok := includedFrom["file"].(string); ok {
					match_filename = filename
				}
			}

			if match_filename == "" {
				if expansionloc, ok := loc["expansionLoc"].(map[string]interface{}); ok {
					if filename, ok := expansionloc["file"].(string); ok {
						match_filename = filename

					} else if includedFrom, ok := expansionloc["includedFrom"].(map[string]interface{}); ok {
						if filename, ok := includedFrom["file"].(string); ok {
							match_filename = filename
						}
					}
				}
			}
		} else {
			return nil, errors.New("no loc")
		}

		// log.Printf("# name=%v kind=%v filename=%q\n", entry["name"], entry["kind"], match_filename)

		if match_filename == "" {
			// Keep
			ret = append(ret, entry)

		} else if match_filename != inputFilePath {
			// Skip this
		} else {
			// Keep this
			// ret = append(ret, entry)
		}
	}

	return ret, nil
}
