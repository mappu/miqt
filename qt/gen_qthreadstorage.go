package qt

/*

#include "gen_qthreadstorage.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QThreadStorageData struct {
	h *C.QThreadStorageData
}

func (this *QThreadStorageData) cPointer() *C.QThreadStorageData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQThreadStorageData(h *C.QThreadStorageData) *QThreadStorageData {
	if h == nil {
		return nil
	}
	return &QThreadStorageData{h: h}
}

func newQThreadStorageData_U(h unsafe.Pointer) *QThreadStorageData {
	return newQThreadStorageData((*C.QThreadStorageData)(h))
}

// NewQThreadStorageData constructs a new QThreadStorageData object.
func NewQThreadStorageData(param1 *QThreadStorageData) *QThreadStorageData {
	ret := C.QThreadStorageData_new(param1.cPointer())
	return newQThreadStorageData(ret)
}

// Delete this object from C++ memory.
func (this *QThreadStorageData) Delete() {
	C.QThreadStorageData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QThreadStorageData) GoGC() {
	runtime.SetFinalizer(this, func(this *QThreadStorageData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
