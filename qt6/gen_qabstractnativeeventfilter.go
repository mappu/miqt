package qt6

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
	h          *C.QAbstractNativeEventFilter
	isSubclass bool
}

func (this *QAbstractNativeEventFilter) cPointer() *C.QAbstractNativeEventFilter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractNativeEventFilter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractNativeEventFilter constructs the type using only CGO pointers.
func newQAbstractNativeEventFilter(h *C.QAbstractNativeEventFilter) *QAbstractNativeEventFilter {
	if h == nil {
		return nil
	}
	return &QAbstractNativeEventFilter{h: h}
}

// UnsafeNewQAbstractNativeEventFilter constructs the type using only unsafe pointers.
func UnsafeNewQAbstractNativeEventFilter(h unsafe.Pointer) *QAbstractNativeEventFilter {
	if h == nil {
		return nil
	}

	return &QAbstractNativeEventFilter{h: (*C.QAbstractNativeEventFilter)(h)}
}

func (this *QAbstractNativeEventFilter) NativeEventFilter(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))
	return (bool)(C.QAbstractNativeEventFilter_NativeEventFilter(this.h, eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))
}

// Delete this object from C++ memory.
func (this *QAbstractNativeEventFilter) Delete() {
	C.QAbstractNativeEventFilter_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractNativeEventFilter) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractNativeEventFilter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
