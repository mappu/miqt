package printsupport

/*

#include "gen_qabstractprintdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractPrintDialog__PrintRange int

const (
	QAbstractPrintDialog__AllPages    QAbstractPrintDialog__PrintRange = 0
	QAbstractPrintDialog__Selection   QAbstractPrintDialog__PrintRange = 1
	QAbstractPrintDialog__PageRange   QAbstractPrintDialog__PrintRange = 2
	QAbstractPrintDialog__CurrentPage QAbstractPrintDialog__PrintRange = 3
)

type QAbstractPrintDialog__PrintDialogOption int

const (
	QAbstractPrintDialog__PrintToFile        QAbstractPrintDialog__PrintDialogOption = 1
	QAbstractPrintDialog__PrintSelection     QAbstractPrintDialog__PrintDialogOption = 2
	QAbstractPrintDialog__PrintPageRange     QAbstractPrintDialog__PrintDialogOption = 4
	QAbstractPrintDialog__PrintShowPageSize  QAbstractPrintDialog__PrintDialogOption = 8
	QAbstractPrintDialog__PrintCollateCopies QAbstractPrintDialog__PrintDialogOption = 16
	QAbstractPrintDialog__PrintCurrentPage   QAbstractPrintDialog__PrintDialogOption = 64
)

type QAbstractPrintDialog struct {
	h *C.QAbstractPrintDialog
	*qt6.QDialog
}

func (this *QAbstractPrintDialog) cPointer() *C.QAbstractPrintDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractPrintDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractPrintDialog constructs the type using only CGO pointers.
func newQAbstractPrintDialog(h *C.QAbstractPrintDialog) *QAbstractPrintDialog {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QAbstractPrintDialog_virtbase(h, &outptr_QDialog)

	return &QAbstractPrintDialog{h: h,
		QDialog: qt6.UnsafeNewQDialog(unsafe.Pointer(outptr_QDialog))}
}

// UnsafeNewQAbstractPrintDialog constructs the type using only unsafe pointers.
func UnsafeNewQAbstractPrintDialog(h unsafe.Pointer) *QAbstractPrintDialog {
	return newQAbstractPrintDialog((*C.QAbstractPrintDialog)(h))
}

// NewQAbstractPrintDialog constructs a new QAbstractPrintDialog object.
func NewQAbstractPrintDialog(printer *QPrinter) *QAbstractPrintDialog {

	return newQAbstractPrintDialog(C.QAbstractPrintDialog_new(printer.cPointer()))
}

// NewQAbstractPrintDialog2 constructs a new QAbstractPrintDialog object.
func NewQAbstractPrintDialog2(printer *QPrinter, parent *qt6.QWidget) *QAbstractPrintDialog {

	return newQAbstractPrintDialog(C.QAbstractPrintDialog_new2(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QAbstractPrintDialog) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractPrintDialog_metaObject(this.h)))
}

func (this *QAbstractPrintDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractPrintDialog_metacast(this.h, param1_Cstring))
}

func QAbstractPrintDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractPrintDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractPrintDialog) SetOptionTabs(tabs []*qt6.QWidget) {
	tabs_CArray := (*[0xffff]*C.QWidget)(C.malloc(C.size_t(8 * len(tabs))))
	defer C.free(unsafe.Pointer(tabs_CArray))
	for i := range tabs {
		tabs_CArray[i] = (*C.QWidget)(tabs[i].UnsafePointer())
	}
	tabs_ma := C.struct_miqt_array{len: C.size_t(len(tabs)), data: unsafe.Pointer(tabs_CArray)}
	C.QAbstractPrintDialog_setOptionTabs(this.h, tabs_ma)
}

func (this *QAbstractPrintDialog) SetPrintRange(rangeVal QAbstractPrintDialog__PrintRange) {
	C.QAbstractPrintDialog_setPrintRange(this.h, (C.int)(rangeVal))
}

func (this *QAbstractPrintDialog) PrintRange() QAbstractPrintDialog__PrintRange {
	return (QAbstractPrintDialog__PrintRange)(C.QAbstractPrintDialog_printRange(this.h))
}

func (this *QAbstractPrintDialog) SetMinMax(min int, max int) {
	C.QAbstractPrintDialog_setMinMax(this.h, (C.int)(min), (C.int)(max))
}

func (this *QAbstractPrintDialog) MinPage() int {
	return (int)(C.QAbstractPrintDialog_minPage(this.h))
}

func (this *QAbstractPrintDialog) MaxPage() int {
	return (int)(C.QAbstractPrintDialog_maxPage(this.h))
}

func (this *QAbstractPrintDialog) SetFromTo(fromPage int, toPage int) {
	C.QAbstractPrintDialog_setFromTo(this.h, (C.int)(fromPage), (C.int)(toPage))
}

func (this *QAbstractPrintDialog) FromPage() int {
	return (int)(C.QAbstractPrintDialog_fromPage(this.h))
}

func (this *QAbstractPrintDialog) ToPage() int {
	return (int)(C.QAbstractPrintDialog_toPage(this.h))
}

func (this *QAbstractPrintDialog) Printer() *QPrinter {
	return newQPrinter(C.QAbstractPrintDialog_printer(this.h))
}

func QAbstractPrintDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractPrintDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractPrintDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractPrintDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractPrintDialog) callVirtualBase_SetVisible(visible bool) {

	C.QAbstractPrintDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QAbstractPrintDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QAbstractPrintDialog_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_setVisible
func miqt_exec_callback_QAbstractPrintDialog_setVisible(self *C.QAbstractPrintDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractPrintDialog) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QAbstractPrintDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_sizeHint
func miqt_exec_callback_QAbstractPrintDialog_sizeHint(self *C.QAbstractPrintDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractPrintDialog) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QAbstractPrintDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_minimumSizeHint
func miqt_exec_callback_QAbstractPrintDialog_minimumSizeHint(self *C.QAbstractPrintDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_Open() {

	C.QAbstractPrintDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QAbstractPrintDialog) OnOpen(slot func(super func())) {
	ok := C.QAbstractPrintDialog_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_open
func miqt_exec_callback_QAbstractPrintDialog_open(self *C.QAbstractPrintDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Open)

}

func (this *QAbstractPrintDialog) callVirtualBase_Exec() int {

	return (int)(C.QAbstractPrintDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QAbstractPrintDialog) OnExec(slot func(super func() int) int) {
	ok := C.QAbstractPrintDialog_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_exec
func miqt_exec_callback_QAbstractPrintDialog_exec(self *C.QAbstractPrintDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_Done(param1 int) {

	C.QAbstractPrintDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QAbstractPrintDialog) OnDone(slot func(super func(param1 int), param1 int)) {
	ok := C.QAbstractPrintDialog_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_done
func miqt_exec_callback_QAbstractPrintDialog_done(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_Accept() {

	C.QAbstractPrintDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QAbstractPrintDialog) OnAccept(slot func(super func())) {
	ok := C.QAbstractPrintDialog_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_accept
func miqt_exec_callback_QAbstractPrintDialog_accept(self *C.QAbstractPrintDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Accept)

}

func (this *QAbstractPrintDialog) callVirtualBase_Reject() {

	C.QAbstractPrintDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QAbstractPrintDialog) OnReject(slot func(super func())) {
	ok := C.QAbstractPrintDialog_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_reject
func miqt_exec_callback_QAbstractPrintDialog_reject(self *C.QAbstractPrintDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Reject)

}

func (this *QAbstractPrintDialog) callVirtualBase_KeyPressEvent(param1 *qt6.QKeyEvent) {

	C.QAbstractPrintDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnKeyPressEvent(slot func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_keyPressEvent
func miqt_exec_callback_QAbstractPrintDialog_keyPressEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_CloseEvent(param1 *qt6.QCloseEvent) {

	C.QAbstractPrintDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnCloseEvent(slot func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_closeEvent
func miqt_exec_callback_QAbstractPrintDialog_closeEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ShowEvent(param1 *qt6.QShowEvent) {

	C.QAbstractPrintDialog_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnShowEvent(slot func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_showEvent
func miqt_exec_callback_QAbstractPrintDialog_showEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ResizeEvent(param1 *qt6.QResizeEvent) {

	C.QAbstractPrintDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnResizeEvent(slot func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_resizeEvent
func miqt_exec_callback_QAbstractPrintDialog_resizeEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ContextMenuEvent(param1 *qt6.QContextMenuEvent) {

	C.QAbstractPrintDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnContextMenuEvent(slot func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_contextMenuEvent
func miqt_exec_callback_QAbstractPrintDialog_contextMenuEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_EventFilter(param1 *qt6.QObject, param2 *qt6.QEvent) bool {

	return (bool)(C.QAbstractPrintDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QAbstractPrintDialog) OnEventFilter(slot func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_eventFilter
func miqt_exec_callback_QAbstractPrintDialog_eventFilter(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_DevType() int {

	return (int)(C.QAbstractPrintDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QAbstractPrintDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QAbstractPrintDialog_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_devType
func miqt_exec_callback_QAbstractPrintDialog_devType(self *C.QAbstractPrintDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QAbstractPrintDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractPrintDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QAbstractPrintDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_heightForWidth
func miqt_exec_callback_QAbstractPrintDialog_heightForWidth(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QAbstractPrintDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QAbstractPrintDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_hasHeightForWidth
func miqt_exec_callback_QAbstractPrintDialog_hasHeightForWidth(self *C.QAbstractPrintDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QAbstractPrintDialog) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QAbstractPrintDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_paintEngine
func miqt_exec_callback_QAbstractPrintDialog_paintEngine(self *C.QAbstractPrintDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAbstractPrintDialog_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractPrintDialog) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_event
func miqt_exec_callback_QAbstractPrintDialog_event(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QAbstractPrintDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_mousePressEvent
func miqt_exec_callback_QAbstractPrintDialog_mousePressEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QAbstractPrintDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_mouseReleaseEvent
func miqt_exec_callback_QAbstractPrintDialog_mouseReleaseEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QAbstractPrintDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_mouseDoubleClickEvent
func miqt_exec_callback_QAbstractPrintDialog_mouseDoubleClickEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QAbstractPrintDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_mouseMoveEvent
func miqt_exec_callback_QAbstractPrintDialog_mouseMoveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QAbstractPrintDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_wheelEvent
func miqt_exec_callback_QAbstractPrintDialog_wheelEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QAbstractPrintDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_keyReleaseEvent
func miqt_exec_callback_QAbstractPrintDialog_keyReleaseEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QAbstractPrintDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_focusInEvent
func miqt_exec_callback_QAbstractPrintDialog_focusInEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QAbstractPrintDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_focusOutEvent
func miqt_exec_callback_QAbstractPrintDialog_focusOutEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QAbstractPrintDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_enterEvent
func miqt_exec_callback_QAbstractPrintDialog_enterEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QAbstractPrintDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_leaveEvent
func miqt_exec_callback_QAbstractPrintDialog_leaveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QAbstractPrintDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_paintEvent
func miqt_exec_callback_QAbstractPrintDialog_paintEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QAbstractPrintDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_moveEvent
func miqt_exec_callback_QAbstractPrintDialog_moveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QAbstractPrintDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_tabletEvent
func miqt_exec_callback_QAbstractPrintDialog_tabletEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QAbstractPrintDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_actionEvent
func miqt_exec_callback_QAbstractPrintDialog_actionEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QAbstractPrintDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_dragEnterEvent
func miqt_exec_callback_QAbstractPrintDialog_dragEnterEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QAbstractPrintDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_dragMoveEvent
func miqt_exec_callback_QAbstractPrintDialog_dragMoveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QAbstractPrintDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_dragLeaveEvent
func miqt_exec_callback_QAbstractPrintDialog_dragLeaveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QAbstractPrintDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_dropEvent
func miqt_exec_callback_QAbstractPrintDialog_dropEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QAbstractPrintDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_hideEvent
func miqt_exec_callback_QAbstractPrintDialog_hideEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QAbstractPrintDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QAbstractPrintDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_nativeEvent
func miqt_exec_callback_QAbstractPrintDialog_nativeEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QAbstractPrintDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_changeEvent
func miqt_exec_callback_QAbstractPrintDialog_changeEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QAbstractPrintDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractPrintDialog) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QAbstractPrintDialog_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_metric
func miqt_exec_callback_QAbstractPrintDialog_metric(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QAbstractPrintDialog_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QAbstractPrintDialog_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_initPainter
func miqt_exec_callback_QAbstractPrintDialog_initPainter(self *C.QAbstractPrintDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QAbstractPrintDialog) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QAbstractPrintDialog_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_redirected
func miqt_exec_callback_QAbstractPrintDialog_redirected(self *C.QAbstractPrintDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QAbstractPrintDialog) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QAbstractPrintDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_sharedPainter
func miqt_exec_callback_QAbstractPrintDialog_sharedPainter(self *C.QAbstractPrintDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QAbstractPrintDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_inputMethodEvent
func miqt_exec_callback_QAbstractPrintDialog_inputMethodEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractPrintDialog) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QAbstractPrintDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_inputMethodQuery
func miqt_exec_callback_QAbstractPrintDialog_inputMethodQuery(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QAbstractPrintDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractPrintDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_focusNextPrevChild
func miqt_exec_callback_QAbstractPrintDialog_focusNextPrevChild(self *C.QAbstractPrintDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAbstractPrintDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_timerEvent
func miqt_exec_callback_QAbstractPrintDialog_timerEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAbstractPrintDialog_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_childEvent
func miqt_exec_callback_QAbstractPrintDialog_childEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAbstractPrintDialog_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_customEvent
func miqt_exec_callback_QAbstractPrintDialog_customEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAbstractPrintDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAbstractPrintDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_connectNotify
func miqt_exec_callback_QAbstractPrintDialog_connectNotify(self *C.QAbstractPrintDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAbstractPrintDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAbstractPrintDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_disconnectNotify
func miqt_exec_callback_QAbstractPrintDialog_disconnectNotify(self *C.QAbstractPrintDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractPrintDialog) Delete() {
	C.QAbstractPrintDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractPrintDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractPrintDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
