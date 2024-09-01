package qt

/*

#include "gen_qcheckbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCheckBox struct {
	h *C.QCheckBox
	*QAbstractButton
}

func (this *QCheckBox) cPointer() *C.QCheckBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCheckBox(h *C.QCheckBox) *QCheckBox {
	if h == nil {
		return nil
	}
	return &QCheckBox{h: h, QAbstractButton: newQAbstractButton_U(unsafe.Pointer(h))}
}

func newQCheckBox_U(h unsafe.Pointer) *QCheckBox {
	return newQCheckBox((*C.QCheckBox)(h))
}

// NewQCheckBox constructs a new QCheckBox object.
func NewQCheckBox() *QCheckBox {
	ret := C.QCheckBox_new()
	return newQCheckBox(ret)
}

// NewQCheckBox2 constructs a new QCheckBox object.
func NewQCheckBox2(text string) *QCheckBox {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QCheckBox_new2(text_Cstring, C.ulong(len(text)))
	return newQCheckBox(ret)
}

// NewQCheckBox3 constructs a new QCheckBox object.
func NewQCheckBox3(parent *QWidget) *QCheckBox {
	ret := C.QCheckBox_new3(parent.cPointer())
	return newQCheckBox(ret)
}

// NewQCheckBox4 constructs a new QCheckBox object.
func NewQCheckBox4(text string, parent *QWidget) *QCheckBox {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QCheckBox_new4(text_Cstring, C.ulong(len(text)), parent.cPointer())
	return newQCheckBox(ret)
}

func (this *QCheckBox) MetaObject() *QMetaObject {
	ret := C.QCheckBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QCheckBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCheckBox_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCheckBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCheckBox_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCheckBox) SizeHint() *QSize {
	ret := C.QCheckBox_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCheckBox) MinimumSizeHint() *QSize {
	ret := C.QCheckBox_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCheckBox) SetTristate() {
	C.QCheckBox_SetTristate(this.h)
}

func (this *QCheckBox) IsTristate() bool {
	ret := C.QCheckBox_IsTristate(this.h)
	return (bool)(ret)
}

func (this *QCheckBox) CheckState() uintptr {
	ret := C.QCheckBox_CheckState(this.h)
	return (uintptr)(ret)
}

func (this *QCheckBox) SetCheckState(state uintptr) {
	C.QCheckBox_SetCheckState(this.h, (C.uintptr_t)(state))
}

func (this *QCheckBox) StateChanged(param1 int) {
	C.QCheckBox_StateChanged(this.h, (C.int)(param1))
}

func (this *QCheckBox) OnStateChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCheckBox_connect_StateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QCheckBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCheckBox_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCheckBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCheckBox_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCheckBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCheckBox_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCheckBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCheckBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCheckBox) SetTristate1(y bool) {
	C.QCheckBox_SetTristate1(this.h, (C.bool)(y))
}

func (this *QCheckBox) Delete() {
	C.QCheckBox_Delete(this.h)
}
