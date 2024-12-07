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
	QColorDialog__ShowAlphaChannel    QColorDialog__ColorDialogOption = 1
	QColorDialog__NoButtons           QColorDialog__ColorDialogOption = 2
	QColorDialog__DontUseNativeDialog QColorDialog__ColorDialogOption = 4
)

type QColorDialog struct {
	h          *C.QColorDialog
	isSubclass bool
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

// newQColorDialog constructs the type using only CGO pointers.
func newQColorDialog(h *C.QColorDialog, h_QDialog *C.QDialog, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QColorDialog {
	if h == nil {
		return nil
	}
	return &QColorDialog{h: h,
		QDialog: newQDialog(h_QDialog, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQColorDialog constructs the type using only unsafe pointers.
func UnsafeNewQColorDialog(h unsafe.Pointer, h_QDialog unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QColorDialog {
	if h == nil {
		return nil
	}

	return &QColorDialog{h: (*C.QColorDialog)(h),
		QDialog: UnsafeNewQDialog(h_QDialog, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQColorDialog constructs a new QColorDialog object.
func NewQColorDialog(parent *QWidget) *QColorDialog {
	var outptr_QColorDialog *C.QColorDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QColorDialog_new(parent.cPointer(), &outptr_QColorDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQColorDialog(outptr_QColorDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQColorDialog2 constructs a new QColorDialog object.
func NewQColorDialog2() *QColorDialog {
	var outptr_QColorDialog *C.QColorDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QColorDialog_new2(&outptr_QColorDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQColorDialog(outptr_QColorDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQColorDialog3 constructs a new QColorDialog object.
func NewQColorDialog3(initial *QColor) *QColorDialog {
	var outptr_QColorDialog *C.QColorDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QColorDialog_new3(initial.cPointer(), &outptr_QColorDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQColorDialog(outptr_QColorDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQColorDialog4 constructs a new QColorDialog object.
func NewQColorDialog4(initial *QColor, parent *QWidget) *QColorDialog {
	var outptr_QColorDialog *C.QColorDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QColorDialog_new4(initial.cPointer(), parent.cPointer(), &outptr_QColorDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQColorDialog(outptr_QColorDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QColorDialog) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QColorDialog_MetaObject(this.h)))
}

func (this *QColorDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QColorDialog_Metacast(this.h, param1_Cstring))
}

func QColorDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColorDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	var _ms C.struct_miqt_string = C.QColorDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColorDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColorDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColorDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	_ret := C.QColorDialog_GetColor3(initial.cPointer(), parent.cPointer(), title_ms)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetColor4(initial *QColor, parent *QWidget, title string, options QColorDialog__ColorDialogOption) *QColor {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	_ret := C.QColorDialog_GetColor4(initial.cPointer(), parent.cPointer(), title_ms, (C.int)(options))
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

func (this *QColorDialog) callVirtualBase_SetVisible(visible bool) {

	C.QColorDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QColorDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_SetVisible
func miqt_exec_callback_QColorDialog_SetVisible(self *C.QColorDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QColorDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QColorDialog) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QColorDialog_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_ChangeEvent
func miqt_exec_callback_QColorDialog_ChangeEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QColorDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_Done(result int) {

	C.QColorDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QColorDialog) OnDone(slot func(super func(result int), result int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_Done
func miqt_exec_callback_QColorDialog_Done(self *C.QColorDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QColorDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QColorDialog) callVirtualBase_SizeHint() *QSize {

	_ret := C.QColorDialog_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColorDialog) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_SizeHint
func miqt_exec_callback_QColorDialog_SizeHint(self *C.QColorDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QColorDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QColorDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColorDialog) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_MinimumSizeHint
func miqt_exec_callback_QColorDialog_MinimumSizeHint(self *C.QColorDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QColorDialog) callVirtualBase_Open() {

	C.QColorDialog_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QColorDialog) OnOpen(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_Open
func miqt_exec_callback_QColorDialog_Open(self *C.QColorDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColorDialog{h: self}).callVirtualBase_Open)

}

func (this *QColorDialog) callVirtualBase_Exec() int {

	return (int)(C.QColorDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QColorDialog) OnExec(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_Exec
func miqt_exec_callback_QColorDialog_Exec(self *C.QColorDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_Accept() {

	C.QColorDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QColorDialog) OnAccept(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_Accept
func miqt_exec_callback_QColorDialog_Accept(self *C.QColorDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColorDialog{h: self}).callVirtualBase_Accept)

}

func (this *QColorDialog) callVirtualBase_Reject() {

	C.QColorDialog_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QColorDialog) OnReject(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_Reject
func miqt_exec_callback_QColorDialog_Reject(self *C.QColorDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColorDialog{h: self}).callVirtualBase_Reject)

}

func (this *QColorDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QColorDialog_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_KeyPressEvent
func miqt_exec_callback_QColorDialog_KeyPressEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QColorDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QColorDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_CloseEvent
func miqt_exec_callback_QColorDialog_CloseEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(param1), nil)

	gofunc((&QColorDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QColorDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_ShowEvent
func miqt_exec_callback_QColorDialog_ShowEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(param1), nil)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QColorDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_ResizeEvent
func miqt_exec_callback_QColorDialog_ResizeEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(param1), nil)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QColorDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_ContextMenuEvent
func miqt_exec_callback_QColorDialog_ContextMenuEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QColorDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QColorDialog) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QColorDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_EventFilter
func miqt_exec_callback_QColorDialog_EventFilter(self *C.QColorDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(param1))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QColorDialog) Delete() {
	C.QColorDialog_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColorDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QColorDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
