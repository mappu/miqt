package qt

/*

#include "gen_qeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func (this *QEventTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQEventTransition(h *C.QEventTransition) *QEventTransition {
	if h == nil {
		return nil
	}
	return &QEventTransition{h: h, QAbstractTransition: UnsafeNewQAbstractTransition(unsafe.Pointer(h))}
}

func UnsafeNewQEventTransition(h unsafe.Pointer) *QEventTransition {
	return newQEventTransition((*C.QEventTransition)(h))
}

// NewQEventTransition constructs a new QEventTransition object.
func NewQEventTransition() *QEventTransition {
	ret := C.QEventTransition_new()
	return newQEventTransition(ret)
}

// NewQEventTransition2 constructs a new QEventTransition object.
func NewQEventTransition2(object *QObject, typeVal QEvent__Type) *QEventTransition {
	ret := C.QEventTransition_new2(object.cPointer(), (C.int)(typeVal))
	return newQEventTransition(ret)
}

// NewQEventTransition3 constructs a new QEventTransition object.
func NewQEventTransition3(sourceState *QState) *QEventTransition {
	ret := C.QEventTransition_new3(sourceState.cPointer())
	return newQEventTransition(ret)
}

// NewQEventTransition4 constructs a new QEventTransition object.
func NewQEventTransition4(object *QObject, typeVal QEvent__Type, sourceState *QState) *QEventTransition {
	ret := C.QEventTransition_new4(object.cPointer(), (C.int)(typeVal), sourceState.cPointer())
	return newQEventTransition(ret)
}

func (this *QEventTransition) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QEventTransition_MetaObject(this.h)))
}

func (this *QEventTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QEventTransition_Metacast(this.h, param1_Cstring))
}

func QEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventTransition) EventSource() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QEventTransition_EventSource(this.h)))
}

func (this *QEventTransition) SetEventSource(object *QObject) {
	C.QEventTransition_SetEventSource(this.h, object.cPointer())
}

func (this *QEventTransition) EventType() QEvent__Type {
	return (QEvent__Type)(C.QEventTransition_EventType(this.h))
}

func (this *QEventTransition) SetEventType(typeVal QEvent__Type) {
	C.QEventTransition_SetEventType(this.h, (C.int)(typeVal))
}

func QEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QEventTransition) Delete() {
	C.QEventTransition_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
