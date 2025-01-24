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
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPrintPreviewDialog_MetaObject(this.h)))
}

func (this *QPrintPreviewDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPrintPreviewDialog_Metacast(this.h, param1_Cstring))
}

func QPrintPreviewDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrintPreviewDialog) Printer() *QPrinter {
	return newQPrinter(C.QPrintPreviewDialog_Printer(this.h))
}

func (this *QPrintPreviewDialog) SetVisible(visible bool) {
	C.QPrintPreviewDialog_SetVisible(this.h, (C.bool)(visible))
}

func (this *QPrintPreviewDialog) Done(result int) {
	C.QPrintPreviewDialog_Done(this.h, (C.int)(result))
}

func (this *QPrintPreviewDialog) PaintRequested(printer *QPrinter) {
	C.QPrintPreviewDialog_PaintRequested(this.h, printer.cPointer())
}
func (this *QPrintPreviewDialog) OnPaintRequested(slot func(printer *QPrinter)) {
	C.QPrintPreviewDialog_connect_PaintRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintPreviewDialog_PaintRequested
func miqt_exec_callback_QPrintPreviewDialog_PaintRequested(cb C.intptr_t, printer *C.QPrinter) {
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
	var _ms C.struct_miqt_string = C.QPrintPreviewDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPrintPreviewDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrintPreviewDialog) callVirtualBase_SetVisible(visible bool) {

	C.QPrintPreviewDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPrintPreviewDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QPrintPreviewDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_SetVisible
func miqt_exec_callback_QPrintPreviewDialog_SetVisible(self *C.QPrintPreviewDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_Done(result int) {

	C.QPrintPreviewDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QPrintPreviewDialog) OnDone(slot func(super func(result int), result int)) {
	ok := C.QPrintPreviewDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_Done
func miqt_exec_callback_QPrintPreviewDialog_Done(self *C.QPrintPreviewDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewDialog) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPrintPreviewDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_SizeHint
func miqt_exec_callback_QPrintPreviewDialog_SizeHint(self *C.QPrintPreviewDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewDialog) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPrintPreviewDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_MinimumSizeHint
func miqt_exec_callback_QPrintPreviewDialog_MinimumSizeHint(self *C.QPrintPreviewDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_Open() {

	C.QPrintPreviewDialog_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QPrintPreviewDialog) OnOpen(slot func(super func())) {
	ok := C.QPrintPreviewDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_Open
func miqt_exec_callback_QPrintPreviewDialog_Open(self *C.QPrintPreviewDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Open)

}

func (this *QPrintPreviewDialog) callVirtualBase_Exec() int {

	return (int)(C.QPrintPreviewDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewDialog) OnExec(slot func(super func() int) int) {
	ok := C.QPrintPreviewDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_Exec
func miqt_exec_callback_QPrintPreviewDialog_Exec(self *C.QPrintPreviewDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_Accept() {

	C.QPrintPreviewDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QPrintPreviewDialog) OnAccept(slot func(super func())) {
	ok := C.QPrintPreviewDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_Accept
func miqt_exec_callback_QPrintPreviewDialog_Accept(self *C.QPrintPreviewDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Accept)

}

func (this *QPrintPreviewDialog) callVirtualBase_Reject() {

	C.QPrintPreviewDialog_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QPrintPreviewDialog) OnReject(slot func(super func())) {
	ok := C.QPrintPreviewDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_Reject
func miqt_exec_callback_QPrintPreviewDialog_Reject(self *C.QPrintPreviewDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_Reject)

}

func (this *QPrintPreviewDialog) callVirtualBase_KeyPressEvent(param1 *qt6.QKeyEvent) {

	C.QPrintPreviewDialog_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnKeyPressEvent(slot func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_KeyPressEvent
func miqt_exec_callback_QPrintPreviewDialog_KeyPressEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_CloseEvent(param1 *qt6.QCloseEvent) {

	C.QPrintPreviewDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnCloseEvent(slot func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_CloseEvent
func miqt_exec_callback_QPrintPreviewDialog_CloseEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ShowEvent(param1 *qt6.QShowEvent) {

	C.QPrintPreviewDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnShowEvent(slot func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_ShowEvent
func miqt_exec_callback_QPrintPreviewDialog_ShowEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ResizeEvent(param1 *qt6.QResizeEvent) {

	C.QPrintPreviewDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnResizeEvent(slot func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_ResizeEvent
func miqt_exec_callback_QPrintPreviewDialog_ResizeEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ContextMenuEvent(param1 *qt6.QContextMenuEvent) {

	C.QPrintPreviewDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnContextMenuEvent(slot func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_ContextMenuEvent
func miqt_exec_callback_QPrintPreviewDialog_ContextMenuEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_EventFilter(param1 *qt6.QObject, param2 *qt6.QEvent) bool {

	return (bool)(C.QPrintPreviewDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QPrintPreviewDialog) OnEventFilter(slot func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_EventFilter
func miqt_exec_callback_QPrintPreviewDialog_EventFilter(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
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

	return (int)(C.QPrintPreviewDialog_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QPrintPreviewDialog_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_DevType
func miqt_exec_callback_QPrintPreviewDialog_DevType(self *C.QPrintPreviewDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QPrintPreviewDialog_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrintPreviewDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QPrintPreviewDialog_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_HeightForWidth
func miqt_exec_callback_QPrintPreviewDialog_HeightForWidth(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QPrintPreviewDialog_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_HasHeightForWidth
func miqt_exec_callback_QPrintPreviewDialog_HasHeightForWidth(self *C.QPrintPreviewDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewDialog) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_PaintEngine(unsafe.Pointer(this.h))))

}
func (this *QPrintPreviewDialog) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QPrintPreviewDialog_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_PaintEngine
func miqt_exec_callback_QPrintPreviewDialog_PaintEngine(self *C.QPrintPreviewDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPrintPreviewDialog_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPrintPreviewDialog) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_Event
func miqt_exec_callback_QPrintPreviewDialog_Event(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QPrintPreviewDialog_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_MousePressEvent
func miqt_exec_callback_QPrintPreviewDialog_MousePressEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewDialog_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_MouseReleaseEvent
func miqt_exec_callback_QPrintPreviewDialog_MouseReleaseEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewDialog_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_MouseDoubleClickEvent
func miqt_exec_callback_QPrintPreviewDialog_MouseDoubleClickEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewDialog_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_MouseMoveEvent
func miqt_exec_callback_QPrintPreviewDialog_MouseMoveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QPrintPreviewDialog_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_WheelEvent
func miqt_exec_callback_QPrintPreviewDialog_WheelEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QPrintPreviewDialog_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_KeyReleaseEvent
func miqt_exec_callback_QPrintPreviewDialog_KeyReleaseEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QPrintPreviewDialog_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_FocusInEvent
func miqt_exec_callback_QPrintPreviewDialog_FocusInEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QPrintPreviewDialog_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_FocusOutEvent
func miqt_exec_callback_QPrintPreviewDialog_FocusOutEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QPrintPreviewDialog_virtualbase_EnterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_EnterEvent
func miqt_exec_callback_QPrintPreviewDialog_EnterEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QPrintPreviewDialog_virtualbase_LeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_LeaveEvent
func miqt_exec_callback_QPrintPreviewDialog_LeaveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QPrintPreviewDialog_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_PaintEvent
func miqt_exec_callback_QPrintPreviewDialog_PaintEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QPrintPreviewDialog_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_MoveEvent
func miqt_exec_callback_QPrintPreviewDialog_MoveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QPrintPreviewDialog_virtualbase_TabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_TabletEvent
func miqt_exec_callback_QPrintPreviewDialog_TabletEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QPrintPreviewDialog_virtualbase_ActionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_ActionEvent
func miqt_exec_callback_QPrintPreviewDialog_ActionEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QPrintPreviewDialog_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_DragEnterEvent
func miqt_exec_callback_QPrintPreviewDialog_DragEnterEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QPrintPreviewDialog_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_DragMoveEvent
func miqt_exec_callback_QPrintPreviewDialog_DragMoveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QPrintPreviewDialog_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_DragLeaveEvent
func miqt_exec_callback_QPrintPreviewDialog_DragLeaveEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QPrintPreviewDialog_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_DropEvent
func miqt_exec_callback_QPrintPreviewDialog_DropEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QPrintPreviewDialog_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_HideEvent
func miqt_exec_callback_QPrintPreviewDialog_HideEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QHideEvent) {
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

	return (bool)(C.QPrintPreviewDialog_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QPrintPreviewDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_NativeEvent
func miqt_exec_callback_QPrintPreviewDialog_NativeEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	C.QPrintPreviewDialog_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_ChangeEvent
func miqt_exec_callback_QPrintPreviewDialog_ChangeEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPrintPreviewDialog_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrintPreviewDialog) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPrintPreviewDialog_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_Metric
func miqt_exec_callback_QPrintPreviewDialog_Metric(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 C.int) C.int {
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

	C.QPrintPreviewDialog_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QPrintPreviewDialog_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_InitPainter
func miqt_exec_callback_QPrintPreviewDialog_InitPainter(self *C.QPrintPreviewDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QPrintPreviewDialog) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QPrintPreviewDialog_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_Redirected
func miqt_exec_callback_QPrintPreviewDialog_Redirected(self *C.QPrintPreviewDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_SharedPainter(unsafe.Pointer(this.h))))

}
func (this *QPrintPreviewDialog) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QPrintPreviewDialog_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_SharedPainter
func miqt_exec_callback_QPrintPreviewDialog_SharedPainter(self *C.QPrintPreviewDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewDialog) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QPrintPreviewDialog_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_InputMethodEvent
func miqt_exec_callback_QPrintPreviewDialog_InputMethodEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPrintPreviewDialog_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewDialog) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QPrintPreviewDialog_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_InputMethodQuery
func miqt_exec_callback_QPrintPreviewDialog_InputMethodQuery(self *C.QPrintPreviewDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QPrintPreviewDialog_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPrintPreviewDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPrintPreviewDialog_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_FocusNextPrevChild
func miqt_exec_callback_QPrintPreviewDialog_FocusNextPrevChild(self *C.QPrintPreviewDialog, cb C.intptr_t, next C.bool) C.bool {
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

	C.QPrintPreviewDialog_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_TimerEvent
func miqt_exec_callback_QPrintPreviewDialog_TimerEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPrintPreviewDialog_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_ChildEvent
func miqt_exec_callback_QPrintPreviewDialog_ChildEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPrintPreviewDialog_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPrintPreviewDialog_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_CustomEvent
func miqt_exec_callback_QPrintPreviewDialog_CustomEvent(self *C.QPrintPreviewDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPrintPreviewDialog_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPrintPreviewDialog_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_ConnectNotify
func miqt_exec_callback_QPrintPreviewDialog_ConnectNotify(self *C.QPrintPreviewDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPrintPreviewDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPrintPreviewDialog) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPrintPreviewDialog_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPrintPreviewDialog) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPrintPreviewDialog_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewDialog_DisconnectNotify
func miqt_exec_callback_QPrintPreviewDialog_DisconnectNotify(self *C.QPrintPreviewDialog, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QPrintPreviewDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrintPreviewDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrintPreviewDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
