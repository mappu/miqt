package qt6

/*

#include "gen_qrunnable.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRunnable struct {
	h *C.QRunnable
}

func (this *QRunnable) cPointer() *C.QRunnable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRunnable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQRunnable(h *C.QRunnable) *QRunnable {
	if h == nil {
		return nil
	}
	return &QRunnable{h: h}
}

func UnsafeNewQRunnable(h unsafe.Pointer) *QRunnable {
	return newQRunnable((*C.QRunnable)(h))
}

func (this *QRunnable) Run() {
	C.QRunnable_Run(this.h)
}

func (this *QRunnable) AutoDelete() bool {
	return (bool)(C.QRunnable_AutoDelete(this.h))
}

func (this *QRunnable) SetAutoDelete(autoDelete bool) {
	C.QRunnable_SetAutoDelete(this.h, (C.bool)(autoDelete))
}

// Delete this object from C++ memory.
func (this *QRunnable) Delete() {
	C.QRunnable_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRunnable) GoGC() {
	runtime.SetFinalizer(this, func(this *QRunnable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
