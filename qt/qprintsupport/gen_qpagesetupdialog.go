package qprintsupport

/*

#include "gen_qpagesetupdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPageSetupDialog struct {
	h *C.QPageSetupDialog
	*qt.QDialog
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

func newQPageSetupDialog(h *C.QPageSetupDialog) *QPageSetupDialog {
	if h == nil {
		return nil
	}
	return &QPageSetupDialog{h: h, QDialog: qt.UnsafeNewQDialog(unsafe.Pointer(h))}
}

func UnsafeNewQPageSetupDialog(h unsafe.Pointer) *QPageSetupDialog {
	return newQPageSetupDialog((*C.QPageSetupDialog)(h))
}

// NewQPageSetupDialog constructs a new QPageSetupDialog object.
func NewQPageSetupDialog(printer *QPrinter) *QPageSetupDialog {
	ret := C.QPageSetupDialog_new(printer.cPointer())
	return newQPageSetupDialog(ret)
}

// NewQPageSetupDialog2 constructs a new QPageSetupDialog object.
func NewQPageSetupDialog2() *QPageSetupDialog {
	ret := C.QPageSetupDialog_new2()
	return newQPageSetupDialog(ret)
}

// NewQPageSetupDialog3 constructs a new QPageSetupDialog object.
func NewQPageSetupDialog3(printer *QPrinter, parent *qt.QWidget) *QPageSetupDialog {
	ret := C.QPageSetupDialog_new3(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer()))
	return newQPageSetupDialog(ret)
}

// NewQPageSetupDialog4 constructs a new QPageSetupDialog object.
func NewQPageSetupDialog4(parent *qt.QWidget) *QPageSetupDialog {
	ret := C.QPageSetupDialog_new4((*C.QWidget)(parent.UnsafePointer()))
	return newQPageSetupDialog(ret)
}

func (this *QPageSetupDialog) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QPageSetupDialog_MetaObject(this.h)))
}

func (this *QPageSetupDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPageSetupDialog_Metacast(this.h, param1_Cstring))
}

func QPageSetupDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageSetupDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPageSetupDialog) Exec() int {
	return (int)(C.QPageSetupDialog_Exec(this.h))
}

func (this *QPageSetupDialog) Done(result int) {
	C.QPageSetupDialog_Done(this.h, (C.int)(result))
}

func (this *QPageSetupDialog) Printer() *QPrinter {
	return UnsafeNewQPrinter(unsafe.Pointer(C.QPageSetupDialog_Printer(this.h)))
}

func QPageSetupDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageSetupDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageSetupDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageSetupDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPageSetupDialog) Delete() {
	C.QPageSetupDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPageSetupDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QPageSetupDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
