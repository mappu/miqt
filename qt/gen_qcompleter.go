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
	QCompleter__PopupCompletion           QCompleter__CompletionMode = 0
	QCompleter__UnfilteredPopupCompletion QCompleter__CompletionMode = 1
	QCompleter__InlineCompletion          QCompleter__CompletionMode = 2
)

type QCompleter__ModelSorting int

const (
	QCompleter__UnsortedModel                QCompleter__ModelSorting = 0
	QCompleter__CaseSensitivelySortedModel   QCompleter__ModelSorting = 1
	QCompleter__CaseInsensitivelySortedModel QCompleter__ModelSorting = 2
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
	// For the C ABI, malloc a C array of raw pointers
	completions_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(completions))))
	defer C.free(unsafe.Pointer(completions_CArray))
	for i := range completions {
		completions_i_ms := miqt_strdupg(completions[i])
		defer C.free(completions_i_ms)
		completions_CArray[i] = (*C.struct_miqt_string)(completions_i_ms)
	}
	completions_ma := &C.struct_miqt_array{len: C.size_t(len(completions)), data: unsafe.Pointer(completions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(completions_ma))
	ret := C.QCompleter_new3(completions_ma)
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
	// For the C ABI, malloc a C array of raw pointers
	completions_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(completions))))
	defer C.free(unsafe.Pointer(completions_CArray))
	for i := range completions {
		completions_i_ms := miqt_strdupg(completions[i])
		defer C.free(completions_i_ms)
		completions_CArray[i] = (*C.struct_miqt_string)(completions_i_ms)
	}
	completions_ma := &C.struct_miqt_array{len: C.size_t(len(completions)), data: unsafe.Pointer(completions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(completions_ma))
	ret := C.QCompleter_new6(completions_ma, parent.cPointer())
	return newQCompleter(ret)
}

func (this *QCompleter) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QCompleter_MetaObject(this.h)))
}

func (this *QCompleter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QCompleter_Metacast(this.h, param1_Cstring)
}

func QCompleter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QCompleter_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCompleter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QCompleter_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCompleter) SetWidget(widget *QWidget) {
	C.QCompleter_SetWidget(this.h, widget.cPointer())
}

func (this *QCompleter) Widget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QCompleter_Widget(this.h)))
}

func (this *QCompleter) SetModel(c *QAbstractItemModel) {
	C.QCompleter_SetModel(this.h, c.cPointer())
}

func (this *QCompleter) Model() *QAbstractItemModel {
	return newQAbstractItemModel_U(unsafe.Pointer(C.QCompleter_Model(this.h)))
}

func (this *QCompleter) SetCompletionMode(mode QCompleter__CompletionMode) {
	C.QCompleter_SetCompletionMode(this.h, (C.int)(mode))
}

func (this *QCompleter) CompletionMode() QCompleter__CompletionMode {
	return (QCompleter__CompletionMode)(C.QCompleter_CompletionMode(this.h))
}

func (this *QCompleter) SetFilterMode(filterMode MatchFlag) {
	C.QCompleter_SetFilterMode(this.h, (C.int)(filterMode))
}

func (this *QCompleter) FilterMode() MatchFlag {
	return (MatchFlag)(C.QCompleter_FilterMode(this.h))
}

func (this *QCompleter) Popup() *QAbstractItemView {
	return newQAbstractItemView_U(unsafe.Pointer(C.QCompleter_Popup(this.h)))
}

func (this *QCompleter) SetPopup(popup *QAbstractItemView) {
	C.QCompleter_SetPopup(this.h, popup.cPointer())
}

func (this *QCompleter) SetCaseSensitivity(caseSensitivity CaseSensitivity) {
	C.QCompleter_SetCaseSensitivity(this.h, (C.int)(caseSensitivity))
}

func (this *QCompleter) CaseSensitivity() CaseSensitivity {
	return (CaseSensitivity)(C.QCompleter_CaseSensitivity(this.h))
}

func (this *QCompleter) SetModelSorting(sorting QCompleter__ModelSorting) {
	C.QCompleter_SetModelSorting(this.h, (C.int)(sorting))
}

func (this *QCompleter) ModelSorting() QCompleter__ModelSorting {
	return (QCompleter__ModelSorting)(C.QCompleter_ModelSorting(this.h))
}

func (this *QCompleter) SetCompletionColumn(column int) {
	C.QCompleter_SetCompletionColumn(this.h, (C.int)(column))
}

func (this *QCompleter) CompletionColumn() int {
	return (int)(C.QCompleter_CompletionColumn(this.h))
}

func (this *QCompleter) SetCompletionRole(role int) {
	C.QCompleter_SetCompletionRole(this.h, (C.int)(role))
}

