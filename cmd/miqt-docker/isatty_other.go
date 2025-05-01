//+build !linux
//go:build !linux

package main

func isatty() bool {
	return true
}
