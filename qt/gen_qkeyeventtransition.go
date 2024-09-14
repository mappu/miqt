package qt

/*

#include "gen_qkeyeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QKeyEventTransition struct {
	h *C.QKeyEventTransition
	*QEventTransition
}

func (this *QKeyEventTransition) cPointer() *C.QKeyEventTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func newQKeyEventTransition(h *C.QKeyEventTransition) *QKeyEventTransition {
	if h == nil {
		return nil
	}
	return &QKeyEventTransition{h: h, QEventTransition: newQEventTransition_U(unsafe.Pointer(h))}
}

func newQKeyEventTransition_U(h unsafe.Pointer) *QKeyEventTransition {
	return newQKeyEventTransition((*C.QKeyEventTransition)(h))
}

// NewQKeyEventTransition constructs a new QKeyEventTransition object.
func NewQKeyEventTransition() *QKeyEventTransition {
	ret := C.QKeyEventTransition_new()
	return newQKeyEventTransition(ret)
}

// NewQKeyEventTransition2 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition2(object *QObject, typeVal QEvent__Type, key int) *QKeyEventTransition {
	ret := C.QKeyEventTransition_new2(object.cPointer(), (C.uintptr_t)(typeVal), (C.int)(key))
	return newQKeyEventTransition(ret)
}

// NewQKeyEventTransition3 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition3(sourceState *QState) *QKeyEventTransition {
	ret := C.QKeyEventTransition_new3(sourceState.cPointer())
	return newQKeyEventTransition(ret)
}

// NewQKeyEventTransition4 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition4(object *QObject, typeVal QEvent__Type, key int, sourceState *QState) *QKeyEventTransition {
	ret := C.QKeyEventTransition_new4(object.cPointer(), (C.uintptr_t)(typeVal), (C.int)(key), sourceState.cPointer())
	return newQKeyEventTransition(ret)
}

func (this *QKeyEventTransition) MetaObject() *QMetaObject {
	_ret := C.QKeyEventTransition_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QKeyEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QKeyEventTransition_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QKeyEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QKeyEventTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QKeyEventTransition) Key() int {
	_ret := C.QKeyEventTransition_Key(this.h)
	return (int)(_ret)
}

func (this *QKeyEventTransition) SetKey(key int) {
	C.QKeyEventTransition_SetKey(this.h, (C.int)(key))
}

func (this *QKeyEventTransition) ModifierMask() int {
	_ret := C.QKeyEventTransition_ModifierMask(this.h)
	return (int)(_ret)
}

func (this *QKeyEventTransition) SetModifierMask(modifiers int) {
	C.QKeyEventTransition_SetModifierMask(this.h, (C.int)(modifiers))
}

func QKeyEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QKeyEventTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QKeyEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QKeyEventTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QKeyEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QKeyEventTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QKeyEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QKeyEventTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QKeyEventTransition) Delete() {
	C.QKeyEventTransition_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeyEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeyEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
