package qt

/*

#include "gen_qgenericpluginfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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

func (this *QGenericPluginFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGenericPluginFactory(h *C.QGenericPluginFactory) *QGenericPluginFactory {
	if h == nil {
		return nil
	}
	return &QGenericPluginFactory{h: h}
}

func UnsafeNewQGenericPluginFactory(h unsafe.Pointer) *QGenericPluginFactory {
	return newQGenericPluginFactory((*C.QGenericPluginFactory)(h))
}

func QGenericPluginFactory_Keys() []string {
	var _ma *C.struct_miqt_array = C.QGenericPluginFactory_Keys()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QGenericPluginFactory_Create(param1 string, param2 string) *QObject {
	param1_ms := libmiqt.Strdupg(param1)
	defer C.free(param1_ms)
	param2_ms := libmiqt.Strdupg(param2)
	defer C.free(param2_ms)
	return UnsafeNewQObject(unsafe.Pointer(C.QGenericPluginFactory_Create((*C.struct_miqt_string)(param1_ms), (*C.struct_miqt_string)(param2_ms))))
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
