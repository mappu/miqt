package printsupport

/*

#include "gen_qprintdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPrintDialog struct {
	h          *C.QPrintDialog
	isSubclass bool
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

// newQPrintDialog constructs the type using only CGO pointers.
func newQPrintDialog(h *C.QPrintDialog, h_QAbstractPrintDialog *C.QAbstractPrintDialog, h_QDialog *C.QDialog, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QPrintDialog {
	if h == nil {
		return nil
	}
	return &QPrintDialog{h: h,
		QAbstractPrintDialog: newQAbstractPrintDialog(h_QAbstractPrintDialog, h_QDialog, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQPrintDialog constructs the type using only unsafe pointers.
func UnsafeNewQPrintDialog(h unsafe.Pointer, h_QAbstractPrintDialog unsafe.Pointer, h_QDialog unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QPrintDialog {
	if h == nil {
		return nil
	}

	return &QPrintDialog{h: (*C.QPrintDialog)(h),
		QAbstractPrintDialog: UnsafeNewQAbstractPrintDialog(h_QAbstractPrintDialog, h_QDialog, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQPrintDialog constructs a new QPrintDialog object.
func NewQPrintDialog(parent *qt6.QWidget) *QPrintDialog {
	var outptr_QPrintDialog *C.QPrintDialog = nil
	var outptr_QAbstractPrintDialog *C.QAbstractPrintDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPrintDialog_new((*C.QWidget)(parent.UnsafePointer()), &outptr_QPrintDialog, &outptr_QAbstractPrintDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQPrintDialog(outptr_QPrintDialog, outptr_QAbstractPrintDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPrintDialog2 constructs a new QPrintDialog object.
func NewQPrintDialog2(printer *QPrinter) *QPrintDialog {
	var outptr_QPrintDialog *C.QPrintDialog = nil
	var outptr_QAbstractPrintDialog *C.QAbstractPrintDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPrintDialog_new2(printer.cPointer(), &outptr_QPrintDialog, &outptr_QAbstractPrintDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQPrintDialog(outptr_QPrintDialog, outptr_QAbstractPrintDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPrintDialog3 constructs a new QPrintDialog object.
func NewQPrintDialog3() *QPrintDialog {
	var outptr_QPrintDialog *C.QPrintDialog = nil
	var outptr_QAbstractPrintDialog *C.QAbstractPrintDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPrintDialog_new3(&outptr_QPrintDialog, &outptr_QAbstractPrintDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQPrintDialog(outptr_QPrintDialog, outptr_QAbstractPrintDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPrintDialog4 constructs a new QPrintDialog object.
func NewQPrintDialog4(printer *QPrinter, parent *qt6.QWidget) *QPrintDialog {
	var outptr_QPrintDialog *C.QPrintDialog = nil
	var outptr_QAbstractPrintDialog *C.QAbstractPrintDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPrintDialog_new4(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer()), &outptr_QPrintDialog, &outptr_QAbstractPrintDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQPrintDialog(outptr_QPrintDialog, outptr_QAbstractPrintDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QPrintDialog) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPrintDialog_MetaObject(this.h)))
}

func (this *QPrintDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPrintDialog_Metacast(this.h, param1_Cstring))
}

func QPrintDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPrintDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	slotval1 := UnsafeNewQPrinter(unsafe.Pointer(printer), nil, nil)

	gofunc(slotval1)
}

func QPrintDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPrintDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPrintDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPrintDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrintDialog) SetOption2(option QAbstractPrintDialog__PrintDialogOption, on bool) {
	C.QPrintDialog_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

func (this *QPrintDialog) callVirtualBase_Exec() int {

	return (int)(C.QPrintDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QPrintDialog) OnExec(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPrintDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintDialog_Exec
func miqt_exec_callback_QPrintDialog_Exec(self *C.QPrintDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QPrintDialog) callVirtualBase_Accept() {

	C.QPrintDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QPrintDialog) OnAccept(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPrintDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintDialog_Accept
func miqt_exec_callback_QPrintDialog_Accept(self *C.QPrintDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPrintDialog{h: self}).callVirtualBase_Accept)

}

func (this *QPrintDialog) callVirtualBase_Done(result int) {

	C.QPrintDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QPrintDialog) OnDone(slot func(super func(result int), result int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPrintDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintDialog_Done
func miqt_exec_callback_QPrintDialog_Done(self *C.QPrintDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QPrintDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QPrintDialog) callVirtualBase_SetVisible(visible bool) {

	C.QPrintDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPrintDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPrintDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintDialog_SetVisible
func miqt_exec_callback_QPrintDialog_SetVisible(self *C.QPrintDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPrintDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

// Delete this object from C++ memory.
func (this *QPrintDialog) Delete() {
	C.QPrintDialog_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrintDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrintDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
