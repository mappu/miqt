package main

import (
	"strings"
)

func matchAllParts(needle, haystack string) bool {
	if haystack == "" {
		panic("matchAllParts: unexpected empty-string input")
	}

	parts := strings.Split(needle, `-`)

	for _, part := range parts {
		if !strings.Contains(haystack, part) {
			return false
		}
	}

	return true
}
