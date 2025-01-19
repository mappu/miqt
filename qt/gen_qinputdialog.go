package qt

/*

#include "gen_qinputdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QInputDialog__InputDialogOption int

const (
	QInputDialog__NoButtons                    QInputDialog__InputDialogOption = 1
	QInputDialog__UseListViewForComboBoxItems  QInputDialog__InputDialogOption = 2
	QInputDialog__UsePlainTextEditForTextInput QInputDialog__InputDialogOption = 4
)

type QInputDialog__InputMode int

const (
	QInputDialog__TextInput   QInputDialog__InputMode = 0
	QInputDialog__IntInput    QInputDialog__InputMode = 1
	QInputDialog__DoubleInput QInputDialog__InputMode = 2
)

type QInputDialog struct {
	h *C.QInputDialog
	*QDialog
}

func (this *QInputDialog) cPointer() *C.QInputDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputDialog constructs the type using only CGO pointers.
func newQInputDialog(h *C.QInputDialog) *QInputDialog {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QInputDialog_virtbase(h, &outptr_QDialog)

	return &QInputDialog{h: h,
		QDialog: newQDialog(outptr_QDialog)}
}

// UnsafeNewQInputDialog constructs the type using only unsafe pointers.
func UnsafeNewQInputDialog(h unsafe.Pointer) *QInputDialog {
	return newQInputDialog((*C.QInputDialog)(h))
}

// NewQInputDialog constructs a new QInputDialog object.
func NewQInputDialog(parent *QWidget) *QInputDialog {

	return newQInputDialog(C.QInputDialog_new(parent.cPointer()))
}

// NewQInputDialog2 constructs a new QInputDialog object.
func NewQInputDialog2() *QInputDialog {

	return newQInputDialog(C.QInputDialog_new2())
}

// NewQInputDialog3 constructs a new QInputDialog object.
func NewQInputDialog3(parent *QWidget, flags WindowType) *QInputDialog {

	return newQInputDialog(C.QInputDialog_new3(parent.cPointer(), (C.int)(flags)))
}

func (this *QInputDialog) MetaObject() *QMetaObject {
	return newQMetaObject(C.QInputDialog_MetaObject(this.h))
}

func (this *QInputDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QInputDialog_Metacast(this.h, param1_Cstring))
}

func QInputDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetInputMode(mode QInputDialog__InputMode) {
	C.QInputDialog_SetInputMode(this.h, (C.int)(mode))
}

func (this *QInputDialog) InputMode() QInputDialog__InputMode {
	return (QInputDialog__InputMode)(C.QInputDialog_InputMode(this.h))
}

func (this *QInputDialog) SetLabelText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_SetLabelText(this.h, text_ms)
}

func (this *QInputDialog) LabelText() string {
	var _ms C.struct_miqt_string = C.QInputDialog_LabelText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetOption(option QInputDialog__InputDialogOption) {
	C.QInputDialog_SetOption(this.h, (C.int)(option))
}

func (this *QInputDialog) TestOption(option QInputDialog__InputDialogOption) bool {
	return (bool)(C.QInputDialog_TestOption(this.h, (C.int)(option)))
}

func (this *QInputDialog) SetOptions(options QInputDialog__InputDialogOption) {
	C.QInputDialog_SetOptions(this.h, (C.int)(options))
}

func (this *QInputDialog) Options() QInputDialog__InputDialogOption {
	return (QInputDialog__InputDialogOption)(C.QInputDialog_Options(this.h))
}

func (this *QInputDialog) SetTextValue(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_SetTextValue(this.h, text_ms)
}

func (this *QInputDialog) TextValue() string {
	var _ms C.struct_miqt_string = C.QInputDialog_TextValue(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetTextEchoMode(mode QLineEdit__EchoMode) {
	C.QInputDialog_SetTextEchoMode(this.h, (C.int)(mode))
}

func (this *QInputDialog) TextEchoMode() QLineEdit__EchoMode {
	return (QLineEdit__EchoMode)(C.QInputDialog_TextEchoMode(this.h))
}

func (this *QInputDialog) SetComboBoxEditable(editable bool) {
	C.QInputDialog_SetComboBoxEditable(this.h, (C.bool)(editable))
}

func (this *QInputDialog) IsComboBoxEditable() bool {
	return (bool)(C.QInputDialog_IsComboBoxEditable(this.h))
}

func (this *QInputDialog) SetComboBoxItems(items []string) {
	items_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_i_ms := C.struct_miqt_string{}
		items_i_ms.data = C.CString(items[i])
		items_i_ms.len = C.size_t(len(items[i]))
		defer C.free(unsafe.Pointer(items_i_ms.data))
		items_CArray[i] = items_i_ms
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QInputDialog_SetComboBoxItems(this.h, items_ma)
}

func (this *QInputDialog) ComboBoxItems() []string {
	var _ma C.struct_miqt_array = C.QInputDialog_ComboBoxItems(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QInputDialog) SetIntValue(value int) {
	C.QInputDialog_SetIntValue(this.h, (C.int)(value))
}

func (this *QInputDialog) IntValue() int {
	return (int)(C.QInputDialog_IntValue(this.h))
}

func (this *QInputDialog) SetIntMinimum(min int) {
	C.QInputDialog_SetIntMinimum(this.h, (C.int)(min))
}

func (this *QInputDialog) IntMinimum() int {
	return (int)(C.QInputDialog_IntMinimum(this.h))
}

func (this *QInputDialog) SetIntMaximum(max int) {
	C.QInputDialog_SetIntMaximum(this.h, (C.int)(max))
}

func (this *QInputDialog) IntMaximum() int {
	return (int)(C.QInputDialog_IntMaximum(this.h))
}

func (this *QInputDialog) SetIntRange(min int, max int) {
	C.QInputDialog_SetIntRange(this.h, (C.int)(min), (C.int)(max))
}

func (this *QInputDialog) SetIntStep(step int) {
	C.QInputDialog_SetIntStep(this.h, (C.int)(step))
}

func (this *QInputDialog) IntStep() int {
	return (int)(C.QInputDialog_IntStep(this.h))
}

func (this *QInputDialog) SetDoubleValue(value float64) {
	C.QInputDialog_SetDoubleValue(this.h, (C.double)(value))
}

func (this *QInputDialog) DoubleValue() float64 {
	return (float64)(C.QInputDialog_DoubleValue(this.h))
}

func (this *QInputDialog) SetDoubleMinimum(min float64) {
	C.QInputDialog_SetDoubleMinimum(this.h, (C.double)(min))
}

func (this *QInputDialog) DoubleMinimum() float64 {
	return (float64)(C.QInputDialog_DoubleMinimum(this.h))
}

func (this *QInputDialog) SetDoubleMaximum(max float64) {
	C.QInputDialog_SetDoubleMaximum(this.h, (C.double)(max))
}

func (this *QInputDialog) DoubleMaximum() float64 {
	return (float64)(C.QInputDialog_DoubleMaximum(this.h))
}

func (this *QInputDialog) SetDoubleRange(min float64, max float64) {
	C.QInputDialog_SetDoubleRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QInputDialog) SetDoubleDecimals(decimals int) {
	C.QInputDialog_SetDoubleDecimals(this.h, (C.int)(decimals))
}

func (this *QInputDialog) DoubleDecimals() int {
	return (int)(C.QInputDialog_DoubleDecimals(this.h))
}

func (this *QInputDialog) SetOkButtonText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_SetOkButtonText(this.h, text_ms)
}

func (this *QInputDialog) OkButtonText() string {
	var _ms C.struct_miqt_string = C.QInputDialog_OkButtonText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetCancelButtonText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_SetCancelButtonText(this.h, text_ms)
}

func (this *QInputDialog) CancelButtonText() string {
	var _ms C.struct_miqt_string = C.QInputDialog_CancelButtonText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QInputDialog_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputDialog) SizeHint() *QSize {
	_goptr := newQSize(C.QInputDialog_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputDialog) SetVisible(visible bool) {
	C.QInputDialog_SetVisible(this.h, (C.bool)(visible))
}

func QInputDialog_GetText(parent *QWidget, title string, label string) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetText(parent.cPointer(), title_ms, label_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetMultiLineText(parent *QWidget, title string, label string) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetMultiLineText(parent.cPointer(), title_ms, label_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetItem(parent *QWidget, title string, label string, items []string) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	items_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_i_ms := C.struct_miqt_string{}
		items_i_ms.data = C.CString(items[i])
		items_i_ms.len = C.size_t(len(items[i]))
		defer C.free(unsafe.Pointer(items_i_ms.data))
		items_CArray[i] = items_i_ms
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	var _ms C.struct_miqt_string = C.QInputDialog_GetItem(parent.cPointer(), title_ms, label_ms, items_ma)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetInt(parent *QWidget, title string, label string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QInputDialog_GetInt(parent.cPointer(), title_ms, label_ms))
}

func QInputDialog_GetDouble(parent *QWidget, title string, label string) float64 {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (float64)(C.QInputDialog_GetDouble(parent.cPointer(), title_ms, label_ms))
}

func QInputDialog_GetDouble2(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64, decimals int, ok *bool, flags WindowType, step float64) float64 {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (float64)(C.QInputDialog_GetDouble2(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.double)(step)))
}

func (this *QInputDialog) SetDoubleStep(step float64) {
	C.QInputDialog_SetDoubleStep(this.h, (C.double)(step))
}

func (this *QInputDialog) DoubleStep() float64 {
	return (float64)(C.QInputDialog_DoubleStep(this.h))
}

func (this *QInputDialog) TextValueChanged(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_TextValueChanged(this.h, text_ms)
}
func (this *QInputDialog) OnTextValueChanged(slot func(text string)) {
	C.QInputDialog_connect_TextValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_TextValueChanged
func miqt_exec_callback_QInputDialog_TextValueChanged(cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc(slotval1)
}

func (this *QInputDialog) TextValueSelected(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_TextValueSelected(this.h, text_ms)
}
func (this *QInputDialog) OnTextValueSelected(slot func(text string)) {
	C.QInputDialog_connect_TextValueSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_TextValueSelected
func miqt_exec_callback_QInputDialog_TextValueSelected(cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc(slotval1)
}

func (this *QInputDialog) IntValueChanged(value int) {
	C.QInputDialog_IntValueChanged(this.h, (C.int)(value))
}
func (this *QInputDialog) OnIntValueChanged(slot func(value int)) {
	C.QInputDialog_connect_IntValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_IntValueChanged
func miqt_exec_callback_QInputDialog_IntValueChanged(cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func (this *QInputDialog) IntValueSelected(value int) {
	C.QInputDialog_IntValueSelected(this.h, (C.int)(value))
}
func (this *QInputDialog) OnIntValueSelected(slot func(value int)) {
	C.QInputDialog_connect_IntValueSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_IntValueSelected
func miqt_exec_callback_QInputDialog_IntValueSelected(cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func (this *QInputDialog) DoubleValueChanged(value float64) {
	C.QInputDialog_DoubleValueChanged(this.h, (C.double)(value))
}
func (this *QInputDialog) OnDoubleValueChanged(slot func(value float64)) {
	C.QInputDialog_connect_DoubleValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_DoubleValueChanged
func miqt_exec_callback_QInputDialog_DoubleValueChanged(cb C.intptr_t, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	gofunc(slotval1)
}

func (this *QInputDialog) DoubleValueSelected(value float64) {
	C.QInputDialog_DoubleValueSelected(this.h, (C.double)(value))
}
func (this *QInputDialog) OnDoubleValueSelected(slot func(value float64)) {
	C.QInputDialog_connect_DoubleValueSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_DoubleValueSelected
func miqt_exec_callback_QInputDialog_DoubleValueSelected(cb C.intptr_t, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	gofunc(slotval1)
}

func (this *QInputDialog) Done(result int) {
	C.QInputDialog_Done(this.h, (C.int)(result))
}

func QInputDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetOption2(option QInputDialog__InputDialogOption, on bool) {
	C.QInputDialog_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

func QInputDialog_GetText4(parent *QWidget, title string, label string, echo QLineEdit__EchoMode) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetText4(parent.cPointer(), title_ms, label_ms, (C.int)(echo))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetText5(parent *QWidget, title string, label string, echo QLineEdit__EchoMode, text string) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetText5(parent.cPointer(), title_ms, label_ms, (C.int)(echo), text_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetText6(parent *QWidget, title string, label string, echo QLineEdit__EchoMode, text string, ok *bool) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetText6(parent.cPointer(), title_ms, label_ms, (C.int)(echo), text_ms, (*C.bool)(unsafe.Pointer(ok)))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetText7(parent *QWidget, title string, label string, echo QLineEdit__EchoMode, text string, ok *bool, flags WindowType) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetText7(parent.cPointer(), title_ms, label_ms, (C.int)(echo), text_ms, (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetText8(parent *QWidget, title string, label string, echo QLineEdit__EchoMode, text string, ok *bool, flags WindowType, inputMethodHints InputMethodHint) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetText8(parent.cPointer(), title_ms, label_ms, (C.int)(echo), text_ms, (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.int)(inputMethodHints))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetMultiLineText4(parent *QWidget, title string, label string, text string) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetMultiLineText4(parent.cPointer(), title_ms, label_ms, text_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetMultiLineText5(parent *QWidget, title string, label string, text string, ok *bool) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetMultiLineText5(parent.cPointer(), title_ms, label_ms, text_ms, (*C.bool)(unsafe.Pointer(ok)))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetMultiLineText6(parent *QWidget, title string, label string, text string, ok *bool, flags WindowType) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetMultiLineText6(parent.cPointer(), title_ms, label_ms, text_ms, (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetMultiLineText7(parent *QWidget, title string, label string, text string, ok *bool, flags WindowType, inputMethodHints InputMethodHint) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QInputDialog_GetMultiLineText7(parent.cPointer(), title_ms, label_ms, text_ms, (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.int)(inputMethodHints))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetItem5(parent *QWidget, title string, label string, items []string, current int) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	items_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_i_ms := C.struct_miqt_string{}
		items_i_ms.data = C.CString(items[i])
		items_i_ms.len = C.size_t(len(items[i]))
		defer C.free(unsafe.Pointer(items_i_ms.data))
		items_CArray[i] = items_i_ms
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	var _ms C.struct_miqt_string = C.QInputDialog_GetItem5(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetItem6(parent *QWidget, title string, label string, items []string, current int, editable bool) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	items_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_i_ms := C.struct_miqt_string{}
		items_i_ms.data = C.CString(items[i])
		items_i_ms.len = C.size_t(len(items[i]))
		defer C.free(unsafe.Pointer(items_i_ms.data))
		items_CArray[i] = items_i_ms
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	var _ms C.struct_miqt_string = C.QInputDialog_GetItem6(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current), (C.bool)(editable))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetItem7(parent *QWidget, title string, label string, items []string, current int, editable bool, ok *bool) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	items_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_i_ms := C.struct_miqt_string{}
		items_i_ms.data = C.CString(items[i])
		items_i_ms.len = C.size_t(len(items[i]))
		defer C.free(unsafe.Pointer(items_i_ms.data))
		items_CArray[i] = items_i_ms
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	var _ms C.struct_miqt_string = C.QInputDialog_GetItem7(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current), (C.bool)(editable), (*C.bool)(unsafe.Pointer(ok)))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetItem8(parent *QWidget, title string, label string, items []string, current int, editable bool, ok *bool, flags WindowType) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	items_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_i_ms := C.struct_miqt_string{}
		items_i_ms.data = C.CString(items[i])
		items_i_ms.len = C.size_t(len(items[i]))
		defer C.free(unsafe.Pointer(items_i_ms.data))
		items_CArray[i] = items_i_ms
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	var _ms C.struct_miqt_string = C.QInputDialog_GetItem8(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current), (C.bool)(editable), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetItem9(parent *QWidget, title string, label string, items []string, current int, editable bool, ok *bool, flags WindowType, inputMethodHints InputMethodHint) string {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	items_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_i_ms := C.struct_miqt_string{}
		items_i_ms.data = C.CString(items[i])
		items_i_ms.len = C.size_t(len(items[i]))
		defer C.free(unsafe.Pointer(items_i_ms.data))
		items_CArray[i] = items_i_ms
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	var _ms C.struct_miqt_string = C.QInputDialog_GetItem9(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current), (C.bool)(editable), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.int)(inputMethodHints))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_GetInt4(parent *QWidget, title string, label string, value int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QInputDialog_GetInt4(parent.cPointer(), title_ms, label_ms, (C.int)(value)))
}

func QInputDialog_GetInt5(parent *QWidget, title string, label string, value int, minValue int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QInputDialog_GetInt5(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue)))
}

func QInputDialog_GetInt6(parent *QWidget, title string, label string, value int, minValue int, maxValue int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QInputDialog_GetInt6(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue), (C.int)(maxValue)))
}

func QInputDialog_GetInt7(parent *QWidget, title string, label string, value int, minValue int, maxValue int, step int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QInputDialog_GetInt7(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue), (C.int)(maxValue), (C.int)(step)))
}

func QInputDialog_GetInt8(parent *QWidget, title string, label string, value int, minValue int, maxValue int, step int, ok *bool) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QInputDialog_GetInt8(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue), (C.int)(maxValue), (C.int)(step), (*C.bool)(unsafe.Pointer(ok))))
}

func QInputDialog_GetInt9(parent *QWidget, title string, label string, value int, minValue int, maxValue int, step int, ok *bool, flags WindowType) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QInputDialog_GetInt9(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue), (C.int)(maxValue), (C.int)(step), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags)))
}

func QInputDialog_GetDouble4(parent *QWidget, title string, label string, value float64) float64 {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (float64)(C.QInputDialog_GetDouble4(parent.cPointer(), title_ms, label_ms, (C.double)(value)))
}

func QInputDialog_GetDouble5(parent *QWidget, title string, label string, value float64, minValue float64) float64 {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (float64)(C.QInputDialog_GetDouble5(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue)))
}

func QInputDialog_GetDouble6(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64) float64 {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (float64)(C.QInputDialog_GetDouble6(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue)))
}

func QInputDialog_GetDouble7(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64, decimals int) float64 {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (float64)(C.QInputDialog_GetDouble7(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals)))
}

func QInputDialog_GetDouble8(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64, decimals int, ok *bool) float64 {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (float64)(C.QInputDialog_GetDouble8(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals), (*C.bool)(unsafe.Pointer(ok))))
}

func QInputDialog_GetDouble9(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64, decimals int, ok *bool, flags WindowType) float64 {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (float64)(C.QInputDialog_GetDouble9(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags)))
}

func (this *QInputDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QInputDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QInputDialog) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QInputDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_MinimumSizeHint
func miqt_exec_callback_QInputDialog_MinimumSizeHint(self *C.QInputDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QInputDialog_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QInputDialog) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QInputDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_SizeHint
func miqt_exec_callback_QInputDialog_SizeHint(self *C.QInputDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_SetVisible(visible bool) {

	C.QInputDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QInputDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QInputDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_SetVisible
func miqt_exec_callback_QInputDialog_SetVisible(self *C.QInputDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QInputDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QInputDialog) callVirtualBase_Done(result int) {

	C.QInputDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QInputDialog) OnDone(slot func(super func(result int), result int)) {
	ok := C.QInputDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_Done
func miqt_exec_callback_QInputDialog_Done(self *C.QInputDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QInputDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QInputDialog) callVirtualBase_Open() {

	C.QInputDialog_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QInputDialog) OnOpen(slot func(super func())) {
	ok := C.QInputDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_Open
func miqt_exec_callback_QInputDialog_Open(self *C.QInputDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QInputDialog{h: self}).callVirtualBase_Open)

}

func (this *QInputDialog) callVirtualBase_Exec() int {

	return (int)(C.QInputDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) OnExec(slot func(super func() int) int) {
	ok := C.QInputDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_Exec
func miqt_exec_callback_QInputDialog_Exec(self *C.QInputDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_Accept() {

	C.QInputDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QInputDialog) OnAccept(slot func(super func())) {
	ok := C.QInputDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_Accept
func miqt_exec_callback_QInputDialog_Accept(self *C.QInputDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QInputDialog{h: self}).callVirtualBase_Accept)

}

func (this *QInputDialog) callVirtualBase_Reject() {

	C.QInputDialog_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QInputDialog) OnReject(slot func(super func())) {
	ok := C.QInputDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_Reject
func miqt_exec_callback_QInputDialog_Reject(self *C.QInputDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QInputDialog{h: self}).callVirtualBase_Reject)

}

func (this *QInputDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QInputDialog_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QInputDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_KeyPressEvent
func miqt_exec_callback_QInputDialog_KeyPressEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QInputDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QInputDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_CloseEvent
func miqt_exec_callback_QInputDialog_CloseEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QInputDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QInputDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_ShowEvent
func miqt_exec_callback_QInputDialog_ShowEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QInputDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QInputDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_ResizeEvent
func miqt_exec_callback_QInputDialog_ResizeEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QInputDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QInputDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_ContextMenuEvent
func miqt_exec_callback_QInputDialog_ContextMenuEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QInputDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QInputDialog) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QInputDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_EventFilter
func miqt_exec_callback_QInputDialog_EventFilter(self *C.QInputDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_DevType() int {

	return (int)(C.QInputDialog_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QInputDialog_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_DevType
func miqt_exec_callback_QInputDialog_DevType(self *C.QInputDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QInputDialog_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QInputDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QInputDialog_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_HeightForWidth
func miqt_exec_callback_QInputDialog_HeightForWidth(self *C.QInputDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QInputDialog_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QInputDialog_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_HasHeightForWidth
func miqt_exec_callback_QInputDialog_HasHeightForWidth(self *C.QInputDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QInputDialog_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QInputDialog_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_PaintEngine
func miqt_exec_callback_QInputDialog_PaintEngine(self *C.QInputDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QInputDialog_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QInputDialog) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QInputDialog_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_Event
func miqt_exec_callback_QInputDialog_Event(self *C.QInputDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QInputDialog_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QInputDialog_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_MousePressEvent
func miqt_exec_callback_QInputDialog_MousePressEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QInputDialog_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QInputDialog_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_MouseReleaseEvent
func miqt_exec_callback_QInputDialog_MouseReleaseEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QInputDialog_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QInputDialog_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_MouseDoubleClickEvent
func miqt_exec_callback_QInputDialog_MouseDoubleClickEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QInputDialog_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QInputDialog_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_MouseMoveEvent
func miqt_exec_callback_QInputDialog_MouseMoveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QInputDialog_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QInputDialog_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_WheelEvent
func miqt_exec_callback_QInputDialog_WheelEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QInputDialog_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QInputDialog_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_KeyReleaseEvent
func miqt_exec_callback_QInputDialog_KeyReleaseEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QInputDialog_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QInputDialog_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_FocusInEvent
func miqt_exec_callback_QInputDialog_FocusInEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QInputDialog_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QInputDialog_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_FocusOutEvent
func miqt_exec_callback_QInputDialog_FocusOutEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_EnterEvent(event *QEvent) {

	C.QInputDialog_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QInputDialog_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_EnterEvent
func miqt_exec_callback_QInputDialog_EnterEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QInputDialog_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QInputDialog_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_LeaveEvent
func miqt_exec_callback_QInputDialog_LeaveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QInputDialog_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QInputDialog_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_PaintEvent
func miqt_exec_callback_QInputDialog_PaintEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QInputDialog_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QInputDialog_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_MoveEvent
func miqt_exec_callback_QInputDialog_MoveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QInputDialog_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QInputDialog_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_TabletEvent
func miqt_exec_callback_QInputDialog_TabletEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QInputDialog_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QInputDialog_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_ActionEvent
func miqt_exec_callback_QInputDialog_ActionEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QInputDialog_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QInputDialog_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_DragEnterEvent
func miqt_exec_callback_QInputDialog_DragEnterEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QInputDialog_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QInputDialog_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_DragMoveEvent
func miqt_exec_callback_QInputDialog_DragMoveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QInputDialog_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QInputDialog_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_DragLeaveEvent
func miqt_exec_callback_QInputDialog_DragLeaveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QInputDialog_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QInputDialog_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_DropEvent
func miqt_exec_callback_QInputDialog_DropEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QInputDialog_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QInputDialog_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_HideEvent
func miqt_exec_callback_QInputDialog_HideEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QInputDialog_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QInputDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QInputDialog_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_NativeEvent
func miqt_exec_callback_QInputDialog_NativeEvent(self *C.QInputDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QInputDialog_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QInputDialog_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_ChangeEvent
func miqt_exec_callback_QInputDialog_ChangeEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QInputDialog_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QInputDialog) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QInputDialog_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_Metric
func miqt_exec_callback_QInputDialog_Metric(self *C.QInputDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_InitPainter(painter *QPainter) {

	C.QInputDialog_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QInputDialog) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QInputDialog_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_InitPainter
func miqt_exec_callback_QInputDialog_InitPainter(self *C.QInputDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QInputDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QInputDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QInputDialog_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QInputDialog) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QInputDialog_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_Redirected
func miqt_exec_callback_QInputDialog_Redirected(self *C.QInputDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QInputDialog_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QInputDialog_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_SharedPainter
func miqt_exec_callback_QInputDialog_SharedPainter(self *C.QInputDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QInputDialog_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QInputDialog_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_InputMethodEvent
func miqt_exec_callback_QInputDialog_InputMethodEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QInputDialog_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QInputDialog) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QInputDialog_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_InputMethodQuery
func miqt_exec_callback_QInputDialog_InputMethodQuery(self *C.QInputDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QInputDialog_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QInputDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QInputDialog_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_FocusNextPrevChild
func miqt_exec_callback_QInputDialog_FocusNextPrevChild(self *C.QInputDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QInputDialog_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QInputDialog_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_TimerEvent
func miqt_exec_callback_QInputDialog_TimerEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QInputDialog_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QInputDialog_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_ChildEvent
func miqt_exec_callback_QInputDialog_ChildEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QInputDialog_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QInputDialog_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_CustomEvent
func miqt_exec_callback_QInputDialog_CustomEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QInputDialog_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QInputDialog) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QInputDialog_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_ConnectNotify
func miqt_exec_callback_QInputDialog_ConnectNotify(self *C.QInputDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QInputDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QInputDialog_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QInputDialog) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QInputDialog_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_DisconnectNotify
func miqt_exec_callback_QInputDialog_DisconnectNotify(self *C.QInputDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QInputDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QInputDialog) Delete() {
	C.QInputDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
