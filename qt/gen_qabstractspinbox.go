package qt

/*

#include "gen_qabstractspinbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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

func newQAbstractSpinBox(h *C.QAbstractSpinBox) *QAbstractSpinBox {
	if h == nil {
		return nil
	}
	return &QAbstractSpinBox{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQAbstractSpinBox(h unsafe.Pointer) *QAbstractSpinBox {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractSpinBox_MetaObject(this.h)))
}

func (this *QAbstractSpinBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QAbstractSpinBox_Metacast(this.h, param1_Cstring)
}

func QAbstractSpinBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSpinBox_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractSpinBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSpinBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	var _ms *C.struct_miqt_string = C.QAbstractSpinBox_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractSpinBox) SpecialValueText() string {
	var _ms *C.struct_miqt_string = C.QAbstractSpinBox_SpecialValueText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractSpinBox) SetSpecialValueText(txt string) {
	txt_ms := libmiqt.Strdupg(txt)
	defer C.free(txt_ms)
	C.QAbstractSpinBox_SetSpecialValueText(this.h, (*C.struct_miqt_string)(txt_ms))
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
	input_ms := libmiqt.Strdupg(input)
	defer C.free(input_ms)
	return (QValidator__State)(C.QAbstractSpinBox_Validate(this.h, (*C.struct_miqt_string)(input_ms), (*C.int)(unsafe.Pointer(pos))))
}

func (this *QAbstractSpinBox) Fixup(input string) {
	input_ms := libmiqt.Strdupg(input)
	defer C.free(input_ms)
	C.QAbstractSpinBox_Fixup(this.h, (*C.struct_miqt_string)(input_ms))
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
	var _ms *C.struct_miqt_string = C.QAbstractSpinBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractSpinBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSpinBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractSpinBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSpinBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractSpinBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSpinBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractSpinBox) Delete() {
	C.QAbstractSpinBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractSpinBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractSpinBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
