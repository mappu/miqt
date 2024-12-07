package qt6

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
	h          *C.QAbstractSpinBox
	isSubclass bool
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
func newQAbstractSpinBox(h *C.QAbstractSpinBox, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QAbstractSpinBox {
	if h == nil {
		return nil
	}
	return &QAbstractSpinBox{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQAbstractSpinBox constructs the type using only unsafe pointers.
func UnsafeNewQAbstractSpinBox(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QAbstractSpinBox {
	if h == nil {
		return nil
	}

	return &QAbstractSpinBox{h: (*C.QAbstractSpinBox)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQAbstractSpinBox constructs a new QAbstractSpinBox object.
func NewQAbstractSpinBox(parent *QWidget) *QAbstractSpinBox {
	var outptr_QAbstractSpinBox *C.QAbstractSpinBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QAbstractSpinBox_new(parent.cPointer(), &outptr_QAbstractSpinBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQAbstractSpinBox(outptr_QAbstractSpinBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQAbstractSpinBox2 constructs a new QAbstractSpinBox object.
func NewQAbstractSpinBox2() *QAbstractSpinBox {
	var outptr_QAbstractSpinBox *C.QAbstractSpinBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QAbstractSpinBox_new2(&outptr_QAbstractSpinBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQAbstractSpinBox(outptr_QAbstractSpinBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractSpinBox) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractSpinBox_MetaObject(this.h)))
}

func (this *QAbstractSpinBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractSpinBox_Metacast(this.h, param1_Cstring))
}

func QAbstractSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSpinBox) ButtonSymbols() QAbstractSpinBox__ButtonSymbols {
	return (QAbstractSpinBox__ButtonSymbols)(C.QAbstractSpinBox_ButtonSymbols(this.h))
}

func (this *QAbstractSpinBox) SetButtonSymbols(bs QAbstractSpinBox__ButtonSymbols) {
	C.QAbstractSpinBox_SetButtonSymbols(this.h, (C.int)(bs))
}

func (this *QAbstractSpinBox) SetCorrectionMode(cm QAbstractSpinBox__CorrectionMode) {
	C.QAbstractSpinBox_SetCorrectionMode(this.h, (C.int)(cm))
}

func (this *QAbstractSpinBox) CorrectionMode() QAbstractSpinBox__CorrectionMode {
	return (QAbstractSpinBox__CorrectionMode)(C.QAbstractSpinBox_CorrectionMode(this.h))
}

func (this *QAbstractSpinBox) HasAcceptableInput() bool {
	return (bool)(C.QAbstractSpinBox_HasAcceptableInput(this.h))
}

func (this *QAbstractSpinBox) Text() string {
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSpinBox) SpecialValueText() string {
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_SpecialValueText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSpinBox) SetSpecialValueText(txt string) {
	txt_ms := C.struct_miqt_string{}
	txt_ms.data = C.CString(txt)
	txt_ms.len = C.size_t(len(txt))
	defer C.free(unsafe.Pointer(txt_ms.data))
	C.QAbstractSpinBox_SetSpecialValueText(this.h, txt_ms)
}

func (this *QAbstractSpinBox) Wrapping() bool {
	return (bool)(C.QAbstractSpinBox_Wrapping(this.h))
}

func (this *QAbstractSpinBox) SetWrapping(w bool) {
	C.QAbstractSpinBox_SetWrapping(this.h, (C.bool)(w))
}

func (this *QAbstractSpinBox) SetReadOnly(r bool) {
	C.QAbstractSpinBox_SetReadOnly(this.h, (C.bool)(r))
}

func (this *QAbstractSpinBox) IsReadOnly() bool {
	return (bool)(C.QAbstractSpinBox_IsReadOnly(this.h))
}

func (this *QAbstractSpinBox) SetKeyboardTracking(kt bool) {
	C.QAbstractSpinBox_SetKeyboardTracking(this.h, (C.bool)(kt))
}

func (this *QAbstractSpinBox) KeyboardTracking() bool {
	return (bool)(C.QAbstractSpinBox_KeyboardTracking(this.h))
}

func (this *QAbstractSpinBox) SetAlignment(flag AlignmentFlag) {
	C.QAbstractSpinBox_SetAlignment(this.h, (C.int)(flag))
}

func (this *QAbstractSpinBox) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QAbstractSpinBox_Alignment(this.h))
}

func (this *QAbstractSpinBox) SetFrame(frame bool) {
	C.QAbstractSpinBox_SetFrame(this.h, (C.bool)(frame))
}

func (this *QAbstractSpinBox) HasFrame() bool {
	return (bool)(C.QAbstractSpinBox_HasFrame(this.h))
}

func (this *QAbstractSpinBox) SetAccelerated(on bool) {
	C.QAbstractSpinBox_SetAccelerated(this.h, (C.bool)(on))
}

func (this *QAbstractSpinBox) IsAccelerated() bool {
	return (bool)(C.QAbstractSpinBox_IsAccelerated(this.h))
}

func (this *QAbstractSpinBox) SetGroupSeparatorShown(shown bool) {
	C.QAbstractSpinBox_SetGroupSeparatorShown(this.h, (C.bool)(shown))
}

func (this *QAbstractSpinBox) IsGroupSeparatorShown() bool {
	return (bool)(C.QAbstractSpinBox_IsGroupSeparatorShown(this.h))
}

func (this *QAbstractSpinBox) SizeHint() *QSize {
	_ret := C.QAbstractSpinBox_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSpinBox) MinimumSizeHint() *QSize {
	_ret := C.QAbstractSpinBox_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSpinBox) InterpretText() {
	C.QAbstractSpinBox_InterpretText(this.h)
}

func (this *QAbstractSpinBox) Event(event *QEvent) bool {
	return (bool)(C.QAbstractSpinBox_Event(this.h, event.cPointer()))
}

func (this *QAbstractSpinBox) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_ret := C.QAbstractSpinBox_InputMethodQuery(this.h, (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSpinBox) Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	return (QValidator__State)(C.QAbstractSpinBox_Validate(this.h, input_ms, (*C.int)(unsafe.Pointer(pos))))
}

func (this *QAbstractSpinBox) Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	C.QAbstractSpinBox_Fixup(this.h, input_ms)
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
	C.QAbstractSpinBox_connect_EditingFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_EditingFinished
func miqt_exec_callback_QAbstractSpinBox_EditingFinished(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSpinBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSpinBox) callVirtualBase_SizeHint() *QSize {

	_ret := C.QAbstractSpinBox_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSpinBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_SizeHint
func miqt_exec_callback_QAbstractSpinBox_SizeHint(self *C.QAbstractSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QAbstractSpinBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSpinBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_MinimumSizeHint
func miqt_exec_callback_QAbstractSpinBox_MinimumSizeHint(self *C.QAbstractSpinBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAbstractSpinBox_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractSpinBox) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_Event
func miqt_exec_callback_QAbstractSpinBox_Event(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QAbstractSpinBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSpinBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_InputMethodQuery
func miqt_exec_callback_QAbstractSpinBox_InputMethodQuery(self *C.QAbstractSpinBox, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (QValidator__State)(C.QAbstractSpinBox_virtualbase_Validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QAbstractSpinBox) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_Validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_Validate
func miqt_exec_callback_QAbstractSpinBox_Validate(self *C.QAbstractSpinBox, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
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

	C.QAbstractSpinBox_virtualbase_Fixup(unsafe.Pointer(this.h), input_ms)

}
func (this *QAbstractSpinBox) OnFixup(slot func(super func(input string), input string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_Fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_Fixup
func miqt_exec_callback_QAbstractSpinBox_Fixup(self *C.QAbstractSpinBox, cb C.intptr_t, input C.struct_miqt_string) {
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

	C.QAbstractSpinBox_virtualbase_StepBy(unsafe.Pointer(this.h), (C.int)(steps))

}
func (this *QAbstractSpinBox) OnStepBy(slot func(super func(steps int), steps int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_StepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_StepBy
func miqt_exec_callback_QAbstractSpinBox_StepBy(self *C.QAbstractSpinBox, cb C.intptr_t, steps C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(steps int), steps int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(steps)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_StepBy, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_Clear() {

	C.QAbstractSpinBox_virtualbase_Clear(unsafe.Pointer(this.h))

}
func (this *QAbstractSpinBox) OnClear(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_Clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_Clear
func miqt_exec_callback_QAbstractSpinBox_Clear(self *C.QAbstractSpinBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_Clear)

}

func (this *QAbstractSpinBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QAbstractSpinBox_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_ResizeEvent
func miqt_exec_callback_QAbstractSpinBox_ResizeEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QAbstractSpinBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_KeyPressEvent
func miqt_exec_callback_QAbstractSpinBox_KeyPressEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QAbstractSpinBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_KeyReleaseEvent
func miqt_exec_callback_QAbstractSpinBox_KeyReleaseEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QAbstractSpinBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_WheelEvent
func miqt_exec_callback_QAbstractSpinBox_WheelEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QAbstractSpinBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_FocusInEvent
func miqt_exec_callback_QAbstractSpinBox_FocusInEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QAbstractSpinBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_FocusOutEvent
func miqt_exec_callback_QAbstractSpinBox_FocusOutEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QAbstractSpinBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_ContextMenuEvent
func miqt_exec_callback_QAbstractSpinBox_ContextMenuEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QAbstractSpinBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_ChangeEvent
func miqt_exec_callback_QAbstractSpinBox_ChangeEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QAbstractSpinBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_CloseEvent
func miqt_exec_callback_QAbstractSpinBox_CloseEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QAbstractSpinBox_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_HideEvent
func miqt_exec_callback_QAbstractSpinBox_HideEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QAbstractSpinBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_MousePressEvent
func miqt_exec_callback_QAbstractSpinBox_MousePressEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QAbstractSpinBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_MouseReleaseEvent
func miqt_exec_callback_QAbstractSpinBox_MouseReleaseEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QAbstractSpinBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_MouseMoveEvent
func miqt_exec_callback_QAbstractSpinBox_MouseMoveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractSpinBox_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_TimerEvent
func miqt_exec_callback_QAbstractSpinBox_TimerEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QAbstractSpinBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_PaintEvent
func miqt_exec_callback_QAbstractSpinBox_PaintEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QAbstractSpinBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_ShowEvent
func miqt_exec_callback_QAbstractSpinBox_ShowEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_InitStyleOption(option *QStyleOptionSpinBox) {

	C.QAbstractSpinBox_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QAbstractSpinBox) OnInitStyleOption(slot func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_InitStyleOption
func miqt_exec_callback_QAbstractSpinBox_InitStyleOption(self *C.QAbstractSpinBox, cb C.intptr_t, option *C.QStyleOptionSpinBox) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQStyleOptionSpinBox(unsafe.Pointer(option), nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QAbstractSpinBox_virtualbase_StepEnabled(unsafe.Pointer(this.h)))

}
func (this *QAbstractSpinBox) OnStepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_StepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_StepEnabled
func miqt_exec_callback_QAbstractSpinBox_StepEnabled(self *C.QAbstractSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_StepEnabled)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_DevType() int {

	return (int)(C.QAbstractSpinBox_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QAbstractSpinBox) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_DevType
func miqt_exec_callback_QAbstractSpinBox_DevType(self *C.QAbstractSpinBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_SetVisible(visible bool) {

	C.QAbstractSpinBox_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QAbstractSpinBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_SetVisible
func miqt_exec_callback_QAbstractSpinBox_SetVisible(self *C.QAbstractSpinBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QAbstractSpinBox_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractSpinBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_HeightForWidth
func miqt_exec_callback_QAbstractSpinBox_HeightForWidth(self *C.QAbstractSpinBox, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QAbstractSpinBox_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QAbstractSpinBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_HasHeightForWidth
func miqt_exec_callback_QAbstractSpinBox_HasHeightForWidth(self *C.QAbstractSpinBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QAbstractSpinBox_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QAbstractSpinBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_PaintEngine
func miqt_exec_callback_QAbstractSpinBox_PaintEngine(self *C.QAbstractSpinBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QAbstractSpinBox_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_MouseDoubleClickEvent
func miqt_exec_callback_QAbstractSpinBox_MouseDoubleClickEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QAbstractSpinBox_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_EnterEvent
func miqt_exec_callback_QAbstractSpinBox_EnterEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEnterEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QAbstractSpinBox_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_LeaveEvent
func miqt_exec_callback_QAbstractSpinBox_LeaveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QAbstractSpinBox_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_MoveEvent
func miqt_exec_callback_QAbstractSpinBox_MoveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QAbstractSpinBox_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_TabletEvent
func miqt_exec_callback_QAbstractSpinBox_TabletEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QAbstractSpinBox_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_ActionEvent
func miqt_exec_callback_QAbstractSpinBox_ActionEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QAbstractSpinBox_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_DragEnterEvent
func miqt_exec_callback_QAbstractSpinBox_DragEnterEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QAbstractSpinBox_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_DragMoveEvent
func miqt_exec_callback_QAbstractSpinBox_DragMoveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QAbstractSpinBox_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_DragLeaveEvent
func miqt_exec_callback_QAbstractSpinBox_DragLeaveEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QAbstractSpinBox_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSpinBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_DropEvent
func miqt_exec_callback_QAbstractSpinBox_DropEvent(self *C.QAbstractSpinBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QAbstractSpinBox_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QAbstractSpinBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_NativeEvent
func miqt_exec_callback_QAbstractSpinBox_NativeEvent(self *C.QAbstractSpinBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSpinBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QAbstractSpinBox_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractSpinBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_Metric
func miqt_exec_callback_QAbstractSpinBox_Metric(self *C.QAbstractSpinBox, cb C.intptr_t, param1 C.int) C.int {
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

	C.QAbstractSpinBox_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QAbstractSpinBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_InitPainter
func miqt_exec_callback_QAbstractSpinBox_InitPainter(self *C.QAbstractSpinBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QAbstractSpinBox_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QAbstractSpinBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_Redirected
func miqt_exec_callback_QAbstractSpinBox_Redirected(self *C.QAbstractSpinBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QAbstractSpinBox_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QAbstractSpinBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_SharedPainter
func miqt_exec_callback_QAbstractSpinBox_SharedPainter(self *C.QAbstractSpinBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QAbstractSpinBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QAbstractSpinBox_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractSpinBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_InputMethodEvent
func miqt_exec_callback_QAbstractSpinBox_InputMethodEvent(self *C.QAbstractSpinBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractSpinBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QAbstractSpinBox_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractSpinBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSpinBox_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSpinBox_FocusNextPrevChild
func miqt_exec_callback_QAbstractSpinBox_FocusNextPrevChild(self *C.QAbstractSpinBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QAbstractSpinBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QAbstractSpinBox) Delete() {
	C.QAbstractSpinBox_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractSpinBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractSpinBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
