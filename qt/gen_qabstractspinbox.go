package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qabstractspinbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractSpinBox struct {
	h *C.QAbstractSpinBox
	*QWidget
}

func (this *QAbstractSpinBox) cPointer() *C.QAbstractSpinBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractSpinBox(h *C.QAbstractSpinBox) *QAbstractSpinBox {
	return &QAbstractSpinBox{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQAbstractSpinBox_U(h unsafe.Pointer) *QAbstractSpinBox {
	return newQAbstractSpinBox((*C.QAbstractSpinBox)(h))
}

// NewQAbstractSpinBox constructs a new QAbstractSpinBox object.
func NewQAbstractSpinBox() *QAbstractSpinBox {
	ret := C.QAbstractSpinBox_new()
	return newQAbstractSpinBox(ret)
}

// NewQAbstractSpinBox2 constructs a new QAbstractSpinBox object.
func NewQAbstractSpinBox2(parent *QWidget) *QAbstractSpinBox {
	ret := C.QAbstractSpinBox_new2(parent.cPointer())
	return newQAbstractSpinBox(ret)
}

func (this *QAbstractSpinBox) MetaObject() *QMetaObject {
	ret := C.QAbstractSpinBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSpinBox_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSpinBox_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractSpinBox) HasAcceptableInput() bool {
	ret := C.QAbstractSpinBox_HasAcceptableInput(this.h)
	return (bool)(ret)
}

func (this *QAbstractSpinBox) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSpinBox_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractSpinBox) SpecialValueText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSpinBox_SpecialValueText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractSpinBox) SetSpecialValueText(txt string) {
	txt_Cstring := C.CString(txt)
	defer C.free(unsafe.Pointer(txt_Cstring))
	C.QAbstractSpinBox_SetSpecialValueText(this.h, txt_Cstring, C.ulong(len(txt)))
}

func (this *QAbstractSpinBox) Wrapping() bool {
	ret := C.QAbstractSpinBox_Wrapping(this.h)
	return (bool)(ret)
}

func (this *QAbstractSpinBox) SetWrapping(w bool) {
	C.QAbstractSpinBox_SetWrapping(this.h, (C.bool)(w))
}

func (this *QAbstractSpinBox) SetReadOnly(r bool) {
	C.QAbstractSpinBox_SetReadOnly(this.h, (C.bool)(r))
}

func (this *QAbstractSpinBox) IsReadOnly() bool {
	ret := C.QAbstractSpinBox_IsReadOnly(this.h)
	return (bool)(ret)
}

func (this *QAbstractSpinBox) SetKeyboardTracking(kt bool) {
	C.QAbstractSpinBox_SetKeyboardTracking(this.h, (C.bool)(kt))
}

func (this *QAbstractSpinBox) KeyboardTracking() bool {
	ret := C.QAbstractSpinBox_KeyboardTracking(this.h)
	return (bool)(ret)
}

func (this *QAbstractSpinBox) SetFrame(frame bool) {
	C.QAbstractSpinBox_SetFrame(this.h, (C.bool)(frame))
}

func (this *QAbstractSpinBox) HasFrame() bool {
	ret := C.QAbstractSpinBox_HasFrame(this.h)
	return (bool)(ret)
}

func (this *QAbstractSpinBox) SetAccelerated(on bool) {
	C.QAbstractSpinBox_SetAccelerated(this.h, (C.bool)(on))
}

func (this *QAbstractSpinBox) IsAccelerated() bool {
	ret := C.QAbstractSpinBox_IsAccelerated(this.h)
	return (bool)(ret)
}

func (this *QAbstractSpinBox) SetGroupSeparatorShown(shown bool) {
	C.QAbstractSpinBox_SetGroupSeparatorShown(this.h, (C.bool)(shown))
}

func (this *QAbstractSpinBox) IsGroupSeparatorShown() bool {
	ret := C.QAbstractSpinBox_IsGroupSeparatorShown(this.h)
	return (bool)(ret)
}

func (this *QAbstractSpinBox) SizeHint() *QSize {
	ret := C.QAbstractSpinBox_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractSpinBox) MinimumSizeHint() *QSize {
	ret := C.QAbstractSpinBox_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractSpinBox) InterpretText() {
	C.QAbstractSpinBox_InterpretText(this.h)
}

func (this *QAbstractSpinBox) Event(event *QEvent) bool {
	ret := C.QAbstractSpinBox_Event(this.h, event.cPointer())
	return (bool)(ret)
}

func (this *QAbstractSpinBox) Fixup(input string) {
	input_Cstring := C.CString(input)
	defer C.free(unsafe.Pointer(input_Cstring))
	C.QAbstractSpinBox_Fixup(this.h, input_Cstring, C.ulong(len(input)))
}

func (this *QAbstractSpinBox) StepBy(steps int) {
	C.QAbstractSpinBox_StepBy(this.h, (C.int)(steps))
}

func (this *QAbstractSpinBox) StepUp() {
	C.QAbstractSpinBox_StepUp(this.h)
}

func (this *QAbstractSpinBox) StepDown() {
	C.QAbstractSpinBox_StepDown(this.h)
}

func (this *QAbstractSpinBox) SelectAll() {
	C.QAbstractSpinBox_SelectAll(this.h)
}

func (this *QAbstractSpinBox) Clear() {
	C.QAbstractSpinBox_Clear(this.h)
}

func (this *QAbstractSpinBox) EditingFinished() {
	C.QAbstractSpinBox_EditingFinished(this.h)
}

func (this *QAbstractSpinBox) OnEditingFinished(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractSpinBox_connect_EditingFinished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QAbstractSpinBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSpinBox_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSpinBox_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSpinBox_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSpinBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractSpinBox) Delete() {
	C.QAbstractSpinBox_Delete(this.h)
}
