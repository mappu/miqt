package qprintsupport

/*

#include "gen_qprintdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPrintDialog struct {
	h *C.QPrintDialog
	*QAbstractPrintDialog
}

func (this *QPrintDialog) cPointer() *C.QPrintDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPrintDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPrintDialog(h *C.QPrintDialog) *QPrintDialog {
	if h == nil {
		return nil
	}
	return &QPrintDialog{h: h, QAbstractPrintDialog: UnsafeNewQAbstractPrintDialog(unsafe.Pointer(h))}
}

func UnsafeNewQPrintDialog(h unsafe.Pointer) *QPrintDialog {
	return newQPrintDialog((*C.QPrintDialog)(h))
}

// NewQPrintDialog constructs a new QPrintDialog object.
func NewQPrintDialog(printer *QPrinter) *QPrintDialog {
	ret := C.QPrintDialog_new(printer.cPointer())
	return newQPrintDialog(ret)
}

// NewQPrintDialog2 constructs a new QPrintDialog object.
func NewQPrintDialog2() *QPrintDialog {
	ret := C.QPrintDialog_new2()
	return newQPrintDialog(ret)
}

// NewQPrintDialog3 constructs a new QPrintDialog object.
func NewQPrintDialog3(printer *QPrinter, parent *qt.QWidget) *QPrintDialog {
	ret := C.QPrintDialog_new3(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer()))
	return newQPrintDialog(ret)
}

// NewQPrintDialog4 constructs a new QPrintDialog object.
func NewQPrintDialog4(parent *qt.QWidget) *QPrintDialog {
	ret := C.QPrintDialog_new4((*C.QWidget)(parent.UnsafePointer()))
	return newQPrintDialog(ret)
}

func (this *QPrintDialog) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QPrintDialog_MetaObject(this.h)))
}

func (this *QPrintDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QPrintDialog_Metacast(this.h, param1_Cstring)
}

func QPrintDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintDialog_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPrintDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPrintDialog) Exec() int {
	return (int)(C.QPrintDialog_Exec(this.h))
}

func (this *QPrintDialog) Accept() {
	C.QPrintDialog_Accept(this.h)
}

func (this *QPrintDialog) Done(result int) {
	C.QPrintDialog_Done(this.h, (C.int)(result))
}

func (this *QPrintDialog) SetOption(option QAbstractPrintDialog__PrintDialogOption) {
	C.QPrintDialog_SetOption(this.h, (C.int)(option))
}

func (this *QPrintDialog) TestOption(option QAbstractPrintDialog__PrintDialogOption) bool {
	return (bool)(C.QPrintDialog_TestOption(this.h, (C.int)(option)))
}

func (this *QPrintDialog) SetOptions(options QAbstractPrintDialog__PrintDialogOption) {
	C.QPrintDialog_SetOptions(this.h, (C.int)(options))
}

func (this *QPrintDialog) Options() QAbstractPrintDialog__PrintDialogOption {
	return (QAbstractPrintDialog__PrintDialogOption)(C.QPrintDialog_Options(this.h))
}

func (this *QPrintDialog) SetVisible(visible bool) {
	C.QPrintDialog_SetVisible(this.h, (C.bool)(visible))
}

func (this *QPrintDialog) Accepted(printer *QPrinter) {
	C.QPrintDialog_Accepted(this.h, printer.cPointer())
}
func (this *QPrintDialog) OnAccepted(slot func(printer *QPrinter)) {
	C.QPrintDialog_connect_Accepted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintDialog_Accepted
func miqt_exec_callback_QPrintDialog_Accepted(cb C.intptr_t, printer *C.QPrinter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(printer *QPrinter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPrinter(unsafe.Pointer(printer))

	gofunc(slotval1)
}

func QPrintDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPrintDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPrintDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPrintDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPrintDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPrintDialog) SetOption2(option QAbstractPrintDialog__PrintDialogOption, on bool) {
	C.QPrintDialog_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QPrintDialog) Delete() {
	C.QPrintDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrintDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrintDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
