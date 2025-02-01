package qt6

/*

#include "gen_qgenericplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGenericPlugin struct {
	h *C.QGenericPlugin
	*QObject
}

func (this *QGenericPlugin) cPointer() *C.QGenericPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGenericPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGenericPlugin constructs the type using only CGO pointers.
func newQGenericPlugin(h *C.QGenericPlugin) *QGenericPlugin {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGenericPlugin_virtbase(h, &outptr_QObject)

	return &QGenericPlugin{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQGenericPlugin constructs the type using only unsafe pointers.
func UnsafeNewQGenericPlugin(h unsafe.Pointer) *QGenericPlugin {
	return newQGenericPlugin((*C.QGenericPlugin)(h))
}

// NewQGenericPlugin constructs a new QGenericPlugin object.
func NewQGenericPlugin() *QGenericPlugin {

	return newQGenericPlugin(C.QGenericPlugin_new())
}

// NewQGenericPlugin2 constructs a new QGenericPlugin object.
func NewQGenericPlugin2(parent *QObject) *QGenericPlugin {

	return newQGenericPlugin(C.QGenericPlugin_new2(parent.cPointer()))
}

func (this *QGenericPlugin) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGenericPlugin_metaObject(this.h))
}

func (this *QGenericPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGenericPlugin_metacast(this.h, param1_Cstring))
}

func QGenericPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGenericPlugin_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGenericPlugin) Create(name string, spec string) *QObject {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	spec_ms := C.struct_miqt_string{}
	spec_ms.data = C.CString(spec)
	spec_ms.len = C.size_t(len(spec))
	defer C.free(unsafe.Pointer(spec_ms.data))
	return newQObject(C.QGenericPlugin_create(this.h, name_ms, spec_ms))
}

func QGenericPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGenericPlugin_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGenericPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGenericPlugin_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QGenericPlugin) OnCreate(slot func(name string, spec string) *QObject) {
	ok := C.QGenericPlugin_override_virtual_create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGenericPlugin_create
func miqt_exec_callback_QGenericPlugin_create(self *C.QGenericPlugin, cb C.intptr_t, name C.struct_miqt_string, spec C.struct_miqt_string) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, spec string) *QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	var spec_ms C.struct_miqt_string = spec
	spec_ret := C.GoStringN(spec_ms.data, C.int(int64(spec_ms.len)))
	C.free(unsafe.Pointer(spec_ms.data))
	slotval2 := spec_ret

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGenericPlugin) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGenericPlugin_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGenericPlugin) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGenericPlugin_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGenericPlugin_event
func miqt_exec_callback_QGenericPlugin_event(self *C.QGenericPlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGenericPlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGenericPlugin) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGenericPlugin_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGenericPlugin) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGenericPlugin_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGenericPlugin_eventFilter
func miqt_exec_callback_QGenericPlugin_eventFilter(self *C.QGenericPlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGenericPlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGenericPlugin) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGenericPlugin_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGenericPlugin) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGenericPlugin_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGenericPlugin_timerEvent
func miqt_exec_callback_QGenericPlugin_timerEvent(self *C.QGenericPlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGenericPlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGenericPlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGenericPlugin_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGenericPlugin) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGenericPlugin_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGenericPlugin_childEvent
func miqt_exec_callback_QGenericPlugin_childEvent(self *C.QGenericPlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGenericPlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGenericPlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGenericPlugin_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGenericPlugin) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGenericPlugin_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGenericPlugin_customEvent
func miqt_exec_callback_QGenericPlugin_customEvent(self *C.QGenericPlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGenericPlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGenericPlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGenericPlugin_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGenericPlugin) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGenericPlugin_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGenericPlugin_connectNotify
func miqt_exec_callback_QGenericPlugin_connectNotify(self *C.QGenericPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGenericPlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGenericPlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGenericPlugin_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGenericPlugin) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGenericPlugin_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGenericPlugin_disconnectNotify
func miqt_exec_callback_QGenericPlugin_disconnectNotify(self *C.QGenericPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGenericPlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGenericPlugin) Delete() {
	C.QGenericPlugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGenericPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QGenericPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
