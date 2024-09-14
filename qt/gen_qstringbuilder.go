package qt

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
	h *C.QAbstractConcatenable
}

func (this *QAbstractConcatenable) cPointer() *C.QAbstractConcatenable {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractConcatenable(h *C.QAbstractConcatenable) *QAbstractConcatenable {
	if h == nil {
		return nil
	}
	return &QAbstractConcatenable{h: h}
}

func newQAbstractConcatenable_U(h unsafe.Pointer) *QAbstractConcatenable {
	return newQAbstractConcatenable((*C.QAbstractConcatenable)(h))
}

// Delete this object from C++ memory.
func (this *QAbstractConcatenable) Delete() {
	C.QAbstractConcatenable_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractConcatenable) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractConcatenable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
