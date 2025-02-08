package qt6

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
	return newQMetaObject(C.QTreeView_metaObject(this.h))
}

func (this *QTreeView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTreeView_metacast(this.h, param1_Cstring))
}

func QTreeView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeView) SetModel(model *QAbstractItemModel) {
	C.QTreeView_setModel(this.h, model.cPointer())
}

func (this *QTreeView) SetRootIndex(index *QModelIndex) {
	C.QTreeView_setRootIndex(this.h, index.cPointer())
}

func (this *QTreeView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QTreeView_setSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QTreeView) Header() *QHeaderView {
	return newQHeaderView(C.QTreeView_header(this.h))
}

func (this *QTreeView) SetHeader(header *QHeaderView) {
	C.QTreeView_setHeader(this.h, header.cPointer())
}

func (this *QTreeView) AutoExpandDelay() int {
	return (int)(C.QTreeView_autoExpandDelay(this.h))
}

func (this *QTreeView) SetAutoExpandDelay(delay int) {
	C.QTreeView_setAutoExpandDelay(this.h, (C.int)(delay))
}

func (this *QTreeView) Indentation() int {
	return (int)(C.QTreeView_indentation(this.h))
}

func (this *QTreeView) SetIndentation(i int) {
	C.QTreeView_setIndentation(this.h, (C.int)(i))
}

func (this *QTreeView) ResetIndentation() {
	C.QTreeView_resetIndentation(this.h)
}

func (this *QTreeView) RootIsDecorated() bool {
	return (bool)(C.QTreeView_rootIsDecorated(this.h))
}

func (this *QTreeView) SetRootIsDecorated(show bool) {
	C.QTreeView_setRootIsDecorated(this.h, (C.bool)(show))
}

func (this *QTreeView) UniformRowHeights() bool {
	return (bool)(C.QTreeView_uniformRowHeights(this.h))
}

func (this *QTreeView) SetUniformRowHeights(uniform bool) {
	C.QTreeView_setUniformRowHeights(this.h, (C.bool)(uniform))
}

func (this *QTreeView) ItemsExpandable() bool {
	return (bool)(C.QTreeView_itemsExpandable(this.h))
}

func (this *QTreeView) SetItemsExpandable(enable bool) {
	C.QTreeView_setItemsExpandable(this.h, (C.bool)(enable))
}

func (this *QTreeView) ExpandsOnDoubleClick() bool {
	return (bool)(C.QTreeView_expandsOnDoubleClick(this.h))
}

func (this *QTreeView) SetExpandsOnDoubleClick(enable bool) {
	C.QTreeView_setExpandsOnDoubleClick(this.h, (C.bool)(enable))
}

func (this *QTreeView) ColumnViewportPosition(column int) int {
	return (int)(C.QTreeView_columnViewportPosition(this.h, (C.int)(column)))
}

func (this *QTreeView) ColumnWidth(column int) int {
	return (int)(C.QTreeView_columnWidth(this.h, (C.int)(column)))
}

func (this *QTreeView) SetColumnWidth(column int, width int) {
	C.QTreeView_setColumnWidth(this.h, (C.int)(column), (C.int)(width))
}

func (this *QTreeView) ColumnAt(x int) int {
	return (int)(C.QTreeView_columnAt(this.h, (C.int)(x)))
}

func (this *QTreeView) IsColumnHidden(column int) bool {
	return (bool)(C.QTreeView_isColumnHidden(this.h, (C.int)(column)))
}

func (this *QTreeView) SetColumnHidden(column int, hide bool) {
	C.QTreeView_setColumnHidden(this.h, (C.int)(column), (C.bool)(hide))
}

func (this *QTreeView) IsHeaderHidden() bool {
	return (bool)(C.QTreeView_isHeaderHidden(this.h))
}

func (this *QTreeView) SetHeaderHidden(hide bool) {
	C.QTreeView_setHeaderHidden(this.h, (C.bool)(hide))
}

