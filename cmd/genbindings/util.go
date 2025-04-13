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

func slice_to_set[T comparable](list []T) map[T]struct{} {
	ret := make(map[T]struct{}, len(list))
	for _, v := range list {
		ret[v] = struct{}{}
	}
	return ret
}

func slice_copy[T comparable](input []T) []T {
	ret := make([]T, len(input))
	for i, elem := range input {
		ret[i] = elem
	}
	return ret
}

func slice_contains[T comparable](input []T, search T) bool {
	for _, elem := range input {
		if elem == search {
			return true
		}
	}
	return false // not found
}
