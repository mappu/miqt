package qt

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

func newQAccessibleBridge(h *C.QAccessibleBridge) *QAccessibleBridge {
	if h == nil {
		return nil
	}
	return &QAccessibleBridge{h: h}
}

func newQAccessibleBridge_U(h unsafe.Pointer) *QAccessibleBridge {
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

func newQAccessibleBridgePlugin(h *C.QAccessibleBridgePlugin) *QAccessibleBridgePlugin {
	if h == nil {
		return nil
	}
	return &QAccessibleBridgePlugin{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAccessibleBridgePlugin_U(h unsafe.Pointer) *QAccessibleBridgePlugin {
	return newQAccessibleBridgePlugin((*C.QAccessibleBridgePlugin)(h))
}

func (this *QAccessibleBridgePlugin) MetaObject() *QMetaObject {
	_ret := C.QAccessibleBridgePlugin_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QAccessibleBridgePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessibleBridgePlugin_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAccessibleBridgePlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessibleBridgePlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAccessibleBridgePlugin) Create(key string) *QAccessibleBridge {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QAccessibleBridgePlugin_Create(this.h, (*C.struct_miqt_string)(key_ms))
	return newQAccessibleBridge_U(unsafe.Pointer(_ret))
}

func QAccessibleBridgePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessibleBridgePlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAccessibleBridgePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessibleBridgePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAccessibleBridgePlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessibleBridgePlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAccessibleBridgePlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAccessibleBridgePlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
