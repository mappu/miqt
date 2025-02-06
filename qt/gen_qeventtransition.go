package qt

/*

#include "gen_qeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QEventTransition struct {
	h *C.QEventTransition
	*QAbstractTransition
}

func (this *QEventTransition) cPointer() *C.QEventTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEventTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQEventTransition constructs the type using only CGO pointers.
func newQEventTransition(h *C.QEventTransition) *QEventTransition {
	if h == nil {
		return nil
	}
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	C.QEventTransition_virtbase(h, &outptr_QAbstractTransition)

	return &QEventTransition{h: h,
		QAbstractTransition: newQAbstractTransition(outptr_QAbstractTransition)}
}

// UnsafeNewQEventTransition constructs the type using only unsafe pointers.
func UnsafeNewQEventTransition(h unsafe.Pointer) *QEventTransition {
	return newQEventTransition((*C.QEventTransition)(h))
}

// NewQEventTransition constructs a new QEventTransition object.
func NewQEventTransition() *QEventTransition {

	return newQEventTransition(C.QEventTransition_new())
}

// NewQEventTransition2 constructs a new QEventTransition object.
func NewQEventTransition2(object *QObject, typeVal QEvent__Type) *QEventTransition {

	return newQEventTransition(C.QEventTransition_new2(object.cPointer(), (C.int)(typeVal)))
}

// NewQEventTransition3 constructs a new QEventTransition object.
func NewQEventTransition3(sourceState *QState) *QEventTransition {

	return newQEventTransition(C.QEventTransition_new3(sourceState.cPointer()))
}

// NewQEventTransition4 constructs a new QEventTransition object.
func NewQEventTransition4(object *QObject, typeVal QEvent__Type, sourceState *QState) *QEventTransition {

	return newQEventTransition(C.QEventTransition_new4(object.cPointer(), (C.int)(typeVal), sourceState.cPointer()))
}

func (this *QEventTransition) MetaObject() *QMetaObject {
	return newQMetaObject(C.QEventTransition_metaObject(this.h))
}

func (this *QEventTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QEventTransition_metacast(this.h, param1_Cstring))
}

func QEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventTransition) EventSource() *QObject {
	return newQObject(C.QEventTransition_eventSource(this.h))
}

func (this *QEventTransition) SetEventSource(object *QObject) {
	C.QEventTransition_setEventSource(this.h, object.cPointer())
}

func (this *QEventTransition) EventType() QEvent__Type {
	return (QEvent__Type)(C.QEventTransition_eventType(this.h))
}

func (this *QEventTransition) SetEventType(typeVal QEvent__Type) {
	C.QEventTransition_setEventType(this.h, (C.int)(typeVal))
}

func QEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QEventTransition that was directly constructed.
func (this *QEventTransition) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QEventTransition_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QEventTransition that was directly constructed.
func (this *QEventTransition) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QEventTransition_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QEventTransition that was directly constructed.
func (this *QEventTransition) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QEventTransition_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QEventTransition that was directly constructed.
func (this *QEventTransition) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QEventTransition_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QEventTransition) callVirtualBase_EventTest(event *QEvent) bool {

	return (bool)(C.QEventTransition_virtualbase_eventTest(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QEventTransition) OnEventTest(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QEventTransition_override_virtual_eventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_eventTest
func miqt_exec_callback_QEventTransition_eventTest(self *C.QEventTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QEventTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QEventTransition) callVirtualBase_OnTransition(event *QEvent) {

	C.QEventTransition_virtualbase_onTransition(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventTransition) OnOnTransition(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QEventTransition_override_virtual_onTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_onTransition
func miqt_exec_callback_QEventTransition_onTransition(self *C.QEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QEventTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QEventTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QEventTransition_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QEventTransition) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QEventTransition_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_event
func miqt_exec_callback_QEventTransition_event(self *C.QEventTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QEventTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QEventTransition) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QEventTransition_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QEventTransition) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QEventTransition_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_eventFilter
func miqt_exec_callback_QEventTransition_eventFilter(self *C.QEventTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QEventTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QEventTransition) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QEventTransition_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventTransition) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QEventTransition_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_timerEvent
func miqt_exec_callback_QEventTransition_timerEvent(self *C.QEventTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QEventTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QEventTransition) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QEventTransition_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventTransition) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QEventTransition_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_childEvent
func miqt_exec_callback_QEventTransition_childEvent(self *C.QEventTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QEventTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QEventTransition) callVirtualBase_CustomEvent(event *QEvent) {

	C.QEventTransition_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventTransition) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QEventTransition_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_customEvent
func miqt_exec_callback_QEventTransition_customEvent(self *C.QEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QEventTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QEventTransition) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QEventTransition_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QEventTransition) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QEventTransition_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_connectNotify
func miqt_exec_callback_QEventTransition_connectNotify(self *C.QEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QEventTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QEventTransition) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QEventTransition_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QEventTransition) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QEventTransition_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_disconnectNotify
func miqt_exec_callback_QEventTransition_disconnectNotify(self *C.QEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QEventTransition{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QEventTransition) Delete() {
	C.QEventTransition_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
