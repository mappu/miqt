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

func newQInputDialog(h *C.QInputDialog) *QInputDialog {
	if h == nil {
		return nil
	}
	return &QInputDialog{h: h, QDialog: newQDialog_U(unsafe.Pointer(h))}
}

func newQInputDialog_U(h unsafe.Pointer) *QInputDialog {
	return newQInputDialog((*C.QInputDialog)(h))
}

// NewQInputDialog constructs a new QInputDialog object.
func NewQInputDialog() *QInputDialog {
	ret := C.QInputDialog_new()
	return newQInputDialog(ret)
}

// NewQInputDialog2 constructs a new QInputDialog object.
func NewQInputDialog2(parent *QWidget) *QInputDialog {
	ret := C.QInputDialog_new2(parent.cPointer())
	return newQInputDialog(ret)
}

// NewQInputDialog3 constructs a new QInputDialog object.
func NewQInputDialog3(parent *QWidget, flags int) *QInputDialog {
	ret := C.QInputDialog_new3(parent.cPointer(), (C.int)(flags))
	return newQInputDialog(ret)
}

func (this *QInputDialog) MetaObject() *QMetaObject {
	ret := C.QInputDialog_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QInputDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputDialog) SetInputMode(mode uintptr) {
	C.QInputDialog_SetInputMode(this.h, (C.uintptr_t)(mode))
}

func (this *QInputDialog) InputMode() uintptr {
	ret := C.QInputDialog_InputMode(this.h)
	return (uintptr)(ret)
}

func (this *QInputDialog) SetLabelText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QInputDialog_SetLabelText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QInputDialog) LabelText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_LabelText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputDialog) SetOption(option uintptr) {
	C.QInputDialog_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QInputDialog) TestOption(option uintptr) bool {
	ret := C.QInputDialog_TestOption(this.h, (C.uintptr_t)(option))
	return (bool)(ret)
}

func (this *QInputDialog) SetOptions(options int) {
	C.QInputDialog_SetOptions(this.h, (C.int)(options))
}

func (this *QInputDialog) Options() int {
	ret := C.QInputDialog_Options(this.h)
	return (int)(ret)
}

func (this *QInputDialog) SetTextValue(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QInputDialog_SetTextValue(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QInputDialog) TextValue() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_TextValue(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputDialog) SetTextEchoMode(mode uintptr) {
	C.QInputDialog_SetTextEchoMode(this.h, (C.uintptr_t)(mode))
}

func (this *QInputDialog) TextEchoMode() uintptr {
	ret := C.QInputDialog_TextEchoMode(this.h)
	return (uintptr)(ret)
}

func (this *QInputDialog) SetComboBoxEditable(editable bool) {
	C.QInputDialog_SetComboBoxEditable(this.h, (C.bool)(editable))
}

func (this *QInputDialog) IsComboBoxEditable() bool {
	ret := C.QInputDialog_IsComboBoxEditable(this.h)
	return (bool)(ret)
}

func (this *QInputDialog) SetComboBoxItems(items []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	items_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(items))))
	items_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	defer C.free(unsafe.Pointer(items_Lengths))
	for i := range items {
		single_cstring := C.CString(items[i])
		defer C.free(unsafe.Pointer(single_cstring))
		items_CArray[i] = single_cstring
		items_Lengths[i] = (C.size_t)(len(items[i]))
	}
	C.QInputDialog_SetComboBoxItems(this.h, &items_CArray[0], &items_Lengths[0], C.ulong(len(items)))
}

func (this *QInputDialog) ComboBoxItems() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QInputDialog_ComboBoxItems(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputDialog) SetIntValue(value int) {
	C.QInputDialog_SetIntValue(this.h, (C.int)(value))
}

func (this *QInputDialog) IntValue() int {
	ret := C.QInputDialog_IntValue(this.h)
	return (int)(ret)
}

func (this *QInputDialog) SetIntMinimum(min int) {
	C.QInputDialog_SetIntMinimum(this.h, (C.int)(min))
}

func (this *QInputDialog) IntMinimum() int {
	ret := C.QInputDialog_IntMinimum(this.h)
	return (int)(ret)
}

func (this *QInputDialog) SetIntMaximum(max int) {
	C.QInputDialog_SetIntMaximum(this.h, (C.int)(max))
}

