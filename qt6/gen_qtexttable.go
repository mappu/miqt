package qt6

/*

#include "gen_qtexttable.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextTableCell struct {
	h          *C.QTextTableCell
	isSubclass bool
}

func (this *QTextTableCell) cPointer() *C.QTextTableCell {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextTableCell) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextTableCell constructs the type using only CGO pointers.
func newQTextTableCell(h *C.QTextTableCell) *QTextTableCell {
	if h == nil {
		return nil
	}
	return &QTextTableCell{h: h}
}

// UnsafeNewQTextTableCell constructs the type using only unsafe pointers.
func UnsafeNewQTextTableCell(h unsafe.Pointer) *QTextTableCell {
	if h == nil {
		return nil
	}

	return &QTextTableCell{h: (*C.QTextTableCell)(h)}
}

// NewQTextTableCell constructs a new QTextTableCell object.
func NewQTextTableCell() *QTextTableCell {
	var outptr_QTextTableCell *C.QTextTableCell = nil

	C.QTextTableCell_new(&outptr_QTextTableCell)
	ret := newQTextTableCell(outptr_QTextTableCell)
	ret.isSubclass = true
	return ret
}

// NewQTextTableCell2 constructs a new QTextTableCell object.
func NewQTextTableCell2(o *QTextTableCell) *QTextTableCell {
	var outptr_QTextTableCell *C.QTextTableCell = nil

	C.QTextTableCell_new2(o.cPointer(), &outptr_QTextTableCell)
	ret := newQTextTableCell(outptr_QTextTableCell)
	ret.isSubclass = true
	return ret
}

func (this *QTextTableCell) OperatorAssign(o *QTextTableCell) {
	C.QTextTableCell_OperatorAssign(this.h, o.cPointer())
}

func (this *QTextTableCell) SetFormat(format *QTextCharFormat) {
	C.QTextTableCell_SetFormat(this.h, format.cPointer())
}

func (this *QTextTableCell) Format() *QTextCharFormat {
	_ret := C.QTextTableCell_Format(this.h)
	_goptr := newQTextCharFormat(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) Row() int {
	return (int)(C.QTextTableCell_Row(this.h))
}

func (this *QTextTableCell) Column() int {
	return (int)(C.QTextTableCell_Column(this.h))
}

func (this *QTextTableCell) RowSpan() int {
	return (int)(C.QTextTableCell_RowSpan(this.h))
}

func (this *QTextTableCell) ColumnSpan() int {
	return (int)(C.QTextTableCell_ColumnSpan(this.h))
}

func (this *QTextTableCell) IsValid() bool {
	return (bool)(C.QTextTableCell_IsValid(this.h))
}

func (this *QTextTableCell) FirstCursorPosition() *QTextCursor {
	_ret := C.QTextTableCell_FirstCursorPosition(this.h)
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) LastCursorPosition() *QTextCursor {
	_ret := C.QTextTableCell_LastCursorPosition(this.h)
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) FirstPosition() int {
	return (int)(C.QTextTableCell_FirstPosition(this.h))
}

func (this *QTextTableCell) LastPosition() int {
	return (int)(C.QTextTableCell_LastPosition(this.h))
}

func (this *QTextTableCell) OperatorEqual(other *QTextTableCell) bool {
	return (bool)(C.QTextTableCell_OperatorEqual(this.h, other.cPointer()))
}

func (this *QTextTableCell) OperatorNotEqual(other *QTextTableCell) bool {
	return (bool)(C.QTextTableCell_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QTextTableCell) Begin() *QTextFrame__iterator {
	_ret := C.QTextTableCell_Begin(this.h)
	_goptr := newQTextFrame__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) End() *QTextFrame__iterator {
	_ret := C.QTextTableCell_End(this.h)
	_goptr := newQTextFrame__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) TableCellFormatIndex() int {
	return (int)(C.QTextTableCell_TableCellFormatIndex(this.h))
}

// Delete this object from C++ memory.
func (this *QTextTableCell) Delete() {
	C.QTextTableCell_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextTableCell) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextTableCell) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextTable struct {
	h          *C.QTextTable
	isSubclass bool
	*QTextFrame
}

func (this *QTextTable) cPointer() *C.QTextTable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextTable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextTable constructs the type using only CGO pointers.
func newQTextTable(h *C.QTextTable, h_QTextFrame *C.QTextFrame, h_QTextObject *C.QTextObject, h_QObject *C.QObject) *QTextTable {
	if h == nil {
		return nil
	}
	return &QTextTable{h: h,
		QTextFrame: newQTextFrame(h_QTextFrame, h_QTextObject, h_QObject)}
}

// UnsafeNewQTextTable constructs the type using only unsafe pointers.
func UnsafeNewQTextTable(h unsafe.Pointer, h_QTextFrame unsafe.Pointer, h_QTextObject unsafe.Pointer, h_QObject unsafe.Pointer) *QTextTable {
	if h == nil {
		return nil
	}

	return &QTextTable{h: (*C.QTextTable)(h),
		QTextFrame: UnsafeNewQTextFrame(h_QTextFrame, h_QTextObject, h_QObject)}
}

// NewQTextTable constructs a new QTextTable object.
func NewQTextTable(doc *QTextDocument) *QTextTable {
	var outptr_QTextTable *C.QTextTable = nil
	var outptr_QTextFrame *C.QTextFrame = nil
	var outptr_QTextObject *C.QTextObject = nil
	var outptr_QObject *C.QObject = nil

	C.QTextTable_new(doc.cPointer(), &outptr_QTextTable, &outptr_QTextFrame, &outptr_QTextObject, &outptr_QObject)
	ret := newQTextTable(outptr_QTextTable, outptr_QTextFrame, outptr_QTextObject, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QTextTable) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTextTable_MetaObject(this.h)))
}

func (this *QTextTable) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextTable_Metacast(this.h, param1_Cstring))
}

func QTextTable_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextTable_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
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
	return (int)(C.QTextTable_Rows(this.h))
}

func (this *QTextTable) Columns() int {
	return (int)(C.QTextTable_Columns(this.h))
}

func (this *QTextTable) CellAt(row int, col int) *QTextTableCell {
	_ret := C.QTextTable_CellAt(this.h, (C.int)(row), (C.int)(col))
	_goptr := newQTextTableCell(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) CellAtWithPosition(position int) *QTextTableCell {
	_ret := C.QTextTable_CellAtWithPosition(this.h, (C.int)(position))
	_goptr := newQTextTableCell(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) CellAtWithQTextCursor(c *QTextCursor) *QTextTableCell {
	_ret := C.QTextTable_CellAtWithQTextCursor(this.h, c.cPointer())
	_goptr := newQTextTableCell(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) RowStart(c *QTextCursor) *QTextCursor {
	_ret := C.QTextTable_RowStart(this.h, c.cPointer())
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) RowEnd(c *QTextCursor) *QTextCursor {
	_ret := C.QTextTable_RowEnd(this.h, c.cPointer())
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) SetFormat(format *QTextTableFormat) {
	C.QTextTable_SetFormat(this.h, format.cPointer())
}

func (this *QTextTable) Format() *QTextTableFormat {
	_ret := C.QTextTable_Format(this.h)
	_goptr := newQTextTableFormat(_ret, nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextTable_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextTable_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextTable_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextTable_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextTable) Delete() {
	C.QTextTable_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextTable) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextTable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
