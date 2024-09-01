package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qspinbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QSpinBox struct {
	h *C.QSpinBox
	*QAbstractSpinBox
}

func (this *QSpinBox) cPointer() *C.QSpinBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSpinBox(h *C.QSpinBox) *QSpinBox {
	if h == nil {
		return nil
	}
	return &QSpinBox{h: h, QAbstractSpinBox: newQAbstractSpinBox_U(unsafe.Pointer(h))}
}

func newQSpinBox_U(h unsafe.Pointer) *QSpinBox {
	return newQSpinBox((*C.QSpinBox)(h))
}

// NewQSpinBox constructs a new QSpinBox object.
func NewQSpinBox() *QSpinBox {
	ret := C.QSpinBox_new()
	return newQSpinBox(ret)
}

// NewQSpinBox2 constructs a new QSpinBox object.
func NewQSpinBox2(parent *QWidget) *QSpinBox {
	ret := C.QSpinBox_new2(parent.cPointer())
	return newQSpinBox(ret)
}

func (this *QSpinBox) MetaObject() *QMetaObject {
	ret := C.QSpinBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSpinBox_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSpinBox_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSpinBox) Value() int {
	ret := C.QSpinBox_Value(this.h)
	return (int)(ret)
}

func (this *QSpinBox) Prefix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSpinBox_Prefix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSpinBox) SetPrefix(prefix string) {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	C.QSpinBox_SetPrefix(this.h, prefix_Cstring, C.ulong(len(prefix)))
}

func (this *QSpinBox) Suffix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSpinBox_Suffix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSpinBox) SetSuffix(suffix string) {
	suffix_Cstring := C.CString(suffix)
	defer C.free(unsafe.Pointer(suffix_Cstring))
	C.QSpinBox_SetSuffix(this.h, suffix_Cstring, C.ulong(len(suffix)))
}

func (this *QSpinBox) CleanText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSpinBox_CleanText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSpinBox) SingleStep() int {
	ret := C.QSpinBox_SingleStep(this.h)
	return (int)(ret)
}

func (this *QSpinBox) SetSingleStep(val int) {
	C.QSpinBox_SetSingleStep(this.h, (C.int)(val))
}

func (this *QSpinBox) Minimum() int {
	ret := C.QSpinBox_Minimum(this.h)
	return (int)(ret)
}

func (this *QSpinBox) SetMinimum(min int) {
	C.QSpinBox_SetMinimum(this.h, (C.int)(min))
}

func (this *QSpinBox) Maximum() int {
	ret := C.QSpinBox_Maximum(this.h)
	return (int)(ret)
}

func (this *QSpinBox) SetMaximum(max int) {
	C.QSpinBox_SetMaximum(this.h, (C.int)(max))
}

func (this *QSpinBox) SetRange(min int, max int) {
	C.QSpinBox_SetRange(this.h, (C.int)(min), (C.int)(max))
}

func (this *QSpinBox) StepType() uintptr {
	ret := C.QSpinBox_StepType(this.h)
	return (uintptr)(ret)
}

func (this *QSpinBox) SetStepType(stepType uintptr) {
	C.QSpinBox_SetStepType(this.h, (C.uintptr_t)(stepType))
}

func (this *QSpinBox) DisplayIntegerBase() int {
	ret := C.QSpinBox_DisplayIntegerBase(this.h)
	return (int)(ret)
}

func (this *QSpinBox) SetDisplayIntegerBase(base int) {
	C.QSpinBox_SetDisplayIntegerBase(this.h, (C.int)(base))
}

func (this *QSpinBox) SetValue(val int) {
	C.QSpinBox_SetValue(this.h, (C.int)(val))
}

func (this *QSpinBox) ValueChanged(param1 int) {
	C.QSpinBox_ValueChanged(this.h, (C.int)(param1))
}

func (this *QSpinBox) OnValueChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSpinBox_connect_ValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSpinBox) TextChanged(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QSpinBox_TextChanged(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QSpinBox) OnTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSpinBox_connect_TextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSpinBox) ValueChangedWithQString(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QSpinBox_ValueChangedWithQString(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QSpinBox) OnValueChangedWithQString(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSpinBox_connect_ValueChangedWithQString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QSpinBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSpinBox_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSpinBox_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSpinBox_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSpinBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSpinBox) Delete() {
	C.QSpinBox_Delete(this.h)
}

type QDoubleSpinBox struct {
	h *C.QDoubleSpinBox
	*QAbstractSpinBox
}

func (this *QDoubleSpinBox) cPointer() *C.QDoubleSpinBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDoubleSpinBox(h *C.QDoubleSpinBox) *QDoubleSpinBox {
	if h == nil {
		return nil
	}
	return &QDoubleSpinBox{h: h, QAbstractSpinBox: newQAbstractSpinBox_U(unsafe.Pointer(h))}
}

func newQDoubleSpinBox_U(h unsafe.Pointer) *QDoubleSpinBox {
	return newQDoubleSpinBox((*C.QDoubleSpinBox)(h))
}

// NewQDoubleSpinBox constructs a new QDoubleSpinBox object.
func NewQDoubleSpinBox() *QDoubleSpinBox {
	ret := C.QDoubleSpinBox_new()
	return newQDoubleSpinBox(ret)
}

// NewQDoubleSpinBox2 constructs a new QDoubleSpinBox object.
func NewQDoubleSpinBox2(parent *QWidget) *QDoubleSpinBox {
	ret := C.QDoubleSpinBox_new2(parent.cPointer())
	return newQDoubleSpinBox(ret)
}

func (this *QDoubleSpinBox) MetaObject() *QMetaObject {
	ret := C.QDoubleSpinBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDoubleSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDoubleSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDoubleSpinBox) Value() float64 {
	ret := C.QDoubleSpinBox_Value(this.h)
	return (float64)(ret)
}

func (this *QDoubleSpinBox) Prefix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_Prefix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDoubleSpinBox) SetPrefix(prefix string) {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	C.QDoubleSpinBox_SetPrefix(this.h, prefix_Cstring, C.ulong(len(prefix)))
}

