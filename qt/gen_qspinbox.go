package qt

/*

#include "gen_qspinbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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
	return newQMetaObject_U(unsafe.Pointer(C.QSpinBox_MetaObject(this.h)))
}

func (this *QSpinBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSpinBox_Metacast(this.h, param1_Cstring)
}

func QSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSpinBox_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSpinBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSpinBox) Value() int {
	return (int)(C.QSpinBox_Value(this.h))
}

func (this *QSpinBox) Prefix() string {
	var _ms *C.struct_miqt_string = C.QSpinBox_Prefix(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSpinBox) SetPrefix(prefix string) {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	C.QSpinBox_SetPrefix(this.h, (*C.struct_miqt_string)(prefix_ms))
}

func (this *QSpinBox) Suffix() string {
	var _ms *C.struct_miqt_string = C.QSpinBox_Suffix(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSpinBox) SetSuffix(suffix string) {
	suffix_ms := miqt_strdupg(suffix)
	defer C.free(suffix_ms)
	C.QSpinBox_SetSuffix(this.h, (*C.struct_miqt_string)(suffix_ms))
}

func (this *QSpinBox) CleanText() string {
	var _ms *C.struct_miqt_string = C.QSpinBox_CleanText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSpinBox) SingleStep() int {
	return (int)(C.QSpinBox_SingleStep(this.h))
}

func (this *QSpinBox) SetSingleStep(val int) {
	C.QSpinBox_SetSingleStep(this.h, (C.int)(val))
}

func (this *QSpinBox) Minimum() int {
	return (int)(C.QSpinBox_Minimum(this.h))
}

func (this *QSpinBox) SetMinimum(min int) {
	C.QSpinBox_SetMinimum(this.h, (C.int)(min))
}

func (this *QSpinBox) Maximum() int {
	return (int)(C.QSpinBox_Maximum(this.h))
}

func (this *QSpinBox) SetMaximum(max int) {
	C.QSpinBox_SetMaximum(this.h, (C.int)(max))
}

func (this *QSpinBox) SetRange(min int, max int) {
	C.QSpinBox_SetRange(this.h, (C.int)(min), (C.int)(max))
}

func (this *QSpinBox) StepType() QAbstractSpinBox__StepType {
	return (QAbstractSpinBox__StepType)(C.QSpinBox_StepType(this.h))
}

func (this *QSpinBox) SetStepType(stepType QAbstractSpinBox__StepType) {
	C.QSpinBox_SetStepType(this.h, (C.int)(stepType))
}

func (this *QSpinBox) DisplayIntegerBase() int {
	return (int)(C.QSpinBox_DisplayIntegerBase(this.h))
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
func (this *QSpinBox) OnValueChanged(slot func(param1 int)) {
	C.QSpinBox_connect_ValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSpinBox_ValueChanged
func miqt_exec_callback_QSpinBox_ValueChanged(cb *C.void, param1 C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QSpinBox) TextChanged(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QSpinBox_TextChanged(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QSpinBox) OnTextChanged(slot func(param1 string)) {
	C.QSpinBox_connect_TextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSpinBox_TextChanged
func miqt_exec_callback_QSpinBox_TextChanged(cb *C.void, param1 *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QSpinBox) ValueChangedWithQString(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QSpinBox_ValueChangedWithQString(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QSpinBox) OnValueChangedWithQString(slot func(param1 string)) {
	C.QSpinBox_connect_ValueChangedWithQString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSpinBox_ValueChangedWithQString
func miqt_exec_callback_QSpinBox_ValueChangedWithQString(cb *C.void, param1 *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func QSpinBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSpinBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSpinBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSpinBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSpinBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSpinBox) Delete() {
	C.QSpinBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSpinBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QSpinBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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
	return newQMetaObject_U(unsafe.Pointer(C.QDoubleSpinBox_MetaObject(this.h)))
}

func (this *QDoubleSpinBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QDoubleSpinBox_Metacast(this.h, param1_Cstring)
}

func QDoubleSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDoubleSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDoubleSpinBox) Value() float64 {
	return (float64)(C.QDoubleSpinBox_Value(this.h))
}

func (this *QDoubleSpinBox) Prefix() string {
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_Prefix(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDoubleSpinBox) SetPrefix(prefix string) {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	C.QDoubleSpinBox_SetPrefix(this.h, (*C.struct_miqt_string)(prefix_ms))
}

func (this *QDoubleSpinBox) Suffix() string {
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_Suffix(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDoubleSpinBox) SetSuffix(suffix string) {
	suffix_ms := miqt_strdupg(suffix)
	defer C.free(suffix_ms)
	C.QDoubleSpinBox_SetSuffix(this.h, (*C.struct_miqt_string)(suffix_ms))
}

func (this *QDoubleSpinBox) CleanText() string {
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_CleanText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDoubleSpinBox) SingleStep() float64 {
	return (float64)(C.QDoubleSpinBox_SingleStep(this.h))
}

func (this *QDoubleSpinBox) SetSingleStep(val float64) {
	C.QDoubleSpinBox_SetSingleStep(this.h, (C.double)(val))
}

func (this *QDoubleSpinBox) Minimum() float64 {
	return (float64)(C.QDoubleSpinBox_Minimum(this.h))
}

func (this *QDoubleSpinBox) SetMinimum(min float64) {
	C.QDoubleSpinBox_SetMinimum(this.h, (C.double)(min))
}

func (this *QDoubleSpinBox) Maximum() float64 {
	return (float64)(C.QDoubleSpinBox_Maximum(this.h))
}

func (this *QDoubleSpinBox) SetMaximum(max float64) {
	C.QDoubleSpinBox_SetMaximum(this.h, (C.double)(max))
}

func (this *QDoubleSpinBox) SetRange(min float64, max float64) {
	C.QDoubleSpinBox_SetRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QDoubleSpinBox) StepType() QAbstractSpinBox__StepType {
	return (QAbstractSpinBox__StepType)(C.QDoubleSpinBox_StepType(this.h))
}

func (this *QDoubleSpinBox) SetStepType(stepType QAbstractSpinBox__StepType) {
	C.QDoubleSpinBox_SetStepType(this.h, (C.int)(stepType))
}

func (this *QDoubleSpinBox) Decimals() int {
	return (int)(C.QDoubleSpinBox_Decimals(this.h))
}

func (this *QDoubleSpinBox) SetDecimals(prec int) {
	C.QDoubleSpinBox_SetDecimals(this.h, (C.int)(prec))
}

func (this *QDoubleSpinBox) Validate(input string, pos *int) QValidator__State {
	input_ms := miqt_strdupg(input)
	defer C.free(input_ms)
	return (QValidator__State)(C.QDoubleSpinBox_Validate(this.h, (*C.struct_miqt_string)(input_ms), (*C.int)(unsafe.Pointer(pos))))
}

func (this *QDoubleSpinBox) ValueFromText(text string) float64 {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (float64)(C.QDoubleSpinBox_ValueFromText(this.h, (*C.struct_miqt_string)(text_ms)))
}

func (this *QDoubleSpinBox) TextFromValue(val float64) string {
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_TextFromValue(this.h, (C.double)(val))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDoubleSpinBox) Fixup(str string) {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	C.QDoubleSpinBox_Fixup(this.h, (*C.struct_miqt_string)(str_ms))
}

func (this *QDoubleSpinBox) SetValue(val float64) {
	C.QDoubleSpinBox_SetValue(this.h, (C.double)(val))
}

func (this *QDoubleSpinBox) ValueChanged(param1 float64) {
	C.QDoubleSpinBox_ValueChanged(this.h, (C.double)(param1))
}
func (this *QDoubleSpinBox) OnValueChanged(slot func(param1 float64)) {
	C.QDoubleSpinBox_connect_ValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QDoubleSpinBox_ValueChanged
func miqt_exec_callback_QDoubleSpinBox_ValueChanged(cb *C.void, param1 C.double) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QDoubleSpinBox) TextChanged(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QDoubleSpinBox_TextChanged(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QDoubleSpinBox) OnTextChanged(slot func(param1 string)) {
	C.QDoubleSpinBox_connect_TextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QDoubleSpinBox_TextChanged
func miqt_exec_callback_QDoubleSpinBox_TextChanged(cb *C.void, param1 *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QDoubleSpinBox) ValueChangedWithQString(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QDoubleSpinBox_ValueChangedWithQString(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QDoubleSpinBox) OnValueChangedWithQString(slot func(param1 string)) {
	C.QDoubleSpinBox_connect_ValueChangedWithQString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QDoubleSpinBox_ValueChangedWithQString
func miqt_exec_callback_QDoubleSpinBox_ValueChangedWithQString(cb *C.void, param1 *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func QDoubleSpinBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDoubleSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDoubleSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDoubleSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QDoubleSpinBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDoubleSpinBox) Delete() {
	C.QDoubleSpinBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDoubleSpinBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QDoubleSpinBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
