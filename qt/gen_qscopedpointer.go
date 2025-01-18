package qt

/*

#include "gen_qscopedpointer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScopedPointerPodDeleter struct {
	h *C.QScopedPointerPodDeleter
}

func (this *QScopedPointerPodDeleter) cPointer() *C.QScopedPointerPodDeleter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScopedPointerPodDeleter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScopedPointerPodDeleter constructs the type using only CGO pointers.
func newQScopedPointerPodDeleter(h *C.QScopedPointerPodDeleter) *QScopedPointerPodDeleter {
	if h == nil {
		return nil
	}

	return &QScopedPointerPodDeleter{h: h}
}

// UnsafeNewQScopedPointerPodDeleter constructs the type using only unsafe pointers.
func UnsafeNewQScopedPointerPodDeleter(h unsafe.Pointer) *QScopedPointerPodDeleter {
	return newQScopedPointerPodDeleter((*C.QScopedPointerPodDeleter)(h))
}

func QScopedPointerPodDeleter_Cleanup(pointer unsafe.Pointer) {
	C.QScopedPointerPodDeleter_Cleanup(pointer)
}

// Delete this object from C++ memory.
func (this *QScopedPointerPodDeleter) Delete() {
	C.QScopedPointerPodDeleter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScopedPointerPodDeleter) GoGC() {
	runtime.SetFinalizer(this, func(this *QScopedPointerPodDeleter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
