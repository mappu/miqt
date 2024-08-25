package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsocketnotifier.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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
	return &QSocketNotifier{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQSocketNotifier_U(h unsafe.Pointer) *QSocketNotifier {
	return newQSocketNotifier((*C.QSocketNotifier)(h))
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

func (this *QSocketNotifier) Socket() uintptr {
	ret := C.QSocketNotifier_Socket(this.h)
	return (uintptr)(ret)
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
	return &QSocketDescriptor{h: h}
}

func newQSocketDescriptor_U(h unsafe.Pointer) *QSocketDescriptor {
	return newQSocketDescriptor((*C.QSocketDescriptor)(h))
}

// NewQSocketDescriptor constructs a new QSocketDescriptor object.
func NewQSocketDescriptor(param1 *QSocketDescriptor) *QSocketDescriptor {
	ret := C.QSocketDescriptor_new(param1.cPointer())
	return newQSocketDescriptor(ret)
}

func (this *QSocketDescriptor) IsValid() bool {
	ret := C.QSocketDescriptor_IsValid(this.h)
	return (bool)(ret)
}

func (this *QSocketDescriptor) Delete() {
	C.QSocketDescriptor_Delete(this.h)
}
