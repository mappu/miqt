package qt

/*

#include "gen_qhistorystate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHistoryState__HistoryType int

const (
	QHistoryState__ShallowHistory QHistoryState__HistoryType = 0
	QHistoryState__DeepHistory    QHistoryState__HistoryType = 1
)

type QHistoryState struct {
	h          *C.QHistoryState
	isSubclass bool
	*QAbstractState
}

func (this *QHistoryState) cPointer() *C.QHistoryState {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHistoryState) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHistoryState constructs the type using only CGO pointers.
func newQHistoryState(h *C.QHistoryState, h_QAbstractState *C.QAbstractState, h_QObject *C.QObject) *QHistoryState {
	if h == nil {
		return nil
	}
	return &QHistoryState{h: h,
		QAbstractState: newQAbstractState(h_QAbstractState, h_QObject)}
}

// UnsafeNewQHistoryState constructs the type using only unsafe pointers.
func UnsafeNewQHistoryState(h unsafe.Pointer, h_QAbstractState unsafe.Pointer, h_QObject unsafe.Pointer) *QHistoryState {
	if h == nil {
		return nil
	}

	return &QHistoryState{h: (*C.QHistoryState)(h),
		QAbstractState: UnsafeNewQAbstractState(h_QAbstractState, h_QObject)}
}

// NewQHistoryState constructs a new QHistoryState object.
func NewQHistoryState() *QHistoryState {
	var outptr_QHistoryState *C.QHistoryState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QHistoryState_new(&outptr_QHistoryState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQHistoryState(outptr_QHistoryState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQHistoryState2 constructs a new QHistoryState object.
func NewQHistoryState2(typeVal QHistoryState__HistoryType) *QHistoryState {
	var outptr_QHistoryState *C.QHistoryState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QHistoryState_new2((C.int)(typeVal), &outptr_QHistoryState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQHistoryState(outptr_QHistoryState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQHistoryState3 constructs a new QHistoryState object.
func NewQHistoryState3(parent *QState) *QHistoryState {
	var outptr_QHistoryState *C.QHistoryState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QHistoryState_new3(parent.cPointer(), &outptr_QHistoryState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQHistoryState(outptr_QHistoryState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQHistoryState4 constructs a new QHistoryState object.
func NewQHistoryState4(typeVal QHistoryState__HistoryType, parent *QState) *QHistoryState {
	var outptr_QHistoryState *C.QHistoryState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QHistoryState_new4((C.int)(typeVal), parent.cPointer(), &outptr_QHistoryState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQHistoryState(outptr_QHistoryState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QHistoryState) MetaObject() *QMetaObject {
	return newQMetaObject(C.QHistoryState_MetaObject(this.h))
}

func (this *QHistoryState) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHistoryState_Metacast(this.h, param1_Cstring))
}

func QHistoryState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHistoryState) DefaultTransition() *QAbstractTransition {
	return newQAbstractTransition(C.QHistoryState_DefaultTransition(this.h), nil)
}

func (this *QHistoryState) SetDefaultTransition(transition *QAbstractTransition) {
	C.QHistoryState_SetDefaultTransition(this.h, transition.cPointer())
}

func (this *QHistoryState) DefaultState() *QAbstractState {
	return newQAbstractState(C.QHistoryState_DefaultState(this.h), nil)
}

func (this *QHistoryState) SetDefaultState(state *QAbstractState) {
	C.QHistoryState_SetDefaultState(this.h, state.cPointer())
}

func (this *QHistoryState) HistoryType() QHistoryState__HistoryType {
	return (QHistoryState__HistoryType)(C.QHistoryState_HistoryType(this.h))
}

func (this *QHistoryState) SetHistoryType(typeVal QHistoryState__HistoryType) {
	C.QHistoryState_SetHistoryType(this.h, (C.int)(typeVal))
}

func QHistoryState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHistoryState) callVirtualBase_OnEntry(event *QEvent) {

	C.QHistoryState_virtualbase_OnEntry(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHistoryState) OnOnEntry(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHistoryState_override_virtual_OnEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHistoryState_OnEntry
func miqt_exec_callback_QHistoryState_OnEntry(self *C.QHistoryState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHistoryState{h: self}).callVirtualBase_OnEntry, slotval1)

}

func (this *QHistoryState) callVirtualBase_OnExit(event *QEvent) {

	C.QHistoryState_virtualbase_OnExit(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHistoryState) OnOnExit(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHistoryState_override_virtual_OnExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHistoryState_OnExit
func miqt_exec_callback_QHistoryState_OnExit(self *C.QHistoryState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHistoryState{h: self}).callVirtualBase_OnExit, slotval1)

}

func (this *QHistoryState) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QHistoryState_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QHistoryState) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHistoryState_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHistoryState_Event
func miqt_exec_callback_QHistoryState_Event(self *C.QHistoryState, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QHistoryState{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QHistoryState) Delete() {
	C.QHistoryState_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHistoryState) GoGC() {
	runtime.SetFinalizer(this, func(this *QHistoryState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
