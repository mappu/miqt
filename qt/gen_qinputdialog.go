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
	return newQMetaObject(C.QInputDialog_metaObject(this.h))
}

func (this *QInputDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QInputDialog_metacast(this.h, param1_Cstring))
}

func QInputDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetInputMode(mode QInputDialog__InputMode) {
	C.QInputDialog_setInputMode(this.h, (C.int)(mode))
}

func (this *QInputDialog) InputMode() QInputDialog__InputMode {
	return (QInputDialog__InputMode)(C.QInputDialog_inputMode(this.h))
}

func (this *QInputDialog) SetLabelText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_setLabelText(this.h, text_ms)
}

func (this *QInputDialog) LabelText() string {
	var _ms C.struct_miqt_string = C.QInputDialog_labelText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetOption(option QInputDialog__InputDialogOption) {
	C.QInputDialog_setOption(this.h, (C.int)(option))
}

func (this *QInputDialog) TestOption(option QInputDialog__InputDialogOption) bool {
	return (bool)(C.QInputDialog_testOption(this.h, (C.int)(option)))
}

func (this *QInputDialog) SetOptions(options QInputDialog__InputDialogOption) {
	C.QInputDialog_setOptions(this.h, (C.int)(options))
}

func (this *QInputDialog) Options() QInputDialog__InputDialogOption {
	return (QInputDialog__InputDialogOption)(C.QInputDialog_options(this.h))
}

func (this *QInputDialog) SetTextValue(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_setTextValue(this.h, text_ms)
}

func (this *QInputDialog) TextValue() string {
	var _ms C.struct_miqt_string = C.QInputDialog_textValue(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetTextEchoMode(mode QLineEdit__EchoMode) {
	C.QInputDialog_setTextEchoMode(this.h, (C.int)(mode))
}

func (this *QInputDialog) TextEchoMode() QLineEdit__EchoMode {
	return (QLineEdit__EchoMode)(C.QInputDialog_textEchoMode(this.h))
}

func (this *QInputDialog) SetComboBoxEditable(editable bool) {
	C.QInputDialog_setComboBoxEditable(this.h, (C.bool)(editable))
}

func (this *QInputDialog) IsComboBoxEditable() bool {
	return (bool)(C.QInputDialog_isComboBoxEditable(this.h))
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
	C.QInputDialog_setComboBoxItems(this.h, items_ma)
}

func (this *QInputDialog) ComboBoxItems() []string {
	var _ma C.struct_miqt_array = C.QInputDialog_comboBoxItems(this.h)
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
	C.QInputDialog_setIntValue(this.h, (C.int)(value))
}

func (this *QInputDialog) IntValue() int {
	return (int)(C.QInputDialog_intValue(this.h))
}

func (this *QInputDialog) SetIntMinimum(min int) {
	C.QInputDialog_setIntMinimum(this.h, (C.int)(min))
}

func (this *QInputDialog) IntMinimum() int {
	return (int)(C.QInputDialog_intMinimum(this.h))
}

func (this *QInputDialog) SetIntMaximum(max int) {
	C.QInputDialog_setIntMaximum(this.h, (C.int)(max))
}

func (this *QInputDialog) IntMaximum() int {
	return (int)(C.QInputDialog_intMaximum(this.h))
}

func (this *QInputDialog) SetIntRange(min int, max int) {
	C.QInputDialog_setIntRange(this.h, (C.int)(min), (C.int)(max))
}

func (this *QInputDialog) SetIntStep(step int) {
	C.QInputDialog_setIntStep(this.h, (C.int)(step))
}

func (this *QInputDialog) IntStep() int {
	return (int)(C.QInputDialog_intStep(this.h))
}

func (this *QInputDialog) SetDoubleValue(value float64) {
	C.QInputDialog_setDoubleValue(this.h, (C.double)(value))
}

func (this *QInputDialog) DoubleValue() float64 {
	return (float64)(C.QInputDialog_doubleValue(this.h))
}

func (this *QInputDialog) SetDoubleMinimum(min float64) {
	C.QInputDialog_setDoubleMinimum(this.h, (C.double)(min))
}

func (this *QInputDialog) DoubleMinimum() float64 {
	return (float64)(C.QInputDialog_doubleMinimum(this.h))
}

func (this *QInputDialog) SetDoubleMaximum(max float64) {
	C.QInputDialog_setDoubleMaximum(this.h, (C.double)(max))
}

func (this *QInputDialog) DoubleMaximum() float64 {
	return (float64)(C.QInputDialog_doubleMaximum(this.h))
}

func (this *QInputDialog) SetDoubleRange(min float64, max float64) {
	C.QInputDialog_setDoubleRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QInputDialog) SetDoubleDecimals(decimals int) {
	C.QInputDialog_setDoubleDecimals(this.h, (C.int)(decimals))
}

func (this *QInputDialog) DoubleDecimals() int {
	return (int)(C.QInputDialog_doubleDecimals(this.h))
}

func (this *QInputDialog) SetOkButtonText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_setOkButtonText(this.h, text_ms)
}

func (this *QInputDialog) OkButtonText() string {
	var _ms C.struct_miqt_string = C.QInputDialog_okButtonText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetCancelButtonText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_setCancelButtonText(this.h, text_ms)
}

func (this *QInputDialog) CancelButtonText() string {
	var _ms C.struct_miqt_string = C.QInputDialog_cancelButtonText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QInputDialog_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputDialog) SizeHint() *QSize {
	_goptr := newQSize(C.QInputDialog_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputDialog) SetVisible(visible bool) {
	C.QInputDialog_setVisible(this.h, (C.bool)(visible))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getText(parent.cPointer(), title_ms, label_ms)
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
	var _ms C.struct_miqt_string = C.QInputDialog_getMultiLineText(parent.cPointer(), title_ms, label_ms)
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
	var _ms C.struct_miqt_string = C.QInputDialog_getItem(parent.cPointer(), title_ms, label_ms, items_ma)
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
	return (int)(C.QInputDialog_getInt(parent.cPointer(), title_ms, label_ms))
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
	return (float64)(C.QInputDialog_getDouble(parent.cPointer(), title_ms, label_ms))
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
	return (float64)(C.QInputDialog_getDouble2(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.double)(step)))
}

func (this *QInputDialog) SetDoubleStep(step float64) {
	C.QInputDialog_setDoubleStep(this.h, (C.double)(step))
}

func (this *QInputDialog) DoubleStep() float64 {
	return (float64)(C.QInputDialog_doubleStep(this.h))
}

func (this *QInputDialog) TextValueChanged(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QInputDialog_textValueChanged(this.h, text_ms)
}
func (this *QInputDialog) OnTextValueChanged(slot func(text string)) {
	C.QInputDialog_connect_textValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_textValueChanged
func miqt_exec_callback_QInputDialog_textValueChanged(cb C.intptr_t, text C.struct_miqt_string) {
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
	C.QInputDialog_textValueSelected(this.h, text_ms)
}
func (this *QInputDialog) OnTextValueSelected(slot func(text string)) {
	C.QInputDialog_connect_textValueSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_textValueSelected
func miqt_exec_callback_QInputDialog_textValueSelected(cb C.intptr_t, text C.struct_miqt_string) {
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
	C.QInputDialog_intValueChanged(this.h, (C.int)(value))
}
func (this *QInputDialog) OnIntValueChanged(slot func(value int)) {
	C.QInputDialog_connect_intValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_intValueChanged
func miqt_exec_callback_QInputDialog_intValueChanged(cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func (this *QInputDialog) IntValueSelected(value int) {
	C.QInputDialog_intValueSelected(this.h, (C.int)(value))
}
func (this *QInputDialog) OnIntValueSelected(slot func(value int)) {
	C.QInputDialog_connect_intValueSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_intValueSelected
func miqt_exec_callback_QInputDialog_intValueSelected(cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func (this *QInputDialog) DoubleValueChanged(value float64) {
	C.QInputDialog_doubleValueChanged(this.h, (C.double)(value))
}
func (this *QInputDialog) OnDoubleValueChanged(slot func(value float64)) {
	C.QInputDialog_connect_doubleValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_doubleValueChanged
func miqt_exec_callback_QInputDialog_doubleValueChanged(cb C.intptr_t, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	gofunc(slotval1)
}

func (this *QInputDialog) DoubleValueSelected(value float64) {
	C.QInputDialog_doubleValueSelected(this.h, (C.double)(value))
}
func (this *QInputDialog) OnDoubleValueSelected(slot func(value float64)) {
	C.QInputDialog_connect_doubleValueSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDialog_doubleValueSelected
func miqt_exec_callback_QInputDialog_doubleValueSelected(cb C.intptr_t, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	gofunc(slotval1)
}

func (this *QInputDialog) Done(result int) {
	C.QInputDialog_done(this.h, (C.int)(result))
}

func QInputDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDialog_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDialog) SetOption2(option QInputDialog__InputDialogOption, on bool) {
	C.QInputDialog_setOption2(this.h, (C.int)(option), (C.bool)(on))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getText4(parent.cPointer(), title_ms, label_ms, (C.int)(echo))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getText5(parent.cPointer(), title_ms, label_ms, (C.int)(echo), text_ms)
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
	var _ms C.struct_miqt_string = C.QInputDialog_getText6(parent.cPointer(), title_ms, label_ms, (C.int)(echo), text_ms, (*C.bool)(unsafe.Pointer(ok)))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getText7(parent.cPointer(), title_ms, label_ms, (C.int)(echo), text_ms, (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getText8(parent.cPointer(), title_ms, label_ms, (C.int)(echo), text_ms, (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.int)(inputMethodHints))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getMultiLineText4(parent.cPointer(), title_ms, label_ms, text_ms)
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
	var _ms C.struct_miqt_string = C.QInputDialog_getMultiLineText5(parent.cPointer(), title_ms, label_ms, text_ms, (*C.bool)(unsafe.Pointer(ok)))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getMultiLineText6(parent.cPointer(), title_ms, label_ms, text_ms, (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getMultiLineText7(parent.cPointer(), title_ms, label_ms, text_ms, (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.int)(inputMethodHints))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getItem5(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getItem6(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current), (C.bool)(editable))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getItem7(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current), (C.bool)(editable), (*C.bool)(unsafe.Pointer(ok)))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getItem8(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current), (C.bool)(editable), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags))
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
	var _ms C.struct_miqt_string = C.QInputDialog_getItem9(parent.cPointer(), title_ms, label_ms, items_ma, (C.int)(current), (C.bool)(editable), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.int)(inputMethodHints))
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
	return (int)(C.QInputDialog_getInt4(parent.cPointer(), title_ms, label_ms, (C.int)(value)))
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
	return (int)(C.QInputDialog_getInt5(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue)))
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
	return (int)(C.QInputDialog_getInt6(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue), (C.int)(maxValue)))
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
	return (int)(C.QInputDialog_getInt7(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue), (C.int)(maxValue), (C.int)(step)))
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
	return (int)(C.QInputDialog_getInt8(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue), (C.int)(maxValue), (C.int)(step), (*C.bool)(unsafe.Pointer(ok))))
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
	return (int)(C.QInputDialog_getInt9(parent.cPointer(), title_ms, label_ms, (C.int)(value), (C.int)(minValue), (C.int)(maxValue), (C.int)(step), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags)))
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
	return (float64)(C.QInputDialog_getDouble4(parent.cPointer(), title_ms, label_ms, (C.double)(value)))
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
	return (float64)(C.QInputDialog_getDouble5(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue)))
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
	return (float64)(C.QInputDialog_getDouble6(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue)))
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
	return (float64)(C.QInputDialog_getDouble7(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals)))
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
	return (float64)(C.QInputDialog_getDouble8(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals), (*C.bool)(unsafe.Pointer(ok))))
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
	return (float64)(C.QInputDialog_getDouble9(parent.cPointer(), title_ms, label_ms, (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags)))
}

