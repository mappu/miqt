package qt

/*

#include "gen_qradiobutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRadioButton struct {
	h *C.QRadioButton
	*QAbstractButton
}

func (this *QRadioButton) cPointer() *C.QRadioButton {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRadioButton(h *C.QRadioButton) *QRadioButton {
	if h == nil {
		return nil
	}
	return &QRadioButton{h: h, QAbstractButton: newQAbstractButton_U(unsafe.Pointer(h))}
}

func newQRadioButton_U(h unsafe.Pointer) *QRadioButton {
	return newQRadioButton((*C.QRadioButton)(h))
}

// NewQRadioButton constructs a new QRadioButton object.
func NewQRadioButton() *QRadioButton {
	ret := C.QRadioButton_new()
	return newQRadioButton(ret)
}

// NewQRadioButton2 constructs a new QRadioButton object.
func NewQRadioButton2(text string) *QRadioButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QRadioButton_new2((*C.struct_miqt_string)(text_ms))
	return newQRadioButton(ret)
}

// NewQRadioButton3 constructs a new QRadioButton object.
func NewQRadioButton3(parent *QWidget) *QRadioButton {
	ret := C.QRadioButton_new3(parent.cPointer())
	return newQRadioButton(ret)
}

// NewQRadioButton4 constructs a new QRadioButton object.
func NewQRadioButton4(text string, parent *QWidget) *QRadioButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QRadioButton_new4((*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQRadioButton(ret)
}

func (this *QRadioButton) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QRadioButton_MetaObject(this.h)))
}

func (this *QRadioButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QRadioButton_Metacast(this.h, param1_Cstring)
}

func QRadioButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QRadioButton_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QRadioButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QRadioButton_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRadioButton) SizeHint() *QSize {
	_ret := C.QRadioButton_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRadioButton) MinimumSizeHint() *QSize {
	_ret := C.QRadioButton_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QRadioButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QRadioButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QRadioButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QRadioButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QRadioButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QRadioButton_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QRadioButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QRadioButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QRadioButton) Delete() {
	C.QRadioButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
