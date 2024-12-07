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
	h          *C.QGenericPlugin
	isSubclass bool
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

	ret := newQGenericPlugin(C.QGenericPlugin_new())
	ret.isSubclass = true
	return ret
}

// NewQGenericPlugin2 constructs a new QGenericPlugin object.
func NewQGenericPlugin2(parent *QObject) *QGenericPlugin {

	ret := newQGenericPlugin(C.QGenericPlugin_new2(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QGenericPlugin) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGenericPlugin_MetaObject(this.h))
}

func (this *QGenericPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGenericPlugin_Metacast(this.h, param1_Cstring))
}

func QGenericPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGenericPlugin_Tr(s_Cstring)
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
	return newQObject(C.QGenericPlugin_Create(this.h, name_ms, spec_ms))
}

func QGenericPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGenericPlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGenericPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGenericPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QGenericPlugin) OnCreate(slot func(name string, spec string) *QObject) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGenericPlugin_override_virtual_Create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGenericPlugin_Create
func miqt_exec_callback_QGenericPlugin_Create(self *C.QGenericPlugin, cb C.intptr_t, name C.struct_miqt_string, spec C.struct_miqt_string) *C.QObject {
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

	return (bool)(C.QGenericPlugin_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGenericPlugin) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGenericPlugin_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGenericPlugin_Event
func miqt_exec_callback_QGenericPlugin_Event(self *C.QGenericPlugin, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QGenericPlugin_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGenericPlugin) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGenericPlugin_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGenericPlugin_EventFilter
func miqt_exec_callback_QGenericPlugin_EventFilter(self *C.QGenericPlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QGenericPlugin_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGenericPlugin) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGenericPlugin_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGenericPlugin_TimerEvent
func miqt_exec_callback_QGenericPlugin_TimerEvent(self *C.QGenericPlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGenericPlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGenericPlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGenericPlugin_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGenericPlugin) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGenericPlugin_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGenericPlugin_ChildEvent
func miqt_exec_callback_QGenericPlugin_ChildEvent(self *C.QGenericPlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGenericPlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGenericPlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGenericPlugin_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGenericPlugin) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGenericPlugin_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGenericPlugin_CustomEvent
func miqt_exec_callback_QGenericPlugin_CustomEvent(self *C.QGenericPlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGenericPlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGenericPlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGenericPlugin_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGenericPlugin) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGenericPlugin_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGenericPlugin_ConnectNotify
func miqt_exec_callback_QGenericPlugin_ConnectNotify(self *C.QGenericPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGenericPlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGenericPlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGenericPlugin_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGenericPlugin) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGenericPlugin_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGenericPlugin_DisconnectNotify
func miqt_exec_callback_QGenericPlugin_DisconnectNotify(self *C.QGenericPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QGenericPlugin_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGenericPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QGenericPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
