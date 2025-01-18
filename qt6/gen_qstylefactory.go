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
	h          *C.QStyleFactory
	isSubclass bool
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
	var _ma C.struct_miqt_array = C.QStyleFactory_Keys()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
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
	return newQStyle(C.QStyleFactory_Create(param1_ms))
}

// Delete this object from C++ memory.
func (this *QStyleFactory) Delete() {
	C.QStyleFactory_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
