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
	"strings"
	"sync"
	"time"
)

const (
	ClangMaxRetries = 5
	ClangRetryDelay = 3 * time.Second
)

type ClangMatcher func(astNodeFilename string) bool

func ClangMatchSameHeaderDefinitionOnly(astNodeFilename string) bool {
	return astNodeFilename == ""
}

type clangMatchUnderPath struct {
	basePath string
}

func (c *clangMatchUnderPath) Match(astNodeFilename string) bool {
	if astNodeFilename == "" {
		return true
	}
	return strings.HasPrefix(astNodeFilename, c.basePath)
}

//

func clangExec(ctx context.Context, clangBin, inputHeader string, cflags []string, matcher ClangMatcher) ([]interface{}, error) {

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
		inner, innerErr = clangStripUpToFile(pr, matcher)
	}()

	err = cmd.Wait()
	if err != nil {
		return nil, fmt.Errorf("Command: %w", err)
	}

	wg.Wait()

	return inner, innerErr
}

func mustClangExec(ctx context.Context, clangBin, inputHeader string, cflags []string, matcher ClangMatcher) []interface{} {

	for i := 0; i < ClangMaxRetries; i++ {
		astInner, err := clangExec(ctx, clangBin, inputHeader, cflags, matcher)
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
func clangStripUpToFile(stdout io.Reader, matcher ClangMatcher) ([]interface{}, error) {

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

		// Check where this AST node came from, if it was directly written
		// in this header or if it as part of an #include

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

		if matcher(match_filename) {
			// Keep
			ret = append(ret, entry)
		}

		// Otherwise, discard this AST node, it comes from some imported file
		// that we will likely scan separately
	}

	return ret, nil
}
