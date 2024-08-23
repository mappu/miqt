package qt

// SPDX-License-Identifier: MIT

import (
	"C"
	"runtime/cgo"
	"unsafe"
)

type miqtCallbackFunc func(argc C.int, args *C.void)

//export miqt_exec_callback
func miqt_exec_callback(cb *C.void, argc C.int, args *C.void) {
	// Our CABI for all callbacks is void(int, void*).
	// Our Go ABI is CallbackFunc
	// Then the Go bindings can unmarshal the arguments and C.free() them as necessary
	cfunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(miqtCallbackFunc)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	cfunc(argc, args)
}
