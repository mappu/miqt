package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfontdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFontDialog struct {
	h *C.QFontDialog
	*QDialog
}

func (this *QFontDialog) cPointer() *C.QFontDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFontDialog(h *C.QFontDialog) *QFontDialog {
	return &QFontDialog{h: h, QDialog: newQDialog_U(unsafe.Pointer(h))}
}

func newQFontDialog_U(h unsafe.Pointer) *QFontDialog {
	return newQFontDialog((*C.QFontDialog)(h))
}

// NewQFontDialog constructs a new QFontDialog object.
func NewQFontDialog() *QFontDialog {
	ret := C.QFontDialog_new()
	return newQFontDialog(ret)
}

// NewQFontDialog2 constructs a new QFontDialog object.
func NewQFontDialog2(initial *QFont) *QFontDialog {
	ret := C.QFontDialog_new2(initial.cPointer())
	return newQFontDialog(ret)
}

// NewQFontDialog3 constructs a new QFontDialog object.
func NewQFontDialog3(parent *QWidget) *QFontDialog {
	ret := C.QFontDialog_new3(parent.cPointer())
	return newQFontDialog(ret)
}

// NewQFontDialog4 constructs a new QFontDialog object.
func NewQFontDialog4(initial *QFont, parent *QWidget) *QFontDialog {
	ret := C.QFontDialog_new4(initial.cPointer(), parent.cPointer())
	return newQFontDialog(ret)
}

func (this *QFontDialog) MetaObject() *QMetaObject {
	ret := C.QFontDialog_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFontDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontDialog_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFontDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontDialog_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontDialog) SetCurrentFont(font *QFont) {
	C.QFontDialog_SetCurrentFont(this.h, font.cPointer())
}

func (this *QFontDialog) CurrentFont() *QFont {
	ret := C.QFontDialog_CurrentFont(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontDialog) SelectedFont() *QFont {
	ret := C.QFontDialog_SelectedFont(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontDialog) SetVisible(visible bool) {
	C.QFontDialog_SetVisible(this.h, (C.bool)(visible))
}

func QFontDialog_GetFont(ok *bool) *QFont {
	ret := C.QFontDialog_GetFont((*C.bool)(unsafe.Pointer(ok)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontDialog) CurrentFontChanged(font *QFont) {
	C.QFontDialog_CurrentFontChanged(this.h, font.cPointer())
}

func (this *QFontDialog) OnCurrentFontChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFontDialog_connect_CurrentFontChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFontDialog) FontSelected(font *QFont) {
	C.QFontDialog_FontSelected(this.h, font.cPointer())
}

func (this *QFontDialog) OnFontSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFontDialog_connect_FontSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QFontDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontDialog_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFontDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFontDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontDialog_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFontDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFontDialog_GetFont2(ok *bool, parent *QWidget) *QFont {
	ret := C.QFontDialog_GetFont2((*C.bool)(unsafe.Pointer(ok)), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontDialog) Delete() {
	C.QFontDialog_Delete(this.h)
}
