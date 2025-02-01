package printsupport

/*

#include "gen_qpagesetupdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPageSetupDialog struct {
	h *C.QPageSetupDialog
	*qt6.QDialog
}

func (this *QPageSetupDialog) cPointer() *C.QPageSetupDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPageSetupDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPageSetupDialog constructs the type using only CGO pointers.
func newQPageSetupDialog(h *C.QPageSetupDialog) *QPageSetupDialog {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QPageSetupDialog_virtbase(h, &outptr_QDialog)

	return &QPageSetupDialog{h: h,
		QDialog: qt6.UnsafeNewQDialog(unsafe.Pointer(outptr_QDialog))}
}

// UnsafeNewQPageSetupDialog constructs the type using only unsafe pointers.
func UnsafeNewQPageSetupDialog(h unsafe.Pointer) *QPageSetupDialog {
	return newQPageSetupDialog((*C.QPageSetupDialog)(h))
}

// NewQPageSetupDialog constructs a new QPageSetupDialog object.
func NewQPageSetupDialog(parent *qt6.QWidget) *QPageSetupDialog {

	return newQPageSetupDialog(C.QPageSetupDialog_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQPageSetupDialog2 constructs a new QPageSetupDialog object.
func NewQPageSetupDialog2(printer *QPrinter) *QPageSetupDialog {

	return newQPageSetupDialog(C.QPageSetupDialog_new2(printer.cPointer()))
}

// NewQPageSetupDialog3 constructs a new QPageSetupDialog object.
func NewQPageSetupDialog3() *QPageSetupDialog {

	return newQPageSetupDialog(C.QPageSetupDialog_new3())
}

// NewQPageSetupDialog4 constructs a new QPageSetupDialog object.
func NewQPageSetupDialog4(printer *QPrinter, parent *qt6.QWidget) *QPageSetupDialog {

	return newQPageSetupDialog(C.QPageSetupDialog_new4(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QPageSetupDialog) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPageSetupDialog_metaObject(this.h)))
}

func (this *QPageSetupDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPageSetupDialog_metacast(this.h, param1_Cstring))
}

func QPageSetupDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPageSetupDialog) Exec() int {
	return (int)(C.QPageSetupDialog_exec(this.h))
}

func (this *QPageSetupDialog) Done(result int) {
	C.QPageSetupDialog_done(this.h, (C.int)(result))
}

func (this *QPageSetupDialog) Printer() *QPrinter {
	return newQPrinter(C.QPageSetupDialog_printer(this.h))
}

func QPageSetupDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageSetupDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPageSetupDialog) callVirtualBase_Exec() int {

	return (int)(C.QPageSetupDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QPageSetupDialog) OnExec(slot func(super func() int) int) {
	ok := C.QPageSetupDialog_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_exec
func miqt_exec_callback_QPageSetupDialog_exec(self *C.QPageSetupDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_Done(result int) {

	C.QPageSetupDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QPageSetupDialog) OnDone(slot func(super func(result int), result int)) {
	ok := C.QPageSetupDialog_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_done
func miqt_exec_callback_QPageSetupDialog_done(self *C.QPageSetupDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_SetVisible(visible bool) {

	C.QPageSetupDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPageSetupDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QPageSetupDialog_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_setVisible
func miqt_exec_callback_QPageSetupDialog_setVisible(self *C.QPageSetupDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPageSetupDialog_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPageSetupDialog) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPageSetupDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_sizeHint
func miqt_exec_callback_QPageSetupDialog_sizeHint(self *C.QPageSetupDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPageSetupDialog) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPageSetupDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPageSetupDialog) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPageSetupDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_minimumSizeHint
func miqt_exec_callback_QPageSetupDialog_minimumSizeHint(self *C.QPageSetupDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPageSetupDialog) callVirtualBase_Open() {

	C.QPageSetupDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QPageSetupDialog) OnOpen(slot func(super func())) {
	ok := C.QPageSetupDialog_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_open
func miqt_exec_callback_QPageSetupDialog_open(self *C.QPageSetupDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Open)

}

func (this *QPageSetupDialog) callVirtualBase_Accept() {

	C.QPageSetupDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QPageSetupDialog) OnAccept(slot func(super func())) {
	ok := C.QPageSetupDialog_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_accept
func miqt_exec_callback_QPageSetupDialog_accept(self *C.QPageSetupDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Accept)

}

func (this *QPageSetupDialog) callVirtualBase_Reject() {

	C.QPageSetupDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QPageSetupDialog) OnReject(slot func(super func())) {
	ok := C.QPageSetupDialog_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_reject
func miqt_exec_callback_QPageSetupDialog_reject(self *C.QPageSetupDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Reject)

}

func (this *QPageSetupDialog) callVirtualBase_KeyPressEvent(param1 *qt6.QKeyEvent) {

	C.QPageSetupDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnKeyPressEvent(slot func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent)) {
	ok := C.QPageSetupDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_keyPressEvent
func miqt_exec_callback_QPageSetupDialog_keyPressEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_CloseEvent(param1 *qt6.QCloseEvent) {

	C.QPageSetupDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnCloseEvent(slot func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent)) {
	ok := C.QPageSetupDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_closeEvent
func miqt_exec_callback_QPageSetupDialog_closeEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(param1))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_ShowEvent(param1 *qt6.QShowEvent) {

	C.QPageSetupDialog_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnShowEvent(slot func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent)) {
	ok := C.QPageSetupDialog_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_showEvent
func miqt_exec_callback_QPageSetupDialog_showEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(param1))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_ResizeEvent(param1 *qt6.QResizeEvent) {

	C.QPageSetupDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnResizeEvent(slot func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent)) {
	ok := C.QPageSetupDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_resizeEvent
func miqt_exec_callback_QPageSetupDialog_resizeEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_ContextMenuEvent(param1 *qt6.QContextMenuEvent) {

	C.QPageSetupDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnContextMenuEvent(slot func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent)) {
	ok := C.QPageSetupDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_contextMenuEvent
func miqt_exec_callback_QPageSetupDialog_contextMenuEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_EventFilter(param1 *qt6.QObject, param2 *qt6.QEvent) bool {

	return (bool)(C.QPageSetupDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QPageSetupDialog) OnEventFilter(slot func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool) {
	ok := C.QPageSetupDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_eventFilter
func miqt_exec_callback_QPageSetupDialog_eventFilter(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_DevType() int {

	return (int)(C.QPageSetupDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPageSetupDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QPageSetupDialog_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_devType
func miqt_exec_callback_QPageSetupDialog_devType(self *C.QPageSetupDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QPageSetupDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPageSetupDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QPageSetupDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_heightForWidth
func miqt_exec_callback_QPageSetupDialog_heightForWidth(self *C.QPageSetupDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QPageSetupDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QPageSetupDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QPageSetupDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_hasHeightForWidth
func miqt_exec_callback_QPageSetupDialog_hasHeightForWidth(self *C.QPageSetupDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPageSetupDialog_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QPageSetupDialog) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QPageSetupDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_paintEngine
func miqt_exec_callback_QPageSetupDialog_paintEngine(self *C.QPageSetupDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QPageSetupDialog) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPageSetupDialog_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPageSetupDialog) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPageSetupDialog_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_event
func miqt_exec_callback_QPageSetupDialog_event(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QPageSetupDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPageSetupDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_mousePressEvent
func miqt_exec_callback_QPageSetupDialog_mousePressEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QPageSetupDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPageSetupDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_mouseReleaseEvent
func miqt_exec_callback_QPageSetupDialog_mouseReleaseEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QPageSetupDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPageSetupDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_mouseDoubleClickEvent
func miqt_exec_callback_QPageSetupDialog_mouseDoubleClickEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QPageSetupDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPageSetupDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_mouseMoveEvent
func miqt_exec_callback_QPageSetupDialog_mouseMoveEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QPageSetupDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QPageSetupDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_wheelEvent
func miqt_exec_callback_QPageSetupDialog_wheelEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QPageSetupDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPageSetupDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_keyReleaseEvent
func miqt_exec_callback_QPageSetupDialog_keyReleaseEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QPageSetupDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPageSetupDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_focusInEvent
func miqt_exec_callback_QPageSetupDialog_focusInEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QPageSetupDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPageSetupDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_focusOutEvent
func miqt_exec_callback_QPageSetupDialog_focusOutEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QPageSetupDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QPageSetupDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_enterEvent
func miqt_exec_callback_QPageSetupDialog_enterEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QPageSetupDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPageSetupDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_leaveEvent
func miqt_exec_callback_QPageSetupDialog_leaveEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QPageSetupDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QPageSetupDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_paintEvent
func miqt_exec_callback_QPageSetupDialog_paintEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QPageSetupDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QPageSetupDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_moveEvent
func miqt_exec_callback_QPageSetupDialog_moveEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QPageSetupDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QPageSetupDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_tabletEvent
func miqt_exec_callback_QPageSetupDialog_tabletEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QPageSetupDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QPageSetupDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_actionEvent
func miqt_exec_callback_QPageSetupDialog_actionEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QPageSetupDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QPageSetupDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_dragEnterEvent
func miqt_exec_callback_QPageSetupDialog_dragEnterEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QPageSetupDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QPageSetupDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_dragMoveEvent
func miqt_exec_callback_QPageSetupDialog_dragMoveEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QPageSetupDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QPageSetupDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_dragLeaveEvent
func miqt_exec_callback_QPageSetupDialog_dragLeaveEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QPageSetupDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QPageSetupDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_dropEvent
func miqt_exec_callback_QPageSetupDialog_dropEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QPageSetupDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QPageSetupDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_hideEvent
func miqt_exec_callback_QPageSetupDialog_hideEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QPageSetupDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QPageSetupDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QPageSetupDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_nativeEvent
func miqt_exec_callback_QPageSetupDialog_nativeEvent(self *C.QPageSetupDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QPageSetupDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QPageSetupDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_changeEvent
func miqt_exec_callback_QPageSetupDialog_changeEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPageSetupDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPageSetupDialog) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPageSetupDialog_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_metric
func miqt_exec_callback_QPageSetupDialog_metric(self *C.QPageSetupDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QPageSetupDialog_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QPageSetupDialog) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QPageSetupDialog_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_initPainter
func miqt_exec_callback_QPageSetupDialog_initPainter(self *C.QPageSetupDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QPageSetupDialog_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QPageSetupDialog) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QPageSetupDialog_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_redirected
func miqt_exec_callback_QPageSetupDialog_redirected(self *C.QPageSetupDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QPageSetupDialog) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QPageSetupDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QPageSetupDialog) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QPageSetupDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_sharedPainter
func miqt_exec_callback_QPageSetupDialog_sharedPainter(self *C.QPageSetupDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QPageSetupDialog) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QPageSetupDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QPageSetupDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_inputMethodEvent
func miqt_exec_callback_QPageSetupDialog_inputMethodEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPageSetupDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPageSetupDialog) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QPageSetupDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_inputMethodQuery
func miqt_exec_callback_QPageSetupDialog_inputMethodQuery(self *C.QPageSetupDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPageSetupDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QPageSetupDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPageSetupDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPageSetupDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_focusNextPrevChild
func miqt_exec_callback_QPageSetupDialog_focusNextPrevChild(self *C.QPageSetupDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPageSetupDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPageSetupDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_timerEvent
func miqt_exec_callback_QPageSetupDialog_timerEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPageSetupDialog_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPageSetupDialog_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_childEvent
func miqt_exec_callback_QPageSetupDialog_childEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPageSetupDialog_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPageSetupDialog) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPageSetupDialog_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_customEvent
func miqt_exec_callback_QPageSetupDialog_customEvent(self *C.QPageSetupDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPageSetupDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPageSetupDialog) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPageSetupDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_connectNotify
func miqt_exec_callback_QPageSetupDialog_connectNotify(self *C.QPageSetupDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPageSetupDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPageSetupDialog) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPageSetupDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPageSetupDialog_disconnectNotify
func miqt_exec_callback_QPageSetupDialog_disconnectNotify(self *C.QPageSetupDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPageSetupDialog) Delete() {
	C.QPageSetupDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPageSetupDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QPageSetupDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
