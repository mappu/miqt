package statemachine

/*

#include "gen_qstatemachine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStateMachine__EventPriority int

const (
	QStateMachine__NormalPriority QStateMachine__EventPriority = 0
	QStateMachine__HighPriority   QStateMachine__EventPriority = 1
)

type QStateMachine__Error int

const (
	QStateMachine__NoError                                 QStateMachine__Error = 0
	QStateMachine__NoInitialStateError                     QStateMachine__Error = 1
	QStateMachine__NoDefaultStateInHistoryStateError       QStateMachine__Error = 2
	QStateMachine__NoCommonAncestorForTransitionError      QStateMachine__Error = 3
	QStateMachine__StateMachineChildModeSetToParallelError QStateMachine__Error = 4
)

type QStateMachine struct {
	h *C.QStateMachine
	*QState
}

func (this *QStateMachine) cPointer() *C.QStateMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStateMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStateMachine constructs the type using only CGO pointers.
func newQStateMachine(h *C.QStateMachine) *QStateMachine {
	if h == nil {
		return nil
	}
	var outptr_QState *C.QState = nil
	C.QStateMachine_virtbase(h, &outptr_QState)

	return &QStateMachine{h: h,
		QState: newQState(outptr_QState)}
}

// UnsafeNewQStateMachine constructs the type using only unsafe pointers.
func UnsafeNewQStateMachine(h unsafe.Pointer) *QStateMachine {
	return newQStateMachine((*C.QStateMachine)(h))
}

// NewQStateMachine constructs a new QStateMachine object.
func NewQStateMachine() *QStateMachine {

	return newQStateMachine(C.QStateMachine_new())
}

// NewQStateMachine2 constructs a new QStateMachine object.
func NewQStateMachine2(childMode QState__ChildMode) *QStateMachine {

	return newQStateMachine(C.QStateMachine_new2((C.int)(childMode)))
}

// NewQStateMachine3 constructs a new QStateMachine object.
func NewQStateMachine3(parent *qt6.QObject) *QStateMachine {

	return newQStateMachine(C.QStateMachine_new3((*C.QObject)(parent.UnsafePointer())))
}

// NewQStateMachine4 constructs a new QStateMachine object.
func NewQStateMachine4(childMode QState__ChildMode, parent *qt6.QObject) *QStateMachine {

	return newQStateMachine(C.QStateMachine_new4((C.int)(childMode), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QStateMachine) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QStateMachine_metaObject(this.h)))
}

func (this *QStateMachine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStateMachine_metacast(this.h, param1_Cstring))
}

func QStateMachine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStateMachine_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStateMachine) AddState(state *QAbstractState) {
	C.QStateMachine_addState(this.h, state.cPointer())
}

func (this *QStateMachine) RemoveState(state *QAbstractState) {
	C.QStateMachine_removeState(this.h, state.cPointer())
}

func (this *QStateMachine) Error() QStateMachine__Error {
	return (QStateMachine__Error)(C.QStateMachine_error(this.h))
}

func (this *QStateMachine) ErrorString() string {
	var _ms C.struct_miqt_string = C.QStateMachine_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStateMachine) ClearError() {
	C.QStateMachine_clearError(this.h)
}

func (this *QStateMachine) IsRunning() bool {
	return (bool)(C.QStateMachine_isRunning(this.h))
}

func (this *QStateMachine) IsAnimated() bool {
	return (bool)(C.QStateMachine_isAnimated(this.h))
}

func (this *QStateMachine) SetAnimated(enabled bool) {
	C.QStateMachine_setAnimated(this.h, (C.bool)(enabled))
}

func (this *QStateMachine) AddDefaultAnimation(animation *qt6.QAbstractAnimation) {
	C.QStateMachine_addDefaultAnimation(this.h, (*C.QAbstractAnimation)(animation.UnsafePointer()))
}

func (this *QStateMachine) DefaultAnimations() []*qt6.QAbstractAnimation {
	var _ma C.struct_miqt_array = C.QStateMachine_defaultAnimations(this.h)
	_ret := make([]*qt6.QAbstractAnimation, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAnimation)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt6.UnsafeNewQAbstractAnimation(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QStateMachine) RemoveDefaultAnimation(animation *qt6.QAbstractAnimation) {
	C.QStateMachine_removeDefaultAnimation(this.h, (*C.QAbstractAnimation)(animation.UnsafePointer()))
}

func (this *QStateMachine) GlobalRestorePolicy() QState__RestorePolicy {
	return (QState__RestorePolicy)(C.QStateMachine_globalRestorePolicy(this.h))
}

func (this *QStateMachine) SetGlobalRestorePolicy(restorePolicy QState__RestorePolicy) {
	C.QStateMachine_setGlobalRestorePolicy(this.h, (C.int)(restorePolicy))
}

func (this *QStateMachine) PostEvent(event *qt6.QEvent) {
	C.QStateMachine_postEvent(this.h, (*C.QEvent)(event.UnsafePointer()))
}

func (this *QStateMachine) PostDelayedEvent(event *qt6.QEvent, delay int) int {
	return (int)(C.QStateMachine_postDelayedEvent(this.h, (*C.QEvent)(event.UnsafePointer()), (C.int)(delay)))
}

func (this *QStateMachine) CancelDelayedEvent(id int) bool {
	return (bool)(C.QStateMachine_cancelDelayedEvent(this.h, (C.int)(id)))
}

func (this *QStateMachine) Configuration() map[*QAbstractState]struct{} {
	var _ma C.struct_miqt_array = C.QStateMachine_configuration(this.h)
	_ret := make(map[*QAbstractState]struct{}, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractState)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_element := newQAbstractState(_outCast[i])

		_ret[_element] = struct{}{}
	}
	return _ret
}

func (this *QStateMachine) EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {
	return (bool)(C.QStateMachine_eventFilter(this.h, (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))
}

func (this *QStateMachine) Start() {
	C.QStateMachine_start(this.h)
}

func (this *QStateMachine) Stop() {
	C.QStateMachine_stop(this.h)
}

func (this *QStateMachine) SetRunning(running bool) {
	C.QStateMachine_setRunning(this.h, (C.bool)(running))
}

func (this *QStateMachine) RunningChanged(running bool) {
	C.QStateMachine_runningChanged(this.h, (C.bool)(running))
}
func (this *QStateMachine) OnRunningChanged(slot func(running bool)) {
	C.QStateMachine_connect_runningChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStateMachine_runningChanged
func miqt_exec_callback_QStateMachine_runningChanged(cb C.intptr_t, running C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(running bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(running)

	gofunc(slotval1)
}

func QStateMachine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStateMachine_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStateMachine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStateMachine_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStateMachine) PostEvent2(event *qt6.QEvent, priority QStateMachine__EventPriority) {
	C.QStateMachine_postEvent2(this.h, (*C.QEvent)(event.UnsafePointer()), (C.int)(priority))
}

// Sender can only be called from a QStateMachine that was directly constructed.
func (this *QStateMachine) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QStateMachine_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QStateMachine that was directly constructed.
func (this *QStateMachine) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStateMachine_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QStateMachine that was directly constructed.
func (this *QStateMachine) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStateMachine_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QStateMachine that was directly constructed.
func (this *QStateMachine) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStateMachine_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QStateMachine) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QStateMachine_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QStateMachine) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QStateMachine_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_eventFilter
func miqt_exec_callback_QStateMachine_eventFilter(self *C.QStateMachine, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QStateMachine{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStateMachine) callVirtualBase_OnEntry(event *qt6.QEvent) {

	C.QStateMachine_virtualbase_onEntry(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QStateMachine) OnOnEntry(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QStateMachine_override_virtual_onEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_onEntry
func miqt_exec_callback_QStateMachine_onEntry(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QStateMachine{h: self}).callVirtualBase_OnEntry, slotval1)

}

func (this *QStateMachine) callVirtualBase_OnExit(event *qt6.QEvent) {

	C.QStateMachine_virtualbase_onExit(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QStateMachine) OnOnExit(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QStateMachine_override_virtual_onExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_onExit
func miqt_exec_callback_QStateMachine_onExit(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QStateMachine{h: self}).callVirtualBase_OnExit, slotval1)

}

func (this *QStateMachine) callVirtualBase_BeginSelectTransitions(event *qt6.QEvent) {

	C.QStateMachine_virtualbase_beginSelectTransitions(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QStateMachine) OnBeginSelectTransitions(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QStateMachine_override_virtual_beginSelectTransitions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_beginSelectTransitions
func miqt_exec_callback_QStateMachine_beginSelectTransitions(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QStateMachine{h: self}).callVirtualBase_BeginSelectTransitions, slotval1)

}

func (this *QStateMachine) callVirtualBase_EndSelectTransitions(event *qt6.QEvent) {

	C.QStateMachine_virtualbase_endSelectTransitions(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QStateMachine) OnEndSelectTransitions(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QStateMachine_override_virtual_endSelectTransitions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_endSelectTransitions
func miqt_exec_callback_QStateMachine_endSelectTransitions(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QStateMachine{h: self}).callVirtualBase_EndSelectTransitions, slotval1)

}

func (this *QStateMachine) callVirtualBase_BeginMicrostep(event *qt6.QEvent) {

	C.QStateMachine_virtualbase_beginMicrostep(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QStateMachine) OnBeginMicrostep(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QStateMachine_override_virtual_beginMicrostep(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_beginMicrostep
func miqt_exec_callback_QStateMachine_beginMicrostep(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QStateMachine{h: self}).callVirtualBase_BeginMicrostep, slotval1)

}

func (this *QStateMachine) callVirtualBase_EndMicrostep(event *qt6.QEvent) {

	C.QStateMachine_virtualbase_endMicrostep(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QStateMachine) OnEndMicrostep(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QStateMachine_override_virtual_endMicrostep(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_endMicrostep
func miqt_exec_callback_QStateMachine_endMicrostep(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QStateMachine{h: self}).callVirtualBase_EndMicrostep, slotval1)

}

func (this *QStateMachine) callVirtualBase_Event(e *qt6.QEvent) bool {

	return (bool)(C.QStateMachine_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QStateMachine) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QStateMachine_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_event
func miqt_exec_callback_QStateMachine_event(self *C.QStateMachine, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QStateMachine{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStateMachine) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QStateMachine_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QStateMachine) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QStateMachine_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_timerEvent
func miqt_exec_callback_QStateMachine_timerEvent(self *C.QStateMachine, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QStateMachine{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QStateMachine) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QStateMachine_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QStateMachine) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QStateMachine_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_childEvent
func miqt_exec_callback_QStateMachine_childEvent(self *C.QStateMachine, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QStateMachine{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QStateMachine) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QStateMachine_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QStateMachine) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QStateMachine_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_customEvent
func miqt_exec_callback_QStateMachine_customEvent(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QStateMachine{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QStateMachine) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QStateMachine_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QStateMachine) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QStateMachine_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_connectNotify
func miqt_exec_callback_QStateMachine_connectNotify(self *C.QStateMachine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QStateMachine{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QStateMachine) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QStateMachine_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QStateMachine) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QStateMachine_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_disconnectNotify
func miqt_exec_callback_QStateMachine_disconnectNotify(self *C.QStateMachine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QStateMachine{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QStateMachine) OnStarted(slot func()) {
	C.QStateMachine_connect_started(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStateMachine_started
func miqt_exec_callback_QStateMachine_started(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QStateMachine) OnStopped(slot func()) {
	C.QStateMachine_connect_stopped(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStateMachine_stopped
func miqt_exec_callback_QStateMachine_stopped(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

// Delete this object from C++ memory.
func (this *QStateMachine) Delete() {
	C.QStateMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStateMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QStateMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStateMachine__SignalEvent struct {
	h *C.QStateMachine__SignalEvent
	*qt6.QEvent
}

func (this *QStateMachine__SignalEvent) cPointer() *C.QStateMachine__SignalEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStateMachine__SignalEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStateMachine__SignalEvent constructs the type using only CGO pointers.
func newQStateMachine__SignalEvent(h *C.QStateMachine__SignalEvent) *QStateMachine__SignalEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QStateMachine__SignalEvent_virtbase(h, &outptr_QEvent)

	return &QStateMachine__SignalEvent{h: h,
		QEvent: qt6.UnsafeNewQEvent(unsafe.Pointer(outptr_QEvent))}
}

// UnsafeNewQStateMachine__SignalEvent constructs the type using only unsafe pointers.
func UnsafeNewQStateMachine__SignalEvent(h unsafe.Pointer) *QStateMachine__SignalEvent {
	return newQStateMachine__SignalEvent((*C.QStateMachine__SignalEvent)(h))
}

// NewQStateMachine__SignalEvent constructs a new QStateMachine::SignalEvent object.
func NewQStateMachine__SignalEvent(sender *qt6.QObject, signalIndex int, arguments []qt6.QVariant) *QStateMachine__SignalEvent {
	arguments_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_CArray[i] = (*C.QVariant)(arguments[i].UnsafePointer())
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}

	return newQStateMachine__SignalEvent(C.QStateMachine__SignalEvent_new((*C.QObject)(sender.UnsafePointer()), (C.int)(signalIndex), arguments_ma))
}

// NewQStateMachine__SignalEvent2 constructs a new QStateMachine::SignalEvent object.
func NewQStateMachine__SignalEvent2(param1 *QStateMachine__SignalEvent) *QStateMachine__SignalEvent {

	return newQStateMachine__SignalEvent(C.QStateMachine__SignalEvent_new2(param1.cPointer()))
}

func (this *QStateMachine__SignalEvent) Sender() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QStateMachine__SignalEvent_sender(this.h)))
}

func (this *QStateMachine__SignalEvent) SignalIndex() int {
	return (int)(C.QStateMachine__SignalEvent_signalIndex(this.h))
}

func (this *QStateMachine__SignalEvent) Arguments() []qt6.QVariant {
	var _ma C.struct_miqt_array = C.QStateMachine__SignalEvent_arguments(this.h)
	_ret := make([]qt6.QVariant, int(_ma.len))
	_outCast := (*[0xffff]*C.QVariant)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QStateMachine__SignalEvent) OperatorAssign(param1 *QStateMachine__SignalEvent) {
	C.QStateMachine__SignalEvent_operatorAssign(this.h, param1.cPointer())
}

func (this *QStateMachine__SignalEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QStateMachine__SignalEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QStateMachine__SignalEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QStateMachine__SignalEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine__SignalEvent_setAccepted
func miqt_exec_callback_QStateMachine__SignalEvent_setAccepted(self *C.QStateMachine__SignalEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QStateMachine__SignalEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

func (this *QStateMachine__SignalEvent) callVirtualBase_Clone() *qt6.QEvent {

	return qt6.UnsafeNewQEvent(unsafe.Pointer(C.QStateMachine__SignalEvent_virtualbase_clone(unsafe.Pointer(this.h))))

}
func (this *QStateMachine__SignalEvent) OnClone(slot func(super func() *qt6.QEvent) *qt6.QEvent) {
	ok := C.QStateMachine__SignalEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine__SignalEvent_clone
func miqt_exec_callback_QStateMachine__SignalEvent_clone(self *C.QStateMachine__SignalEvent, cb C.intptr_t) *C.QEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QEvent) *qt6.QEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStateMachine__SignalEvent{h: self}).callVirtualBase_Clone)

	return (*C.QEvent)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QStateMachine__SignalEvent) Delete() {
	C.QStateMachine__SignalEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStateMachine__SignalEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QStateMachine__SignalEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStateMachine__WrappedEvent struct {
	h *C.QStateMachine__WrappedEvent
	*qt6.QEvent
}

func (this *QStateMachine__WrappedEvent) cPointer() *C.QStateMachine__WrappedEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStateMachine__WrappedEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStateMachine__WrappedEvent constructs the type using only CGO pointers.
func newQStateMachine__WrappedEvent(h *C.QStateMachine__WrappedEvent) *QStateMachine__WrappedEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QStateMachine__WrappedEvent_virtbase(h, &outptr_QEvent)

	return &QStateMachine__WrappedEvent{h: h,
		QEvent: qt6.UnsafeNewQEvent(unsafe.Pointer(outptr_QEvent))}
}

// UnsafeNewQStateMachine__WrappedEvent constructs the type using only unsafe pointers.
func UnsafeNewQStateMachine__WrappedEvent(h unsafe.Pointer) *QStateMachine__WrappedEvent {
	return newQStateMachine__WrappedEvent((*C.QStateMachine__WrappedEvent)(h))
}

// NewQStateMachine__WrappedEvent constructs a new QStateMachine::WrappedEvent object.
func NewQStateMachine__WrappedEvent(object *qt6.QObject, event *qt6.QEvent) *QStateMachine__WrappedEvent {

	return newQStateMachine__WrappedEvent(C.QStateMachine__WrappedEvent_new((*C.QObject)(object.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))
}

// NewQStateMachine__WrappedEvent2 constructs a new QStateMachine::WrappedEvent object.
func NewQStateMachine__WrappedEvent2(param1 *QStateMachine__WrappedEvent) *QStateMachine__WrappedEvent {

	return newQStateMachine__WrappedEvent(C.QStateMachine__WrappedEvent_new2(param1.cPointer()))
}

func (this *QStateMachine__WrappedEvent) Object() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QStateMachine__WrappedEvent_object(this.h)))
}

func (this *QStateMachine__WrappedEvent) Event() *qt6.QEvent {
	return qt6.UnsafeNewQEvent(unsafe.Pointer(C.QStateMachine__WrappedEvent_event(this.h)))
}

func (this *QStateMachine__WrappedEvent) OperatorAssign(param1 *QStateMachine__WrappedEvent) {
	C.QStateMachine__WrappedEvent_operatorAssign(this.h, param1.cPointer())
}

func (this *QStateMachine__WrappedEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QStateMachine__WrappedEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QStateMachine__WrappedEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QStateMachine__WrappedEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine__WrappedEvent_setAccepted
func miqt_exec_callback_QStateMachine__WrappedEvent_setAccepted(self *C.QStateMachine__WrappedEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QStateMachine__WrappedEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

func (this *QStateMachine__WrappedEvent) callVirtualBase_Clone() *qt6.QEvent {

	return qt6.UnsafeNewQEvent(unsafe.Pointer(C.QStateMachine__WrappedEvent_virtualbase_clone(unsafe.Pointer(this.h))))

}
func (this *QStateMachine__WrappedEvent) OnClone(slot func(super func() *qt6.QEvent) *qt6.QEvent) {
	ok := C.QStateMachine__WrappedEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine__WrappedEvent_clone
func miqt_exec_callback_QStateMachine__WrappedEvent_clone(self *C.QStateMachine__WrappedEvent, cb C.intptr_t) *C.QEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QEvent) *qt6.QEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStateMachine__WrappedEvent{h: self}).callVirtualBase_Clone)

	return (*C.QEvent)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QStateMachine__WrappedEvent) Delete() {
	C.QStateMachine__WrappedEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStateMachine__WrappedEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QStateMachine__WrappedEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
