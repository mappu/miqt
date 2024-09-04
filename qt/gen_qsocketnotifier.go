package qt

/*

#include "gen_qsocketnotifier.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSocketNotifier__Type int

const (
	QSocketNotifier__Type__Read      QSocketNotifier__Type = 0
	QSocketNotifier__Type__Write     QSocketNotifier__Type = 1
	QSocketNotifier__Type__Exception QSocketNotifier__Type = 2
)

type QSocketNotifier struct {
	h *C.QSocketNotifier
	*QObject
}

func (this *QSocketNotifier) cPointer() *C.QSocketNotifier {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSocketNotifier(h *C.QSocketNotifier) *QSocketNotifier {
	if h == nil {
		return nil
	}
	return &QSocketNotifier{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQSocketNotifier_U(h unsafe.Pointer) *QSocketNotifier {
	return newQSocketNotifier((*C.QSocketNotifier)(h))
}

// NewQSocketNotifier constructs a new QSocketNotifier object.
func NewQSocketNotifier(socket uint64, param2 QSocketNotifier__Type) *QSocketNotifier {
	ret := C.QSocketNotifier_new((C.ptrdiff_t)(socket), (C.uintptr_t)(param2))
	return newQSocketNotifier(ret)
}

// NewQSocketNotifier2 constructs a new QSocketNotifier object.
func NewQSocketNotifier2(socket uint64, param2 QSocketNotifier__Type, parent *QObject) *QSocketNotifier {
	ret := C.QSocketNotifier_new2((C.ptrdiff_t)(socket), (C.uintptr_t)(param2), parent.cPointer())
	return newQSocketNotifier(ret)
}

func (this *QSocketNotifier) MetaObject() *QMetaObject {
	ret := C.QSocketNotifier_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSocketNotifier_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSocketNotifier_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSocketNotifier_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSocketNotifier_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSocketNotifier) Socket() uint64 {
	ret := C.QSocketNotifier_Socket(this.h)
	return (uint64)(ret)
}

func (this *QSocketNotifier) Type() QSocketNotifier__Type {
	ret := C.QSocketNotifier_Type(this.h)
	return (QSocketNotifier__Type)(ret)
}

func (this *QSocketNotifier) IsEnabled() bool {
	ret := C.QSocketNotifier_IsEnabled(this.h)
	return (bool)(ret)
}

func (this *QSocketNotifier) SetEnabled(enabled bool) {
	C.QSocketNotifier_SetEnabled(this.h, (C.bool)(enabled))
}

func QSocketNotifier_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSocketNotifier_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSocketNotifier_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSocketNotifier_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSocketNotifier_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSocketNotifier_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSocketNotifier_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSocketNotifier_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSocketNotifier) Delete() {
	C.QSocketNotifier_Delete(this.h)
}

type QSocketDescriptor struct {
	h *C.QSocketDescriptor
}

func (this *QSocketDescriptor) cPointer() *C.QSocketDescriptor {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSocketDescriptor(h *C.QSocketDescriptor) *QSocketDescriptor {
	if h == nil {
		return nil
	}
	return &QSocketDescriptor{h: h}
}

func newQSocketDescriptor_U(h unsafe.Pointer) *QSocketDescriptor {
	return newQSocketDescriptor((*C.QSocketDescriptor)(h))
}

// NewQSocketDescriptor constructs a new QSocketDescriptor object.
func NewQSocketDescriptor() *QSocketDescriptor {
	ret := C.QSocketDescriptor_new()
	return newQSocketDescriptor(ret)
}

// NewQSocketDescriptor2 constructs a new QSocketDescriptor object.
func NewQSocketDescriptor2(param1 *QSocketDescriptor) *QSocketDescriptor {
	ret := C.QSocketDescriptor_new2(param1.cPointer())
	return newQSocketDescriptor(ret)
}

// NewQSocketDescriptor3 constructs a new QSocketDescriptor object.
func NewQSocketDescriptor3(descriptor uintptr) *QSocketDescriptor {
	if runtime.GOOS == "linux" {
		ret := C.QSocketDescriptor_new3((C.uintptr_t)(descriptor))
		return newQSocketDescriptor(ret)
	} else {
		panic("Unsupported OS")
	}
}

func (this *QSocketDescriptor) IsValid() bool {
	ret := C.QSocketDescriptor_IsValid(this.h)
	return (bool)(ret)
}

func (this *QSocketDescriptor) Delete() {
	C.QSocketDescriptor_Delete(this.h)
}
