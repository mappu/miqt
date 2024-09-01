package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qprogressdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QProgressDialog struct {
	h *C.QProgressDialog
	*QDialog
}

func (this *QProgressDialog) cPointer() *C.QProgressDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func newQProgressDialog(h *C.QProgressDialog) *QProgressDialog {
	if h == nil {
		return nil
	}
	return &QProgressDialog{h: h, QDialog: newQDialog_U(unsafe.Pointer(h))}
}

func newQProgressDialog_U(h unsafe.Pointer) *QProgressDialog {
	return newQProgressDialog((*C.QProgressDialog)(h))
}

// NewQProgressDialog constructs a new QProgressDialog object.
func NewQProgressDialog() *QProgressDialog {
	ret := C.QProgressDialog_new()
	return newQProgressDialog(ret)
}

// NewQProgressDialog2 constructs a new QProgressDialog object.
func NewQProgressDialog2(labelText string, cancelButtonText string, minimum int, maximum int) *QProgressDialog {
	labelText_Cstring := C.CString(labelText)
	defer C.free(unsafe.Pointer(labelText_Cstring))
	cancelButtonText_Cstring := C.CString(cancelButtonText)
	defer C.free(unsafe.Pointer(cancelButtonText_Cstring))
	ret := C.QProgressDialog_new2(labelText_Cstring, C.ulong(len(labelText)), cancelButtonText_Cstring, C.ulong(len(cancelButtonText)), (C.int)(minimum), (C.int)(maximum))
	return newQProgressDialog(ret)
}

// NewQProgressDialog3 constructs a new QProgressDialog object.
func NewQProgressDialog3(parent *QWidget) *QProgressDialog {
	ret := C.QProgressDialog_new3(parent.cPointer())
	return newQProgressDialog(ret)
}

// NewQProgressDialog4 constructs a new QProgressDialog object.
func NewQProgressDialog4(parent *QWidget, flags int) *QProgressDialog {
	ret := C.QProgressDialog_new4(parent.cPointer(), (C.int)(flags))
	return newQProgressDialog(ret)
}

// NewQProgressDialog5 constructs a new QProgressDialog object.
func NewQProgressDialog5(labelText string, cancelButtonText string, minimum int, maximum int, parent *QWidget) *QProgressDialog {
	labelText_Cstring := C.CString(labelText)
	defer C.free(unsafe.Pointer(labelText_Cstring))
	cancelButtonText_Cstring := C.CString(cancelButtonText)
	defer C.free(unsafe.Pointer(cancelButtonText_Cstring))
	ret := C.QProgressDialog_new5(labelText_Cstring, C.ulong(len(labelText)), cancelButtonText_Cstring, C.ulong(len(cancelButtonText)), (C.int)(minimum), (C.int)(maximum), parent.cPointer())
	return newQProgressDialog(ret)
}

// NewQProgressDialog6 constructs a new QProgressDialog object.
func NewQProgressDialog6(labelText string, cancelButtonText string, minimum int, maximum int, parent *QWidget, flags int) *QProgressDialog {
	labelText_Cstring := C.CString(labelText)
	defer C.free(unsafe.Pointer(labelText_Cstring))
	cancelButtonText_Cstring := C.CString(cancelButtonText)
	defer C.free(unsafe.Pointer(cancelButtonText_Cstring))
	ret := C.QProgressDialog_new6(labelText_Cstring, C.ulong(len(labelText)), cancelButtonText_Cstring, C.ulong(len(cancelButtonText)), (C.int)(minimum), (C.int)(maximum), parent.cPointer(), (C.int)(flags))
	return newQProgressDialog(ret)
}

func (this *QProgressDialog) MetaObject() *QMetaObject {
	ret := C.QProgressDialog_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QProgressDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressDialog_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProgressDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressDialog_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProgressDialog) SetLabel(label *QLabel) {
	C.QProgressDialog_SetLabel(this.h, label.cPointer())
}

func (this *QProgressDialog) SetCancelButton(button *QPushButton) {
	C.QProgressDialog_SetCancelButton(this.h, button.cPointer())
}

func (this *QProgressDialog) SetBar(bar *QProgressBar) {
	C.QProgressDialog_SetBar(this.h, bar.cPointer())
}

func (this *QProgressDialog) WasCanceled() bool {
	ret := C.QProgressDialog_WasCanceled(this.h)
	return (bool)(ret)
}

func (this *QProgressDialog) Minimum() int {
	ret := C.QProgressDialog_Minimum(this.h)
	return (int)(ret)
}

func (this *QProgressDialog) Maximum() int {
	ret := C.QProgressDialog_Maximum(this.h)
	return (int)(ret)
}

func (this *QProgressDialog) Value() int {
	ret := C.QProgressDialog_Value(this.h)
	return (int)(ret)
}

func (this *QProgressDialog) SizeHint() *QSize {
	ret := C.QProgressDialog_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProgressDialog) LabelText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressDialog_LabelText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProgressDialog) MinimumDuration() int {
	ret := C.QProgressDialog_MinimumDuration(this.h)
	return (int)(ret)
}

func (this *QProgressDialog) SetAutoReset(reset bool) {
	C.QProgressDialog_SetAutoReset(this.h, (C.bool)(reset))
}

func (this *QProgressDialog) AutoReset() bool {
	ret := C.QProgressDialog_AutoReset(this.h)
	return (bool)(ret)
}

func (this *QProgressDialog) SetAutoClose(close bool) {
	C.QProgressDialog_SetAutoClose(this.h, (C.bool)(close))
}

func (this *QProgressDialog) AutoClose() bool {
	ret := C.QProgressDialog_AutoClose(this.h)
	return (bool)(ret)
}

func (this *QProgressDialog) Cancel() {
	C.QProgressDialog_Cancel(this.h)
}

func (this *QProgressDialog) Reset() {
	C.QProgressDialog_Reset(this.h)
}

func (this *QProgressDialog) SetMaximum(maximum int) {
	C.QProgressDialog_SetMaximum(this.h, (C.int)(maximum))
}

func (this *QProgressDialog) SetMinimum(minimum int) {
	C.QProgressDialog_SetMinimum(this.h, (C.int)(minimum))
}

func (this *QProgressDialog) SetRange(minimum int, maximum int) {
	C.QProgressDialog_SetRange(this.h, (C.int)(minimum), (C.int)(maximum))
}

func (this *QProgressDialog) SetValue(progress int) {
	C.QProgressDialog_SetValue(this.h, (C.int)(progress))
}

func (this *QProgressDialog) SetLabelText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QProgressDialog_SetLabelText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QProgressDialog) SetCancelButtonText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QProgressDialog_SetCancelButtonText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QProgressDialog) SetMinimumDuration(ms int) {
	C.QProgressDialog_SetMinimumDuration(this.h, (C.int)(ms))
}

func (this *QProgressDialog) Canceled() {
	C.QProgressDialog_Canceled(this.h)
}

func (this *QProgressDialog) OnCanceled(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QProgressDialog_connect_Canceled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QProgressDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressDialog_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProgressDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProgressDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressDialog_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProgressDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProgressDialog) Delete() {
	C.QProgressDialog_Delete(this.h)
}
