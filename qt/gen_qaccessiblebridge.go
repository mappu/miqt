package qt

/*

#include "gen_qaccessiblebridge.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAccessibleBridge struct {
	h          *C.QAccessibleBridge
	isSubclass bool
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

// newQAccessibleBridge constructs the type using only CGO pointers.
func newQAccessibleBridge(h *C.QAccessibleBridge) *QAccessibleBridge {
	if h == nil {
		return nil
	}
	return &QAccessibleBridge{h: h}
}

// UnsafeNewQAccessibleBridge constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleBridge(h unsafe.Pointer) *QAccessibleBridge {
	if h == nil {
		return nil
	}

	return &QAccessibleBridge{h: (*C.QAccessibleBridge)(h)}
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
	C.QAccessibleBridge_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QAccessibleBridgePlugin
	isSubclass bool
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

// newQAccessibleBridgePlugin constructs the type using only CGO pointers.
func newQAccessibleBridgePlugin(h *C.QAccessibleBridgePlugin, h_QObject *C.QObject) *QAccessibleBridgePlugin {
	if h == nil {
		return nil
	}
	return &QAccessibleBridgePlugin{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQAccessibleBridgePlugin constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleBridgePlugin(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAccessibleBridgePlugin {
	if h == nil {
		return nil
	}

	return &QAccessibleBridgePlugin{h: (*C.QAccessibleBridgePlugin)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQAccessibleBridgePlugin constructs a new QAccessibleBridgePlugin object.
func NewQAccessibleBridgePlugin() *QAccessibleBridgePlugin {
	var outptr_QAccessibleBridgePlugin *C.QAccessibleBridgePlugin = nil
	var outptr_QObject *C.QObject = nil

	C.QAccessibleBridgePlugin_new(&outptr_QAccessibleBridgePlugin, &outptr_QObject)
	ret := newQAccessibleBridgePlugin(outptr_QAccessibleBridgePlugin, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAccessibleBridgePlugin2 constructs a new QAccessibleBridgePlugin object.
func NewQAccessibleBridgePlugin2(parent *QObject) *QAccessibleBridgePlugin {
	var outptr_QAccessibleBridgePlugin *C.QAccessibleBridgePlugin = nil
	var outptr_QObject *C.QObject = nil

	C.QAccessibleBridgePlugin_new2(parent.cPointer(), &outptr_QAccessibleBridgePlugin, &outptr_QObject)
	ret := newQAccessibleBridgePlugin(outptr_QAccessibleBridgePlugin, outptr_QObject)
	ret.isSubclass = true
	return ret
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

func QAccessibleBridgePlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleBridgePlugin_TrUtf8(s_Cstring)
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

func QAccessibleBridgePlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleBridgePlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleBridgePlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleBridgePlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAccessibleBridgePlugin) OnCreate(slot func(key string) *QAccessibleBridge) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessibleBridgePlugin_override_virtual_Create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleBridgePlugin_Create
func miqt_exec_callback_QAccessibleBridgePlugin_Create(self *C.QAccessibleBridgePlugin, cb C.intptr_t, key C.struct_miqt_string) *C.QAccessibleBridge {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string) *QAccessibleBridge)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QAccessibleBridgePlugin) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAccessibleBridgePlugin_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAccessibleBridgePlugin) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessibleBridgePlugin_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleBridgePlugin_Event
func miqt_exec_callback_QAccessibleBridgePlugin_Event(self *C.QAccessibleBridgePlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAccessibleBridgePlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAccessibleBridgePlugin) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAccessibleBridgePlugin_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAccessibleBridgePlugin) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessibleBridgePlugin_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleBridgePlugin_EventFilter
func miqt_exec_callback_QAccessibleBridgePlugin_EventFilter(self *C.QAccessibleBridgePlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAccessibleBridgePlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAccessibleBridgePlugin) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAccessibleBridgePlugin_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessibleBridgePlugin) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessibleBridgePlugin_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleBridgePlugin_TimerEvent
func miqt_exec_callback_QAccessibleBridgePlugin_TimerEvent(self *C.QAccessibleBridgePlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAccessibleBridgePlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAccessibleBridgePlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAccessibleBridgePlugin_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessibleBridgePlugin) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessibleBridgePlugin_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleBridgePlugin_ChildEvent
func miqt_exec_callback_QAccessibleBridgePlugin_ChildEvent(self *C.QAccessibleBridgePlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAccessibleBridgePlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAccessibleBridgePlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAccessibleBridgePlugin_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessibleBridgePlugin) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessibleBridgePlugin_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleBridgePlugin_CustomEvent
func miqt_exec_callback_QAccessibleBridgePlugin_CustomEvent(self *C.QAccessibleBridgePlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAccessibleBridgePlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAccessibleBridgePlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAccessibleBridgePlugin_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAccessibleBridgePlugin) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessibleBridgePlugin_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleBridgePlugin_ConnectNotify
func miqt_exec_callback_QAccessibleBridgePlugin_ConnectNotify(self *C.QAccessibleBridgePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAccessibleBridgePlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAccessibleBridgePlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAccessibleBridgePlugin_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAccessibleBridgePlugin) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessibleBridgePlugin_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleBridgePlugin_DisconnectNotify
func miqt_exec_callback_QAccessibleBridgePlugin_DisconnectNotify(self *C.QAccessibleBridgePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAccessibleBridgePlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAccessibleBridgePlugin) Delete() {
	C.QAccessibleBridgePlugin_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessibleBridgePlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessibleBridgePlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
