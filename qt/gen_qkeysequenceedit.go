package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qkeysequenceedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QKeySequenceEdit struct {
	h *C.QKeySequenceEdit
	*QWidget
}

func (this *QKeySequenceEdit) cPointer() *C.QKeySequenceEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func newQKeySequenceEdit(h *C.QKeySequenceEdit) *QKeySequenceEdit {
	if h == nil {
		return nil
	}
	return &QKeySequenceEdit{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQKeySequenceEdit_U(h unsafe.Pointer) *QKeySequenceEdit {
	return newQKeySequenceEdit((*C.QKeySequenceEdit)(h))
}

// NewQKeySequenceEdit constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit() *QKeySequenceEdit {
	ret := C.QKeySequenceEdit_new()
	return newQKeySequenceEdit(ret)
}

// NewQKeySequenceEdit2 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit2(keySequence *QKeySequence) *QKeySequenceEdit {
	ret := C.QKeySequenceEdit_new2(keySequence.cPointer())
	return newQKeySequenceEdit(ret)
}

// NewQKeySequenceEdit3 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit3(parent *QWidget) *QKeySequenceEdit {
	ret := C.QKeySequenceEdit_new3(parent.cPointer())
	return newQKeySequenceEdit(ret)
}

// NewQKeySequenceEdit4 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit4(keySequence *QKeySequence, parent *QWidget) *QKeySequenceEdit {
	ret := C.QKeySequenceEdit_new4(keySequence.cPointer(), parent.cPointer())
	return newQKeySequenceEdit(ret)
}

func (this *QKeySequenceEdit) MetaObject() *QMetaObject {
	ret := C.QKeySequenceEdit_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QKeySequenceEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequenceEdit_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QKeySequenceEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequenceEdit_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QKeySequenceEdit) KeySequence() *QKeySequence {
	ret := C.QKeySequenceEdit_KeySequence(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQKeySequence(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QKeySequence) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QKeySequenceEdit) SetKeySequence(keySequence *QKeySequence) {
	C.QKeySequenceEdit_SetKeySequence(this.h, keySequence.cPointer())
}

func (this *QKeySequenceEdit) Clear() {
	C.QKeySequenceEdit_Clear(this.h)
}

func (this *QKeySequenceEdit) EditingFinished() {
	C.QKeySequenceEdit_EditingFinished(this.h)
}

func (this *QKeySequenceEdit) OnEditingFinished(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QKeySequenceEdit_connect_EditingFinished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QKeySequenceEdit) KeySequenceChanged(keySequence *QKeySequence) {
	C.QKeySequenceEdit_KeySequenceChanged(this.h, keySequence.cPointer())
}

func (this *QKeySequenceEdit) OnKeySequenceChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QKeySequenceEdit_connect_KeySequenceChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QKeySequenceEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequenceEdit_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QKeySequenceEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequenceEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QKeySequenceEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequenceEdit_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QKeySequenceEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequenceEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QKeySequenceEdit) Delete() {
	C.QKeySequenceEdit_Delete(this.h)
}
