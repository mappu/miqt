package qt6

/*

#include "gen_qstyleplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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
func newQStylePlugin(h *C.QStylePlugin) *QStylePlugin {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QStylePlugin_virtbase(h, &outptr_QObject)

	return &QStylePlugin{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQStylePlugin constructs the type using only unsafe pointers.
func UnsafeNewQStylePlugin(h unsafe.Pointer) *QStylePlugin {
	return newQStylePlugin((*C.QStylePlugin)(h))
}

// NewQStylePlugin constructs a new QStylePlugin object.
func NewQStylePlugin() *QStylePlugin {

	ret := newQStylePlugin(C.QStylePlugin_new())
	ret.isSubclass = true
	return ret
}

// NewQStylePlugin2 constructs a new QStylePlugin object.
func NewQStylePlugin2(parent *QObject) *QStylePlugin {

	ret := newQStylePlugin(C.QStylePlugin_new2(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QStylePlugin) MetaObject() *QMetaObject {
	return newQMetaObject(C.QStylePlugin_MetaObject(this.h))
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
	return newQStyle(C.QStylePlugin_Create(this.h, key_ms))
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
func (this *QStylePlugin) OnCreate(slot func(key string) *QStyle) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QStylePlugin_override_virtual_Create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStylePlugin_Create
func miqt_exec_callback_QStylePlugin_Create(self *C.QStylePlugin, cb C.intptr_t, key C.struct_miqt_string) *C.QStyle {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string) *QStyle)
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

func (this *QStylePlugin) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QStylePlugin_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QStylePlugin) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QStylePlugin_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStylePlugin_Event
func miqt_exec_callback_QStylePlugin_Event(self *C.QStylePlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QStylePlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStylePlugin) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QStylePlugin_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QStylePlugin) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QStylePlugin_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStylePlugin_EventFilter
func miqt_exec_callback_QStylePlugin_EventFilter(self *C.QStylePlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QStylePlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStylePlugin) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QStylePlugin_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStylePlugin) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QStylePlugin_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStylePlugin_TimerEvent
func miqt_exec_callback_QStylePlugin_TimerEvent(self *C.QStylePlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QStylePlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QStylePlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QStylePlugin_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStylePlugin) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QStylePlugin_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStylePlugin_ChildEvent
func miqt_exec_callback_QStylePlugin_ChildEvent(self *C.QStylePlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QStylePlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QStylePlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QStylePlugin_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStylePlugin) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QStylePlugin_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStylePlugin_CustomEvent
func miqt_exec_callback_QStylePlugin_CustomEvent(self *C.QStylePlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStylePlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QStylePlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QStylePlugin_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStylePlugin) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QStylePlugin_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStylePlugin_ConnectNotify
func miqt_exec_callback_QStylePlugin_ConnectNotify(self *C.QStylePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStylePlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QStylePlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QStylePlugin_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStylePlugin) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QStylePlugin_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStylePlugin_DisconnectNotify
func miqt_exec_callback_QStylePlugin_DisconnectNotify(self *C.QStylePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStylePlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
