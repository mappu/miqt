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
	return newQMetaObject(C.QEventTransition_MetaObject(this.h))
}

func (this *QEventTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QEventTransition_Metacast(this.h, param1_Cstring))
}

func QEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventTransition) EventSource() *QObject {
	return newQObject(C.QEventTransition_EventSource(this.h))
}

func (this *QEventTransition) SetEventSource(object *QObject) {
	C.QEventTransition_SetEventSource(this.h, object.cPointer())
}

func (this *QEventTransition) EventType() QEvent__Type {
	return (QEvent__Type)(C.QEventTransition_EventType(this.h))
}

func (this *QEventTransition) SetEventType(typeVal QEvent__Type) {
	C.QEventTransition_SetEventType(this.h, (C.int)(typeVal))
}

func QEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventTransition) callVirtualBase_EventTest(event *QEvent) bool {

	return (bool)(C.QEventTransition_virtualbase_EventTest(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QEventTransition) OnEventTest(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QEventTransition_override_virtual_EventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_EventTest
func miqt_exec_callback_QEventTransition_EventTest(self *C.QEventTransition, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QEventTransition_virtualbase_OnTransition(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventTransition) OnOnTransition(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QEventTransition_override_virtual_OnTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_OnTransition
func miqt_exec_callback_QEventTransition_OnTransition(self *C.QEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QEventTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QEventTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QEventTransition_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QEventTransition) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QEventTransition_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventTransition_Event
func miqt_exec_callback_QEventTransition_Event(self *C.QEventTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QEventTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QEventTransition) Delete() {
	C.QEventTransition_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