func (this *QInputDialog) IntMaximum() int {
	ret := C.QInputDialog_IntMaximum(this.h)
	return (int)(ret)
}

func (this *QInputDialog) SetIntRange(min int, max int) {
	C.QInputDialog_SetIntRange(this.h, (C.int)(min), (C.int)(max))
}

func (this *QInputDialog) SetIntStep(step int) {
	C.QInputDialog_SetIntStep(this.h, (C.int)(step))
}

func (this *QInputDialog) IntStep() int {
	ret := C.QInputDialog_IntStep(this.h)
	return (int)(ret)
}

func (this *QInputDialog) SetDoubleValue(value float64) {
	C.QInputDialog_SetDoubleValue(this.h, (C.double)(value))
}

func (this *QInputDialog) DoubleValue() float64 {
	ret := C.QInputDialog_DoubleValue(this.h)
	return (float64)(ret)
}

func (this *QInputDialog) SetDoubleMinimum(min float64) {
	C.QInputDialog_SetDoubleMinimum(this.h, (C.double)(min))
}

func (this *QInputDialog) DoubleMinimum() float64 {
	ret := C.QInputDialog_DoubleMinimum(this.h)
	return (float64)(ret)
}

func (this *QInputDialog) SetDoubleMaximum(max float64) {
	C.QInputDialog_SetDoubleMaximum(this.h, (C.double)(max))
}

func (this *QInputDialog) DoubleMaximum() float64 {
	ret := C.QInputDialog_DoubleMaximum(this.h)
	return (float64)(ret)
}

func (this *QInputDialog) SetDoubleRange(min float64, max float64) {
	C.QInputDialog_SetDoubleRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QInputDialog) SetDoubleDecimals(decimals int) {
	C.QInputDialog_SetDoubleDecimals(this.h, (C.int)(decimals))
}

func (this *QInputDialog) DoubleDecimals() int {
	ret := C.QInputDialog_DoubleDecimals(this.h)
	return (int)(ret)
}

func (this *QInputDialog) SetOkButtonText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QInputDialog_SetOkButtonText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QInputDialog) OkButtonText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_OkButtonText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputDialog) SetCancelButtonText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QInputDialog_SetCancelButtonText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QInputDialog) CancelButtonText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_CancelButtonText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputDialog) MinimumSizeHint() *QSize {
	ret := C.QInputDialog_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputDialog) SizeHint() *QSize {
	ret := C.QInputDialog_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputDialog) SetVisible(visible bool) {
	C.QInputDialog_SetVisible(this.h, (C.bool)(visible))
}

func QInputDialog_GetText(parent *QWidget, title string, label string) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetText(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetMultiLineText(parent *QWidget, title string, label string) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetMultiLineText(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetItem(parent *QWidget, title string, label string, items []string) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	items_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(items))))
	items_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	defer C.free(unsafe.Pointer(items_Lengths))
	for i := range items {
		single_cstring := C.CString(items[i])
		defer C.free(unsafe.Pointer(single_cstring))
		items_CArray[i] = single_cstring
		items_Lengths[i] = (C.size_t)(len(items[i]))
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetItem(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), &items_CArray[0], &items_Lengths[0], C.ulong(len(items)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetInt(parent *QWidget, title string, label string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetInt(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)))
	return (int)(ret)
}

func QInputDialog_GetDouble(parent *QWidget, title string, label string) float64 {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetDouble(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)))
	return (float64)(ret)
}

func QInputDialog_GetDouble2(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64, decimals int, ok *bool, flags int, step float64) float64 {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetDouble2(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.double)(step))
	return (float64)(ret)
}

func (this *QInputDialog) SetDoubleStep(step float64) {
	C.QInputDialog_SetDoubleStep(this.h, (C.double)(step))
}

func (this *QInputDialog) DoubleStep() float64 {
	ret := C.QInputDialog_DoubleStep(this.h)
	return (float64)(ret)
}

func (this *QInputDialog) TextValueChanged(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QInputDialog_TextValueChanged(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QInputDialog) OnTextValueChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputDialog_connect_TextValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputDialog) TextValueSelected(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QInputDialog_TextValueSelected(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QInputDialog) OnTextValueSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputDialog_connect_TextValueSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputDialog) IntValueChanged(value int) {
	C.QInputDialog_IntValueChanged(this.h, (C.int)(value))
}

