package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmouseeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMouseEventTransition struct {
	h *C.QMouseEventTransition
	*QEventTransition
}

func (this *QMouseEventTransition) cPointer() *C.QMouseEventTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMouseEventTransition(h *C.QMouseEventTransition) *QMouseEventTransition {
	if h == nil {
		return nil
	}
	return &QMouseEventTransition{h: h, QEventTransition: newQEventTransition_U(unsafe.Pointer(h))}
}

func newQMouseEventTransition_U(h unsafe.Pointer) *QMouseEventTransition {
	return newQMouseEventTransition((*C.QMouseEventTransition)(h))
}

// NewQMouseEventTransition constructs a new QMouseEventTransition object.
func NewQMouseEventTransition() *QMouseEventTransition {
	ret := C.QMouseEventTransition_new()
	return newQMouseEventTransition(ret)
}

// NewQMouseEventTransition2 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition2(object *QObject, typeVal uintptr, button uintptr) *QMouseEventTransition {
	ret := C.QMouseEventTransition_new2(object.cPointer(), (C.uintptr_t)(typeVal), (C.uintptr_t)(button))
	return newQMouseEventTransition(ret)
}

// NewQMouseEventTransition3 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition3(sourceState *QState) *QMouseEventTransition {
	ret := C.QMouseEventTransition_new3(sourceState.cPointer())
	return newQMouseEventTransition(ret)
}

// NewQMouseEventTransition4 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition4(object *QObject, typeVal uintptr, button uintptr, sourceState *QState) *QMouseEventTransition {
	ret := C.QMouseEventTransition_new4(object.cPointer(), (C.uintptr_t)(typeVal), (C.uintptr_t)(button), sourceState.cPointer())
	return newQMouseEventTransition(ret)
}

func (this *QMouseEventTransition) MetaObject() *QMetaObject {
	ret := C.QMouseEventTransition_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMouseEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMouseEventTransition_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMouseEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMouseEventTransition_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMouseEventTransition) Button() uintptr {
	ret := C.QMouseEventTransition_Button(this.h)
	return (uintptr)(ret)
}

func (this *QMouseEventTransition) SetButton(button uintptr) {
	C.QMouseEventTransition_SetButton(this.h, (C.uintptr_t)(button))
}

func (this *QMouseEventTransition) ModifierMask() int {
	ret := C.QMouseEventTransition_ModifierMask(this.h)
	return (int)(ret)
}

func (this *QMouseEventTransition) SetModifierMask(modifiers int) {
	C.QMouseEventTransition_SetModifierMask(this.h, (C.int)(modifiers))
}

func (this *QMouseEventTransition) HitTestPath() *QPainterPath {
	ret := C.QMouseEventTransition_HitTestPath(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMouseEventTransition) SetHitTestPath(path *QPainterPath) {
	C.QMouseEventTransition_SetHitTestPath(this.h, path.cPointer())
}

func QMouseEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMouseEventTransition_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMouseEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMouseEventTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMouseEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMouseEventTransition_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMouseEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMouseEventTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMouseEventTransition) Delete() {
	C.QMouseEventTransition_Delete(this.h)
}
