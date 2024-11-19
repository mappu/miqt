package qt

/*

#include "gen_qobjectcleanuphandler.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QObjectCleanupHandler struct {
	h          *C.QObjectCleanupHandler
	isSubclass bool
	*QObject
}

func (this *QObjectCleanupHandler) cPointer() *C.QObjectCleanupHandler {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QObjectCleanupHandler) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQObjectCleanupHandler constructs the type using only CGO pointers.
func newQObjectCleanupHandler(h *C.QObjectCleanupHandler, h_QObject *C.QObject) *QObjectCleanupHandler {
	if h == nil {
		return nil
	}
	return &QObjectCleanupHandler{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQObjectCleanupHandler constructs the type using only unsafe pointers.
func UnsafeNewQObjectCleanupHandler(h unsafe.Pointer, h_QObject unsafe.Pointer) *QObjectCleanupHandler {
	if h == nil {
		return nil
	}

	return &QObjectCleanupHandler{h: (*C.QObjectCleanupHandler)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQObjectCleanupHandler constructs a new QObjectCleanupHandler object.
func NewQObjectCleanupHandler() *QObjectCleanupHandler {
	var outptr_QObjectCleanupHandler *C.QObjectCleanupHandler = nil
	var outptr_QObject *C.QObject = nil

	C.QObjectCleanupHandler_new(&outptr_QObjectCleanupHandler, &outptr_QObject)
	ret := newQObjectCleanupHandler(outptr_QObjectCleanupHandler, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QObjectCleanupHandler) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QObjectCleanupHandler_MetaObject(this.h)))
}

func (this *QObjectCleanupHandler) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QObjectCleanupHandler_Metacast(this.h, param1_Cstring))
}

func QObjectCleanupHandler_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QObjectCleanupHandler_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QObjectCleanupHandler_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QObjectCleanupHandler_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QObjectCleanupHandler) Add(object *QObject) *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QObjectCleanupHandler_Add(this.h, object.cPointer())))
}

func (this *QObjectCleanupHandler) Remove(object *QObject) {
	C.QObjectCleanupHandler_Remove(this.h, object.cPointer())
}

func (this *QObjectCleanupHandler) IsEmpty() bool {
	return (bool)(C.QObjectCleanupHandler_IsEmpty(this.h))
}

func (this *QObjectCleanupHandler) Clear() {
	C.QObjectCleanupHandler_Clear(this.h)
}

func QObjectCleanupHandler_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QObjectCleanupHandler_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QObjectCleanupHandler_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QObjectCleanupHandler_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QObjectCleanupHandler_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QObjectCleanupHandler_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QObjectCleanupHandler_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QObjectCleanupHandler_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QObjectCleanupHandler) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QObjectCleanupHandler_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QObjectCleanupHandler) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QObjectCleanupHandler_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObjectCleanupHandler_Event
func miqt_exec_callback_QObjectCleanupHandler_Event(self *C.QObjectCleanupHandler, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QObjectCleanupHandler) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QObjectCleanupHandler_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QObjectCleanupHandler) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QObjectCleanupHandler_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObjectCleanupHandler_EventFilter
func miqt_exec_callback_QObjectCleanupHandler_EventFilter(self *C.QObjectCleanupHandler, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QObjectCleanupHandler) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QObjectCleanupHandler_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QObjectCleanupHandler) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QObjectCleanupHandler_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObjectCleanupHandler_TimerEvent
func miqt_exec_callback_QObjectCleanupHandler_TimerEvent(self *C.QObjectCleanupHandler, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QObjectCleanupHandler) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QObjectCleanupHandler_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QObjectCleanupHandler) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QObjectCleanupHandler_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObjectCleanupHandler_ChildEvent
func miqt_exec_callback_QObjectCleanupHandler_ChildEvent(self *C.QObjectCleanupHandler, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QObjectCleanupHandler) callVirtualBase_CustomEvent(event *QEvent) {

	C.QObjectCleanupHandler_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QObjectCleanupHandler) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QObjectCleanupHandler_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObjectCleanupHandler_CustomEvent
func miqt_exec_callback_QObjectCleanupHandler_CustomEvent(self *C.QObjectCleanupHandler, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QObjectCleanupHandler) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QObjectCleanupHandler_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QObjectCleanupHandler) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QObjectCleanupHandler_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObjectCleanupHandler_ConnectNotify
func miqt_exec_callback_QObjectCleanupHandler_ConnectNotify(self *C.QObjectCleanupHandler, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QObjectCleanupHandler) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QObjectCleanupHandler_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QObjectCleanupHandler) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QObjectCleanupHandler_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObjectCleanupHandler_DisconnectNotify
func miqt_exec_callback_QObjectCleanupHandler_DisconnectNotify(self *C.QObjectCleanupHandler, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QObjectCleanupHandler) Delete() {
	C.QObjectCleanupHandler_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QObjectCleanupHandler) GoGC() {
	runtime.SetFinalizer(this, func(this *QObjectCleanupHandler) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
