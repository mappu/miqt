package qt

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
	h *C.QStyleFactory
}

func (this *QStyleFactory) cPointer() *C.QStyleFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleFactory(h *C.QStyleFactory) *QStyleFactory {
	if h == nil {
		return nil
	}
	return &QStyleFactory{h: h}
}

func newQStyleFactory_U(h unsafe.Pointer) *QStyleFactory {
	return newQStyleFactory((*C.QStyleFactory)(h))
}

func QStyleFactory_Keys() []string {
	var _ma *C.struct_miqt_array = C.QStyleFactory_Keys()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QStyleFactory_Create(param1 string) *QStyle {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	_ret := C.QStyleFactory_Create((*C.struct_miqt_string)(param1_ms))
	return newQStyle_U(unsafe.Pointer(_ret))
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
