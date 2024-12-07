package qt6

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
	h          *C.QCompleter
	isSubclass bool
	*QObject
}

func (this *QCompleter) cPointer() *C.QCompleter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCompleter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCompleter constructs the type using only CGO pointers.
func newQCompleter(h *C.QCompleter, h_QObject *C.QObject) *QCompleter {
	if h == nil {
		return nil
	}
	return &QCompleter{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQCompleter constructs the type using only unsafe pointers.
func UnsafeNewQCompleter(h unsafe.Pointer, h_QObject unsafe.Pointer) *QCompleter {
	if h == nil {
		return nil
	}

	return &QCompleter{h: (*C.QCompleter)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQCompleter constructs a new QCompleter object.
func NewQCompleter() *QCompleter {
	var outptr_QCompleter *C.QCompleter = nil
	var outptr_QObject *C.QObject = nil

	C.QCompleter_new(&outptr_QCompleter, &outptr_QObject)
	ret := newQCompleter(outptr_QCompleter, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQCompleter2 constructs a new QCompleter object.
func NewQCompleter2(model *QAbstractItemModel) *QCompleter {
	var outptr_QCompleter *C.QCompleter = nil
	var outptr_QObject *C.QObject = nil

	C.QCompleter_new2(model.cPointer(), &outptr_QCompleter, &outptr_QObject)
	ret := newQCompleter(outptr_QCompleter, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQCompleter3 constructs a new QCompleter object.
func NewQCompleter3(completions []string) *QCompleter {
	completions_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(completions))))
	defer C.free(unsafe.Pointer(completions_CArray))
	for i := range completions {
		completions_i_ms := C.struct_miqt_string{}
		completions_i_ms.data = C.CString(completions[i])
		completions_i_ms.len = C.size_t(len(completions[i]))
		defer C.free(unsafe.Pointer(completions_i_ms.data))
		completions_CArray[i] = completions_i_ms
	}
	completions_ma := C.struct_miqt_array{len: C.size_t(len(completions)), data: unsafe.Pointer(completions_CArray)}
	var outptr_QCompleter *C.QCompleter = nil
	var outptr_QObject *C.QObject = nil

	C.QCompleter_new3(completions_ma, &outptr_QCompleter, &outptr_QObject)
	ret := newQCompleter(outptr_QCompleter, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQCompleter4 constructs a new QCompleter object.
func NewQCompleter4(parent *QObject) *QCompleter {
	var outptr_QCompleter *C.QCompleter = nil
	var outptr_QObject *C.QObject = nil

	C.QCompleter_new4(parent.cPointer(), &outptr_QCompleter, &outptr_QObject)
	ret := newQCompleter(outptr_QCompleter, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQCompleter5 constructs a new QCompleter object.
func NewQCompleter5(model *QAbstractItemModel, parent *QObject) *QCompleter {
	var outptr_QCompleter *C.QCompleter = nil
	var outptr_QObject *C.QObject = nil

	C.QCompleter_new5(model.cPointer(), parent.cPointer(), &outptr_QCompleter, &outptr_QObject)
	ret := newQCompleter(outptr_QCompleter, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQCompleter6 constructs a new QCompleter object.
func NewQCompleter6(completions []string, parent *QObject) *QCompleter {
	completions_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(completions))))
	defer C.free(unsafe.Pointer(completions_CArray))
	for i := range completions {
		completions_i_ms := C.struct_miqt_string{}
		completions_i_ms.data = C.CString(completions[i])
		completions_i_ms.len = C.size_t(len(completions[i]))
		defer C.free(unsafe.Pointer(completions_i_ms.data))
		completions_CArray[i] = completions_i_ms
	}
	completions_ma := C.struct_miqt_array{len: C.size_t(len(completions)), data: unsafe.Pointer(completions_CArray)}
	var outptr_QCompleter *C.QCompleter = nil
	var outptr_QObject *C.QObject = nil

	C.QCompleter_new6(completions_ma, parent.cPointer(), &outptr_QCompleter, &outptr_QObject)
	ret := newQCompleter(outptr_QCompleter, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QCompleter) MetaObject() *QMetaObject {
	return newQMetaObject(C.QCompleter_MetaObject(this.h))
}

func (this *QCompleter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCompleter_Metacast(this.h, param1_Cstring))
}

func QCompleter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCompleter_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCompleter) SetWidget(widget *QWidget) {
	C.QCompleter_SetWidget(this.h, widget.cPointer())
}

func (this *QCompleter) Widget() *QWidget {
	return newQWidget(C.QCompleter_Widget(this.h), nil, nil)
}

func (this *QCompleter) SetModel(c *QAbstractItemModel) {
	C.QCompleter_SetModel(this.h, c.cPointer())
}

func (this *QCompleter) Model() *QAbstractItemModel {
	return newQAbstractItemModel(C.QCompleter_Model(this.h), nil)
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
	return newQAbstractItemView(C.QCompleter_Popup(this.h), nil, nil, nil, nil, nil)
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
	_goptr := newQModelIndex(C.QCompleter_CurrentIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCompleter) CurrentCompletion() string {
	var _ms C.struct_miqt_string = C.QCompleter_CurrentCompletion(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCompleter) CompletionModel() *QAbstractItemModel {
	return newQAbstractItemModel(C.QCompleter_CompletionModel(this.h), nil)
}

func (this *QCompleter) CompletionPrefix() string {
	var _ms C.struct_miqt_string = C.QCompleter_CompletionPrefix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCompleter) SetCompletionPrefix(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QCompleter_SetCompletionPrefix(this.h, prefix_ms)
}

func (this *QCompleter) Complete() {
	C.QCompleter_Complete(this.h)
}

func (this *QCompleter) SetWrapAround(wrap bool) {
	C.QCompleter_SetWrapAround(this.h, (C.bool)(wrap))
}

func (this *QCompleter) PathFromIndex(index *QModelIndex) string {
	var _ms C.struct_miqt_string = C.QCompleter_PathFromIndex(this.h, index.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCompleter) SplitPath(path string) []string {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	var _ma C.struct_miqt_array = C.QCompleter_SplitPath(this.h, path_ms)
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

func (this *QCompleter) Activated(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QCompleter_Activated(this.h, text_ms)
}
func (this *QCompleter) OnActivated(slot func(text string)) {
	C.QCompleter_connect_Activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_Activated
func miqt_exec_callback_QCompleter_Activated(cb C.intptr_t, text C.struct_miqt_string) {
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
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QCompleter) Highlighted(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QCompleter_Highlighted(this.h, text_ms)
}
func (this *QCompleter) OnHighlighted(slot func(text string)) {
	C.QCompleter_connect_Highlighted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_Highlighted
func miqt_exec_callback_QCompleter_Highlighted(cb C.intptr_t, text C.struct_miqt_string) {
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
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func QCompleter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCompleter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCompleter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCompleter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCompleter) Complete1(rect *QRect) {
	C.QCompleter_Complete1(this.h, rect.cPointer())
}

func (this *QCompleter) callVirtualBase_PathFromIndex(index *QModelIndex) string {

	var _ms C.struct_miqt_string = C.QCompleter_virtualbase_PathFromIndex(unsafe.Pointer(this.h), index.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QCompleter) OnPathFromIndex(slot func(super func(index *QModelIndex) string, index *QModelIndex) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCompleter_override_virtual_PathFromIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_PathFromIndex
func miqt_exec_callback_QCompleter_PathFromIndex(self *C.QCompleter, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) string, index *QModelIndex) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QCompleter{h: self}).callVirtualBase_PathFromIndex, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QCompleter) callVirtualBase_SplitPath(path string) []string {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))

	var _ma C.struct_miqt_array = C.QCompleter_virtualbase_SplitPath(unsafe.Pointer(this.h), path_ms)
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
func (this *QCompleter) OnSplitPath(slot func(super func(path string) []string, path string) []string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCompleter_override_virtual_SplitPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_SplitPath
func miqt_exec_callback_QCompleter_SplitPath(self *C.QCompleter, cb C.intptr_t, path C.struct_miqt_string) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path string) []string, path string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var path_ms C.struct_miqt_string = path
	path_ret := C.GoStringN(path_ms.data, C.int(int64(path_ms.len)))
	C.free(unsafe.Pointer(path_ms.data))
	slotval1 := path_ret

	virtualReturn := gofunc((&QCompleter{h: self}).callVirtualBase_SplitPath, slotval1)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QCompleter) callVirtualBase_EventFilter(o *QObject, e *QEvent) bool {

	return (bool)(C.QCompleter_virtualbase_EventFilter(unsafe.Pointer(this.h), o.cPointer(), e.cPointer()))

}
func (this *QCompleter) OnEventFilter(slot func(super func(o *QObject, e *QEvent) bool, o *QObject, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCompleter_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_EventFilter
func miqt_exec_callback_QCompleter_EventFilter(self *C.QCompleter, cb C.intptr_t, o *C.QObject, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(o *QObject, e *QEvent) bool, o *QObject, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(o)

	slotval2 := newQEvent(e)

	virtualReturn := gofunc((&QCompleter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCompleter) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QCompleter_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QCompleter) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCompleter_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_Event
func miqt_exec_callback_QCompleter_Event(self *C.QCompleter, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QCompleter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCompleter) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QCompleter_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCompleter) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCompleter_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_TimerEvent
func miqt_exec_callback_QCompleter_TimerEvent(self *C.QCompleter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event, nil)

	gofunc((&QCompleter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCompleter) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QCompleter_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCompleter) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCompleter_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_ChildEvent
func miqt_exec_callback_QCompleter_ChildEvent(self *C.QCompleter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event, nil)

	gofunc((&QCompleter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCompleter) callVirtualBase_CustomEvent(event *QEvent) {

	C.QCompleter_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCompleter) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCompleter_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_CustomEvent
func miqt_exec_callback_QCompleter_CustomEvent(self *C.QCompleter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCompleter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCompleter) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QCompleter_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCompleter) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCompleter_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_ConnectNotify
func miqt_exec_callback_QCompleter_ConnectNotify(self *C.QCompleter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCompleter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCompleter) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QCompleter_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCompleter) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCompleter_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCompleter_DisconnectNotify
func miqt_exec_callback_QCompleter_DisconnectNotify(self *C.QCompleter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCompleter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCompleter) Delete() {
	C.QCompleter_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCompleter) GoGC() {
	runtime.SetFinalizer(this, func(this *QCompleter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
