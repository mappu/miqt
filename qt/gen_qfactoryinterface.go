package qt

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
	h *C.QFactoryInterface
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

func newQFactoryInterface(h *C.QFactoryInterface) *QFactoryInterface {
	if h == nil {
		return nil
	}
	return &QFactoryInterface{h: h}
}

func UnsafeNewQFactoryInterface(h unsafe.Pointer) *QFactoryInterface {
	return newQFactoryInterface((*C.QFactoryInterface)(h))
}

func (this *QFactoryInterface) Keys() []string {
	var _ma C.struct_miqt_array = C.QFactoryInterface_Keys(this.h)
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

// Delete this object from C++ memory.
func (this *QFactoryInterface) Delete() {
	C.QFactoryInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFactoryInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QFactoryInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
