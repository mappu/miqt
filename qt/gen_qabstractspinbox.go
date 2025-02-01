package qt

/*

#include "gen_qabstractspinbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractSpinBox__StepEnabledFlag int

const (
	QAbstractSpinBox__StepNone        QAbstractSpinBox__StepEnabledFlag = 0
	QAbstractSpinBox__StepUpEnabled   QAbstractSpinBox__StepEnabledFlag = 1
	QAbstractSpinBox__StepDownEnabled QAbstractSpinBox__StepEnabledFlag = 2
)

type QAbstractSpinBox__ButtonSymbols int

const (
	QAbstractSpinBox__UpDownArrows QAbstractSpinBox__ButtonSymbols = 0
	QAbstractSpinBox__PlusMinus    QAbstractSpinBox__ButtonSymbols = 1
	QAbstractSpinBox__NoButtons    QAbstractSpinBox__ButtonSymbols = 2
)

type QAbstractSpinBox__CorrectionMode int

const (
	QAbstractSpinBox__CorrectToPreviousValue QAbstractSpinBox__CorrectionMode = 0
	QAbstractSpinBox__CorrectToNearestValue  QAbstractSpinBox__CorrectionMode = 1
)

type QAbstractSpinBox__StepType int

const (
	QAbstractSpinBox__DefaultStepType         QAbstractSpinBox__StepType = 0
	QAbstractSpinBox__AdaptiveDecimalStepType QAbstractSpinBox__StepType = 1
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

func (this *QAbstractSpinBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractSpinBox constructs the type using only CGO pointers.
func newQAbstractSpinBox(h *C.QAbstractSpinBox) *QAbstractSpinBox {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QAbstractSpinBox_virtbase(h, &outptr_QWidget)

	return &QAbstractSpinBox{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQAbstractSpinBox constructs the type using only unsafe pointers.
func UnsafeNewQAbstractSpinBox(h unsafe.Pointer) *QAbstractSpinBox {
	return newQAbstractSpinBox((*C.QAbstractSpinBox)(h))
}

// NewQAbstractSpinBox constructs a new QAbstractSpinBox object.
func NewQAbstractSpinBox(parent *QWidget) *QAbstractSpinBox {

	return newQAbstractSpinBox(C.QAbstractSpinBox_new(parent.cPointer()))
}

// NewQAbstractSpinBox2 constructs a new QAbstractSpinBox object.
func NewQAbstractSpinBox2() *QAbstractSpinBox {

	return newQAbstractSpinBox(C.QAbstractSpinBox_new2())
}

func (this *QAbstractSpinBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractSpinBox_metaObject(this.h))
}

func (this *QAbstractSpinBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractSpinBox_metacast(this.h, param1_Cstring))
}

func QAbstractSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSpinBox) ButtonSymbols() QAbstractSpinBox__ButtonSymbols {
	return (QAbstractSpinBox__ButtonSymbols)(C.QAbstractSpinBox_buttonSymbols(this.h))
}

func (this *QAbstractSpinBox) SetButtonSymbols(bs QAbstractSpinBox__ButtonSymbols) {
	C.QAbstractSpinBox_setButtonSymbols(this.h, (C.int)(bs))
}

func (this *QAbstractSpinBox) SetCorrectionMode(cm QAbstractSpinBox__CorrectionMode) {
	C.QAbstractSpinBox_setCorrectionMode(this.h, (C.int)(cm))
}

func (this *QAbstractSpinBox) CorrectionMode() QAbstractSpinBox__CorrectionMode {
	return (QAbstractSpinBox__CorrectionMode)(C.QAbstractSpinBox_correctionMode(this.h))
}

func (this *QAbstractSpinBox) HasAcceptableInput() bool {
	return (bool)(C.QAbstractSpinBox_hasAcceptableInput(this.h))
}

func (this *QAbstractSpinBox) Text() string {
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSpinBox) SpecialValueText() string {
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_specialValueText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSpinBox) SetSpecialValueText(txt string) {
	txt_ms := C.struct_miqt_string{}
	txt_ms.data = C.CString(txt)
	txt_ms.len = C.size_t(len(txt))
	defer C.free(unsafe.Pointer(txt_ms.data))
	C.QAbstractSpinBox_setSpecialValueText(this.h, txt_ms)
}

func (this *QAbstractSpinBox) Wrapping() bool {
	return (bool)(C.QAbstractSpinBox_wrapping(this.h))
}

func (this *QAbstractSpinBox) SetWrapping(w bool) {
	C.QAbstractSpinBox_setWrapping(this.h, (C.bool)(w))
}

func (this *QAbstractSpinBox) SetReadOnly(r bool) {
	C.QAbstractSpinBox_setReadOnly(this.h, (C.bool)(r))
}

func (this *QAbstractSpinBox) IsReadOnly() bool {
	return (bool)(C.QAbstractSpinBox_isReadOnly(this.h))
}

func (this *QAbstractSpinBox) SetKeyboardTracking(kt bool) {
	C.QAbstractSpinBox_setKeyboardTracking(this.h, (C.bool)(kt))
}

func (this *QAbstractSpinBox) KeyboardTracking() bool {
	return (bool)(C.QAbstractSpinBox_keyboardTracking(this.h))
}

func (this *QAbstractSpinBox) SetAlignment(flag AlignmentFlag) {
	C.QAbstractSpinBox_setAlignment(this.h, (C.int)(flag))
}

func (this *QAbstractSpinBox) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QAbstractSpinBox_alignment(this.h))
}

func (this *QAbstractSpinBox) SetFrame(frame bool) {
	C.QAbstractSpinBox_setFrame(this.h, (C.bool)(frame))
}

func (this *QAbstractSpinBox) HasFrame() bool {
	return (bool)(C.QAbstractSpinBox_hasFrame(this.h))
}

func (this *QAbstractSpinBox) SetAccelerated(on bool) {
	C.QAbstractSpinBox_setAccelerated(this.h, (C.bool)(on))
}

func (this *QAbstractSpinBox) IsAccelerated() bool {
	return (bool)(C.QAbstractSpinBox_isAccelerated(this.h))
}

func (this *QAbstractSpinBox) SetGroupSeparatorShown(shown bool) {
	C.QAbstractSpinBox_setGroupSeparatorShown(this.h, (C.bool)(shown))
}

func (this *QAbstractSpinBox) IsGroupSeparatorShown() bool {
	return (bool)(C.QAbstractSpinBox_isGroupSeparatorShown(this.h))
}

func (this *QAbstractSpinBox) SizeHint() *QSize {
	_goptr := newQSize(C.QAbstractSpinBox_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSpinBox) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QAbstractSpinBox_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSpinBox) InterpretText() {
	C.QAbstractSpinBox_interpretText(this.h)
}

func (this *QAbstractSpinBox) Event(event *QEvent) bool {
	return (bool)(C.QAbstractSpinBox_event(this.h, event.cPointer()))
}

func (this *QAbstractSpinBox) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QAbstractSpinBox_inputMethodQuery(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSpinBox) Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	return (QValidator__State)(C.QAbstractSpinBox_validate(this.h, input_ms, (*C.int)(unsafe.Pointer(pos))))
}

func (this *QAbstractSpinBox) Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	C.QAbstractSpinBox_fixup(this.h, input_ms)
}

func (this *QAbstractSpinBox) StepBy(steps int) {
	C.QAbstractSpinBox_stepBy(this.h, (C.int)(steps))
}

func (this *QAbstractSpinBox) StepUp() {
	C.QAbstractSpinBox_stepUp(this.h)
}

func (this *QAbstractSpinBox) StepDown() {
	C.QAbstractSpinBox_stepDown(this.h)
}

func (this *QAbstractSpinBox) SelectAll() {
	C.QAbstractSpinBox_selectAll(this.h)
}

func (this *QAbstractSpinBox) Clear() {
	C.QAbstractSpinBox_clear(this.h)
}

func (this *QAbstractSpinBox) EditingFinished() {
	C.QAbstractSpinBox_editingFinished(this.h)
}
func (this *QAbstractSpinBox) OnEditingFinished(slot func()) {
	C.QAbstractSpinBox_connect_editingFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_editingFinished
func miqt_exec_callback_QAbstractSpinBox_editingFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAbstractSpinBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSpinBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QAbstractSpinBox_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSpinBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractSpinBox_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_sizeHint
func miqt_exec_callback_QAbstractSpinBox_sizeHint(self *C.QAbstractSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QAbstractSpinBox_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSpinBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractSpinBox_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_minimumSizeHint
func miqt_exec_callback_QAbstractSpinBox_minimumSizeHint(self *C.QAbstractSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAbstractSpinBox_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractSpinBox) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAbstractSpinBox_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_event
func miqt_exec_callback_QAbstractSpinBox_event(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QAbstractSpinBox_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSpinBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QAbstractSpinBox_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_inputMethodQuery
func miqt_exec_callback_QAbstractSpinBox_inputMethodQuery(self *C.QAbstractSpinBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QAbstractSpinBox_virtualbase_validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QAbstractSpinBox) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	ok := C.QAbstractSpinBox_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_validate
func miqt_exec_callback_QAbstractSpinBox_validate(self *C.QAbstractSpinBox, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
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

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	C.QAbstractSpinBox_virtualbase_fixup(unsafe.Pointer(this.h), input_ms)

}
func (this *QAbstractSpinBox) OnFixup(slot func(super func(input string), input string)) {
	ok := C.QAbstractSpinBox_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_fixup
func miqt_exec_callback_QAbstractSpinBox_fixup(self *C.QAbstractSpinBox, cb C.intptr_t, input C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string), input string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_StepBy(steps int) {

	C.QAbstractSpinBox_virtualbase_stepBy(unsafe.Pointer(this.h), (C.int)(steps))

}
func (this *QAbstractSpinBox) OnStepBy(slot func(super func(steps int), steps int)) {
	ok := C.QAbstractSpinBox_override_virtual_stepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_stepBy
func miqt_exec_callback_QAbstractSpinBox_stepBy(self *C.QAbstractSpinBox, cb C.intptr_t, steps C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(steps int), steps int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(steps)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_StepBy, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_Clear() {

	C.QAbstractSpinBox_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QAbstractSpinBox) OnClear(slot func(super func())) {
	ok := C.QAbstractSpinBox_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_clear
func miqt_exec_callback_QAbstractSpinBox_clear(self *C.QAbstractSpinBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_Clear)

}

func (this *QAbstractSpinBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QAbstractSpinBox_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_resizeEvent
func miqt_exec_callback_QAbstractSpinBox_resizeEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QAbstractSpinBox_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_keyPressEvent
func miqt_exec_callback_QAbstractSpinBox_keyPressEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QAbstractSpinBox_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_keyReleaseEvent
func miqt_exec_callback_QAbstractSpinBox_keyReleaseEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QAbstractSpinBox_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_wheelEvent
func miqt_exec_callback_QAbstractSpinBox_wheelEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QAbstractSpinBox_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_focusInEvent
func miqt_exec_callback_QAbstractSpinBox_focusInEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QAbstractSpinBox_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_focusOutEvent
func miqt_exec_callback_QAbstractSpinBox_focusOutEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QAbstractSpinBox_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_contextMenuEvent
func miqt_exec_callback_QAbstractSpinBox_contextMenuEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QAbstractSpinBox_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_changeEvent
func miqt_exec_callback_QAbstractSpinBox_changeEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QAbstractSpinBox_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_closeEvent
func miqt_exec_callback_QAbstractSpinBox_closeEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QAbstractSpinBox_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_hideEvent
func miqt_exec_callback_QAbstractSpinBox_hideEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QAbstractSpinBox_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_mousePressEvent
func miqt_exec_callback_QAbstractSpinBox_mousePressEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QAbstractSpinBox_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_mouseReleaseEvent
func miqt_exec_callback_QAbstractSpinBox_mouseReleaseEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QAbstractSpinBox_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_mouseMoveEvent
func miqt_exec_callback_QAbstractSpinBox_mouseMoveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractSpinBox_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_timerEvent
func miqt_exec_callback_QAbstractSpinBox_timerEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QAbstractSpinBox_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_paintEvent
func miqt_exec_callback_QAbstractSpinBox_paintEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QAbstractSpinBox_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_showEvent
func miqt_exec_callback_QAbstractSpinBox_showEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QAbstractSpinBox_virtualbase_stepEnabled(unsafe.Pointer(this.h)))

}
func (this *QAbstractSpinBox) OnStepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	ok := C.QAbstractSpinBox_override_virtual_stepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_stepEnabled
func miqt_exec_callback_QAbstractSpinBox_stepEnabled(self *C.QAbstractSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_StepEnabled)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_DevType() int {

	return (int)(C.QAbstractSpinBox_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QAbstractSpinBox) OnDevType(slot func(super func() int) int) {
	ok := C.QAbstractSpinBox_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_devType
func miqt_exec_callback_QAbstractSpinBox_devType(self *C.QAbstractSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_SetVisible(visible bool) {

	C.QAbstractSpinBox_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QAbstractSpinBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QAbstractSpinBox_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_setVisible
func miqt_exec_callback_QAbstractSpinBox_setVisible(self *C.QAbstractSpinBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QAbstractSpinBox_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractSpinBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QAbstractSpinBox_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_heightForWidth
func miqt_exec_callback_QAbstractSpinBox_heightForWidth(self *C.QAbstractSpinBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QAbstractSpinBox_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QAbstractSpinBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QAbstractSpinBox_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_hasHeightForWidth
func miqt_exec_callback_QAbstractSpinBox_hasHeightForWidth(self *C.QAbstractSpinBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QAbstractSpinBox_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QAbstractSpinBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QAbstractSpinBox_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_paintEngine
func miqt_exec_callback_QAbstractSpinBox_paintEngine(self *C.QAbstractSpinBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QAbstractSpinBox_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_mouseDoubleClickEvent
func miqt_exec_callback_QAbstractSpinBox_mouseDoubleClickEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_EnterEvent(event *QEvent) {

	C.QAbstractSpinBox_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_enterEvent
func miqt_exec_callback_QAbstractSpinBox_enterEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QAbstractSpinBox_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_leaveEvent
func miqt_exec_callback_QAbstractSpinBox_leaveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QAbstractSpinBox_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_moveEvent
func miqt_exec_callback_QAbstractSpinBox_moveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QAbstractSpinBox_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_tabletEvent
func miqt_exec_callback_QAbstractSpinBox_tabletEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QAbstractSpinBox_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_actionEvent
func miqt_exec_callback_QAbstractSpinBox_actionEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QAbstractSpinBox_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_dragEnterEvent
func miqt_exec_callback_QAbstractSpinBox_dragEnterEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QAbstractSpinBox_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_dragMoveEvent
func miqt_exec_callback_QAbstractSpinBox_dragMoveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QAbstractSpinBox_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_dragLeaveEvent
func miqt_exec_callback_QAbstractSpinBox_dragLeaveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QAbstractSpinBox_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_dropEvent
func miqt_exec_callback_QAbstractSpinBox_dropEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QAbstractSpinBox_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QAbstractSpinBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QAbstractSpinBox_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_nativeEvent
func miqt_exec_callback_QAbstractSpinBox_nativeEvent(self *C.QAbstractSpinBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QAbstractSpinBox_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractSpinBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QAbstractSpinBox_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_metric
func miqt_exec_callback_QAbstractSpinBox_metric(self *C.QAbstractSpinBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QAbstractSpinBox_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QAbstractSpinBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QAbstractSpinBox_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_initPainter
func miqt_exec_callback_QAbstractSpinBox_initPainter(self *C.QAbstractSpinBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QAbstractSpinBox_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QAbstractSpinBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QAbstractSpinBox_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_redirected
func miqt_exec_callback_QAbstractSpinBox_redirected(self *C.QAbstractSpinBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QAbstractSpinBox_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QAbstractSpinBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QAbstractSpinBox_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_sharedPainter
func miqt_exec_callback_QAbstractSpinBox_sharedPainter(self *C.QAbstractSpinBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QAbstractSpinBox_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractSpinBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_inputMethodEvent
func miqt_exec_callback_QAbstractSpinBox_inputMethodEvent(self *C.QAbstractSpinBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QAbstractSpinBox_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractSpinBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QAbstractSpinBox_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_focusNextPrevChild
func miqt_exec_callback_QAbstractSpinBox_focusNextPrevChild(self *C.QAbstractSpinBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractSpinBox_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractSpinBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAbstractSpinBox_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_eventFilter
func miqt_exec_callback_QAbstractSpinBox_eventFilter(self *C.QAbstractSpinBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractSpinBox_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_childEvent
func miqt_exec_callback_QAbstractSpinBox_childEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractSpinBox_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractSpinBox_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_customEvent
func miqt_exec_callback_QAbstractSpinBox_customEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractSpinBox_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractSpinBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractSpinBox_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_connectNotify
func miqt_exec_callback_QAbstractSpinBox_connectNotify(self *C.QAbstractSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractSpinBox_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractSpinBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractSpinBox_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSpinBox_disconnectNotify
func miqt_exec_callback_QAbstractSpinBox_disconnectNotify(self *C.QAbstractSpinBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractSpinBox) Delete() {
	C.QAbstractSpinBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractSpinBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractSpinBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
