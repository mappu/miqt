package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qstatemachine.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
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
func NewQStateMachine2(childMode uintptr) *QStateMachine {
	ret := C.QStateMachine_new2((C.uintptr_t)(childMode))
	return newQStateMachine(ret)
}

// NewQStateMachine3 constructs a new QStateMachine object.
func NewQStateMachine3(parent *QObject) *QStateMachine {
	ret := C.QStateMachine_new3(parent.cPointer())
	return newQStateMachine(ret)
}

// NewQStateMachine4 constructs a new QStateMachine object.
func NewQStateMachine4(childMode uintptr, parent *QObject) *QStateMachine {
	ret := C.QStateMachine_new4((C.uintptr_t)(childMode), parent.cPointer())
	return newQStateMachine(ret)
}

func (this *QStateMachine) MetaObject() *QMetaObject {
	ret := C.QStateMachine_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QStateMachine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStateMachine_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStateMachine_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStateMachine_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStateMachine) AddState(state *QAbstractState) {
	C.QStateMachine_AddState(this.h, state.cPointer())
}

func (this *QStateMachine) RemoveState(state *QAbstractState) {
	C.QStateMachine_RemoveState(this.h, state.cPointer())
}

func (this *QStateMachine) Error() uintptr {
	ret := C.QStateMachine_Error(this.h)
	return (uintptr)(ret)
}

func (this *QStateMachine) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStateMachine_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStateMachine) ClearError() {
	C.QStateMachine_ClearError(this.h)
}

func (this *QStateMachine) IsRunning() bool {
	ret := C.QStateMachine_IsRunning(this.h)
	return (bool)(ret)
}

func (this *QStateMachine) IsAnimated() bool {
	ret := C.QStateMachine_IsAnimated(this.h)
	return (bool)(ret)
}

func (this *QStateMachine) SetAnimated(enabled bool) {
	C.QStateMachine_SetAnimated(this.h, (C.bool)(enabled))
}

func (this *QStateMachine) AddDefaultAnimation(animation *QAbstractAnimation) {
	C.QStateMachine_AddDefaultAnimation(this.h, animation.cPointer())
}

func (this *QStateMachine) DefaultAnimations() []*QAbstractAnimation {
	var _out **C.QAbstractAnimation = nil
	var _out_len C.size_t = 0
	C.QStateMachine_DefaultAnimations(this.h, &_out, &_out_len)
	ret := make([]*QAbstractAnimation, int(_out_len))
	_outCast := (*[0xffff]*C.QAbstractAnimation)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAbstractAnimation(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStateMachine) RemoveDefaultAnimation(animation *QAbstractAnimation) {
	C.QStateMachine_RemoveDefaultAnimation(this.h, animation.cPointer())
}

func (this *QStateMachine) GlobalRestorePolicy() uintptr {
	ret := C.QStateMachine_GlobalRestorePolicy(this.h)
	return (uintptr)(ret)
}

func (this *QStateMachine) SetGlobalRestorePolicy(restorePolicy uintptr) {
	C.QStateMachine_SetGlobalRestorePolicy(this.h, (C.uintptr_t)(restorePolicy))
}

func (this *QStateMachine) PostEvent(event *QEvent) {
	C.QStateMachine_PostEvent(this.h, event.cPointer())
}

func (this *QStateMachine) PostDelayedEvent(event *QEvent, delay int) int {
	ret := C.QStateMachine_PostDelayedEvent(this.h, event.cPointer(), (C.int)(delay))
	return (int)(ret)
}

func (this *QStateMachine) CancelDelayedEvent(id int) bool {
	ret := C.QStateMachine_CancelDelayedEvent(this.h, (C.int)(id))
	return (bool)(ret)
}

func (this *QStateMachine) EventFilter(watched *QObject, event *QEvent) bool {
	ret := C.QStateMachine_EventFilter(this.h, watched.cPointer(), event.cPointer())
	return (bool)(ret)
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

func (this *QStateMachine) OnRunningChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStateMachine_connect_RunningChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QStateMachine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStateMachine_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStateMachine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStateMachine_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStateMachine_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStateMachine_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStateMachine_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStateMachine_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStateMachine) PostEvent2(event *QEvent, priority uintptr) {
	C.QStateMachine_PostEvent2(this.h, event.cPointer(), (C.uintptr_t)(priority))
}

func (this *QStateMachine) Delete() {
	C.QStateMachine_Delete(this.h)
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
	ret := C.QStateMachine__SignalEvent_Sender(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QStateMachine__SignalEvent) SignalIndex() int {
	ret := C.QStateMachine__SignalEvent_SignalIndex(this.h)
	return (int)(ret)
}

func (this *QStateMachine__SignalEvent) Delete() {
	C.QStateMachine__SignalEvent_Delete(this.h)
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
	ret := C.QStateMachine__WrappedEvent_Object(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QStateMachine__WrappedEvent) Event() *QEvent {
	ret := C.QStateMachine__WrappedEvent_Event(this.h)
	return newQEvent_U(unsafe.Pointer(ret))
}

func (this *QStateMachine__WrappedEvent) Delete() {
	C.QStateMachine__WrappedEvent_Delete(this.h)
}
