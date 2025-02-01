package qt6

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
	return newQMetaObject(C.QProgressDialog_metaObject(this.h))
}

func (this *QProgressDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QProgressDialog_metacast(this.h, param1_Cstring))
}

func QProgressDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressDialog) SetLabel(label *QLabel) {
	C.QProgressDialog_setLabel(this.h, label.cPointer())
}

func (this *QProgressDialog) SetCancelButton(button *QPushButton) {
	C.QProgressDialog_setCancelButton(this.h, button.cPointer())
}

func (this *QProgressDialog) SetBar(bar *QProgressBar) {
	C.QProgressDialog_setBar(this.h, bar.cPointer())
}

func (this *QProgressDialog) WasCanceled() bool {
	return (bool)(C.QProgressDialog_wasCanceled(this.h))
}

func (this *QProgressDialog) Minimum() int {
	return (int)(C.QProgressDialog_minimum(this.h))
}

func (this *QProgressDialog) Maximum() int {
	return (int)(C.QProgressDialog_maximum(this.h))
}

func (this *QProgressDialog) Value() int {
	return (int)(C.QProgressDialog_value(this.h))
}

func (this *QProgressDialog) SizeHint() *QSize {
	_goptr := newQSize(C.QProgressDialog_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProgressDialog) LabelText() string {
	var _ms C.struct_miqt_string = C.QProgressDialog_labelText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressDialog) MinimumDuration() int {
	return (int)(C.QProgressDialog_minimumDuration(this.h))
}

func (this *QProgressDialog) SetAutoReset(reset bool) {
	C.QProgressDialog_setAutoReset(this.h, (C.bool)(reset))
}

func (this *QProgressDialog) AutoReset() bool {
	return (bool)(C.QProgressDialog_autoReset(this.h))
}

func (this *QProgressDialog) SetAutoClose(close bool) {
	C.QProgressDialog_setAutoClose(this.h, (C.bool)(close))
}

func (this *QProgressDialog) AutoClose() bool {
	return (bool)(C.QProgressDialog_autoClose(this.h))
}

func (this *QProgressDialog) Cancel() {
	C.QProgressDialog_cancel(this.h)
}

func (this *QProgressDialog) Reset() {
	C.QProgressDialog_reset(this.h)
}

func (this *QProgressDialog) SetMaximum(maximum int) {
	C.QProgressDialog_setMaximum(this.h, (C.int)(maximum))
}

func (this *QProgressDialog) SetMinimum(minimum int) {
	C.QProgressDialog_setMinimum(this.h, (C.int)(minimum))
}

func (this *QProgressDialog) SetRange(minimum int, maximum int) {
	C.QProgressDialog_setRange(this.h, (C.int)(minimum), (C.int)(maximum))
}

func (this *QProgressDialog) SetValue(progress int) {
	C.QProgressDialog_setValue(this.h, (C.int)(progress))
}

func (this *QProgressDialog) SetLabelText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QProgressDialog_setLabelText(this.h, text_ms)
}

func (this *QProgressDialog) SetCancelButtonText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QProgressDialog_setCancelButtonText(this.h, text_ms)
}

func (this *QProgressDialog) SetMinimumDuration(ms int) {
	C.QProgressDialog_setMinimumDuration(this.h, (C.int)(ms))
}

