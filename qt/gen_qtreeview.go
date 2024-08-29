package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQTreeView(h *C.QTreeView) *QTreeView {
	return &QTreeView{h: h, QAbstractItemView: newQAbstractItemView_U(unsafe.Pointer(h))}
}

func newQTreeView_U(h unsafe.Pointer) *QTreeView {
	return newQTreeView((*C.QTreeView)(h))
}

// NewQTreeView constructs a new QTreeView object.
func NewQTreeView() *QTreeView {
	ret := C.QTreeView_new()
	return newQTreeView(ret)
}

// NewQTreeView2 constructs a new QTreeView object.
func NewQTreeView2(parent *QWidget) *QTreeView {
	ret := C.QTreeView_new2(parent.cPointer())
	return newQTreeView(ret)
}

func (this *QTreeView) MetaObject() *QMetaObject {
	ret := C.QTreeView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTreeView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeView_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTreeView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeView_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
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
	ret := C.QTreeView_Header(this.h)
	return newQHeaderView_U(unsafe.Pointer(ret))
}

func (this *QTreeView) SetHeader(header *QHeaderView) {
	C.QTreeView_SetHeader(this.h, header.cPointer())
}

func (this *QTreeView) AutoExpandDelay() int {
	ret := C.QTreeView_AutoExpandDelay(this.h)
	return (int)(ret)
}

func (this *QTreeView) SetAutoExpandDelay(delay int) {
	C.QTreeView_SetAutoExpandDelay(this.h, (C.int)(delay))
}

func (this *QTreeView) Indentation() int {
	ret := C.QTreeView_Indentation(this.h)
	return (int)(ret)
}

func (this *QTreeView) SetIndentation(i int) {
	C.QTreeView_SetIndentation(this.h, (C.int)(i))
}

func (this *QTreeView) ResetIndentation() {
	C.QTreeView_ResetIndentation(this.h)
}

func (this *QTreeView) RootIsDecorated() bool {
	ret := C.QTreeView_RootIsDecorated(this.h)
	return (bool)(ret)
}

func (this *QTreeView) SetRootIsDecorated(show bool) {
	C.QTreeView_SetRootIsDecorated(this.h, (C.bool)(show))
}

func (this *QTreeView) UniformRowHeights() bool {
	ret := C.QTreeView_UniformRowHeights(this.h)
	return (bool)(ret)
}

func (this *QTreeView) SetUniformRowHeights(uniform bool) {
	C.QTreeView_SetUniformRowHeights(this.h, (C.bool)(uniform))
}

func (this *QTreeView) ItemsExpandable() bool {
	ret := C.QTreeView_ItemsExpandable(this.h)
	return (bool)(ret)
}

func (this *QTreeView) SetItemsExpandable(enable bool) {
	C.QTreeView_SetItemsExpandable(this.h, (C.bool)(enable))
}

func (this *QTreeView) ExpandsOnDoubleClick() bool {
	ret := C.QTreeView_ExpandsOnDoubleClick(this.h)
	return (bool)(ret)
}

func (this *QTreeView) SetExpandsOnDoubleClick(enable bool) {
	C.QTreeView_SetExpandsOnDoubleClick(this.h, (C.bool)(enable))
}

func (this *QTreeView) ColumnViewportPosition(column int) int {
	ret := C.QTreeView_ColumnViewportPosition(this.h, (C.int)(column))
	return (int)(ret)
}

func (this *QTreeView) ColumnWidth(column int) int {
	ret := C.QTreeView_ColumnWidth(this.h, (C.int)(column))
	return (int)(ret)
}

func (this *QTreeView) SetColumnWidth(column int, width int) {
	C.QTreeView_SetColumnWidth(this.h, (C.int)(column), (C.int)(width))
}

func (this *QTreeView) ColumnAt(x int) int {
	ret := C.QTreeView_ColumnAt(this.h, (C.int)(x))
	return (int)(ret)
}

func (this *QTreeView) IsColumnHidden(column int) bool {
	ret := C.QTreeView_IsColumnHidden(this.h, (C.int)(column))
	return (bool)(ret)
}

func (this *QTreeView) SetColumnHidden(column int, hide bool) {
	C.QTreeView_SetColumnHidden(this.h, (C.int)(column), (C.bool)(hide))
}

func (this *QTreeView) IsHeaderHidden() bool {
	ret := C.QTreeView_IsHeaderHidden(this.h)
	return (bool)(ret)
}

func (this *QTreeView) SetHeaderHidden(hide bool) {
	C.QTreeView_SetHeaderHidden(this.h, (C.bool)(hide))
}

func (this *QTreeView) IsRowHidden(row int, parent *QModelIndex) bool {
	ret := C.QTreeView_IsRowHidden(this.h, (C.int)(row), parent.cPointer())
	return (bool)(ret)
}

func (this *QTreeView) SetRowHidden(row int, parent *QModelIndex, hide bool) {
	C.QTreeView_SetRowHidden(this.h, (C.int)(row), parent.cPointer(), (C.bool)(hide))
}

