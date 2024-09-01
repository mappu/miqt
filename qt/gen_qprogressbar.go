package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qprogressbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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
	ret := C.QProgressBar_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QProgressBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressBar_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProgressBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressBar_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProgressBar) Minimum() int {
	ret := C.QProgressBar_Minimum(this.h)
	return (int)(ret)
}

func (this *QProgressBar) Maximum() int {
	ret := C.QProgressBar_Maximum(this.h)
	return (int)(ret)
}

func (this *QProgressBar) Value() int {
	ret := C.QProgressBar_Value(this.h)
	return (int)(ret)
}

func (this *QProgressBar) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressBar_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProgressBar) SetTextVisible(visible bool) {
	C.QProgressBar_SetTextVisible(this.h, (C.bool)(visible))
}

func (this *QProgressBar) IsTextVisible() bool {
	ret := C.QProgressBar_IsTextVisible(this.h)
	return (bool)(ret)
}

func (this *QProgressBar) Alignment() int {
	ret := C.QProgressBar_Alignment(this.h)
	return (int)(ret)
}

func (this *QProgressBar) SetAlignment(alignment int) {
	C.QProgressBar_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QProgressBar) SizeHint() *QSize {
	ret := C.QProgressBar_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProgressBar) MinimumSizeHint() *QSize {
	ret := C.QProgressBar_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProgressBar) Orientation() uintptr {
	ret := C.QProgressBar_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QProgressBar) SetInvertedAppearance(invert bool) {
	C.QProgressBar_SetInvertedAppearance(this.h, (C.bool)(invert))
}

func (this *QProgressBar) InvertedAppearance() bool {
	ret := C.QProgressBar_InvertedAppearance(this.h)
	return (bool)(ret)
}

func (this *QProgressBar) SetTextDirection(textDirection uintptr) {
	C.QProgressBar_SetTextDirection(this.h, (C.uintptr_t)(textDirection))
}

func (this *QProgressBar) TextDirection() uintptr {
	ret := C.QProgressBar_TextDirection(this.h)
	return (uintptr)(ret)
}

func (this *QProgressBar) SetFormat(format string) {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	C.QProgressBar_SetFormat(this.h, format_Cstring, C.ulong(len(format)))
}

func (this *QProgressBar) ResetFormat() {
	C.QProgressBar_ResetFormat(this.h)
}

func (this *QProgressBar) Format() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressBar_Format(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
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

func (this *QProgressBar) SetOrientation(orientation uintptr) {
	C.QProgressBar_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QProgressBar) ValueChanged(value int) {
	C.QProgressBar_ValueChanged(this.h, (C.int)(value))
}

func (this *QProgressBar) OnValueChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QProgressBar_connect_ValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QProgressBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressBar_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProgressBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressBar_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProgressBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressBar_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProgressBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProgressBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProgressBar) Delete() {
	C.QProgressBar_Delete(this.h)
}
