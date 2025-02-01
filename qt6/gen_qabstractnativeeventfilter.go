package qt6

/*

#include "gen_qabstractnativeeventfilter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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
	return newQAbstractNativeEventFilter((*C.QAbstractNativeEventFilter)(h))
}

// NewQAbstractNativeEventFilter constructs a new QAbstractNativeEventFilter object.
func NewQAbstractNativeEventFilter() *QAbstractNativeEventFilter {

	return newQAbstractNativeEventFilter(C.QAbstractNativeEventFilter_new())
}

func (this *QAbstractNativeEventFilter) NativeEventFilter(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))
	return (bool)(C.QAbstractNativeEventFilter_nativeEventFilter(this.h, eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))
}
func (this *QAbstractNativeEventFilter) OnNativeEventFilter(slot func(eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QAbstractNativeEventFilter_override_virtual_nativeEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractNativeEventFilter_nativeEventFilter
func miqt_exec_callback_QAbstractNativeEventFilter_nativeEventFilter(self *C.QAbstractNativeEventFilter, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc(slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QAbstractNativeEventFilter) Delete() {
	C.QAbstractNativeEventFilter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractNativeEventFilter) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractNativeEventFilter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
