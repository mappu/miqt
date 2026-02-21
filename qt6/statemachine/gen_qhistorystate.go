package statemachine

/*

#include "gen_qhistorystate.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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

func (this *QHistoryState) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QHistoryState_metaObject(this.h)))
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

// Sender can only be called from a QHistoryState that was directly constructed.
func (this *QHistoryState) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QHistoryState_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QHistoryState that was directly constructed.
func (this *QHistoryState) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHistoryState_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QHistoryState that was directly constructed.
func (this *QHistoryState) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHistoryState_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QHistoryState that was directly constructed.
func (this *QHistoryState) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHistoryState_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QHistoryState) callVirtualBase_OnEntry(event *qt6.QEvent) {

	C.QHistoryState_virtualbase_onEntry(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHistoryState) OnOnEntry(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHistoryState_override_virtual_onEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_onEntry
func miqt_exec_callback_QHistoryState_onEntry(self *C.QHistoryState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHistoryState{h: self}).callVirtualBase_OnEntry, slotval1)

}

func (this *QHistoryState) callVirtualBase_OnExit(event *qt6.QEvent) {

	C.QHistoryState_virtualbase_onExit(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHistoryState) OnOnExit(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHistoryState_override_virtual_onExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_onExit
func miqt_exec_callback_QHistoryState_onExit(self *C.QHistoryState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHistoryState{h: self}).callVirtualBase_OnExit, slotval1)

}

func (this *QHistoryState) callVirtualBase_Event(e *qt6.QEvent) bool {

	return (bool)(C.QHistoryState_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QHistoryState) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QHistoryState_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_event
func miqt_exec_callback_QHistoryState_event(self *C.QHistoryState, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QHistoryState{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHistoryState) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QHistoryState_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHistoryState) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QHistoryState_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_eventFilter
func miqt_exec_callback_QHistoryState_eventFilter(self *C.QHistoryState, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHistoryState{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHistoryState) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QHistoryState_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QHistoryState) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QHistoryState_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_timerEvent
func miqt_exec_callback_QHistoryState_timerEvent(self *C.QHistoryState, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QHistoryState{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHistoryState) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QHistoryState_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QHistoryState) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QHistoryState_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_childEvent
func miqt_exec_callback_QHistoryState_childEvent(self *C.QHistoryState, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QHistoryState{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHistoryState) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QHistoryState_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHistoryState) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHistoryState_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_customEvent
func miqt_exec_callback_QHistoryState_customEvent(self *C.QHistoryState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHistoryState{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHistoryState) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QHistoryState_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHistoryState) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHistoryState_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_connectNotify
func miqt_exec_callback_QHistoryState_connectNotify(self *C.QHistoryState, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHistoryState{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHistoryState) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QHistoryState_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHistoryState) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHistoryState_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHistoryState_disconnectNotify
func miqt_exec_callback_QHistoryState_disconnectNotify(self *C.QHistoryState, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHistoryState{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QHistoryState) OnDefaultTransitionChanged(slot func()) {
	C.QHistoryState_connect_defaultTransitionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHistoryState_defaultTransitionChanged
func miqt_exec_callback_QHistoryState_defaultTransitionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHistoryState) OnDefaultStateChanged(slot func()) {
	C.QHistoryState_connect_defaultStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHistoryState_defaultStateChanged
func miqt_exec_callback_QHistoryState_defaultStateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHistoryState) OnHistoryTypeChanged(slot func()) {
	C.QHistoryState_connect_historyTypeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHistoryState_historyTypeChanged
func miqt_exec_callback_QHistoryState_historyTypeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
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
