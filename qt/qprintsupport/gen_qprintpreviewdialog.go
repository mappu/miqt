package qprintsupport

/*

#include "gen_qprintpreviewdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPrintPreviewDialog struct {
	h *C.QPrintPreviewDialog
	*qt.QDialog
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

func newQPrintPreviewDialog(h *C.QPrintPreviewDialog) *QPrintPreviewDialog {
	if h == nil {
		return nil
	}
	return &QPrintPreviewDialog{h: h, QDialog: qt.UnsafeNewQDialog(unsafe.Pointer(h))}
}

func UnsafeNewQPrintPreviewDialog(h unsafe.Pointer) *QPrintPreviewDialog {
	return newQPrintPreviewDialog((*C.QPrintPreviewDialog)(h))
}

// NewQPrintPreviewDialog constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog() *QPrintPreviewDialog {
	ret := C.QPrintPreviewDialog_new()
	return newQPrintPreviewDialog(ret)
}

// NewQPrintPreviewDialog2 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog2(printer *QPrinter) *QPrintPreviewDialog {
	ret := C.QPrintPreviewDialog_new2(printer.cPointer())
	return newQPrintPreviewDialog(ret)
}

// NewQPrintPreviewDialog3 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog3(parent *qt.QWidget) *QPrintPreviewDialog {
	ret := C.QPrintPreviewDialog_new3((*C.QWidget)(parent.UnsafePointer()))
	return newQPrintPreviewDialog(ret)
}

// NewQPrintPreviewDialog4 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog4(parent *qt.QWidget, flags qt.WindowType) *QPrintPreviewDialog {
	ret := C.QPrintPreviewDialog_new4((*C.QWidget)(parent.UnsafePointer()), (C.int)(flags))
	return newQPrintPreviewDialog(ret)
}

// NewQPrintPreviewDialog5 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog5(printer *QPrinter, parent *qt.QWidget) *QPrintPreviewDialog {
	ret := C.QPrintPreviewDialog_new5(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer()))
	return newQPrintPreviewDialog(ret)
}

// NewQPrintPreviewDialog6 constructs a new QPrintPreviewDialog object.
func NewQPrintPreviewDialog6(printer *QPrinter, parent *qt.QWidget, flags qt.WindowType) *QPrintPreviewDialog {
	ret := C.QPrintPreviewDialog_new6(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer()), (C.int)(flags))
	return newQPrintPreviewDialog(ret)
}

func (this *QPrintPreviewDialog) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QPrintPreviewDialog_MetaObject(this.h)))
}

func (this *QPrintPreviewDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QPrintPreviewDialog_Metacast(this.h, param1_Cstring)
}

func QPrintPreviewDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintPreviewDialog_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPrintPreviewDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintPreviewDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPrintPreviewDialog) Printer() *QPrinter {
	return UnsafeNewQPrinter(unsafe.Pointer(C.QPrintPreviewDialog_Printer(this.h)))
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
	slotval1 := UnsafeNewQPrinter(unsafe.Pointer(printer))

	gofunc(slotval1)
}

func QPrintPreviewDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintPreviewDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPrintPreviewDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintPreviewDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPrintPreviewDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintPreviewDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPrintPreviewDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintPreviewDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
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
