package qt

/*

#include "gen_qtexttable.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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
	return newQTextTableCell((*C.QTextTableCell)(h))
}

// NewQTextTableCell constructs a new QTextTableCell object.
func NewQTextTableCell() *QTextTableCell {

	return newQTextTableCell(C.QTextTableCell_new())
}

// NewQTextTableCell2 constructs a new QTextTableCell object.
func NewQTextTableCell2(o *QTextTableCell) *QTextTableCell {

	return newQTextTableCell(C.QTextTableCell_new2(o.cPointer()))
}

func (this *QTextTableCell) OperatorAssign(o *QTextTableCell) {
	C.QTextTableCell_operatorAssign(this.h, o.cPointer())
}

func (this *QTextTableCell) SetFormat(format *QTextCharFormat) {
	C.QTextTableCell_setFormat(this.h, format.cPointer())
}

func (this *QTextTableCell) Format() *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QTextTableCell_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) Row() int {
	return (int)(C.QTextTableCell_row(this.h))
}

func (this *QTextTableCell) Column() int {
	return (int)(C.QTextTableCell_column(this.h))
}

func (this *QTextTableCell) RowSpan() int {
	return (int)(C.QTextTableCell_rowSpan(this.h))
}

func (this *QTextTableCell) ColumnSpan() int {
	return (int)(C.QTextTableCell_columnSpan(this.h))
}

func (this *QTextTableCell) IsValid() bool {
	return (bool)(C.QTextTableCell_isValid(this.h))
}

func (this *QTextTableCell) FirstCursorPosition() *QTextCursor {
	_goptr := newQTextCursor(C.QTextTableCell_firstCursorPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) LastCursorPosition() *QTextCursor {
	_goptr := newQTextCursor(C.QTextTableCell_lastCursorPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) FirstPosition() int {
	return (int)(C.QTextTableCell_firstPosition(this.h))
}

func (this *QTextTableCell) LastPosition() int {
	return (int)(C.QTextTableCell_lastPosition(this.h))
}

func (this *QTextTableCell) OperatorEqual(other *QTextTableCell) bool {
	return (bool)(C.QTextTableCell_operatorEqual(this.h, other.cPointer()))
}

func (this *QTextTableCell) OperatorNotEqual(other *QTextTableCell) bool {
	return (bool)(C.QTextTableCell_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QTextTableCell) Begin() *QTextFrame__iterator {
	_goptr := newQTextFrame__iterator(C.QTextTableCell_begin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) End() *QTextFrame__iterator {
	_goptr := newQTextFrame__iterator(C.QTextTableCell_end(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCell) TableCellFormatIndex() int {
	return (int)(C.QTextTableCell_tableCellFormatIndex(this.h))
}

// Delete this object from C++ memory.
func (this *QTextTableCell) Delete() {
	C.QTextTableCell_delete(this.h)
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
	h *C.QTextTable
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
func newQTextTable(h *C.QTextTable) *QTextTable {
	if h == nil {
		return nil
	}
	var outptr_QTextFrame *C.QTextFrame = nil
	C.QTextTable_virtbase(h, &outptr_QTextFrame)

	return &QTextTable{h: h,
		QTextFrame: newQTextFrame(outptr_QTextFrame)}
}

// UnsafeNewQTextTable constructs the type using only unsafe pointers.
func UnsafeNewQTextTable(h unsafe.Pointer) *QTextTable {
	return newQTextTable((*C.QTextTable)(h))
}

// NewQTextTable constructs a new QTextTable object.
func NewQTextTable(doc *QTextDocument) *QTextTable {

	return newQTextTable(C.QTextTable_new(doc.cPointer()))
}

func (this *QTextTable) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTextTable_metaObject(this.h))
}

func (this *QTextTable) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextTable_metacast(this.h, param1_Cstring))
}

func QTextTable_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextTable_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextTable_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextTable_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextTable) Resize(rows int, cols int) {
	C.QTextTable_resize(this.h, (C.int)(rows), (C.int)(cols))
}

func (this *QTextTable) InsertRows(pos int, num int) {
	C.QTextTable_insertRows(this.h, (C.int)(pos), (C.int)(num))
}

func (this *QTextTable) InsertColumns(pos int, num int) {
	C.QTextTable_insertColumns(this.h, (C.int)(pos), (C.int)(num))
}

func (this *QTextTable) AppendRows(count int) {
	C.QTextTable_appendRows(this.h, (C.int)(count))
}

func (this *QTextTable) AppendColumns(count int) {
	C.QTextTable_appendColumns(this.h, (C.int)(count))
}

func (this *QTextTable) RemoveRows(pos int, num int) {
	C.QTextTable_removeRows(this.h, (C.int)(pos), (C.int)(num))
}

func (this *QTextTable) RemoveColumns(pos int, num int) {
	C.QTextTable_removeColumns(this.h, (C.int)(pos), (C.int)(num))
}

func (this *QTextTable) MergeCells(row int, col int, numRows int, numCols int) {
	C.QTextTable_mergeCells(this.h, (C.int)(row), (C.int)(col), (C.int)(numRows), (C.int)(numCols))
}

func (this *QTextTable) MergeCellsWithCursor(cursor *QTextCursor) {
	C.QTextTable_mergeCellsWithCursor(this.h, cursor.cPointer())
}

func (this *QTextTable) SplitCell(row int, col int, numRows int, numCols int) {
	C.QTextTable_splitCell(this.h, (C.int)(row), (C.int)(col), (C.int)(numRows), (C.int)(numCols))
}

func (this *QTextTable) Rows() int {
	return (int)(C.QTextTable_rows(this.h))
}

func (this *QTextTable) Columns() int {
	return (int)(C.QTextTable_columns(this.h))
}

func (this *QTextTable) CellAt(row int, col int) *QTextTableCell {
	_goptr := newQTextTableCell(C.QTextTable_cellAt(this.h, (C.int)(row), (C.int)(col)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) CellAtWithPosition(position int) *QTextTableCell {
	_goptr := newQTextTableCell(C.QTextTable_cellAtWithPosition(this.h, (C.int)(position)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) CellAtWithQTextCursor(c *QTextCursor) *QTextTableCell {
	_goptr := newQTextTableCell(C.QTextTable_cellAtWithQTextCursor(this.h, c.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) RowStart(c *QTextCursor) *QTextCursor {
	_goptr := newQTextCursor(C.QTextTable_rowStart(this.h, c.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) RowEnd(c *QTextCursor) *QTextCursor {
	_goptr := newQTextCursor(C.QTextTable_rowEnd(this.h, c.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTable) SetFormat(format *QTextTableFormat) {
	C.QTextTable_setFormat(this.h, format.cPointer())
}

func (this *QTextTable) Format() *QTextTableFormat {
	_goptr := newQTextTableFormat(C.QTextTable_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextTable_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextTable_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextTable_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextTable_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextTable_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextTable_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextTable_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextTable_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextTable) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTextTable_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTextTable) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTextTable_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextTable_event
func miqt_exec_callback_QTextTable_event(self *C.QTextTable, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTextTable{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextTable) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTextTable_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTextTable) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTextTable_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextTable_eventFilter
func miqt_exec_callback_QTextTable_eventFilter(self *C.QTextTable, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTextTable{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTextTable) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTextTable_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextTable) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTextTable_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextTable_timerEvent
func miqt_exec_callback_QTextTable_timerEvent(self *C.QTextTable, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTextTable{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTextTable) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTextTable_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextTable) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTextTable_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextTable_childEvent
func miqt_exec_callback_QTextTable_childEvent(self *C.QTextTable, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTextTable{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTextTable) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTextTable_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextTable) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextTable_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextTable_customEvent
func miqt_exec_callback_QTextTable_customEvent(self *C.QTextTable, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextTable{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTextTable) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTextTable_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextTable) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextTable_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextTable_connectNotify
func miqt_exec_callback_QTextTable_connectNotify(self *C.QTextTable, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextTable{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTextTable) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTextTable_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextTable) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextTable_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextTable_disconnectNotify
func miqt_exec_callback_QTextTable_disconnectNotify(self *C.QTextTable, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextTable{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTextTable) Delete() {
	C.QTextTable_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextTable) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextTable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
