package qt

/*

#include "gen_qgenericpluginfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGenericPluginFactory struct {
	h *C.QGenericPluginFactory
}

func (this *QGenericPluginFactory) cPointer() *C.QGenericPluginFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGenericPluginFactory(h *C.QGenericPluginFactory) *QGenericPluginFactory {
	if h == nil {
		return nil
	}
	return &QGenericPluginFactory{h: h}
}

func newQGenericPluginFactory_U(h unsafe.Pointer) *QGenericPluginFactory {
	return newQGenericPluginFactory((*C.QGenericPluginFactory)(h))
}

func QGenericPluginFactory_Keys() []string {
	var _ma *C.struct_miqt_array = C.QGenericPluginFactory_Keys()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QGenericPluginFactory_Create(param1 string, param2 string) *QObject {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	param2_ms := miqt_strdupg(param2)
	defer C.free(param2_ms)
	_ret := C.QGenericPluginFactory_Create((*C.struct_miqt_string)(param1_ms), (*C.struct_miqt_string)(param2_ms))
	return newQObject_U(unsafe.Pointer(_ret))
}

// Delete this object from C++ memory.
func (this *QGenericPluginFactory) Delete() {
	C.QGenericPluginFactory_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGenericPluginFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QGenericPluginFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
