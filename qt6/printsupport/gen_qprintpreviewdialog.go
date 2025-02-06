package printsupport

/*

#include "gen_qprintpreviewdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPrintPreviewDialog struct {
	h *C.QPrintPreviewDialog
	*qt6.QDialog
}

func (this *QPrintPreviewDialog) cPointer() *C.QPrintPreviewDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPrintPreviewDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPrintPreviewDialog constructs the type using only CGO pointers.
func newQPrintPreviewDialog(h *C.QPrintPreviewDialog) *QPrintPreviewDialog {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QPrintPreviewDialog_virtbase(h, &outptr_QDialog)

	return &QPrintPreviewDialog{h: h,
		QDialog: qt6.UnsafeNewQDialog(unsafe.Pointer(outptr_QDialog))}
}

// UnsafeNewQPrintPreviewDialog constructs the type using only unsafe pointers.
func UnsafeNewQPrintPreviewDialog(h unsafe.Pointer) *QPrintPreviewDialog {
	return newQPrintPreviewDialog((*C.QPrintPreviewDialog)(h))
}

// NewQPrintPreviewDialog constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog(parent *qt6.QWidget) *QPrintPreviewDialog {

	return newQPrintPreviewDialog(C.QPrintPreviewDialog_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQPrintPreviewDialog2 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog2() *QPrintPreviewDialog {

	return newQPrintPreviewDialog(C.QPrintPreviewDialog_new2())
}

// NewQPrintPreviewDialog3 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog3(printer *QPrinter) *QPrintPreviewDialog {

	return newQPrintPreviewDialog(C.QPrintPreviewDialog_new3(printer.cPointer()))
}

// NewQPrintPreviewDialog4 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog4(parent *qt6.QWidget, flags qt6.WindowType) *QPrintPreviewDialog {

	return newQPrintPreviewDialog(C.QPrintPreviewDialog_new4((*C.QWidget)(parent.UnsafePointer()), (C.int)(flags)))
}

// NewQPrintPreviewDialog5 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog5(printer *QPrinter, parent *qt6.QWidget) *QPrintPreviewDialog {

	return newQPrintPreviewDialog(C.QPrintPreviewDialog_new5(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

// NewQPrintPreviewDialog6 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog6(printer *QPrinter, parent *qt6.QWidget, flags qt6.WindowType) *QPrintPreviewDialog {

	return newQPrintPreviewDialog(C.QPrintPreviewDialog_new6(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer()), (C.int)(flags)))
}

func (this *QPrintPreviewDialog) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPrintPreviewDialog_metaObject(this.h)))
}

func (this *QPrintPreviewDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPrintPreviewDialog_metacast(this.h, param1_Cstring))
}

func QPrintPreviewDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrintPreviewDialog) Printer() *QPrinter {
	return newQPrinter(C.QPrintPreviewDialog_printer(this.h))
}

func (this *QPrintPreviewDialog) SetVisible(visible bool) {
	C.QPrintPreviewDialog_setVisible(this.h, (C.bool)(visible))
}

func (this *QPrintPreviewDialog) Done(result int) {
	C.QPrintPreviewDialog_done(this.h, (C.int)(result))
}

func (this *QPrintPreviewDialog) PaintRequested(printer *QPrinter) {
	C.QPrintPreviewDialog_paintRequested(this.h, printer.cPointer())
}
func (this *QPrintPreviewDialog) OnPaintRequested(slot func(printer *QPrinter)) {
	C.QPrintPreviewDialog_connect_paintRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintPreviewDialog_paintRequested
func miqt_exec_callback_QPrintPreviewDialog_paintRequested(cb C.intptr_t, printer *C.QPrinter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(printer *QPrinter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPrinter(printer)

	gofunc(slotval1)
}

func QPrintPreviewDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPrintPreviewDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// AdjustPosition can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) AdjustPosition(param1 *qt6.QWidget) {

	var _dynamic_cast_ok C.bool = false
	C.QPrintPreviewDialog_protectedbase_adjustPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QWidget)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QPrintPreviewDialog_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QPrintPreviewDialog_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QPrintPreviewDialog_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPrintPreviewDialog_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPrintPreviewDialog_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPrintPreviewDialog_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPrintPreviewDialog_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPrintPreviewDialog_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPrintPreviewDialog that was directly constructed.
func (this *QPrintPreviewDialog) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPrintPreviewDialog_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPrintPreviewDialog) callVirtualBase_SetVisible(visible bool) {

	C.QPrintPreviewDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPrintPreviewDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QPrintPreviewDialog_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_setVisible
func miqt_exec_callback_QPrintPreviewDialog_setVisible(self *C.QPrintPreviewDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_Done(result int) {

	C.QPrintPreviewDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QPrintPreviewDialog) OnDone(slot func(super func(result int), result int)) {
	ok := C.QPrintPreviewDialog_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_done
func miqt_exec_callback_QPrintPreviewDialog_done(self *C.QPrintPreviewDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewDialog) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPrintPreviewDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_sizeHint
func miqt_exec_callback_QPrintPreviewDialog_sizeHint(self *C.QPrintPreviewDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewDialog) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPrintPreviewDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_minimumSizeHint
func miqt_exec_callback_QPrintPreviewDialog_minimumSizeHint(self *C.QPrintPreviewDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_Open() {

	C.QPrintPreviewDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QPrintPreviewDialog) OnOpen(slot func(super func())) {
	ok := C.QPrintPreviewDialog_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_open
func miqt_exec_callback_QPrintPreviewDialog_open(self *C.QPrintPreviewDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Open)

}

func (this *QPrintPreviewDialog) callVirtualBase_Exec() int {

	return (int)(C.QPrintPreviewDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewDialog) OnExec(slot func(super func() int) int) {
	ok := C.QPrintPreviewDialog_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_exec
func miqt_exec_callback_QPrintPreviewDialog_exec(self *C.QPrintPreviewDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_Accept() {

	C.QPrintPreviewDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QPrintPreviewDialog) OnAccept(slot func(super func())) {
	ok := C.QPrintPreviewDialog_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_accept
func miqt_exec_callback_QPrintPreviewDialog_accept(self *C.QPrintPreviewDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Accept)

}

func (this *QPrintPreviewDialog) callVirtualBase_Reject() {

	C.QPrintPreviewDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QPrintPreviewDialog) OnReject(slot func(super func())) {
	ok := C.QPrintPreviewDialog_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_reject
func miqt_exec_callback_QPrintPreviewDialog_reject(self *C.QPrintPreviewDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Reject)

}

func (this *QPrintPreviewDialog) callVirtualBase_KeyPressEvent(param1 *qt6.QKeyEvent) {

	C.QPrintPreviewDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnKeyPressEvent(slot func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_keyPressEvent
func miqt_exec_callback_QPrintPreviewDialog_keyPressEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_CloseEvent(param1 *qt6.QCloseEvent) {

	C.QPrintPreviewDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnCloseEvent(slot func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_closeEvent
func miqt_exec_callback_QPrintPreviewDialog_closeEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ShowEvent(param1 *qt6.QShowEvent) {

	C.QPrintPreviewDialog_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnShowEvent(slot func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_showEvent
func miqt_exec_callback_QPrintPreviewDialog_showEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ResizeEvent(param1 *qt6.QResizeEvent) {

	C.QPrintPreviewDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnResizeEvent(slot func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_resizeEvent
func miqt_exec_callback_QPrintPreviewDialog_resizeEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ContextMenuEvent(param1 *qt6.QContextMenuEvent) {

	C.QPrintPreviewDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnContextMenuEvent(slot func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_contextMenuEvent
func miqt_exec_callback_QPrintPreviewDialog_contextMenuEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_EventFilter(param1 *qt6.QObject, param2 *qt6.QEvent) bool {

	return (bool)(C.QPrintPreviewDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QPrintPreviewDialog) OnEventFilter(slot func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_eventFilter
func miqt_exec_callback_QPrintPreviewDialog_eventFilter(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_DevType() int {

	return (int)(C.QPrintPreviewDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QPrintPreviewDialog_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_devType
func miqt_exec_callback_QPrintPreviewDialog_devType(self *C.QPrintPreviewDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QPrintPreviewDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrintPreviewDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QPrintPreviewDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_heightForWidth
func miqt_exec_callback_QPrintPreviewDialog_heightForWidth(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QPrintPreviewDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_hasHeightForWidth
func miqt_exec_callback_QPrintPreviewDialog_hasHeightForWidth(self *C.QPrintPreviewDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QPrintPreviewDialog) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QPrintPreviewDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_paintEngine
func miqt_exec_callback_QPrintPreviewDialog_paintEngine(self *C.QPrintPreviewDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPrintPreviewDialog_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPrintPreviewDialog) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_event
func miqt_exec_callback_QPrintPreviewDialog_event(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_mousePressEvent
func miqt_exec_callback_QPrintPreviewDialog_mousePressEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_mouseReleaseEvent
func miqt_exec_callback_QPrintPreviewDialog_mouseReleaseEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_mouseDoubleClickEvent
func miqt_exec_callback_QPrintPreviewDialog_mouseDoubleClickEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_mouseMoveEvent
func miqt_exec_callback_QPrintPreviewDialog_mouseMoveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QPrintPreviewDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_wheelEvent
func miqt_exec_callback_QPrintPreviewDialog_wheelEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QPrintPreviewDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_keyReleaseEvent
func miqt_exec_callback_QPrintPreviewDialog_keyReleaseEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QPrintPreviewDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_focusInEvent
func miqt_exec_callback_QPrintPreviewDialog_focusInEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QPrintPreviewDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_focusOutEvent
func miqt_exec_callback_QPrintPreviewDialog_focusOutEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QPrintPreviewDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_enterEvent
func miqt_exec_callback_QPrintPreviewDialog_enterEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QPrintPreviewDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_leaveEvent
func miqt_exec_callback_QPrintPreviewDialog_leaveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QPrintPreviewDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_paintEvent
func miqt_exec_callback_QPrintPreviewDialog_paintEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QPrintPreviewDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_moveEvent
func miqt_exec_callback_QPrintPreviewDialog_moveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QPrintPreviewDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_tabletEvent
func miqt_exec_callback_QPrintPreviewDialog_tabletEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QPrintPreviewDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_actionEvent
func miqt_exec_callback_QPrintPreviewDialog_actionEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QPrintPreviewDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_dragEnterEvent
func miqt_exec_callback_QPrintPreviewDialog_dragEnterEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QPrintPreviewDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_dragMoveEvent
func miqt_exec_callback_QPrintPreviewDialog_dragMoveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QPrintPreviewDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_dragLeaveEvent
func miqt_exec_callback_QPrintPreviewDialog_dragLeaveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QPrintPreviewDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_dropEvent
func miqt_exec_callback_QPrintPreviewDialog_dropEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QPrintPreviewDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_hideEvent
func miqt_exec_callback_QPrintPreviewDialog_hideEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QPrintPreviewDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QPrintPreviewDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_nativeEvent
func miqt_exec_callback_QPrintPreviewDialog_nativeEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QPrintPreviewDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_changeEvent
func miqt_exec_callback_QPrintPreviewDialog_changeEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPrintPreviewDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrintPreviewDialog) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPrintPreviewDialog_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_metric
func miqt_exec_callback_QPrintPreviewDialog_metric(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QPrintPreviewDialog_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QPrintPreviewDialog_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_initPainter
func miqt_exec_callback_QPrintPreviewDialog_initPainter(self *C.QPrintPreviewDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QPrintPreviewDialog) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QPrintPreviewDialog_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_redirected
func miqt_exec_callback_QPrintPreviewDialog_redirected(self *C.QPrintPreviewDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QPrintPreviewDialog) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QPrintPreviewDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_sharedPainter
func miqt_exec_callback_QPrintPreviewDialog_sharedPainter(self *C.QPrintPreviewDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QPrintPreviewDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_inputMethodEvent
func miqt_exec_callback_QPrintPreviewDialog_inputMethodEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewDialog) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QPrintPreviewDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_inputMethodQuery
func miqt_exec_callback_QPrintPreviewDialog_inputMethodQuery(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QPrintPreviewDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPrintPreviewDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_focusNextPrevChild
func miqt_exec_callback_QPrintPreviewDialog_focusNextPrevChild(self *C.QPrintPreviewDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPrintPreviewDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_timerEvent
func miqt_exec_callback_QPrintPreviewDialog_timerEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPrintPreviewDialog_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_childEvent
func miqt_exec_callback_QPrintPreviewDialog_childEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPrintPreviewDialog_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_customEvent
func miqt_exec_callback_QPrintPreviewDialog_customEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPrintPreviewDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPrintPreviewDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_connectNotify
func miqt_exec_callback_QPrintPreviewDialog_connectNotify(self *C.QPrintPreviewDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPrintPreviewDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPrintPreviewDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_disconnectNotify
func miqt_exec_callback_QPrintPreviewDialog_disconnectNotify(self *C.QPrintPreviewDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPrintPreviewDialog) Delete() {
	C.QPrintPreviewDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrintPreviewDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrintPreviewDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
