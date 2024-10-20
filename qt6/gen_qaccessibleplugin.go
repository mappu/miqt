package qt6

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

func (this *QAccessiblePlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAccessiblePlugin(h *C.QAccessiblePlugin) *QAccessiblePlugin {
	if h == nil {
		return nil
	}
	return &QAccessiblePlugin{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAccessiblePlugin(h unsafe.Pointer) *QAccessiblePlugin {
	return newQAccessiblePlugin((*C.QAccessiblePlugin)(h))
}

func (this *QAccessiblePlugin) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAccessiblePlugin_MetaObject(this.h)))
}

func (this *QAccessiblePlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAccessiblePlugin_Metacast(this.h, param1_Cstring))
}

func QAccessiblePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessiblePlugin) Create(key string, object *QObject) *QAccessibleInterface {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessiblePlugin_Create(this.h, key_ms, object.cPointer())))
}

func QAccessiblePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessiblePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
