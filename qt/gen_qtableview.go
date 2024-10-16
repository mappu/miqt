package qt

/*

#include "gen_qtableview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func newQTableView(h *C.QTableView) *QTableView {
	if h == nil {
		return nil
	}
	return &QTableView{h: h, QAbstractItemView: UnsafeNewQAbstractItemView(unsafe.Pointer(h))}
}

func UnsafeNewQTableView(h unsafe.Pointer) *QTableView {
	return newQTableView((*C.QTableView)(h))
}

// NewQTableView constructs a new QTableView object.
func NewQTableView() *QTableView {
	ret := C.QTableView_new()
	return newQTableView(ret)
}

// NewQTableView2 constructs a new QTableView object.
func NewQTableView2(parent *QWidget) *QTableView {
	ret := C.QTableView_new2(parent.cPointer())
	return newQTableView(ret)
}

func (this *QTableView) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTableView_MetaObject(this.h)))
}

func (this *QTableView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QTableView_Metacast(this.h, param1_Cstring)
}

func QTableView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTableView_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTableView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTableView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTableView) SetModel(model *QAbstractItemModel) {
	C.QTableView_SetModel(this.h, model.cPointer())
}

func (this *QTableView) SetRootIndex(index *QModelIndex) {
	C.QTableView_SetRootIndex(this.h, index.cPointer())
}

func (this *QTableView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QTableView_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QTableView) DoItemsLayout() {
	C.QTableView_DoItemsLayout(this.h)
}

func (this *QTableView) HorizontalHeader() *QHeaderView {
	return UnsafeNewQHeaderView(unsafe.Pointer(C.QTableView_HorizontalHeader(this.h)))
}

func (this *QTableView) VerticalHeader() *QHeaderView {
	return UnsafeNewQHeaderView(unsafe.Pointer(C.QTableView_VerticalHeader(this.h)))
}

func (this *QTableView) SetHorizontalHeader(header *QHeaderView) {
	C.QTableView_SetHorizontalHeader(this.h, header.cPointer())
}

func (this *QTableView) SetVerticalHeader(header *QHeaderView) {
	C.QTableView_SetVerticalHeader(this.h, header.cPointer())
}

func (this *QTableView) RowViewportPosition(row int) int {
	return (int)(C.QTableView_RowViewportPosition(this.h, (C.int)(row)))
}

func (this *QTableView) RowAt(y int) int {
	return (int)(C.QTableView_RowAt(this.h, (C.int)(y)))
}

func (this *QTableView) SetRowHeight(row int, height int) {
	C.QTableView_SetRowHeight(this.h, (C.int)(row), (C.int)(height))
}

func (this *QTableView) RowHeight(row int) int {
	return (int)(C.QTableView_RowHeight(this.h, (C.int)(row)))
}

func (this *QTableView) ColumnViewportPosition(column int) int {
	return (int)(C.QTableView_ColumnViewportPosition(this.h, (C.int)(column)))
}

func (this *QTableView) ColumnAt(x int) int {
	return (int)(C.QTableView_ColumnAt(this.h, (C.int)(x)))
}

func (this *QTableView) SetColumnWidth(column int, width int) {
	C.QTableView_SetColumnWidth(this.h, (C.int)(column), (C.int)(width))
}

func (this *QTableView) ColumnWidth(column int) int {
	return (int)(C.QTableView_ColumnWidth(this.h, (C.int)(column)))
}

func (this *QTableView) IsRowHidden(row int) bool {
	return (bool)(C.QTableView_IsRowHidden(this.h, (C.int)(row)))
}

func (this *QTableView) SetRowHidden(row int, hide bool) {
	C.QTableView_SetRowHidden(this.h, (C.int)(row), (C.bool)(hide))
}

func (this *QTableView) IsColumnHidden(column int) bool {
	return (bool)(C.QTableView_IsColumnHidden(this.h, (C.int)(column)))
}

func (this *QTableView) SetColumnHidden(column int, hide bool) {
	C.QTableView_SetColumnHidden(this.h, (C.int)(column), (C.bool)(hide))
}

func (this *QTableView) SetSortingEnabled(enable bool) {
	C.QTableView_SetSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QTableView) IsSortingEnabled() bool {
	return (bool)(C.QTableView_IsSortingEnabled(this.h))
}

func (this *QTableView) ShowGrid() bool {
	return (bool)(C.QTableView_ShowGrid(this.h))
}

func (this *QTableView) GridStyle() PenStyle {
	return (PenStyle)(C.QTableView_GridStyle(this.h))
}

func (this *QTableView) SetGridStyle(style PenStyle) {
	C.QTableView_SetGridStyle(this.h, (C.int)(style))
}

func (this *QTableView) SetWordWrap(on bool) {
	C.QTableView_SetWordWrap(this.h, (C.bool)(on))
}

func (this *QTableView) WordWrap() bool {
	return (bool)(C.QTableView_WordWrap(this.h))
}

func (this *QTableView) SetCornerButtonEnabled(enable bool) {
	C.QTableView_SetCornerButtonEnabled(this.h, (C.bool)(enable))
}

func (this *QTableView) IsCornerButtonEnabled() bool {
	return (bool)(C.QTableView_IsCornerButtonEnabled(this.h))
}

func (this *QTableView) VisualRect(index *QModelIndex) *QRect {
	_ret := C.QTableView_VisualRect(this.h, index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableView) ScrollTo(index *QModelIndex) {
	C.QTableView_ScrollTo(this.h, index.cPointer())
}

func (this *QTableView) IndexAt(p *QPoint) *QModelIndex {
	_ret := C.QTableView_IndexAt(this.h, p.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableView) SetSpan(row int, column int, rowSpan int, columnSpan int) {
	C.QTableView_SetSpan(this.h, (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QTableView) RowSpan(row int, column int) int {
	return (int)(C.QTableView_RowSpan(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QTableView) ColumnSpan(row int, column int) int {
	return (int)(C.QTableView_ColumnSpan(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QTableView) ClearSpans() {
	C.QTableView_ClearSpans(this.h)
}

func (this *QTableView) SelectRow(row int) {
	C.QTableView_SelectRow(this.h, (C.int)(row))
}

func (this *QTableView) SelectColumn(column int) {
	C.QTableView_SelectColumn(this.h, (C.int)(column))
}

func (this *QTableView) HideRow(row int) {
	C.QTableView_HideRow(this.h, (C.int)(row))
}

func (this *QTableView) HideColumn(column int) {
	C.QTableView_HideColumn(this.h, (C.int)(column))
}

func (this *QTableView) ShowRow(row int) {
	C.QTableView_ShowRow(this.h, (C.int)(row))
}

func (this *QTableView) ShowColumn(column int) {
	C.QTableView_ShowColumn(this.h, (C.int)(column))
}

func (this *QTableView) ResizeRowToContents(row int) {
	C.QTableView_ResizeRowToContents(this.h, (C.int)(row))
}

func (this *QTableView) ResizeRowsToContents() {
	C.QTableView_ResizeRowsToContents(this.h)
}

func (this *QTableView) ResizeColumnToContents(column int) {
	C.QTableView_ResizeColumnToContents(this.h, (C.int)(column))
}

func (this *QTableView) ResizeColumnsToContents() {
	C.QTableView_ResizeColumnsToContents(this.h)
}

func (this *QTableView) SortByColumn(column int) {
	C.QTableView_SortByColumn(this.h, (C.int)(column))
}

func (this *QTableView) SortByColumn2(column int, order SortOrder) {
	C.QTableView_SortByColumn2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTableView) SetShowGrid(show bool) {
	C.QTableView_SetShowGrid(this.h, (C.bool)(show))
}

func QTableView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTableView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTableView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTableView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTableView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTableView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTableView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTableView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTableView) ScrollTo2(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QTableView_ScrollTo2(this.h, index.cPointer(), (C.int)(hint))
}

// Delete this object from C++ memory.
func (this *QTableView) Delete() {
	C.QTableView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTableView) GoGC() {
	runtime.SetFinalizer(this, func(this *QTableView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
