package qt

/*

#include "gen_qtreeview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTreeView struct {
	h *C.QTreeView
	*QAbstractItemView
}

func (this *QTreeView) cPointer() *C.QTreeView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTreeView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTreeView constructs the type using only CGO pointers.
func newQTreeView(h *C.QTreeView) *QTreeView {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	C.QTreeView_virtbase(h, &outptr_QAbstractItemView)

	return &QTreeView{h: h,
		QAbstractItemView: newQAbstractItemView(outptr_QAbstractItemView)}
}

// UnsafeNewQTreeView constructs the type using only unsafe pointers.
func UnsafeNewQTreeView(h unsafe.Pointer) *QTreeView {
	return newQTreeView((*C.QTreeView)(h))
}

// NewQTreeView constructs a new QTreeView object.
func NewQTreeView(parent *QWidget) *QTreeView {

	return newQTreeView(C.QTreeView_new(parent.cPointer()))
}

// NewQTreeView2 constructs a new QTreeView object.
func NewQTreeView2() *QTreeView {

	return newQTreeView(C.QTreeView_new2())
}

func (this *QTreeView) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTreeView_MetaObject(this.h))
}

func (this *QTreeView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTreeView_Metacast(this.h, param1_Cstring))
}

func QTreeView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeView) SetModel(model *QAbstractItemModel) {
	C.QTreeView_SetModel(this.h, model.cPointer())
}

func (this *QTreeView) SetRootIndex(index *QModelIndex) {
	C.QTreeView_SetRootIndex(this.h, index.cPointer())
}

func (this *QTreeView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QTreeView_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QTreeView) Header() *QHeaderView {
	return newQHeaderView(C.QTreeView_Header(this.h))
}

func (this *QTreeView) SetHeader(header *QHeaderView) {
	C.QTreeView_SetHeader(this.h, header.cPointer())
}

func (this *QTreeView) AutoExpandDelay() int {
	return (int)(C.QTreeView_AutoExpandDelay(this.h))
}

func (this *QTreeView) SetAutoExpandDelay(delay int) {
	C.QTreeView_SetAutoExpandDelay(this.h, (C.int)(delay))
}

func (this *QTreeView) Indentation() int {
	return (int)(C.QTreeView_Indentation(this.h))
}

func (this *QTreeView) SetIndentation(i int) {
	C.QTreeView_SetIndentation(this.h, (C.int)(i))
}

func (this *QTreeView) ResetIndentation() {
	C.QTreeView_ResetIndentation(this.h)
}

func (this *QTreeView) RootIsDecorated() bool {
	return (bool)(C.QTreeView_RootIsDecorated(this.h))
}

func (this *QTreeView) SetRootIsDecorated(show bool) {
	C.QTreeView_SetRootIsDecorated(this.h, (C.bool)(show))
}

func (this *QTreeView) UniformRowHeights() bool {
	return (bool)(C.QTreeView_UniformRowHeights(this.h))
}

func (this *QTreeView) SetUniformRowHeights(uniform bool) {
	C.QTreeView_SetUniformRowHeights(this.h, (C.bool)(uniform))
}

func (this *QTreeView) ItemsExpandable() bool {
	return (bool)(C.QTreeView_ItemsExpandable(this.h))
}

func (this *QTreeView) SetItemsExpandable(enable bool) {
	C.QTreeView_SetItemsExpandable(this.h, (C.bool)(enable))
}

func (this *QTreeView) ExpandsOnDoubleClick() bool {
	return (bool)(C.QTreeView_ExpandsOnDoubleClick(this.h))
}

func (this *QTreeView) SetExpandsOnDoubleClick(enable bool) {
	C.QTreeView_SetExpandsOnDoubleClick(this.h, (C.bool)(enable))
}

func (this *QTreeView) ColumnViewportPosition(column int) int {
	return (int)(C.QTreeView_ColumnViewportPosition(this.h, (C.int)(column)))
}

func (this *QTreeView) ColumnWidth(column int) int {
	return (int)(C.QTreeView_ColumnWidth(this.h, (C.int)(column)))
}

func (this *QTreeView) SetColumnWidth(column int, width int) {
	C.QTreeView_SetColumnWidth(this.h, (C.int)(column), (C.int)(width))
}

func (this *QTreeView) ColumnAt(x int) int {
	return (int)(C.QTreeView_ColumnAt(this.h, (C.int)(x)))
}

func (this *QTreeView) IsColumnHidden(column int) bool {
	return (bool)(C.QTreeView_IsColumnHidden(this.h, (C.int)(column)))
}

func (this *QTreeView) SetColumnHidden(column int, hide bool) {
	C.QTreeView_SetColumnHidden(this.h, (C.int)(column), (C.bool)(hide))
}

func (this *QTreeView) IsHeaderHidden() bool {
	return (bool)(C.QTreeView_IsHeaderHidden(this.h))
}

func (this *QTreeView) SetHeaderHidden(hide bool) {
	C.QTreeView_SetHeaderHidden(this.h, (C.bool)(hide))
}

func (this *QTreeView) IsRowHidden(row int, parent *QModelIndex) bool {
	return (bool)(C.QTreeView_IsRowHidden(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QTreeView) SetRowHidden(row int, parent *QModelIndex, hide bool) {
	C.QTreeView_SetRowHidden(this.h, (C.int)(row), parent.cPointer(), (C.bool)(hide))
}

func (this *QTreeView) IsFirstColumnSpanned(row int, parent *QModelIndex) bool {
	return (bool)(C.QTreeView_IsFirstColumnSpanned(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QTreeView) SetFirstColumnSpanned(row int, parent *QModelIndex, span bool) {
	C.QTreeView_SetFirstColumnSpanned(this.h, (C.int)(row), parent.cPointer(), (C.bool)(span))
}

func (this *QTreeView) IsExpanded(index *QModelIndex) bool {
	return (bool)(C.QTreeView_IsExpanded(this.h, index.cPointer()))
}

func (this *QTreeView) SetExpanded(index *QModelIndex, expand bool) {
	C.QTreeView_SetExpanded(this.h, index.cPointer(), (C.bool)(expand))
}

func (this *QTreeView) SetSortingEnabled(enable bool) {
	C.QTreeView_SetSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QTreeView) IsSortingEnabled() bool {
	return (bool)(C.QTreeView_IsSortingEnabled(this.h))
}

func (this *QTreeView) SetAnimated(enable bool) {
	C.QTreeView_SetAnimated(this.h, (C.bool)(enable))
}

func (this *QTreeView) IsAnimated() bool {
	return (bool)(C.QTreeView_IsAnimated(this.h))
}

func (this *QTreeView) SetAllColumnsShowFocus(enable bool) {
	C.QTreeView_SetAllColumnsShowFocus(this.h, (C.bool)(enable))
}

func (this *QTreeView) AllColumnsShowFocus() bool {
	return (bool)(C.QTreeView_AllColumnsShowFocus(this.h))
}

func (this *QTreeView) SetWordWrap(on bool) {
	C.QTreeView_SetWordWrap(this.h, (C.bool)(on))
}

func (this *QTreeView) WordWrap() bool {
	return (bool)(C.QTreeView_WordWrap(this.h))
}

func (this *QTreeView) SetTreePosition(logicalIndex int) {
	C.QTreeView_SetTreePosition(this.h, (C.int)(logicalIndex))
}

func (this *QTreeView) TreePosition() int {
	return (int)(C.QTreeView_TreePosition(this.h))
}

func (this *QTreeView) KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))
	C.QTreeView_KeyboardSearch(this.h, search_ms)
}

func (this *QTreeView) VisualRect(index *QModelIndex) *QRect {
	_goptr := newQRect(C.QTreeView_VisualRect(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QTreeView_ScrollTo(this.h, index.cPointer(), (C.int)(hint))
}

func (this *QTreeView) IndexAt(p *QPoint) *QModelIndex {
	_goptr := newQModelIndex(C.QTreeView_IndexAt(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) IndexAbove(index *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QTreeView_IndexAbove(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) IndexBelow(index *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QTreeView_IndexBelow(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) DoItemsLayout() {
	C.QTreeView_DoItemsLayout(this.h)
}

func (this *QTreeView) Reset() {
	C.QTreeView_Reset(this.h)
}

func (this *QTreeView) DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}
	C.QTreeView_DataChanged(this.h, topLeft.cPointer(), bottomRight.cPointer(), roles_ma)
}

func (this *QTreeView) SelectAll() {
	C.QTreeView_SelectAll(this.h)
}

func (this *QTreeView) Expanded(index *QModelIndex) {
	C.QTreeView_Expanded(this.h, index.cPointer())
}
func (this *QTreeView) OnExpanded(slot func(index *QModelIndex)) {
	C.QTreeView_connect_Expanded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeView_Expanded
func miqt_exec_callback_QTreeView_Expanded(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QTreeView) Collapsed(index *QModelIndex) {
	C.QTreeView_Collapsed(this.h, index.cPointer())
}
func (this *QTreeView) OnCollapsed(slot func(index *QModelIndex)) {
	C.QTreeView_connect_Collapsed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeView_Collapsed
func miqt_exec_callback_QTreeView_Collapsed(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QTreeView) HideColumn(column int) {
	C.QTreeView_HideColumn(this.h, (C.int)(column))
}

func (this *QTreeView) ShowColumn(column int) {
	C.QTreeView_ShowColumn(this.h, (C.int)(column))
}

func (this *QTreeView) Expand(index *QModelIndex) {
	C.QTreeView_Expand(this.h, index.cPointer())
}

func (this *QTreeView) Collapse(index *QModelIndex) {
	C.QTreeView_Collapse(this.h, index.cPointer())
}

func (this *QTreeView) ResizeColumnToContents(column int) {
	C.QTreeView_ResizeColumnToContents(this.h, (C.int)(column))
}

func (this *QTreeView) SortByColumn(column int) {
	C.QTreeView_SortByColumn(this.h, (C.int)(column))
}

func (this *QTreeView) SortByColumn2(column int, order SortOrder) {
	C.QTreeView_SortByColumn2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTreeView) ExpandAll() {
	C.QTreeView_ExpandAll(this.h)
}

func (this *QTreeView) ExpandRecursively(index *QModelIndex) {
	C.QTreeView_ExpandRecursively(this.h, index.cPointer())
}

func (this *QTreeView) CollapseAll() {
	C.QTreeView_CollapseAll(this.h)
}

func (this *QTreeView) ExpandToDepth(depth int) {
	C.QTreeView_ExpandToDepth(this.h, (C.int)(depth))
}

func QTreeView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeView) ExpandRecursively2(index *QModelIndex, depth int) {
	C.QTreeView_ExpandRecursively2(this.h, index.cPointer(), (C.int)(depth))
}

func (this *QTreeView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QTreeView_virtualbase_SetModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QTreeView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QTreeView_override_virtual_SetModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SetModel
func miqt_exec_callback_QTreeView_SetModel(self *C.QTreeView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QTreeView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QTreeView_virtualbase_SetRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QTreeView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QTreeView_override_virtual_SetRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SetRootIndex
func miqt_exec_callback_QTreeView_SetRootIndex(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QTreeView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QTreeView_virtualbase_SetSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QTreeView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QTreeView_override_virtual_SetSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SetSelectionModel
func miqt_exec_callback_QTreeView_SetSelectionModel(self *C.QTreeView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QTreeView) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QTreeView_virtualbase_KeyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QTreeView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QTreeView_override_virtual_KeyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_KeyboardSearch
func miqt_exec_callback_QTreeView_KeyboardSearch(self *C.QTreeView, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QTreeView{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QTreeView) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QTreeView_virtualbase_VisualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QTreeView_override_virtual_VisualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_VisualRect
func miqt_exec_callback_QTreeView_VisualRect(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QTreeView_virtualbase_ScrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QTreeView) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QTreeView_override_virtual_ScrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ScrollTo
func miqt_exec_callback_QTreeView_ScrollTo(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QTreeView{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QTreeView) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_goptr := newQModelIndex(C.QTreeView_virtualbase_IndexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QTreeView_override_virtual_IndexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_IndexAt
func miqt_exec_callback_QTreeView_IndexAt(self *C.QTreeView, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(p)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_DoItemsLayout() {

	C.QTreeView_virtualbase_DoItemsLayout(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnDoItemsLayout(slot func(super func())) {
	ok := C.QTreeView_override_virtual_DoItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DoItemsLayout
func miqt_exec_callback_QTreeView_DoItemsLayout(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QTreeView) callVirtualBase_Reset() {

	C.QTreeView_virtualbase_Reset(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnReset(slot func(super func())) {
	ok := C.QTreeView_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_Reset
func miqt_exec_callback_QTreeView_Reset(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_Reset)

}

func (this *QTreeView) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QTreeView_virtualbase_DataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QTreeView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QTreeView_override_virtual_DataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DataChanged
func miqt_exec_callback_QTreeView_DataChanged(self *C.QTreeView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(topLeft)

	slotval2 := newQModelIndex(bottomRight)

	var roles_ma C.struct_miqt_array = roles
	roles_ret := make([]int, int(roles_ma.len))
	roles_outCast := (*[0xffff]C.int)(unsafe.Pointer(roles_ma.data)) // hey ya
	for i := 0; i < int(roles_ma.len); i++ {
		roles_ret[i] = (int)(roles_outCast[i])
	}
	slotval3 := roles_ret

	gofunc((&QTreeView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QTreeView) callVirtualBase_SelectAll() {

	C.QTreeView_virtualbase_SelectAll(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnSelectAll(slot func(super func())) {
	ok := C.QTreeView_override_virtual_SelectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SelectAll
func miqt_exec_callback_QTreeView_SelectAll(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_SelectAll)

}

func (this *QTreeView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QTreeView_virtualbase_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTreeView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTreeView_override_virtual_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_VerticalScrollbarValueChanged
func miqt_exec_callback_QTreeView_VerticalScrollbarValueChanged(self *C.QTreeView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTreeView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QTreeView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTreeView_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTreeView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QTreeView_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ScrollContentsBy
func miqt_exec_callback_QTreeView_ScrollContentsBy(self *C.QTreeView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QTreeView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QTreeView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QTreeView_virtualbase_RowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTreeView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTreeView_override_virtual_RowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_RowsInserted
func miqt_exec_callback_QTreeView_RowsInserted(self *C.QTreeView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QTreeView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QTreeView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QTreeView_virtualbase_RowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTreeView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTreeView_override_virtual_RowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_RowsAboutToBeRemoved
func miqt_exec_callback_QTreeView_RowsAboutToBeRemoved(self *C.QTreeView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QTreeView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QTreeView) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QTreeView_virtualbase_MoveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QTreeView_override_virtual_MoveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_MoveCursor
func miqt_exec_callback_QTreeView_MoveCursor(self *C.QTreeView, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QTreeView_virtualbase_HorizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QTreeView_override_virtual_HorizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_HorizontalOffset
func miqt_exec_callback_QTreeView_HorizontalOffset(self *C.QTreeView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_VerticalOffset() int {

	return (int)(C.QTreeView_virtualbase_VerticalOffset(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QTreeView_override_virtual_VerticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_VerticalOffset
func miqt_exec_callback_QTreeView_VerticalOffset(self *C.QTreeView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QTreeView_virtualbase_SetSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QTreeView) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QTreeView_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SetSelection
func miqt_exec_callback_QTreeView_SetSelection(self *C.QTreeView, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QTreeView) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_goptr := newQRegion(C.QTreeView_virtualbase_VisualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QTreeView_override_virtual_VisualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_VisualRegionForSelection
func miqt_exec_callback_QTreeView_VisualRegionForSelection(self *C.QTreeView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QTreeView_virtualbase_SelectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QTreeView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QTreeView_override_virtual_SelectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SelectedIndexes
func miqt_exec_callback_QTreeView_SelectedIndexes(self *C.QTreeView, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QTreeView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTreeView_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTreeView_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_TimerEvent
func miqt_exec_callback_QTreeView_TimerEvent(self *C.QTreeView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QTreeView_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QTreeView_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_PaintEvent
func miqt_exec_callback_QTreeView_PaintEvent(self *C.QTreeView, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_DrawRow(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex) {

	C.QTreeView_virtualbase_DrawRow(unsafe.Pointer(this.h), painter.cPointer(), options.cPointer(), index.cPointer())

}
func (this *QTreeView) OnDrawRow(slot func(super func(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex), painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex)) {
	ok := C.QTreeView_override_virtual_DrawRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DrawRow
func miqt_exec_callback_QTreeView_DrawRow(self *C.QTreeView, cb C.intptr_t, painter *C.QPainter, options *C.QStyleOptionViewItem, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex), painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionViewItem(options)

	slotval3 := newQModelIndex(index)

	gofunc((&QTreeView{h: self}).callVirtualBase_DrawRow, slotval1, slotval2, slotval3)

}

func (this *QTreeView) callVirtualBase_DrawBranches(painter *QPainter, rect *QRect, index *QModelIndex) {

	C.QTreeView_virtualbase_DrawBranches(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), index.cPointer())

}
func (this *QTreeView) OnDrawBranches(slot func(super func(painter *QPainter, rect *QRect, index *QModelIndex), painter *QPainter, rect *QRect, index *QModelIndex)) {
	ok := C.QTreeView_override_virtual_DrawBranches(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DrawBranches
func miqt_exec_callback_QTreeView_DrawBranches(self *C.QTreeView, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRect, index *QModelIndex), painter *QPainter, rect *QRect, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRect(rect)

	slotval3 := newQModelIndex(index)

	gofunc((&QTreeView{h: self}).callVirtualBase_DrawBranches, slotval1, slotval2, slotval3)

}

func (this *QTreeView) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QTreeView_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeView_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_MousePressEvent
func miqt_exec_callback_QTreeView_MousePressEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QTreeView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_MouseReleaseEvent
func miqt_exec_callback_QTreeView_MouseReleaseEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTreeView_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeView_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_MouseDoubleClickEvent
func miqt_exec_callback_QTreeView_MouseDoubleClickEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QTreeView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_MouseMoveEvent
func miqt_exec_callback_QTreeView_MouseMoveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QTreeView_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTreeView_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_KeyPressEvent
func miqt_exec_callback_QTreeView_KeyPressEvent(self *C.QTreeView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTreeView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QTreeView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DragMoveEvent
func miqt_exec_callback_QTreeView_DragMoveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QTreeView_virtualbase_ViewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTreeView) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTreeView_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ViewportEvent
func miqt_exec_callback_QTreeView_ViewportEvent(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_UpdateGeometries() {

	C.QTreeView_virtualbase_UpdateGeometries(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnUpdateGeometries(slot func(super func())) {
	ok := C.QTreeView_override_virtual_UpdateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_UpdateGeometries
func miqt_exec_callback_QTreeView_UpdateGeometries(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QTreeView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QTreeView_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeView_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ViewportSizeHint
func miqt_exec_callback_QTreeView_ViewportSizeHint(self *C.QTreeView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QTreeView_virtualbase_SizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QTreeView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QTreeView_override_virtual_SizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SizeHintForColumn
func miqt_exec_callback_QTreeView_SizeHintForColumn(self *C.QTreeView, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QTreeView_virtualbase_HorizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTreeView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTreeView_override_virtual_HorizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_HorizontalScrollbarAction
func miqt_exec_callback_QTreeView_HorizontalScrollbarAction(self *C.QTreeView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTreeView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QTreeView) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QTreeView_virtualbase_IsIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTreeView) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QTreeView_override_virtual_IsIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_IsIndexHidden
func miqt_exec_callback_QTreeView_IsIndexHidden(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QTreeView_virtualbase_SelectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QTreeView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QTreeView_override_virtual_SelectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SelectionChanged
func miqt_exec_callback_QTreeView_SelectionChanged(self *C.QTreeView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QTreeView{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QTreeView) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QTreeView_virtualbase_CurrentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QTreeView) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QTreeView_override_virtual_CurrentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_CurrentChanged
func miqt_exec_callback_QTreeView_CurrentChanged(self *C.QTreeView, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc((&QTreeView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QTreeView) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QTreeView_virtualbase_SizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QTreeView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QTreeView_override_virtual_SizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SizeHintForRow
func miqt_exec_callback_QTreeView_SizeHintForRow(self *C.QTreeView, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTreeView_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QTreeView_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_InputMethodQuery
func miqt_exec_callback_QTreeView_InputMethodQuery(self *C.QTreeView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_UpdateEditorData() {

	C.QTreeView_virtualbase_UpdateEditorData(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnUpdateEditorData(slot func(super func())) {
	ok := C.QTreeView_override_virtual_UpdateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_UpdateEditorData
func miqt_exec_callback_QTreeView_UpdateEditorData(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QTreeView) callVirtualBase_UpdateEditorGeometries() {

	C.QTreeView_virtualbase_UpdateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QTreeView_override_virtual_UpdateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_UpdateEditorGeometries
func miqt_exec_callback_QTreeView_UpdateEditorGeometries(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QTreeView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QTreeView_virtualbase_VerticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTreeView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTreeView_override_virtual_VerticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_VerticalScrollbarAction
func miqt_exec_callback_QTreeView_VerticalScrollbarAction(self *C.QTreeView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTreeView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QTreeView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QTreeView_virtualbase_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTreeView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTreeView_override_virtual_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_HorizontalScrollbarValueChanged
func miqt_exec_callback_QTreeView_HorizontalScrollbarValueChanged(self *C.QTreeView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTreeView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QTreeView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QTreeView_virtualbase_CloseEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QTreeView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QTreeView_override_virtual_CloseEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_CloseEditor
func miqt_exec_callback_QTreeView_CloseEditor(self *C.QTreeView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QTreeView{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QTreeView) callVirtualBase_CommitData(editor *QWidget) {

	C.QTreeView_virtualbase_CommitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTreeView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QTreeView_override_virtual_CommitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_CommitData
func miqt_exec_callback_QTreeView_CommitData(self *C.QTreeView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QTreeView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QTreeView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QTreeView_virtualbase_EditorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTreeView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QTreeView_override_virtual_EditorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_EditorDestroyed
func miqt_exec_callback_QTreeView_EditorDestroyed(self *C.QTreeView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QTreeView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QTreeView) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QTreeView_virtualbase_Edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QTreeView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QTreeView_override_virtual_Edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_Edit2
func miqt_exec_callback_QTreeView_Edit2(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QTreeView_virtualbase_SelectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QTreeView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QTreeView_override_virtual_SelectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SelectionCommand
func miqt_exec_callback_QTreeView_SelectionCommand(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QTreeView_virtualbase_StartDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QTreeView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QTreeView_override_virtual_StartDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_StartDrag
func miqt_exec_callback_QTreeView_StartDrag(self *C.QTreeView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QTreeView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QTreeView) callVirtualBase_ViewOptions() *QStyleOptionViewItem {

	_goptr := newQStyleOptionViewItem(C.QTreeView_virtualbase_ViewOptions(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnViewOptions(slot func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem) {
	ok := C.QTreeView_override_virtual_ViewOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ViewOptions
func miqt_exec_callback_QTreeView_ViewOptions(self *C.QTreeView, cb C.intptr_t) *C.QStyleOptionViewItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_ViewOptions)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTreeView_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTreeView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTreeView_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_FocusNextPrevChild
func miqt_exec_callback_QTreeView_FocusNextPrevChild(self *C.QTreeView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTreeView_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTreeView) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTreeView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_Event
func miqt_exec_callback_QTreeView_Event(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QTreeView_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QTreeView_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DragEnterEvent
func miqt_exec_callback_QTreeView_DragEnterEvent(self *C.QTreeView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTreeView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QTreeView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DragLeaveEvent
func miqt_exec_callback_QTreeView_DragLeaveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTreeView_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QTreeView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DropEvent
func miqt_exec_callback_QTreeView_DropEvent(self *C.QTreeView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTreeView_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTreeView_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_FocusInEvent
func miqt_exec_callback_QTreeView_FocusInEvent(self *C.QTreeView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTreeView_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTreeView_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_FocusOutEvent
func miqt_exec_callback_QTreeView_FocusOutEvent(self *C.QTreeView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QTreeView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QTreeView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ResizeEvent
func miqt_exec_callback_QTreeView_ResizeEvent(self *C.QTreeView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QTreeView_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QTreeView_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_InputMethodEvent
func miqt_exec_callback_QTreeView_InputMethodEvent(self *C.QTreeView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QTreeView_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QTreeView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QTreeView_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_EventFilter
func miqt_exec_callback_QTreeView_EventFilter(self *C.QTreeView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTreeView_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeView_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_MinimumSizeHint
func miqt_exec_callback_QTreeView_MinimumSizeHint(self *C.QTreeView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTreeView_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeView_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SizeHint
func miqt_exec_callback_QTreeView_SizeHint(self *C.QTreeView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTreeView_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTreeView) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QTreeView_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SetupViewport
func miqt_exec_callback_QTreeView_SetupViewport(self *C.QTreeView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTreeView) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QTreeView_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeView) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QTreeView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_WheelEvent
func miqt_exec_callback_QTreeView_WheelEvent(self *C.QTreeView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QTreeView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QTreeView_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeView) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QTreeView_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ContextMenuEvent
func miqt_exec_callback_QTreeView_ContextMenuEvent(self *C.QTreeView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QTreeView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QTreeView_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeView) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QTreeView_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ChangeEvent
func miqt_exec_callback_QTreeView_ChangeEvent(self *C.QTreeView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QTreeView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_DevType() int {

	return (int)(C.QTreeView_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnDevType(slot func(super func() int) int) {
	ok := C.QTreeView_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DevType
func miqt_exec_callback_QTreeView_DevType(self *C.QTreeView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_SetVisible(visible bool) {

	C.QTreeView_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTreeView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTreeView_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SetVisible
func miqt_exec_callback_QTreeView_SetVisible(self *C.QTreeView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTreeView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTreeView_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTreeView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTreeView_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_HeightForWidth
func miqt_exec_callback_QTreeView_HeightForWidth(self *C.QTreeView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTreeView_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTreeView_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_HasHeightForWidth
func miqt_exec_callback_QTreeView_HasHeightForWidth(self *C.QTreeView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTreeView_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTreeView_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_PaintEngine
func miqt_exec_callback_QTreeView_PaintEngine(self *C.QTreeView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTreeView_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTreeView_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_KeyReleaseEvent
func miqt_exec_callback_QTreeView_KeyReleaseEvent(self *C.QTreeView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_EnterEvent(event *QEvent) {

	C.QTreeView_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeView_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_EnterEvent
func miqt_exec_callback_QTreeView_EnterEvent(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTreeView_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeView_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_LeaveEvent
func miqt_exec_callback_QTreeView_LeaveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTreeView_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTreeView_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_MoveEvent
func miqt_exec_callback_QTreeView_MoveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTreeView_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTreeView_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_CloseEvent
func miqt_exec_callback_QTreeView_CloseEvent(self *C.QTreeView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTreeView_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTreeView_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_TabletEvent
func miqt_exec_callback_QTreeView_TabletEvent(self *C.QTreeView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTreeView_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTreeView_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ActionEvent
func miqt_exec_callback_QTreeView_ActionEvent(self *C.QTreeView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QTreeView_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QTreeView_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ShowEvent
func miqt_exec_callback_QTreeView_ShowEvent(self *C.QTreeView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTreeView_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTreeView_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_HideEvent
func miqt_exec_callback_QTreeView_HideEvent(self *C.QTreeView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTreeView_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QTreeView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QTreeView_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_NativeEvent
func miqt_exec_callback_QTreeView_NativeEvent(self *C.QTreeView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTreeView_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTreeView) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTreeView_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_Metric
func miqt_exec_callback_QTreeView_Metric(self *C.QTreeView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_InitPainter(painter *QPainter) {

	C.QTreeView_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTreeView) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTreeView_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_InitPainter
func miqt_exec_callback_QTreeView_InitPainter(self *C.QTreeView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTreeView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTreeView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTreeView_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTreeView) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTreeView_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_Redirected
func miqt_exec_callback_QTreeView_Redirected(self *C.QTreeView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QTreeView_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTreeView_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_SharedPainter
func miqt_exec_callback_QTreeView_SharedPainter(self *C.QTreeView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTreeView_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTreeView_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ChildEvent
func miqt_exec_callback_QTreeView_ChildEvent(self *C.QTreeView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTreeView_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeView_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_CustomEvent
func miqt_exec_callback_QTreeView_CustomEvent(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTreeView_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTreeView) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTreeView_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_ConnectNotify
func miqt_exec_callback_QTreeView_ConnectNotify(self *C.QTreeView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTreeView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTreeView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTreeView_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTreeView) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTreeView_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_DisconnectNotify
func miqt_exec_callback_QTreeView_DisconnectNotify(self *C.QTreeView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTreeView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTreeView) Delete() {
	C.QTreeView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTreeView) GoGC() {
	runtime.SetFinalizer(this, func(this *QTreeView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
