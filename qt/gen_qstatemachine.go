package qt

/*

#include "gen_qstatemachine.h"
#include <stdlib.h>

*/
import "C"

import (
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
func NewQStateMachine3(parent *QObject) *QStateMachine {

	return newQStateMachine(C.QStateMachine_new3(parent.cPointer()))
}

// NewQStateMachine4 constructs a new QStateMachine object.
func NewQStateMachine4(childMode QState__ChildMode, parent *QObject) *QStateMachine {

	return newQStateMachine(C.QStateMachine_new4((C.int)(childMode), parent.cPointer()))
}

func (this *QStateMachine) MetaObject() *QMetaObject {
	return newQMetaObject(C.QStateMachine_MetaObject(this.h))
}

func (this *QStateMachine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStateMachine_Metacast(this.h, param1_Cstring))
}

func QStateMachine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStateMachine_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStateMachine_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStateMachine_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStateMachine) AddState(state *QAbstractState) {
	C.QStateMachine_AddState(this.h, state.cPointer())
}

func (this *QStateMachine) RemoveState(state *QAbstractState) {
	C.QStateMachine_RemoveState(this.h, state.cPointer())
}

func (this *QStateMachine) Error() QStateMachine__Error {
	return (QStateMachine__Error)(C.QStateMachine_Error(this.h))
}

func (this *QStateMachine) ErrorString() string {
	var _ms C.struct_miqt_string = C.QStateMachine_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStateMachine) ClearError() {
	C.QStateMachine_ClearError(this.h)
}

func (this *QStateMachine) IsRunning() bool {
	return (bool)(C.QStateMachine_IsRunning(this.h))
}

func (this *QStateMachine) IsAnimated() bool {
	return (bool)(C.QStateMachine_IsAnimated(this.h))
}

func (this *QStateMachine) SetAnimated(enabled bool) {
	C.QStateMachine_SetAnimated(this.h, (C.bool)(enabled))
}

func (this *QStateMachine) AddDefaultAnimation(animation *QAbstractAnimation) {
	C.QStateMachine_AddDefaultAnimation(this.h, animation.cPointer())
}

func (this *QStateMachine) DefaultAnimations() []*QAbstractAnimation {
	var _ma C.struct_miqt_array = C.QStateMachine_DefaultAnimations(this.h)
	_ret := make([]*QAbstractAnimation, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAnimation)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAnimation(_outCast[i])
	}
	return _ret
}

func (this *QStateMachine) RemoveDefaultAnimation(animation *QAbstractAnimation) {
	C.QStateMachine_RemoveDefaultAnimation(this.h, animation.cPointer())
}

func (this *QStateMachine) GlobalRestorePolicy() QState__RestorePolicy {
	return (QState__RestorePolicy)(C.QStateMachine_GlobalRestorePolicy(this.h))
}

func (this *QStateMachine) SetGlobalRestorePolicy(restorePolicy QState__RestorePolicy) {
	C.QStateMachine_SetGlobalRestorePolicy(this.h, (C.int)(restorePolicy))
}

func (this *QStateMachine) PostEvent(event *QEvent) {
	C.QStateMachine_PostEvent(this.h, event.cPointer())
}

func (this *QStateMachine) PostDelayedEvent(event *QEvent, delay int) int {
	return (int)(C.QStateMachine_PostDelayedEvent(this.h, event.cPointer(), (C.int)(delay)))
}

func (this *QStateMachine) CancelDelayedEvent(id int) bool {
	return (bool)(C.QStateMachine_CancelDelayedEvent(this.h, (C.int)(id)))
}

func (this *QStateMachine) Configuration() map[*QAbstractState]struct{} {
	var _ma C.struct_miqt_array = C.QStateMachine_Configuration(this.h)
	_ret := make(map[*QAbstractState]struct{}, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractState)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_element := newQAbstractState(_outCast[i])

		_ret[_element] = struct{}{}
	}
	return _ret
}

func (this *QStateMachine) EventFilter(watched *QObject, event *QEvent) bool {
	return (bool)(C.QStateMachine_EventFilter(this.h, watched.cPointer(), event.cPointer()))
}

func (this *QStateMachine) Start() {
	C.QStateMachine_Start(this.h)
}

func (this *QStateMachine) Stop() {
	C.QStateMachine_Stop(this.h)
}

func (this *QStateMachine) SetRunning(running bool) {
	C.QStateMachine_SetRunning(this.h, (C.bool)(running))
}

