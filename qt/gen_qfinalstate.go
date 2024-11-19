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
	h          *C.QFinalState
	isSubclass bool
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
func newQFinalState(h *C.QFinalState, h_QAbstractState *C.QAbstractState, h_QObject *C.QObject) *QFinalState {
	if h == nil {
		return nil
	}
	return &QFinalState{h: h,
		QAbstractState: newQAbstractState(h_QAbstractState, h_QObject)}
}

// UnsafeNewQFinalState constructs the type using only unsafe pointers.
func UnsafeNewQFinalState(h unsafe.Pointer, h_QAbstractState unsafe.Pointer, h_QObject unsafe.Pointer) *QFinalState {
	if h == nil {
		return nil
	}

	return &QFinalState{h: (*C.QFinalState)(h),
		QAbstractState: UnsafeNewQAbstractState(h_QAbstractState, h_QObject)}
}

// NewQFinalState constructs a new QFinalState object.
func NewQFinalState() *QFinalState {
	var outptr_QFinalState *C.QFinalState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QFinalState_new(&outptr_QFinalState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQFinalState(outptr_QFinalState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQFinalState2 constructs a new QFinalState object.
func NewQFinalState2(parent *QState) *QFinalState {
	var outptr_QFinalState *C.QFinalState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QFinalState_new2(parent.cPointer(), &outptr_QFinalState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQFinalState(outptr_QFinalState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QFinalState) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QFinalState_MetaObject(this.h)))
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
	C.QFinalState_override_virtual_OnEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFinalState_OnEntry
func miqt_exec_callback_QFinalState_OnEntry(self *C.QFinalState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QFinalState{h: self}).callVirtualBase_OnEntry, slotval1)

}

func (this *QFinalState) callVirtualBase_OnExit(event *QEvent) {

	C.QFinalState_virtualbase_OnExit(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFinalState) OnOnExit(slot func(super func(event *QEvent), event *QEvent)) {
	C.QFinalState_override_virtual_OnExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFinalState_OnExit
func miqt_exec_callback_QFinalState_OnExit(self *C.QFinalState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QFinalState{h: self}).callVirtualBase_OnExit, slotval1)

}

func (this *QFinalState) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QFinalState_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QFinalState) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	C.QFinalState_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFinalState_Event
func miqt_exec_callback_QFinalState_Event(self *C.QFinalState, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QFinalState{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QFinalState) Delete() {
	C.QFinalState_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFinalState) GoGC() {
	runtime.SetFinalizer(this, func(this *QFinalState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
