package main

import (
	"strconv"
	"encoding/json"
	"log"
	"strings"
)

func maybeSuffix(counter int) string {
	if counter == 0 {
		return ""
	}

	return strconv.Itoa(counter+1)
}

func titleCase(s string) string {
	return strings.ToUpper(s[0:1]) + s[1:]
}

func prettyPrint(obj interface{}) {
	jb, err := json.MarshalIndent(obj, "", "  ")
	if err != nil {
		panic(err)
	}

	log.Println(string(jb))
}

func ifv[T any](condition bool, trueval T, falseval T) T {
	if condition {
		return trueval
	}
	return falseval
}

func addr[T any](s T) *T {
	return &s
}
