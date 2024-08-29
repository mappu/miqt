package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qhistorystate.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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

func newQHistoryState(h *C.QHistoryState) *QHistoryState {
	return &QHistoryState{h: h, QAbstractState: newQAbstractState_U(unsafe.Pointer(h))}
}

func newQHistoryState_U(h unsafe.Pointer) *QHistoryState {
	return newQHistoryState((*C.QHistoryState)(h))
}

// NewQHistoryState constructs a new QHistoryState object.
func NewQHistoryState() *QHistoryState {
	ret := C.QHistoryState_new()
	return newQHistoryState(ret)
}

// NewQHistoryState2 constructs a new QHistoryState object.
func NewQHistoryState2(typeVal uintptr) *QHistoryState {
	ret := C.QHistoryState_new2((C.uintptr_t)(typeVal))
	return newQHistoryState(ret)
}

// NewQHistoryState3 constructs a new QHistoryState object.
func NewQHistoryState3(parent *QState) *QHistoryState {
	ret := C.QHistoryState_new3(parent.cPointer())
	return newQHistoryState(ret)
}

// NewQHistoryState4 constructs a new QHistoryState object.
func NewQHistoryState4(typeVal uintptr, parent *QState) *QHistoryState {
	ret := C.QHistoryState_new4((C.uintptr_t)(typeVal), parent.cPointer())
	return newQHistoryState(ret)
}

func (this *QHistoryState) MetaObject() *QMetaObject {
	ret := C.QHistoryState_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QHistoryState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHistoryState_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHistoryState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHistoryState_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QHistoryState) DefaultTransition() *QAbstractTransition {
	ret := C.QHistoryState_DefaultTransition(this.h)
	return newQAbstractTransition_U(unsafe.Pointer(ret))
}

func (this *QHistoryState) SetDefaultTransition(transition *QAbstractTransition) {
	C.QHistoryState_SetDefaultTransition(this.h, transition.cPointer())
}

func (this *QHistoryState) DefaultState() *QAbstractState {
	ret := C.QHistoryState_DefaultState(this.h)
	return newQAbstractState_U(unsafe.Pointer(ret))
}

func (this *QHistoryState) SetDefaultState(state *QAbstractState) {
	C.QHistoryState_SetDefaultState(this.h, state.cPointer())
}

func (this *QHistoryState) HistoryType() uintptr {
	ret := C.QHistoryState_HistoryType(this.h)
	return (uintptr)(ret)
}

func (this *QHistoryState) SetHistoryType(typeVal uintptr) {
	C.QHistoryState_SetHistoryType(this.h, (C.uintptr_t)(typeVal))
}

func QHistoryState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHistoryState_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHistoryState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHistoryState_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHistoryState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHistoryState_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHistoryState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHistoryState_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QHistoryState) Delete() {
	C.QHistoryState_Delete(this.h)
}
