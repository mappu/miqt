package qt

/*

#include "gen_qdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDialog__DialogCode int

const (
	QDialog__Rejected QDialog__DialogCode = 0
	QDialog__Accepted QDialog__DialogCode = 1
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

func (this *QDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQDialog(h *C.QDialog) *QDialog {
	if h == nil {
		return nil
	}
	return &QDialog{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQDialog(h unsafe.Pointer) *QDialog {
	return newQDialog((*C.QDialog)(h))
}

// NewQDialog constructs a new QDialog object.
func NewQDialog(parent *QWidget) *QDialog {
	ret := C.QDialog_new(parent.cPointer())
	return newQDialog(ret)
}

// NewQDialog2 constructs a new QDialog object.
func NewQDialog2() *QDialog {
	ret := C.QDialog_new2()
	return newQDialog(ret)
}

// NewQDialog3 constructs a new QDialog object.
func NewQDialog3(parent *QWidget, f WindowType) *QDialog {
	ret := C.QDialog_new3(parent.cPointer(), (C.int)(f))
	return newQDialog(ret)
}

func (this *QDialog) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDialog_MetaObject(this.h)))
}

func (this *QDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDialog_Metacast(this.h, param1_Cstring))
}

func QDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDialog) Result() int {
	return (int)(C.QDialog_Result(this.h))
}

func (this *QDialog) SetVisible(visible bool) {
	C.QDialog_SetVisible(this.h, (C.bool)(visible))
}

func (this *QDialog) SetOrientation(orientation Orientation) {
	C.QDialog_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QDialog) Orientation() Orientation {
	return (Orientation)(C.QDialog_Orientation(this.h))
}

func (this *QDialog) SetExtension(extension *QWidget) {
	C.QDialog_SetExtension(this.h, extension.cPointer())
}

func (this *QDialog) Extension() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QDialog_Extension(this.h)))
}

func (this *QDialog) SizeHint() *QSize {
	_ret := C.QDialog_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDialog) MinimumSizeHint() *QSize {
	_ret := C.QDialog_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDialog) SetSizeGripEnabled(sizeGripEnabled bool) {
	C.QDialog_SetSizeGripEnabled(this.h, (C.bool)(sizeGripEnabled))
}

func (this *QDialog) IsSizeGripEnabled() bool {
	return (bool)(C.QDialog_IsSizeGripEnabled(this.h))
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
func (this *QDialog) OnFinished(slot func(result int)) {
	C.QDialog_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialog_Finished
func miqt_exec_callback_QDialog_Finished(cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc(slotval1)
}

func (this *QDialog) Accepted() {
	C.QDialog_Accepted(this.h)
}
func (this *QDialog) OnAccepted(slot func()) {
	C.QDialog_connect_Accepted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialog_Accepted
func miqt_exec_callback_QDialog_Accepted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialog) Rejected() {
	C.QDialog_Rejected(this.h)
}
func (this *QDialog) OnRejected(slot func()) {
	C.QDialog_connect_Rejected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialog_Rejected
func miqt_exec_callback_QDialog_Rejected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialog) Open() {
	C.QDialog_Open(this.h)
}

func (this *QDialog) Exec() int {
	return (int)(C.QDialog_Exec(this.h))
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
	var _ms C.struct_miqt_string = C.QDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDialog) Delete() {
	C.QDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
