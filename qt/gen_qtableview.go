package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQTableView(h *C.QTableView) *QTableView {
	if h == nil {
		return nil
	}
	return &QTableView{h: h, QAbstractItemView: newQAbstractItemView_U(unsafe.Pointer(h))}
}

func newQTableView_U(h unsafe.Pointer) *QTableView {
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
	ret := C.QTableView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTableView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableView_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTableView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableView_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
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
	ret := C.QTableView_HorizontalHeader(this.h)
	return newQHeaderView_U(unsafe.Pointer(ret))
}

func (this *QTableView) VerticalHeader() *QHeaderView {
	ret := C.QTableView_VerticalHeader(this.h)
	return newQHeaderView_U(unsafe.Pointer(ret))
}

func (this *QTableView) SetHorizontalHeader(header *QHeaderView) {
	C.QTableView_SetHorizontalHeader(this.h, header.cPointer())
}

func (this *QTableView) SetVerticalHeader(header *QHeaderView) {
	C.QTableView_SetVerticalHeader(this.h, header.cPointer())
}

func (this *QTableView) RowViewportPosition(row int) int {
	ret := C.QTableView_RowViewportPosition(this.h, (C.int)(row))
	return (int)(ret)
}

func (this *QTableView) RowAt(y int) int {
	ret := C.QTableView_RowAt(this.h, (C.int)(y))
	return (int)(ret)
}

func (this *QTableView) SetRowHeight(row int, height int) {
	C.QTableView_SetRowHeight(this.h, (C.int)(row), (C.int)(height))
}

func (this *QTableView) RowHeight(row int) int {
	ret := C.QTableView_RowHeight(this.h, (C.int)(row))
	return (int)(ret)
}

func (this *QTableView) ColumnViewportPosition(column int) int {
	ret := C.QTableView_ColumnViewportPosition(this.h, (C.int)(column))
	return (int)(ret)
}

func (this *QTableView) ColumnAt(x int) int {
	ret := C.QTableView_ColumnAt(this.h, (C.int)(x))
	return (int)(ret)
}

func (this *QTableView) SetColumnWidth(column int, width int) {
	C.QTableView_SetColumnWidth(this.h, (C.int)(column), (C.int)(width))
}

func (this *QTableView) ColumnWidth(column int) int {
	ret := C.QTableView_ColumnWidth(this.h, (C.int)(column))
	return (int)(ret)
}

func (this *QTableView) IsRowHidden(row int) bool {
	ret := C.QTableView_IsRowHidden(this.h, (C.int)(row))
	return (bool)(ret)
}

func (this *QTableView) SetRowHidden(row int, hide bool) {
	C.QTableView_SetRowHidden(this.h, (C.int)(row), (C.bool)(hide))
}

func (this *QTableView) IsColumnHidden(column int) bool {
	ret := C.QTableView_IsColumnHidden(this.h, (C.int)(column))
	return (bool)(ret)
}

func (this *QTableView) SetColumnHidden(column int, hide bool) {
	C.QTableView_SetColumnHidden(this.h, (C.int)(column), (C.bool)(hide))
}

func (this *QTableView) SetSortingEnabled(enable bool) {
	C.QTableView_SetSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QTableView) IsSortingEnabled() bool {
	ret := C.QTableView_IsSortingEnabled(this.h)
	return (bool)(ret)
}

func (this *QTableView) ShowGrid() bool {
	ret := C.QTableView_ShowGrid(this.h)
	return (bool)(ret)
}

func (this *QTableView) GridStyle() uintptr {
	ret := C.QTableView_GridStyle(this.h)
	return (uintptr)(ret)
}

func (this *QTableView) SetGridStyle(style uintptr) {
	C.QTableView_SetGridStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTableView) SetWordWrap(on bool) {
	C.QTableView_SetWordWrap(this.h, (C.bool)(on))
}

func (this *QTableView) WordWrap() bool {
	ret := C.QTableView_WordWrap(this.h)
	return (bool)(ret)
}

func (this *QTableView) SetCornerButtonEnabled(enable bool) {
	C.QTableView_SetCornerButtonEnabled(this.h, (C.bool)(enable))
}

func (this *QTableView) IsCornerButtonEnabled() bool {
	ret := C.QTableView_IsCornerButtonEnabled(this.h)
	return (bool)(ret)
}

func (this *QTableView) VisualRect(index *QModelIndex) *QRect {
	ret := C.QTableView_VisualRect(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableView) ScrollTo(index *QModelIndex) {
	C.QTableView_ScrollTo(this.h, index.cPointer())
}

func (this *QTableView) IndexAt(p *QPoint) *QModelIndex {
	ret := C.QTableView_IndexAt(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableView) SetSpan(row int, column int, rowSpan int, columnSpan int) {
	C.QTableView_SetSpan(this.h, (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QTableView) RowSpan(row int, column int) int {
	ret := C.QTableView_RowSpan(this.h, (C.int)(row), (C.int)(column))
	return (int)(ret)
}

func (this *QTableView) ColumnSpan(row int, column int) int {
	ret := C.QTableView_ColumnSpan(this.h, (C.int)(row), (C.int)(column))
	return (int)(ret)
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

func (this *QTableView) SortByColumn2(column int, order uintptr) {
	C.QTableView_SortByColumn2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QTableView) SetShowGrid(show bool) {
	C.QTableView_SetShowGrid(this.h, (C.bool)(show))
}

func QTableView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableView_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTableView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableView_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTableView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableView_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTableView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableView) ScrollTo2(index *QModelIndex, hint uintptr) {
	C.QTableView_ScrollTo2(this.h, index.cPointer(), (C.uintptr_t)(hint))
}

func (this *QTableView) Delete() {
	C.QTableView_Delete(this.h)
}
