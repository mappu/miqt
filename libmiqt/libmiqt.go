package libmiqt

// SPDX-License-Identifier: MIT

/*

#include "libmiqt.h"

*/
import "C"

import "unsafe"

// ValueCast reinterprets a plain struct as another struct type with the same
// memory layout. The generated bindings use it to convert Qt value structs
// to and from their CABI representation, which is a distinct type in every
// package using Cgo.
func ValueCast[To, From any](v From) To {
	return *(*To)(unsafe.Pointer(&v))
}
