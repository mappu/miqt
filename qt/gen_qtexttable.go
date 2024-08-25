package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtexttable.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextTableCell struct {
	h *C.QTextTableCell
}

func (this *QTextTableCell) cPointer() *C.QTextTableCell {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextTableCell(h *C.QTextTableCell) *QTextTableCell {
	return &QTextTableCell{h: h}
}

func newQTextTableCell_U(h unsafe.Pointer) *QTextTableCell {
	return newQTextTableCell((*C.QTextTableCell)(h))
}

// NewQTextTableCell constructs a new QTextTableCell object.
func NewQTextTableCell() *QTextTableCell {
	ret := C.QTextTableCell_new()
	return newQTextTableCell(ret)
}

// NewQTextTableCell2 constructs a new QTextTableCell object.
func NewQTextTableCell2(o *QTextTableCell) *QTextTableCell {
	ret := C.QTextTableCell_new2(o.cPointer())
	return newQTextTableCell(ret)
}

func (this *QTextTableCell) OperatorAssign(o *QTextTableCell) {
	C.QTextTableCell_OperatorAssign(this.h, o.cPointer())
}

func (this *QTextTableCell) SetFormat(format *QTextCharFormat) {
	C.QTextTableCell_SetFormat(this.h, format.cPointer())
}

func (this *QTextTableCell) Format() *QTextCharFormat {
	ret := C.QTextTableCell_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCharFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCharFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTableCell) Row() int {
	ret := C.QTextTableCell_Row(this.h)
	return (int)(ret)
}

func (this *QTextTableCell) Column() int {
	ret := C.QTextTableCell_Column(this.h)
	return (int)(ret)
}

func (this *QTextTableCell) RowSpan() int {
	ret := C.QTextTableCell_RowSpan(this.h)
	return (int)(ret)
}

func (this *QTextTableCell) ColumnSpan() int {
	ret := C.QTextTableCell_ColumnSpan(this.h)
	return (int)(ret)
}

func (this *QTextTableCell) IsValid() bool {
	ret := C.QTextTableCell_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextTableCell) FirstCursorPosition() *QTextCursor {
	ret := C.QTextTableCell_FirstCursorPosition(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTableCell) LastCursorPosition() *QTextCursor {
	ret := C.QTextTableCell_LastCursorPosition(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTableCell) FirstPosition() int {
	ret := C.QTextTableCell_FirstPosition(this.h)
	return (int)(ret)
}

func (this *QTextTableCell) LastPosition() int {
	ret := C.QTextTableCell_LastPosition(this.h)
	return (int)(ret)
}

func (this *QTextTableCell) OperatorEqual(other *QTextTableCell) bool {
	ret := C.QTextTableCell_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTextTableCell) OperatorNotEqual(other *QTextTableCell) bool {
	ret := C.QTextTableCell_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTextTableCell) TableCellFormatIndex() int {
	ret := C.QTextTableCell_TableCellFormatIndex(this.h)
	return (int)(ret)
}

func (this *QTextTableCell) Delete() {
	C.QTextTableCell_Delete(this.h)
}

type QTextTable struct {
	h *C.QTextTable
	*QTextFrame
}

func (this *QTextTable) cPointer() *C.QTextTable {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextTable(h *C.QTextTable) *QTextTable {
	return &QTextTable{h: h, QTextFrame: newQTextFrame_U(unsafe.Pointer(h))}
}

func newQTextTable_U(h unsafe.Pointer) *QTextTable {
	return newQTextTable((*C.QTextTable)(h))
}

// NewQTextTable constructs a new QTextTable object.
func NewQTextTable(doc *QTextDocument) *QTextTable {
	ret := C.QTextTable_new(doc.cPointer())
	return newQTextTable(ret)
}

func (this *QTextTable) MetaObject() *QMetaObject {
	ret := C.QTextTable_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTextTable_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextTable_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextTable_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextTable_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextTable) Resize(rows int, cols int) {
	C.QTextTable_Resize(this.h, (C.int)(rows), (C.int)(cols))
}

func (this *QTextTable) InsertRows(pos int, num int) {
	C.QTextTable_InsertRows(this.h, (C.int)(pos), (C.int)(num))
}

func (this *QTextTable) InsertColumns(pos int, num int) {
	C.QTextTable_InsertColumns(this.h, (C.int)(pos), (C.int)(num))
}

func (this *QTextTable) AppendRows(count int) {
	C.QTextTable_AppendRows(this.h, (C.int)(count))
}

func (this *QTextTable) AppendColumns(count int) {
	C.QTextTable_AppendColumns(this.h, (C.int)(count))
}

func (this *QTextTable) RemoveRows(pos int, num int) {
	C.QTextTable_RemoveRows(this.h, (C.int)(pos), (C.int)(num))
}

func (this *QTextTable) RemoveColumns(pos int, num int) {
	C.QTextTable_RemoveColumns(this.h, (C.int)(pos), (C.int)(num))
}

func (this *QTextTable) MergeCells(row int, col int, numRows int, numCols int) {
	C.QTextTable_MergeCells(this.h, (C.int)(row), (C.int)(col), (C.int)(numRows), (C.int)(numCols))
}

func (this *QTextTable) MergeCellsWithCursor(cursor *QTextCursor) {
	C.QTextTable_MergeCellsWithCursor(this.h, cursor.cPointer())
}

func (this *QTextTable) SplitCell(row int, col int, numRows int, numCols int) {
	C.QTextTable_SplitCell(this.h, (C.int)(row), (C.int)(col), (C.int)(numRows), (C.int)(numCols))
}

func (this *QTextTable) Rows() int {
	ret := C.QTextTable_Rows(this.h)
	return (int)(ret)
}

func (this *QTextTable) Columns() int {
	ret := C.QTextTable_Columns(this.h)
	return (int)(ret)
}

func (this *QTextTable) CellAt(row int, col int) *QTextTableCell {
	ret := C.QTextTable_CellAt(this.h, (C.int)(row), (C.int)(col))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextTableCell(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextTableCell) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTable) CellAtWithPosition(position int) *QTextTableCell {
	ret := C.QTextTable_CellAtWithPosition(this.h, (C.int)(position))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextTableCell(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextTableCell) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTable) CellAtWithQTextCursor(c *QTextCursor) *QTextTableCell {
	ret := C.QTextTable_CellAtWithQTextCursor(this.h, c.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextTableCell(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextTableCell) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTable) RowStart(c *QTextCursor) *QTextCursor {
	ret := C.QTextTable_RowStart(this.h, c.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTable) RowEnd(c *QTextCursor) *QTextCursor {
	ret := C.QTextTable_RowEnd(this.h, c.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTable) SetFormat(format *QTextTableFormat) {
	C.QTextTable_SetFormat(this.h, format.cPointer())
}

func (this *QTextTable) Format() *QTextTableFormat {
	ret := C.QTextTable_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextTableFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextTableFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTextTable_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextTable_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextTable_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextTable_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextTable_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextTable_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextTable_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextTable_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextTable) Delete() {
	C.QTextTable_Delete(this.h)
}
