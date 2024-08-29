package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QEventTransition struct {
	h *C.QEventTransition
	*QAbstractTransition
}

func (this *QEventTransition) cPointer() *C.QEventTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func newQEventTransition(h *C.QEventTransition) *QEventTransition {
	return &QEventTransition{h: h, QAbstractTransition: newQAbstractTransition_U(unsafe.Pointer(h))}
}

func newQEventTransition_U(h unsafe.Pointer) *QEventTransition {
	return newQEventTransition((*C.QEventTransition)(h))
}

// NewQEventTransition constructs a new QEventTransition object.
func NewQEventTransition() *QEventTransition {
	ret := C.QEventTransition_new()
	return newQEventTransition(ret)
}

// NewQEventTransition2 constructs a new QEventTransition object.
func NewQEventTransition2(object *QObject, typeVal uintptr) *QEventTransition {
	ret := C.QEventTransition_new2(object.cPointer(), (C.uintptr_t)(typeVal))
	return newQEventTransition(ret)
}

// NewQEventTransition3 constructs a new QEventTransition object.
func NewQEventTransition3(sourceState *QState) *QEventTransition {
	ret := C.QEventTransition_new3(sourceState.cPointer())
	return newQEventTransition(ret)
}

// NewQEventTransition4 constructs a new QEventTransition object.
func NewQEventTransition4(object *QObject, typeVal uintptr, sourceState *QState) *QEventTransition {
	ret := C.QEventTransition_new4(object.cPointer(), (C.uintptr_t)(typeVal), sourceState.cPointer())
	return newQEventTransition(ret)
}

func (this *QEventTransition) MetaObject() *QMetaObject {
	ret := C.QEventTransition_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventTransition_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventTransition_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QEventTransition) EventSource() *QObject {
	ret := C.QEventTransition_EventSource(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QEventTransition) SetEventSource(object *QObject) {
	C.QEventTransition_SetEventSource(this.h, object.cPointer())
}

func (this *QEventTransition) EventType() uintptr {
	ret := C.QEventTransition_EventType(this.h)
	return (uintptr)(ret)
}

func (this *QEventTransition) SetEventType(typeVal uintptr) {
	C.QEventTransition_SetEventType(this.h, (C.uintptr_t)(typeVal))
}

func QEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventTransition_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventTransition_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QEventTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QEventTransition) Delete() {
	C.QEventTransition_Delete(this.h)
}
