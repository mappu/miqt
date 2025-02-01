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

// newQColorDialog constructs the type using only CGO pointers.
func newQColorDialog(h *C.QColorDialog) *QColorDialog {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QColorDialog_virtbase(h, &outptr_QDialog)

	return &QColorDialog{h: h,
		QDialog: newQDialog(outptr_QDialog)}
}

// UnsafeNewQColorDialog constructs the type using only unsafe pointers.
func UnsafeNewQColorDialog(h unsafe.Pointer) *QColorDialog {
	return newQColorDialog((*C.QColorDialog)(h))
}

// NewQColorDialog constructs a new QColorDialog object.
func NewQColorDialog(parent *QWidget) *QColorDialog {

	return newQColorDialog(C.QColorDialog_new(parent.cPointer()))
}

// NewQColorDialog2 constructs a new QColorDialog object.
func NewQColorDialog2() *QColorDialog {

	return newQColorDialog(C.QColorDialog_new2())
}

// NewQColorDialog3 constructs a new QColorDialog object.
func NewQColorDialog3(initial *QColor) *QColorDialog {

	return newQColorDialog(C.QColorDialog_new3(initial.cPointer()))
}

// NewQColorDialog4 constructs a new QColorDialog object.
func NewQColorDialog4(initial *QColor, parent *QWidget) *QColorDialog {

	return newQColorDialog(C.QColorDialog_new4(initial.cPointer(), parent.cPointer()))
}

func (this *QColorDialog) MetaObject() *QMetaObject {
	return newQMetaObject(C.QColorDialog_metaObject(this.h))
}

func (this *QColorDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QColorDialog_metacast(this.h, param1_Cstring))
}

func QColorDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColorDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColorDialog) SetCurrentColor(color *QColor) {
	C.QColorDialog_setCurrentColor(this.h, color.cPointer())
}

