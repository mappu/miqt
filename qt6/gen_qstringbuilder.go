package qt6

/*

#include "gen_qstringbuilder.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAbstractConcatenable struct {
	h          *C.QAbstractConcatenable
	isSubclass bool
}

func (this *QAbstractConcatenable) cPointer() *C.QAbstractConcatenable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractConcatenable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractConcatenable constructs the type using only CGO pointers.
func newQAbstractConcatenable(h *C.QAbstractConcatenable) *QAbstractConcatenable {
	if h == nil {
		return nil
	}
	return &QAbstractConcatenable{h: h}
}

// UnsafeNewQAbstractConcatenable constructs the type using only unsafe pointers.
func UnsafeNewQAbstractConcatenable(h unsafe.Pointer) *QAbstractConcatenable {
	if h == nil {
		return nil
	}

	return &QAbstractConcatenable{h: (*C.QAbstractConcatenable)(h)}
}

// Delete this object from C++ memory.
func (this *QAbstractConcatenable) Delete() {
	C.QAbstractConcatenable_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractConcatenable) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractConcatenable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
