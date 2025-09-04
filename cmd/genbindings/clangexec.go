package main

import (
	"fmt"
	"log"
	"os"
	"os/exec"
)

func clangExec(clangBin, inputHeader string, cflags []string) (*AstNode, error) {
	clangArgs := []string{`-x`, `c++`}
	clangArgs = append(clangArgs, cflags...)
	clangArgs = append(clangArgs, `-Xclang`, `-ast-dump=json`, `-fsyntax-only`, inputHeader)

	log.Printf("clang args: %s", clangArgs)

	cmd := exec.Command(clangBin, clangArgs...)

	stdout, err := cmd.StdoutPipe()
	if err != nil {
		return nil, fmt.Errorf("could not create stdout pipe for clang: %w", err)
	}
	cmd.Stderr = os.Stderr

	if err := cmd.Start(); err != nil {
		return nil, fmt.Errorf("could not start clang: %w", err)
	}

	ast, err := filterAst(stdout)

	if err != nil {
		return nil, fmt.Errorf("could not parse clang AST: %w", err)
	}

	if err := cmd.Wait(); err != nil {
		return nil, fmt.Errorf("could not wait for clang: %w", err)
	}

	return ast, nil
}
