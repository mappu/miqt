package qt6

/*

#include "gen_qitemselectionmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QItemSelectionModel__SelectionFlag int

const (
	QItemSelectionModel__NoUpdate       QItemSelectionModel__SelectionFlag = 0
	QItemSelectionModel__Clear          QItemSelectionModel__SelectionFlag = 1
	QItemSelectionModel__Select         QItemSelectionModel__SelectionFlag = 2
	QItemSelectionModel__Deselect       QItemSelectionModel__SelectionFlag = 4
	QItemSelectionModel__Toggle         QItemSelectionModel__SelectionFlag = 8
	QItemSelectionModel__Current        QItemSelectionModel__SelectionFlag = 16
	QItemSelectionModel__Rows           QItemSelectionModel__SelectionFlag = 32
	QItemSelectionModel__Columns        QItemSelectionModel__SelectionFlag = 64
	QItemSelectionModel__SelectCurrent  QItemSelectionModel__SelectionFlag = 18
	QItemSelectionModel__ToggleCurrent  QItemSelectionModel__SelectionFlag = 24
	QItemSelectionModel__ClearAndSelect QItemSelectionModel__SelectionFlag = 3
)

type QItemSelectionRange struct {
	h *C.QItemSelectionRange
}

func (this *QItemSelectionRange) cPointer() *C.QItemSelectionRange {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QItemSelectionRange) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQItemSelectionRange constructs the type using only CGO pointers.
func newQItemSelectionRange(h *C.QItemSelectionRange) *QItemSelectionRange {
	if h == nil {
		return nil
	}

	return &QItemSelectionRange{h: h}
}

// UnsafeNewQItemSelectionRange constructs the type using only unsafe pointers.
func UnsafeNewQItemSelectionRange(h unsafe.Pointer) *QItemSelectionRange {
	return newQItemSelectionRange((*C.QItemSelectionRange)(h))
}

// NewQItemSelectionRange constructs a new QItemSelectionRange object.
func NewQItemSelectionRange() *QItemSelectionRange {

	return newQItemSelectionRange(C.QItemSelectionRange_new())
}

// NewQItemSelectionRange2 constructs a new QItemSelectionRange object.
func NewQItemSelectionRange2(topL *QModelIndex, bottomR *QModelIndex) *QItemSelectionRange {

	return newQItemSelectionRange(C.QItemSelectionRange_new2(topL.cPointer(), bottomR.cPointer()))
}

// NewQItemSelectionRange3 constructs a new QItemSelectionRange object.
func NewQItemSelectionRange3(index *QModelIndex) *QItemSelectionRange {

	return newQItemSelectionRange(C.QItemSelectionRange_new3(index.cPointer()))
}

// NewQItemSelectionRange4 constructs a new QItemSelectionRange object.
func NewQItemSelectionRange4(param1 *QItemSelectionRange) *QItemSelectionRange {

	return newQItemSelectionRange(C.QItemSelectionRange_new4(param1.cPointer()))
}

func (this *QItemSelectionRange) Swap(other *QItemSelectionRange) {
	C.QItemSelectionRange_swap(this.h, other.cPointer())
}

func (this *QItemSelectionRange) Top() int {
	return (int)(C.QItemSelectionRange_top(this.h))
}

func (this *QItemSelectionRange) Left() int {
	return (int)(C.QItemSelectionRange_left(this.h))
}

func (this *QItemSelectionRange) Bottom() int {
	return (int)(C.QItemSelectionRange_bottom(this.h))
}

func (this *QItemSelectionRange) Right() int {
	return (int)(C.QItemSelectionRange_right(this.h))
}

func (this *QItemSelectionRange) Width() int {
	return (int)(C.QItemSelectionRange_width(this.h))
}

func (this *QItemSelectionRange) Height() int {
	return (int)(C.QItemSelectionRange_height(this.h))
}

func (this *QItemSelectionRange) TopLeft() *QPersistentModelIndex {
	return newQPersistentModelIndex(C.QItemSelectionRange_topLeft(this.h))
}

func (this *QItemSelectionRange) BottomRight() *QPersistentModelIndex {
	return newQPersistentModelIndex(C.QItemSelectionRange_bottomRight(this.h))
}

func (this *QItemSelectionRange) Parent() *QModelIndex {
	_goptr := newQModelIndex(C.QItemSelectionRange_parent(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemSelectionRange) Model() *QAbstractItemModel {
	return newQAbstractItemModel(C.QItemSelectionRange_model(this.h))
}

func (this *QItemSelectionRange) Contains(index *QModelIndex) bool {
	return (bool)(C.QItemSelectionRange_contains(this.h, index.cPointer()))
}

func (this *QItemSelectionRange) Contains2(row int, column int, parentIndex *QModelIndex) bool {
	return (bool)(C.QItemSelectionRange_contains2(this.h, (C.int)(row), (C.int)(column), parentIndex.cPointer()))
}

func (this *QItemSelectionRange) Intersects(other *QItemSelectionRange) bool {
	return (bool)(C.QItemSelectionRange_intersects(this.h, other.cPointer()))
}

func (this *QItemSelectionRange) Intersected(other *QItemSelectionRange) *QItemSelectionRange {
	_goptr := newQItemSelectionRange(C.QItemSelectionRange_intersected(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemSelectionRange) OperatorEqual(other *QItemSelectionRange) bool {
	return (bool)(C.QItemSelectionRange_operatorEqual(this.h, other.cPointer()))
}

func (this *QItemSelectionRange) OperatorNotEqual(other *QItemSelectionRange) bool {
	return (bool)(C.QItemSelectionRange_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QItemSelectionRange) IsValid() bool {
	return (bool)(C.QItemSelectionRange_isValid(this.h))
}

func (this *QItemSelectionRange) IsEmpty() bool {
	return (bool)(C.QItemSelectionRange_isEmpty(this.h))
}

func (this *QItemSelectionRange) Indexes() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionRange_indexes(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionRange) OperatorAssign(param1 *QItemSelectionRange) {
	C.QItemSelectionRange_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QItemSelectionRange) Delete() {
	C.QItemSelectionRange_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QItemSelectionRange) GoGC() {
	runtime.SetFinalizer(this, func(this *QItemSelectionRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QItemSelectionModel struct {
	h *C.QItemSelectionModel
	*QObject
}

func (this *QItemSelectionModel) cPointer() *C.QItemSelectionModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QItemSelectionModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQItemSelectionModel constructs the type using only CGO pointers.
func newQItemSelectionModel(h *C.QItemSelectionModel) *QItemSelectionModel {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QItemSelectionModel_virtbase(h, &outptr_QObject)

	return &QItemSelectionModel{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQItemSelectionModel constructs the type using only unsafe pointers.
func UnsafeNewQItemSelectionModel(h unsafe.Pointer) *QItemSelectionModel {
	return newQItemSelectionModel((*C.QItemSelectionModel)(h))
}

// NewQItemSelectionModel constructs a new QItemSelectionModel object.
func NewQItemSelectionModel() *QItemSelectionModel {

	return newQItemSelectionModel(C.QItemSelectionModel_new())
}

// NewQItemSelectionModel2 constructs a new QItemSelectionModel object.
func NewQItemSelectionModel2(model *QAbstractItemModel, parent *QObject) *QItemSelectionModel {

	return newQItemSelectionModel(C.QItemSelectionModel_new2(model.cPointer(), parent.cPointer()))
}

// NewQItemSelectionModel3 constructs a new QItemSelectionModel object.
func NewQItemSelectionModel3(model *QAbstractItemModel) *QItemSelectionModel {

	return newQItemSelectionModel(C.QItemSelectionModel_new3(model.cPointer()))
}

func (this *QItemSelectionModel) MetaObject() *QMetaObject {
	return newQMetaObject(C.QItemSelectionModel_metaObject(this.h))
}

func (this *QItemSelectionModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QItemSelectionModel_metacast(this.h, param1_Cstring))
}

func QItemSelectionModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QItemSelectionModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QItemSelectionModel) CurrentIndex() *QModelIndex {
	_goptr := newQModelIndex(C.QItemSelectionModel_currentIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemSelectionModel) IsSelected(index *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_isSelected(this.h, index.cPointer()))
}

func (this *QItemSelectionModel) IsRowSelected(row int) bool {
	return (bool)(C.QItemSelectionModel_isRowSelected(this.h, (C.int)(row)))
}

func (this *QItemSelectionModel) IsColumnSelected(column int) bool {
	return (bool)(C.QItemSelectionModel_isColumnSelected(this.h, (C.int)(column)))
}

func (this *QItemSelectionModel) RowIntersectsSelection(row int) bool {
	return (bool)(C.QItemSelectionModel_rowIntersectsSelection(this.h, (C.int)(row)))
}

func (this *QItemSelectionModel) ColumnIntersectsSelection(column int) bool {
	return (bool)(C.QItemSelectionModel_columnIntersectsSelection(this.h, (C.int)(column)))
}

func (this *QItemSelectionModel) HasSelection() bool {
	return (bool)(C.QItemSelectionModel_hasSelection(this.h))
}

func (this *QItemSelectionModel) SelectedIndexes() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_selectedIndexes(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionModel) SelectedRows() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_selectedRows(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionModel) SelectedColumns() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_selectedColumns(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionModel) Selection() *QItemSelection {
	_goptr := newQItemSelection(C.QItemSelectionModel_selection(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemSelectionModel) Model() *QAbstractItemModel {
	return newQAbstractItemModel(C.QItemSelectionModel_model(this.h))
}

func (this *QItemSelectionModel) Model2() *QAbstractItemModel {
	return newQAbstractItemModel(C.QItemSelectionModel_model2(this.h))
}

func (this *QItemSelectionModel) SetModel(model *QAbstractItemModel) {
	C.QItemSelectionModel_setModel(this.h, model.cPointer())
}

func (this *QItemSelectionModel) SetCurrentIndex(index *QModelIndex, command QItemSelectionModel__SelectionFlag) {
	C.QItemSelectionModel_setCurrentIndex(this.h, index.cPointer(), (C.int)(command))
}

func (this *QItemSelectionModel) Select(index *QModelIndex, command QItemSelectionModel__SelectionFlag) {
	C.QItemSelectionModel_select(this.h, index.cPointer(), (C.int)(command))
}

func (this *QItemSelectionModel) Select2(selection *QItemSelection, command QItemSelectionModel__SelectionFlag) {
	C.QItemSelectionModel_select2(this.h, selection.cPointer(), (C.int)(command))
}

func (this *QItemSelectionModel) Clear() {
	C.QItemSelectionModel_clear(this.h)
}

func (this *QItemSelectionModel) Reset() {
	C.QItemSelectionModel_reset(this.h)
}

func (this *QItemSelectionModel) ClearSelection() {
	C.QItemSelectionModel_clearSelection(this.h)
}

func (this *QItemSelectionModel) ClearCurrentIndex() {
	C.QItemSelectionModel_clearCurrentIndex(this.h)
}

func (this *QItemSelectionModel) SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {
	C.QItemSelectionModel_selectionChanged(this.h, selected.cPointer(), deselected.cPointer())
}
func (this *QItemSelectionModel) OnSelectionChanged(slot func(selected *QItemSelection, deselected *QItemSelection)) {
	C.QItemSelectionModel_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_selectionChanged
func miqt_exec_callback_QItemSelectionModel_selectionChanged(cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc(slotval1, slotval2)
}

func (this *QItemSelectionModel) CurrentChanged(current *QModelIndex, previous *QModelIndex) {
	C.QItemSelectionModel_currentChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QItemSelectionModel) OnCurrentChanged(slot func(current *QModelIndex, previous *QModelIndex)) {
	C.QItemSelectionModel_connect_currentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_currentChanged
func miqt_exec_callback_QItemSelectionModel_currentChanged(cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc(slotval1, slotval2)
}

func (this *QItemSelectionModel) CurrentRowChanged(current *QModelIndex, previous *QModelIndex) {
	C.QItemSelectionModel_currentRowChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QItemSelectionModel) OnCurrentRowChanged(slot func(current *QModelIndex, previous *QModelIndex)) {
	C.QItemSelectionModel_connect_currentRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_currentRowChanged
func miqt_exec_callback_QItemSelectionModel_currentRowChanged(cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc(slotval1, slotval2)
}

func (this *QItemSelectionModel) CurrentColumnChanged(current *QModelIndex, previous *QModelIndex) {
	C.QItemSelectionModel_currentColumnChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QItemSelectionModel) OnCurrentColumnChanged(slot func(current *QModelIndex, previous *QModelIndex)) {
	C.QItemSelectionModel_connect_currentColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_currentColumnChanged
func miqt_exec_callback_QItemSelectionModel_currentColumnChanged(cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc(slotval1, slotval2)
}

func (this *QItemSelectionModel) ModelChanged(model *QAbstractItemModel) {
	C.QItemSelectionModel_modelChanged(this.h, model.cPointer())
}
func (this *QItemSelectionModel) OnModelChanged(slot func(model *QAbstractItemModel)) {
	C.QItemSelectionModel_connect_modelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_modelChanged
func miqt_exec_callback_QItemSelectionModel_modelChanged(cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc(slotval1)
}

func QItemSelectionModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QItemSelectionModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QItemSelectionModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QItemSelectionModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QItemSelectionModel) IsRowSelected2(row int, parent *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_isRowSelected2(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QItemSelectionModel) IsColumnSelected2(column int, parent *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_isColumnSelected2(this.h, (C.int)(column), parent.cPointer()))
}

func (this *QItemSelectionModel) RowIntersectsSelection2(row int, parent *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_rowIntersectsSelection2(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QItemSelectionModel) ColumnIntersectsSelection2(column int, parent *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_columnIntersectsSelection2(this.h, (C.int)(column), parent.cPointer()))
}

func (this *QItemSelectionModel) SelectedRowsWithColumn(column int) []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_selectedRowsWithColumn(this.h, (C.int)(column))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionModel) SelectedColumnsWithRow(row int) []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_selectedColumnsWithRow(this.h, (C.int)(row))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// EmitSelectionChanged can only be called from a QItemSelectionModel that was directly constructed.
func (this *QItemSelectionModel) EmitSelectionChanged(newSelection *QItemSelection, oldSelection *QItemSelection) {

	var _dynamic_cast_ok C.bool = false
	C.QItemSelectionModel_protectedbase_emitSelectionChanged(&_dynamic_cast_ok, unsafe.Pointer(this.h), newSelection.cPointer(), oldSelection.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QItemSelectionModel that was directly constructed.
func (this *QItemSelectionModel) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QItemSelectionModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QItemSelectionModel that was directly constructed.
func (this *QItemSelectionModel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QItemSelectionModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QItemSelectionModel that was directly constructed.
func (this *QItemSelectionModel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QItemSelectionModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QItemSelectionModel that was directly constructed.
func (this *QItemSelectionModel) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QItemSelectionModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QItemSelectionModel) callVirtualBase_SetCurrentIndex(index *QModelIndex, command QItemSelectionModel__SelectionFlag) {

	C.QItemSelectionModel_virtualbase_setCurrentIndex(unsafe.Pointer(this.h), index.cPointer(), (C.int)(command))

}
func (this *QItemSelectionModel) OnSetCurrentIndex(slot func(super func(index *QModelIndex, command QItemSelectionModel__SelectionFlag), index *QModelIndex, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QItemSelectionModel_override_virtual_setCurrentIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_setCurrentIndex
func miqt_exec_callback_QItemSelectionModel_setCurrentIndex(self *C.QItemSelectionModel, cb C.intptr_t, index *C.QModelIndex, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, command QItemSelectionModel__SelectionFlag), index *QModelIndex, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_SetCurrentIndex, slotval1, slotval2)

}

func (this *QItemSelectionModel) callVirtualBase_Select(index *QModelIndex, command QItemSelectionModel__SelectionFlag) {

	C.QItemSelectionModel_virtualbase_select(unsafe.Pointer(this.h), index.cPointer(), (C.int)(command))

}
func (this *QItemSelectionModel) OnSelect(slot func(super func(index *QModelIndex, command QItemSelectionModel__SelectionFlag), index *QModelIndex, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QItemSelectionModel_override_virtual_select(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_select
func miqt_exec_callback_QItemSelectionModel_select(self *C.QItemSelectionModel, cb C.intptr_t, index *C.QModelIndex, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, command QItemSelectionModel__SelectionFlag), index *QModelIndex, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Select, slotval1, slotval2)

}

func (this *QItemSelectionModel) callVirtualBase_Select2(selection *QItemSelection, command QItemSelectionModel__SelectionFlag) {

	C.QItemSelectionModel_virtualbase_select2(unsafe.Pointer(this.h), selection.cPointer(), (C.int)(command))

}
func (this *QItemSelectionModel) OnSelect2(slot func(super func(selection *QItemSelection, command QItemSelectionModel__SelectionFlag), selection *QItemSelection, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QItemSelectionModel_override_virtual_select2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_select2
func miqt_exec_callback_QItemSelectionModel_select2(self *C.QItemSelectionModel, cb C.intptr_t, selection *C.QItemSelection, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection, command QItemSelectionModel__SelectionFlag), selection *QItemSelection, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Select2, slotval1, slotval2)

}

func (this *QItemSelectionModel) callVirtualBase_Clear() {

	C.QItemSelectionModel_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QItemSelectionModel) OnClear(slot func(super func())) {
	ok := C.QItemSelectionModel_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_clear
func miqt_exec_callback_QItemSelectionModel_clear(self *C.QItemSelectionModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Clear)

}

func (this *QItemSelectionModel) callVirtualBase_Reset() {

	C.QItemSelectionModel_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QItemSelectionModel) OnReset(slot func(super func())) {
	ok := C.QItemSelectionModel_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_reset
func miqt_exec_callback_QItemSelectionModel_reset(self *C.QItemSelectionModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Reset)

}

func (this *QItemSelectionModel) callVirtualBase_ClearCurrentIndex() {

	C.QItemSelectionModel_virtualbase_clearCurrentIndex(unsafe.Pointer(this.h))

}
func (this *QItemSelectionModel) OnClearCurrentIndex(slot func(super func())) {
	ok := C.QItemSelectionModel_override_virtual_clearCurrentIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_clearCurrentIndex
func miqt_exec_callback_QItemSelectionModel_clearCurrentIndex(self *C.QItemSelectionModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_ClearCurrentIndex)

}

func (this *QItemSelectionModel) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QItemSelectionModel_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QItemSelectionModel) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QItemSelectionModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_event
func miqt_exec_callback_QItemSelectionModel_event(self *C.QItemSelectionModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QItemSelectionModel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QItemSelectionModel_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QItemSelectionModel) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QItemSelectionModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_eventFilter
func miqt_exec_callback_QItemSelectionModel_eventFilter(self *C.QItemSelectionModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QItemSelectionModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QItemSelectionModel) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QItemSelectionModel_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QItemSelectionModel) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QItemSelectionModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_timerEvent
func miqt_exec_callback_QItemSelectionModel_timerEvent(self *C.QItemSelectionModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QItemSelectionModel) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QItemSelectionModel_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QItemSelectionModel) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QItemSelectionModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_childEvent
func miqt_exec_callback_QItemSelectionModel_childEvent(self *C.QItemSelectionModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QItemSelectionModel) callVirtualBase_CustomEvent(event *QEvent) {

	C.QItemSelectionModel_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QItemSelectionModel) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QItemSelectionModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_customEvent
func miqt_exec_callback_QItemSelectionModel_customEvent(self *C.QItemSelectionModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QItemSelectionModel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QItemSelectionModel_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QItemSelectionModel) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QItemSelectionModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_connectNotify
func miqt_exec_callback_QItemSelectionModel_connectNotify(self *C.QItemSelectionModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QItemSelectionModel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QItemSelectionModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QItemSelectionModel) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QItemSelectionModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemSelectionModel_disconnectNotify
func miqt_exec_callback_QItemSelectionModel_disconnectNotify(self *C.QItemSelectionModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QItemSelectionModel) Delete() {
	C.QItemSelectionModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QItemSelectionModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QItemSelectionModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QItemSelection struct {
	h *C.QItemSelection
	/* Also inherits unprojectable QList<QItemSelectionRange> */

}

