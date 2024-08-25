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
func NewQStateMachine2(parent *QObject) *QStateMachine {
	ret := C.QStateMachine_new2(parent.cPointer())
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

func (this *QStateMachine) Delete() {
	C.QStateMachine_Delete(this.h)
}
