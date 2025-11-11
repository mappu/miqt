package main

import (
	"path/filepath"
)

func AllowAllHeaders(string) bool {
	return true
}

func OnlyHeaders(s ...string) func(fullpath string) bool {
	return func(fullpath string) bool {
		return slice_contains(s, filepath.Base(fullpath))
	}
}

func ExceptHeaders(s ...string) func(fullpath string) bool {
	return func(fullpath string) bool {
		return !slice_contains(s, filepath.Base(fullpath))
	}
}

var ProcessLibraries func(clangBin, outDir, extraLibsDir string) = nil

func SelectConfiguration(configName string) {
	switch configName {
	case "qt5":
		ProcessLibraries = Qt5_ProcessLibraries

	case "qt6":
		ProcessLibraries = Qt6_ProcessLibraries

	default:
		panic(`Unknown configuration name "` + configName + `"`)
	}
}
