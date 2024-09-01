package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qstate.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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

func newQState(h *C.QState) *QState {
	if h == nil {
		return nil
	}
	return &QState{h: h, QAbstractState: newQAbstractState_U(unsafe.Pointer(h))}
}

func newQState_U(h unsafe.Pointer) *QState {
	return newQState((*C.QState)(h))
}

// NewQState constructs a new QState object.
func NewQState() *QState {
	ret := C.QState_new()
	return newQState(ret)
}

// NewQState2 constructs a new QState object.
func NewQState2(childMode uintptr) *QState {
	ret := C.QState_new2((C.uintptr_t)(childMode))
	return newQState(ret)
}

// NewQState3 constructs a new QState object.
func NewQState3(parent *QState) *QState {
	ret := C.QState_new3(parent.cPointer())
	return newQState(ret)
}

// NewQState4 constructs a new QState object.
func NewQState4(childMode uintptr, parent *QState) *QState {
	ret := C.QState_new4((C.uintptr_t)(childMode), parent.cPointer())
	return newQState(ret)
}

func (this *QState) MetaObject() *QMetaObject {
	ret := C.QState_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QState_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QState_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QState) ErrorState() *QAbstractState {
	ret := C.QState_ErrorState(this.h)
	return newQAbstractState_U(unsafe.Pointer(ret))
}

func (this *QState) SetErrorState(state *QAbstractState) {
	C.QState_SetErrorState(this.h, state.cPointer())
}

func (this *QState) AddTransition(transition *QAbstractTransition) {
	C.QState_AddTransition(this.h, transition.cPointer())
}

func (this *QState) AddTransition2(sender *QObject, signal string, target *QAbstractState) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	ret := C.QState_AddTransition2(this.h, sender.cPointer(), signal_Cstring, target.cPointer())
	return newQSignalTransition_U(unsafe.Pointer(ret))
}

func (this *QState) AddTransitionWithTarget(target *QAbstractState) *QAbstractTransition {
	ret := C.QState_AddTransitionWithTarget(this.h, target.cPointer())
	return newQAbstractTransition_U(unsafe.Pointer(ret))
}

func (this *QState) RemoveTransition(transition *QAbstractTransition) {
	C.QState_RemoveTransition(this.h, transition.cPointer())
}

func (this *QState) Transitions() []*QAbstractTransition {
	var _out **C.QAbstractTransition = nil
	var _out_len C.size_t = 0
	C.QState_Transitions(this.h, &_out, &_out_len)
	ret := make([]*QAbstractTransition, int(_out_len))
	_outCast := (*[0xffff]*C.QAbstractTransition)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAbstractTransition(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QState) InitialState() *QAbstractState {
	ret := C.QState_InitialState(this.h)
	return newQAbstractState_U(unsafe.Pointer(ret))
}

func (this *QState) SetInitialState(state *QAbstractState) {
	C.QState_SetInitialState(this.h, state.cPointer())
}

func (this *QState) ChildMode() uintptr {
	ret := C.QState_ChildMode(this.h)
	return (uintptr)(ret)
}

func (this *QState) SetChildMode(mode uintptr) {
	C.QState_SetChildMode(this.h, (C.uintptr_t)(mode))
}

func (this *QState) AssignProperty(object *QObject, name string, value *QVariant) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QState_AssignProperty(this.h, object.cPointer(), name_Cstring, value.cPointer())
}

func QState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QState_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QState_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QState_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QState_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QState) Delete() {
	C.QState_Delete(this.h)
}
