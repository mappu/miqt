package qt6

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
	h  *C.QGenericPluginFactory
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGenericPluginFactory) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQGenericPluginFactory constructs the type using only CGO pointers.
func newQGenericPluginFactory(h *C.QGenericPluginFactory) *QGenericPluginFactory {
	if h == nil {
		return nil
	}

	return &QGenericPluginFactory{h: h}
}

// UnsafeNewQGenericPluginFactory constructs the type using only unsafe pointers.
func UnsafeNewQGenericPluginFactory(h unsafe.Pointer) *QGenericPluginFactory {
	return newQGenericPluginFactory((*C.QGenericPluginFactory)(h))
}

func QGenericPluginFactory_Keys() []string {
	var _ma C.struct_miqt_array = C.QGenericPluginFactory_keys()
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

func QGenericPluginFactory_Create(param1 string, param2 string) *QObject {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	return newQObject(C.QGenericPluginFactory_create(param1_ms, param2_ms))
}

// Delete this object from C++ memory.
func (this *QGenericPluginFactory) Delete() {
	C.QGenericPluginFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGenericPluginFactory) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGenericPluginFactory_delete((*C.QGenericPluginFactory)(gc[0]))
	})
	this.miqtSetGC(gc)
}
