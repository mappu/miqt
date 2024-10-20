package qt6

/*

#include "gen_qaccessiblebridge.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAccessibleBridge struct {
	h *C.QAccessibleBridge
}

func (this *QAccessibleBridge) cPointer() *C.QAccessibleBridge {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleBridge) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAccessibleBridge(h *C.QAccessibleBridge) *QAccessibleBridge {
	if h == nil {
		return nil
	}
	return &QAccessibleBridge{h: h}
}

func UnsafeNewQAccessibleBridge(h unsafe.Pointer) *QAccessibleBridge {
	return newQAccessibleBridge((*C.QAccessibleBridge)(h))
}

func (this *QAccessibleBridge) SetRootObject(rootObject *QAccessibleInterface) {
	C.QAccessibleBridge_SetRootObject(this.h, rootObject.cPointer())
}

func (this *QAccessibleBridge) NotifyAccessibilityUpdate(event *QAccessibleEvent) {
	C.QAccessibleBridge_NotifyAccessibilityUpdate(this.h, event.cPointer())
}

func (this *QAccessibleBridge) OperatorAssign(param1 *QAccessibleBridge) {
	C.QAccessibleBridge_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAccessibleBridge) Delete() {
	C.QAccessibleBridge_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessibleBridge) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessibleBridge) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAccessibleBridgePlugin struct {
	h *C.QAccessibleBridgePlugin
	*QObject
}

func (this *QAccessibleBridgePlugin) cPointer() *C.QAccessibleBridgePlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleBridgePlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAccessibleBridgePlugin(h *C.QAccessibleBridgePlugin) *QAccessibleBridgePlugin {
	if h == nil {
		return nil
	}
	return &QAccessibleBridgePlugin{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAccessibleBridgePlugin(h unsafe.Pointer) *QAccessibleBridgePlugin {
	return newQAccessibleBridgePlugin((*C.QAccessibleBridgePlugin)(h))
}

func (this *QAccessibleBridgePlugin) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAccessibleBridgePlugin_MetaObject(this.h)))
}

func (this *QAccessibleBridgePlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAccessibleBridgePlugin_Metacast(this.h, param1_Cstring))
}

func QAccessibleBridgePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleBridgePlugin_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleBridgePlugin) Create(key string) *QAccessibleBridge {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return UnsafeNewQAccessibleBridge(unsafe.Pointer(C.QAccessibleBridgePlugin_Create(this.h, key_ms)))
}

func QAccessibleBridgePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleBridgePlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleBridgePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleBridgePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAccessibleBridgePlugin) Delete() {
	C.QAccessibleBridgePlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessibleBridgePlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessibleBridgePlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