func (this *QColorDialog) CurrentColor() *QColor {
	_goptr := newQColor(C.QColorDialog_currentColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorDialog) SelectedColor() *QColor {
	_goptr := newQColor(C.QColorDialog_selectedColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorDialog) SetOption(option QColorDialog__ColorDialogOption) {
	C.QColorDialog_setOption(this.h, (C.int)(option))
}

func (this *QColorDialog) TestOption(option QColorDialog__ColorDialogOption) bool {
	return (bool)(C.QColorDialog_testOption(this.h, (C.int)(option)))
}

func (this *QColorDialog) SetOptions(options QColorDialog__ColorDialogOption) {
	C.QColorDialog_setOptions(this.h, (C.int)(options))
}

func (this *QColorDialog) Options() QColorDialog__ColorDialogOption {
	return (QColorDialog__ColorDialogOption)(C.QColorDialog_options(this.h))
}

func (this *QColorDialog) SetVisible(visible bool) {
	C.QColorDialog_setVisible(this.h, (C.bool)(visible))
}

func QColorDialog_GetColor() *QColor {
	_goptr := newQColor(C.QColorDialog_getColor())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetRgba() uint {
	return (uint)(C.QColorDialog_getRgba())
}

func QColorDialog_CustomCount() int {
	return (int)(C.QColorDialog_customCount())
}

func QColorDialog_CustomColor(index int) *QColor {
	_goptr := newQColor(C.QColorDialog_customColor((C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_SetCustomColor(index int, color QColor) {
	C.QColorDialog_setCustomColor((C.int)(index), color.cPointer())
}

func QColorDialog_StandardColor(index int) *QColor {
	_goptr := newQColor(C.QColorDialog_standardColor((C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_SetStandardColor(index int, color QColor) {
	C.QColorDialog_setStandardColor((C.int)(index), color.cPointer())
}

func (this *QColorDialog) CurrentColorChanged(color *QColor) {
	C.QColorDialog_currentColorChanged(this.h, color.cPointer())
}
func (this *QColorDialog) OnCurrentColorChanged(slot func(color *QColor)) {
	C.QColorDialog_connect_currentColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_currentColorChanged
func miqt_exec_callback_QColorDialog_currentColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQColor(color)

	gofunc(slotval1)
}

func (this *QColorDialog) ColorSelected(color *QColor) {
	C.QColorDialog_colorSelected(this.h, color.cPointer())
}
func (this *QColorDialog) OnColorSelected(slot func(color *QColor)) {
	C.QColorDialog_connect_colorSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorDialog_colorSelected
func miqt_exec_callback_QColorDialog_colorSelected(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQColor(color)

	gofunc(slotval1)
}

func QColorDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColorDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColorDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColorDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColorDialog_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColorDialog) SetOption2(option QColorDialog__ColorDialogOption, on bool) {
	C.QColorDialog_setOption2(this.h, (C.int)(option), (C.bool)(on))
}

func QColorDialog_GetColor1(initial *QColor) *QColor {
	_goptr := newQColor(C.QColorDialog_getColor1(initial.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetColor2(initial *QColor, parent *QWidget) *QColor {
	_goptr := newQColor(C.QColorDialog_getColor2(initial.cPointer(), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetColor3(initial *QColor, parent *QWidget, title string) *QColor {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	_goptr := newQColor(C.QColorDialog_getColor3(initial.cPointer(), parent.cPointer(), title_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetColor4(initial *QColor, parent *QWidget, title string, options QColorDialog__ColorDialogOption) *QColor {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	_goptr := newQColor(C.QColorDialog_getColor4(initial.cPointer(), parent.cPointer(), title_ms, (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColorDialog_GetRgba1(rgba uint) uint {
	return (uint)(C.QColorDialog_getRgba1((C.uint)(rgba)))
}

func QColorDialog_GetRgba2(rgba uint, ok *bool) uint {
	return (uint)(C.QColorDialog_getRgba2((C.uint)(rgba), (*C.bool)(unsafe.Pointer(ok))))
}

func QColorDialog_GetRgba3(rgba uint, ok *bool, parent *QWidget) uint {
	return (uint)(C.QColorDialog_getRgba3((C.uint)(rgba), (*C.bool)(unsafe.Pointer(ok)), parent.cPointer()))
}

func (this *QColorDialog) callVirtualBase_SetVisible(visible bool) {

	C.QColorDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QColorDialog) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QColorDialog_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_setVisible
func miqt_exec_callback_QColorDialog_setVisible(self *C.QColorDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QColorDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QColorDialog) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QColorDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnchangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QColorDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_changeEvent
func miqt_exec_callback_QColorDialog_changeEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_Done(result int) {

	C.QColorDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QColorDialog) Ondone(slot func(super func(result int), result int)) {
	ok := C.QColorDialog_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_done
func miqt_exec_callback_QColorDialog_done(self *C.QColorDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QColorDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QColorDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QColorDialog_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColorDialog) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QColorDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_sizeHint
func miqt_exec_callback_QColorDialog_sizeHint(self *C.QColorDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QColorDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QColorDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColorDialog) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QColorDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_minimumSizeHint
func miqt_exec_callback_QColorDialog_minimumSizeHint(self *C.QColorDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QColorDialog) callVirtualBase_Open() {

	C.QColorDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QColorDialog) Onopen(slot func(super func())) {
	ok := C.QColorDialog_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_open
func miqt_exec_callback_QColorDialog_open(self *C.QColorDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColorDialog{h: self}).callVirtualBase_Open)

}

func (this *QColorDialog) callVirtualBase_Exec() int {

	return (int)(C.QColorDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QColorDialog) Onexec(slot func(super func() int) int) {
	ok := C.QColorDialog_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_exec
func miqt_exec_callback_QColorDialog_exec(self *C.QColorDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_Accept() {

	C.QColorDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QColorDialog) Onaccept(slot func(super func())) {
	ok := C.QColorDialog_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_accept
func miqt_exec_callback_QColorDialog_accept(self *C.QColorDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColorDialog{h: self}).callVirtualBase_Accept)

}

func (this *QColorDialog) callVirtualBase_Reject() {

	C.QColorDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QColorDialog) Onreject(slot func(super func())) {
	ok := C.QColorDialog_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_reject
func miqt_exec_callback_QColorDialog_reject(self *C.QColorDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColorDialog{h: self}).callVirtualBase_Reject)

}

func (this *QColorDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QColorDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OnkeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QColorDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_keyPressEvent
func miqt_exec_callback_QColorDialog_keyPressEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QColorDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QColorDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OncloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QColorDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_closeEvent
func miqt_exec_callback_QColorDialog_closeEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QColorDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QColorDialog_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OnshowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QColorDialog_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_showEvent
func miqt_exec_callback_QColorDialog_showEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QColorDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OnresizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QColorDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_resizeEvent
func miqt_exec_callback_QColorDialog_resizeEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QColorDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OncontextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QColorDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_contextMenuEvent
func miqt_exec_callback_QColorDialog_contextMenuEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QColorDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QColorDialog) OneventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QColorDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_eventFilter
func miqt_exec_callback_QColorDialog_eventFilter(self *C.QColorDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_DevType() int {

	return (int)(C.QColorDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QColorDialog) OndevType(slot func(super func() int) int) {
	ok := C.QColorDialog_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_devType
func miqt_exec_callback_QColorDialog_devType(self *C.QColorDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QColorDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QColorDialog) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QColorDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_heightForWidth
func miqt_exec_callback_QColorDialog_heightForWidth(self *C.QColorDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QColorDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QColorDialog) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QColorDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_hasHeightForWidth
func miqt_exec_callback_QColorDialog_hasHeightForWidth(self *C.QColorDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QColorDialog_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QColorDialog) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QColorDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_paintEngine
func miqt_exec_callback_QColorDialog_paintEngine(self *C.QColorDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QColorDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QColorDialog_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QColorDialog) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QColorDialog_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_event
func miqt_exec_callback_QColorDialog_event(self *C.QColorDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QColorDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QColorDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_mousePressEvent
func miqt_exec_callback_QColorDialog_mousePressEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QColorDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QColorDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_mouseReleaseEvent
func miqt_exec_callback_QColorDialog_mouseReleaseEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QColorDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QColorDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_mouseDoubleClickEvent
func miqt_exec_callback_QColorDialog_mouseDoubleClickEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QColorDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QColorDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_mouseMoveEvent
func miqt_exec_callback_QColorDialog_mouseMoveEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QColorDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QColorDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_wheelEvent
func miqt_exec_callback_QColorDialog_wheelEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QColorDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QColorDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_keyReleaseEvent
func miqt_exec_callback_QColorDialog_keyReleaseEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QColorDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QColorDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_focusInEvent
func miqt_exec_callback_QColorDialog_focusInEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QColorDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QColorDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_focusOutEvent
func miqt_exec_callback_QColorDialog_focusOutEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_EnterEvent(event *QEvent) {

	C.QColorDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QColorDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_enterEvent
func miqt_exec_callback_QColorDialog_enterEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QColorDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QColorDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_leaveEvent
func miqt_exec_callback_QColorDialog_leaveEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QColorDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QColorDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_paintEvent
func miqt_exec_callback_QColorDialog_paintEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QColorDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QColorDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_moveEvent
func miqt_exec_callback_QColorDialog_moveEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QColorDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QColorDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_tabletEvent
func miqt_exec_callback_QColorDialog_tabletEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QColorDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QColorDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_actionEvent
func miqt_exec_callback_QColorDialog_actionEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QColorDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QColorDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_dragEnterEvent
func miqt_exec_callback_QColorDialog_dragEnterEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QColorDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QColorDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_dragMoveEvent
func miqt_exec_callback_QColorDialog_dragMoveEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QColorDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QColorDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_dragLeaveEvent
func miqt_exec_callback_QColorDialog_dragLeaveEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QColorDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QColorDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_dropEvent
func miqt_exec_callback_QColorDialog_dropEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QColorDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QColorDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_hideEvent
func miqt_exec_callback_QColorDialog_hideEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QColorDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QColorDialog) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QColorDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_nativeEvent
func miqt_exec_callback_QColorDialog_nativeEvent(self *C.QColorDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QColorDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QColorDialog) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QColorDialog_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_metric
func miqt_exec_callback_QColorDialog_metric(self *C.QColorDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_InitPainter(painter *QPainter) {

	C.QColorDialog_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QColorDialog) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QColorDialog_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_initPainter
func miqt_exec_callback_QColorDialog_initPainter(self *C.QColorDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QColorDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QColorDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QColorDialog_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QColorDialog) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QColorDialog_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_redirected
func miqt_exec_callback_QColorDialog_redirected(self *C.QColorDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QColorDialog) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QColorDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QColorDialog) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QColorDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_sharedPainter
func miqt_exec_callback_QColorDialog_sharedPainter(self *C.QColorDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QColorDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QColorDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColorDialog) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QColorDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_inputMethodEvent
func miqt_exec_callback_QColorDialog_inputMethodEvent(self *C.QColorDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QColorDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QColorDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColorDialog) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QColorDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_inputMethodQuery
func miqt_exec_callback_QColorDialog_inputMethodQuery(self *C.QColorDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QColorDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QColorDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QColorDialog) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QColorDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_focusNextPrevChild
func miqt_exec_callback_QColorDialog_focusNextPrevChild(self *C.QColorDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QColorDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QColorDialog) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QColorDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QColorDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_timerEvent
func miqt_exec_callback_QColorDialog_timerEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QColorDialog_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QColorDialog_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_childEvent
func miqt_exec_callback_QColorDialog_childEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QColorDialog_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColorDialog) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QColorDialog_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_customEvent
func miqt_exec_callback_QColorDialog_customEvent(self *C.QColorDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QColorDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QColorDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QColorDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QColorDialog) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QColorDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_connectNotify
func miqt_exec_callback_QColorDialog_connectNotify(self *C.QColorDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QColorDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QColorDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QColorDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QColorDialog) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QColorDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorDialog_disconnectNotify
func miqt_exec_callback_QColorDialog_disconnectNotify(self *C.QColorDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QColorDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QColorDialog) Delete() {
	C.QColorDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColorDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QColorDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