func (this *QCompleter) CompletionRole() int {
	return (int)(C.QCompleter_CompletionRole(this.h))
}

func (this *QCompleter) WrapAround() bool {
	return (bool)(C.QCompleter_WrapAround(this.h))
}

func (this *QCompleter) MaxVisibleItems() int {
	return (int)(C.QCompleter_MaxVisibleItems(this.h))
}

func (this *QCompleter) SetMaxVisibleItems(maxItems int) {
	C.QCompleter_SetMaxVisibleItems(this.h, (C.int)(maxItems))
}

func (this *QCompleter) CompletionCount() int {
	return (int)(C.QCompleter_CompletionCount(this.h))
}

func (this *QCompleter) SetCurrentRow(row int) bool {
	return (bool)(C.QCompleter_SetCurrentRow(this.h, (C.int)(row)))
}

func (this *QCompleter) CurrentRow() int {
	return (int)(C.QCompleter_CurrentRow(this.h))
}

func (this *QCompleter) CurrentIndex() *QModelIndex {
	_ret := C.QCompleter_CurrentIndex(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCompleter) CurrentCompletion() string {
	var _ms *C.struct_miqt_string = C.QCompleter_CurrentCompletion(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCompleter) CompletionModel() *QAbstractItemModel {
	return newQAbstractItemModel_U(unsafe.Pointer(C.QCompleter_CompletionModel(this.h)))
}

func (this *QCompleter) CompletionPrefix() string {
	var _ms *C.struct_miqt_string = C.QCompleter_CompletionPrefix(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCompleter) SetCompletionPrefix(prefix string) {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	C.QCompleter_SetCompletionPrefix(this.h, (*C.struct_miqt_string)(prefix_ms))
}

func (this *QCompleter) Complete() {
	C.QCompleter_Complete(this.h)
}

func (this *QCompleter) SetWrapAround(wrap bool) {
	C.QCompleter_SetWrapAround(this.h, (C.bool)(wrap))
}

func (this *QCompleter) PathFromIndex(index *QModelIndex) string {
	var _ms *C.struct_miqt_string = C.QCompleter_PathFromIndex(this.h, index.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCompleter) SplitPath(path string) []string {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	var _ma *C.struct_miqt_array = C.QCompleter_SplitPath(this.h, (*C.struct_miqt_string)(path_ms))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QCompleter) Activated(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QCompleter_Activated(this.h, (*C.struct_miqt_string)(text_ms))
}
func (this *QCompleter) OnActivated(slot func(text string)) {
	C.QCompleter_connect_Activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_Activated
func miqt_exec_callback_QCompleter_Activated(cb C.intptr_t, text *C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms *C.struct_miqt_string = text
	text_ret := C.GoStringN(&text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms))
	slotval1 := text_ret

	gofunc(slotval1)
}

func (this *QCompleter) ActivatedWithIndex(index *QModelIndex) {
	C.QCompleter_ActivatedWithIndex(this.h, index.cPointer())
}
func (this *QCompleter) OnActivatedWithIndex(slot func(index *QModelIndex)) {
	C.QCompleter_connect_ActivatedWithIndex(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_ActivatedWithIndex
func miqt_exec_callback_QCompleter_ActivatedWithIndex(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex_U(unsafe.Pointer(index))

	gofunc(slotval1)
}

func (this *QCompleter) Highlighted(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QCompleter_Highlighted(this.h, (*C.struct_miqt_string)(text_ms))
}
func (this *QCompleter) OnHighlighted(slot func(text string)) {
	C.QCompleter_connect_Highlighted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_Highlighted
func miqt_exec_callback_QCompleter_Highlighted(cb C.intptr_t, text *C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms *C.struct_miqt_string = text
	text_ret := C.GoStringN(&text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms))
	slotval1 := text_ret

	gofunc(slotval1)
}

func (this *QCompleter) HighlightedWithIndex(index *QModelIndex) {
	C.QCompleter_HighlightedWithIndex(this.h, index.cPointer())
}
func (this *QCompleter) OnHighlightedWithIndex(slot func(index *QModelIndex)) {
	C.QCompleter_connect_HighlightedWithIndex(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_HighlightedWithIndex
func miqt_exec_callback_QCompleter_HighlightedWithIndex(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex_U(unsafe.Pointer(index))

	gofunc(slotval1)
}

func QCompleter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCompleter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCompleter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCompleter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCompleter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCompleter_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCompleter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCompleter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCompleter) Complete1(rect *QRect) {
	C.QCompleter_Complete1(this.h, rect.cPointer())
}

// Delete this object from C++ memory.
func (this *QCompleter) Delete() {
	C.QCompleter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCompleter) GoGC() {
	runtime.SetFinalizer(this, func(this *QCompleter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