func (this *QDoubleSpinBox) Suffix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_Suffix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDoubleSpinBox) SetSuffix(suffix string) {
	suffix_Cstring := C.CString(suffix)
	defer C.free(unsafe.Pointer(suffix_Cstring))
	C.QDoubleSpinBox_SetSuffix(this.h, suffix_Cstring, C.ulong(len(suffix)))
}

func (this *QDoubleSpinBox) CleanText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_CleanText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDoubleSpinBox) SingleStep() float64 {
	ret := C.QDoubleSpinBox_SingleStep(this.h)
	return (float64)(ret)
}

func (this *QDoubleSpinBox) SetSingleStep(val float64) {
	C.QDoubleSpinBox_SetSingleStep(this.h, (C.double)(val))
}

func (this *QDoubleSpinBox) Minimum() float64 {
	ret := C.QDoubleSpinBox_Minimum(this.h)
	return (float64)(ret)
}

func (this *QDoubleSpinBox) SetMinimum(min float64) {
	C.QDoubleSpinBox_SetMinimum(this.h, (C.double)(min))
}

func (this *QDoubleSpinBox) Maximum() float64 {
	ret := C.QDoubleSpinBox_Maximum(this.h)
	return (float64)(ret)
}

func (this *QDoubleSpinBox) SetMaximum(max float64) {
	C.QDoubleSpinBox_SetMaximum(this.h, (C.double)(max))
}

func (this *QDoubleSpinBox) SetRange(min float64, max float64) {
	C.QDoubleSpinBox_SetRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QDoubleSpinBox) StepType() uintptr {
	ret := C.QDoubleSpinBox_StepType(this.h)
	return (uintptr)(ret)
}

func (this *QDoubleSpinBox) SetStepType(stepType uintptr) {
	C.QDoubleSpinBox_SetStepType(this.h, (C.uintptr_t)(stepType))
}

func (this *QDoubleSpinBox) Decimals() int {
	ret := C.QDoubleSpinBox_Decimals(this.h)
	return (int)(ret)
}

func (this *QDoubleSpinBox) SetDecimals(prec int) {
	C.QDoubleSpinBox_SetDecimals(this.h, (C.int)(prec))
}

func (this *QDoubleSpinBox) Validate(input string, pos *int) uintptr {
	input_Cstring := C.CString(input)
	defer C.free(unsafe.Pointer(input_Cstring))
	ret := C.QDoubleSpinBox_Validate(this.h, input_Cstring, C.ulong(len(input)), (*C.int)(unsafe.Pointer(pos)))
	return (uintptr)(ret)
}

func (this *QDoubleSpinBox) ValueFromText(text string) float64 {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QDoubleSpinBox_ValueFromText(this.h, text_Cstring, C.ulong(len(text)))
	return (float64)(ret)
}

func (this *QDoubleSpinBox) TextFromValue(val float64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_TextFromValue(this.h, (C.double)(val), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDoubleSpinBox) Fixup(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QDoubleSpinBox_Fixup(this.h, str_Cstring, C.ulong(len(str)))
}

func (this *QDoubleSpinBox) SetValue(val float64) {
	C.QDoubleSpinBox_SetValue(this.h, (C.double)(val))
}

func (this *QDoubleSpinBox) ValueChanged(param1 float64) {
	C.QDoubleSpinBox_ValueChanged(this.h, (C.double)(param1))
}

func (this *QDoubleSpinBox) OnValueChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDoubleSpinBox_connect_ValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDoubleSpinBox) TextChanged(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QDoubleSpinBox_TextChanged(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QDoubleSpinBox) OnTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDoubleSpinBox_connect_TextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDoubleSpinBox) ValueChangedWithQString(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QDoubleSpinBox_ValueChangedWithQString(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QDoubleSpinBox) OnValueChangedWithQString(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDoubleSpinBox_connect_ValueChangedWithQString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QDoubleSpinBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDoubleSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDoubleSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDoubleSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDoubleSpinBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDoubleSpinBox) Delete() {
	C.QDoubleSpinBox_Delete(this.h)
}
