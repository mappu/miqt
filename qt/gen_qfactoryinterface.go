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

func newQFactoryInterface(h *C.QFactoryInterface) *QFactoryInterface {
	if h == nil {
		return nil
	}
	return &QFactoryInterface{h: h}
}

func newQFactoryInterface_U(h unsafe.Pointer) *QFactoryInterface {
	return newQFactoryInterface((*C.QFactoryInterface)(h))
}

func (this *QFactoryInterface) Keys() []string {
	var _ma *C.struct_miqt_array = C.QFactoryInterface_Keys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
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
