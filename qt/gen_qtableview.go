package qt

/*

#include "gen_qtableview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTableView struct {
	h *C.QTableView
	*QAbstractItemView
}

func (this *QTableView) cPointer() *C.QTableView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTableView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTableView constructs the type using only CGO pointers.
func newQTableView(h *C.QTableView) *QTableView {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	C.QTableView_virtbase(h, &outptr_QAbstractItemView)

	return &QTableView{h: h,
		QAbstractItemView: newQAbstractItemView(outptr_QAbstractItemView)}
}

// UnsafeNewQTableView constructs the type using only unsafe pointers.
func UnsafeNewQTableView(h unsafe.Pointer) *QTableView {
	return newQTableView((*C.QTableView)(h))
}

// NewQTableView constructs a new QTableView object.
func NewQTableView(parent *QWidget) *QTableView {

	return newQTableView(C.QTableView_new(parent.cPointer()))
}

// NewQTableView2 constructs a new QTableView object.
func NewQTableView2() *QTableView {

	return newQTableView(C.QTableView_new2())
}

func (this *QTableView) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTableView_metaObject(this.h))
}

func (this *QTableView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTableView_metacast(this.h, param1_Cstring))
}

func QTableView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTableView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTableView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTableView_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTableView) SetModel(model *QAbstractItemModel) {
	C.QTableView_setModel(this.h, model.cPointer())
}

func (this *QTableView) SetRootIndex(index *QModelIndex) {
	C.QTableView_setRootIndex(this.h, index.cPointer())
}

func (this *QTableView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QTableView_setSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QTableView) DoItemsLayout() {
	C.QTableView_doItemsLayout(this.h)
}

func (this *QTableView) HorizontalHeader() *QHeaderView {
	return newQHeaderView(C.QTableView_horizontalHeader(this.h))
}

func (this *QTableView) VerticalHeader() *QHeaderView {
	return newQHeaderView(C.QTableView_verticalHeader(this.h))
}

func (this *QTableView) SetHorizontalHeader(header *QHeaderView) {
	C.QTableView_setHorizontalHeader(this.h, header.cPointer())
}

func (this *QTableView) SetVerticalHeader(header *QHeaderView) {
	C.QTableView_setVerticalHeader(this.h, header.cPointer())
}

func (this *QTableView) RowViewportPosition(row int) int {
	return (int)(C.QTableView_rowViewportPosition(this.h, (C.int)(row)))
}

func (this *QTableView) RowAt(y int) int {
	return (int)(C.QTableView_rowAt(this.h, (C.int)(y)))
}

func (this *QTableView) SetRowHeight(row int, height int) {
	C.QTableView_setRowHeight(this.h, (C.int)(row), (C.int)(height))
}

func (this *QTableView) RowHeight(row int) int {
	return (int)(C.QTableView_rowHeight(this.h, (C.int)(row)))
}

func (this *QTableView) ColumnViewportPosition(column int) int {
	return (int)(C.QTableView_columnViewportPosition(this.h, (C.int)(column)))
}

func (this *QTableView) ColumnAt(x int) int {
	return (int)(C.QTableView_columnAt(this.h, (C.int)(x)))
}

func (this *QTableView) SetColumnWidth(column int, width int) {
	C.QTableView_setColumnWidth(this.h, (C.int)(column), (C.int)(width))
}

func (this *QTableView) ColumnWidth(column int) int {
	return (int)(C.QTableView_columnWidth(this.h, (C.int)(column)))
}

func (this *QTableView) IsRowHidden(row int) bool {
	return (bool)(C.QTableView_isRowHidden(this.h, (C.int)(row)))
}

func (this *QTableView) SetRowHidden(row int, hide bool) {
	C.QTableView_setRowHidden(this.h, (C.int)(row), (C.bool)(hide))
}

func (this *QTableView) IsColumnHidden(column int) bool {
	return (bool)(C.QTableView_isColumnHidden(this.h, (C.int)(column)))
}

func (this *QTableView) SetColumnHidden(column int, hide bool) {
	C.QTableView_setColumnHidden(this.h, (C.int)(column), (C.bool)(hide))
}

func (this *QTableView) SetSortingEnabled(enable bool) {
	C.QTableView_setSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QTableView) IsSortingEnabled() bool {
	return (bool)(C.QTableView_isSortingEnabled(this.h))
}

func (this *QTableView) ShowGrid() bool {
	return (bool)(C.QTableView_showGrid(this.h))
}

func (this *QTableView) GridStyle() PenStyle {
	return (PenStyle)(C.QTableView_gridStyle(this.h))
}

func (this *QTableView) SetGridStyle(style PenStyle) {
	C.QTableView_setGridStyle(this.h, (C.int)(style))
}

func (this *QTableView) SetWordWrap(on bool) {
	C.QTableView_setWordWrap(this.h, (C.bool)(on))
}

func (this *QTableView) WordWrap() bool {
	return (bool)(C.QTableView_wordWrap(this.h))
}

func (this *QTableView) SetCornerButtonEnabled(enable bool) {
	C.QTableView_setCornerButtonEnabled(this.h, (C.bool)(enable))
}

func (this *QTableView) IsCornerButtonEnabled() bool {
	return (bool)(C.QTableView_isCornerButtonEnabled(this.h))
}

func (this *QTableView) VisualRect(index *QModelIndex) *QRect {
	_goptr := newQRect(C.QTableView_visualRect(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableView) ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QTableView_scrollTo(this.h, index.cPointer(), (C.int)(hint))
}

func (this *QTableView) IndexAt(p *QPoint) *QModelIndex {
	_goptr := newQModelIndex(C.QTableView_indexAt(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableView) SetSpan(row int, column int, rowSpan int, columnSpan int) {
	C.QTableView_setSpan(this.h, (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QTableView) RowSpan(row int, column int) int {
	return (int)(C.QTableView_rowSpan(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QTableView) ColumnSpan(row int, column int) int {
	return (int)(C.QTableView_columnSpan(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QTableView) ClearSpans() {
	C.QTableView_clearSpans(this.h)
}

func (this *QTableView) SelectRow(row int) {
	C.QTableView_selectRow(this.h, (C.int)(row))
}

func (this *QTableView) SelectColumn(column int) {
	C.QTableView_selectColumn(this.h, (C.int)(column))
}

func (this *QTableView) HideRow(row int) {
	C.QTableView_hideRow(this.h, (C.int)(row))
}

func (this *QTableView) HideColumn(column int) {
	C.QTableView_hideColumn(this.h, (C.int)(column))
}

func (this *QTableView) ShowRow(row int) {
	C.QTableView_showRow(this.h, (C.int)(row))
}

func (this *QTableView) ShowColumn(column int) {
	C.QTableView_showColumn(this.h, (C.int)(column))
}

func (this *QTableView) ResizeRowToContents(row int) {
	C.QTableView_resizeRowToContents(this.h, (C.int)(row))
}

func (this *QTableView) ResizeRowsToContents() {
	C.QTableView_resizeRowsToContents(this.h)
}

func (this *QTableView) ResizeColumnToContents(column int) {
	C.QTableView_resizeColumnToContents(this.h, (C.int)(column))
}

func (this *QTableView) ResizeColumnsToContents() {
	C.QTableView_resizeColumnsToContents(this.h)
}

func (this *QTableView) SortByColumn(column int) {
	C.QTableView_sortByColumn(this.h, (C.int)(column))
}

func (this *QTableView) SortByColumn2(column int, order SortOrder) {
	C.QTableView_sortByColumn2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTableView) SetShowGrid(show bool) {
	C.QTableView_setShowGrid(this.h, (C.bool)(show))
}

func QTableView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTableView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTableView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTableView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTableView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTableView_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTableView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTableView_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// RowMoved can only be called from a QTableView that was directly constructed.
func (this *QTableView) RowMoved(row int, oldIndex int, newIndex int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_rowMoved(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(oldIndex), (C.int)(newIndex))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColumnMoved can only be called from a QTableView that was directly constructed.
func (this *QTableView) ColumnMoved(column int, oldIndex int, newIndex int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_columnMoved(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(column), (C.int)(oldIndex), (C.int)(newIndex))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RowResized can only be called from a QTableView that was directly constructed.
func (this *QTableView) RowResized(row int, oldHeight int, newHeight int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_rowResized(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(oldHeight), (C.int)(newHeight))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColumnResized can only be called from a QTableView that was directly constructed.
func (this *QTableView) ColumnResized(column int, oldWidth int, newWidth int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_columnResized(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(column), (C.int)(oldWidth), (C.int)(newWidth))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RowCountChanged can only be called from a QTableView that was directly constructed.
func (this *QTableView) RowCountChanged(oldCount int, newCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_rowCountChanged(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(oldCount), (C.int)(newCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColumnCountChanged can only be called from a QTableView that was directly constructed.
func (this *QTableView) ColumnCountChanged(oldCount int, newCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_columnCountChanged(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(oldCount), (C.int)(newCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetHorizontalStepsPerItem can only be called from a QTableView that was directly constructed.
func (this *QTableView) SetHorizontalStepsPerItem(steps int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_setHorizontalStepsPerItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(steps))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// HorizontalStepsPerItem can only be called from a QTableView that was directly constructed.
func (this *QTableView) HorizontalStepsPerItem() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTableView_protectedbase_horizontalStepsPerItem(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetVerticalStepsPerItem can only be called from a QTableView that was directly constructed.
func (this *QTableView) SetVerticalStepsPerItem(steps int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_setVerticalStepsPerItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(steps))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// VerticalStepsPerItem can only be called from a QTableView that was directly constructed.
func (this *QTableView) VerticalStepsPerItem() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTableView_protectedbase_verticalStepsPerItem(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// State can only be called from a QTableView that was directly constructed.
func (this *QTableView) State() QAbstractItemView__State {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__State)(C.QTableView_protectedbase_state(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetState can only be called from a QTableView that was directly constructed.
func (this *QTableView) SetState(state QAbstractItemView__State) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_setState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScheduleDelayedItemsLayout can only be called from a QTableView that was directly constructed.
func (this *QTableView) ScheduleDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_scheduleDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ExecuteDelayedItemsLayout can only be called from a QTableView that was directly constructed.
func (this *QTableView) ExecuteDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_executeDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetDirtyRegion can only be called from a QTableView that was directly constructed.
func (this *QTableView) SetDirtyRegion(region *QRegion) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_setDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), region.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScrollDirtyRegion can only be called from a QTableView that was directly constructed.
func (this *QTableView) ScrollDirtyRegion(dx int, dy int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_scrollDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DirtyRegionOffset can only be called from a QTableView that was directly constructed.
func (this *QTableView) DirtyRegionOffset() QPoint {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPoint(C.QTableView_protectedbase_dirtyRegionOffset(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// StartAutoScroll can only be called from a QTableView that was directly constructed.
func (this *QTableView) StartAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_startAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// StopAutoScroll can only be called from a QTableView that was directly constructed.
func (this *QTableView) StopAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_stopAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DoAutoScroll can only be called from a QTableView that was directly constructed.
func (this *QTableView) DoAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_doAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DropIndicatorPosition can only be called from a QTableView that was directly constructed.
func (this *QTableView) DropIndicatorPosition() QAbstractItemView__DropIndicatorPosition {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__DropIndicatorPosition)(C.QTableView_protectedbase_dropIndicatorPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetViewportMargins can only be called from a QTableView that was directly constructed.
func (this *QTableView) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QTableView that was directly constructed.
func (this *QTableView) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QTableView_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QTableView that was directly constructed.
func (this *QTableView) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitStyleOption can only be called from a QTableView that was directly constructed.
func (this *QTableView) InitStyleOption(option *QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QTableView that was directly constructed.
func (this *QTableView) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QTableView that was directly constructed.
func (this *QTableView) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QTableView that was directly constructed.
func (this *QTableView) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QTableView_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QTableView that was directly constructed.
func (this *QTableView) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTableView_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QTableView that was directly constructed.
func (this *QTableView) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTableView_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QTableView that was directly constructed.
func (this *QTableView) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTableView_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTableView that was directly constructed.
func (this *QTableView) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTableView_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTableView that was directly constructed.
func (this *QTableView) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTableView_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTableView that was directly constructed.
func (this *QTableView) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTableView_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTableView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QTableView_virtualbase_setModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QTableView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QTableView_override_virtual_setModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_setModel
func miqt_exec_callback_QTableView_setModel(self *C.QTableView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QTableView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QTableView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QTableView_virtualbase_setRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QTableView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QTableView_override_virtual_setRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_setRootIndex
func miqt_exec_callback_QTableView_setRootIndex(self *C.QTableView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QTableView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QTableView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QTableView_virtualbase_setSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QTableView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QTableView_override_virtual_setSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_setSelectionModel
func miqt_exec_callback_QTableView_setSelectionModel(self *C.QTableView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QTableView{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QTableView) callVirtualBase_DoItemsLayout() {

	C.QTableView_virtualbase_doItemsLayout(unsafe.Pointer(this.h))

}
func (this *QTableView) OnDoItemsLayout(slot func(super func())) {
	ok := C.QTableView_override_virtual_doItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_doItemsLayout
func miqt_exec_callback_QTableView_doItemsLayout(self *C.QTableView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QTableView) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QTableView_virtualbase_visualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableView) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QTableView_override_virtual_visualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_visualRect
func miqt_exec_callback_QTableView_visualRect(self *C.QTableView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QTableView_virtualbase_scrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QTableView) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QTableView_override_virtual_scrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_scrollTo
func miqt_exec_callback_QTableView_scrollTo(self *C.QTableView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QTableView{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QTableView) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_goptr := newQModelIndex(C.QTableView_virtualbase_indexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableView) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QTableView_override_virtual_indexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_indexAt
func miqt_exec_callback_QTableView_indexAt(self *C.QTableView, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(p)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTableView_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTableView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QTableView_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_scrollContentsBy
func miqt_exec_callback_QTableView_scrollContentsBy(self *C.QTableView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QTableView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QTableView) callVirtualBase_ViewOptions() *QStyleOptionViewItem {

	_goptr := newQStyleOptionViewItem(C.QTableView_virtualbase_viewOptions(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableView) OnViewOptions(slot func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem) {
	ok := C.QTableView_override_virtual_viewOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_viewOptions
func miqt_exec_callback_QTableView_viewOptions(self *C.QTableView, cb C.intptr_t) *C.QStyleOptionViewItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_ViewOptions)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QTableView_virtualbase_paintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTableView) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QTableView_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_paintEvent
func miqt_exec_callback_QTableView_paintEvent(self *C.QTableView, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QTableView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTableView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTableView_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTableView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_timerEvent
func miqt_exec_callback_QTableView_timerEvent(self *C.QTableView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTableView) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QTableView_virtualbase_horizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QTableView) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QTableView_override_virtual_horizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_horizontalOffset
func miqt_exec_callback_QTableView_horizontalOffset(self *C.QTableView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTableView) callVirtualBase_VerticalOffset() int {

	return (int)(C.QTableView_virtualbase_verticalOffset(unsafe.Pointer(this.h)))

}
func (this *QTableView) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QTableView_override_virtual_verticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_verticalOffset
func miqt_exec_callback_QTableView_verticalOffset(self *C.QTableView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTableView) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QTableView_virtualbase_moveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableView) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QTableView_override_virtual_moveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_moveCursor
func miqt_exec_callback_QTableView_moveCursor(self *C.QTableView, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QTableView_virtualbase_setSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QTableView) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QTableView_override_virtual_setSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_setSelection
func miqt_exec_callback_QTableView_setSelection(self *C.QTableView, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QTableView{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QTableView) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_goptr := newQRegion(C.QTableView_virtualbase_visualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableView) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QTableView_override_virtual_visualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_visualRegionForSelection
func miqt_exec_callback_QTableView_visualRegionForSelection(self *C.QTableView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QTableView_virtualbase_selectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QTableView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QTableView_override_virtual_selectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_selectedIndexes
func miqt_exec_callback_QTableView_selectedIndexes(self *C.QTableView, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QTableView) callVirtualBase_UpdateGeometries() {

	C.QTableView_virtualbase_updateGeometries(unsafe.Pointer(this.h))

}
func (this *QTableView) OnUpdateGeometries(slot func(super func())) {
	ok := C.QTableView_override_virtual_updateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_updateGeometries
func miqt_exec_callback_QTableView_updateGeometries(self *C.QTableView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QTableView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QTableView_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTableView_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_viewportSizeHint
func miqt_exec_callback_QTableView_viewportSizeHint(self *C.QTableView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QTableView_virtualbase_sizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QTableView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QTableView_override_virtual_sizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_sizeHintForRow
func miqt_exec_callback_QTableView_sizeHintForRow(self *C.QTableView, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTableView) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QTableView_virtualbase_sizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QTableView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QTableView_override_virtual_sizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_sizeHintForColumn
func miqt_exec_callback_QTableView_sizeHintForColumn(self *C.QTableView, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTableView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QTableView_virtualbase_verticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTableView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTableView_override_virtual_verticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_verticalScrollbarAction
func miqt_exec_callback_QTableView_verticalScrollbarAction(self *C.QTableView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTableView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QTableView) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QTableView_virtualbase_horizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTableView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTableView_override_virtual_horizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_horizontalScrollbarAction
func miqt_exec_callback_QTableView_horizontalScrollbarAction(self *C.QTableView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTableView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QTableView) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QTableView_virtualbase_isIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTableView) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QTableView_override_virtual_isIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_isIndexHidden
func miqt_exec_callback_QTableView_isIndexHidden(self *C.QTableView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTableView) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QTableView_virtualbase_selectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QTableView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QTableView_override_virtual_selectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_selectionChanged
func miqt_exec_callback_QTableView_selectionChanged(self *C.QTableView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QTableView{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QTableView) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QTableView_virtualbase_currentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QTableView) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QTableView_override_virtual_currentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_currentChanged
func miqt_exec_callback_QTableView_currentChanged(self *C.QTableView, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc((&QTableView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QTableView) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QTableView_virtualbase_keyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QTableView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QTableView_override_virtual_keyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_keyboardSearch
func miqt_exec_callback_QTableView_keyboardSearch(self *C.QTableView, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QTableView{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QTableView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTableView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QTableView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_inputMethodQuery
func miqt_exec_callback_QTableView_inputMethodQuery(self *C.QTableView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_Reset() {

	C.QTableView_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QTableView) OnReset(slot func(super func())) {
	ok := C.QTableView_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_reset
func miqt_exec_callback_QTableView_reset(self *C.QTableView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableView{h: self}).callVirtualBase_Reset)

}

func (this *QTableView) callVirtualBase_SelectAll() {

	C.QTableView_virtualbase_selectAll(unsafe.Pointer(this.h))

}
func (this *QTableView) OnSelectAll(slot func(super func())) {
	ok := C.QTableView_override_virtual_selectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_selectAll
func miqt_exec_callback_QTableView_selectAll(self *C.QTableView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableView{h: self}).callVirtualBase_SelectAll)

}

func (this *QTableView) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QTableView_virtualbase_dataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QTableView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QTableView_override_virtual_dataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_dataChanged
func miqt_exec_callback_QTableView_dataChanged(self *C.QTableView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	gofunc((&QTableView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QTableView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QTableView_virtualbase_rowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTableView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTableView_override_virtual_rowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_rowsInserted
func miqt_exec_callback_QTableView_rowsInserted(self *C.QTableView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QTableView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QTableView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QTableView_virtualbase_rowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTableView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTableView_override_virtual_rowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_rowsAboutToBeRemoved
func miqt_exec_callback_QTableView_rowsAboutToBeRemoved(self *C.QTableView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QTableView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QTableView) callVirtualBase_UpdateEditorData() {

	C.QTableView_virtualbase_updateEditorData(unsafe.Pointer(this.h))

}
func (this *QTableView) OnUpdateEditorData(slot func(super func())) {
	ok := C.QTableView_override_virtual_updateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_updateEditorData
func miqt_exec_callback_QTableView_updateEditorData(self *C.QTableView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QTableView) callVirtualBase_UpdateEditorGeometries() {

	C.QTableView_virtualbase_updateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QTableView) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QTableView_override_virtual_updateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_updateEditorGeometries
func miqt_exec_callback_QTableView_updateEditorGeometries(self *C.QTableView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QTableView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QTableView_virtualbase_verticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTableView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTableView_override_virtual_verticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_verticalScrollbarValueChanged
func miqt_exec_callback_QTableView_verticalScrollbarValueChanged(self *C.QTableView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTableView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QTableView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QTableView_virtualbase_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTableView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTableView_override_virtual_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_horizontalScrollbarValueChanged
func miqt_exec_callback_QTableView_horizontalScrollbarValueChanged(self *C.QTableView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTableView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QTableView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QTableView_virtualbase_closeEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QTableView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QTableView_override_virtual_closeEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_closeEditor
func miqt_exec_callback_QTableView_closeEditor(self *C.QTableView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QTableView{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QTableView) callVirtualBase_CommitData(editor *QWidget) {

	C.QTableView_virtualbase_commitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTableView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QTableView_override_virtual_commitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_commitData
func miqt_exec_callback_QTableView_commitData(self *C.QTableView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QTableView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QTableView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QTableView_virtualbase_editorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTableView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QTableView_override_virtual_editorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_editorDestroyed
func miqt_exec_callback_QTableView_editorDestroyed(self *C.QTableView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QTableView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QTableView) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QTableView_virtualbase_edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QTableView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QTableView_override_virtual_edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_edit2
func miqt_exec_callback_QTableView_edit2(self *C.QTableView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTableView) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QTableView_virtualbase_selectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QTableView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QTableView_override_virtual_selectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_selectionCommand
func miqt_exec_callback_QTableView_selectionCommand(self *C.QTableView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QTableView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QTableView_virtualbase_startDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QTableView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QTableView_override_virtual_startDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_startDrag
func miqt_exec_callback_QTableView_startDrag(self *C.QTableView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QTableView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QTableView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTableView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTableView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTableView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_focusNextPrevChild
func miqt_exec_callback_QTableView_focusNextPrevChild(self *C.QTableView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTableView) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTableView_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTableView) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTableView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_event
func miqt_exec_callback_QTableView_event(self *C.QTableView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTableView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QTableView_virtualbase_viewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTableView) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTableView_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_viewportEvent
func miqt_exec_callback_QTableView_viewportEvent(self *C.QTableView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTableView) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QTableView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTableView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_mousePressEvent
func miqt_exec_callback_QTableView_mousePressEvent(self *C.QTableView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTableView) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QTableView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTableView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_mouseMoveEvent
func miqt_exec_callback_QTableView_mouseMoveEvent(self *C.QTableView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTableView) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QTableView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTableView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_mouseReleaseEvent
func miqt_exec_callback_QTableView_mouseReleaseEvent(self *C.QTableView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTableView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTableView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTableView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_mouseDoubleClickEvent
func miqt_exec_callback_QTableView_mouseDoubleClickEvent(self *C.QTableView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTableView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QTableView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QTableView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_dragEnterEvent
func miqt_exec_callback_QTableView_dragEnterEvent(self *C.QTableView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTableView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTableView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QTableView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_dragMoveEvent
func miqt_exec_callback_QTableView_dragMoveEvent(self *C.QTableView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTableView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTableView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QTableView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_dragLeaveEvent
func miqt_exec_callback_QTableView_dragLeaveEvent(self *C.QTableView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTableView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTableView_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QTableView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_dropEvent
func miqt_exec_callback_QTableView_dropEvent(self *C.QTableView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTableView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTableView_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTableView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_focusInEvent
func miqt_exec_callback_QTableView_focusInEvent(self *C.QTableView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTableView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTableView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTableView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_focusOutEvent
func miqt_exec_callback_QTableView_focusOutEvent(self *C.QTableView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTableView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QTableView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTableView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_keyPressEvent
func miqt_exec_callback_QTableView_keyPressEvent(self *C.QTableView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTableView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QTableView_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QTableView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_resizeEvent
func miqt_exec_callback_QTableView_resizeEvent(self *C.QTableView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTableView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QTableView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QTableView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_inputMethodEvent
func miqt_exec_callback_QTableView_inputMethodEvent(self *C.QTableView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTableView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QTableView_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QTableView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QTableView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_eventFilter
func miqt_exec_callback_QTableView_eventFilter(self *C.QTableView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTableView) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTableView_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTableView_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_minimumSizeHint
func miqt_exec_callback_QTableView_minimumSizeHint(self *C.QTableView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTableView_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTableView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_sizeHint
func miqt_exec_callback_QTableView_sizeHint(self *C.QTableView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTableView_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTableView) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QTableView_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_setupViewport
func miqt_exec_callback_QTableView_setupViewport(self *C.QTableView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QTableView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTableView) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QTableView_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTableView) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QTableView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_wheelEvent
func miqt_exec_callback_QTableView_wheelEvent(self *C.QTableView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QTableView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTableView) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QTableView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTableView) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QTableView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_contextMenuEvent
func miqt_exec_callback_QTableView_contextMenuEvent(self *C.QTableView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QTableView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTableView) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QTableView_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTableView) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QTableView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_changeEvent
func miqt_exec_callback_QTableView_changeEvent(self *C.QTableView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QTableView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTableView) callVirtualBase_DevType() int {

	return (int)(C.QTableView_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTableView) OnDevType(slot func(super func() int) int) {
	ok := C.QTableView_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_devType
func miqt_exec_callback_QTableView_devType(self *C.QTableView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTableView) callVirtualBase_SetVisible(visible bool) {

	C.QTableView_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTableView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTableView_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_setVisible
func miqt_exec_callback_QTableView_setVisible(self *C.QTableView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTableView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTableView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTableView_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTableView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTableView_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_heightForWidth
func miqt_exec_callback_QTableView_heightForWidth(self *C.QTableView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTableView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTableView_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTableView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTableView_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_hasHeightForWidth
func miqt_exec_callback_QTableView_hasHeightForWidth(self *C.QTableView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTableView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTableView_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QTableView) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTableView_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_paintEngine
func miqt_exec_callback_QTableView_paintEngine(self *C.QTableView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTableView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTableView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_keyReleaseEvent
func miqt_exec_callback_QTableView_keyReleaseEvent(self *C.QTableView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTableView) callVirtualBase_EnterEvent(event *QEvent) {

	C.QTableView_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTableView_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_enterEvent
func miqt_exec_callback_QTableView_enterEvent(self *C.QTableView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTableView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTableView_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTableView_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_leaveEvent
func miqt_exec_callback_QTableView_leaveEvent(self *C.QTableView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTableView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTableView_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTableView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_moveEvent
func miqt_exec_callback_QTableView_moveEvent(self *C.QTableView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTableView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTableView_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTableView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_closeEvent
func miqt_exec_callback_QTableView_closeEvent(self *C.QTableView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTableView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTableView_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTableView_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_tabletEvent
func miqt_exec_callback_QTableView_tabletEvent(self *C.QTableView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTableView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTableView_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTableView_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_actionEvent
func miqt_exec_callback_QTableView_actionEvent(self *C.QTableView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTableView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QTableView_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QTableView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_showEvent
func miqt_exec_callback_QTableView_showEvent(self *C.QTableView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTableView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTableView_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTableView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_hideEvent
func miqt_exec_callback_QTableView_hideEvent(self *C.QTableView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTableView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTableView_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QTableView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QTableView_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_nativeEvent
func miqt_exec_callback_QTableView_nativeEvent(self *C.QTableView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTableView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTableView_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTableView) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTableView_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_metric
func miqt_exec_callback_QTableView_metric(self *C.QTableView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTableView) callVirtualBase_InitPainter(painter *QPainter) {

	C.QTableView_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTableView) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTableView_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_initPainter
func miqt_exec_callback_QTableView_initPainter(self *C.QTableView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTableView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTableView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTableView_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTableView) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTableView_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_redirected
func miqt_exec_callback_QTableView_redirected(self *C.QTableView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QTableView_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTableView) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTableView_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_sharedPainter
func miqt_exec_callback_QTableView_sharedPainter(self *C.QTableView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTableView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTableView_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTableView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_childEvent
func miqt_exec_callback_QTableView_childEvent(self *C.QTableView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTableView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTableView_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableView) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTableView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_customEvent
func miqt_exec_callback_QTableView_customEvent(self *C.QTableView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTableView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTableView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTableView_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTableView) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTableView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_connectNotify
func miqt_exec_callback_QTableView_connectNotify(self *C.QTableView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTableView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTableView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTableView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTableView) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTableView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableView_disconnectNotify
func miqt_exec_callback_QTableView_disconnectNotify(self *C.QTableView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTableView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTableView) Delete() {
	C.QTableView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTableView) GoGC() {
	runtime.SetFinalizer(this, func(this *QTableView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
