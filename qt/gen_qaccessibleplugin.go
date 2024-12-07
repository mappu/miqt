package qt

/*

#include "gen_qaccessibleplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAccessiblePlugin struct {
	h          *C.QAccessiblePlugin
	isSubclass bool
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

// newQAccessiblePlugin constructs the type using only CGO pointers.
func newQAccessiblePlugin(h *C.QAccessiblePlugin, h_QObject *C.QObject) *QAccessiblePlugin {
	if h == nil {
		return nil
	}
	return &QAccessiblePlugin{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQAccessiblePlugin constructs the type using only unsafe pointers.
func UnsafeNewQAccessiblePlugin(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAccessiblePlugin {
	if h == nil {
		return nil
	}

	return &QAccessiblePlugin{h: (*C.QAccessiblePlugin)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQAccessiblePlugin constructs a new QAccessiblePlugin object.
func NewQAccessiblePlugin() *QAccessiblePlugin {
	var outptr_QAccessiblePlugin *C.QAccessiblePlugin = nil
	var outptr_QObject *C.QObject = nil

	C.QAccessiblePlugin_new(&outptr_QAccessiblePlugin, &outptr_QObject)
	ret := newQAccessiblePlugin(outptr_QAccessiblePlugin, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAccessiblePlugin2 constructs a new QAccessiblePlugin object.
func NewQAccessiblePlugin2(parent *QObject) *QAccessiblePlugin {
	var outptr_QAccessiblePlugin *C.QAccessiblePlugin = nil
	var outptr_QObject *C.QObject = nil

	C.QAccessiblePlugin_new2(parent.cPointer(), &outptr_QAccessiblePlugin, &outptr_QObject)
	ret := newQAccessiblePlugin(outptr_QAccessiblePlugin, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAccessiblePlugin) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAccessiblePlugin_MetaObject(this.h))
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

func QAccessiblePlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessiblePlugin) Create(key string, object *QObject) *QAccessibleInterface {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return newQAccessibleInterface(C.QAccessiblePlugin_Create(this.h, key_ms, object.cPointer()))
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

func QAccessiblePlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessiblePlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAccessiblePlugin) OnCreate(slot func(key string, object *QObject) *QAccessibleInterface) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessiblePlugin_override_virtual_Create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessiblePlugin_Create
func miqt_exec_callback_QAccessiblePlugin_Create(self *C.QAccessiblePlugin, cb C.intptr_t, key C.struct_miqt_string, object *C.QObject) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string, object *QObject) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret
	slotval2 := newQObject(object)

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QAccessiblePlugin) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAccessiblePlugin_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAccessiblePlugin) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessiblePlugin_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessiblePlugin_Event
func miqt_exec_callback_QAccessiblePlugin_Event(self *C.QAccessiblePlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAccessiblePlugin) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAccessiblePlugin_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAccessiblePlugin) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessiblePlugin_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessiblePlugin_EventFilter
func miqt_exec_callback_QAccessiblePlugin_EventFilter(self *C.QAccessiblePlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAccessiblePlugin) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAccessiblePlugin_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessiblePlugin) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessiblePlugin_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessiblePlugin_TimerEvent
func miqt_exec_callback_QAccessiblePlugin_TimerEvent(self *C.QAccessiblePlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event, nil)

	gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAccessiblePlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAccessiblePlugin_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessiblePlugin) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessiblePlugin_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessiblePlugin_ChildEvent
func miqt_exec_callback_QAccessiblePlugin_ChildEvent(self *C.QAccessiblePlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event, nil)

	gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAccessiblePlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAccessiblePlugin_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessiblePlugin) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessiblePlugin_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessiblePlugin_CustomEvent
func miqt_exec_callback_QAccessiblePlugin_CustomEvent(self *C.QAccessiblePlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAccessiblePlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAccessiblePlugin_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAccessiblePlugin) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessiblePlugin_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessiblePlugin_ConnectNotify
func miqt_exec_callback_QAccessiblePlugin_ConnectNotify(self *C.QAccessiblePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAccessiblePlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAccessiblePlugin_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAccessiblePlugin) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAccessiblePlugin_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessiblePlugin_DisconnectNotify
func miqt_exec_callback_QAccessiblePlugin_DisconnectNotify(self *C.QAccessiblePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAccessiblePlugin) Delete() {
	C.QAccessiblePlugin_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessiblePlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessiblePlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
