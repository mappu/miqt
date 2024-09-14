package qt

/*

#include "gen_qabstractnativeeventfilter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAbstractNativeEventFilter struct {
	h *C.QAbstractNativeEventFilter
}

func (this *QAbstractNativeEventFilter) cPointer() *C.QAbstractNativeEventFilter {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractNativeEventFilter(h *C.QAbstractNativeEventFilter) *QAbstractNativeEventFilter {
	if h == nil {
		return nil
	}
	return &QAbstractNativeEventFilter{h: h}
}

func newQAbstractNativeEventFilter_U(h unsafe.Pointer) *QAbstractNativeEventFilter {
	return newQAbstractNativeEventFilter((*C.QAbstractNativeEventFilter)(h))
}

// Delete this object from C++ memory.
func (this *QAbstractNativeEventFilter) Delete() {
	C.QAbstractNativeEventFilter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractNativeEventFilter) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractNativeEventFilter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
