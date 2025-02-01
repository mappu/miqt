package qt6

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
	h *C.QObjectCleanupHandler
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
func newQObjectCleanupHandler(h *C.QObjectCleanupHandler) *QObjectCleanupHandler {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QObjectCleanupHandler_virtbase(h, &outptr_QObject)

	return &QObjectCleanupHandler{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQObjectCleanupHandler constructs the type using only unsafe pointers.
func UnsafeNewQObjectCleanupHandler(h unsafe.Pointer) *QObjectCleanupHandler {
	return newQObjectCleanupHandler((*C.QObjectCleanupHandler)(h))
}

// NewQObjectCleanupHandler constructs a new QObjectCleanupHandler object.
func NewQObjectCleanupHandler() *QObjectCleanupHandler {

	return newQObjectCleanupHandler(C.QObjectCleanupHandler_new())
}

func (this *QObjectCleanupHandler) MetaObject() *QMetaObject {
	return newQMetaObject(C.QObjectCleanupHandler_metaObject(this.h))
}

func (this *QObjectCleanupHandler) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QObjectCleanupHandler_metacast(this.h, param1_Cstring))
}

func QObjectCleanupHandler_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QObjectCleanupHandler_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QObjectCleanupHandler) Add(object *QObject) *QObject {
	return newQObject(C.QObjectCleanupHandler_add(this.h, object.cPointer()))
}

func (this *QObjectCleanupHandler) Remove(object *QObject) {
	C.QObjectCleanupHandler_remove(this.h, object.cPointer())
}

func (this *QObjectCleanupHandler) IsEmpty() bool {
	return (bool)(C.QObjectCleanupHandler_isEmpty(this.h))
}

func (this *QObjectCleanupHandler) Clear() {
	C.QObjectCleanupHandler_clear(this.h)
}

func QObjectCleanupHandler_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QObjectCleanupHandler_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QObjectCleanupHandler_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QObjectCleanupHandler_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QObjectCleanupHandler) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QObjectCleanupHandler_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QObjectCleanupHandler) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QObjectCleanupHandler_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObjectCleanupHandler_event
func miqt_exec_callback_QObjectCleanupHandler_event(self *C.QObjectCleanupHandler, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QObjectCleanupHandler) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QObjectCleanupHandler_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QObjectCleanupHandler) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QObjectCleanupHandler_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObjectCleanupHandler_eventFilter
func miqt_exec_callback_QObjectCleanupHandler_eventFilter(self *C.QObjectCleanupHandler, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QObjectCleanupHandler) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QObjectCleanupHandler_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QObjectCleanupHandler) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QObjectCleanupHandler_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObjectCleanupHandler_timerEvent
func miqt_exec_callback_QObjectCleanupHandler_timerEvent(self *C.QObjectCleanupHandler, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QObjectCleanupHandler) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QObjectCleanupHandler_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QObjectCleanupHandler) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QObjectCleanupHandler_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObjectCleanupHandler_childEvent
func miqt_exec_callback_QObjectCleanupHandler_childEvent(self *C.QObjectCleanupHandler, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QObjectCleanupHandler) callVirtualBase_CustomEvent(event *QEvent) {

	C.QObjectCleanupHandler_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QObjectCleanupHandler) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QObjectCleanupHandler_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObjectCleanupHandler_customEvent
func miqt_exec_callback_QObjectCleanupHandler_customEvent(self *C.QObjectCleanupHandler, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QObjectCleanupHandler) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QObjectCleanupHandler_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QObjectCleanupHandler) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QObjectCleanupHandler_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObjectCleanupHandler_connectNotify
func miqt_exec_callback_QObjectCleanupHandler_connectNotify(self *C.QObjectCleanupHandler, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QObjectCleanupHandler) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QObjectCleanupHandler_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QObjectCleanupHandler) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QObjectCleanupHandler_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObjectCleanupHandler_disconnectNotify
func miqt_exec_callback_QObjectCleanupHandler_disconnectNotify(self *C.QObjectCleanupHandler, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QObjectCleanupHandler{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QObjectCleanupHandler) Delete() {
	C.QObjectCleanupHandler_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QObjectCleanupHandler) GoGC() {
	runtime.SetFinalizer(this, func(this *QObjectCleanupHandler) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
