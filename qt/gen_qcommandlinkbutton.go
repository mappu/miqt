package qt

/*

#include "gen_qcommandlinkbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCommandLinkButton struct {
	h *C.QCommandLinkButton
	*QPushButton
}

func (this *QCommandLinkButton) cPointer() *C.QCommandLinkButton {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCommandLinkButton(h *C.QCommandLinkButton) *QCommandLinkButton {
	if h == nil {
		return nil
	}
	return &QCommandLinkButton{h: h, QPushButton: newQPushButton_U(unsafe.Pointer(h))}
}

func newQCommandLinkButton_U(h unsafe.Pointer) *QCommandLinkButton {
	return newQCommandLinkButton((*C.QCommandLinkButton)(h))
}

// NewQCommandLinkButton constructs a new QCommandLinkButton object.
func NewQCommandLinkButton() *QCommandLinkButton {
	ret := C.QCommandLinkButton_new()
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton2 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton2(text string) *QCommandLinkButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QCommandLinkButton_new2((*C.struct_miqt_string)(text_ms))
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton3 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton3(text string, description string) *QCommandLinkButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	description_ms := miqt_strdupg(description)
	defer C.free(description_ms)
	ret := C.QCommandLinkButton_new3((*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(description_ms))
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton4 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton4(parent *QWidget) *QCommandLinkButton {
	ret := C.QCommandLinkButton_new4(parent.cPointer())
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton5 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton5(text string, parent *QWidget) *QCommandLinkButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QCommandLinkButton_new5((*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton6 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton6(text string, description string, parent *QWidget) *QCommandLinkButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	description_ms := miqt_strdupg(description)
	defer C.free(description_ms)
	ret := C.QCommandLinkButton_new6((*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(description_ms), parent.cPointer())
	return newQCommandLinkButton(ret)
}

func (this *QCommandLinkButton) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QCommandLinkButton_MetaObject(this.h)))
}

func (this *QCommandLinkButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QCommandLinkButton_Metacast(this.h, param1_Cstring)
}

func QCommandLinkButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QCommandLinkButton_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCommandLinkButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QCommandLinkButton_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCommandLinkButton) Description() string {
	var _ms *C.struct_miqt_string = C.QCommandLinkButton_Description(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCommandLinkButton) SetDescription(description string) {
	description_ms := miqt_strdupg(description)
	defer C.free(description_ms)
	C.QCommandLinkButton_SetDescription(this.h, (*C.struct_miqt_string)(description_ms))
}

func QCommandLinkButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCommandLinkButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCommandLinkButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCommandLinkButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCommandLinkButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCommandLinkButton_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCommandLinkButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCommandLinkButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCommandLinkButton) Delete() {
	C.QCommandLinkButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCommandLinkButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QCommandLinkButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
