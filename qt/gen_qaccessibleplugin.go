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

// newQAccessiblePlugin constructs the type using only CGO pointers.
func newQAccessiblePlugin(h *C.QAccessiblePlugin) *QAccessiblePlugin {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAccessiblePlugin_virtbase(h, &outptr_QObject)

	return &QAccessiblePlugin{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQAccessiblePlugin constructs the type using only unsafe pointers.
func UnsafeNewQAccessiblePlugin(h unsafe.Pointer) *QAccessiblePlugin {
	return newQAccessiblePlugin((*C.QAccessiblePlugin)(h))
}

// NewQAccessiblePlugin constructs a new QAccessiblePlugin object.
func NewQAccessiblePlugin() *QAccessiblePlugin {

	return newQAccessiblePlugin(C.QAccessiblePlugin_new())
}

// NewQAccessiblePlugin2 constructs a new QAccessiblePlugin object.
func NewQAccessiblePlugin2(parent *QObject) *QAccessiblePlugin {

	return newQAccessiblePlugin(C.QAccessiblePlugin_new2(parent.cPointer()))
}

func (this *QAccessiblePlugin) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAccessiblePlugin_metaObject(this.h))
}

func (this *QAccessiblePlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAccessiblePlugin_metacast(this.h, param1_Cstring))
}

func QAccessiblePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessiblePlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessiblePlugin) Create(key string, object *QObject) *QAccessibleInterface {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return newQAccessibleInterface(C.QAccessiblePlugin_create(this.h, key_ms, object.cPointer()))
}

func QAccessiblePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessiblePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessiblePlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessiblePlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessiblePlugin_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAccessiblePlugin) Oncreate(slot func(key string, object *QObject) *QAccessibleInterface) {
	ok := C.QAccessiblePlugin_override_virtual_create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessiblePlugin_create
func miqt_exec_callback_QAccessiblePlugin_create(self *C.QAccessiblePlugin, cb C.intptr_t, key C.struct_miqt_string, object *C.QObject) *C.QAccessibleInterface {
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

	return (bool)(C.QAccessiblePlugin_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAccessiblePlugin) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAccessiblePlugin_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessiblePlugin_event
func miqt_exec_callback_QAccessiblePlugin_event(self *C.QAccessiblePlugin, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QAccessiblePlugin_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAccessiblePlugin) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAccessiblePlugin_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessiblePlugin_eventFilter
func miqt_exec_callback_QAccessiblePlugin_eventFilter(self *C.QAccessiblePlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QAccessiblePlugin_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessiblePlugin) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAccessiblePlugin_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessiblePlugin_timerEvent
func miqt_exec_callback_QAccessiblePlugin_timerEvent(self *C.QAccessiblePlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAccessiblePlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAccessiblePlugin_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessiblePlugin) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAccessiblePlugin_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessiblePlugin_childEvent
func miqt_exec_callback_QAccessiblePlugin_childEvent(self *C.QAccessiblePlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAccessiblePlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAccessiblePlugin_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessiblePlugin) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAccessiblePlugin_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessiblePlugin_customEvent
func miqt_exec_callback_QAccessiblePlugin_customEvent(self *C.QAccessiblePlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAccessiblePlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAccessiblePlugin_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAccessiblePlugin) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAccessiblePlugin_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessiblePlugin_connectNotify
func miqt_exec_callback_QAccessiblePlugin_connectNotify(self *C.QAccessiblePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAccessiblePlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAccessiblePlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAccessiblePlugin_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAccessiblePlugin) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAccessiblePlugin_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessiblePlugin_disconnectNotify
func miqt_exec_callback_QAccessiblePlugin_disconnectNotify(self *C.QAccessiblePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QAccessiblePlugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessiblePlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessiblePlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
