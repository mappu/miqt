package qt

/*

#include "gen_qprogressbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QProgressBar__Direction int

const (
	QProgressBar__Direction__TopToBottom QProgressBar__Direction = 0
	QProgressBar__Direction__BottomToTop QProgressBar__Direction = 1
)

type QProgressBar struct {
	h *C.QProgressBar
	*QWidget
}

func (this *QProgressBar) cPointer() *C.QProgressBar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQProgressBar(h *C.QProgressBar) *QProgressBar {
	if h == nil {
		return nil
	}
	return &QProgressBar{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQProgressBar_U(h unsafe.Pointer) *QProgressBar {
	return newQProgressBar((*C.QProgressBar)(h))
}

// NewQProgressBar constructs a new QProgressBar object.
func NewQProgressBar() *QProgressBar {
	ret := C.QProgressBar_new()
	return newQProgressBar(ret)
}

// NewQProgressBar2 constructs a new QProgressBar object.
func NewQProgressBar2(parent *QWidget) *QProgressBar {
	ret := C.QProgressBar_new2(parent.cPointer())
	return newQProgressBar(ret)
}

func (this *QProgressBar) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QProgressBar_MetaObject(this.h)))
}

func QProgressBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QProgressBar_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QProgressBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QProgressBar_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QProgressBar) Minimum() int {
	return (int)(C.QProgressBar_Minimum(this.h))
}

func (this *QProgressBar) Maximum() int {
	return (int)(C.QProgressBar_Maximum(this.h))
}

func (this *QProgressBar) Value() int {
	return (int)(C.QProgressBar_Value(this.h))
}

func (this *QProgressBar) Text() string {
	var _ms *C.struct_miqt_string = C.QProgressBar_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QProgressBar) SetTextVisible(visible bool) {
	C.QProgressBar_SetTextVisible(this.h, (C.bool)(visible))
}

func (this *QProgressBar) IsTextVisible() bool {
	return (bool)(C.QProgressBar_IsTextVisible(this.h))
}

func (this *QProgressBar) Alignment() int {
	return (int)(C.QProgressBar_Alignment(this.h))
}

func (this *QProgressBar) SetAlignment(alignment int) {
	C.QProgressBar_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QProgressBar) SizeHint() *QSize {
	_ret := C.QProgressBar_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProgressBar) MinimumSizeHint() *QSize {
	_ret := C.QProgressBar_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProgressBar) Orientation() Orientation {
	return (Orientation)(C.QProgressBar_Orientation(this.h))
}

func (this *QProgressBar) SetInvertedAppearance(invert bool) {
	C.QProgressBar_SetInvertedAppearance(this.h, (C.bool)(invert))
}

func (this *QProgressBar) InvertedAppearance() bool {
	return (bool)(C.QProgressBar_InvertedAppearance(this.h))
}

func (this *QProgressBar) SetTextDirection(textDirection QProgressBar__Direction) {
	C.QProgressBar_SetTextDirection(this.h, (C.uintptr_t)(textDirection))
}

func (this *QProgressBar) TextDirection() QProgressBar__Direction {
	return (QProgressBar__Direction)(C.QProgressBar_TextDirection(this.h))
}

func (this *QProgressBar) SetFormat(format string) {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	C.QProgressBar_SetFormat(this.h, (*C.struct_miqt_string)(format_ms))
}

func (this *QProgressBar) ResetFormat() {
	C.QProgressBar_ResetFormat(this.h)
}

func (this *QProgressBar) Format() string {
	var _ms *C.struct_miqt_string = C.QProgressBar_Format(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QProgressBar) Reset() {
	C.QProgressBar_Reset(this.h)
}

func (this *QProgressBar) SetRange(minimum int, maximum int) {
	C.QProgressBar_SetRange(this.h, (C.int)(minimum), (C.int)(maximum))
}

func (this *QProgressBar) SetMinimum(minimum int) {
	C.QProgressBar_SetMinimum(this.h, (C.int)(minimum))
}

func (this *QProgressBar) SetMaximum(maximum int) {
	C.QProgressBar_SetMaximum(this.h, (C.int)(maximum))
}

func (this *QProgressBar) SetValue(value int) {
	C.QProgressBar_SetValue(this.h, (C.int)(value))
}

func (this *QProgressBar) SetOrientation(orientation Orientation) {
	C.QProgressBar_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QProgressBar) ValueChanged(value int) {
	C.QProgressBar_ValueChanged(this.h, (C.int)(value))
}
func (this *QProgressBar) OnValueChanged(slot func(value int)) {
	C.QProgressBar_connect_ValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QProgressBar_ValueChanged
func miqt_exec_callback_QProgressBar_ValueChanged(cb *C.void, value C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func QProgressBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QProgressBar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QProgressBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QProgressBar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QProgressBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QProgressBar_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QProgressBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QProgressBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QProgressBar) Delete() {
	C.QProgressBar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProgressBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QProgressBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
