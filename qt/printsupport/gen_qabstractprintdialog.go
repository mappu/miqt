package printsupport

/*

#include "gen_qabstractprintdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
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
	QAbstractPrintDialog__None               QAbstractPrintDialog__PrintDialogOption = 0
	QAbstractPrintDialog__PrintToFile        QAbstractPrintDialog__PrintDialogOption = 1
	QAbstractPrintDialog__PrintSelection     QAbstractPrintDialog__PrintDialogOption = 2
	QAbstractPrintDialog__PrintPageRange     QAbstractPrintDialog__PrintDialogOption = 4
	QAbstractPrintDialog__PrintShowPageSize  QAbstractPrintDialog__PrintDialogOption = 8
	QAbstractPrintDialog__PrintCollateCopies QAbstractPrintDialog__PrintDialogOption = 16
	QAbstractPrintDialog__DontUseSheet       QAbstractPrintDialog__PrintDialogOption = 32
	QAbstractPrintDialog__PrintCurrentPage   QAbstractPrintDialog__PrintDialogOption = 64
)

type QAbstractPrintDialog struct {
	h *C.QAbstractPrintDialog
	*qt.QDialog
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
		QDialog: qt.UnsafeNewQDialog(unsafe.Pointer(outptr_QDialog))}
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
func NewQAbstractPrintDialog2(printer *QPrinter, parent *qt.QWidget) *QAbstractPrintDialog {

	return newQAbstractPrintDialog(C.QAbstractPrintDialog_new2(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QAbstractPrintDialog) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractPrintDialog_MetaObject(this.h)))
}

func (this *QAbstractPrintDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractPrintDialog_Metacast(this.h, param1_Cstring))
}

func QAbstractPrintDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractPrintDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractPrintDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractPrintDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractPrintDialog) AddEnabledOption(option QAbstractPrintDialog__PrintDialogOption) {
	C.QAbstractPrintDialog_AddEnabledOption(this.h, (C.int)(option))
}

func (this *QAbstractPrintDialog) SetEnabledOptions(options QAbstractPrintDialog__PrintDialogOption) {
	C.QAbstractPrintDialog_SetEnabledOptions(this.h, (C.int)(options))
}

func (this *QAbstractPrintDialog) EnabledOptions() QAbstractPrintDialog__PrintDialogOption {
	return (QAbstractPrintDialog__PrintDialogOption)(C.QAbstractPrintDialog_EnabledOptions(this.h))
}

func (this *QAbstractPrintDialog) IsOptionEnabled(option QAbstractPrintDialog__PrintDialogOption) bool {
	return (bool)(C.QAbstractPrintDialog_IsOptionEnabled(this.h, (C.int)(option)))
}

func (this *QAbstractPrintDialog) SetOptionTabs(tabs []*qt.QWidget) {
	tabs_CArray := (*[0xffff]*C.QWidget)(C.malloc(C.size_t(8 * len(tabs))))
	defer C.free(unsafe.Pointer(tabs_CArray))
	for i := range tabs {
		tabs_CArray[i] = (*C.QWidget)(tabs[i].UnsafePointer())
	}
	tabs_ma := C.struct_miqt_array{len: C.size_t(len(tabs)), data: unsafe.Pointer(tabs_CArray)}
	C.QAbstractPrintDialog_SetOptionTabs(this.h, tabs_ma)
}

func (this *QAbstractPrintDialog) SetPrintRange(rangeVal QAbstractPrintDialog__PrintRange) {
	C.QAbstractPrintDialog_SetPrintRange(this.h, (C.int)(rangeVal))
}

func (this *QAbstractPrintDialog) PrintRange() QAbstractPrintDialog__PrintRange {
	return (QAbstractPrintDialog__PrintRange)(C.QAbstractPrintDialog_PrintRange(this.h))
}

func (this *QAbstractPrintDialog) SetMinMax(min int, max int) {
	C.QAbstractPrintDialog_SetMinMax(this.h, (C.int)(min), (C.int)(max))
}

func (this *QAbstractPrintDialog) MinPage() int {
	return (int)(C.QAbstractPrintDialog_MinPage(this.h))
}

func (this *QAbstractPrintDialog) MaxPage() int {
	return (int)(C.QAbstractPrintDialog_MaxPage(this.h))
}

func (this *QAbstractPrintDialog) SetFromTo(fromPage int, toPage int) {
	C.QAbstractPrintDialog_SetFromTo(this.h, (C.int)(fromPage), (C.int)(toPage))
}

func (this *QAbstractPrintDialog) FromPage() int {
	return (int)(C.QAbstractPrintDialog_FromPage(this.h))
}

func (this *QAbstractPrintDialog) ToPage() int {
	return (int)(C.QAbstractPrintDialog_ToPage(this.h))
}

func (this *QAbstractPrintDialog) Printer() *QPrinter {
	return newQPrinter(C.QAbstractPrintDialog_Printer(this.h))
}

func QAbstractPrintDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractPrintDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractPrintDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractPrintDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractPrintDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractPrintDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractPrintDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractPrintDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractPrintDialog) callVirtualBase_SetVisible(visible bool) {

	C.QAbstractPrintDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QAbstractPrintDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QAbstractPrintDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_SetVisible
func miqt_exec_callback_QAbstractPrintDialog_SetVisible(self *C.QAbstractPrintDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractPrintDialog) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QAbstractPrintDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_SizeHint
func miqt_exec_callback_QAbstractPrintDialog_SizeHint(self *C.QAbstractPrintDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractPrintDialog) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QAbstractPrintDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_MinimumSizeHint
func miqt_exec_callback_QAbstractPrintDialog_MinimumSizeHint(self *C.QAbstractPrintDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_Open() {

	C.QAbstractPrintDialog_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QAbstractPrintDialog) OnOpen(slot func(super func())) {
	ok := C.QAbstractPrintDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_Open
func miqt_exec_callback_QAbstractPrintDialog_Open(self *C.QAbstractPrintDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Open)

}

func (this *QAbstractPrintDialog) callVirtualBase_Exec() int {

	return (int)(C.QAbstractPrintDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QAbstractPrintDialog) OnExec(slot func(super func() int) int) {
	ok := C.QAbstractPrintDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_Exec
func miqt_exec_callback_QAbstractPrintDialog_Exec(self *C.QAbstractPrintDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_Done(param1 int) {

	C.QAbstractPrintDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QAbstractPrintDialog) OnDone(slot func(super func(param1 int), param1 int)) {
	ok := C.QAbstractPrintDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_Done
func miqt_exec_callback_QAbstractPrintDialog_Done(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_Accept() {

	C.QAbstractPrintDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QAbstractPrintDialog) OnAccept(slot func(super func())) {
	ok := C.QAbstractPrintDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_Accept
func miqt_exec_callback_QAbstractPrintDialog_Accept(self *C.QAbstractPrintDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Accept)

}

func (this *QAbstractPrintDialog) callVirtualBase_Reject() {

	C.QAbstractPrintDialog_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QAbstractPrintDialog) OnReject(slot func(super func())) {
	ok := C.QAbstractPrintDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_Reject
func miqt_exec_callback_QAbstractPrintDialog_Reject(self *C.QAbstractPrintDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Reject)

}

func (this *QAbstractPrintDialog) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QAbstractPrintDialog_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_KeyPressEvent
func miqt_exec_callback_QAbstractPrintDialog_KeyPressEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_CloseEvent(param1 *qt.QCloseEvent) {

	C.QAbstractPrintDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnCloseEvent(slot func(super func(param1 *qt.QCloseEvent), param1 *qt.QCloseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_CloseEvent
func miqt_exec_callback_QAbstractPrintDialog_CloseEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QCloseEvent), param1 *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ShowEvent(param1 *qt.QShowEvent) {

	C.QAbstractPrintDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnShowEvent(slot func(super func(param1 *qt.QShowEvent), param1 *qt.QShowEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_ShowEvent
func miqt_exec_callback_QAbstractPrintDialog_ShowEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QShowEvent), param1 *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QAbstractPrintDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_ResizeEvent
func miqt_exec_callback_QAbstractPrintDialog_ResizeEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ContextMenuEvent(param1 *qt.QContextMenuEvent) {

	C.QAbstractPrintDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnContextMenuEvent(slot func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_ContextMenuEvent
func miqt_exec_callback_QAbstractPrintDialog_ContextMenuEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QAbstractPrintDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QAbstractPrintDialog) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_EventFilter
func miqt_exec_callback_QAbstractPrintDialog_EventFilter(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_DevType() int {

	return (int)(C.QAbstractPrintDialog_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QAbstractPrintDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QAbstractPrintDialog_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_DevType
func miqt_exec_callback_QAbstractPrintDialog_DevType(self *C.QAbstractPrintDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QAbstractPrintDialog_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractPrintDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QAbstractPrintDialog_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_HeightForWidth
func miqt_exec_callback_QAbstractPrintDialog_HeightForWidth(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QAbstractPrintDialog_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QAbstractPrintDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_HasHeightForWidth
func miqt_exec_callback_QAbstractPrintDialog_HasHeightForWidth(self *C.QAbstractPrintDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_PaintEngine(unsafe.Pointer(this.h))))

}
func (this *QAbstractPrintDialog) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QAbstractPrintDialog_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_PaintEngine
func miqt_exec_callback_QAbstractPrintDialog_PaintEngine(self *C.QAbstractPrintDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QAbstractPrintDialog_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractPrintDialog) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_Event
func miqt_exec_callback_QAbstractPrintDialog_Event(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QAbstractPrintDialog_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_MousePressEvent
func miqt_exec_callback_QAbstractPrintDialog_MousePressEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QAbstractPrintDialog_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_MouseReleaseEvent
func miqt_exec_callback_QAbstractPrintDialog_MouseReleaseEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QAbstractPrintDialog_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_MouseDoubleClickEvent
func miqt_exec_callback_QAbstractPrintDialog_MouseDoubleClickEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QAbstractPrintDialog_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_MouseMoveEvent
func miqt_exec_callback_QAbstractPrintDialog_MouseMoveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QAbstractPrintDialog_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_WheelEvent
func miqt_exec_callback_QAbstractPrintDialog_WheelEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QAbstractPrintDialog_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_KeyReleaseEvent
func miqt_exec_callback_QAbstractPrintDialog_KeyReleaseEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QAbstractPrintDialog_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_FocusInEvent
func miqt_exec_callback_QAbstractPrintDialog_FocusInEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QAbstractPrintDialog_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_FocusOutEvent
func miqt_exec_callback_QAbstractPrintDialog_FocusOutEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QAbstractPrintDialog_virtualbase_EnterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_EnterEvent
func miqt_exec_callback_QAbstractPrintDialog_EnterEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QAbstractPrintDialog_virtualbase_LeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_LeaveEvent
func miqt_exec_callback_QAbstractPrintDialog_LeaveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QAbstractPrintDialog_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_PaintEvent
func miqt_exec_callback_QAbstractPrintDialog_PaintEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QAbstractPrintDialog_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_MoveEvent
func miqt_exec_callback_QAbstractPrintDialog_MoveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QAbstractPrintDialog_virtualbase_TabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_TabletEvent
func miqt_exec_callback_QAbstractPrintDialog_TabletEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QAbstractPrintDialog_virtualbase_ActionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_ActionEvent
func miqt_exec_callback_QAbstractPrintDialog_ActionEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QAbstractPrintDialog_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_DragEnterEvent
func miqt_exec_callback_QAbstractPrintDialog_DragEnterEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QAbstractPrintDialog_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_DragMoveEvent
func miqt_exec_callback_QAbstractPrintDialog_DragMoveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QAbstractPrintDialog_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_DragLeaveEvent
func miqt_exec_callback_QAbstractPrintDialog_DragLeaveEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QAbstractPrintDialog_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_DropEvent
func miqt_exec_callback_QAbstractPrintDialog_DropEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QAbstractPrintDialog_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_HideEvent
func miqt_exec_callback_QAbstractPrintDialog_HideEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QAbstractPrintDialog_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QAbstractPrintDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_NativeEvent
func miqt_exec_callback_QAbstractPrintDialog_NativeEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QAbstractPrintDialog_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_ChangeEvent
func miqt_exec_callback_QAbstractPrintDialog_ChangeEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QAbstractPrintDialog_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractPrintDialog) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QAbstractPrintDialog_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_Metric
func miqt_exec_callback_QAbstractPrintDialog_Metric(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QAbstractPrintDialog_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QAbstractPrintDialog_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_InitPainter
func miqt_exec_callback_QAbstractPrintDialog_InitPainter(self *C.QAbstractPrintDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QAbstractPrintDialog) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QAbstractPrintDialog_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_Redirected
func miqt_exec_callback_QAbstractPrintDialog_Redirected(self *C.QAbstractPrintDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_SharedPainter(unsafe.Pointer(this.h))))

}
func (this *QAbstractPrintDialog) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QAbstractPrintDialog_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_SharedPainter
func miqt_exec_callback_QAbstractPrintDialog_SharedPainter(self *C.QAbstractPrintDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QAbstractPrintDialog_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_InputMethodEvent
func miqt_exec_callback_QAbstractPrintDialog_InputMethodEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractPrintDialog_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractPrintDialog) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QAbstractPrintDialog_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_InputMethodQuery
func miqt_exec_callback_QAbstractPrintDialog_InputMethodQuery(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QAbstractPrintDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QAbstractPrintDialog_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractPrintDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QAbstractPrintDialog_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_FocusNextPrevChild
func miqt_exec_callback_QAbstractPrintDialog_FocusNextPrevChild(self *C.QAbstractPrintDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractPrintDialog) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QAbstractPrintDialog_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_TimerEvent
func miqt_exec_callback_QAbstractPrintDialog_TimerEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAbstractPrintDialog_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_ChildEvent
func miqt_exec_callback_QAbstractPrintDialog_ChildEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAbstractPrintDialog_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QAbstractPrintDialog_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_CustomEvent
func miqt_exec_callback_QAbstractPrintDialog_CustomEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractPrintDialog_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAbstractPrintDialog_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_ConnectNotify
func miqt_exec_callback_QAbstractPrintDialog_ConnectNotify(self *C.QAbstractPrintDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractPrintDialog_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAbstractPrintDialog_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPrintDialog_DisconnectNotify
func miqt_exec_callback_QAbstractPrintDialog_DisconnectNotify(self *C.QAbstractPrintDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractPrintDialog) Delete() {
	C.QAbstractPrintDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractPrintDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractPrintDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