func (this *QTreeView) IsFirstColumnSpanned(row int, parent *QModelIndex) bool {
	ret := C.QTreeView_IsFirstColumnSpanned(this.h, (C.int)(row), parent.cPointer())
	return (bool)(ret)
}

func (this *QTreeView) SetFirstColumnSpanned(row int, parent *QModelIndex, span bool) {
	C.QTreeView_SetFirstColumnSpanned(this.h, (C.int)(row), parent.cPointer(), (C.bool)(span))
}

func (this *QTreeView) IsExpanded(index *QModelIndex) bool {
	ret := C.QTreeView_IsExpanded(this.h, index.cPointer())
	return (bool)(ret)
}

func (this *QTreeView) SetExpanded(index *QModelIndex, expand bool) {
	C.QTreeView_SetExpanded(this.h, index.cPointer(), (C.bool)(expand))
}

func (this *QTreeView) SetSortingEnabled(enable bool) {
	C.QTreeView_SetSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QTreeView) IsSortingEnabled() bool {
	ret := C.QTreeView_IsSortingEnabled(this.h)
	return (bool)(ret)
}

func (this *QTreeView) SetAnimated(enable bool) {
	C.QTreeView_SetAnimated(this.h, (C.bool)(enable))
}

func (this *QTreeView) IsAnimated() bool {
	ret := C.QTreeView_IsAnimated(this.h)
	return (bool)(ret)
}

func (this *QTreeView) SetAllColumnsShowFocus(enable bool) {
	C.QTreeView_SetAllColumnsShowFocus(this.h, (C.bool)(enable))
}

func (this *QTreeView) AllColumnsShowFocus() bool {
	ret := C.QTreeView_AllColumnsShowFocus(this.h)
	return (bool)(ret)
}

func (this *QTreeView) SetWordWrap(on bool) {
	C.QTreeView_SetWordWrap(this.h, (C.bool)(on))
}

func (this *QTreeView) WordWrap() bool {
	ret := C.QTreeView_WordWrap(this.h)
	return (bool)(ret)
}

func (this *QTreeView) SetTreePosition(logicalIndex int) {
	C.QTreeView_SetTreePosition(this.h, (C.int)(logicalIndex))
}

func (this *QTreeView) TreePosition() int {
	ret := C.QTreeView_TreePosition(this.h)
	return (int)(ret)
}

func (this *QTreeView) KeyboardSearch(search string) {
	search_Cstring := C.CString(search)
	defer C.free(unsafe.Pointer(search_Cstring))
	C.QTreeView_KeyboardSearch(this.h, search_Cstring, C.ulong(len(search)))
}

func (this *QTreeView) VisualRect(index *QModelIndex) *QRect {
	ret := C.QTreeView_VisualRect(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeView) ScrollTo(index *QModelIndex) {
	C.QTreeView_ScrollTo(this.h, index.cPointer())
}

func (this *QTreeView) IndexAt(p *QPoint) *QModelIndex {
	ret := C.QTreeView_IndexAt(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeView) IndexAbove(index *QModelIndex) *QModelIndex {
	ret := C.QTreeView_IndexAbove(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeView) IndexBelow(index *QModelIndex) *QModelIndex {
	ret := C.QTreeView_IndexBelow(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeView) DoItemsLayout() {
	C.QTreeView_DoItemsLayout(this.h)
}

func (this *QTreeView) Reset() {
	C.QTreeView_Reset(this.h)
}

func (this *QTreeView) DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex) {
	C.QTreeView_DataChanged(this.h, topLeft.cPointer(), bottomRight.cPointer())
}

func (this *QTreeView) SelectAll() {
	C.QTreeView_SelectAll(this.h)
}

func (this *QTreeView) Expanded(index *QModelIndex) {
	C.QTreeView_Expanded(this.h, index.cPointer())
}

func (this *QTreeView) OnExpanded(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeView_connect_Expanded(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeView) Collapsed(index *QModelIndex) {
	C.QTreeView_Collapsed(this.h, index.cPointer())
}

func (this *QTreeView) OnCollapsed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeView_connect_Collapsed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
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

func (this *QTreeView) SortByColumn2(column int, order uintptr) {
	C.QTreeView_SortByColumn2(this.h, (C.int)(column), (C.uintptr_t)(order))
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeView_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTreeView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeView_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTreeView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeView_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTreeView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeView) ScrollTo2(index *QModelIndex, hint uintptr) {
	C.QTreeView_ScrollTo2(this.h, index.cPointer(), (C.uintptr_t)(hint))
}

func (this *QTreeView) DataChanged3(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	// For the C ABI, malloc a C array of raw pointers
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.ulong(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	C.QTreeView_DataChanged3(this.h, topLeft.cPointer(), bottomRight.cPointer(), &roles_CArray[0], C.ulong(len(roles)))
}

func (this *QTreeView) ExpandRecursively2(index *QModelIndex, depth int) {
	C.QTreeView_ExpandRecursively2(this.h, index.cPointer(), (C.int)(depth))
}

func (this *QTreeView) Delete() {
	C.QTreeView_Delete(this.h)
}
