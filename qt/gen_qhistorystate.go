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
	h *C.QHistoryState
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
func newQHistoryState(h *C.QHistoryState) *QHistoryState {
	if h == nil {
		return nil
	}
	var outptr_QAbstractState *C.QAbstractState = nil
	C.QHistoryState_virtbase(h, &outptr_QAbstractState)

	return &QHistoryState{h: h,
		QAbstractState: newQAbstractState(outptr_QAbstractState)}
}

// UnsafeNewQHistoryState constructs the type using only unsafe pointers.
func UnsafeNewQHistoryState(h unsafe.Pointer) *QHistoryState {
	return newQHistoryState((*C.QHistoryState)(h))
}

// NewQHistoryState constructs a new QHistoryState object.
func NewQHistoryState() *QHistoryState {

	return newQHistoryState(C.QHistoryState_new())
}

// NewQHistoryState2 constructs a new QHistoryState object.
func NewQHistoryState2(typeVal QHistoryState__HistoryType) *QHistoryState {

	return newQHistoryState(C.QHistoryState_new2((C.int)(typeVal)))
}

// NewQHistoryState3 constructs a new QHistoryState object.
func NewQHistoryState3(parent *QState) *QHistoryState {

	return newQHistoryState(C.QHistoryState_new3(parent.cPointer()))
}

// NewQHistoryState4 constructs a new QHistoryState object.
func NewQHistoryState4(typeVal QHistoryState__HistoryType, parent *QState) *QHistoryState {

	return newQHistoryState(C.QHistoryState_new4((C.int)(typeVal), parent.cPointer()))
}

func (this *QHistoryState) MetaObject() *QMetaObject {
	return newQMetaObject(C.QHistoryState_metaObject(this.h))
}

func (this *QHistoryState) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHistoryState_metacast(this.h, param1_Cstring))
}

func QHistoryState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHistoryState) DefaultTransition() *QAbstractTransition {
	return newQAbstractTransition(C.QHistoryState_defaultTransition(this.h))
}

func (this *QHistoryState) SetDefaultTransition(transition *QAbstractTransition) {
	C.QHistoryState_setDefaultTransition(this.h, transition.cPointer())
}

func (this *QHistoryState) DefaultState() *QAbstractState {
	return newQAbstractState(C.QHistoryState_defaultState(this.h))
}

func (this *QHistoryState) SetDefaultState(state *QAbstractState) {
	C.QHistoryState_setDefaultState(this.h, state.cPointer())
}

func (this *QHistoryState) HistoryType() QHistoryState__HistoryType {
	return (QHistoryState__HistoryType)(C.QHistoryState_historyType(this.h))
}

func (this *QHistoryState) SetHistoryType(typeVal QHistoryState__HistoryType) {
	C.QHistoryState_setHistoryType(this.h, (C.int)(typeVal))
}

func QHistoryState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHistoryState) callVirtualBase_OnEntry(event *QEvent) {

	C.QHistoryState_virtualbase_onEntry(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHistoryState) OnonEntry(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QHistoryState_override_virtual_onEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_onEntry
func miqt_exec_callback_QHistoryState_onEntry(self *C.QHistoryState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHistoryState{h: self}).callVirtualBase_OnEntry, slotval1)

}

func (this *QHistoryState) callVirtualBase_OnExit(event *QEvent) {

	C.QHistoryState_virtualbase_onExit(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHistoryState) OnonExit(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QHistoryState_override_virtual_onExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_onExit
func miqt_exec_callback_QHistoryState_onExit(self *C.QHistoryState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHistoryState{h: self}).callVirtualBase_OnExit, slotval1)

}

func (this *QHistoryState) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QHistoryState_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QHistoryState) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QHistoryState_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_event
func miqt_exec_callback_QHistoryState_event(self *C.QHistoryState, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QHistoryState{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHistoryState) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QHistoryState_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QHistoryState) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QHistoryState_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_eventFilter
func miqt_exec_callback_QHistoryState_eventFilter(self *C.QHistoryState, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QHistoryState{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHistoryState) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QHistoryState_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHistoryState) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QHistoryState_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_timerEvent
func miqt_exec_callback_QHistoryState_timerEvent(self *C.QHistoryState, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QHistoryState{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHistoryState) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QHistoryState_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHistoryState) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QHistoryState_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_childEvent
func miqt_exec_callback_QHistoryState_childEvent(self *C.QHistoryState, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QHistoryState{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHistoryState) callVirtualBase_CustomEvent(event *QEvent) {

	C.QHistoryState_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHistoryState) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QHistoryState_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_customEvent
func miqt_exec_callback_QHistoryState_customEvent(self *C.QHistoryState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHistoryState{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHistoryState) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QHistoryState_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QHistoryState) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QHistoryState_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_connectNotify
func miqt_exec_callback_QHistoryState_connectNotify(self *C.QHistoryState, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QHistoryState{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHistoryState) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QHistoryState_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QHistoryState) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QHistoryState_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_disconnectNotify
func miqt_exec_callback_QHistoryState_disconnectNotify(self *C.QHistoryState, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QHistoryState{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHistoryState) Delete() {
	C.QHistoryState_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHistoryState) GoGC() {
	runtime.SetFinalizer(this, func(this *QHistoryState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
