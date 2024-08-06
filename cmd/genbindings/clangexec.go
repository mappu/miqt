package main

import (
	"context"
	"encoding/json"
	"errors"
	"fmt"
	"io"
	"log"
	"os/exec"
	"sync"
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

	err = cmd.Start()
	if err != nil {
		return nil, fmt.Errorf("Start: %w", err)
	}

	var wg sync.WaitGroup
	var inner []interface{}

	wg.Add(1)
	go func() {
		defer wg.Done()

		inner__, err := clangStripUpToFile(pr, inputHeader)
		if err != nil {
			panic(err)
		}

		inner = inner__
	}()

	err = cmd.Wait()
	if err != nil {
		panic(err)
	}

	wg.Wait()

	return inner, nil
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
		return nil, err
	}

	inner, ok := obj["inner"].([]interface{})
	if !ok {
		return nil, errors.New("no inner")
	}

	var markerPosition int = -1

	for i, entry := range inner {

		entry, ok := entry.(map[string]interface{})
		if !ok {
			return nil, errors.New("entry is not a map")
		}

		if _, ok := entry["isImplicit"]; ok {
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
					}
				}
			}
		} else {
			return nil, errors.New("no loc")
		}

		if match_filename == inputFilePath {
			// Found the marker position
			markerPosition = i
			break
		}
	}

	log.Printf("found first instance of same file at inner entry %d/%d", markerPosition, len(inner))

	inner = inner[markerPosition:]

	return inner, nil
}
