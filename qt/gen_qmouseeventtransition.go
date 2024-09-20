package qt

/*

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
func NewQMouseEventTransition2(object *QObject, typeVal QEvent__Type, button MouseButton) *QMouseEventTransition {
	ret := C.QMouseEventTransition_new2(object.cPointer(), (C.int)(typeVal), (C.int)(button))
	return newQMouseEventTransition(ret)
}

// NewQMouseEventTransition3 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition3(sourceState *QState) *QMouseEventTransition {
	ret := C.QMouseEventTransition_new3(sourceState.cPointer())
	return newQMouseEventTransition(ret)
}

// NewQMouseEventTransition4 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition4(object *QObject, typeVal QEvent__Type, button MouseButton, sourceState *QState) *QMouseEventTransition {
	ret := C.QMouseEventTransition_new4(object.cPointer(), (C.int)(typeVal), (C.int)(button), sourceState.cPointer())
	return newQMouseEventTransition(ret)
}

func (this *QMouseEventTransition) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QMouseEventTransition_MetaObject(this.h)))
}

func QMouseEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMouseEventTransition_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMouseEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMouseEventTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMouseEventTransition) Button() MouseButton {
	return (MouseButton)(C.QMouseEventTransition_Button(this.h))
}

func (this *QMouseEventTransition) SetButton(button MouseButton) {
	C.QMouseEventTransition_SetButton(this.h, (C.int)(button))
}

func (this *QMouseEventTransition) ModifierMask() KeyboardModifier {
	return (KeyboardModifier)(C.QMouseEventTransition_ModifierMask(this.h))
}

func (this *QMouseEventTransition) SetModifierMask(modifiers KeyboardModifier) {
	C.QMouseEventTransition_SetModifierMask(this.h, (C.int)(modifiers))
}

func (this *QMouseEventTransition) HitTestPath() *QPainterPath {
	_ret := C.QMouseEventTransition_HitTestPath(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEventTransition) SetHitTestPath(path *QPainterPath) {
	C.QMouseEventTransition_SetHitTestPath(this.h, path.cPointer())
}

func QMouseEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMouseEventTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMouseEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMouseEventTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMouseEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMouseEventTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMouseEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMouseEventTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMouseEventTransition) Delete() {
	C.QMouseEventTransition_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMouseEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QMouseEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
