package qt

/*

#include "gen_qcolordialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QColorDialog__ColorDialogOption int

const (
	QColorDialog__ColorDialogOption__ShowAlphaChannel    QColorDialog__ColorDialogOption = 1
	QColorDialog__ColorDialogOption__NoButtons           QColorDialog__ColorDialogOption = 2
	QColorDialog__ColorDialogOption__DontUseNativeDialog QColorDialog__ColorDialogOption = 4
)

type QColorDialog struct {
	h *C.QColorDialog
	*QDialog
}

func (this *QColorDialog) cPointer() *C.QColorDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func newQColorDialog(h *C.QColorDialog) *QColorDialog {
	if h == nil {
		return nil
	}
	return &QColorDialog{h: h, QDialog: newQDialog_U(unsafe.Pointer(h))}
}

func newQColorDialog_U(h unsafe.Pointer) *QColorDialog {
	return newQColorDialog((*C.QColorDialog)(h))
}

// NewQColorDialog constructs a new QColorDialog object.
func NewQColorDialog() *QColorDialog {
	ret := C.QColorDialog_new()
	return newQColorDialog(ret)
}

// NewQColorDialog2 constructs a new QColorDialog object.
func NewQColorDialog2(initial *QColor) *QColorDialog {
	ret := C.QColorDialog_new2(initial.cPointer())
	return newQColorDialog(ret)
}

// NewQColorDialog3 constructs a new QColorDialog object.
func NewQColorDialog3(parent *QWidget) *QColorDialog {
	ret := C.QColorDialog_new3(parent.cPointer())
	return newQColorDialog(ret)
}

// NewQColorDialog4 constructs a new QColorDialog object.
func NewQColorDialog4(initial *QColor, parent *QWidget) *QColorDialog {
	ret := C.QColorDialog_new4(initial.cPointer(), parent.cPointer())
	return newQColorDialog(ret)
}

func (this *QColorDialog) MetaObject() *QMetaObject {
	ret := C.QColorDialog_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QColorDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColorDialog_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColorDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColorDialog_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QColorDialog) SetCurrentColor(color *QColor) {
	C.QColorDialog_SetCurrentColor(this.h, color.cPointer())
}

func (this *QColorDialog) CurrentColor() *QColor {
	ret := C.QColorDialog_CurrentColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColorDialog) SelectedColor() *QColor {
	ret := C.QColorDialog_SelectedColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColorDialog) SetOption(option QColorDialog__ColorDialogOption) {
	C.QColorDialog_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QColorDialog) TestOption(option QColorDialog__ColorDialogOption) bool {
	ret := C.QColorDialog_TestOption(this.h, (C.uintptr_t)(option))
	return (bool)(ret)
}

func (this *QColorDialog) SetOptions(options int) {
	C.QColorDialog_SetOptions(this.h, (C.int)(options))
}

func (this *QColorDialog) Options() int {
	ret := C.QColorDialog_Options(this.h)
	return (int)(ret)
}

func (this *QColorDialog) SetVisible(visible bool) {
	C.QColorDialog_SetVisible(this.h, (C.bool)(visible))
}

func QColorDialog_GetColor() *QColor {
	ret := C.QColorDialog_GetColor()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColorDialog_GetRgba() uint {
	ret := C.QColorDialog_GetRgba()
	return (uint)(ret)
}

func QColorDialog_CustomCount() int {
	ret := C.QColorDialog_CustomCount()
	return (int)(ret)
}

func QColorDialog_CustomColor(index int) *QColor {
	ret := C.QColorDialog_CustomColor((C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColorDialog_SetCustomColor(index int, color QColor) {
	C.QColorDialog_SetCustomColor((C.int)(index), color.cPointer())
}

func QColorDialog_StandardColor(index int) *QColor {
	ret := C.QColorDialog_StandardColor((C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColorDialog_SetStandardColor(index int, color QColor) {
	C.QColorDialog_SetStandardColor((C.int)(index), color.cPointer())
}

func (this *QColorDialog) CurrentColorChanged(color *QColor) {
	C.QColorDialog_CurrentColorChanged(this.h, color.cPointer())
}

func (this *QColorDialog) OnCurrentColorChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QColorDialog_connect_CurrentColorChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QColorDialog) ColorSelected(color *QColor) {
	C.QColorDialog_ColorSelected(this.h, color.cPointer())
}

func (this *QColorDialog) OnColorSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QColorDialog_connect_ColorSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QColorDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColorDialog_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColorDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColorDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColorDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColorDialog_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColorDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColorDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QColorDialog) SetOption2(option QColorDialog__ColorDialogOption, on bool) {
	C.QColorDialog_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

func QColorDialog_GetColor1(initial *QColor) *QColor {
	ret := C.QColorDialog_GetColor1(initial.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColorDialog_GetColor2(initial *QColor, parent *QWidget) *QColor {
	ret := C.QColorDialog_GetColor2(initial.cPointer(), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColorDialog_GetColor3(initial *QColor, parent *QWidget, title string) *QColor {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QColorDialog_GetColor3(initial.cPointer(), parent.cPointer(), title_Cstring, C.size_t(len(title)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColorDialog_GetColor4(initial *QColor, parent *QWidget, title string, options int) *QColor {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QColorDialog_GetColor4(initial.cPointer(), parent.cPointer(), title_Cstring, C.size_t(len(title)), (C.int)(options))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColorDialog_GetRgba1(rgba uint) uint {
	ret := C.QColorDialog_GetRgba1((C.uint)(rgba))
	return (uint)(ret)
}

func QColorDialog_GetRgba2(rgba uint, ok *bool) uint {
	ret := C.QColorDialog_GetRgba2((C.uint)(rgba), (*C.bool)(unsafe.Pointer(ok)))
	return (uint)(ret)
}

func QColorDialog_GetRgba3(rgba uint, ok *bool, parent *QWidget) uint {
	ret := C.QColorDialog_GetRgba3((C.uint)(rgba), (*C.bool)(unsafe.Pointer(ok)), parent.cPointer())
	return (uint)(ret)
}

func (this *QColorDialog) Delete() {
	C.QColorDialog_Delete(this.h)
}
