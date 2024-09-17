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
	QStateMachine__EventPriority__NormalPriority QStateMachine__EventPriority = 0
	QStateMachine__EventPriority__HighPriority   QStateMachine__EventPriority = 1
)

type QStateMachine__Error int

const (
	QStateMachine__Error__NoError                                 QStateMachine__Error = 0
	QStateMachine__Error__NoInitialStateError                     QStateMachine__Error = 1
	QStateMachine__Error__NoDefaultStateInHistoryStateError       QStateMachine__Error = 2
	QStateMachine__Error__NoCommonAncestorForTransitionError      QStateMachine__Error = 3
	QStateMachine__Error__StateMachineChildModeSetToParallelError QStateMachine__Error = 4
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

func newQStateMachine(h *C.QStateMachine) *QStateMachine {
	if h == nil {
		return nil
	}
	return &QStateMachine{h: h, QState: newQState_U(unsafe.Pointer(h))}
}

func newQStateMachine_U(h unsafe.Pointer) *QStateMachine {
	return newQStateMachine((*C.QStateMachine)(h))
}

// NewQStateMachine constructs a new QStateMachine object.
func NewQStateMachine() *QStateMachine {
	ret := C.QStateMachine_new()
	return newQStateMachine(ret)
}

// NewQStateMachine2 constructs a new QStateMachine object.
func NewQStateMachine2(childMode QState__ChildMode) *QStateMachine {
	ret := C.QStateMachine_new2((C.uintptr_t)(childMode))
	return newQStateMachine(ret)
}

// NewQStateMachine3 constructs a new QStateMachine object.
func NewQStateMachine3(parent *QObject) *QStateMachine {
	ret := C.QStateMachine_new3(parent.cPointer())
	return newQStateMachine(ret)
}

// NewQStateMachine4 constructs a new QStateMachine object.
func NewQStateMachine4(childMode QState__ChildMode, parent *QObject) *QStateMachine {
	ret := C.QStateMachine_new4((C.uintptr_t)(childMode), parent.cPointer())
	return newQStateMachine(ret)
}

func (this *QStateMachine) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QStateMachine_MetaObject(this.h)))
}

func QStateMachine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStateMachine_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStateMachine_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStateMachine_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	var _ms *C.struct_miqt_string = C.QStateMachine_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	var _ma *C.struct_miqt_array = C.QStateMachine_DefaultAnimations(this.h)
	_ret := make([]*QAbstractAnimation, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAnimation)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAnimation_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QStateMachine) RemoveDefaultAnimation(animation *QAbstractAnimation) {
	C.QStateMachine_RemoveDefaultAnimation(this.h, animation.cPointer())
}

func (this *QStateMachine) GlobalRestorePolicy() QState__RestorePolicy {
	return (QState__RestorePolicy)(C.QStateMachine_GlobalRestorePolicy(this.h))
}

func (this *QStateMachine) SetGlobalRestorePolicy(restorePolicy QState__RestorePolicy) {
	C.QStateMachine_SetGlobalRestorePolicy(this.h, (C.uintptr_t)(restorePolicy))
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
	C.QStateMachine_connect_RunningChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStateMachine_RunningChanged
func miqt_exec_callback_QStateMachine_RunningChanged(cb *C.void, running C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(running bool))
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
	var _ms *C.struct_miqt_string = C.QStateMachine_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStateMachine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStateMachine_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStateMachine_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStateMachine_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStateMachine_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStateMachine_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStateMachine) PostEvent2(event *QEvent, priority QStateMachine__EventPriority) {
	C.QStateMachine_PostEvent2(this.h, event.cPointer(), (C.uintptr_t)(priority))
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

func newQStateMachine__SignalEvent(h *C.QStateMachine__SignalEvent) *QStateMachine__SignalEvent {
	if h == nil {
		return nil
	}
	return &QStateMachine__SignalEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQStateMachine__SignalEvent_U(h unsafe.Pointer) *QStateMachine__SignalEvent {
	return newQStateMachine__SignalEvent((*C.QStateMachine__SignalEvent)(h))
}

// NewQStateMachine__SignalEvent constructs a new QStateMachine::SignalEvent object.
func NewQStateMachine__SignalEvent(param1 *QStateMachine__SignalEvent) *QStateMachine__SignalEvent {
	ret := C.QStateMachine__SignalEvent_new(param1.cPointer())
	return newQStateMachine__SignalEvent(ret)
}

func (this *QStateMachine__SignalEvent) Sender() *QObject {
	return newQObject_U(unsafe.Pointer(C.QStateMachine__SignalEvent_Sender(this.h)))
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

func newQStateMachine__WrappedEvent(h *C.QStateMachine__WrappedEvent) *QStateMachine__WrappedEvent {
	if h == nil {
		return nil
	}
	return &QStateMachine__WrappedEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQStateMachine__WrappedEvent_U(h unsafe.Pointer) *QStateMachine__WrappedEvent {
	return newQStateMachine__WrappedEvent((*C.QStateMachine__WrappedEvent)(h))
}

// NewQStateMachine__WrappedEvent constructs a new QStateMachine::WrappedEvent object.
func NewQStateMachine__WrappedEvent(object *QObject, event *QEvent) *QStateMachine__WrappedEvent {
	ret := C.QStateMachine__WrappedEvent_new(object.cPointer(), event.cPointer())
	return newQStateMachine__WrappedEvent(ret)
}

// NewQStateMachine__WrappedEvent2 constructs a new QStateMachine::WrappedEvent object.
func NewQStateMachine__WrappedEvent2(param1 *QStateMachine__WrappedEvent) *QStateMachine__WrappedEvent {
	ret := C.QStateMachine__WrappedEvent_new2(param1.cPointer())
	return newQStateMachine__WrappedEvent(ret)
}

func (this *QStateMachine__WrappedEvent) Object() *QObject {
	return newQObject_U(unsafe.Pointer(C.QStateMachine__WrappedEvent_Object(this.h)))
}

func (this *QStateMachine__WrappedEvent) Event() *QEvent {
	return newQEvent_U(unsafe.Pointer(C.QStateMachine__WrappedEvent_Event(this.h)))
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
