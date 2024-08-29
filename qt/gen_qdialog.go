package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDialog struct {
	h *C.QDialog
	*QWidget
}

func (this *QDialog) cPointer() *C.QDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDialog(h *C.QDialog) *QDialog {
	return &QDialog{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQDialog_U(h unsafe.Pointer) *QDialog {
	return newQDialog((*C.QDialog)(h))
}

// NewQDialog constructs a new QDialog object.
func NewQDialog() *QDialog {
	ret := C.QDialog_new()
	return newQDialog(ret)
}

// NewQDialog2 constructs a new QDialog object.
func NewQDialog2(parent *QWidget) *QDialog {
	ret := C.QDialog_new2(parent.cPointer())
	return newQDialog(ret)
}

// NewQDialog3 constructs a new QDialog object.
func NewQDialog3(parent *QWidget, f int) *QDialog {
	ret := C.QDialog_new3(parent.cPointer(), (C.int)(f))
	return newQDialog(ret)
}

func (this *QDialog) MetaObject() *QMetaObject {
	ret := C.QDialog_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialog_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialog_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDialog) Result() int {
	ret := C.QDialog_Result(this.h)
	return (int)(ret)
}

func (this *QDialog) SetVisible(visible bool) {
	C.QDialog_SetVisible(this.h, (C.bool)(visible))
}

func (this *QDialog) SetOrientation(orientation uintptr) {
	C.QDialog_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QDialog) Orientation() uintptr {
	ret := C.QDialog_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QDialog) SetExtension(extension *QWidget) {
	C.QDialog_SetExtension(this.h, extension.cPointer())
}

func (this *QDialog) Extension() *QWidget {
	ret := C.QDialog_Extension(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QDialog) SizeHint() *QSize {
	ret := C.QDialog_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDialog) MinimumSizeHint() *QSize {
	ret := C.QDialog_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDialog) SetSizeGripEnabled(sizeGripEnabled bool) {
	C.QDialog_SetSizeGripEnabled(this.h, (C.bool)(sizeGripEnabled))
}

func (this *QDialog) IsSizeGripEnabled() bool {
	ret := C.QDialog_IsSizeGripEnabled(this.h)
	return (bool)(ret)
}

func (this *QDialog) SetModal(modal bool) {
	C.QDialog_SetModal(this.h, (C.bool)(modal))
}

func (this *QDialog) SetResult(r int) {
	C.QDialog_SetResult(this.h, (C.int)(r))
}

func (this *QDialog) Finished(result int) {
	C.QDialog_Finished(this.h, (C.int)(result))
}

func (this *QDialog) OnFinished(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDialog_connect_Finished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDialog) Accepted() {
	C.QDialog_Accepted(this.h)
}

func (this *QDialog) OnAccepted(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDialog_connect_Accepted(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDialog) Rejected() {
	C.QDialog_Rejected(this.h)
}

func (this *QDialog) OnRejected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDialog_connect_Rejected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDialog) Open() {
	C.QDialog_Open(this.h)
}

func (this *QDialog) Exec() int {
	ret := C.QDialog_Exec(this.h)
	return (int)(ret)
}

func (this *QDialog) Done(param1 int) {
	C.QDialog_Done(this.h, (C.int)(param1))
}

func (this *QDialog) Accept() {
	C.QDialog_Accept(this.h)
}

func (this *QDialog) Reject() {
	C.QDialog_Reject(this.h)
}

func (this *QDialog) ShowExtension(param1 bool) {
	C.QDialog_ShowExtension(this.h, (C.bool)(param1))
}

func QDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialog_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialog_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDialog) Delete() {
	C.QDialog_Delete(this.h)
}
