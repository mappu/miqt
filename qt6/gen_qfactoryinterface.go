package qt6

/*

#include "gen_qfactoryinterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFactoryInterface struct {
	h  *C.QFactoryInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QFactoryInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QFactoryInterface) cPointer() *C.QFactoryInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFactoryInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFactoryInterface constructs the type using only CGO pointers.
func newQFactoryInterface(h *C.QFactoryInterface) *QFactoryInterface {
	if h == nil {
		return nil
	}

	return &QFactoryInterface{h: h}
}

// UnsafeNewQFactoryInterface constructs the type using only unsafe pointers.
func UnsafeNewQFactoryInterface(h unsafe.Pointer) *QFactoryInterface {
	return newQFactoryInterface((*C.QFactoryInterface)(h))
}

func (this *QFactoryInterface) Keys() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QFactoryInterface_keys(this.h)
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

// Delete this object from C++ memory.
func (this *QFactoryInterface) Delete() {
	C.QFactoryInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QFactoryInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QFactoryInterface_delete((*C.QFactoryInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}
