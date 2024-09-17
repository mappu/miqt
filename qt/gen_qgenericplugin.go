package qt

/*

#include "gen_qgenericplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGenericPlugin struct {
	h *C.QGenericPlugin
	*QObject
}

func (this *QGenericPlugin) cPointer() *C.QGenericPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGenericPlugin(h *C.QGenericPlugin) *QGenericPlugin {
	if h == nil {
		return nil
	}
	return &QGenericPlugin{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQGenericPlugin_U(h unsafe.Pointer) *QGenericPlugin {
	return newQGenericPlugin((*C.QGenericPlugin)(h))
}

func (this *QGenericPlugin) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QGenericPlugin_MetaObject(this.h)))
}

func QGenericPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGenericPlugin_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGenericPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGenericPlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGenericPlugin) Create(name string, spec string) *QObject {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	spec_ms := miqt_strdupg(spec)
	defer C.free(spec_ms)
	return newQObject_U(unsafe.Pointer(C.QGenericPlugin_Create(this.h, (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(spec_ms))))
}

func QGenericPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGenericPlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGenericPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGenericPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGenericPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGenericPlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGenericPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGenericPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGenericPlugin) Delete() {
	C.QGenericPlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGenericPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QGenericPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
