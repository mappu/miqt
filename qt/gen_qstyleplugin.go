package qt

/*

#include "gen_qstyleplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStylePlugin struct {
	h *C.QStylePlugin
	*QObject
}

func (this *QStylePlugin) cPointer() *C.QStylePlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStylePlugin(h *C.QStylePlugin) *QStylePlugin {
	if h == nil {
		return nil
	}
	return &QStylePlugin{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQStylePlugin_U(h unsafe.Pointer) *QStylePlugin {
	return newQStylePlugin((*C.QStylePlugin)(h))
}

func (this *QStylePlugin) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QStylePlugin_MetaObject(this.h)))
}

func (this *QStylePlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QStylePlugin_Metacast(this.h, param1_Cstring)
}

func QStylePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStylePlugin_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStylePlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStylePlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStylePlugin) Create(key string) *QStyle {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	return newQStyle_U(unsafe.Pointer(C.QStylePlugin_Create(this.h, (*C.struct_miqt_string)(key_ms))))
}

func QStylePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStylePlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStylePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStylePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStylePlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStylePlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStylePlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStylePlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QStylePlugin) Delete() {
	C.QStylePlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStylePlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QStylePlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
