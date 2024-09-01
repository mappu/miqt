package qt

/*

#include "gen_qaccessiblebridge.h"
#include <stdlib.h>

*/
import "C"

import (
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

func (this *QAccessibleBridge) Delete() {
	C.QAccessibleBridge_Delete(this.h)
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
	ret := C.QAccessibleBridgePlugin_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAccessibleBridgePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleBridgePlugin_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleBridgePlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleBridgePlugin_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleBridgePlugin) Create(key string) *QAccessibleBridge {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QAccessibleBridgePlugin_Create(this.h, key_Cstring, C.size_t(len(key)))
	return newQAccessibleBridge_U(unsafe.Pointer(ret))
}

func QAccessibleBridgePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleBridgePlugin_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleBridgePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleBridgePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleBridgePlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleBridgePlugin_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleBridgePlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleBridgePlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleBridgePlugin) Delete() {
	C.QAccessibleBridgePlugin_Delete(this.h)
}
