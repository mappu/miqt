package qt6

/*

#include "gen_qiconengineplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QIconEnginePlugin struct {
	h          *C.QIconEnginePlugin
	isSubclass bool
	*QObject
}

func (this *QIconEnginePlugin) cPointer() *C.QIconEnginePlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIconEnginePlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIconEnginePlugin constructs the type using only CGO pointers.
func newQIconEnginePlugin(h *C.QIconEnginePlugin, h_QObject *C.QObject) *QIconEnginePlugin {
	if h == nil {
		return nil
	}
	return &QIconEnginePlugin{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQIconEnginePlugin constructs the type using only unsafe pointers.
func UnsafeNewQIconEnginePlugin(h unsafe.Pointer, h_QObject unsafe.Pointer) *QIconEnginePlugin {
	if h == nil {
		return nil
	}

	return &QIconEnginePlugin{h: (*C.QIconEnginePlugin)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQIconEnginePlugin constructs a new QIconEnginePlugin object.
func NewQIconEnginePlugin() *QIconEnginePlugin {
	var outptr_QIconEnginePlugin *C.QIconEnginePlugin = nil
	var outptr_QObject *C.QObject = nil

	C.QIconEnginePlugin_new(&outptr_QIconEnginePlugin, &outptr_QObject)
	ret := newQIconEnginePlugin(outptr_QIconEnginePlugin, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQIconEnginePlugin2 constructs a new QIconEnginePlugin object.
func NewQIconEnginePlugin2(parent *QObject) *QIconEnginePlugin {
	var outptr_QIconEnginePlugin *C.QIconEnginePlugin = nil
	var outptr_QObject *C.QObject = nil

	C.QIconEnginePlugin_new2(parent.cPointer(), &outptr_QIconEnginePlugin, &outptr_QObject)
	ret := newQIconEnginePlugin(outptr_QIconEnginePlugin, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QIconEnginePlugin) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QIconEnginePlugin_MetaObject(this.h)))
}

func (this *QIconEnginePlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QIconEnginePlugin_Metacast(this.h, param1_Cstring))
}

func QIconEnginePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIconEnginePlugin_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIconEnginePlugin) Create(filename string) *QIconEngine {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return UnsafeNewQIconEngine(unsafe.Pointer(C.QIconEnginePlugin_Create(this.h, filename_ms)))
}

func QIconEnginePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIconEnginePlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIconEnginePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIconEnginePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QIconEnginePlugin) OnCreate(slot func(filename string) *QIconEngine) {
	C.QIconEnginePlugin_override_virtual_Create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIconEnginePlugin_Create
func miqt_exec_callback_QIconEnginePlugin_Create(self *C.QIconEnginePlugin, cb C.intptr_t, filename C.struct_miqt_string) *C.QIconEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(filename string) *QIconEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var filename_ms C.struct_miqt_string = filename
	filename_ret := C.GoStringN(filename_ms.data, C.int(int64(filename_ms.len)))
	C.free(unsafe.Pointer(filename_ms.data))
	slotval1 := filename_ret

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QIconEnginePlugin) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QIconEnginePlugin_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QIconEnginePlugin) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QIconEnginePlugin_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIconEnginePlugin_Event
func miqt_exec_callback_QIconEnginePlugin_Event(self *C.QIconEnginePlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QIconEnginePlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIconEnginePlugin) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QIconEnginePlugin_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QIconEnginePlugin) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QIconEnginePlugin_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIconEnginePlugin_EventFilter
func miqt_exec_callback_QIconEnginePlugin_EventFilter(self *C.QIconEnginePlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QIconEnginePlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QIconEnginePlugin) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QIconEnginePlugin_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIconEnginePlugin) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QIconEnginePlugin_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIconEnginePlugin_TimerEvent
func miqt_exec_callback_QIconEnginePlugin_TimerEvent(self *C.QIconEnginePlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QIconEnginePlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QIconEnginePlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QIconEnginePlugin_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIconEnginePlugin) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QIconEnginePlugin_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIconEnginePlugin_ChildEvent
func miqt_exec_callback_QIconEnginePlugin_ChildEvent(self *C.QIconEnginePlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QIconEnginePlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QIconEnginePlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QIconEnginePlugin_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIconEnginePlugin) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QIconEnginePlugin_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIconEnginePlugin_CustomEvent
func miqt_exec_callback_QIconEnginePlugin_CustomEvent(self *C.QIconEnginePlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QIconEnginePlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QIconEnginePlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QIconEnginePlugin_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIconEnginePlugin) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QIconEnginePlugin_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIconEnginePlugin_ConnectNotify
func miqt_exec_callback_QIconEnginePlugin_ConnectNotify(self *C.QIconEnginePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QIconEnginePlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QIconEnginePlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QIconEnginePlugin_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIconEnginePlugin) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QIconEnginePlugin_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIconEnginePlugin_DisconnectNotify
func miqt_exec_callback_QIconEnginePlugin_DisconnectNotify(self *C.QIconEnginePlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QIconEnginePlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QIconEnginePlugin) Delete() {
	C.QIconEnginePlugin_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIconEnginePlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QIconEnginePlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
