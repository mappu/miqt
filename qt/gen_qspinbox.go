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
	h          *C.QSpinBox
	isSubclass bool
	*QAbstractSpinBox
}

func (this *QSpinBox) cPointer() *C.QSpinBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSpinBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSpinBox constructs the type using only CGO pointers.
func newQSpinBox(h *C.QSpinBox, h_QAbstractSpinBox *C.QAbstractSpinBox, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QSpinBox {
	if h == nil {
		return nil
	}
	return &QSpinBox{h: h,
		QAbstractSpinBox: newQAbstractSpinBox(h_QAbstractSpinBox, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQSpinBox constructs the type using only unsafe pointers.
func UnsafeNewQSpinBox(h unsafe.Pointer, h_QAbstractSpinBox unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QSpinBox {
	if h == nil {
		return nil
	}

	return &QSpinBox{h: (*C.QSpinBox)(h),
		QAbstractSpinBox: UnsafeNewQAbstractSpinBox(h_QAbstractSpinBox, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQSpinBox constructs a new QSpinBox object.
func NewQSpinBox(parent *QWidget) *QSpinBox {
	var outptr_QSpinBox *C.QSpinBox = nil
	var outptr_QAbstractSpinBox *C.QAbstractSpinBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSpinBox_new(parent.cPointer(), &outptr_QSpinBox, &outptr_QAbstractSpinBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSpinBox(outptr_QSpinBox, outptr_QAbstractSpinBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSpinBox2 constructs a new QSpinBox object.
func NewQSpinBox2() *QSpinBox {
	var outptr_QSpinBox *C.QSpinBox = nil
	var outptr_QAbstractSpinBox *C.QAbstractSpinBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSpinBox_new2(&outptr_QSpinBox, &outptr_QAbstractSpinBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSpinBox(outptr_QSpinBox, outptr_QAbstractSpinBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QSpinBox) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSpinBox_MetaObject(this.h)))
}

func (this *QSpinBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSpinBox_Metacast(this.h, param1_Cstring))
}

func QSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpinBox) Value() int {
	return (int)(C.QSpinBox_Value(this.h))
}

func (this *QSpinBox) Prefix() string {
	var _ms C.struct_miqt_string = C.QSpinBox_Prefix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpinBox) SetPrefix(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QSpinBox_SetPrefix(this.h, prefix_ms)
}

func (this *QSpinBox) Suffix() string {
	var _ms C.struct_miqt_string = C.QSpinBox_Suffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpinBox) SetSuffix(suffix string) {
	suffix_ms := C.struct_miqt_string{}
	suffix_ms.data = C.CString(suffix)
	suffix_ms.len = C.size_t(len(suffix))
	defer C.free(unsafe.Pointer(suffix_ms.data))
	C.QSpinBox_SetSuffix(this.h, suffix_ms)
}

func (this *QSpinBox) CleanText() string {
	var _ms C.struct_miqt_string = C.QSpinBox_CleanText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	C.QSpinBox_connect_ValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_ValueChanged
func miqt_exec_callback_QSpinBox_ValueChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QSpinBox) TextChanged(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QSpinBox_TextChanged(this.h, param1_ms)
}
func (this *QSpinBox) OnTextChanged(slot func(param1 string)) {
	C.QSpinBox_connect_TextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_TextChanged
func miqt_exec_callback_QSpinBox_TextChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QSpinBox) ValueChangedWithQString(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QSpinBox_ValueChangedWithQString(this.h, param1_ms)
}
func (this *QSpinBox) OnValueChangedWithQString(slot func(param1 string)) {
	C.QSpinBox_connect_ValueChangedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_ValueChangedWithQString
func miqt_exec_callback_QSpinBox_ValueChangedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func QSpinBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpinBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSpinBox_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSpinBox) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_Event
func miqt_exec_callback_QSpinBox_Event(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QSpinBox_virtualbase_Validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QSpinBox) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_Validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_Validate
func miqt_exec_callback_QSpinBox_Validate(self *C.QSpinBox, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret
	slotval2 := (*int)(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_ValueFromText(text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return (int)(C.QSpinBox_virtualbase_ValueFromText(unsafe.Pointer(this.h), text_ms))

}
func (this *QSpinBox) OnValueFromText(slot func(super func(text string) int, text string) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_ValueFromText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_ValueFromText
func miqt_exec_callback_QSpinBox_ValueFromText(self *C.QSpinBox, cb C.intptr_t, text C.struct_miqt_string) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string) int, text string) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_ValueFromText, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_TextFromValue(val int) string {

	var _ms C.struct_miqt_string = C.QSpinBox_virtualbase_TextFromValue(unsafe.Pointer(this.h), (C.int)(val))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSpinBox) OnTextFromValue(slot func(super func(val int) string, val int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_TextFromValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_TextFromValue
func miqt_exec_callback_QSpinBox_TextFromValue(self *C.QSpinBox, cb C.intptr_t, val C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(val int) string, val int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(val)

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_TextFromValue, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSpinBox) callVirtualBase_Fixup(str string) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))

	C.QSpinBox_virtualbase_Fixup(unsafe.Pointer(this.h), str_ms)

}
func (this *QSpinBox) OnFixup(slot func(super func(str string), str string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_Fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_Fixup
func miqt_exec_callback_QSpinBox_Fixup(self *C.QSpinBox, cb C.intptr_t, str C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(str string), str string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var str_ms C.struct_miqt_string = str
	str_ret := C.GoStringN(str_ms.data, C.int(int64(str_ms.len)))
	C.free(unsafe.Pointer(str_ms.data))
	slotval1 := str_ret

	gofunc((&QSpinBox{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QSpinBox) callVirtualBase_SizeHint() *QSize {

	_ret := C.QSpinBox_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpinBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_SizeHint
func miqt_exec_callback_QSpinBox_SizeHint(self *C.QSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QSpinBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpinBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_MinimumSizeHint
func miqt_exec_callback_QSpinBox_MinimumSizeHint(self *C.QSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QSpinBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpinBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_InputMethodQuery
func miqt_exec_callback_QSpinBox_InputMethodQuery(self *C.QSpinBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_StepBy(steps int) {

	C.QSpinBox_virtualbase_StepBy(unsafe.Pointer(this.h), (C.int)(steps))

}
func (this *QSpinBox) OnStepBy(slot func(super func(steps int), steps int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_StepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_StepBy
func miqt_exec_callback_QSpinBox_StepBy(self *C.QSpinBox, cb C.intptr_t, steps C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(steps int), steps int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(steps)

	gofunc((&QSpinBox{h: self}).callVirtualBase_StepBy, slotval1)

}

func (this *QSpinBox) callVirtualBase_Clear() {

	C.QSpinBox_virtualbase_Clear(unsafe.Pointer(this.h))

}
func (this *QSpinBox) OnClear(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_Clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_Clear
func miqt_exec_callback_QSpinBox_Clear(self *C.QSpinBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSpinBox{h: self}).callVirtualBase_Clear)

}

func (this *QSpinBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QSpinBox_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_ResizeEvent
func miqt_exec_callback_QSpinBox_ResizeEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSpinBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_KeyPressEvent
func miqt_exec_callback_QSpinBox_KeyPressEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSpinBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_KeyReleaseEvent
func miqt_exec_callback_QSpinBox_KeyReleaseEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSpinBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_WheelEvent
func miqt_exec_callback_QSpinBox_WheelEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSpinBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_FocusInEvent
func miqt_exec_callback_QSpinBox_FocusInEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSpinBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_FocusOutEvent
func miqt_exec_callback_QSpinBox_FocusOutEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSpinBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_ContextMenuEvent
func miqt_exec_callback_QSpinBox_ContextMenuEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QSpinBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_ChangeEvent
func miqt_exec_callback_QSpinBox_ChangeEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSpinBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSpinBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_CloseEvent
func miqt_exec_callback_QSpinBox_CloseEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSpinBox_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_HideEvent
func miqt_exec_callback_QSpinBox_HideEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_MousePressEvent
func miqt_exec_callback_QSpinBox_MousePressEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_MouseReleaseEvent
func miqt_exec_callback_QSpinBox_MouseReleaseEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_MouseMoveEvent
func miqt_exec_callback_QSpinBox_MouseMoveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSpinBox_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_TimerEvent
func miqt_exec_callback_QSpinBox_TimerEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QSpinBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_PaintEvent
func miqt_exec_callback_QSpinBox_PaintEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSpinBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_ShowEvent
func miqt_exec_callback_QSpinBox_ShowEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QSpinBox_virtualbase_StepEnabled(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnStepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpinBox_override_virtual_StepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_StepEnabled
func miqt_exec_callback_QSpinBox_StepEnabled(self *C.QSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_StepEnabled)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QSpinBox) Delete() {
	C.QSpinBox_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QDoubleSpinBox
	isSubclass bool
	*QAbstractSpinBox
}

func (this *QDoubleSpinBox) cPointer() *C.QDoubleSpinBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDoubleSpinBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDoubleSpinBox constructs the type using only CGO pointers.
func newQDoubleSpinBox(h *C.QDoubleSpinBox, h_QAbstractSpinBox *C.QAbstractSpinBox, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QDoubleSpinBox {
	if h == nil {
		return nil
	}
	return &QDoubleSpinBox{h: h,
		QAbstractSpinBox: newQAbstractSpinBox(h_QAbstractSpinBox, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQDoubleSpinBox constructs the type using only unsafe pointers.
func UnsafeNewQDoubleSpinBox(h unsafe.Pointer, h_QAbstractSpinBox unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QDoubleSpinBox {
	if h == nil {
		return nil
	}

	return &QDoubleSpinBox{h: (*C.QDoubleSpinBox)(h),
		QAbstractSpinBox: UnsafeNewQAbstractSpinBox(h_QAbstractSpinBox, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQDoubleSpinBox constructs a new QDoubleSpinBox object.
func NewQDoubleSpinBox(parent *QWidget) *QDoubleSpinBox {
	var outptr_QDoubleSpinBox *C.QDoubleSpinBox = nil
	var outptr_QAbstractSpinBox *C.QAbstractSpinBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QDoubleSpinBox_new(parent.cPointer(), &outptr_QDoubleSpinBox, &outptr_QAbstractSpinBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQDoubleSpinBox(outptr_QDoubleSpinBox, outptr_QAbstractSpinBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQDoubleSpinBox2 constructs a new QDoubleSpinBox object.
func NewQDoubleSpinBox2() *QDoubleSpinBox {
	var outptr_QDoubleSpinBox *C.QDoubleSpinBox = nil
	var outptr_QAbstractSpinBox *C.QAbstractSpinBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QDoubleSpinBox_new2(&outptr_QDoubleSpinBox, &outptr_QAbstractSpinBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQDoubleSpinBox(outptr_QDoubleSpinBox, outptr_QAbstractSpinBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QDoubleSpinBox) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDoubleSpinBox_MetaObject(this.h)))
}

func (this *QDoubleSpinBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDoubleSpinBox_Metacast(this.h, param1_Cstring))
}

func QDoubleSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) Value() float64 {
	return (float64)(C.QDoubleSpinBox_Value(this.h))
}

func (this *QDoubleSpinBox) Prefix() string {
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_Prefix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) SetPrefix(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QDoubleSpinBox_SetPrefix(this.h, prefix_ms)
}

func (this *QDoubleSpinBox) Suffix() string {
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_Suffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) SetSuffix(suffix string) {
	suffix_ms := C.struct_miqt_string{}
	suffix_ms.data = C.CString(suffix)
	suffix_ms.len = C.size_t(len(suffix))
	defer C.free(unsafe.Pointer(suffix_ms.data))
	C.QDoubleSpinBox_SetSuffix(this.h, suffix_ms)
}

func (this *QDoubleSpinBox) CleanText() string {
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_CleanText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	return (QValidator__State)(C.QDoubleSpinBox_Validate(this.h, input_ms, (*C.int)(unsafe.Pointer(pos))))
}

func (this *QDoubleSpinBox) ValueFromText(text string) float64 {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (float64)(C.QDoubleSpinBox_ValueFromText(this.h, text_ms))
}

func (this *QDoubleSpinBox) TextFromValue(val float64) string {
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_TextFromValue(this.h, (C.double)(val))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) Fixup(str string) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	C.QDoubleSpinBox_Fixup(this.h, str_ms)
}

func (this *QDoubleSpinBox) SetValue(val float64) {
	C.QDoubleSpinBox_SetValue(this.h, (C.double)(val))
}

func (this *QDoubleSpinBox) ValueChanged(param1 float64) {
	C.QDoubleSpinBox_ValueChanged(this.h, (C.double)(param1))
}
func (this *QDoubleSpinBox) OnValueChanged(slot func(param1 float64)) {
	C.QDoubleSpinBox_connect_ValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_ValueChanged
func miqt_exec_callback_QDoubleSpinBox_ValueChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QDoubleSpinBox) TextChanged(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QDoubleSpinBox_TextChanged(this.h, param1_ms)
}
func (this *QDoubleSpinBox) OnTextChanged(slot func(param1 string)) {
	C.QDoubleSpinBox_connect_TextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_TextChanged
func miqt_exec_callback_QDoubleSpinBox_TextChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QDoubleSpinBox) ValueChangedWithQString(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QDoubleSpinBox_ValueChangedWithQString(this.h, param1_ms)
}
func (this *QDoubleSpinBox) OnValueChangedWithQString(slot func(param1 string)) {
	C.QDoubleSpinBox_connect_ValueChangedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_ValueChangedWithQString
func miqt_exec_callback_QDoubleSpinBox_ValueChangedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func QDoubleSpinBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QDoubleSpinBox_virtualbase_Validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QDoubleSpinBox) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_Validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_Validate
func miqt_exec_callback_QDoubleSpinBox_Validate(self *C.QDoubleSpinBox, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret
	slotval2 := (*int)(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_ValueFromText(text string) float64 {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return (float64)(C.QDoubleSpinBox_virtualbase_ValueFromText(unsafe.Pointer(this.h), text_ms))

}
func (this *QDoubleSpinBox) OnValueFromText(slot func(super func(text string) float64, text string) float64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_ValueFromText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_ValueFromText
func miqt_exec_callback_QDoubleSpinBox_ValueFromText(self *C.QDoubleSpinBox, cb C.intptr_t, text C.struct_miqt_string) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string) float64, text string) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ValueFromText, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_TextFromValue(val float64) string {

	var _ms C.struct_miqt_string = C.QDoubleSpinBox_virtualbase_TextFromValue(unsafe.Pointer(this.h), (C.double)(val))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QDoubleSpinBox) OnTextFromValue(slot func(super func(val float64) string, val float64) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_TextFromValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_TextFromValue
func miqt_exec_callback_QDoubleSpinBox_TextFromValue(self *C.QDoubleSpinBox, cb C.intptr_t, val C.double) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(val float64) string, val float64) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(val)

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_TextFromValue, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QDoubleSpinBox) callVirtualBase_Fixup(str string) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))

	C.QDoubleSpinBox_virtualbase_Fixup(unsafe.Pointer(this.h), str_ms)

}
func (this *QDoubleSpinBox) OnFixup(slot func(super func(str string), str string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_Fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_Fixup
func miqt_exec_callback_QDoubleSpinBox_Fixup(self *C.QDoubleSpinBox, cb C.intptr_t, str C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(str string), str string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var str_ms C.struct_miqt_string = str
	str_ret := C.GoStringN(str_ms.data, C.int(int64(str_ms.len)))
	C.free(unsafe.Pointer(str_ms.data))
	slotval1 := str_ret

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_SizeHint() *QSize {

	_ret := C.QDoubleSpinBox_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDoubleSpinBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_SizeHint
func miqt_exec_callback_QDoubleSpinBox_SizeHint(self *C.QDoubleSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QDoubleSpinBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDoubleSpinBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_MinimumSizeHint
func miqt_exec_callback_QDoubleSpinBox_MinimumSizeHint(self *C.QDoubleSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDoubleSpinBox_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDoubleSpinBox) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_Event
func miqt_exec_callback_QDoubleSpinBox_Event(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QDoubleSpinBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDoubleSpinBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_InputMethodQuery
func miqt_exec_callback_QDoubleSpinBox_InputMethodQuery(self *C.QDoubleSpinBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_StepBy(steps int) {

	C.QDoubleSpinBox_virtualbase_StepBy(unsafe.Pointer(this.h), (C.int)(steps))

}
func (this *QDoubleSpinBox) OnStepBy(slot func(super func(steps int), steps int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_StepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_StepBy
func miqt_exec_callback_QDoubleSpinBox_StepBy(self *C.QDoubleSpinBox, cb C.intptr_t, steps C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(steps int), steps int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(steps)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_StepBy, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_Clear() {

	C.QDoubleSpinBox_virtualbase_Clear(unsafe.Pointer(this.h))

}
func (this *QDoubleSpinBox) OnClear(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_Clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_Clear
func miqt_exec_callback_QDoubleSpinBox_Clear(self *C.QDoubleSpinBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_Clear)

}

func (this *QDoubleSpinBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QDoubleSpinBox_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_ResizeEvent
func miqt_exec_callback_QDoubleSpinBox_ResizeEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDoubleSpinBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_KeyPressEvent
func miqt_exec_callback_QDoubleSpinBox_KeyPressEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDoubleSpinBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_KeyReleaseEvent
func miqt_exec_callback_QDoubleSpinBox_KeyReleaseEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDoubleSpinBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_WheelEvent
func miqt_exec_callback_QDoubleSpinBox_WheelEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDoubleSpinBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_FocusInEvent
func miqt_exec_callback_QDoubleSpinBox_FocusInEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDoubleSpinBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_FocusOutEvent
func miqt_exec_callback_QDoubleSpinBox_FocusOutEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDoubleSpinBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_ContextMenuEvent
func miqt_exec_callback_QDoubleSpinBox_ContextMenuEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QDoubleSpinBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_ChangeEvent
func miqt_exec_callback_QDoubleSpinBox_ChangeEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDoubleSpinBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_CloseEvent
func miqt_exec_callback_QDoubleSpinBox_CloseEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDoubleSpinBox_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_HideEvent
func miqt_exec_callback_QDoubleSpinBox_HideEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_MousePressEvent
func miqt_exec_callback_QDoubleSpinBox_MousePressEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_MouseReleaseEvent
func miqt_exec_callback_QDoubleSpinBox_MouseReleaseEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_MouseMoveEvent
func miqt_exec_callback_QDoubleSpinBox_MouseMoveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDoubleSpinBox_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_TimerEvent
func miqt_exec_callback_QDoubleSpinBox_TimerEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDoubleSpinBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_PaintEvent
func miqt_exec_callback_QDoubleSpinBox_PaintEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDoubleSpinBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_ShowEvent
func miqt_exec_callback_QDoubleSpinBox_ShowEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QDoubleSpinBox_virtualbase_StepEnabled(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnStepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDoubleSpinBox_override_virtual_StepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_StepEnabled
func miqt_exec_callback_QDoubleSpinBox_StepEnabled(self *C.QDoubleSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_StepEnabled)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QDoubleSpinBox) Delete() {
	C.QDoubleSpinBox_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDoubleSpinBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QDoubleSpinBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
