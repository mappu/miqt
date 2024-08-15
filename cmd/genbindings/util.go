package main

import (
	"fmt"
	"strings"
)

func maybeSuffix(counter int) string {
	if counter == 0 {
		return ""
	}

	return fmt.Sprintf("%d", counter+1)
}

func titleCase(s string) string {
	return strings.ToUpper(s[0:1]) + s[1:]
}
