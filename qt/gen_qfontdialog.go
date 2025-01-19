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
	QFontDialog__NoButtons           QFontDialog__FontDialogOption = 1
	QFontDialog__DontUseNativeDialog QFontDialog__FontDialogOption = 2
	QFontDialog__ScalableFonts       QFontDialog__FontDialogOption = 4
	QFontDialog__NonScalableFonts    QFontDialog__FontDialogOption = 8
	QFontDialog__MonospacedFonts     QFontDialog__FontDialogOption = 16
	QFontDialog__ProportionalFonts   QFontDialog__FontDialogOption = 32
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

func (this *QFontDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFontDialog constructs the type using only CGO pointers.
func newQFontDialog(h *C.QFontDialog) *QFontDialog {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QFontDialog_virtbase(h, &outptr_QDialog)

	return &QFontDialog{h: h,
		QDialog: newQDialog(outptr_QDialog)}
}

// UnsafeNewQFontDialog constructs the type using only unsafe pointers.
func UnsafeNewQFontDialog(h unsafe.Pointer) *QFontDialog {
	return newQFontDialog((*C.QFontDialog)(h))
}

// NewQFontDialog constructs a new QFontDialog object.
func NewQFontDialog(parent *QWidget) *QFontDialog {

	return newQFontDialog(C.QFontDialog_new(parent.cPointer()))
}

// NewQFontDialog2 constructs a new QFontDialog object.
func NewQFontDialog2() *QFontDialog {

	return newQFontDialog(C.QFontDialog_new2())
}

// NewQFontDialog3 constructs a new QFontDialog object.
func NewQFontDialog3(initial *QFont) *QFontDialog {

	return newQFontDialog(C.QFontDialog_new3(initial.cPointer()))
}

// NewQFontDialog4 constructs a new QFontDialog object.
func NewQFontDialog4(initial *QFont, parent *QWidget) *QFontDialog {

	return newQFontDialog(C.QFontDialog_new4(initial.cPointer(), parent.cPointer()))
}

func (this *QFontDialog) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFontDialog_MetaObject(this.h))
}

func (this *QFontDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFontDialog_Metacast(this.h, param1_Cstring))
}

func QFontDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFontDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFontDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontDialog) SetCurrentFont(font *QFont) {
	C.QFontDialog_SetCurrentFont(this.h, font.cPointer())
}

