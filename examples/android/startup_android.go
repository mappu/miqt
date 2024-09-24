// +build android

package main

import "C" // Required for export support

//export AndroidMain
func AndroidMain() {
	myRealMainFunc()
}

func main() {
	// Must be empty
}
