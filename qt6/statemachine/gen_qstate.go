package statemachine

/*

#include "gen_qstate.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QState__ChildMode int

const (
	QState__ExclusiveStates QState__ChildMode = 0
	QState__ParallelStates  QState__ChildMode = 1
)

type QState__RestorePolicy int

const (
	QState__DontRestoreProperties QState__RestorePolicy = 0
	QState__RestoreProperties     QState__RestorePolicy = 1
)

type QState struct {
	h *C.QState
	*QAbstractState
}

func (this *QState) cPointer() *C.QState {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QState) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQState constructs the type using only CGO pointers.
func newQState(h *C.QState) *QState {
	if h == nil {
		return nil
	}
	var outptr_QAbstractState *C.QAbstractState = nil
	C.QState_virtbase(h, &outptr_QAbstractState)

	return &QState{h: h,
		QAbstractState: newQAbstractState(outptr_QAbstractState)}
}

// UnsafeNewQState constructs the type using only unsafe pointers.
func UnsafeNewQState(h unsafe.Pointer) *QState {
	return newQState((*C.QState)(h))
}

// NewQState constructs a new QState object.
func NewQState() *QState {

	return newQState(C.QState_new())
}

// NewQState2 constructs a new QState object.
func NewQState2(childMode QState__ChildMode) *QState {

	return newQState(C.QState_new2((C.int)(childMode)))
}

// NewQState3 constructs a new QState object.
func NewQState3(parent *QState) *QState {

	return newQState(C.QState_new3(parent.cPointer()))
}

// NewQState4 constructs a new QState object.
func NewQState4(childMode QState__ChildMode, parent *QState) *QState {

	return newQState(C.QState_new4((C.int)(childMode), parent.cPointer()))
}

func (this *QState) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QState_metaObject(this.h)))
}

func (this *QState) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QState_metacast(this.h, param1_Cstring))
}

func QState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QState_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QState) ErrorState() *QAbstractState {
	return newQAbstractState(C.QState_errorState(this.h))
}

func (this *QState) SetErrorState(state *QAbstractState) {
	C.QState_setErrorState(this.h, state.cPointer())
}

func (this *QState) AddTransition(transition *QAbstractTransition) {
	C.QState_addTransition(this.h, transition.cPointer())
}

func (this *QState) AddTransition2(sender *qt6.QObject, signal string, target *QAbstractState) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	return newQSignalTransition(C.QState_addTransition2(this.h, (*C.QObject)(sender.UnsafePointer()), signal_Cstring, target.cPointer()))
}

func (this *QState) AddTransitionWithTarget(target *QAbstractState) *QAbstractTransition {
	return newQAbstractTransition(C.QState_addTransitionWithTarget(this.h, target.cPointer()))
}

func (this *QState) RemoveTransition(transition *QAbstractTransition) {
	C.QState_removeTransition(this.h, transition.cPointer())
}

func (this *QState) Transitions() []*QAbstractTransition {
	var _ma C.struct_miqt_array = C.QState_transitions(this.h)
	_ret := make([]*QAbstractTransition, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractTransition)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractTransition(_outCast[i])
	}
	return _ret
}

func (this *QState) InitialState() *QAbstractState {
	return newQAbstractState(C.QState_initialState(this.h))
}

func (this *QState) SetInitialState(state *QAbstractState) {
	C.QState_setInitialState(this.h, state.cPointer())
}

func (this *QState) ChildMode() QState__ChildMode {
	return (QState__ChildMode)(C.QState_childMode(this.h))
}

func (this *QState) SetChildMode(mode QState__ChildMode) {
	C.QState_setChildMode(this.h, (C.int)(mode))
}

func (this *QState) AssignProperty(object *qt6.QObject, name string, value *qt6.QVariant) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QState_assignProperty(this.h, (*C.QObject)(object.UnsafePointer()), name_Cstring, (*C.QVariant)(value.UnsafePointer()))
}

func QState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QState_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QState_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QState that was directly constructed.
func (this *QState) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QState_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QState that was directly constructed.
func (this *QState) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QState_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QState that was directly constructed.
func (this *QState) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QState_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QState that was directly constructed.
func (this *QState) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QState_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QState) callVirtualBase_OnEntry(event *qt6.QEvent) {

	C.QState_virtualbase_onEntry(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QState) OnOnEntry(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QState_override_virtual_onEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QState_onEntry
func miqt_exec_callback_QState_onEntry(self *C.QState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QState{h: self}).callVirtualBase_OnEntry, slotval1)

}

func (this *QState) callVirtualBase_OnExit(event *qt6.QEvent) {

	C.QState_virtualbase_onExit(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QState) OnOnExit(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QState_override_virtual_onExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QState_onExit
func miqt_exec_callback_QState_onExit(self *C.QState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QState{h: self}).callVirtualBase_OnExit, slotval1)

}

func (this *QState) callVirtualBase_Event(e *qt6.QEvent) bool {

	return (bool)(C.QState_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QState) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QState_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QState_event
func miqt_exec_callback_QState_event(self *C.QState, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QState{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QState) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QState_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QState) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QState_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QState_eventFilter
func miqt_exec_callback_QState_eventFilter(self *C.QState, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QState{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QState) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QState_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QState) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QState_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QState_timerEvent
func miqt_exec_callback_QState_timerEvent(self *C.QState, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QState{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QState) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QState_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QState) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QState_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QState_childEvent
func miqt_exec_callback_QState_childEvent(self *C.QState, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QState{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QState) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QState_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QState) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QState_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QState_customEvent
func miqt_exec_callback_QState_customEvent(self *C.QState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QState{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QState) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QState_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QState) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QState_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QState_connectNotify
func miqt_exec_callback_QState_connectNotify(self *C.QState, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QState{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QState) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QState_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QState) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QState_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QState_disconnectNotify
func miqt_exec_callback_QState_disconnectNotify(self *C.QState, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QState{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QState) OnFinished(slot func()) {
	C.QState_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QState_finished
func miqt_exec_callback_QState_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QState) OnPropertiesAssigned(slot func()) {
	C.QState_connect_propertiesAssigned(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QState_propertiesAssigned
func miqt_exec_callback_QState_propertiesAssigned(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QState) OnChildModeChanged(slot func()) {
	C.QState_connect_childModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QState_childModeChanged
func miqt_exec_callback_QState_childModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QState) OnInitialStateChanged(slot func()) {
	C.QState_connect_initialStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QState_initialStateChanged
func miqt_exec_callback_QState_initialStateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QState) OnErrorStateChanged(slot func()) {
	C.QState_connect_errorStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QState_errorStateChanged
func miqt_exec_callback_QState_errorStateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

// Delete this object from C++ memory.
func (this *QState) Delete() {
	C.QState_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QState) GoGC() {
	runtime.SetFinalizer(this, func(this *QState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
