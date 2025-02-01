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
	return newQMetaObject(C.QSpinBox_metaObject(this.h))
}

func (this *QSpinBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSpinBox_metacast(this.h, param1_Cstring))
}

func QSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpinBox) Value() int {
	return (int)(C.QSpinBox_value(this.h))
}

func (this *QSpinBox) Prefix() string {
	var _ms C.struct_miqt_string = C.QSpinBox_prefix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpinBox) SetPrefix(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QSpinBox_setPrefix(this.h, prefix_ms)
}

func (this *QSpinBox) Suffix() string {
	var _ms C.struct_miqt_string = C.QSpinBox_suffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpinBox) SetSuffix(suffix string) {
	suffix_ms := C.struct_miqt_string{}
	suffix_ms.data = C.CString(suffix)
	suffix_ms.len = C.size_t(len(suffix))
	defer C.free(unsafe.Pointer(suffix_ms.data))
	C.QSpinBox_setSuffix(this.h, suffix_ms)
}

func (this *QSpinBox) CleanText() string {
	var _ms C.struct_miqt_string = C.QSpinBox_cleanText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpinBox) SingleStep() int {
	return (int)(C.QSpinBox_singleStep(this.h))
}

func (this *QSpinBox) SetSingleStep(val int) {
	C.QSpinBox_setSingleStep(this.h, (C.int)(val))
}

func (this *QSpinBox) Minimum() int {
	return (int)(C.QSpinBox_minimum(this.h))
}

func (this *QSpinBox) SetMinimum(min int) {
	C.QSpinBox_setMinimum(this.h, (C.int)(min))
}

func (this *QSpinBox) Maximum() int {
	return (int)(C.QSpinBox_maximum(this.h))
}

func (this *QSpinBox) SetMaximum(max int) {
	C.QSpinBox_setMaximum(this.h, (C.int)(max))
}

func (this *QSpinBox) SetRange(min int, max int) {
	C.QSpinBox_setRange(this.h, (C.int)(min), (C.int)(max))
}

func (this *QSpinBox) StepType() QAbstractSpinBox__StepType {
	return (QAbstractSpinBox__StepType)(C.QSpinBox_stepType(this.h))
}

func (this *QSpinBox) SetStepType(stepType QAbstractSpinBox__StepType) {
	C.QSpinBox_setStepType(this.h, (C.int)(stepType))
}

func (this *QSpinBox) DisplayIntegerBase() int {
	return (int)(C.QSpinBox_displayIntegerBase(this.h))
}

func (this *QSpinBox) SetDisplayIntegerBase(base int) {
	C.QSpinBox_setDisplayIntegerBase(this.h, (C.int)(base))
}

func (this *QSpinBox) SetValue(val int) {
	C.QSpinBox_setValue(this.h, (C.int)(val))
}