func (this *QItemSelection) cPointer() *C.QItemSelection {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QItemSelection) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQItemSelection constructs the type using only CGO pointers.
func newQItemSelection(h *C.QItemSelection) *QItemSelection {
	if h == nil {
		return nil
	}

	return &QItemSelection{h: h}
}

// UnsafeNewQItemSelection constructs the type using only unsafe pointers.
func UnsafeNewQItemSelection(h unsafe.Pointer) *QItemSelection {
	return newQItemSelection((*C.QItemSelection)(h))
}

// NewQItemSelection constructs a new QItemSelection object.
func NewQItemSelection(topLeft *QModelIndex, bottomRight *QModelIndex) *QItemSelection {

	return newQItemSelection(C.QItemSelection_new(topLeft.cPointer(), bottomRight.cPointer()))
}

// NewQItemSelection2 constructs a new QItemSelection object.
func NewQItemSelection2() *QItemSelection {

	return newQItemSelection(C.QItemSelection_new2())
}

// NewQItemSelection3 constructs a new QItemSelection object.
func NewQItemSelection3(param1 *QItemSelection) *QItemSelection {

	return newQItemSelection(C.QItemSelection_new3(param1.cPointer()))
}

func (this *QItemSelection) Select(topLeft *QModelIndex, bottomRight *QModelIndex) {
	C.QItemSelection_select(this.h, topLeft.cPointer(), bottomRight.cPointer())
}

func (this *QItemSelection) Contains(index *QModelIndex) bool {
	return (bool)(C.QItemSelection_contains(this.h, index.cPointer()))
}

func (this *QItemSelection) Indexes() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelection_indexes(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelection) Merge(other *QItemSelection, command QItemSelectionModel__SelectionFlag) {
	C.QItemSelection_merge(this.h, other.cPointer(), (C.int)(command))
}

func QItemSelection_Split(rangeVal *QItemSelectionRange, other *QItemSelectionRange, result *QItemSelection) {
	C.QItemSelection_split(rangeVal.cPointer(), other.cPointer(), result.cPointer())
}

// Delete this object from C++ memory.
func (this *QItemSelection) Delete() {
	C.QItemSelection_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QItemSelection) GoGC() {
	runtime.SetFinalizer(this, func(this *QItemSelection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
