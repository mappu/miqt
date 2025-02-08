package qt6

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
	return newQMetaObject(C.QFontDialog_metaObject(this.h))
}

func (this *QFontDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFontDialog_metacast(this.h, param1_Cstring))
}

func QFontDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFontDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontDialog) SetCurrentFont(font *QFont) {
	C.QFontDialog_setCurrentFont(this.h, font.cPointer())
}

func (this *QFontDialog) CurrentFont() *QFont {
	_goptr := newQFont(C.QFontDialog_currentFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) SelectedFont() *QFont {
	_goptr := newQFont(C.QFontDialog_selectedFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) SetOption(option QFontDialog__FontDialogOption) {
	C.QFontDialog_setOption(this.h, (C.int)(option))
}

func (this *QFontDialog) TestOption(option QFontDialog__FontDialogOption) bool {
	return (bool)(C.QFontDialog_testOption(this.h, (C.int)(option)))
}

func (this *QFontDialog) SetOptions(options QFontDialog__FontDialogOption) {
	C.QFontDialog_setOptions(this.h, (C.int)(options))
}

func (this *QFontDialog) Options() QFontDialog__FontDialogOption {
	return (QFontDialog__FontDialogOption)(C.QFontDialog_options(this.h))
}

func (this *QFontDialog) SetVisible(visible bool) {
	C.QFontDialog_setVisible(this.h, (C.bool)(visible))
}

func QFontDialog_GetFont(ok *bool) *QFont {
	_goptr := newQFont(C.QFontDialog_getFont((*C.bool)(unsafe.Pointer(ok))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont2(ok *bool, initial *QFont) *QFont {
	_goptr := newQFont(C.QFontDialog_getFont2((*C.bool)(unsafe.Pointer(ok)), initial.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontDialog) CurrentFontChanged(font *QFont) {
	C.QFontDialog_currentFontChanged(this.h, font.cPointer())
}
func (this *QFontDialog) OnCurrentFontChanged(slot func(font *QFont)) {
	C.QFontDialog_connect_currentFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontDialog_currentFontChanged
func miqt_exec_callback_QFontDialog_currentFontChanged(cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFont(font)

	gofunc(slotval1)
}

func (this *QFontDialog) FontSelected(font *QFont) {
	C.QFontDialog_fontSelected(this.h, font.cPointer())
}
func (this *QFontDialog) OnFontSelected(slot func(font *QFont)) {
	C.QFontDialog_connect_fontSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontDialog_fontSelected
func miqt_exec_callback_QFontDialog_fontSelected(cb C.intptr_t, font *C.QFont) {
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
	var _ms C.struct_miqt_string = C.QFontDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontDialog) SetOption2(option QFontDialog__FontDialogOption, on bool) {
	C.QFontDialog_setOption2(this.h, (C.int)(option), (C.bool)(on))
}

func QFontDialog_GetFont22(ok *bool, parent *QWidget) *QFont {
	_goptr := newQFont(C.QFontDialog_getFont22((*C.bool)(unsafe.Pointer(ok)), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont3(ok *bool, initial *QFont, parent *QWidget) *QFont {
	_goptr := newQFont(C.QFontDialog_getFont3((*C.bool)(unsafe.Pointer(ok)), initial.cPointer(), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont4(ok *bool, initial *QFont, parent *QWidget, title string) *QFont {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	_goptr := newQFont(C.QFontDialog_getFont4((*C.bool)(unsafe.Pointer(ok)), initial.cPointer(), parent.cPointer(), title_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDialog_GetFont5(ok *bool, initial *QFont, parent *QWidget, title string, options QFontDialog__FontDialogOption) *QFont {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	_goptr := newQFont(C.QFontDialog_getFont5((*C.bool)(unsafe.Pointer(ok)), initial.cPointer(), parent.cPointer(), title_ms, (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// AdjustPosition can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) AdjustPosition(param1 *QWidget) {

	var _dynamic_cast_ok C.bool = false
	C.QFontDialog_protectedbase_adjustPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QFontDialog_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QFontDialog_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QFontDialog_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFontDialog_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFontDialog_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QFontDialog_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFontDialog_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFontDialog_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QFontDialog that was directly constructed.
func (this *QFontDialog) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFontDialog_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QFontDialog) callVirtualBase_SetVisible(visible bool) {

	C.QFontDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QFontDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QFontDialog_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_setVisible
func miqt_exec_callback_QFontDialog_setVisible(self *C.QFontDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QFontDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QFontDialog) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QFontDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_changeEvent
func miqt_exec_callback_QFontDialog_changeEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_Done(result int) {

	C.QFontDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QFontDialog) OnDone(slot func(super func(result int), result int)) {
	ok := C.QFontDialog_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_done
func miqt_exec_callback_QFontDialog_done(self *C.QFontDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QFontDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QFontDialog) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QFontDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QFontDialog) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QFontDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_eventFilter
func miqt_exec_callback_QFontDialog_eventFilter(self *C.QFontDialog, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
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

	_goptr := newQSize(C.QFontDialog_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontDialog) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFontDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_sizeHint
func miqt_exec_callback_QFontDialog_sizeHint(self *C.QFontDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QFontDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontDialog) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFontDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_minimumSizeHint
func miqt_exec_callback_QFontDialog_minimumSizeHint(self *C.QFontDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_Open() {

	C.QFontDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QFontDialog) OnOpen(slot func(super func())) {
	ok := C.QFontDialog_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_open
func miqt_exec_callback_QFontDialog_open(self *C.QFontDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontDialog{h: self}).callVirtualBase_Open)

}

func (this *QFontDialog) callVirtualBase_Exec() int {

	return (int)(C.QFontDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnExec(slot func(super func() int) int) {
	ok := C.QFontDialog_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_exec
func miqt_exec_callback_QFontDialog_exec(self *C.QFontDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_Accept() {

	C.QFontDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QFontDialog) OnAccept(slot func(super func())) {
	ok := C.QFontDialog_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_accept
func miqt_exec_callback_QFontDialog_accept(self *C.QFontDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontDialog{h: self}).callVirtualBase_Accept)

}

func (this *QFontDialog) callVirtualBase_Reject() {

	C.QFontDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QFontDialog) OnReject(slot func(super func())) {
	ok := C.QFontDialog_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_reject
func miqt_exec_callback_QFontDialog_reject(self *C.QFontDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontDialog{h: self}).callVirtualBase_Reject)

}

func (this *QFontDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QFontDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QFontDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_keyPressEvent
func miqt_exec_callback_QFontDialog_keyPressEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QFontDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QFontDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_closeEvent
func miqt_exec_callback_QFontDialog_closeEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QFontDialog_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QFontDialog_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_showEvent
func miqt_exec_callback_QFontDialog_showEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QFontDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QFontDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_resizeEvent
func miqt_exec_callback_QFontDialog_resizeEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QFontDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QFontDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_contextMenuEvent
func miqt_exec_callback_QFontDialog_contextMenuEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DevType() int {

	return (int)(C.QFontDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QFontDialog_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_devType
func miqt_exec_callback_QFontDialog_devType(self *C.QFontDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QFontDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFontDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QFontDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_heightForWidth
func miqt_exec_callback_QFontDialog_heightForWidth(self *C.QFontDialog, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QFontDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QFontDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_hasHeightForWidth
func miqt_exec_callback_QFontDialog_hasHeightForWidth(self *C.QFontDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QFontDialog_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QFontDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_paintEngine
func miqt_exec_callback_QFontDialog_paintEngine(self *C.QFontDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QFontDialog_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFontDialog) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QFontDialog_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_event
func miqt_exec_callback_QFontDialog_event(self *C.QFontDialog, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QFontDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_mousePressEvent
func miqt_exec_callback_QFontDialog_mousePressEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QFontDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_mouseReleaseEvent
func miqt_exec_callback_QFontDialog_mouseReleaseEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QFontDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_mouseDoubleClickEvent
func miqt_exec_callback_QFontDialog_mouseDoubleClickEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QFontDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_mouseMoveEvent
func miqt_exec_callback_QFontDialog_mouseMoveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QFontDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QFontDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_wheelEvent
func miqt_exec_callback_QFontDialog_wheelEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QFontDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QFontDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_keyReleaseEvent
func miqt_exec_callback_QFontDialog_keyReleaseEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QFontDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFontDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_focusInEvent
func miqt_exec_callback_QFontDialog_focusInEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QFontDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFontDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_focusOutEvent
func miqt_exec_callback_QFontDialog_focusOutEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QFontDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QFontDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_enterEvent
func miqt_exec_callback_QFontDialog_enterEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QFontDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_leaveEvent
func miqt_exec_callback_QFontDialog_leaveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QFontDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QFontDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_paintEvent
func miqt_exec_callback_QFontDialog_paintEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QFontDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QFontDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_moveEvent
func miqt_exec_callback_QFontDialog_moveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QFontDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QFontDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_tabletEvent
func miqt_exec_callback_QFontDialog_tabletEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QFontDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QFontDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_actionEvent
func miqt_exec_callback_QFontDialog_actionEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QFontDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QFontDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_dragEnterEvent
func miqt_exec_callback_QFontDialog_dragEnterEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QFontDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QFontDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_dragMoveEvent
func miqt_exec_callback_QFontDialog_dragMoveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QFontDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QFontDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_dragLeaveEvent
func miqt_exec_callback_QFontDialog_dragLeaveEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QFontDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QFontDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_dropEvent
func miqt_exec_callback_QFontDialog_dropEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QFontDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QFontDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_hideEvent
func miqt_exec_callback_QFontDialog_hideEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QFontDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QFontDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QFontDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_nativeEvent
func miqt_exec_callback_QFontDialog_nativeEvent(self *C.QFontDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QFontDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QFontDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFontDialog) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QFontDialog_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_metric
func miqt_exec_callback_QFontDialog_metric(self *C.QFontDialog, cb C.intptr_t, param1 C.int) C.int {
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

	C.QFontDialog_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QFontDialog) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QFontDialog_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_initPainter
func miqt_exec_callback_QFontDialog_initPainter(self *C.QFontDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QFontDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QFontDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QFontDialog_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QFontDialog) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QFontDialog_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_redirected
func miqt_exec_callback_QFontDialog_redirected(self *C.QFontDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QFontDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QFontDialog) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QFontDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_sharedPainter
func miqt_exec_callback_QFontDialog_sharedPainter(self *C.QFontDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QFontDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QFontDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontDialog) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QFontDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_inputMethodEvent
func miqt_exec_callback_QFontDialog_inputMethodEvent(self *C.QFontDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QFontDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QFontDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontDialog) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QFontDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_inputMethodQuery
func miqt_exec_callback_QFontDialog_inputMethodQuery(self *C.QFontDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QFontDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QFontDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QFontDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_focusNextPrevChild
func miqt_exec_callback_QFontDialog_focusNextPrevChild(self *C.QFontDialog, cb C.intptr_t, next C.bool) C.bool {
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

	C.QFontDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFontDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_timerEvent
func miqt_exec_callback_QFontDialog_timerEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFontDialog_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFontDialog_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_childEvent
func miqt_exec_callback_QFontDialog_childEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFontDialog_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontDialog) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontDialog_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_customEvent
func miqt_exec_callback_QFontDialog_customEvent(self *C.QFontDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFontDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFontDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFontDialog) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFontDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_connectNotify
func miqt_exec_callback_QFontDialog_connectNotify(self *C.QFontDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFontDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFontDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFontDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFontDialog) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFontDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontDialog_disconnectNotify
func miqt_exec_callback_QFontDialog_disconnectNotify(self *C.QFontDialog, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QFontDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