func (this *QInputDialog) OnIntValueChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputDialog_connect_IntValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputDialog) IntValueSelected(value int) {
	C.QInputDialog_IntValueSelected(this.h, (C.int)(value))
}

func (this *QInputDialog) OnIntValueSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputDialog_connect_IntValueSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputDialog) DoubleValueChanged(value float64) {
	C.QInputDialog_DoubleValueChanged(this.h, (C.double)(value))
}

func (this *QInputDialog) OnDoubleValueChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputDialog_connect_DoubleValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputDialog) DoubleValueSelected(value float64) {
	C.QInputDialog_DoubleValueSelected(this.h, (C.double)(value))
}

func (this *QInputDialog) OnDoubleValueSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputDialog_connect_DoubleValueSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputDialog) Done(result int) {
	C.QInputDialog_Done(this.h, (C.int)(result))
}

func QInputDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputDialog) SetOption2(option uintptr, on bool) {
	C.QInputDialog_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

func QInputDialog_GetText4(parent *QWidget, title string, label string, echo uintptr) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetText4(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.uintptr_t)(echo), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetText5(parent *QWidget, title string, label string, echo uintptr, text string) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetText5(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.uintptr_t)(echo), text_Cstring, C.ulong(len(text)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetText6(parent *QWidget, title string, label string, echo uintptr, text string, ok *bool) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetText6(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.uintptr_t)(echo), text_Cstring, C.ulong(len(text)), (*C.bool)(unsafe.Pointer(ok)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetText7(parent *QWidget, title string, label string, echo uintptr, text string, ok *bool, flags int) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetText7(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.uintptr_t)(echo), text_Cstring, C.ulong(len(text)), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetText8(parent *QWidget, title string, label string, echo uintptr, text string, ok *bool, flags int, inputMethodHints int) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetText8(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.uintptr_t)(echo), text_Cstring, C.ulong(len(text)), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.int)(inputMethodHints), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetMultiLineText4(parent *QWidget, title string, label string, text string) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetMultiLineText4(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), text_Cstring, C.ulong(len(text)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetMultiLineText5(parent *QWidget, title string, label string, text string, ok *bool) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetMultiLineText5(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), text_Cstring, C.ulong(len(text)), (*C.bool)(unsafe.Pointer(ok)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetMultiLineText6(parent *QWidget, title string, label string, text string, ok *bool, flags int) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetMultiLineText6(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), text_Cstring, C.ulong(len(text)), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetMultiLineText7(parent *QWidget, title string, label string, text string, ok *bool, flags int, inputMethodHints int) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetMultiLineText7(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), text_Cstring, C.ulong(len(text)), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.int)(inputMethodHints), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetItem5(parent *QWidget, title string, label string, items []string, current int) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	items_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(items))))
	items_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	defer C.free(unsafe.Pointer(items_Lengths))
	for i := range items {
		single_cstring := C.CString(items[i])
		defer C.free(unsafe.Pointer(single_cstring))
		items_CArray[i] = single_cstring
		items_Lengths[i] = (C.size_t)(len(items[i]))
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetItem5(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), &items_CArray[0], &items_Lengths[0], C.ulong(len(items)), (C.int)(current), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetItem6(parent *QWidget, title string, label string, items []string, current int, editable bool) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	items_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(items))))
	items_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	defer C.free(unsafe.Pointer(items_Lengths))
	for i := range items {
		single_cstring := C.CString(items[i])
		defer C.free(unsafe.Pointer(single_cstring))
		items_CArray[i] = single_cstring
		items_Lengths[i] = (C.size_t)(len(items[i]))
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetItem6(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), &items_CArray[0], &items_Lengths[0], C.ulong(len(items)), (C.int)(current), (C.bool)(editable), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetItem7(parent *QWidget, title string, label string, items []string, current int, editable bool, ok *bool) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	items_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(items))))
	items_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	defer C.free(unsafe.Pointer(items_Lengths))
	for i := range items {
		single_cstring := C.CString(items[i])
		defer C.free(unsafe.Pointer(single_cstring))
		items_CArray[i] = single_cstring
		items_Lengths[i] = (C.size_t)(len(items[i]))
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetItem7(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), &items_CArray[0], &items_Lengths[0], C.ulong(len(items)), (C.int)(current), (C.bool)(editable), (*C.bool)(unsafe.Pointer(ok)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetItem8(parent *QWidget, title string, label string, items []string, current int, editable bool, ok *bool, flags int) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	items_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(items))))
	items_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	defer C.free(unsafe.Pointer(items_Lengths))
	for i := range items {
		single_cstring := C.CString(items[i])
		defer C.free(unsafe.Pointer(single_cstring))
		items_CArray[i] = single_cstring
		items_Lengths[i] = (C.size_t)(len(items[i]))
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetItem8(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), &items_CArray[0], &items_Lengths[0], C.ulong(len(items)), (C.int)(current), (C.bool)(editable), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetItem9(parent *QWidget, title string, label string, items []string, current int, editable bool, ok *bool, flags int, inputMethodHints int) string {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	items_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(items))))
	items_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	defer C.free(unsafe.Pointer(items_Lengths))
	for i := range items {
		single_cstring := C.CString(items[i])
		defer C.free(unsafe.Pointer(single_cstring))
		items_CArray[i] = single_cstring
		items_Lengths[i] = (C.size_t)(len(items[i]))
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputDialog_GetItem9(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), &items_CArray[0], &items_Lengths[0], C.ulong(len(items)), (C.int)(current), (C.bool)(editable), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags), (C.int)(inputMethodHints), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputDialog_GetInt4(parent *QWidget, title string, label string, value int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetInt4(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.int)(value))
	return (int)(ret)
}

