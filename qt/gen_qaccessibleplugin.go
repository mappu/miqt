package qt

/*

#include "gen_qaccessibleplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAccessiblePlugin struct {
	h *C.QAccessiblePlugin
	*QObject
}

func (this *QAccessiblePlugin) cPointer() *C.QAccessiblePlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessiblePlugin(h *C.QAccessiblePlugin) *QAccessiblePlugin {
	if h == nil {
		return nil
	}
	return &QAccessiblePlugin{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAccessiblePlugin_U(h unsafe.Pointer) *QAccessiblePlugin {
	return newQAccessiblePlugin((*C.QAccessiblePlugin)(h))
}

func (this *QAccessiblePlugin) MetaObject() *QMetaObject {
	_ret := C.QAccessiblePlugin_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QAccessiblePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessiblePlugin_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAccessiblePlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessiblePlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAccessiblePlugin) Create(key string, object *QObject) *QAccessibleInterface {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QAccessiblePlugin_Create(this.h, (*C.struct_miqt_string)(key_ms), object.cPointer())
	return newQAccessibleInterface_U(unsafe.Pointer(_ret))
}

func QAccessiblePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessiblePlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAccessiblePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessiblePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAccessiblePlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessiblePlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAccessiblePlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessiblePlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAccessiblePlugin) Delete() {
	C.QAccessiblePlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessiblePlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessiblePlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
