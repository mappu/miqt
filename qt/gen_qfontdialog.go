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
	h          *C.QFontDialog
	isSubclass bool
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
func newQFontDialog(h *C.QFontDialog, h_QDialog *C.QDialog, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QFontDialog {
	if h == nil {
		return nil
	}
	return &QFontDialog{h: h,
		QDialog: newQDialog(h_QDialog, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQFontDialog constructs the type using only unsafe pointers.
func UnsafeNewQFontDialog(h unsafe.Pointer, h_QDialog unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QFontDialog {
	if h == nil {
		return nil
	}

	return &QFontDialog{h: (*C.QFontDialog)(h),
		QDialog: UnsafeNewQDialog(h_QDialog, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQFontDialog constructs a new QFontDialog object.
func NewQFontDialog(parent *QWidget) *QFontDialog {
	var outptr_QFontDialog *C.QFontDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QFontDialog_new(parent.cPointer(), &outptr_QFontDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQFontDialog(outptr_QFontDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQFontDialog2 constructs a new QFontDialog object.
func NewQFontDialog2() *QFontDialog {
	var outptr_QFontDialog *C.QFontDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QFontDialog_new2(&outptr_QFontDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQFontDialog(outptr_QFontDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQFontDialog3 constructs a new QFontDialog object.
func NewQFontDialog3(initial *QFont) *QFontDialog {
	var outptr_QFontDialog *C.QFontDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QFontDialog_new3(initial.cPointer(), &outptr_QFontDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQFontDialog(outptr_QFontDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQFontDialog4 constructs a new QFontDialog object.
func NewQFontDialog4(initial *QFont, parent *QWidget) *QFontDialog {
	var outptr_QFontDialog *C.QFontDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QFontDialog_new4(initial.cPointer(), parent.cPointer(), &outptr_QFontDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQFontDialog(outptr_QFontDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontDialog_KeyPressEvent
func miqt_exec_callback_QFontDialog_KeyPressEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1, nil, nil)

	gofunc((&QFontDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QFontDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontDialog_CloseEvent
func miqt_exec_callback_QFontDialog_CloseEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1, nil)

	gofunc((&QFontDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QFontDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontDialog_ShowEvent
func miqt_exec_callback_QFontDialog_ShowEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1, nil)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QFontDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontDialog_ResizeEvent
func miqt_exec_callback_QFontDialog_ResizeEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1, nil)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QFontDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFontDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontDialog_ContextMenuEvent
func miqt_exec_callback_QFontDialog_ContextMenuEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1, nil, nil)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QFontDialog) Delete() {
	C.QFontDialog_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
