package qt

/*

#include "gen_qfontdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFontDialog__FontDialogOption int

const (
	QFontDialog__FontDialogOption__NoButtons           QFontDialog__FontDialogOption = 1
	QFontDialog__FontDialogOption__DontUseNativeDialog QFontDialog__FontDialogOption = 2
	QFontDialog__FontDialogOption__ScalableFonts       QFontDialog__FontDialogOption = 4
	QFontDialog__FontDialogOption__NonScalableFonts    QFontDialog__FontDialogOption = 8
	QFontDialog__FontDialogOption__MonospacedFonts     QFontDialog__FontDialogOption = 16
	QFontDialog__FontDialogOption__ProportionalFonts   QFontDialog__FontDialogOption = 32
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
	if h == nil {
		return nil
	}
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
	return newQMetaObject_U(unsafe.Pointer(C.QFontDialog_MetaObject(this.h)))
}

func QFontDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFontDialog_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFontDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFontDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFontDialog) SetCurrentFont(font *QFont) {
	C.QFontDialog_SetCurrentFont(this.h, font.cPointer())
}

func (this *QFontDialog) CurrentFont() *QFont {
	_ret := C.QFontDialog_CurrentFont(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) SelectedFont() *QFont {
	_ret := C.QFontDialog_SelectedFont(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) SetOption(option QFontDialog__FontDialogOption) {
	C.QFontDialog_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QFontDialog) TestOption(option QFontDialog__FontDialogOption) bool {
	return (bool)(C.QFontDialog_TestOption(this.h, (C.uintptr_t)(option)))
}

func (this *QFontDialog) SetOptions(options int) {
	C.QFontDialog_SetOptions(this.h, (C.int)(options))
}

func (this *QFontDialog) Options() int {
	return (int)(C.QFontDialog_Options(this.h))
}

func (this *QFontDialog) SetVisible(visible bool) {
	C.QFontDialog_SetVisible(this.h, (C.bool)(visible))
}

func QFontDialog_GetFont(ok *bool) *QFont {
	_ret := C.QFontDialog_GetFont((*C.bool)(unsafe.Pointer(ok)))
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont2(ok *bool, initial *QFont) *QFont {
	_ret := C.QFontDialog_GetFont2((*C.bool)(unsafe.Pointer(ok)), initial.cPointer())
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) CurrentFontChanged(font *QFont) {
	C.QFontDialog_CurrentFontChanged(this.h, font.cPointer())
}
func (this *QFontDialog) OnCurrentFontChanged(slot func(font *QFont)) {
	C.QFontDialog_connect_CurrentFontChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFontDialog_CurrentFontChanged
func miqt_exec_callback_QFontDialog_CurrentFontChanged(cb *C.void, font *C.QFont) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(font *QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFont_U(unsafe.Pointer(font))

	gofunc(slotval1)
}

func (this *QFontDialog) FontSelected(font *QFont) {
	C.QFontDialog_FontSelected(this.h, font.cPointer())
}
func (this *QFontDialog) OnFontSelected(slot func(font *QFont)) {
	C.QFontDialog_connect_FontSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QFontDialog_FontSelected
func miqt_exec_callback_QFontDialog_FontSelected(cb *C.void, font *C.QFont) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(font *QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFont_U(unsafe.Pointer(font))

	gofunc(slotval1)
}

func QFontDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFontDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFontDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFontDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFontDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFontDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFontDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFontDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFontDialog) SetOption2(option QFontDialog__FontDialogOption, on bool) {
	C.QFontDialog_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

func QFontDialog_GetFont22(ok *bool, parent *QWidget) *QFont {
	_ret := C.QFontDialog_GetFont22((*C.bool)(unsafe.Pointer(ok)), parent.cPointer())
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont3(ok *bool, initial *QFont, parent *QWidget) *QFont {
	_ret := C.QFontDialog_GetFont3((*C.bool)(unsafe.Pointer(ok)), initial.cPointer(), parent.cPointer())
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont4(ok *bool, initial *QFont, parent *QWidget, title string) *QFont {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	_ret := C.QFontDialog_GetFont4((*C.bool)(unsafe.Pointer(ok)), initial.cPointer(), parent.cPointer(), (*C.struct_miqt_string)(title_ms))
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont5(ok *bool, initial *QFont, parent *QWidget, title string, options int) *QFont {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	_ret := C.QFontDialog_GetFont5((*C.bool)(unsafe.Pointer(ok)), initial.cPointer(), parent.cPointer(), (*C.struct_miqt_string)(title_ms), (C.int)(options))
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QFontDialog) Delete() {
	C.QFontDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
