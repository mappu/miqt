package qt

/*

#include "gen_qcompleter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCompleter__CompletionMode int

const (
	QCompleter__CompletionMode__PopupCompletion           QCompleter__CompletionMode = 0
	QCompleter__CompletionMode__UnfilteredPopupCompletion QCompleter__CompletionMode = 1
	QCompleter__CompletionMode__InlineCompletion          QCompleter__CompletionMode = 2
)

type QCompleter__ModelSorting int

const (
	QCompleter__ModelSorting__UnsortedModel                QCompleter__ModelSorting = 0
	QCompleter__ModelSorting__CaseSensitivelySortedModel   QCompleter__ModelSorting = 1
	QCompleter__ModelSorting__CaseInsensitivelySortedModel QCompleter__ModelSorting = 2
)

type QCompleter struct {
	h *C.QCompleter
	*QObject
}

func (this *QCompleter) cPointer() *C.QCompleter {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCompleter(h *C.QCompleter) *QCompleter {
	if h == nil {
		return nil
	}
	return &QCompleter{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQCompleter_U(h unsafe.Pointer) *QCompleter {
	return newQCompleter((*C.QCompleter)(h))
}

// NewQCompleter constructs a new QCompleter object.
func NewQCompleter() *QCompleter {
	ret := C.QCompleter_new()
	return newQCompleter(ret)
}

// NewQCompleter2 constructs a new QCompleter object.
func NewQCompleter2(model *QAbstractItemModel) *QCompleter {
	ret := C.QCompleter_new2(model.cPointer())
	return newQCompleter(ret)
}

// NewQCompleter3 constructs a new QCompleter object.
func NewQCompleter3(completions []string) *QCompleter {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	completions_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(completions))))
	completions_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(completions))))
	defer C.free(unsafe.Pointer(completions_CArray))
	defer C.free(unsafe.Pointer(completions_Lengths))
	for i := range completions {
		single_cstring := C.CString(completions[i])
		defer C.free(unsafe.Pointer(single_cstring))
		completions_CArray[i] = single_cstring
		completions_Lengths[i] = (C.uint64_t)(len(completions[i]))
	}
	ret := C.QCompleter_new3(&completions_CArray[0], &completions_Lengths[0], C.size_t(len(completions)))
	return newQCompleter(ret)
}

// NewQCompleter4 constructs a new QCompleter object.
func NewQCompleter4(parent *QObject) *QCompleter {
	ret := C.QCompleter_new4(parent.cPointer())
	return newQCompleter(ret)
}

// NewQCompleter5 constructs a new QCompleter object.
func NewQCompleter5(model *QAbstractItemModel, parent *QObject) *QCompleter {
	ret := C.QCompleter_new5(model.cPointer(), parent.cPointer())
	return newQCompleter(ret)
}

// NewQCompleter6 constructs a new QCompleter object.
func NewQCompleter6(completions []string, parent *QObject) *QCompleter {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	completions_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(completions))))
	completions_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(completions))))
	defer C.free(unsafe.Pointer(completions_CArray))
	defer C.free(unsafe.Pointer(completions_Lengths))
	for i := range completions {
		single_cstring := C.CString(completions[i])
		defer C.free(unsafe.Pointer(single_cstring))
		completions_CArray[i] = single_cstring
		completions_Lengths[i] = (C.uint64_t)(len(completions[i]))
	}
	ret := C.QCompleter_new6(&completions_CArray[0], &completions_Lengths[0], C.size_t(len(completions)), parent.cPointer())
	return newQCompleter(ret)
}

func (this *QCompleter) MetaObject() *QMetaObject {
	ret := C.QCompleter_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QCompleter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCompleter_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCompleter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCompleter_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCompleter) SetWidget(widget *QWidget) {
	C.QCompleter_SetWidget(this.h, widget.cPointer())
}

func (this *QCompleter) Widget() *QWidget {
	ret := C.QCompleter_Widget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QCompleter) SetModel(c *QAbstractItemModel) {
	C.QCompleter_SetModel(this.h, c.cPointer())
}

func (this *QCompleter) Model() *QAbstractItemModel {
	ret := C.QCompleter_Model(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(ret))
}

func (this *QCompleter) SetCompletionMode(mode QCompleter__CompletionMode) {
	C.QCompleter_SetCompletionMode(this.h, (C.uintptr_t)(mode))
}

func (this *QCompleter) CompletionMode() QCompleter__CompletionMode {
	ret := C.QCompleter_CompletionMode(this.h)
	return (QCompleter__CompletionMode)(ret)
}

func (this *QCompleter) SetFilterMode(filterMode int) {
	C.QCompleter_SetFilterMode(this.h, (C.int)(filterMode))
}

func (this *QCompleter) FilterMode() int {
	ret := C.QCompleter_FilterMode(this.h)
	return (int)(ret)
}

func (this *QCompleter) Popup() *QAbstractItemView {
	ret := C.QCompleter_Popup(this.h)
	return newQAbstractItemView_U(unsafe.Pointer(ret))
}

func (this *QCompleter) SetPopup(popup *QAbstractItemView) {
	C.QCompleter_SetPopup(this.h, popup.cPointer())
}

func (this *QCompleter) SetCaseSensitivity(caseSensitivity CaseSensitivity) {
	C.QCompleter_SetCaseSensitivity(this.h, (C.uintptr_t)(caseSensitivity))
}

func (this *QCompleter) CaseSensitivity() CaseSensitivity {
	ret := C.QCompleter_CaseSensitivity(this.h)
	return (CaseSensitivity)(ret)
}

func (this *QCompleter) SetModelSorting(sorting QCompleter__ModelSorting) {
	C.QCompleter_SetModelSorting(this.h, (C.uintptr_t)(sorting))
}

func (this *QCompleter) ModelSorting() QCompleter__ModelSorting {
	ret := C.QCompleter_ModelSorting(this.h)
	return (QCompleter__ModelSorting)(ret)
}

func (this *QCompleter) SetCompletionColumn(column int) {
	C.QCompleter_SetCompletionColumn(this.h, (C.int)(column))
}

func (this *QCompleter) CompletionColumn() int {
	ret := C.QCompleter_CompletionColumn(this.h)
	return (int)(ret)
}

func (this *QCompleter) SetCompletionRole(role int) {
	C.QCompleter_SetCompletionRole(this.h, (C.int)(role))
}

func (this *QCompleter) CompletionRole() int {
	ret := C.QCompleter_CompletionRole(this.h)
	return (int)(ret)
}

func (this *QCompleter) WrapAround() bool {
	ret := C.QCompleter_WrapAround(this.h)
	return (bool)(ret)
}

func (this *QCompleter) MaxVisibleItems() int {
	ret := C.QCompleter_MaxVisibleItems(this.h)
	return (int)(ret)
}

func (this *QCompleter) SetMaxVisibleItems(maxItems int) {
	C.QCompleter_SetMaxVisibleItems(this.h, (C.int)(maxItems))
}

func (this *QCompleter) CompletionCount() int {
	ret := C.QCompleter_CompletionCount(this.h)
	return (int)(ret)
}

func (this *QCompleter) SetCurrentRow(row int) bool {
	ret := C.QCompleter_SetCurrentRow(this.h, (C.int)(row))
	return (bool)(ret)
}

func (this *QCompleter) CurrentRow() int {
	ret := C.QCompleter_CurrentRow(this.h)
	return (int)(ret)
}

func (this *QCompleter) CurrentIndex() *QModelIndex {
	ret := C.QCompleter_CurrentIndex(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCompleter) CurrentCompletion() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCompleter_CurrentCompletion(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCompleter) CompletionModel() *QAbstractItemModel {
	ret := C.QCompleter_CompletionModel(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(ret))
}

func (this *QCompleter) CompletionPrefix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCompleter_CompletionPrefix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCompleter) SetCompletionPrefix(prefix string) {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	C.QCompleter_SetCompletionPrefix(this.h, prefix_Cstring, C.size_t(len(prefix)))
}

func (this *QCompleter) Complete() {
	C.QCompleter_Complete(this.h)
}

func (this *QCompleter) SetWrapAround(wrap bool) {
	C.QCompleter_SetWrapAround(this.h, (C.bool)(wrap))
}

func (this *QCompleter) PathFromIndex(index *QModelIndex) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCompleter_PathFromIndex(this.h, index.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCompleter) SplitPath(path string) []string {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCompleter_SplitPath(this.h, path_Cstring, C.size_t(len(path)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCompleter) Activated(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QCompleter_Activated(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QCompleter) OnActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCompleter_connect_Activated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QCompleter) ActivatedWithIndex(index *QModelIndex) {
	C.QCompleter_ActivatedWithIndex(this.h, index.cPointer())
}

func (this *QCompleter) OnActivatedWithIndex(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCompleter_connect_ActivatedWithIndex(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QCompleter) Highlighted(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QCompleter_Highlighted(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QCompleter) OnHighlighted(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCompleter_connect_Highlighted(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QCompleter) HighlightedWithIndex(index *QModelIndex) {
	C.QCompleter_HighlightedWithIndex(this.h, index.cPointer())
}

func (this *QCompleter) OnHighlightedWithIndex(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCompleter_connect_HighlightedWithIndex(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QCompleter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCompleter_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCompleter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCompleter_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCompleter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCompleter_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCompleter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCompleter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCompleter) Complete1(rect *QRect) {
	C.QCompleter_Complete1(this.h, rect.cPointer())
}

func (this *QCompleter) Delete() {
	C.QCompleter_Delete(this.h)
}
