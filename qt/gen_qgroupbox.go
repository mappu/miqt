package qt

/*

#include "gen_qgroupbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGroupBox struct {
	h *C.QGroupBox
	*QWidget
}

func (this *QGroupBox) cPointer() *C.QGroupBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGroupBox(h *C.QGroupBox) *QGroupBox {
	if h == nil {
		return nil
	}
	return &QGroupBox{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQGroupBox_U(h unsafe.Pointer) *QGroupBox {
	return newQGroupBox((*C.QGroupBox)(h))
}

// NewQGroupBox constructs a new QGroupBox object.
func NewQGroupBox() *QGroupBox {
	ret := C.QGroupBox_new()
	return newQGroupBox(ret)
}

// NewQGroupBox2 constructs a new QGroupBox object.
func NewQGroupBox2(title string) *QGroupBox {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	ret := C.QGroupBox_new2((*C.struct_miqt_string)(title_ms))
	return newQGroupBox(ret)
}

// NewQGroupBox3 constructs a new QGroupBox object.
func NewQGroupBox3(parent *QWidget) *QGroupBox {
	ret := C.QGroupBox_new3(parent.cPointer())
	return newQGroupBox(ret)
}

// NewQGroupBox4 constructs a new QGroupBox object.
func NewQGroupBox4(title string, parent *QWidget) *QGroupBox {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	ret := C.QGroupBox_new4((*C.struct_miqt_string)(title_ms), parent.cPointer())
	return newQGroupBox(ret)
}

func (this *QGroupBox) MetaObject() *QMetaObject {
	_ret := C.QGroupBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QGroupBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGroupBox_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGroupBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGroupBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGroupBox) Title() string {
	var _ms *C.struct_miqt_string = C.QGroupBox_Title(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGroupBox) SetTitle(title string) {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	C.QGroupBox_SetTitle(this.h, (*C.struct_miqt_string)(title_ms))
}

func (this *QGroupBox) Alignment() int {
	_ret := C.QGroupBox_Alignment(this.h)
	return (int)(_ret)
}

func (this *QGroupBox) SetAlignment(alignment int) {
	C.QGroupBox_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QGroupBox) MinimumSizeHint() *QSize {
	_ret := C.QGroupBox_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGroupBox) IsFlat() bool {
	_ret := C.QGroupBox_IsFlat(this.h)
	return (bool)(_ret)
}

func (this *QGroupBox) SetFlat(flat bool) {
	C.QGroupBox_SetFlat(this.h, (C.bool)(flat))
}

func (this *QGroupBox) IsCheckable() bool {
	_ret := C.QGroupBox_IsCheckable(this.h)
	return (bool)(_ret)
}

func (this *QGroupBox) SetCheckable(checkable bool) {
	C.QGroupBox_SetCheckable(this.h, (C.bool)(checkable))
}

func (this *QGroupBox) IsChecked() bool {
	_ret := C.QGroupBox_IsChecked(this.h)
	return (bool)(_ret)
}

func (this *QGroupBox) SetChecked(checked bool) {
	C.QGroupBox_SetChecked(this.h, (C.bool)(checked))
}

func (this *QGroupBox) Clicked() {
	C.QGroupBox_Clicked(this.h)
}
func (this *QGroupBox) OnClicked(slot func()) {
	C.QGroupBox_connect_Clicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGroupBox_Clicked
func miqt_exec_callback_QGroupBox_Clicked(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGroupBox) Toggled(param1 bool) {
	C.QGroupBox_Toggled(this.h, (C.bool)(param1))
}
func (this *QGroupBox) OnToggled(slot func(param1 bool)) {
	C.QGroupBox_connect_Toggled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGroupBox_Toggled
func miqt_exec_callback_QGroupBox_Toggled(cb *C.void, param1 C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := (bool)(param1_ret)

	gofunc(slotval1)
}

func QGroupBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGroupBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGroupBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGroupBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGroupBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGroupBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGroupBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGroupBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGroupBox) Clicked1(checked bool) {
	C.QGroupBox_Clicked1(this.h, (C.bool)(checked))
}
func (this *QGroupBox) OnClicked1(slot func(checked bool)) {
	C.QGroupBox_connect_Clicked1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGroupBox_Clicked1
func miqt_exec_callback_QGroupBox_Clicked1(cb *C.void, checked C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	checked_ret := checked
	slotval1 := (bool)(checked_ret)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QGroupBox) Delete() {
	C.QGroupBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGroupBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QGroupBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
