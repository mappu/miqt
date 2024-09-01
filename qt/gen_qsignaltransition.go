package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQSignalTransition(h *C.QSignalTransition) *QSignalTransition {
	if h == nil {
		return nil
	}
	return &QSignalTransition{h: h, QAbstractTransition: newQAbstractTransition_U(unsafe.Pointer(h))}
}

func newQSignalTransition_U(h unsafe.Pointer) *QSignalTransition {
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
	ret := C.QSignalTransition_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSignalTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalTransition_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSignalTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalTransition_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSignalTransition) SenderObject() *QObject {
	ret := C.QSignalTransition_SenderObject(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QSignalTransition) SetSenderObject(sender *QObject) {
	C.QSignalTransition_SetSenderObject(this.h, sender.cPointer())
}

func (this *QSignalTransition) Signal() *QByteArray {
	ret := C.QSignalTransition_Signal(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSignalTransition) SetSignal(signal *QByteArray) {
	C.QSignalTransition_SetSignal(this.h, signal.cPointer())
}

func QSignalTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalTransition_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSignalTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSignalTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalTransition_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSignalTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSignalTransition) Delete() {
	C.QSignalTransition_Delete(this.h)
}