func (this *QSpinBox) ValueChanged(param1 int) {
	C.QSpinBox_valueChanged(this.h, (C.int)(param1))
}
func (this *QSpinBox) OnValueChanged(slot func(param1 int)) {
	C.QSpinBox_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_valueChanged
func miqt_exec_callback_QSpinBox_valueChanged(cb C.intptr_t, param1 C.int) {
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
	C.QSpinBox_textChanged(this.h, param1_ms)
}
func (this *QSpinBox) OnTextChanged(slot func(param1 string)) {
	C.QSpinBox_connect_textChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_textChanged
func miqt_exec_callback_QSpinBox_textChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	C.QSpinBox_valueChangedWithQString(this.h, param1_ms)
}
func (this *QSpinBox) OnValueChangedWithQString(slot func(param1 string)) {
	C.QSpinBox_connect_valueChangedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpinBox_valueChangedWithQString
func miqt_exec_callback_QSpinBox_valueChangedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QSpinBox_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpinBox_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpinBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSpinBox_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSpinBox) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSpinBox_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_event
func miqt_exec_callback_QSpinBox_event(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (QValidator__State)(C.QSpinBox_virtualbase_validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QSpinBox) Onvalidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	ok := C.QSpinBox_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_validate
func miqt_exec_callback_QSpinBox_validate(self *C.QSpinBox, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
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

	return (int)(C.QSpinBox_virtualbase_valueFromText(unsafe.Pointer(this.h), text_ms))

}
func (this *QSpinBox) OnvalueFromText(slot func(super func(text string) int, text string) int) {
	ok := C.QSpinBox_override_virtual_valueFromText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_valueFromText
func miqt_exec_callback_QSpinBox_valueFromText(self *C.QSpinBox, cb C.intptr_t, text C.struct_miqt_string) C.int {
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

	var _ms C.struct_miqt_string = C.QSpinBox_virtualbase_textFromValue(unsafe.Pointer(this.h), (C.int)(val))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSpinBox) OntextFromValue(slot func(super func(val int) string, val int) string) {
	ok := C.QSpinBox_override_virtual_textFromValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_textFromValue
func miqt_exec_callback_QSpinBox_textFromValue(self *C.QSpinBox, cb C.intptr_t, val C.int) C.struct_miqt_string {
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

	C.QSpinBox_virtualbase_fixup(unsafe.Pointer(this.h), str_ms)

}
func (this *QSpinBox) Onfixup(slot func(super func(str string), str string)) {
	ok := C.QSpinBox_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_fixup
func miqt_exec_callback_QSpinBox_fixup(self *C.QSpinBox, cb C.intptr_t, str C.struct_miqt_string) {
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

	_goptr := newQSize(C.QSpinBox_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpinBox) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSpinBox_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_sizeHint
func miqt_exec_callback_QSpinBox_sizeHint(self *C.QSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QSpinBox_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpinBox) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSpinBox_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_minimumSizeHint
func miqt_exec_callback_QSpinBox_minimumSizeHint(self *C.QSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QSpinBox_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpinBox) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSpinBox_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_inputMethodQuery
func miqt_exec_callback_QSpinBox_inputMethodQuery(self *C.QSpinBox, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	C.QSpinBox_virtualbase_stepBy(unsafe.Pointer(this.h), (C.int)(steps))

}
func (this *QSpinBox) OnstepBy(slot func(super func(steps int), steps int)) {
	ok := C.QSpinBox_override_virtual_stepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_stepBy
func miqt_exec_callback_QSpinBox_stepBy(self *C.QSpinBox, cb C.intptr_t, steps C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(steps int), steps int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(steps)

	gofunc((&QSpinBox{h: self}).callVirtualBase_StepBy, slotval1)

}

func (this *QSpinBox) callVirtualBase_Clear() {

	C.QSpinBox_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QSpinBox) Onclear(slot func(super func())) {
	ok := C.QSpinBox_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_clear
func miqt_exec_callback_QSpinBox_clear(self *C.QSpinBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSpinBox{h: self}).callVirtualBase_Clear)

}

func (this *QSpinBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QSpinBox_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QSpinBox_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_resizeEvent
func miqt_exec_callback_QSpinBox_resizeEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSpinBox_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSpinBox_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_keyPressEvent
func miqt_exec_callback_QSpinBox_keyPressEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSpinBox_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSpinBox_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_keyReleaseEvent
func miqt_exec_callback_QSpinBox_keyReleaseEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSpinBox_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QSpinBox_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_wheelEvent
func miqt_exec_callback_QSpinBox_wheelEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSpinBox_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSpinBox_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_focusInEvent
func miqt_exec_callback_QSpinBox_focusInEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSpinBox_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSpinBox_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_focusOutEvent
func miqt_exec_callback_QSpinBox_focusOutEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSpinBox_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSpinBox_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_contextMenuEvent
func miqt_exec_callback_QSpinBox_contextMenuEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QSpinBox_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnchangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSpinBox_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_changeEvent
func miqt_exec_callback_QSpinBox_changeEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSpinBox_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSpinBox_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_closeEvent
func miqt_exec_callback_QSpinBox_closeEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSpinBox_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QSpinBox_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_hideEvent
func miqt_exec_callback_QSpinBox_hideEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSpinBox_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_mousePressEvent
func miqt_exec_callback_QSpinBox_mousePressEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSpinBox_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_mouseReleaseEvent
func miqt_exec_callback_QSpinBox_mouseReleaseEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSpinBox_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_mouseMoveEvent
func miqt_exec_callback_QSpinBox_mouseMoveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSpinBox_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSpinBox_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_timerEvent
func miqt_exec_callback_QSpinBox_timerEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QSpinBox_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QSpinBox_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_paintEvent
func miqt_exec_callback_QSpinBox_paintEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSpinBox_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QSpinBox_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_showEvent
func miqt_exec_callback_QSpinBox_showEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QSpinBox_virtualbase_stepEnabled(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnstepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	ok := C.QSpinBox_override_virtual_stepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_stepEnabled
func miqt_exec_callback_QSpinBox_stepEnabled(self *C.QSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_StepEnabled)

	return (C.int)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_DevType() int {

	return (int)(C.QSpinBox_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OndevType(slot func(super func() int) int) {
	ok := C.QSpinBox_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_devType
func miqt_exec_callback_QSpinBox_devType(self *C.QSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_SetVisible(visible bool) {

	C.QSpinBox_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSpinBox) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSpinBox_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_setVisible
func miqt_exec_callback_QSpinBox_setVisible(self *C.QSpinBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSpinBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSpinBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSpinBox_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSpinBox) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSpinBox_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_heightForWidth
func miqt_exec_callback_QSpinBox_heightForWidth(self *C.QSpinBox, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QSpinBox_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSpinBox_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_hasHeightForWidth
func miqt_exec_callback_QSpinBox_hasHeightForWidth(self *C.QSpinBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSpinBox_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSpinBox_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_paintEngine
func miqt_exec_callback_QSpinBox_paintEngine(self *C.QSpinBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSpinBox_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSpinBox_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_mouseDoubleClickEvent
func miqt_exec_callback_QSpinBox_mouseDoubleClickEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_EnterEvent(event *QEvent) {

	C.QSpinBox_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSpinBox_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_enterEvent
func miqt_exec_callback_QSpinBox_enterEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSpinBox_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSpinBox_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_leaveEvent
func miqt_exec_callback_QSpinBox_leaveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSpinBox_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QSpinBox_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_moveEvent
func miqt_exec_callback_QSpinBox_moveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSpinBox_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSpinBox_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_tabletEvent
func miqt_exec_callback_QSpinBox_tabletEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSpinBox_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSpinBox_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_actionEvent
func miqt_exec_callback_QSpinBox_actionEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSpinBox_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSpinBox_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_dragEnterEvent
func miqt_exec_callback_QSpinBox_dragEnterEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSpinBox_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSpinBox_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_dragMoveEvent
func miqt_exec_callback_QSpinBox_dragMoveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSpinBox_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSpinBox_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_dragLeaveEvent
func miqt_exec_callback_QSpinBox_dragLeaveEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSpinBox_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSpinBox_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_dropEvent
func miqt_exec_callback_QSpinBox_dropEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSpinBox_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QSpinBox) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QSpinBox_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_nativeEvent
func miqt_exec_callback_QSpinBox_nativeEvent(self *C.QSpinBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSpinBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSpinBox_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSpinBox) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSpinBox_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_metric
func miqt_exec_callback_QSpinBox_metric(self *C.QSpinBox, cb C.intptr_t, param1 C.int) C.int {
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

	C.QSpinBox_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSpinBox) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSpinBox_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_initPainter
func miqt_exec_callback_QSpinBox_initPainter(self *C.QSpinBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSpinBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSpinBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSpinBox_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSpinBox) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSpinBox_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_redirected
func miqt_exec_callback_QSpinBox_redirected(self *C.QSpinBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QSpinBox_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSpinBox) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSpinBox_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_sharedPainter
func miqt_exec_callback_QSpinBox_sharedPainter(self *C.QSpinBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpinBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSpinBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSpinBox_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSpinBox) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSpinBox_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_inputMethodEvent
func miqt_exec_callback_QSpinBox_inputMethodEvent(self *C.QSpinBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSpinBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSpinBox_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSpinBox) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSpinBox_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_focusNextPrevChild
func miqt_exec_callback_QSpinBox_focusNextPrevChild(self *C.QSpinBox, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QSpinBox_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSpinBox) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSpinBox_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_eventFilter
func miqt_exec_callback_QSpinBox_eventFilter(self *C.QSpinBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QSpinBox_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSpinBox_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_childEvent
func miqt_exec_callback_QSpinBox_childEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSpinBox_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSpinBox) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSpinBox_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_customEvent
func miqt_exec_callback_QSpinBox_customEvent(self *C.QSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSpinBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSpinBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSpinBox_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSpinBox) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSpinBox_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_connectNotify
func miqt_exec_callback_QSpinBox_connectNotify(self *C.QSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSpinBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSpinBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSpinBox_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSpinBox) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSpinBox_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpinBox_disconnectNotify
func miqt_exec_callback_QSpinBox_disconnectNotify(self *C.QSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QSpinBox_delete(this.h)
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
	return newQMetaObject(C.QDoubleSpinBox_metaObject(this.h))
}

func (this *QDoubleSpinBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDoubleSpinBox_metacast(this.h, param1_Cstring))
}

func QDoubleSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) Value() float64 {
	return (float64)(C.QDoubleSpinBox_value(this.h))
}

func (this *QDoubleSpinBox) Prefix() string {
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_prefix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) SetPrefix(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QDoubleSpinBox_setPrefix(this.h, prefix_ms)
}

func (this *QDoubleSpinBox) Suffix() string {
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_suffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) SetSuffix(suffix string) {
	suffix_ms := C.struct_miqt_string{}
	suffix_ms.data = C.CString(suffix)
	suffix_ms.len = C.size_t(len(suffix))
	defer C.free(unsafe.Pointer(suffix_ms.data))
	C.QDoubleSpinBox_setSuffix(this.h, suffix_ms)
}

func (this *QDoubleSpinBox) CleanText() string {
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_cleanText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) SingleStep() float64 {
	return (float64)(C.QDoubleSpinBox_singleStep(this.h))
}

func (this *QDoubleSpinBox) SetSingleStep(val float64) {
	C.QDoubleSpinBox_setSingleStep(this.h, (C.double)(val))
}

func (this *QDoubleSpinBox) Minimum() float64 {
	return (float64)(C.QDoubleSpinBox_minimum(this.h))
}

func (this *QDoubleSpinBox) SetMinimum(min float64) {
	C.QDoubleSpinBox_setMinimum(this.h, (C.double)(min))
}

func (this *QDoubleSpinBox) Maximum() float64 {
	return (float64)(C.QDoubleSpinBox_maximum(this.h))
}

func (this *QDoubleSpinBox) SetMaximum(max float64) {
	C.QDoubleSpinBox_setMaximum(this.h, (C.double)(max))
}

func (this *QDoubleSpinBox) SetRange(min float64, max float64) {
	C.QDoubleSpinBox_setRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QDoubleSpinBox) StepType() QAbstractSpinBox__StepType {
	return (QAbstractSpinBox__StepType)(C.QDoubleSpinBox_stepType(this.h))
}

func (this *QDoubleSpinBox) SetStepType(stepType QAbstractSpinBox__StepType) {
	C.QDoubleSpinBox_setStepType(this.h, (C.int)(stepType))
}

func (this *QDoubleSpinBox) Decimals() int {
	return (int)(C.QDoubleSpinBox_decimals(this.h))
}

func (this *QDoubleSpinBox) SetDecimals(prec int) {
	C.QDoubleSpinBox_setDecimals(this.h, (C.int)(prec))
}

func (this *QDoubleSpinBox) Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	return (QValidator__State)(C.QDoubleSpinBox_validate(this.h, input_ms, (*C.int)(unsafe.Pointer(pos))))
}

func (this *QDoubleSpinBox) ValueFromText(text string) float64 {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (float64)(C.QDoubleSpinBox_valueFromText(this.h, text_ms))
}

func (this *QDoubleSpinBox) TextFromValue(val float64) string {
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_textFromValue(this.h, (C.double)(val))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) Fixup(str string) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	C.QDoubleSpinBox_fixup(this.h, str_ms)
}

func (this *QDoubleSpinBox) SetValue(val float64) {
	C.QDoubleSpinBox_setValue(this.h, (C.double)(val))
}

func (this *QDoubleSpinBox) ValueChanged(param1 float64) {
	C.QDoubleSpinBox_valueChanged(this.h, (C.double)(param1))
}
func (this *QDoubleSpinBox) OnValueChanged(slot func(param1 float64)) {
	C.QDoubleSpinBox_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_valueChanged
func miqt_exec_callback_QDoubleSpinBox_valueChanged(cb C.intptr_t, param1 C.double) {
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
	C.QDoubleSpinBox_textChanged(this.h, param1_ms)
}
func (this *QDoubleSpinBox) OnTextChanged(slot func(param1 string)) {
	C.QDoubleSpinBox_connect_textChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_textChanged
func miqt_exec_callback_QDoubleSpinBox_textChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	C.QDoubleSpinBox_valueChangedWithQString(this.h, param1_ms)
}
func (this *QDoubleSpinBox) OnValueChangedWithQString(slot func(param1 string)) {
	C.QDoubleSpinBox_connect_valueChangedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleSpinBox_valueChangedWithQString
func miqt_exec_callback_QDoubleSpinBox_valueChangedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleSpinBox_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleSpinBox) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QDoubleSpinBox_virtualbase_validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QDoubleSpinBox) Onvalidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	ok := C.QDoubleSpinBox_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_validate
func miqt_exec_callback_QDoubleSpinBox_validate(self *C.QDoubleSpinBox, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
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

	return (float64)(C.QDoubleSpinBox_virtualbase_valueFromText(unsafe.Pointer(this.h), text_ms))

}
func (this *QDoubleSpinBox) OnvalueFromText(slot func(super func(text string) float64, text string) float64) {
	ok := C.QDoubleSpinBox_override_virtual_valueFromText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_valueFromText
func miqt_exec_callback_QDoubleSpinBox_valueFromText(self *C.QDoubleSpinBox, cb C.intptr_t, text C.struct_miqt_string) C.double {
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

	var _ms C.struct_miqt_string = C.QDoubleSpinBox_virtualbase_textFromValue(unsafe.Pointer(this.h), (C.double)(val))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QDoubleSpinBox) OntextFromValue(slot func(super func(val float64) string, val float64) string) {
	ok := C.QDoubleSpinBox_override_virtual_textFromValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_textFromValue
func miqt_exec_callback_QDoubleSpinBox_textFromValue(self *C.QDoubleSpinBox, cb C.intptr_t, val C.double) C.struct_miqt_string {
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

	C.QDoubleSpinBox_virtualbase_fixup(unsafe.Pointer(this.h), str_ms)

}
func (this *QDoubleSpinBox) Onfixup(slot func(super func(str string), str string)) {
	ok := C.QDoubleSpinBox_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_fixup
func miqt_exec_callback_QDoubleSpinBox_fixup(self *C.QDoubleSpinBox, cb C.intptr_t, str C.struct_miqt_string) {
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

	_goptr := newQSize(C.QDoubleSpinBox_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDoubleSpinBox) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDoubleSpinBox_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_sizeHint
func miqt_exec_callback_QDoubleSpinBox_sizeHint(self *C.QDoubleSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDoubleSpinBox_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDoubleSpinBox) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDoubleSpinBox_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_minimumSizeHint
func miqt_exec_callback_QDoubleSpinBox_minimumSizeHint(self *C.QDoubleSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDoubleSpinBox_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDoubleSpinBox) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDoubleSpinBox_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_event
func miqt_exec_callback_QDoubleSpinBox_event(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) C.bool {
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

	_goptr := newQVariant(C.QDoubleSpinBox_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDoubleSpinBox) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDoubleSpinBox_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_inputMethodQuery
func miqt_exec_callback_QDoubleSpinBox_inputMethodQuery(self *C.QDoubleSpinBox, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	C.QDoubleSpinBox_virtualbase_stepBy(unsafe.Pointer(this.h), (C.int)(steps))

}
func (this *QDoubleSpinBox) OnstepBy(slot func(super func(steps int), steps int)) {
	ok := C.QDoubleSpinBox_override_virtual_stepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_stepBy
func miqt_exec_callback_QDoubleSpinBox_stepBy(self *C.QDoubleSpinBox, cb C.intptr_t, steps C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(steps int), steps int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(steps)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_StepBy, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_Clear() {

	C.QDoubleSpinBox_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QDoubleSpinBox) Onclear(slot func(super func())) {
	ok := C.QDoubleSpinBox_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_clear
func miqt_exec_callback_QDoubleSpinBox_clear(self *C.QDoubleSpinBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_Clear)

}

func (this *QDoubleSpinBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QDoubleSpinBox_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_resizeEvent
func miqt_exec_callback_QDoubleSpinBox_resizeEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDoubleSpinBox_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_keyPressEvent
func miqt_exec_callback_QDoubleSpinBox_keyPressEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDoubleSpinBox_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_keyReleaseEvent
func miqt_exec_callback_QDoubleSpinBox_keyReleaseEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDoubleSpinBox_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_wheelEvent
func miqt_exec_callback_QDoubleSpinBox_wheelEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDoubleSpinBox_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_focusInEvent
func miqt_exec_callback_QDoubleSpinBox_focusInEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDoubleSpinBox_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_focusOutEvent
func miqt_exec_callback_QDoubleSpinBox_focusOutEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDoubleSpinBox_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_contextMenuEvent
func miqt_exec_callback_QDoubleSpinBox_contextMenuEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QDoubleSpinBox_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnchangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_changeEvent
func miqt_exec_callback_QDoubleSpinBox_changeEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDoubleSpinBox_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_closeEvent
func miqt_exec_callback_QDoubleSpinBox_closeEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDoubleSpinBox_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_hideEvent
func miqt_exec_callback_QDoubleSpinBox_hideEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_mousePressEvent
func miqt_exec_callback_QDoubleSpinBox_mousePressEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_mouseReleaseEvent
func miqt_exec_callback_QDoubleSpinBox_mouseReleaseEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_mouseMoveEvent
func miqt_exec_callback_QDoubleSpinBox_mouseMoveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDoubleSpinBox_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_timerEvent
func miqt_exec_callback_QDoubleSpinBox_timerEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDoubleSpinBox_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_paintEvent
func miqt_exec_callback_QDoubleSpinBox_paintEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDoubleSpinBox_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_showEvent
func miqt_exec_callback_QDoubleSpinBox_showEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QDoubleSpinBox_virtualbase_stepEnabled(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnstepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	ok := C.QDoubleSpinBox_override_virtual_stepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_stepEnabled
func miqt_exec_callback_QDoubleSpinBox_stepEnabled(self *C.QDoubleSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_StepEnabled)

	return (C.int)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_DevType() int {

	return (int)(C.QDoubleSpinBox_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OndevType(slot func(super func() int) int) {
	ok := C.QDoubleSpinBox_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_devType
func miqt_exec_callback_QDoubleSpinBox_devType(self *C.QDoubleSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_SetVisible(visible bool) {

	C.QDoubleSpinBox_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDoubleSpinBox) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDoubleSpinBox_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_setVisible
func miqt_exec_callback_QDoubleSpinBox_setVisible(self *C.QDoubleSpinBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDoubleSpinBox_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDoubleSpinBox) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDoubleSpinBox_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_heightForWidth
func miqt_exec_callback_QDoubleSpinBox_heightForWidth(self *C.QDoubleSpinBox, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QDoubleSpinBox_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDoubleSpinBox_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_hasHeightForWidth
func miqt_exec_callback_QDoubleSpinBox_hasHeightForWidth(self *C.QDoubleSpinBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDoubleSpinBox_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDoubleSpinBox_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_paintEngine
func miqt_exec_callback_QDoubleSpinBox_paintEngine(self *C.QDoubleSpinBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDoubleSpinBox_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_mouseDoubleClickEvent
func miqt_exec_callback_QDoubleSpinBox_mouseDoubleClickEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_EnterEvent(event *QEvent) {

	C.QDoubleSpinBox_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_enterEvent
func miqt_exec_callback_QDoubleSpinBox_enterEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDoubleSpinBox_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_leaveEvent
func miqt_exec_callback_QDoubleSpinBox_leaveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDoubleSpinBox_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_moveEvent
func miqt_exec_callback_QDoubleSpinBox_moveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDoubleSpinBox_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_tabletEvent
func miqt_exec_callback_QDoubleSpinBox_tabletEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDoubleSpinBox_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_actionEvent
func miqt_exec_callback_QDoubleSpinBox_actionEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDoubleSpinBox_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_dragEnterEvent
func miqt_exec_callback_QDoubleSpinBox_dragEnterEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDoubleSpinBox_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_dragMoveEvent
func miqt_exec_callback_QDoubleSpinBox_dragMoveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDoubleSpinBox_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_dragLeaveEvent
func miqt_exec_callback_QDoubleSpinBox_dragLeaveEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDoubleSpinBox_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_dropEvent
func miqt_exec_callback_QDoubleSpinBox_dropEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDoubleSpinBox_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QDoubleSpinBox) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QDoubleSpinBox_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_nativeEvent
func miqt_exec_callback_QDoubleSpinBox_nativeEvent(self *C.QDoubleSpinBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleSpinBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDoubleSpinBox_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDoubleSpinBox) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDoubleSpinBox_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_metric
func miqt_exec_callback_QDoubleSpinBox_metric(self *C.QDoubleSpinBox, cb C.intptr_t, param1 C.int) C.int {
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

	C.QDoubleSpinBox_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDoubleSpinBox) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDoubleSpinBox_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_initPainter
func miqt_exec_callback_QDoubleSpinBox_initPainter(self *C.QDoubleSpinBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDoubleSpinBox_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDoubleSpinBox) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDoubleSpinBox_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_redirected
func miqt_exec_callback_QDoubleSpinBox_redirected(self *C.QDoubleSpinBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QDoubleSpinBox_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDoubleSpinBox) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDoubleSpinBox_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_sharedPainter
func miqt_exec_callback_QDoubleSpinBox_sharedPainter(self *C.QDoubleSpinBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDoubleSpinBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDoubleSpinBox_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDoubleSpinBox) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_inputMethodEvent
func miqt_exec_callback_QDoubleSpinBox_inputMethodEvent(self *C.QDoubleSpinBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDoubleSpinBox_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDoubleSpinBox) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDoubleSpinBox_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_focusNextPrevChild
func miqt_exec_callback_QDoubleSpinBox_focusNextPrevChild(self *C.QDoubleSpinBox, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QDoubleSpinBox_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDoubleSpinBox) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDoubleSpinBox_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_eventFilter
func miqt_exec_callback_QDoubleSpinBox_eventFilter(self *C.QDoubleSpinBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QDoubleSpinBox_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_childEvent
func miqt_exec_callback_QDoubleSpinBox_childEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDoubleSpinBox_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleSpinBox) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDoubleSpinBox_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_customEvent
func miqt_exec_callback_QDoubleSpinBox_customEvent(self *C.QDoubleSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDoubleSpinBox_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDoubleSpinBox) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDoubleSpinBox_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_connectNotify
func miqt_exec_callback_QDoubleSpinBox_connectNotify(self *C.QDoubleSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDoubleSpinBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDoubleSpinBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDoubleSpinBox_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDoubleSpinBox) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDoubleSpinBox_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleSpinBox_disconnectNotify
func miqt_exec_callback_QDoubleSpinBox_disconnectNotify(self *C.QDoubleSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QDoubleSpinBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDoubleSpinBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QDoubleSpinBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
