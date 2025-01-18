package qt

/*

#include "gen_qfinalstate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFinalState struct {
	h *C.QFinalState
	*QAbstractState
}

func (this *QFinalState) cPointer() *C.QFinalState {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFinalState) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFinalState constructs the type using only CGO pointers.
func newQFinalState(h *C.QFinalState) *QFinalState {
	if h == nil {
		return nil
	}
	var outptr_QAbstractState *C.QAbstractState = nil
	C.QFinalState_virtbase(h, &outptr_QAbstractState)

	return &QFinalState{h: h,
		QAbstractState: newQAbstractState(outptr_QAbstractState)}
}

// UnsafeNewQFinalState constructs the type using only unsafe pointers.
func UnsafeNewQFinalState(h unsafe.Pointer) *QFinalState {
	return newQFinalState((*C.QFinalState)(h))
}

// NewQFinalState constructs a new QFinalState object.
func NewQFinalState() *QFinalState {

	return newQFinalState(C.QFinalState_new())
}

// NewQFinalState2 constructs a new QFinalState object.
func NewQFinalState2(parent *QState) *QFinalState {

	return newQFinalState(C.QFinalState_new2(parent.cPointer()))
}

func (this *QFinalState) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFinalState_MetaObject(this.h))
}

func (this *QFinalState) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFinalState_Metacast(this.h, param1_Cstring))
}

func QFinalState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFinalState_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFinalState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFinalState_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFinalState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFinalState_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFinalState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFinalState_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFinalState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFinalState_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFinalState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFinalState_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFinalState) callVirtualBase_OnEntry(event *QEvent) {

	C.QFinalState_virtualbase_OnEntry(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFinalState) OnOnEntry(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFinalState_override_virtual_OnEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFinalState_OnEntry
func miqt_exec_callback_QFinalState_OnEntry(self *C.QFinalState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFinalState{h: self}).callVirtualBase_OnEntry, slotval1)

}

func (this *QFinalState) callVirtualBase_OnExit(event *QEvent) {

	C.QFinalState_virtualbase_OnExit(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFinalState) OnOnExit(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFinalState_override_virtual_OnExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFinalState_OnExit
func miqt_exec_callback_QFinalState_OnExit(self *C.QFinalState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFinalState{h: self}).callVirtualBase_OnExit, slotval1)

}

func (this *QFinalState) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QFinalState_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QFinalState) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QFinalState_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFinalState_Event
func miqt_exec_callback_QFinalState_Event(self *C.QFinalState, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QFinalState{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QFinalState) Delete() {
	C.QFinalState_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFinalState) GoGC() {
	runtime.SetFinalizer(this, func(this *QFinalState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
