package main

import (
	"errors"
	"path/filepath"
	"runtime"
	"strings"
)

// highestCommonParent finds the oldest ancestor of a set of paths.
// If there is no common ancestor, returns / on Linux or an error on Windows.
func highestCommonParent(paths []string) (string, error) {
	if len(paths) == 0 {
		return "", errors.New("no input")
	}

	parts := strings.Split(paths[0], string(filepath.Separator))

	for _, check := range paths {
		checkn := strings.Split(check, string(filepath.Separator))

		// If this check path is shorter, the common part must also shrink
		if len(checkn) < len(parts) {
			parts = parts[0:len(checkn)]
		}

		for i, checkpart := range checkn[0:len(parts)] { // len(parts) is now <= len(checkn) so this is safe
			if parts[i] == checkpart {
				continue
			}

			// Divergence from i: onwards
			parts = parts[0:i]
			break
		}

		// Early failure case
		if len(parts) == 0 {
			break
		}

	}

	isEmpty := len(parts) == 0 || (len(parts) == 1 && parts[0] == "")

	if isEmpty {
		if runtime.GOOS == "windows" {
			return "", errors.New("Selected paths have no common ancestor")
		}
		return `/`, nil
	}

	return strings.Join(parts, string(filepath.Separator)), nil
}
