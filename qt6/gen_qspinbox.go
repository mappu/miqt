package qt6

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

func (this *QSpinBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSpinBox constructs the type using only CGO pointers.
func newQSpinBox(h *C.QSpinBox) *QSpinBox {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSpinBox *C.QAbstractSpinBox = nil
	C.QSpinBox_virtbase(h, &outptr_QAbstractSpinBox)

	return &QSpinBox{h: h,
		QAbstractSpinBox: newQAbstractSpinBox(outptr_QAbstractSpinBox)}
}

// UnsafeNewQSpinBox constructs the type using only unsafe pointers.
func UnsafeNewQSpinBox(h unsafe.Pointer) *QSpinBox {
	return newQSpinBox((*C.QSpinBox)(h))
}

// NewQSpinBox constructs a new QSpinBox object.
func NewQSpinBox(parent *QWidget) *QSpinBox {

	return newQSpinBox(C.QSpinBox_new(parent.cPointer()))
}

// NewQSpinBox2 constructs a new QSpinBox object.
func NewQSpinBox2() *QSpinBox {

	return newQSpinBox(C.QSpinBox_new2())
}

func (this *QSpinBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSpinBox_MetaObject(this.h))
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

func (this *QSpinBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSpinBox_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSpinBox) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSpinBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_Event
func miqt_exec_callback_QSpinBox_Event(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

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
	ok := C.QSpinBox_override_virtual_Validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QSpinBox_override_virtual_ValueFromText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QSpinBox_override_virtual_TextFromValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QSpinBox_override_virtual_Fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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

	_goptr := newQSize(C.QSpinBox_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpinBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSpinBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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

	_goptr := newQSize(C.QSpinBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpinBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSpinBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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

	_goptr := newQVariant(C.QSpinBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpinBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSpinBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QSpinBox_override_virtual_StepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QSpinBox_override_virtual_Clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QSpinBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_ResizeEvent
func miqt_exec_callback_QSpinBox_ResizeEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSpinBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSpinBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_KeyPressEvent
func miqt_exec_callback_QSpinBox_KeyPressEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSpinBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSpinBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_KeyReleaseEvent
func miqt_exec_callback_QSpinBox_KeyReleaseEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSpinBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QSpinBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_WheelEvent
func miqt_exec_callback_QSpinBox_WheelEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSpinBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSpinBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_FocusInEvent
func miqt_exec_callback_QSpinBox_FocusInEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSpinBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSpinBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_FocusOutEvent
func miqt_exec_callback_QSpinBox_FocusOutEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSpinBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSpinBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_ContextMenuEvent
func miqt_exec_callback_QSpinBox_ContextMenuEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QSpinBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSpinBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_ChangeEvent
func miqt_exec_callback_QSpinBox_ChangeEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSpinBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSpinBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_CloseEvent
func miqt_exec_callback_QSpinBox_CloseEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSpinBox_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QSpinBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_HideEvent
func miqt_exec_callback_QSpinBox_HideEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSpinBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_MousePressEvent
func miqt_exec_callback_QSpinBox_MousePressEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSpinBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_MouseReleaseEvent
func miqt_exec_callback_QSpinBox_MouseReleaseEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSpinBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_MouseMoveEvent
func miqt_exec_callback_QSpinBox_MouseMoveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSpinBox_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSpinBox_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_TimerEvent
func miqt_exec_callback_QSpinBox_TimerEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QSpinBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QSpinBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_PaintEvent
func miqt_exec_callback_QSpinBox_PaintEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSpinBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QSpinBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_ShowEvent
func miqt_exec_callback_QSpinBox_ShowEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_InitStyleOption(option *QStyleOptionSpinBox) {

	C.QSpinBox_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QSpinBox) OnInitStyleOption(slot func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox)) {
	ok := C.QSpinBox_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_InitStyleOption
func miqt_exec_callback_QSpinBox_InitStyleOption(self *C.QSpinBox, cb C.intptr_t, option *C.QStyleOptionSpinBox) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionSpinBox(option)

	gofunc((&QSpinBox{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QSpinBox) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QSpinBox_virtualbase_StepEnabled(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnStepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	ok := C.QSpinBox_override_virtual_StepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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

func (this *QSpinBox) callVirtualBase_DevType() int {

	return (int)(C.QSpinBox_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnDevType(slot func(super func() int) int) {
	ok := C.QSpinBox_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_DevType
func miqt_exec_callback_QSpinBox_DevType(self *C.QSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_SetVisible(visible bool) {

	C.QSpinBox_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSpinBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSpinBox_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_SetVisible
func miqt_exec_callback_QSpinBox_SetVisible(self *C.QSpinBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSpinBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSpinBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSpinBox_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSpinBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSpinBox_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_HeightForWidth
func miqt_exec_callback_QSpinBox_HeightForWidth(self *C.QSpinBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSpinBox_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSpinBox_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_HasHeightForWidth
func miqt_exec_callback_QSpinBox_HasHeightForWidth(self *C.QSpinBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSpinBox_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSpinBox_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_PaintEngine
func miqt_exec_callback_QSpinBox_PaintEngine(self *C.QSpinBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSpinBox_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_MouseDoubleClickEvent
func miqt_exec_callback_QSpinBox_MouseDoubleClickEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QSpinBox_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QSpinBox_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_EnterEvent
func miqt_exec_callback_QSpinBox_EnterEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSpinBox_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSpinBox_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_LeaveEvent
func miqt_exec_callback_QSpinBox_LeaveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSpinBox_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QSpinBox_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_MoveEvent
func miqt_exec_callback_QSpinBox_MoveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSpinBox_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSpinBox_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_TabletEvent
func miqt_exec_callback_QSpinBox_TabletEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSpinBox_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSpinBox_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_ActionEvent
func miqt_exec_callback_QSpinBox_ActionEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSpinBox_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSpinBox_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_DragEnterEvent
func miqt_exec_callback_QSpinBox_DragEnterEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSpinBox_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSpinBox_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_DragMoveEvent
func miqt_exec_callback_QSpinBox_DragMoveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSpinBox_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSpinBox_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_DragLeaveEvent
func miqt_exec_callback_QSpinBox_DragLeaveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSpinBox_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSpinBox_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_DropEvent
func miqt_exec_callback_QSpinBox_DropEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSpinBox_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QSpinBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QSpinBox_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_NativeEvent
func miqt_exec_callback_QSpinBox_NativeEvent(self *C.QSpinBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSpinBox_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSpinBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSpinBox_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_Metric
func miqt_exec_callback_QSpinBox_Metric(self *C.QSpinBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QSpinBox_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSpinBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSpinBox_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_InitPainter
func miqt_exec_callback_QSpinBox_InitPainter(self *C.QSpinBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSpinBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSpinBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSpinBox_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSpinBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSpinBox_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_Redirected
func miqt_exec_callback_QSpinBox_Redirected(self *C.QSpinBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QSpinBox_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSpinBox_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_SharedPainter
func miqt_exec_callback_QSpinBox_SharedPainter(self *C.QSpinBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSpinBox_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSpinBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSpinBox_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_InputMethodEvent
func miqt_exec_callback_QSpinBox_InputMethodEvent(self *C.QSpinBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSpinBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSpinBox_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSpinBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSpinBox_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_FocusNextPrevChild
func miqt_exec_callback_QSpinBox_FocusNextPrevChild(self *C.QSpinBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSpinBox_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSpinBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSpinBox_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_EventFilter
func miqt_exec_callback_QSpinBox_EventFilter(self *C.QSpinBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSpinBox_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSpinBox_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_ChildEvent
func miqt_exec_callback_QSpinBox_ChildEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSpinBox_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSpinBox_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_CustomEvent
func miqt_exec_callback_QSpinBox_CustomEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSpinBox_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSpinBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSpinBox_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_ConnectNotify
func miqt_exec_callback_QSpinBox_ConnectNotify(self *C.QSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSpinBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSpinBox_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSpinBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSpinBox_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_DisconnectNotify
func miqt_exec_callback_QSpinBox_DisconnectNotify(self *C.QSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSpinBox{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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

func (this *QDoubleSpinBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDoubleSpinBox constructs the type using only CGO pointers.
func newQDoubleSpinBox(h *C.QDoubleSpinBox) *QDoubleSpinBox {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSpinBox *C.QAbstractSpinBox = nil
	C.QDoubleSpinBox_virtbase(h, &outptr_QAbstractSpinBox)

	return &QDoubleSpinBox{h: h,
		QAbstractSpinBox: newQAbstractSpinBox(outptr_QAbstractSpinBox)}
}

// UnsafeNewQDoubleSpinBox constructs the type using only unsafe pointers.
func UnsafeNewQDoubleSpinBox(h unsafe.Pointer) *QDoubleSpinBox {
	return newQDoubleSpinBox((*C.QDoubleSpinBox)(h))
}

// NewQDoubleSpinBox constructs a new QDoubleSpinBox object.
func NewQDoubleSpinBox(parent *QWidget) *QDoubleSpinBox {

	return newQDoubleSpinBox(C.QDoubleSpinBox_new(parent.cPointer()))
}

// NewQDoubleSpinBox2 constructs a new QDoubleSpinBox object.
func NewQDoubleSpinBox2() *QDoubleSpinBox {

	return newQDoubleSpinBox(C.QDoubleSpinBox_new2())
}

func (this *QDoubleSpinBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDoubleSpinBox_MetaObject(this.h))
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

func (this *QDoubleSpinBox) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QDoubleSpinBox_virtualbase_Validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QDoubleSpinBox) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	ok := C.QDoubleSpinBox_override_virtual_Validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QDoubleSpinBox_override_virtual_ValueFromText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QDoubleSpinBox_override_virtual_TextFromValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QDoubleSpinBox_override_virtual_Fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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

	_goptr := newQSize(C.QDoubleSpinBox_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDoubleSpinBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDoubleSpinBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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

	_goptr := newQSize(C.QDoubleSpinBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDoubleSpinBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDoubleSpinBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QDoubleSpinBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_Event
func miqt_exec_callback_QDoubleSpinBox_Event(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDoubleSpinBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDoubleSpinBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDoubleSpinBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QDoubleSpinBox_override_virtual_StepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QDoubleSpinBox_override_virtual_Clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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
	ok := C.QDoubleSpinBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_ResizeEvent
func miqt_exec_callback_QDoubleSpinBox_ResizeEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDoubleSpinBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_KeyPressEvent
func miqt_exec_callback_QDoubleSpinBox_KeyPressEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDoubleSpinBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_KeyReleaseEvent
func miqt_exec_callback_QDoubleSpinBox_KeyReleaseEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDoubleSpinBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_WheelEvent
func miqt_exec_callback_QDoubleSpinBox_WheelEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDoubleSpinBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_FocusInEvent
func miqt_exec_callback_QDoubleSpinBox_FocusInEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDoubleSpinBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_FocusOutEvent
func miqt_exec_callback_QDoubleSpinBox_FocusOutEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDoubleSpinBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_ContextMenuEvent
func miqt_exec_callback_QDoubleSpinBox_ContextMenuEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QDoubleSpinBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_ChangeEvent
func miqt_exec_callback_QDoubleSpinBox_ChangeEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDoubleSpinBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_CloseEvent
func miqt_exec_callback_QDoubleSpinBox_CloseEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDoubleSpinBox_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_HideEvent
func miqt_exec_callback_QDoubleSpinBox_HideEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_MousePressEvent
func miqt_exec_callback_QDoubleSpinBox_MousePressEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_MouseReleaseEvent
func miqt_exec_callback_QDoubleSpinBox_MouseReleaseEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_MouseMoveEvent
func miqt_exec_callback_QDoubleSpinBox_MouseMoveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDoubleSpinBox_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_TimerEvent
func miqt_exec_callback_QDoubleSpinBox_TimerEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDoubleSpinBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_PaintEvent
func miqt_exec_callback_QDoubleSpinBox_PaintEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDoubleSpinBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_ShowEvent
func miqt_exec_callback_QDoubleSpinBox_ShowEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_InitStyleOption(option *QStyleOptionSpinBox) {

	C.QDoubleSpinBox_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QDoubleSpinBox) OnInitStyleOption(slot func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox)) {
	ok := C.QDoubleSpinBox_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_InitStyleOption
func miqt_exec_callback_QDoubleSpinBox_InitStyleOption(self *C.QDoubleSpinBox, cb C.intptr_t, option *C.QStyleOptionSpinBox) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionSpinBox(option)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QDoubleSpinBox_virtualbase_StepEnabled(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnStepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	ok := C.QDoubleSpinBox_override_virtual_StepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
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

func (this *QDoubleSpinBox) callVirtualBase_DevType() int {

	return (int)(C.QDoubleSpinBox_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnDevType(slot func(super func() int) int) {
	ok := C.QDoubleSpinBox_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_DevType
func miqt_exec_callback_QDoubleSpinBox_DevType(self *C.QDoubleSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_SetVisible(visible bool) {

	C.QDoubleSpinBox_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDoubleSpinBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDoubleSpinBox_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_SetVisible
func miqt_exec_callback_QDoubleSpinBox_SetVisible(self *C.QDoubleSpinBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDoubleSpinBox_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDoubleSpinBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDoubleSpinBox_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_HeightForWidth
func miqt_exec_callback_QDoubleSpinBox_HeightForWidth(self *C.QDoubleSpinBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDoubleSpinBox_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDoubleSpinBox_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_HasHeightForWidth
func miqt_exec_callback_QDoubleSpinBox_HasHeightForWidth(self *C.QDoubleSpinBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDoubleSpinBox_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDoubleSpinBox_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_PaintEngine
func miqt_exec_callback_QDoubleSpinBox_PaintEngine(self *C.QDoubleSpinBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_MouseDoubleClickEvent
func miqt_exec_callback_QDoubleSpinBox_MouseDoubleClickEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QDoubleSpinBox_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_EnterEvent
func miqt_exec_callback_QDoubleSpinBox_EnterEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDoubleSpinBox_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_LeaveEvent
func miqt_exec_callback_QDoubleSpinBox_LeaveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDoubleSpinBox_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_MoveEvent
func miqt_exec_callback_QDoubleSpinBox_MoveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDoubleSpinBox_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_TabletEvent
func miqt_exec_callback_QDoubleSpinBox_TabletEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDoubleSpinBox_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_ActionEvent
func miqt_exec_callback_QDoubleSpinBox_ActionEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDoubleSpinBox_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_DragEnterEvent
func miqt_exec_callback_QDoubleSpinBox_DragEnterEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDoubleSpinBox_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_DragMoveEvent
func miqt_exec_callback_QDoubleSpinBox_DragMoveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDoubleSpinBox_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_DragLeaveEvent
func miqt_exec_callback_QDoubleSpinBox_DragLeaveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDoubleSpinBox_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_DropEvent
func miqt_exec_callback_QDoubleSpinBox_DropEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDoubleSpinBox_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDoubleSpinBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDoubleSpinBox_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_NativeEvent
func miqt_exec_callback_QDoubleSpinBox_NativeEvent(self *C.QDoubleSpinBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDoubleSpinBox_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDoubleSpinBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDoubleSpinBox_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_Metric
func miqt_exec_callback_QDoubleSpinBox_Metric(self *C.QDoubleSpinBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QDoubleSpinBox_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDoubleSpinBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDoubleSpinBox_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_InitPainter
func miqt_exec_callback_QDoubleSpinBox_InitPainter(self *C.QDoubleSpinBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDoubleSpinBox_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDoubleSpinBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDoubleSpinBox_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_Redirected
func miqt_exec_callback_QDoubleSpinBox_Redirected(self *C.QDoubleSpinBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QDoubleSpinBox_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDoubleSpinBox_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_SharedPainter
func miqt_exec_callback_QDoubleSpinBox_SharedPainter(self *C.QDoubleSpinBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDoubleSpinBox_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDoubleSpinBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_InputMethodEvent
func miqt_exec_callback_QDoubleSpinBox_InputMethodEvent(self *C.QDoubleSpinBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDoubleSpinBox_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDoubleSpinBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDoubleSpinBox_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_FocusNextPrevChild
func miqt_exec_callback_QDoubleSpinBox_FocusNextPrevChild(self *C.QDoubleSpinBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDoubleSpinBox_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDoubleSpinBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDoubleSpinBox_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_EventFilter
func miqt_exec_callback_QDoubleSpinBox_EventFilter(self *C.QDoubleSpinBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDoubleSpinBox_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_ChildEvent
func miqt_exec_callback_QDoubleSpinBox_ChildEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDoubleSpinBox_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_CustomEvent
func miqt_exec_callback_QDoubleSpinBox_CustomEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDoubleSpinBox_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDoubleSpinBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDoubleSpinBox_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_ConnectNotify
func miqt_exec_callback_QDoubleSpinBox_ConnectNotify(self *C.QDoubleSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDoubleSpinBox_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDoubleSpinBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDoubleSpinBox_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_DisconnectNotify
func miqt_exec_callback_QDoubleSpinBox_DisconnectNotify(self *C.QDoubleSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
