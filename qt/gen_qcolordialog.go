package qt

/*

#include "gen_qcolordialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QColorDialog__ColorDialogOption int

const (
	QColorDialog__ShowAlphaChannel    QColorDialog__ColorDialogOption = 1
	QColorDialog__NoButtons           QColorDialog__ColorDialogOption = 2
	QColorDialog__DontUseNativeDialog QColorDialog__ColorDialogOption = 4
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

func (this *QColorDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQColorDialog(h *C.QColorDialog) *QColorDialog {
	if h == nil {
		return nil
	}
	return &QColorDialog{h: h, QDialog: UnsafeNewQDialog(unsafe.Pointer(h))}
}

func UnsafeNewQColorDialog(h unsafe.Pointer) *QColorDialog {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QColorDialog_MetaObject(this.h)))
}

func (this *QColorDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QColorDialog_Metacast(this.h, param1_Cstring)
}

func QColorDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QColorDialog_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QColorDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QColorDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QColorDialog) SetCurrentColor(color *QColor) {
	C.QColorDialog_SetCurrentColor(this.h, color.cPointer())
}

func (this *QColorDialog) CurrentColor() *QColor {
	_ret := C.QColorDialog_CurrentColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorDialog) SelectedColor() *QColor {
	_ret := C.QColorDialog_SelectedColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorDialog) SetOption(option QColorDialog__ColorDialogOption) {
	C.QColorDialog_SetOption(this.h, (C.int)(option))
}

func (this *QColorDialog) TestOption(option QColorDialog__ColorDialogOption) bool {
	return (bool)(C.QColorDialog_TestOption(this.h, (C.int)(option)))
}

func (this *QColorDialog) SetOptions(options QColorDialog__ColorDialogOption) {
	C.QColorDialog_SetOptions(this.h, (C.int)(options))
}

func (this *QColorDialog) Options() QColorDialog__ColorDialogOption {
	return (QColorDialog__ColorDialogOption)(C.QColorDialog_Options(this.h))
}

func (this *QColorDialog) SetVisible(visible bool) {
	C.QColorDialog_SetVisible(this.h, (C.bool)(visible))
}

func QColorDialog_GetColor() *QColor {
	_ret := C.QColorDialog_GetColor()
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetRgba() uint {
	return (uint)(C.QColorDialog_GetRgba())
}

func QColorDialog_CustomCount() int {
	return (int)(C.QColorDialog_CustomCount())
}

func QColorDialog_CustomColor(index int) *QColor {
	_ret := C.QColorDialog_CustomColor((C.int)(index))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_SetCustomColor(index int, color QColor) {
	C.QColorDialog_SetCustomColor((C.int)(index), color.cPointer())
}

func QColorDialog_StandardColor(index int) *QColor {
	_ret := C.QColorDialog_StandardColor((C.int)(index))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_SetStandardColor(index int, color QColor) {
	C.QColorDialog_SetStandardColor((C.int)(index), color.cPointer())
}

func (this *QColorDialog) CurrentColorChanged(color *QColor) {
	C.QColorDialog_CurrentColorChanged(this.h, color.cPointer())
}
func (this *QColorDialog) OnCurrentColorChanged(slot func(color *QColor)) {
	C.QColorDialog_connect_CurrentColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_CurrentColorChanged
func miqt_exec_callback_QColorDialog_CurrentColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func (this *QColorDialog) ColorSelected(color *QColor) {
	C.QColorDialog_ColorSelected(this.h, color.cPointer())
}
func (this *QColorDialog) OnColorSelected(slot func(color *QColor)) {
	C.QColorDialog_connect_ColorSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_ColorSelected
func miqt_exec_callback_QColorDialog_ColorSelected(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func QColorDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QColorDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QColorDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QColorDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QColorDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QColorDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QColorDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QColorDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QColorDialog) SetOption2(option QColorDialog__ColorDialogOption, on bool) {
	C.QColorDialog_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

func QColorDialog_GetColor1(initial *QColor) *QColor {
	_ret := C.QColorDialog_GetColor1(initial.cPointer())
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetColor2(initial *QColor, parent *QWidget) *QColor {
	_ret := C.QColorDialog_GetColor2(initial.cPointer(), parent.cPointer())
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetColor3(initial *QColor, parent *QWidget, title string) *QColor {
	title_ms := libmiqt.Strdupg(title)
	defer C.free(title_ms)
	_ret := C.QColorDialog_GetColor3(initial.cPointer(), parent.cPointer(), (*C.struct_miqt_string)(title_ms))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetColor4(initial *QColor, parent *QWidget, title string, options QColorDialog__ColorDialogOption) *QColor {
	title_ms := libmiqt.Strdupg(title)
	defer C.free(title_ms)
	_ret := C.QColorDialog_GetColor4(initial.cPointer(), parent.cPointer(), (*C.struct_miqt_string)(title_ms), (C.int)(options))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetRgba1(rgba uint) uint {
	return (uint)(C.QColorDialog_GetRgba1((C.uint)(rgba)))
}

func QColorDialog_GetRgba2(rgba uint, ok *bool) uint {
	return (uint)(C.QColorDialog_GetRgba2((C.uint)(rgba), (*C.bool)(unsafe.Pointer(ok))))
}

func QColorDialog_GetRgba3(rgba uint, ok *bool, parent *QWidget) uint {
	return (uint)(C.QColorDialog_GetRgba3((C.uint)(rgba), (*C.bool)(unsafe.Pointer(ok)), parent.cPointer()))
}

// Delete this object from C++ memory.
func (this *QColorDialog) Delete() {
	C.QColorDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColorDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QColorDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
