package qt

/*

#include "gen_qprogressdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QProgressDialog struct {
	h *C.QProgressDialog
	*QDialog
}

func (this *QProgressDialog) cPointer() *C.QProgressDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QProgressDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQProgressDialog constructs the type using only CGO pointers.
func newQProgressDialog(h *C.QProgressDialog) *QProgressDialog {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QProgressDialog_virtbase(h, &outptr_QDialog)

	return &QProgressDialog{h: h,
		QDialog: newQDialog(outptr_QDialog)}
}

// UnsafeNewQProgressDialog constructs the type using only unsafe pointers.
func UnsafeNewQProgressDialog(h unsafe.Pointer) *QProgressDialog {
	return newQProgressDialog((*C.QProgressDialog)(h))
}

// NewQProgressDialog constructs a new QProgressDialog object.
func NewQProgressDialog(parent *QWidget) *QProgressDialog {

	return newQProgressDialog(C.QProgressDialog_new(parent.cPointer()))
}

// NewQProgressDialog2 constructs a new QProgressDialog object.
func NewQProgressDialog2() *QProgressDialog {

	return newQProgressDialog(C.QProgressDialog_new2())
}

// NewQProgressDialog3 constructs a new QProgressDialog object.
func NewQProgressDialog3(labelText string, cancelButtonText string, minimum int, maximum int) *QProgressDialog {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	cancelButtonText_ms := C.struct_miqt_string{}
	cancelButtonText_ms.data = C.CString(cancelButtonText)
	cancelButtonText_ms.len = C.size_t(len(cancelButtonText))
	defer C.free(unsafe.Pointer(cancelButtonText_ms.data))

	return newQProgressDialog(C.QProgressDialog_new3(labelText_ms, cancelButtonText_ms, (C.int)(minimum), (C.int)(maximum)))
}

// NewQProgressDialog4 constructs a new QProgressDialog object.
func NewQProgressDialog4(parent *QWidget, flags WindowType) *QProgressDialog {

	return newQProgressDialog(C.QProgressDialog_new4(parent.cPointer(), (C.int)(flags)))
}

// NewQProgressDialog5 constructs a new QProgressDialog object.
func NewQProgressDialog5(labelText string, cancelButtonText string, minimum int, maximum int, parent *QWidget) *QProgressDialog {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	cancelButtonText_ms := C.struct_miqt_string{}
	cancelButtonText_ms.data = C.CString(cancelButtonText)
	cancelButtonText_ms.len = C.size_t(len(cancelButtonText))
	defer C.free(unsafe.Pointer(cancelButtonText_ms.data))

	return newQProgressDialog(C.QProgressDialog_new5(labelText_ms, cancelButtonText_ms, (C.int)(minimum), (C.int)(maximum), parent.cPointer()))
}

// NewQProgressDialog6 constructs a new QProgressDialog object.
func NewQProgressDialog6(labelText string, cancelButtonText string, minimum int, maximum int, parent *QWidget, flags WindowType) *QProgressDialog {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	cancelButtonText_ms := C.struct_miqt_string{}
	cancelButtonText_ms.data = C.CString(cancelButtonText)
	cancelButtonText_ms.len = C.size_t(len(cancelButtonText))
	defer C.free(unsafe.Pointer(cancelButtonText_ms.data))

	return newQProgressDialog(C.QProgressDialog_new6(labelText_ms, cancelButtonText_ms, (C.int)(minimum), (C.int)(maximum), parent.cPointer(), (C.int)(flags)))
}

func (this *QProgressDialog) MetaObject() *QMetaObject {
	return newQMetaObject(C.QProgressDialog_MetaObject(this.h))
}

func (this *QProgressDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QProgressDialog_Metacast(this.h, param1_Cstring))
}

func QProgressDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProgressDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressDialog) SetLabel(label *QLabel) {
	C.QProgressDialog_SetLabel(this.h, label.cPointer())
}

func (this *QProgressDialog) SetCancelButton(button *QPushButton) {
	C.QProgressDialog_SetCancelButton(this.h, button.cPointer())
}

func (this *QProgressDialog) SetBar(bar *QProgressBar) {
	C.QProgressDialog_SetBar(this.h, bar.cPointer())
}

func (this *QProgressDialog) WasCanceled() bool {
	return (bool)(C.QProgressDialog_WasCanceled(this.h))
}

func (this *QProgressDialog) Minimum() int {
	return (int)(C.QProgressDialog_Minimum(this.h))
}

func (this *QProgressDialog) Maximum() int {
	return (int)(C.QProgressDialog_Maximum(this.h))
}

func (this *QProgressDialog) Value() int {
	return (int)(C.QProgressDialog_Value(this.h))
}

func (this *QProgressDialog) SizeHint() *QSize {
	_goptr := newQSize(C.QProgressDialog_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProgressDialog) LabelText() string {
	var _ms C.struct_miqt_string = C.QProgressDialog_LabelText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressDialog) MinimumDuration() int {
	return (int)(C.QProgressDialog_MinimumDuration(this.h))
}

func (this *QProgressDialog) SetAutoReset(reset bool) {
	C.QProgressDialog_SetAutoReset(this.h, (C.bool)(reset))
}

func (this *QProgressDialog) AutoReset() bool {
	return (bool)(C.QProgressDialog_AutoReset(this.h))
}

func (this *QProgressDialog) SetAutoClose(close bool) {
	C.QProgressDialog_SetAutoClose(this.h, (C.bool)(close))
}

func (this *QProgressDialog) AutoClose() bool {
	return (bool)(C.QProgressDialog_AutoClose(this.h))
}

func (this *QProgressDialog) Cancel() {
	C.QProgressDialog_Cancel(this.h)
}

func (this *QProgressDialog) Reset() {
	C.QProgressDialog_Reset(this.h)
}

func (this *QProgressDialog) SetMaximum(maximum int) {
	C.QProgressDialog_SetMaximum(this.h, (C.int)(maximum))
}

func (this *QProgressDialog) SetMinimum(minimum int) {
	C.QProgressDialog_SetMinimum(this.h, (C.int)(minimum))
}

func (this *QProgressDialog) SetRange(minimum int, maximum int) {
	C.QProgressDialog_SetRange(this.h, (C.int)(minimum), (C.int)(maximum))
}

func (this *QProgressDialog) SetValue(progress int) {
	C.QProgressDialog_SetValue(this.h, (C.int)(progress))
}

func (this *QProgressDialog) SetLabelText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QProgressDialog_SetLabelText(this.h, text_ms)
}

func (this *QProgressDialog) SetCancelButtonText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QProgressDialog_SetCancelButtonText(this.h, text_ms)
}

func (this *QProgressDialog) SetMinimumDuration(ms int) {
	C.QProgressDialog_SetMinimumDuration(this.h, (C.int)(ms))
}

func (this *QProgressDialog) Canceled() {
	C.QProgressDialog_Canceled(this.h)
}
func (this *QProgressDialog) OnCanceled(slot func()) {
	C.QProgressDialog_connect_Canceled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProgressDialog_Canceled
func miqt_exec_callback_QProgressDialog_Canceled(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QProgressDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProgressDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProgressDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProgressDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QProgressDialog_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QProgressDialog) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QProgressDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_SizeHint
func miqt_exec_callback_QProgressDialog_SizeHint(self *C.QProgressDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QProgressDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QProgressDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_ResizeEvent
func miqt_exec_callback_QProgressDialog_ResizeEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QProgressDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QProgressDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_CloseEvent
func miqt_exec_callback_QProgressDialog_CloseEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QProgressDialog_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProgressDialog_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_ChangeEvent
func miqt_exec_callback_QProgressDialog_ChangeEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QProgressDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QProgressDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_ShowEvent
func miqt_exec_callback_QProgressDialog_ShowEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_SetVisible(visible bool) {

	C.QProgressDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QProgressDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QProgressDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_SetVisible
func miqt_exec_callback_QProgressDialog_SetVisible(self *C.QProgressDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QProgressDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QProgressDialog) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QProgressDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_MinimumSizeHint
func miqt_exec_callback_QProgressDialog_MinimumSizeHint(self *C.QProgressDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_Open() {

	C.QProgressDialog_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QProgressDialog) OnOpen(slot func(super func())) {
	ok := C.QProgressDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_Open
func miqt_exec_callback_QProgressDialog_Open(self *C.QProgressDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QProgressDialog{h: self}).callVirtualBase_Open)

}

func (this *QProgressDialog) callVirtualBase_Exec() int {

	return (int)(C.QProgressDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) OnExec(slot func(super func() int) int) {
	ok := C.QProgressDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_Exec
func miqt_exec_callback_QProgressDialog_Exec(self *C.QProgressDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_Done(param1 int) {

	C.QProgressDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QProgressDialog) OnDone(slot func(super func(param1 int), param1 int)) {
	ok := C.QProgressDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_Done
func miqt_exec_callback_QProgressDialog_Done(self *C.QProgressDialog, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QProgressDialog) callVirtualBase_Accept() {

	C.QProgressDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QProgressDialog) OnAccept(slot func(super func())) {
	ok := C.QProgressDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_Accept
func miqt_exec_callback_QProgressDialog_Accept(self *C.QProgressDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QProgressDialog{h: self}).callVirtualBase_Accept)

}

func (this *QProgressDialog) callVirtualBase_Reject() {

	C.QProgressDialog_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QProgressDialog) OnReject(slot func(super func())) {
	ok := C.QProgressDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_Reject
func miqt_exec_callback_QProgressDialog_Reject(self *C.QProgressDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QProgressDialog{h: self}).callVirtualBase_Reject)

}

func (this *QProgressDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QProgressDialog_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QProgressDialog) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QProgressDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_KeyPressEvent
func miqt_exec_callback_QProgressDialog_KeyPressEvent(self *C.QProgressDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QProgressDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QProgressDialog) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QProgressDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_ContextMenuEvent
func miqt_exec_callback_QProgressDialog_ContextMenuEvent(self *C.QProgressDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QProgressDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QProgressDialog) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QProgressDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_EventFilter
func miqt_exec_callback_QProgressDialog_EventFilter(self *C.QProgressDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QProgressDialog) Delete() {
	C.QProgressDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProgressDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QProgressDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