func (this *QStateMachine) RunningChanged(running bool) {
	C.QStateMachine_RunningChanged(this.h, (C.bool)(running))
}
func (this *QStateMachine) OnRunningChanged(slot func(running bool)) {
	C.QStateMachine_connect_RunningChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStateMachine_RunningChanged
func miqt_exec_callback_QStateMachine_RunningChanged(cb C.intptr_t, running C.bool) {
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
	var _ms C.struct_miqt_string = C.QStateMachine_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStateMachine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStateMachine_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStateMachine_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStateMachine_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStateMachine_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStateMachine_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStateMachine) PostEvent2(event *QEvent, priority QStateMachine__EventPriority) {
	C.QStateMachine_PostEvent2(this.h, event.cPointer(), (C.int)(priority))
}

func (this *QStateMachine) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QStateMachine_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QStateMachine) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QStateMachine_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_EventFilter
func miqt_exec_callback_QStateMachine_EventFilter(self *C.QStateMachine, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QStateMachine{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStateMachine) callVirtualBase_OnEntry(event *QEvent) {

	C.QStateMachine_virtualbase_OnEntry(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStateMachine) OnOnEntry(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStateMachine_override_virtual_OnEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_OnEntry
func miqt_exec_callback_QStateMachine_OnEntry(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStateMachine{h: self}).callVirtualBase_OnEntry, slotval1)

}

func (this *QStateMachine) callVirtualBase_OnExit(event *QEvent) {

	C.QStateMachine_virtualbase_OnExit(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStateMachine) OnOnExit(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStateMachine_override_virtual_OnExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_OnExit
func miqt_exec_callback_QStateMachine_OnExit(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStateMachine{h: self}).callVirtualBase_OnExit, slotval1)

}

func (this *QStateMachine) callVirtualBase_BeginSelectTransitions(event *QEvent) {

	C.QStateMachine_virtualbase_BeginSelectTransitions(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStateMachine) OnBeginSelectTransitions(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStateMachine_override_virtual_BeginSelectTransitions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_BeginSelectTransitions
func miqt_exec_callback_QStateMachine_BeginSelectTransitions(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStateMachine{h: self}).callVirtualBase_BeginSelectTransitions, slotval1)

}

func (this *QStateMachine) callVirtualBase_EndSelectTransitions(event *QEvent) {

	C.QStateMachine_virtualbase_EndSelectTransitions(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStateMachine) OnEndSelectTransitions(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStateMachine_override_virtual_EndSelectTransitions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_EndSelectTransitions
func miqt_exec_callback_QStateMachine_EndSelectTransitions(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStateMachine{h: self}).callVirtualBase_EndSelectTransitions, slotval1)

}

func (this *QStateMachine) callVirtualBase_BeginMicrostep(event *QEvent) {

	C.QStateMachine_virtualbase_BeginMicrostep(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStateMachine) OnBeginMicrostep(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStateMachine_override_virtual_BeginMicrostep(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_BeginMicrostep
func miqt_exec_callback_QStateMachine_BeginMicrostep(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStateMachine{h: self}).callVirtualBase_BeginMicrostep, slotval1)

}

func (this *QStateMachine) callVirtualBase_EndMicrostep(event *QEvent) {

	C.QStateMachine_virtualbase_EndMicrostep(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStateMachine) OnEndMicrostep(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStateMachine_override_virtual_EndMicrostep(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_EndMicrostep
func miqt_exec_callback_QStateMachine_EndMicrostep(self *C.QStateMachine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStateMachine{h: self}).callVirtualBase_EndMicrostep, slotval1)

}

func (this *QStateMachine) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QStateMachine_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QStateMachine) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QStateMachine_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStateMachine_Event
func miqt_exec_callback_QStateMachine_Event(self *C.QStateMachine, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QStateMachine{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QStateMachine) Delete() {
	C.QStateMachine_Delete(this.h)
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
	*QEvent
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
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQStateMachine__SignalEvent constructs the type using only unsafe pointers.
func UnsafeNewQStateMachine__SignalEvent(h unsafe.Pointer) *QStateMachine__SignalEvent {
	return newQStateMachine__SignalEvent((*C.QStateMachine__SignalEvent)(h))
}

// NewQStateMachine__SignalEvent constructs a new QStateMachine::SignalEvent object.
func NewQStateMachine__SignalEvent(param1 *QStateMachine__SignalEvent) *QStateMachine__SignalEvent {

	return newQStateMachine__SignalEvent(C.QStateMachine__SignalEvent_new(param1.cPointer()))
}

func (this *QStateMachine__SignalEvent) Sender() *QObject {
	return newQObject(C.QStateMachine__SignalEvent_Sender(this.h))
}

func (this *QStateMachine__SignalEvent) SignalIndex() int {
	return (int)(C.QStateMachine__SignalEvent_SignalIndex(this.h))
}

// Delete this object from C++ memory.
func (this *QStateMachine__SignalEvent) Delete() {
	C.QStateMachine__SignalEvent_Delete(this.h)
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
	*QEvent
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
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQStateMachine__WrappedEvent constructs the type using only unsafe pointers.
func UnsafeNewQStateMachine__WrappedEvent(h unsafe.Pointer) *QStateMachine__WrappedEvent {
	return newQStateMachine__WrappedEvent((*C.QStateMachine__WrappedEvent)(h))
}

// NewQStateMachine__WrappedEvent constructs a new QStateMachine::WrappedEvent object.
func NewQStateMachine__WrappedEvent(object *QObject, event *QEvent) *QStateMachine__WrappedEvent {

	return newQStateMachine__WrappedEvent(C.QStateMachine__WrappedEvent_new(object.cPointer(), event.cPointer()))
}

// NewQStateMachine__WrappedEvent2 constructs a new QStateMachine::WrappedEvent object.
func NewQStateMachine__WrappedEvent2(param1 *QStateMachine__WrappedEvent) *QStateMachine__WrappedEvent {

	return newQStateMachine__WrappedEvent(C.QStateMachine__WrappedEvent_new2(param1.cPointer()))
}

func (this *QStateMachine__WrappedEvent) Object() *QObject {
	return newQObject(C.QStateMachine__WrappedEvent_Object(this.h))
}

func (this *QStateMachine__WrappedEvent) Event() *QEvent {
	return newQEvent(C.QStateMachine__WrappedEvent_Event(this.h))
}

// Delete this object from C++ memory.
func (this *QStateMachine__WrappedEvent) Delete() {
	C.QStateMachine__WrappedEvent_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStateMachine__WrappedEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QStateMachine__WrappedEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