func (this *QFontDialog) CurrentFont() *QFont {
	_goptr := newQFont(C.QFontDialog_CurrentFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) SelectedFont() *QFont {
	_goptr := newQFont(C.QFontDialog_SelectedFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) SetOption(option QFontDialog__FontDialogOption) {
	C.QFontDialog_SetOption(this.h, (C.int)(option))
}

func (this *QFontDialog) TestOption(option QFontDialog__FontDialogOption) bool {
	return (bool)(C.QFontDialog_TestOption(this.h, (C.int)(option)))
}

func (this *QFontDialog) SetOptions(options QFontDialog__FontDialogOption) {
	C.QFontDialog_SetOptions(this.h, (C.int)(options))
}

func (this *QFontDialog) Options() QFontDialog__FontDialogOption {
	return (QFontDialog__FontDialogOption)(C.QFontDialog_Options(this.h))
}

func (this *QFontDialog) SetVisible(visible bool) {
	C.QFontDialog_SetVisible(this.h, (C.bool)(visible))
}

func QFontDialog_GetFont(ok *bool) *QFont {
	_goptr := newQFont(C.QFontDialog_GetFont((*C.bool)(unsafe.Pointer(ok))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont2(ok *bool, initial *QFont) *QFont {
	_goptr := newQFont(C.QFontDialog_GetFont2((*C.bool)(unsafe.Pointer(ok)), initial.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) CurrentFontChanged(font *QFont) {
	C.QFontDialog_CurrentFontChanged(this.h, font.cPointer())
}
func (this *QFontDialog) OnCurrentFontChanged(slot func(font *QFont)) {
	C.QFontDialog_connect_CurrentFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontDialog_CurrentFontChanged
func miqt_exec_callback_QFontDialog_CurrentFontChanged(cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFont(font)

	gofunc(slotval1)
}

func (this *QFontDialog) FontSelected(font *QFont) {
	C.QFontDialog_FontSelected(this.h, font.cPointer())
}
func (this *QFontDialog) OnFontSelected(slot func(font *QFont)) {
	C.QFontDialog_connect_FontSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontDialog_FontSelected
func miqt_exec_callback_QFontDialog_FontSelected(cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFont(font)

	gofunc(slotval1)
}

func QFontDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontDialog) SetOption2(option QFontDialog__FontDialogOption, on bool) {
	C.QFontDialog_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

func QFontDialog_GetFont22(ok *bool, parent *QWidget) *QFont {
	_goptr := newQFont(C.QFontDialog_GetFont22((*C.bool)(unsafe.Pointer(ok)), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont3(ok *bool, initial *QFont, parent *QWidget) *QFont {
	_goptr := newQFont(C.QFontDialog_GetFont3((*C.bool)(unsafe.Pointer(ok)), initial.cPointer(), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont4(ok *bool, initial *QFont, parent *QWidget, title string) *QFont {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	_goptr := newQFont(C.QFontDialog_GetFont4((*C.bool)(unsafe.Pointer(ok)), initial.cPointer(), parent.cPointer(), title_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont5(ok *bool, initial *QFont, parent *QWidget, title string, options QFontDialog__FontDialogOption) *QFont {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	_goptr := newQFont(C.QFontDialog_GetFont5((*C.bool)(unsafe.Pointer(ok)), initial.cPointer(), parent.cPointer(), title_ms, (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) callVirtualBase_SetVisible(visible bool) {

	C.QFontDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QFontDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QFontDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_SetVisible
func miqt_exec_callback_QFontDialog_SetVisible(self *C.QFontDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QFontDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QFontDialog) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QFontDialog_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontDialog_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_ChangeEvent
func miqt_exec_callback_QFontDialog_ChangeEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_Done(result int) {

	C.QFontDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QFontDialog) OnDone(slot func(super func(result int), result int)) {
	ok := C.QFontDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_Done
func miqt_exec_callback_QFontDialog_Done(self *C.QFontDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QFontDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QFontDialog) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QFontDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QFontDialog) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QFontDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_EventFilter
func miqt_exec_callback_QFontDialog_EventFilter(self *C.QFontDialog, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QFontDialog_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontDialog) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFontDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_SizeHint
func miqt_exec_callback_QFontDialog_SizeHint(self *C.QFontDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QFontDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontDialog) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFontDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_MinimumSizeHint
func miqt_exec_callback_QFontDialog_MinimumSizeHint(self *C.QFontDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_Open() {

	C.QFontDialog_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QFontDialog) OnOpen(slot func(super func())) {
	ok := C.QFontDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_Open
func miqt_exec_callback_QFontDialog_Open(self *C.QFontDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontDialog{h: self}).callVirtualBase_Open)

}

func (this *QFontDialog) callVirtualBase_Exec() int {

	return (int)(C.QFontDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnExec(slot func(super func() int) int) {
	ok := C.QFontDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_Exec
func miqt_exec_callback_QFontDialog_Exec(self *C.QFontDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_Accept() {

	C.QFontDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QFontDialog) OnAccept(slot func(super func())) {
	ok := C.QFontDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_Accept
func miqt_exec_callback_QFontDialog_Accept(self *C.QFontDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontDialog{h: self}).callVirtualBase_Accept)

}

func (this *QFontDialog) callVirtualBase_Reject() {

	C.QFontDialog_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QFontDialog) OnReject(slot func(super func())) {
	ok := C.QFontDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_Reject
func miqt_exec_callback_QFontDialog_Reject(self *C.QFontDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontDialog{h: self}).callVirtualBase_Reject)

}

func (this *QFontDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QFontDialog_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QFontDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_KeyPressEvent
func miqt_exec_callback_QFontDialog_KeyPressEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QFontDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QFontDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_CloseEvent
func miqt_exec_callback_QFontDialog_CloseEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QFontDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QFontDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_ShowEvent
func miqt_exec_callback_QFontDialog_ShowEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QFontDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QFontDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_ResizeEvent
func miqt_exec_callback_QFontDialog_ResizeEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QFontDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QFontDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_ContextMenuEvent
func miqt_exec_callback_QFontDialog_ContextMenuEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DevType() int {

	return (int)(C.QFontDialog_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QFontDialog_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_DevType
func miqt_exec_callback_QFontDialog_DevType(self *C.QFontDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QFontDialog_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFontDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QFontDialog_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_HeightForWidth
func miqt_exec_callback_QFontDialog_HeightForWidth(self *C.QFontDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QFontDialog_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QFontDialog_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_HasHeightForWidth
func miqt_exec_callback_QFontDialog_HasHeightForWidth(self *C.QFontDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QFontDialog_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QFontDialog_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_PaintEngine
func miqt_exec_callback_QFontDialog_PaintEngine(self *C.QFontDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QFontDialog_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFontDialog) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QFontDialog_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_Event
func miqt_exec_callback_QFontDialog_Event(self *C.QFontDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QFontDialog_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontDialog_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_MousePressEvent
func miqt_exec_callback_QFontDialog_MousePressEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QFontDialog_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontDialog_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_MouseReleaseEvent
func miqt_exec_callback_QFontDialog_MouseReleaseEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QFontDialog_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontDialog_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_MouseDoubleClickEvent
func miqt_exec_callback_QFontDialog_MouseDoubleClickEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QFontDialog_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontDialog_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_MouseMoveEvent
func miqt_exec_callback_QFontDialog_MouseMoveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QFontDialog_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QFontDialog_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_WheelEvent
func miqt_exec_callback_QFontDialog_WheelEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QFontDialog_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QFontDialog_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_KeyReleaseEvent
func miqt_exec_callback_QFontDialog_KeyReleaseEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QFontDialog_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFontDialog_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_FocusInEvent
func miqt_exec_callback_QFontDialog_FocusInEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QFontDialog_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFontDialog_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_FocusOutEvent
func miqt_exec_callback_QFontDialog_FocusOutEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_EnterEvent(event *QEvent) {

	C.QFontDialog_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontDialog_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_EnterEvent
func miqt_exec_callback_QFontDialog_EnterEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QFontDialog_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontDialog_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_LeaveEvent
func miqt_exec_callback_QFontDialog_LeaveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QFontDialog_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QFontDialog_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_PaintEvent
func miqt_exec_callback_QFontDialog_PaintEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QFontDialog_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QFontDialog_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_MoveEvent
func miqt_exec_callback_QFontDialog_MoveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QFontDialog_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QFontDialog_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_TabletEvent
func miqt_exec_callback_QFontDialog_TabletEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QFontDialog_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QFontDialog_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_ActionEvent
func miqt_exec_callback_QFontDialog_ActionEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QFontDialog_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QFontDialog_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_DragEnterEvent
func miqt_exec_callback_QFontDialog_DragEnterEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QFontDialog_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QFontDialog_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_DragMoveEvent
func miqt_exec_callback_QFontDialog_DragMoveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QFontDialog_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QFontDialog_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_DragLeaveEvent
func miqt_exec_callback_QFontDialog_DragLeaveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QFontDialog_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QFontDialog_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_DropEvent
func miqt_exec_callback_QFontDialog_DropEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QFontDialog_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QFontDialog_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_HideEvent
func miqt_exec_callback_QFontDialog_HideEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QFontDialog_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QFontDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QFontDialog_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_NativeEvent
func miqt_exec_callback_QFontDialog_NativeEvent(self *C.QFontDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QFontDialog_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFontDialog) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QFontDialog_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_Metric
func miqt_exec_callback_QFontDialog_Metric(self *C.QFontDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_InitPainter(painter *QPainter) {

	C.QFontDialog_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QFontDialog) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QFontDialog_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_InitPainter
func miqt_exec_callback_QFontDialog_InitPainter(self *C.QFontDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QFontDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QFontDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QFontDialog_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QFontDialog) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QFontDialog_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_Redirected
func miqt_exec_callback_QFontDialog_Redirected(self *C.QFontDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QFontDialog_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QFontDialog_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_SharedPainter
func miqt_exec_callback_QFontDialog_SharedPainter(self *C.QFontDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QFontDialog_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QFontDialog_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_InputMethodEvent
func miqt_exec_callback_QFontDialog_InputMethodEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QFontDialog_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontDialog) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QFontDialog_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_InputMethodQuery
func miqt_exec_callback_QFontDialog_InputMethodQuery(self *C.QFontDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QFontDialog_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QFontDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QFontDialog_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_FocusNextPrevChild
func miqt_exec_callback_QFontDialog_FocusNextPrevChild(self *C.QFontDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFontDialog_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFontDialog_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_TimerEvent
func miqt_exec_callback_QFontDialog_TimerEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFontDialog_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFontDialog_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_ChildEvent
func miqt_exec_callback_QFontDialog_ChildEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFontDialog_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontDialog_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_CustomEvent
func miqt_exec_callback_QFontDialog_CustomEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFontDialog_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFontDialog) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFontDialog_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_ConnectNotify
func miqt_exec_callback_QFontDialog_ConnectNotify(self *C.QFontDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFontDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFontDialog_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFontDialog) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFontDialog_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_DisconnectNotify
func miqt_exec_callback_QFontDialog_DisconnectNotify(self *C.QFontDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFontDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
