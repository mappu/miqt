package qt6

/*

#include "gen_qstylefactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStyleFactory struct {
	h  *C.QStyleFactory
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleFactory) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QStyleFactory) cPointer() *C.QStyleFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleFactory constructs the type using only CGO pointers.
func newQStyleFactory(h *C.QStyleFactory) *QStyleFactory {
	if h == nil {
		return nil
	}

	return &QStyleFactory{h: h}
}

// UnsafeNewQStyleFactory constructs the type using only unsafe pointers.
func UnsafeNewQStyleFactory(h unsafe.Pointer) *QStyleFactory {
	return newQStyleFactory((*C.QStyleFactory)(h))
}

func QStyleFactory_Keys() []string {
	var _ma C.struct_miqt_array = C.QStyleFactory_keys()
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QStyleFactory_Create(param1 string) *QStyle {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return newQStyle(C.QStyleFactory_create(param1_ms))
}

// Delete this object from C++ memory.
func (this *QStyleFactory) Delete() {
	C.QStyleFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleFactory) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleFactory_delete((*C.QStyleFactory)(gc[0]))
	})
	this.miqtSetGC(gc)
}
