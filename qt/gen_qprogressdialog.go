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

func (this *QProgressDialog) callVirtualBase_DevType() int {

	return (int)(C.QProgressDialog_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QProgressDialog_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_DevType
func miqt_exec_callback_QProgressDialog_DevType(self *C.QProgressDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QProgressDialog_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QProgressDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QProgressDialog_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_HeightForWidth
func miqt_exec_callback_QProgressDialog_HeightForWidth(self *C.QProgressDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QProgressDialog_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QProgressDialog_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_HasHeightForWidth
func miqt_exec_callback_QProgressDialog_HasHeightForWidth(self *C.QProgressDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QProgressDialog_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QProgressDialog_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_PaintEngine
func miqt_exec_callback_QProgressDialog_PaintEngine(self *C.QProgressDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QProgressDialog_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QProgressDialog) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QProgressDialog_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_Event
func miqt_exec_callback_QProgressDialog_Event(self *C.QProgressDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QProgressDialog_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressDialog_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_MousePressEvent
func miqt_exec_callback_QProgressDialog_MousePressEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QProgressDialog_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressDialog_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_MouseReleaseEvent
func miqt_exec_callback_QProgressDialog_MouseReleaseEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QProgressDialog_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressDialog_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_MouseDoubleClickEvent
func miqt_exec_callback_QProgressDialog_MouseDoubleClickEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QProgressDialog_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressDialog_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_MouseMoveEvent
func miqt_exec_callback_QProgressDialog_MouseMoveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QProgressDialog_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QProgressDialog_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_WheelEvent
func miqt_exec_callback_QProgressDialog_WheelEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QProgressDialog_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QProgressDialog_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_KeyReleaseEvent
func miqt_exec_callback_QProgressDialog_KeyReleaseEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QProgressDialog_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QProgressDialog_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_FocusInEvent
func miqt_exec_callback_QProgressDialog_FocusInEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QProgressDialog_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QProgressDialog_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_FocusOutEvent
func miqt_exec_callback_QProgressDialog_FocusOutEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_EnterEvent(event *QEvent) {

	C.QProgressDialog_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProgressDialog_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_EnterEvent
func miqt_exec_callback_QProgressDialog_EnterEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QProgressDialog_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProgressDialog_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_LeaveEvent
func miqt_exec_callback_QProgressDialog_LeaveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QProgressDialog_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QProgressDialog_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_PaintEvent
func miqt_exec_callback_QProgressDialog_PaintEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QProgressDialog_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QProgressDialog_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_MoveEvent
func miqt_exec_callback_QProgressDialog_MoveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QProgressDialog_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QProgressDialog_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_TabletEvent
func miqt_exec_callback_QProgressDialog_TabletEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QProgressDialog_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QProgressDialog_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_ActionEvent
func miqt_exec_callback_QProgressDialog_ActionEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QProgressDialog_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QProgressDialog_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_DragEnterEvent
func miqt_exec_callback_QProgressDialog_DragEnterEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QProgressDialog_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QProgressDialog_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_DragMoveEvent
func miqt_exec_callback_QProgressDialog_DragMoveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QProgressDialog_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QProgressDialog_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_DragLeaveEvent
func miqt_exec_callback_QProgressDialog_DragLeaveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QProgressDialog_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QProgressDialog_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_DropEvent
func miqt_exec_callback_QProgressDialog_DropEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QProgressDialog_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QProgressDialog_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_HideEvent
func miqt_exec_callback_QProgressDialog_HideEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QProgressDialog_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QProgressDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QProgressDialog_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_NativeEvent
func miqt_exec_callback_QProgressDialog_NativeEvent(self *C.QProgressDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QProgressDialog_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QProgressDialog) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QProgressDialog_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_Metric
func miqt_exec_callback_QProgressDialog_Metric(self *C.QProgressDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_InitPainter(painter *QPainter) {

	C.QProgressDialog_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QProgressDialog) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QProgressDialog_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_InitPainter
func miqt_exec_callback_QProgressDialog_InitPainter(self *C.QProgressDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QProgressDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QProgressDialog_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QProgressDialog) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QProgressDialog_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_Redirected
func miqt_exec_callback_QProgressDialog_Redirected(self *C.QProgressDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QProgressDialog_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QProgressDialog_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_SharedPainter
func miqt_exec_callback_QProgressDialog_SharedPainter(self *C.QProgressDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QProgressDialog_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QProgressDialog) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QProgressDialog_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_InputMethodEvent
func miqt_exec_callback_QProgressDialog_InputMethodEvent(self *C.QProgressDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QProgressDialog_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QProgressDialog) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QProgressDialog_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_InputMethodQuery
func miqt_exec_callback_QProgressDialog_InputMethodQuery(self *C.QProgressDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QProgressDialog_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QProgressDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QProgressDialog_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_FocusNextPrevChild
func miqt_exec_callback_QProgressDialog_FocusNextPrevChild(self *C.QProgressDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QProgressDialog_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QProgressDialog_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_TimerEvent
func miqt_exec_callback_QProgressDialog_TimerEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QProgressDialog_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QProgressDialog_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_ChildEvent
func miqt_exec_callback_QProgressDialog_ChildEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QProgressDialog_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProgressDialog_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_CustomEvent
func miqt_exec_callback_QProgressDialog_CustomEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QProgressDialog_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QProgressDialog) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QProgressDialog_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_ConnectNotify
func miqt_exec_callback_QProgressDialog_ConnectNotify(self *C.QProgressDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QProgressDialog_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QProgressDialog) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QProgressDialog_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_DisconnectNotify
func miqt_exec_callback_QProgressDialog_DisconnectNotify(self *C.QProgressDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
