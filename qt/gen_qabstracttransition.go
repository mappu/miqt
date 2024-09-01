package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qabstracttransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QAbstractTransition struct {
	h *C.QAbstractTransition
	*QObject
}

func (this *QAbstractTransition) cPointer() *C.QAbstractTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractTransition(h *C.QAbstractTransition) *QAbstractTransition {
	if h == nil {
		return nil
	}
	return &QAbstractTransition{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAbstractTransition_U(h unsafe.Pointer) *QAbstractTransition {
	return newQAbstractTransition((*C.QAbstractTransition)(h))
}

func (this *QAbstractTransition) MetaObject() *QMetaObject {
	ret := C.QAbstractTransition_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTransition_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTransition_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractTransition) SourceState() *QState {
	ret := C.QAbstractTransition_SourceState(this.h)
	return newQState_U(unsafe.Pointer(ret))
}

func (this *QAbstractTransition) TargetState() *QAbstractState {
	ret := C.QAbstractTransition_TargetState(this.h)
	return newQAbstractState_U(unsafe.Pointer(ret))
}

func (this *QAbstractTransition) SetTargetState(target *QAbstractState) {
	C.QAbstractTransition_SetTargetState(this.h, target.cPointer())
}

func (this *QAbstractTransition) TargetStates() []*QAbstractState {
	var _out **C.QAbstractState = nil
	var _out_len C.size_t = 0
	C.QAbstractTransition_TargetStates(this.h, &_out, &_out_len)
	ret := make([]*QAbstractState, int(_out_len))
	_outCast := (*[0xffff]*C.QAbstractState)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAbstractState(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractTransition) SetTargetStates(targets []*QAbstractState) {
	// For the C ABI, malloc a C array of raw pointers
	targets_CArray := (*[0xffff]*C.QAbstractState)(C.malloc(C.ulong(8 * len(targets))))
	defer C.free(unsafe.Pointer(targets_CArray))
	for i := range targets {
		targets_CArray[i] = targets[i].cPointer()
	}
	C.QAbstractTransition_SetTargetStates(this.h, &targets_CArray[0], C.ulong(len(targets)))
}

func (this *QAbstractTransition) TransitionType() uintptr {
	ret := C.QAbstractTransition_TransitionType(this.h)
	return (uintptr)(ret)
}

func (this *QAbstractTransition) SetTransitionType(typeVal uintptr) {
	C.QAbstractTransition_SetTransitionType(this.h, (C.uintptr_t)(typeVal))
}

func (this *QAbstractTransition) Machine() *QStateMachine {
	ret := C.QAbstractTransition_Machine(this.h)
	return newQStateMachine_U(unsafe.Pointer(ret))
}

func (this *QAbstractTransition) AddAnimation(animation *QAbstractAnimation) {
	C.QAbstractTransition_AddAnimation(this.h, animation.cPointer())
}

func (this *QAbstractTransition) RemoveAnimation(animation *QAbstractAnimation) {
	C.QAbstractTransition_RemoveAnimation(this.h, animation.cPointer())
}

func (this *QAbstractTransition) Animations() []*QAbstractAnimation {
	var _out **C.QAbstractAnimation = nil
	var _out_len C.size_t = 0
	C.QAbstractTransition_Animations(this.h, &_out, &_out_len)
	ret := make([]*QAbstractAnimation, int(_out_len))
	_outCast := (*[0xffff]*C.QAbstractAnimation)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAbstractAnimation(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTransition_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTransition_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractTransition) Delete() {
	C.QAbstractTransition_Delete(this.h)
}