func (this *QInputDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QInputDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QInputDialog) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QInputDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_minimumSizeHint
func miqt_exec_callback_QInputDialog_minimumSizeHint(self *C.QInputDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QInputDialog_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QInputDialog) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QInputDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_sizeHint
func miqt_exec_callback_QInputDialog_sizeHint(self *C.QInputDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_SetVisible(visible bool) {

	C.QInputDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QInputDialog) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QInputDialog_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_setVisible
func miqt_exec_callback_QInputDialog_setVisible(self *C.QInputDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QInputDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QInputDialog) callVirtualBase_Done(result int) {

	C.QInputDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QInputDialog) Ondone(slot func(super func(result int), result int)) {
	ok := C.QInputDialog_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_done
func miqt_exec_callback_QInputDialog_done(self *C.QInputDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QInputDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QInputDialog) callVirtualBase_Open() {

	C.QInputDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QInputDialog) Onopen(slot func(super func())) {
	ok := C.QInputDialog_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_open
func miqt_exec_callback_QInputDialog_open(self *C.QInputDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QInputDialog{h: self}).callVirtualBase_Open)

}

func (this *QInputDialog) callVirtualBase_Exec() int {

	return (int)(C.QInputDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) Onexec(slot func(super func() int) int) {
	ok := C.QInputDialog_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_exec
func miqt_exec_callback_QInputDialog_exec(self *C.QInputDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_Accept() {

	C.QInputDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QInputDialog) Onaccept(slot func(super func())) {
	ok := C.QInputDialog_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_accept
func miqt_exec_callback_QInputDialog_accept(self *C.QInputDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QInputDialog{h: self}).callVirtualBase_Accept)

}

func (this *QInputDialog) callVirtualBase_Reject() {

	C.QInputDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QInputDialog) Onreject(slot func(super func())) {
	ok := C.QInputDialog_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_reject
func miqt_exec_callback_QInputDialog_reject(self *C.QInputDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QInputDialog{h: self}).callVirtualBase_Reject)

}

func (this *QInputDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QInputDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnkeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QInputDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_keyPressEvent
func miqt_exec_callback_QInputDialog_keyPressEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QInputDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OncloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QInputDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_closeEvent
func miqt_exec_callback_QInputDialog_closeEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QInputDialog_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnshowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QInputDialog_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_showEvent
func miqt_exec_callback_QInputDialog_showEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QInputDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnresizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QInputDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_resizeEvent
func miqt_exec_callback_QInputDialog_resizeEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QInputDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OncontextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QInputDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_contextMenuEvent
func miqt_exec_callback_QInputDialog_contextMenuEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QInputDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QInputDialog) OneventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QInputDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_eventFilter
func miqt_exec_callback_QInputDialog_eventFilter(self *C.QInputDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
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

	return (int)(C.QInputDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) OndevType(slot func(super func() int) int) {
	ok := C.QInputDialog_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_devType
func miqt_exec_callback_QInputDialog_devType(self *C.QInputDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QInputDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QInputDialog) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QInputDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_heightForWidth
func miqt_exec_callback_QInputDialog_heightForWidth(self *C.QInputDialog, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QInputDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QInputDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_hasHeightForWidth
func miqt_exec_callback_QInputDialog_hasHeightForWidth(self *C.QInputDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QInputDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QInputDialog_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QInputDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_paintEngine
func miqt_exec_callback_QInputDialog_paintEngine(self *C.QInputDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QInputDialog_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QInputDialog) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QInputDialog_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_event
func miqt_exec_callback_QInputDialog_event(self *C.QInputDialog, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QInputDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QInputDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_mousePressEvent
func miqt_exec_callback_QInputDialog_mousePressEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QInputDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QInputDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_mouseReleaseEvent
func miqt_exec_callback_QInputDialog_mouseReleaseEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QInputDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QInputDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_mouseDoubleClickEvent
func miqt_exec_callback_QInputDialog_mouseDoubleClickEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QInputDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QInputDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_mouseMoveEvent
func miqt_exec_callback_QInputDialog_mouseMoveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QInputDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QInputDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_wheelEvent
func miqt_exec_callback_QInputDialog_wheelEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QInputDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QInputDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_keyReleaseEvent
func miqt_exec_callback_QInputDialog_keyReleaseEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QInputDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QInputDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_focusInEvent
func miqt_exec_callback_QInputDialog_focusInEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QInputDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QInputDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_focusOutEvent
func miqt_exec_callback_QInputDialog_focusOutEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_EnterEvent(event *QEvent) {

	C.QInputDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QInputDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_enterEvent
func miqt_exec_callback_QInputDialog_enterEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QInputDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QInputDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_leaveEvent
func miqt_exec_callback_QInputDialog_leaveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QInputDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QInputDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_paintEvent
func miqt_exec_callback_QInputDialog_paintEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QInputDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QInputDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_moveEvent
func miqt_exec_callback_QInputDialog_moveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QInputDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QInputDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_tabletEvent
func miqt_exec_callback_QInputDialog_tabletEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QInputDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QInputDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_actionEvent
func miqt_exec_callback_QInputDialog_actionEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QInputDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QInputDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_dragEnterEvent
func miqt_exec_callback_QInputDialog_dragEnterEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QInputDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QInputDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_dragMoveEvent
func miqt_exec_callback_QInputDialog_dragMoveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QInputDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QInputDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_dragLeaveEvent
func miqt_exec_callback_QInputDialog_dragLeaveEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QInputDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QInputDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_dropEvent
func miqt_exec_callback_QInputDialog_dropEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QInputDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QInputDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_hideEvent
func miqt_exec_callback_QInputDialog_hideEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QHideEvent) {
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
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QInputDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QInputDialog) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QInputDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_nativeEvent
func miqt_exec_callback_QInputDialog_nativeEvent(self *C.QInputDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	C.QInputDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QInputDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_changeEvent
func miqt_exec_callback_QInputDialog_changeEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QInputDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QInputDialog) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QInputDialog_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_metric
func miqt_exec_callback_QInputDialog_metric(self *C.QInputDialog, cb C.intptr_t, param1 C.int) C.int {
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

	C.QInputDialog_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QInputDialog) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QInputDialog_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_initPainter
func miqt_exec_callback_QInputDialog_initPainter(self *C.QInputDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QInputDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QInputDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QInputDialog_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QInputDialog) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QInputDialog_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_redirected
func miqt_exec_callback_QInputDialog_redirected(self *C.QInputDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QInputDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QInputDialog) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QInputDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_sharedPainter
func miqt_exec_callback_QInputDialog_sharedPainter(self *C.QInputDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QInputDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QInputDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QInputDialog) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QInputDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_inputMethodEvent
func miqt_exec_callback_QInputDialog_inputMethodEvent(self *C.QInputDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QInputDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QInputDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QInputDialog) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QInputDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_inputMethodQuery
func miqt_exec_callback_QInputDialog_inputMethodQuery(self *C.QInputDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QInputDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QInputDialog) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QInputDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_focusNextPrevChild
func miqt_exec_callback_QInputDialog_focusNextPrevChild(self *C.QInputDialog, cb C.intptr_t, next C.bool) C.bool {
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

	C.QInputDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QInputDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_timerEvent
func miqt_exec_callback_QInputDialog_timerEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QInputDialog_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QInputDialog_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_childEvent
func miqt_exec_callback_QInputDialog_childEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QInputDialog_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QInputDialog) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QInputDialog_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_customEvent
func miqt_exec_callback_QInputDialog_customEvent(self *C.QInputDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QInputDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QInputDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QInputDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QInputDialog) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QInputDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_connectNotify
func miqt_exec_callback_QInputDialog_connectNotify(self *C.QInputDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QInputDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QInputDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QInputDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QInputDialog) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QInputDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputDialog_disconnectNotify
func miqt_exec_callback_QInputDialog_disconnectNotify(self *C.QInputDialog, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QInputDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
