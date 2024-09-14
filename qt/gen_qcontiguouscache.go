package qt

/*

#include "gen_qcontiguouscache.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QContiguousCacheData struct {
	h *C.QContiguousCacheData
}

func (this *QContiguousCacheData) cPointer() *C.QContiguousCacheData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQContiguousCacheData(h *C.QContiguousCacheData) *QContiguousCacheData {
	if h == nil {
		return nil
	}
	return &QContiguousCacheData{h: h}
}

func newQContiguousCacheData_U(h unsafe.Pointer) *QContiguousCacheData {
	return newQContiguousCacheData((*C.QContiguousCacheData)(h))
}

func QContiguousCacheData_AllocateData(size int, alignment int) *QContiguousCacheData {
	_ret := C.QContiguousCacheData_AllocateData((C.int)(size), (C.int)(alignment))
	return newQContiguousCacheData_U(unsafe.Pointer(_ret))
}

func QContiguousCacheData_FreeData(data *QContiguousCacheData) {
	C.QContiguousCacheData_FreeData(data.cPointer())
}

// Delete this object from C++ memory.
func (this *QContiguousCacheData) Delete() {
	C.QContiguousCacheData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QContiguousCacheData) GoGC() {
	runtime.SetFinalizer(this, func(this *QContiguousCacheData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
