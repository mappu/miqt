package qt

/*

#include "gen_qsignaltransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSignalTransition struct {
	h *C.QSignalTransition
	*QAbstractTransition
}

func (this *QSignalTransition) cPointer() *C.QSignalTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSignalTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSignalTransition(h *C.QSignalTransition) *QSignalTransition {
	if h == nil {
		return nil
	}
	return &QSignalTransition{h: h, QAbstractTransition: UnsafeNewQAbstractTransition(unsafe.Pointer(h))}
}

func UnsafeNewQSignalTransition(h unsafe.Pointer) *QSignalTransition {
	return newQSignalTransition((*C.QSignalTransition)(h))
}

// NewQSignalTransition constructs a new QSignalTransition object.
func NewQSignalTransition() *QSignalTransition {
	ret := C.QSignalTransition_new()
	return newQSignalTransition(ret)
}

// NewQSignalTransition2 constructs a new QSignalTransition object.
func NewQSignalTransition2(sender *QObject, signal string) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	ret := C.QSignalTransition_new2(sender.cPointer(), signal_Cstring)
	return newQSignalTransition(ret)
}

// NewQSignalTransition3 constructs a new QSignalTransition object.
func NewQSignalTransition3(sourceState *QState) *QSignalTransition {
	ret := C.QSignalTransition_new3(sourceState.cPointer())
	return newQSignalTransition(ret)
}

// NewQSignalTransition4 constructs a new QSignalTransition object.
func NewQSignalTransition4(sender *QObject, signal string, sourceState *QState) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	ret := C.QSignalTransition_new4(sender.cPointer(), signal_Cstring, sourceState.cPointer())
	return newQSignalTransition(ret)
}

func (this *QSignalTransition) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSignalTransition_MetaObject(this.h)))
}

func (this *QSignalTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSignalTransition_Metacast(this.h, param1_Cstring)
}

func QSignalTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalTransition_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSignalTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSignalTransition) SenderObject() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QSignalTransition_SenderObject(this.h)))
}

func (this *QSignalTransition) SetSenderObject(sender *QObject) {
	C.QSignalTransition_SetSenderObject(this.h, sender.cPointer())
}

func (this *QSignalTransition) Signal() *QByteArray {
	_ret := C.QSignalTransition_Signal(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSignalTransition) SetSignal(signal *QByteArray) {
	C.QSignalTransition_SetSignal(this.h, signal.cPointer())
}

func QSignalTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSignalTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSignalTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSignalTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSignalTransition) Delete() {
	C.QSignalTransition_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSignalTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QSignalTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