func (this *QProgressDialog) Canceled() {
	C.QProgressDialog_canceled(this.h)
}
func (this *QProgressDialog) OnCanceled(slot func()) {
	C.QProgressDialog_connect_canceled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProgressDialog_canceled
func miqt_exec_callback_QProgressDialog_canceled(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QProgressDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProgressDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QProgressDialog_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QProgressDialog) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QProgressDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_sizeHint
func miqt_exec_callback_QProgressDialog_sizeHint(self *C.QProgressDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QProgressDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QProgressDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_resizeEvent
func miqt_exec_callback_QProgressDialog_resizeEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QProgressDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QProgressDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_closeEvent
func miqt_exec_callback_QProgressDialog_closeEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QProgressDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnchangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProgressDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_changeEvent
func miqt_exec_callback_QProgressDialog_changeEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QProgressDialog_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QProgressDialog_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_showEvent
func miqt_exec_callback_QProgressDialog_showEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_SetVisible(visible bool) {

	C.QProgressDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QProgressDialog) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QProgressDialog_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_setVisible
func miqt_exec_callback_QProgressDialog_setVisible(self *C.QProgressDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QProgressDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QProgressDialog) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QProgressDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_minimumSizeHint
func miqt_exec_callback_QProgressDialog_minimumSizeHint(self *C.QProgressDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_Open() {

	C.QProgressDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QProgressDialog) Onopen(slot func(super func())) {
	ok := C.QProgressDialog_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_open
func miqt_exec_callback_QProgressDialog_open(self *C.QProgressDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QProgressDialog{h: self}).callVirtualBase_Open)

}

func (this *QProgressDialog) callVirtualBase_Exec() int {

	return (int)(C.QProgressDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) Onexec(slot func(super func() int) int) {
	ok := C.QProgressDialog_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_exec
func miqt_exec_callback_QProgressDialog_exec(self *C.QProgressDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_Done(param1 int) {

	C.QProgressDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QProgressDialog) Ondone(slot func(super func(param1 int), param1 int)) {
	ok := C.QProgressDialog_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_done
func miqt_exec_callback_QProgressDialog_done(self *C.QProgressDialog, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QProgressDialog) callVirtualBase_Accept() {

	C.QProgressDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QProgressDialog) Onaccept(slot func(super func())) {
	ok := C.QProgressDialog_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_accept
func miqt_exec_callback_QProgressDialog_accept(self *C.QProgressDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QProgressDialog{h: self}).callVirtualBase_Accept)

}

func (this *QProgressDialog) callVirtualBase_Reject() {

	C.QProgressDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QProgressDialog) Onreject(slot func(super func())) {
	ok := C.QProgressDialog_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_reject
func miqt_exec_callback_QProgressDialog_reject(self *C.QProgressDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QProgressDialog{h: self}).callVirtualBase_Reject)

}

func (this *QProgressDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QProgressDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QProgressDialog) OnkeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QProgressDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_keyPressEvent
func miqt_exec_callback_QProgressDialog_keyPressEvent(self *C.QProgressDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QProgressDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QProgressDialog) OncontextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QProgressDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_contextMenuEvent
func miqt_exec_callback_QProgressDialog_contextMenuEvent(self *C.QProgressDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QProgressDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QProgressDialog) OneventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QProgressDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_eventFilter
func miqt_exec_callback_QProgressDialog_eventFilter(self *C.QProgressDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
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

	return (int)(C.QProgressDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) OndevType(slot func(super func() int) int) {
	ok := C.QProgressDialog_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_devType
func miqt_exec_callback_QProgressDialog_devType(self *C.QProgressDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QProgressDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QProgressDialog) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QProgressDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_heightForWidth
func miqt_exec_callback_QProgressDialog_heightForWidth(self *C.QProgressDialog, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QProgressDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QProgressDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_hasHeightForWidth
func miqt_exec_callback_QProgressDialog_hasHeightForWidth(self *C.QProgressDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QProgressDialog_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QProgressDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_paintEngine
func miqt_exec_callback_QProgressDialog_paintEngine(self *C.QProgressDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QProgressDialog_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QProgressDialog) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QProgressDialog_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_event
func miqt_exec_callback_QProgressDialog_event(self *C.QProgressDialog, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QProgressDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_mousePressEvent
func miqt_exec_callback_QProgressDialog_mousePressEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QProgressDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_mouseReleaseEvent
func miqt_exec_callback_QProgressDialog_mouseReleaseEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QProgressDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_mouseDoubleClickEvent
func miqt_exec_callback_QProgressDialog_mouseDoubleClickEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QProgressDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_mouseMoveEvent
func miqt_exec_callback_QProgressDialog_mouseMoveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QProgressDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QProgressDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_wheelEvent
func miqt_exec_callback_QProgressDialog_wheelEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QProgressDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QProgressDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_keyReleaseEvent
func miqt_exec_callback_QProgressDialog_keyReleaseEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QProgressDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QProgressDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_focusInEvent
func miqt_exec_callback_QProgressDialog_focusInEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QProgressDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QProgressDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_focusOutEvent
func miqt_exec_callback_QProgressDialog_focusOutEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QProgressDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QProgressDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_enterEvent
func miqt_exec_callback_QProgressDialog_enterEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QProgressDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProgressDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_leaveEvent
func miqt_exec_callback_QProgressDialog_leaveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QProgressDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QProgressDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_paintEvent
func miqt_exec_callback_QProgressDialog_paintEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QProgressDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QProgressDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_moveEvent
func miqt_exec_callback_QProgressDialog_moveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QProgressDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QProgressDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_tabletEvent
func miqt_exec_callback_QProgressDialog_tabletEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QProgressDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QProgressDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_actionEvent
func miqt_exec_callback_QProgressDialog_actionEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QProgressDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QProgressDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_dragEnterEvent
func miqt_exec_callback_QProgressDialog_dragEnterEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QProgressDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QProgressDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_dragMoveEvent
func miqt_exec_callback_QProgressDialog_dragMoveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QProgressDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QProgressDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_dragLeaveEvent
func miqt_exec_callback_QProgressDialog_dragLeaveEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QProgressDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QProgressDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_dropEvent
func miqt_exec_callback_QProgressDialog_dropEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QProgressDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QProgressDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_hideEvent
func miqt_exec_callback_QProgressDialog_hideEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QProgressDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QProgressDialog) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QProgressDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_nativeEvent
func miqt_exec_callback_QProgressDialog_nativeEvent(self *C.QProgressDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QProgressDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QProgressDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QProgressDialog) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QProgressDialog_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_metric
func miqt_exec_callback_QProgressDialog_metric(self *C.QProgressDialog, cb C.intptr_t, param1 C.int) C.int {
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

	C.QProgressDialog_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QProgressDialog) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QProgressDialog_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_initPainter
func miqt_exec_callback_QProgressDialog_initPainter(self *C.QProgressDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QProgressDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QProgressDialog_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QProgressDialog) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QProgressDialog_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_redirected
func miqt_exec_callback_QProgressDialog_redirected(self *C.QProgressDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QProgressDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QProgressDialog) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QProgressDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_sharedPainter
func miqt_exec_callback_QProgressDialog_sharedPainter(self *C.QProgressDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QProgressDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QProgressDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QProgressDialog) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QProgressDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_inputMethodEvent
func miqt_exec_callback_QProgressDialog_inputMethodEvent(self *C.QProgressDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QProgressDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QProgressDialog) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QProgressDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_inputMethodQuery
func miqt_exec_callback_QProgressDialog_inputMethodQuery(self *C.QProgressDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QProgressDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QProgressDialog) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QProgressDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_focusNextPrevChild
func miqt_exec_callback_QProgressDialog_focusNextPrevChild(self *C.QProgressDialog, cb C.intptr_t, next C.bool) C.bool {
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

	C.QProgressDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QProgressDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_timerEvent
func miqt_exec_callback_QProgressDialog_timerEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QProgressDialog_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QProgressDialog_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_childEvent
func miqt_exec_callback_QProgressDialog_childEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QProgressDialog_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressDialog) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProgressDialog_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_customEvent
func miqt_exec_callback_QProgressDialog_customEvent(self *C.QProgressDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QProgressDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QProgressDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QProgressDialog) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QProgressDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_connectNotify
func miqt_exec_callback_QProgressDialog_connectNotify(self *C.QProgressDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QProgressDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QProgressDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QProgressDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QProgressDialog) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QProgressDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressDialog_disconnectNotify
func miqt_exec_callback_QProgressDialog_disconnectNotify(self *C.QProgressDialog, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QProgressDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProgressDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QProgressDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
