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
	h          *C.QAbstractPrintDialog
	isSubclass bool
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
func newQAbstractPrintDialog(h *C.QAbstractPrintDialog, h_QDialog *C.QDialog, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QAbstractPrintDialog {
	if h == nil {
		return nil
	}
	return &QAbstractPrintDialog{h: h,
		QDialog: qt.UnsafeNewQDialog(unsafe.Pointer(h_QDialog), unsafe.Pointer(h_QWidget), unsafe.Pointer(h_QObject), unsafe.Pointer(h_QPaintDevice))}
}

// UnsafeNewQAbstractPrintDialog constructs the type using only unsafe pointers.
func UnsafeNewQAbstractPrintDialog(h unsafe.Pointer, h_QDialog unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QAbstractPrintDialog {
	if h == nil {
		return nil
	}

	return &QAbstractPrintDialog{h: (*C.QAbstractPrintDialog)(h),
		QDialog: qt.UnsafeNewQDialog(h_QDialog, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQAbstractPrintDialog constructs a new QAbstractPrintDialog object.
func NewQAbstractPrintDialog(printer *QPrinter) *QAbstractPrintDialog {
	var outptr_QAbstractPrintDialog *C.QAbstractPrintDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QAbstractPrintDialog_new(printer.cPointer(), &outptr_QAbstractPrintDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQAbstractPrintDialog(outptr_QAbstractPrintDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQAbstractPrintDialog2 constructs a new QAbstractPrintDialog object.
func NewQAbstractPrintDialog2(printer *QPrinter, parent *qt.QWidget) *QAbstractPrintDialog {
	var outptr_QAbstractPrintDialog *C.QAbstractPrintDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QAbstractPrintDialog_new2(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer()), &outptr_QAbstractPrintDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQAbstractPrintDialog(outptr_QAbstractPrintDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
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
	return UnsafeNewQPrinter(unsafe.Pointer(C.QAbstractPrintDialog_Printer(this.h)), nil, nil)
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
	C.QAbstractPrintDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	_ret := C.QAbstractPrintDialog_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractPrintDialog) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	C.QAbstractPrintDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	_ret := C.QAbstractPrintDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractPrintDialog) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	C.QAbstractPrintDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QAbstractPrintDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QAbstractPrintDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QAbstractPrintDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QAbstractPrintDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QAbstractPrintDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QAbstractPrintDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractPrintDialog_KeyPressEvent
func miqt_exec_callback_QAbstractPrintDialog_KeyPressEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_CloseEvent(param1 *qt.QCloseEvent) {

	C.QAbstractPrintDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnCloseEvent(slot func(super func(param1 *qt.QCloseEvent), param1 *qt.QCloseEvent)) {
	C.QAbstractPrintDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractPrintDialog_CloseEvent
func miqt_exec_callback_QAbstractPrintDialog_CloseEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QCloseEvent), param1 *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(param1), nil)

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ShowEvent(param1 *qt.QShowEvent) {

	C.QAbstractPrintDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnShowEvent(slot func(super func(param1 *qt.QShowEvent), param1 *qt.QShowEvent)) {
	C.QAbstractPrintDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractPrintDialog_ShowEvent
func miqt_exec_callback_QAbstractPrintDialog_ShowEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QShowEvent), param1 *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(param1), nil)

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QAbstractPrintDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	C.QAbstractPrintDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractPrintDialog_ResizeEvent
func miqt_exec_callback_QAbstractPrintDialog_ResizeEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1), nil)

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_ContextMenuEvent(param1 *qt.QContextMenuEvent) {

	C.QAbstractPrintDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QAbstractPrintDialog) OnContextMenuEvent(slot func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent)) {
	C.QAbstractPrintDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractPrintDialog_ContextMenuEvent
func miqt_exec_callback_QAbstractPrintDialog_ContextMenuEvent(self *C.QAbstractPrintDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QAbstractPrintDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractPrintDialog) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QAbstractPrintDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QAbstractPrintDialog) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	C.QAbstractPrintDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

// Delete this object from C++ memory.
func (this *QAbstractPrintDialog) Delete() {
	C.QAbstractPrintDialog_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractPrintDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractPrintDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
