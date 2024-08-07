package main

import (
	"fmt"
)

func maybeSuffix(counter int) string {
	if counter == 0 {
		return ""
	}

	return fmt.Sprintf("%d", counter+1)
}
