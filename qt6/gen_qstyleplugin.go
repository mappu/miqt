package qt6

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
	h          *C.QStylePlugin
	isSubclass bool
	*QObject
}

func (this *QStylePlugin) cPointer() *C.QStylePlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStylePlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStylePlugin constructs the type using only CGO pointers.
func newQStylePlugin(h *C.QStylePlugin, h_QObject *C.QObject) *QStylePlugin {
	if h == nil {
		return nil
	}
	return &QStylePlugin{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQStylePlugin constructs the type using only unsafe pointers.
func UnsafeNewQStylePlugin(h unsafe.Pointer, h_QObject unsafe.Pointer) *QStylePlugin {
	if h == nil {
		return nil
	}

	return &QStylePlugin{h: (*C.QStylePlugin)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

func (this *QStylePlugin) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QStylePlugin_MetaObject(this.h)))
}

func (this *QStylePlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStylePlugin_Metacast(this.h, param1_Cstring))
}

func QStylePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStylePlugin_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStylePlugin) Create(key string) *QStyle {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return UnsafeNewQStyle(unsafe.Pointer(C.QStylePlugin_Create(this.h, key_ms)), nil)
}

func QStylePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStylePlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStylePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStylePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QStylePlugin) Delete() {
	C.QStylePlugin_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStylePlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QStylePlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