func (this *QTreeView) IsRowHidden(row int, parent *QModelIndex) bool {
	return (bool)(C.QTreeView_isRowHidden(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QTreeView) SetRowHidden(row int, parent *QModelIndex, hide bool) {
	C.QTreeView_setRowHidden(this.h, (C.int)(row), parent.cPointer(), (C.bool)(hide))
}

func (this *QTreeView) IsFirstColumnSpanned(row int, parent *QModelIndex) bool {
	return (bool)(C.QTreeView_isFirstColumnSpanned(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QTreeView) SetFirstColumnSpanned(row int, parent *QModelIndex, span bool) {
	C.QTreeView_setFirstColumnSpanned(this.h, (C.int)(row), parent.cPointer(), (C.bool)(span))
}

func (this *QTreeView) IsExpanded(index *QModelIndex) bool {
	return (bool)(C.QTreeView_isExpanded(this.h, index.cPointer()))
}

func (this *QTreeView) SetExpanded(index *QModelIndex, expand bool) {
	C.QTreeView_setExpanded(this.h, index.cPointer(), (C.bool)(expand))
}

func (this *QTreeView) SetSortingEnabled(enable bool) {
	C.QTreeView_setSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QTreeView) IsSortingEnabled() bool {
	return (bool)(C.QTreeView_isSortingEnabled(this.h))
}

func (this *QTreeView) SetAnimated(enable bool) {
	C.QTreeView_setAnimated(this.h, (C.bool)(enable))
}

func (this *QTreeView) IsAnimated() bool {
	return (bool)(C.QTreeView_isAnimated(this.h))
}

func (this *QTreeView) SetAllColumnsShowFocus(enable bool) {
	C.QTreeView_setAllColumnsShowFocus(this.h, (C.bool)(enable))
}

func (this *QTreeView) AllColumnsShowFocus() bool {
	return (bool)(C.QTreeView_allColumnsShowFocus(this.h))
}

func (this *QTreeView) SetWordWrap(on bool) {
	C.QTreeView_setWordWrap(this.h, (C.bool)(on))
}

func (this *QTreeView) WordWrap() bool {
	return (bool)(C.QTreeView_wordWrap(this.h))
}

func (this *QTreeView) SetTreePosition(logicalIndex int) {
	C.QTreeView_setTreePosition(this.h, (C.int)(logicalIndex))
}

func (this *QTreeView) TreePosition() int {
	return (int)(C.QTreeView_treePosition(this.h))
}

func (this *QTreeView) KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))
	C.QTreeView_keyboardSearch(this.h, search_ms)
}

func (this *QTreeView) VisualRect(index *QModelIndex) *QRect {
	_goptr := newQRect(C.QTreeView_visualRect(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QTreeView_scrollTo(this.h, index.cPointer(), (C.int)(hint))
}

func (this *QTreeView) IndexAt(p *QPoint) *QModelIndex {
	_goptr := newQModelIndex(C.QTreeView_indexAt(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) IndexAbove(index *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QTreeView_indexAbove(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) IndexBelow(index *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QTreeView_indexBelow(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) DoItemsLayout() {
	C.QTreeView_doItemsLayout(this.h)
}

func (this *QTreeView) Reset() {
	C.QTreeView_reset(this.h)
}

func (this *QTreeView) DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}
	C.QTreeView_dataChanged(this.h, topLeft.cPointer(), bottomRight.cPointer(), roles_ma)
}

func (this *QTreeView) SelectAll() {
	C.QTreeView_selectAll(this.h)
}

func (this *QTreeView) Expanded(index *QModelIndex) {
	C.QTreeView_expanded(this.h, index.cPointer())
}
func (this *QTreeView) OnExpanded(slot func(index *QModelIndex)) {
	C.QTreeView_connect_expanded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeView_expanded
func miqt_exec_callback_QTreeView_expanded(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QTreeView) Collapsed(index *QModelIndex) {
	C.QTreeView_collapsed(this.h, index.cPointer())
}
func (this *QTreeView) OnCollapsed(slot func(index *QModelIndex)) {
	C.QTreeView_connect_collapsed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeView_collapsed
func miqt_exec_callback_QTreeView_collapsed(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QTreeView) HideColumn(column int) {
	C.QTreeView_hideColumn(this.h, (C.int)(column))
}

func (this *QTreeView) ShowColumn(column int) {
	C.QTreeView_showColumn(this.h, (C.int)(column))
}

func (this *QTreeView) Expand(index *QModelIndex) {
	C.QTreeView_expand(this.h, index.cPointer())
}

func (this *QTreeView) Collapse(index *QModelIndex) {
	C.QTreeView_collapse(this.h, index.cPointer())
}

func (this *QTreeView) ResizeColumnToContents(column int) {
	C.QTreeView_resizeColumnToContents(this.h, (C.int)(column))
}

func (this *QTreeView) SortByColumn(column int, order SortOrder) {
	C.QTreeView_sortByColumn(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTreeView) ExpandAll() {
	C.QTreeView_expandAll(this.h)
}

func (this *QTreeView) ExpandRecursively(index *QModelIndex) {
	C.QTreeView_expandRecursively(this.h, index.cPointer())
}

func (this *QTreeView) CollapseAll() {
	C.QTreeView_collapseAll(this.h)
}

func (this *QTreeView) ExpandToDepth(depth int) {
	C.QTreeView_expandToDepth(this.h, (C.int)(depth))
}

func QTreeView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeView) ExpandRecursively2(index *QModelIndex, depth int) {
	C.QTreeView_expandRecursively2(this.h, index.cPointer(), (C.int)(depth))
}

// ColumnResized can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) ColumnResized(column int, oldSize int, newSize int) {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_columnResized(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(column), (C.int)(oldSize), (C.int)(newSize))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColumnCountChanged can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) ColumnCountChanged(oldCount int, newCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_columnCountChanged(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(oldCount), (C.int)(newCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColumnMoved can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) ColumnMoved() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_columnMoved(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Reexpand can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) Reexpand() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_reexpand(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RowsRemoved can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) RowsRemoved(parent *QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_rowsRemoved(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DrawTree can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) DrawTree(painter *QPainter, region *QRegion) {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_drawTree(&_dynamic_cast_ok, unsafe.Pointer(this.h), painter.cPointer(), region.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IndexRowSizeHint can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) IndexRowSizeHint(index *QModelIndex) int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTreeView_protectedbase_indexRowSizeHint(&_dynamic_cast_ok, unsafe.Pointer(this.h), index.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// RowHeight can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) RowHeight(index *QModelIndex) int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTreeView_protectedbase_rowHeight(&_dynamic_cast_ok, unsafe.Pointer(this.h), index.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// State can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) State() QAbstractItemView__State {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__State)(C.QTreeView_protectedbase_state(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetState can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) SetState(state QAbstractItemView__State) {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_setState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScheduleDelayedItemsLayout can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) ScheduleDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_scheduleDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ExecuteDelayedItemsLayout can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) ExecuteDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_executeDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetDirtyRegion can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) SetDirtyRegion(region *QRegion) {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_setDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), region.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScrollDirtyRegion can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) ScrollDirtyRegion(dx int, dy int) {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_scrollDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DirtyRegionOffset can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) DirtyRegionOffset() QPoint {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPoint(C.QTreeView_protectedbase_dirtyRegionOffset(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// StartAutoScroll can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) StartAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_startAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// StopAutoScroll can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) StopAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_stopAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DoAutoScroll can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) DoAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_doAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DropIndicatorPosition can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) DropIndicatorPosition() QAbstractItemView__DropIndicatorPosition {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__DropIndicatorPosition)(C.QTreeView_protectedbase_dropIndicatorPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetViewportMargins can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QTreeView_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QTreeView_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTreeView_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTreeView_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTreeView_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTreeView_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTreeView_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTreeView that was directly constructed.
func (this *QTreeView) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTreeView_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTreeView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QTreeView_virtualbase_setModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QTreeView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QTreeView_override_virtual_setModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_setModel
func miqt_exec_callback_QTreeView_setModel(self *C.QTreeView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QTreeView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QTreeView_virtualbase_setRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QTreeView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QTreeView_override_virtual_setRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_setRootIndex
func miqt_exec_callback_QTreeView_setRootIndex(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QTreeView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QTreeView_virtualbase_setSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QTreeView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QTreeView_override_virtual_setSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_setSelectionModel
func miqt_exec_callback_QTreeView_setSelectionModel(self *C.QTreeView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
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

	C.QTreeView_virtualbase_keyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QTreeView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QTreeView_override_virtual_keyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_keyboardSearch
func miqt_exec_callback_QTreeView_keyboardSearch(self *C.QTreeView, cb C.intptr_t, search C.struct_miqt_string) {
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

	_goptr := newQRect(C.QTreeView_virtualbase_visualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QTreeView_override_virtual_visualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_visualRect
func miqt_exec_callback_QTreeView_visualRect(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
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

	C.QTreeView_virtualbase_scrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QTreeView) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QTreeView_override_virtual_scrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_scrollTo
func miqt_exec_callback_QTreeView_scrollTo(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
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

	_goptr := newQModelIndex(C.QTreeView_virtualbase_indexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QTreeView_override_virtual_indexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_indexAt
func miqt_exec_callback_QTreeView_indexAt(self *C.QTreeView, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
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

	C.QTreeView_virtualbase_doItemsLayout(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnDoItemsLayout(slot func(super func())) {
	ok := C.QTreeView_override_virtual_doItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_doItemsLayout
func miqt_exec_callback_QTreeView_doItemsLayout(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QTreeView) callVirtualBase_Reset() {

	C.QTreeView_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnReset(slot func(super func())) {
	ok := C.QTreeView_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_reset
func miqt_exec_callback_QTreeView_reset(self *C.QTreeView, cb C.intptr_t) {
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

	C.QTreeView_virtualbase_dataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QTreeView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QTreeView_override_virtual_dataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_dataChanged
func miqt_exec_callback_QTreeView_dataChanged(self *C.QTreeView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	C.QTreeView_virtualbase_selectAll(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnSelectAll(slot func(super func())) {
	ok := C.QTreeView_override_virtual_selectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_selectAll
func miqt_exec_callback_QTreeView_selectAll(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_SelectAll)

}

func (this *QTreeView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QTreeView_virtualbase_verticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTreeView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTreeView_override_virtual_verticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_verticalScrollbarValueChanged
func miqt_exec_callback_QTreeView_verticalScrollbarValueChanged(self *C.QTreeView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTreeView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QTreeView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTreeView_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTreeView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QTreeView_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_scrollContentsBy
func miqt_exec_callback_QTreeView_scrollContentsBy(self *C.QTreeView, cb C.intptr_t, dx C.int, dy C.int) {
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

	C.QTreeView_virtualbase_rowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTreeView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTreeView_override_virtual_rowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_rowsInserted
func miqt_exec_callback_QTreeView_rowsInserted(self *C.QTreeView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
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

	C.QTreeView_virtualbase_rowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTreeView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTreeView_override_virtual_rowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_rowsAboutToBeRemoved
func miqt_exec_callback_QTreeView_rowsAboutToBeRemoved(self *C.QTreeView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
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

	_goptr := newQModelIndex(C.QTreeView_virtualbase_moveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QTreeView_override_virtual_moveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_moveCursor
func miqt_exec_callback_QTreeView_moveCursor(self *C.QTreeView, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
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

	return (int)(C.QTreeView_virtualbase_horizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QTreeView_override_virtual_horizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_horizontalOffset
func miqt_exec_callback_QTreeView_horizontalOffset(self *C.QTreeView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_VerticalOffset() int {

	return (int)(C.QTreeView_virtualbase_verticalOffset(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QTreeView_override_virtual_verticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_verticalOffset
func miqt_exec_callback_QTreeView_verticalOffset(self *C.QTreeView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QTreeView_virtualbase_setSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QTreeView) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QTreeView_override_virtual_setSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_setSelection
func miqt_exec_callback_QTreeView_setSelection(self *C.QTreeView, cb C.intptr_t, rect *C.QRect, command C.int) {
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

	_goptr := newQRegion(C.QTreeView_virtualbase_visualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QTreeView_override_virtual_visualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_visualRegionForSelection
func miqt_exec_callback_QTreeView_visualRegionForSelection(self *C.QTreeView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
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

	var _ma C.struct_miqt_array = C.QTreeView_virtualbase_selectedIndexes(unsafe.Pointer(this.h))
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
	ok := C.QTreeView_override_virtual_selectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_selectedIndexes
func miqt_exec_callback_QTreeView_selectedIndexes(self *C.QTreeView, cb C.intptr_t) C.struct_miqt_array {
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

func (this *QTreeView) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QTreeView_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_changeEvent
func miqt_exec_callback_QTreeView_changeEvent(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTreeView_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTreeView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_timerEvent
func miqt_exec_callback_QTreeView_timerEvent(self *C.QTreeView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QTreeView_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QTreeView_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_paintEvent
func miqt_exec_callback_QTreeView_paintEvent(self *C.QTreeView, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_DrawRow(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex) {

	C.QTreeView_virtualbase_drawRow(unsafe.Pointer(this.h), painter.cPointer(), options.cPointer(), index.cPointer())

}
func (this *QTreeView) OnDrawRow(slot func(super func(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex), painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex)) {
	ok := C.QTreeView_override_virtual_drawRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_drawRow
func miqt_exec_callback_QTreeView_drawRow(self *C.QTreeView, cb C.intptr_t, painter *C.QPainter, options *C.QStyleOptionViewItem, index *C.QModelIndex) {
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

	C.QTreeView_virtualbase_drawBranches(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), index.cPointer())

}
func (this *QTreeView) OnDrawBranches(slot func(super func(painter *QPainter, rect *QRect, index *QModelIndex), painter *QPainter, rect *QRect, index *QModelIndex)) {
	ok := C.QTreeView_override_virtual_drawBranches(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_drawBranches
func miqt_exec_callback_QTreeView_drawBranches(self *C.QTreeView, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, index *C.QModelIndex) {
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

	C.QTreeView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_mousePressEvent
func miqt_exec_callback_QTreeView_mousePressEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QTreeView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_mouseReleaseEvent
func miqt_exec_callback_QTreeView_mouseReleaseEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTreeView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_mouseDoubleClickEvent
func miqt_exec_callback_QTreeView_mouseDoubleClickEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QTreeView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_mouseMoveEvent
func miqt_exec_callback_QTreeView_mouseMoveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QTreeView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTreeView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_keyPressEvent
func miqt_exec_callback_QTreeView_keyPressEvent(self *C.QTreeView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTreeView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QTreeView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_dragMoveEvent
func miqt_exec_callback_QTreeView_dragMoveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QTreeView_virtualbase_viewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTreeView) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTreeView_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_viewportEvent
func miqt_exec_callback_QTreeView_viewportEvent(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QTreeView_virtualbase_updateGeometries(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnUpdateGeometries(slot func(super func())) {
	ok := C.QTreeView_override_virtual_updateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_updateGeometries
func miqt_exec_callback_QTreeView_updateGeometries(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QTreeView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QTreeView_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeView_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_viewportSizeHint
func miqt_exec_callback_QTreeView_viewportSizeHint(self *C.QTreeView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QTreeView_virtualbase_sizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QTreeView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QTreeView_override_virtual_sizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_sizeHintForColumn
func miqt_exec_callback_QTreeView_sizeHintForColumn(self *C.QTreeView, cb C.intptr_t, column C.int) C.int {
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

	C.QTreeView_virtualbase_horizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTreeView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTreeView_override_virtual_horizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_horizontalScrollbarAction
func miqt_exec_callback_QTreeView_horizontalScrollbarAction(self *C.QTreeView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTreeView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QTreeView) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QTreeView_virtualbase_isIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTreeView) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QTreeView_override_virtual_isIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_isIndexHidden
func miqt_exec_callback_QTreeView_isIndexHidden(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex) C.bool {
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

	C.QTreeView_virtualbase_selectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QTreeView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QTreeView_override_virtual_selectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_selectionChanged
func miqt_exec_callback_QTreeView_selectionChanged(self *C.QTreeView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
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

	C.QTreeView_virtualbase_currentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QTreeView) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QTreeView_override_virtual_currentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_currentChanged
func miqt_exec_callback_QTreeView_currentChanged(self *C.QTreeView, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
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

	return (int)(C.QTreeView_virtualbase_sizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QTreeView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QTreeView_override_virtual_sizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_sizeHintForRow
func miqt_exec_callback_QTreeView_sizeHintForRow(self *C.QTreeView, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_ItemDelegateForIndex(index *QModelIndex) *QAbstractItemDelegate {

	return newQAbstractItemDelegate(C.QTreeView_virtualbase_itemDelegateForIndex(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTreeView) OnItemDelegateForIndex(slot func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate) {
	ok := C.QTreeView_override_virtual_itemDelegateForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_itemDelegateForIndex
func miqt_exec_callback_QTreeView_itemDelegateForIndex(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex) *C.QAbstractItemDelegate {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_ItemDelegateForIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTreeView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QTreeView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_inputMethodQuery
func miqt_exec_callback_QTreeView_inputMethodQuery(self *C.QTreeView, cb C.intptr_t, query C.int) *C.QVariant {
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

	C.QTreeView_virtualbase_updateEditorData(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnUpdateEditorData(slot func(super func())) {
	ok := C.QTreeView_override_virtual_updateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_updateEditorData
func miqt_exec_callback_QTreeView_updateEditorData(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QTreeView) callVirtualBase_UpdateEditorGeometries() {

	C.QTreeView_virtualbase_updateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QTreeView) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QTreeView_override_virtual_updateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_updateEditorGeometries
func miqt_exec_callback_QTreeView_updateEditorGeometries(self *C.QTreeView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QTreeView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QTreeView_virtualbase_verticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTreeView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTreeView_override_virtual_verticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_verticalScrollbarAction
func miqt_exec_callback_QTreeView_verticalScrollbarAction(self *C.QTreeView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTreeView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QTreeView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QTreeView_virtualbase_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTreeView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTreeView_override_virtual_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_horizontalScrollbarValueChanged
func miqt_exec_callback_QTreeView_horizontalScrollbarValueChanged(self *C.QTreeView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTreeView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QTreeView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QTreeView_virtualbase_closeEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QTreeView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QTreeView_override_virtual_closeEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_closeEditor
func miqt_exec_callback_QTreeView_closeEditor(self *C.QTreeView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
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

	C.QTreeView_virtualbase_commitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTreeView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QTreeView_override_virtual_commitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_commitData
func miqt_exec_callback_QTreeView_commitData(self *C.QTreeView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QTreeView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QTreeView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QTreeView_virtualbase_editorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTreeView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QTreeView_override_virtual_editorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_editorDestroyed
func miqt_exec_callback_QTreeView_editorDestroyed(self *C.QTreeView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QTreeView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QTreeView) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QTreeView_virtualbase_edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QTreeView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QTreeView_override_virtual_edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_edit2
func miqt_exec_callback_QTreeView_edit2(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
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

	return (QItemSelectionModel__SelectionFlag)(C.QTreeView_virtualbase_selectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QTreeView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QTreeView_override_virtual_selectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_selectionCommand
func miqt_exec_callback_QTreeView_selectionCommand(self *C.QTreeView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
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

	C.QTreeView_virtualbase_startDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QTreeView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QTreeView_override_virtual_startDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_startDrag
func miqt_exec_callback_QTreeView_startDrag(self *C.QTreeView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QTreeView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QTreeView) callVirtualBase_InitViewItemOption(option *QStyleOptionViewItem) {

	C.QTreeView_virtualbase_initViewItemOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QTreeView) OnInitViewItemOption(slot func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem)) {
	ok := C.QTreeView_override_virtual_initViewItemOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_initViewItemOption
func miqt_exec_callback_QTreeView_initViewItemOption(self *C.QTreeView, cb C.intptr_t, option *C.QStyleOptionViewItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	gofunc((&QTreeView{h: self}).callVirtualBase_InitViewItemOption, slotval1)

}

func (this *QTreeView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTreeView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTreeView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTreeView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_focusNextPrevChild
func miqt_exec_callback_QTreeView_focusNextPrevChild(self *C.QTreeView, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QTreeView_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTreeView) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTreeView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_event
func miqt_exec_callback_QTreeView_event(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QTreeView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QTreeView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_dragEnterEvent
func miqt_exec_callback_QTreeView_dragEnterEvent(self *C.QTreeView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTreeView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QTreeView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_dragLeaveEvent
func miqt_exec_callback_QTreeView_dragLeaveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTreeView_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QTreeView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_dropEvent
func miqt_exec_callback_QTreeView_dropEvent(self *C.QTreeView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTreeView_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTreeView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_focusInEvent
func miqt_exec_callback_QTreeView_focusInEvent(self *C.QTreeView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTreeView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTreeView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_focusOutEvent
func miqt_exec_callback_QTreeView_focusOutEvent(self *C.QTreeView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QTreeView_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QTreeView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_resizeEvent
func miqt_exec_callback_QTreeView_resizeEvent(self *C.QTreeView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QTreeView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QTreeView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_inputMethodEvent
func miqt_exec_callback_QTreeView_inputMethodEvent(self *C.QTreeView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QTreeView_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QTreeView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QTreeView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_eventFilter
func miqt_exec_callback_QTreeView_eventFilter(self *C.QTreeView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
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

	_goptr := newQSize(C.QTreeView_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeView_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_minimumSizeHint
func miqt_exec_callback_QTreeView_minimumSizeHint(self *C.QTreeView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTreeView_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_sizeHint
func miqt_exec_callback_QTreeView_sizeHint(self *C.QTreeView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTreeView_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTreeView) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QTreeView_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_setupViewport
func miqt_exec_callback_QTreeView_setupViewport(self *C.QTreeView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTreeView) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QTreeView_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeView) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QTreeView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_wheelEvent
func miqt_exec_callback_QTreeView_wheelEvent(self *C.QTreeView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QTreeView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QTreeView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeView) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QTreeView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_contextMenuEvent
func miqt_exec_callback_QTreeView_contextMenuEvent(self *C.QTreeView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QTreeView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QTreeView_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QTreeView) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QTreeView_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_initStyleOption
func miqt_exec_callback_QTreeView_initStyleOption(self *C.QTreeView, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QTreeView{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QTreeView) callVirtualBase_DevType() int {

	return (int)(C.QTreeView_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnDevType(slot func(super func() int) int) {
	ok := C.QTreeView_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_devType
func miqt_exec_callback_QTreeView_devType(self *C.QTreeView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_SetVisible(visible bool) {

	C.QTreeView_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTreeView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTreeView_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_setVisible
func miqt_exec_callback_QTreeView_setVisible(self *C.QTreeView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTreeView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTreeView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTreeView_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTreeView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTreeView_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_heightForWidth
func miqt_exec_callback_QTreeView_heightForWidth(self *C.QTreeView, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QTreeView_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTreeView_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_hasHeightForWidth
func miqt_exec_callback_QTreeView_hasHeightForWidth(self *C.QTreeView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTreeView_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTreeView_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_paintEngine
func miqt_exec_callback_QTreeView_paintEngine(self *C.QTreeView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTreeView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTreeView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_keyReleaseEvent
func miqt_exec_callback_QTreeView_keyReleaseEvent(self *C.QTreeView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QTreeView_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QTreeView_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_enterEvent
func miqt_exec_callback_QTreeView_enterEvent(self *C.QTreeView, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTreeView_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeView_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_leaveEvent
func miqt_exec_callback_QTreeView_leaveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTreeView_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTreeView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_moveEvent
func miqt_exec_callback_QTreeView_moveEvent(self *C.QTreeView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTreeView_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTreeView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_closeEvent
func miqt_exec_callback_QTreeView_closeEvent(self *C.QTreeView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTreeView_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTreeView_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_tabletEvent
func miqt_exec_callback_QTreeView_tabletEvent(self *C.QTreeView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTreeView_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTreeView_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_actionEvent
func miqt_exec_callback_QTreeView_actionEvent(self *C.QTreeView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QTreeView_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QTreeView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_showEvent
func miqt_exec_callback_QTreeView_showEvent(self *C.QTreeView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTreeView_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTreeView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_hideEvent
func miqt_exec_callback_QTreeView_hideEvent(self *C.QTreeView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTreeView_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QTreeView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QTreeView_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_nativeEvent
func miqt_exec_callback_QTreeView_nativeEvent(self *C.QTreeView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTreeView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTreeView_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTreeView) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTreeView_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_metric
func miqt_exec_callback_QTreeView_metric(self *C.QTreeView, cb C.intptr_t, param1 C.int) C.int {
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

	C.QTreeView_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTreeView) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTreeView_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_initPainter
func miqt_exec_callback_QTreeView_initPainter(self *C.QTreeView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTreeView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTreeView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTreeView_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTreeView) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTreeView_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_redirected
func miqt_exec_callback_QTreeView_redirected(self *C.QTreeView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QTreeView_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTreeView) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTreeView_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_sharedPainter
func miqt_exec_callback_QTreeView_sharedPainter(self *C.QTreeView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTreeView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTreeView_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTreeView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_childEvent
func miqt_exec_callback_QTreeView_childEvent(self *C.QTreeView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTreeView_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeView) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_customEvent
func miqt_exec_callback_QTreeView_customEvent(self *C.QTreeView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTreeView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTreeView_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTreeView) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTreeView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_connectNotify
func miqt_exec_callback_QTreeView_connectNotify(self *C.QTreeView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTreeView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTreeView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTreeView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTreeView) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTreeView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeView_disconnectNotify
func miqt_exec_callback_QTreeView_disconnectNotify(self *C.QTreeView, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QTreeView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTreeView) GoGC() {
	runtime.SetFinalizer(this, func(this *QTreeView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
