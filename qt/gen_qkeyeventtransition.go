package qt

/*

#include "gen_qkeyeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QKeyEventTransition struct {
	h *C.QKeyEventTransition
	*QEventTransition
}

func (this *QKeyEventTransition) cPointer() *C.QKeyEventTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QKeyEventTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQKeyEventTransition constructs the type using only CGO pointers.
func newQKeyEventTransition(h *C.QKeyEventTransition) *QKeyEventTransition {
	if h == nil {
		return nil
	}
	var outptr_QEventTransition *C.QEventTransition = nil
	C.QKeyEventTransition_virtbase(h, &outptr_QEventTransition)

	return &QKeyEventTransition{h: h,
		QEventTransition: newQEventTransition(outptr_QEventTransition)}
}

// UnsafeNewQKeyEventTransition constructs the type using only unsafe pointers.
func UnsafeNewQKeyEventTransition(h unsafe.Pointer) *QKeyEventTransition {
	return newQKeyEventTransition((*C.QKeyEventTransition)(h))
}

// NewQKeyEventTransition constructs a new QKeyEventTransition object.
func NewQKeyEventTransition() *QKeyEventTransition {

	return newQKeyEventTransition(C.QKeyEventTransition_new())
}

// NewQKeyEventTransition2 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition2(object *QObject, typeVal QEvent__Type, key int) *QKeyEventTransition {

	return newQKeyEventTransition(C.QKeyEventTransition_new2(object.cPointer(), (C.int)(typeVal), (C.int)(key)))
}

// NewQKeyEventTransition3 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition3(sourceState *QState) *QKeyEventTransition {

	return newQKeyEventTransition(C.QKeyEventTransition_new3(sourceState.cPointer()))
}

// NewQKeyEventTransition4 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition4(object *QObject, typeVal QEvent__Type, key int, sourceState *QState) *QKeyEventTransition {

	return newQKeyEventTransition(C.QKeyEventTransition_new4(object.cPointer(), (C.int)(typeVal), (C.int)(key), sourceState.cPointer()))
}

func (this *QKeyEventTransition) MetaObject() *QMetaObject {
	return newQMetaObject(C.QKeyEventTransition_MetaObject(this.h))
}

func (this *QKeyEventTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QKeyEventTransition_Metacast(this.h, param1_Cstring))
}

func QKeyEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeyEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeyEventTransition) Key() int {
	return (int)(C.QKeyEventTransition_Key(this.h))
}

func (this *QKeyEventTransition) SetKey(key int) {
	C.QKeyEventTransition_SetKey(this.h, (C.int)(key))
}

func (this *QKeyEventTransition) ModifierMask() KeyboardModifier {
	return (KeyboardModifier)(C.QKeyEventTransition_ModifierMask(this.h))
}

func (this *QKeyEventTransition) SetModifierMask(modifiers KeyboardModifier) {
	C.QKeyEventTransition_SetModifierMask(this.h, (C.int)(modifiers))
}

func QKeyEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeyEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeyEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeyEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeyEventTransition) callVirtualBase_OnTransition(event *QEvent) {

	C.QKeyEventTransition_virtualbase_OnTransition(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeyEventTransition) OnOnTransition(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QKeyEventTransition_override_virtual_OnTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_OnTransition
func miqt_exec_callback_QKeyEventTransition_OnTransition(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_EventTest(event *QEvent) bool {

	return (bool)(C.QKeyEventTransition_virtualbase_EventTest(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QKeyEventTransition) OnEventTest(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QKeyEventTransition_override_virtual_EventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_EventTest
func miqt_exec_callback_QKeyEventTransition_EventTest(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QKeyEventTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QKeyEventTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QKeyEventTransition_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QKeyEventTransition) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QKeyEventTransition_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_Event
func miqt_exec_callback_QKeyEventTransition_Event(self *C.QKeyEventTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QKeyEventTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QKeyEventTransition) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QKeyEventTransition_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QKeyEventTransition) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QKeyEventTransition_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_EventFilter
func miqt_exec_callback_QKeyEventTransition_EventFilter(self *C.QKeyEventTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QKeyEventTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QKeyEventTransition) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QKeyEventTransition_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeyEventTransition) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QKeyEventTransition_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_TimerEvent
func miqt_exec_callback_QKeyEventTransition_TimerEvent(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QKeyEventTransition_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeyEventTransition) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QKeyEventTransition_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_ChildEvent
func miqt_exec_callback_QKeyEventTransition_ChildEvent(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_CustomEvent(event *QEvent) {

	C.QKeyEventTransition_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeyEventTransition) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QKeyEventTransition_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_CustomEvent
func miqt_exec_callback_QKeyEventTransition_CustomEvent(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QKeyEventTransition_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QKeyEventTransition) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QKeyEventTransition_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_ConnectNotify
func miqt_exec_callback_QKeyEventTransition_ConnectNotify(self *C.QKeyEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QKeyEventTransition_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QKeyEventTransition) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QKeyEventTransition_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_DisconnectNotify
func miqt_exec_callback_QKeyEventTransition_DisconnectNotify(self *C.QKeyEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QKeyEventTransition) Delete() {
	C.QKeyEventTransition_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeyEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeyEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