func QInputDialog_GetInt5(parent *QWidget, title string, label string, value int, minValue int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetInt5(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.int)(value), (C.int)(minValue))
	return (int)(ret)
}

func QInputDialog_GetInt6(parent *QWidget, title string, label string, value int, minValue int, maxValue int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetInt6(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.int)(value), (C.int)(minValue), (C.int)(maxValue))
	return (int)(ret)
}

func QInputDialog_GetInt7(parent *QWidget, title string, label string, value int, minValue int, maxValue int, step int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetInt7(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.int)(value), (C.int)(minValue), (C.int)(maxValue), (C.int)(step))
	return (int)(ret)
}

func QInputDialog_GetInt8(parent *QWidget, title string, label string, value int, minValue int, maxValue int, step int, ok *bool) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetInt8(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.int)(value), (C.int)(minValue), (C.int)(maxValue), (C.int)(step), (*C.bool)(unsafe.Pointer(ok)))
	return (int)(ret)
}

func QInputDialog_GetInt9(parent *QWidget, title string, label string, value int, minValue int, maxValue int, step int, ok *bool, flags int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetInt9(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.int)(value), (C.int)(minValue), (C.int)(maxValue), (C.int)(step), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags))
	return (int)(ret)
}

func QInputDialog_GetDouble4(parent *QWidget, title string, label string, value float64) float64 {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetDouble4(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.double)(value))
	return (float64)(ret)
}

func QInputDialog_GetDouble5(parent *QWidget, title string, label string, value float64, minValue float64) float64 {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetDouble5(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.double)(value), (C.double)(minValue))
	return (float64)(ret)
}

func QInputDialog_GetDouble6(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64) float64 {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetDouble6(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.double)(value), (C.double)(minValue), (C.double)(maxValue))
	return (float64)(ret)
}

func QInputDialog_GetDouble7(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64, decimals int) float64 {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetDouble7(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals))
	return (float64)(ret)
}

func QInputDialog_GetDouble8(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64, decimals int, ok *bool) float64 {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetDouble8(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals), (*C.bool)(unsafe.Pointer(ok)))
	return (float64)(ret)
}

func QInputDialog_GetDouble9(parent *QWidget, title string, label string, value float64, minValue float64, maxValue float64, decimals int, ok *bool, flags int) float64 {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QInputDialog_GetDouble9(parent.cPointer(), title_Cstring, C.ulong(len(title)), label_Cstring, C.ulong(len(label)), (C.double)(value), (C.double)(minValue), (C.double)(maxValue), (C.int)(decimals), (*C.bool)(unsafe.Pointer(ok)), (C.int)(flags))
	return (float64)(ret)
}

func (this *QInputDialog) Delete() {
	C.QInputDialog_Delete(this.h)
}
