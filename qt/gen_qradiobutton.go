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
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QRadioButton_new2(text_Cstring, C.size_t(len(text)))
	return newQRadioButton(ret)
}

// NewQRadioButton3 constructs a new QRadioButton object.
func NewQRadioButton3(parent *QWidget) *QRadioButton {
	ret := C.QRadioButton_new3(parent.cPointer())
	return newQRadioButton(ret)
}

// NewQRadioButton4 constructs a new QRadioButton object.
func NewQRadioButton4(text string, parent *QWidget) *QRadioButton {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QRadioButton_new4(text_Cstring, C.size_t(len(text)), parent.cPointer())
	return newQRadioButton(ret)
}

func (this *QRadioButton) MetaObject() *QMetaObject {
	ret := C.QRadioButton_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QRadioButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRadioButton_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRadioButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRadioButton_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRadioButton) SizeHint() *QSize {
	ret := C.QRadioButton_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRadioButton) MinimumSizeHint() *QSize {
	ret := C.QRadioButton_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QRadioButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRadioButton_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRadioButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRadioButton_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRadioButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRadioButton_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRadioButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRadioButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRadioButton) Delete() {
	C.QRadioButton_Delete(this.h)
}
