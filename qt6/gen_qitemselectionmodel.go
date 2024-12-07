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
	h          *C.QItemSelectionRange
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QItemSelectionRange{h: (*C.QItemSelectionRange)(h)}
}

// NewQItemSelectionRange constructs a new QItemSelectionRange object.
func NewQItemSelectionRange() *QItemSelectionRange {
	var outptr_QItemSelectionRange *C.QItemSelectionRange = nil

	C.QItemSelectionRange_new(&outptr_QItemSelectionRange)
	ret := newQItemSelectionRange(outptr_QItemSelectionRange)
	ret.isSubclass = true
	return ret
}

// NewQItemSelectionRange2 constructs a new QItemSelectionRange object.
func NewQItemSelectionRange2(topL *QModelIndex, bottomR *QModelIndex) *QItemSelectionRange {
	var outptr_QItemSelectionRange *C.QItemSelectionRange = nil

	C.QItemSelectionRange_new2(topL.cPointer(), bottomR.cPointer(), &outptr_QItemSelectionRange)
	ret := newQItemSelectionRange(outptr_QItemSelectionRange)
	ret.isSubclass = true
	return ret
}

// NewQItemSelectionRange3 constructs a new QItemSelectionRange object.
func NewQItemSelectionRange3(index *QModelIndex) *QItemSelectionRange {
	var outptr_QItemSelectionRange *C.QItemSelectionRange = nil

	C.QItemSelectionRange_new3(index.cPointer(), &outptr_QItemSelectionRange)
	ret := newQItemSelectionRange(outptr_QItemSelectionRange)
	ret.isSubclass = true
	return ret
}

// NewQItemSelectionRange4 constructs a new QItemSelectionRange object.
func NewQItemSelectionRange4(param1 *QItemSelectionRange) *QItemSelectionRange {
	var outptr_QItemSelectionRange *C.QItemSelectionRange = nil

	C.QItemSelectionRange_new4(param1.cPointer(), &outptr_QItemSelectionRange)
	ret := newQItemSelectionRange(outptr_QItemSelectionRange)
	ret.isSubclass = true
	return ret
}

func (this *QItemSelectionRange) Swap(other *QItemSelectionRange) {
	C.QItemSelectionRange_Swap(this.h, other.cPointer())
}

func (this *QItemSelectionRange) Top() int {
	return (int)(C.QItemSelectionRange_Top(this.h))
}

func (this *QItemSelectionRange) Left() int {
	return (int)(C.QItemSelectionRange_Left(this.h))
}

func (this *QItemSelectionRange) Bottom() int {
	return (int)(C.QItemSelectionRange_Bottom(this.h))
}

func (this *QItemSelectionRange) Right() int {
	return (int)(C.QItemSelectionRange_Right(this.h))
}

func (this *QItemSelectionRange) Width() int {
	return (int)(C.QItemSelectionRange_Width(this.h))
}

func (this *QItemSelectionRange) Height() int {
	return (int)(C.QItemSelectionRange_Height(this.h))
}

func (this *QItemSelectionRange) TopLeft() *QPersistentModelIndex {
	return UnsafeNewQPersistentModelIndex(unsafe.Pointer(C.QItemSelectionRange_TopLeft(this.h)))
}

func (this *QItemSelectionRange) BottomRight() *QPersistentModelIndex {
	return UnsafeNewQPersistentModelIndex(unsafe.Pointer(C.QItemSelectionRange_BottomRight(this.h)))
}

func (this *QItemSelectionRange) Parent() *QModelIndex {
	_ret := C.QItemSelectionRange_Parent(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemSelectionRange) Model() *QAbstractItemModel {
	return UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QItemSelectionRange_Model(this.h)), nil)
}

func (this *QItemSelectionRange) Contains(index *QModelIndex) bool {
	return (bool)(C.QItemSelectionRange_Contains(this.h, index.cPointer()))
}

func (this *QItemSelectionRange) Contains2(row int, column int, parentIndex *QModelIndex) bool {
	return (bool)(C.QItemSelectionRange_Contains2(this.h, (C.int)(row), (C.int)(column), parentIndex.cPointer()))
}

func (this *QItemSelectionRange) Intersects(other *QItemSelectionRange) bool {
	return (bool)(C.QItemSelectionRange_Intersects(this.h, other.cPointer()))
}

func (this *QItemSelectionRange) Intersected(other *QItemSelectionRange) *QItemSelectionRange {
	_ret := C.QItemSelectionRange_Intersected(this.h, other.cPointer())
	_goptr := newQItemSelectionRange(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemSelectionRange) OperatorEqual(other *QItemSelectionRange) bool {
	return (bool)(C.QItemSelectionRange_OperatorEqual(this.h, other.cPointer()))
}

func (this *QItemSelectionRange) OperatorNotEqual(other *QItemSelectionRange) bool {
	return (bool)(C.QItemSelectionRange_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QItemSelectionRange) IsValid() bool {
	return (bool)(C.QItemSelectionRange_IsValid(this.h))
}

func (this *QItemSelectionRange) IsEmpty() bool {
	return (bool)(C.QItemSelectionRange_IsEmpty(this.h))
}

func (this *QItemSelectionRange) Indexes() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionRange_Indexes(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QItemSelectionRange) Delete() {
	C.QItemSelectionRange_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QItemSelectionModel
	isSubclass bool
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
func newQItemSelectionModel(h *C.QItemSelectionModel, h_QObject *C.QObject) *QItemSelectionModel {
	if h == nil {
		return nil
	}
	return &QItemSelectionModel{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQItemSelectionModel constructs the type using only unsafe pointers.
func UnsafeNewQItemSelectionModel(h unsafe.Pointer, h_QObject unsafe.Pointer) *QItemSelectionModel {
	if h == nil {
		return nil
	}

	return &QItemSelectionModel{h: (*C.QItemSelectionModel)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQItemSelectionModel constructs a new QItemSelectionModel object.
func NewQItemSelectionModel() *QItemSelectionModel {
	var outptr_QItemSelectionModel *C.QItemSelectionModel = nil
	var outptr_QObject *C.QObject = nil

	C.QItemSelectionModel_new(&outptr_QItemSelectionModel, &outptr_QObject)
	ret := newQItemSelectionModel(outptr_QItemSelectionModel, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQItemSelectionModel2 constructs a new QItemSelectionModel object.
func NewQItemSelectionModel2(model *QAbstractItemModel, parent *QObject) *QItemSelectionModel {
	var outptr_QItemSelectionModel *C.QItemSelectionModel = nil
	var outptr_QObject *C.QObject = nil

	C.QItemSelectionModel_new2(model.cPointer(), parent.cPointer(), &outptr_QItemSelectionModel, &outptr_QObject)
	ret := newQItemSelectionModel(outptr_QItemSelectionModel, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQItemSelectionModel3 constructs a new QItemSelectionModel object.
func NewQItemSelectionModel3(model *QAbstractItemModel) *QItemSelectionModel {
	var outptr_QItemSelectionModel *C.QItemSelectionModel = nil
	var outptr_QObject *C.QObject = nil

	C.QItemSelectionModel_new3(model.cPointer(), &outptr_QItemSelectionModel, &outptr_QObject)
	ret := newQItemSelectionModel(outptr_QItemSelectionModel, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QItemSelectionModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QItemSelectionModel_MetaObject(this.h)))
}

func (this *QItemSelectionModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QItemSelectionModel_Metacast(this.h, param1_Cstring))
}

func QItemSelectionModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QItemSelectionModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QItemSelectionModel) CurrentIndex() *QModelIndex {
	_ret := C.QItemSelectionModel_CurrentIndex(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemSelectionModel) IsSelected(index *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_IsSelected(this.h, index.cPointer()))
}

func (this *QItemSelectionModel) IsRowSelected(row int) bool {
	return (bool)(C.QItemSelectionModel_IsRowSelected(this.h, (C.int)(row)))
}

func (this *QItemSelectionModel) IsColumnSelected(column int) bool {
	return (bool)(C.QItemSelectionModel_IsColumnSelected(this.h, (C.int)(column)))
}

func (this *QItemSelectionModel) RowIntersectsSelection(row int) bool {
	return (bool)(C.QItemSelectionModel_RowIntersectsSelection(this.h, (C.int)(row)))
}

func (this *QItemSelectionModel) ColumnIntersectsSelection(column int) bool {
	return (bool)(C.QItemSelectionModel_ColumnIntersectsSelection(this.h, (C.int)(column)))
}

func (this *QItemSelectionModel) HasSelection() bool {
	return (bool)(C.QItemSelectionModel_HasSelection(this.h))
}

func (this *QItemSelectionModel) SelectedIndexes() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_SelectedIndexes(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionModel) SelectedRows() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_SelectedRows(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionModel) SelectedColumns() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_SelectedColumns(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionModel) Selection() *QItemSelection {
	_ret := C.QItemSelectionModel_Selection(this.h)
	_goptr := newQItemSelection(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemSelectionModel) Model() *QAbstractItemModel {
	return UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QItemSelectionModel_Model(this.h)), nil)
}

func (this *QItemSelectionModel) Model2() *QAbstractItemModel {
	return UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QItemSelectionModel_Model2(this.h)), nil)
}

func (this *QItemSelectionModel) SetModel(model *QAbstractItemModel) {
	C.QItemSelectionModel_SetModel(this.h, model.cPointer())
}

func (this *QItemSelectionModel) SetCurrentIndex(index *QModelIndex, command QItemSelectionModel__SelectionFlag) {
	C.QItemSelectionModel_SetCurrentIndex(this.h, index.cPointer(), (C.int)(command))
}

func (this *QItemSelectionModel) Select(index *QModelIndex, command QItemSelectionModel__SelectionFlag) {
	C.QItemSelectionModel_Select(this.h, index.cPointer(), (C.int)(command))
}

func (this *QItemSelectionModel) Select2(selection *QItemSelection, command QItemSelectionModel__SelectionFlag) {
	C.QItemSelectionModel_Select2(this.h, selection.cPointer(), (C.int)(command))
}

func (this *QItemSelectionModel) Clear() {
	C.QItemSelectionModel_Clear(this.h)
}

func (this *QItemSelectionModel) Reset() {
	C.QItemSelectionModel_Reset(this.h)
}

func (this *QItemSelectionModel) ClearSelection() {
	C.QItemSelectionModel_ClearSelection(this.h)
}

func (this *QItemSelectionModel) ClearCurrentIndex() {
	C.QItemSelectionModel_ClearCurrentIndex(this.h)
}

func (this *QItemSelectionModel) SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {
	C.QItemSelectionModel_SelectionChanged(this.h, selected.cPointer(), deselected.cPointer())
}
func (this *QItemSelectionModel) OnSelectionChanged(slot func(selected *QItemSelection, deselected *QItemSelection)) {
	C.QItemSelectionModel_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_SelectionChanged
func miqt_exec_callback_QItemSelectionModel_SelectionChanged(cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(selected))
	slotval2 := UnsafeNewQItemSelection(unsafe.Pointer(deselected))

	gofunc(slotval1, slotval2)
}

func (this *QItemSelectionModel) CurrentChanged(current *QModelIndex, previous *QModelIndex) {
	C.QItemSelectionModel_CurrentChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QItemSelectionModel) OnCurrentChanged(slot func(current *QModelIndex, previous *QModelIndex)) {
	C.QItemSelectionModel_connect_CurrentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_CurrentChanged
func miqt_exec_callback_QItemSelectionModel_CurrentChanged(cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(current))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(previous))

	gofunc(slotval1, slotval2)
}

func (this *QItemSelectionModel) CurrentRowChanged(current *QModelIndex, previous *QModelIndex) {
	C.QItemSelectionModel_CurrentRowChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QItemSelectionModel) OnCurrentRowChanged(slot func(current *QModelIndex, previous *QModelIndex)) {
	C.QItemSelectionModel_connect_CurrentRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_CurrentRowChanged
func miqt_exec_callback_QItemSelectionModel_CurrentRowChanged(cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(current))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(previous))

	gofunc(slotval1, slotval2)
}

func (this *QItemSelectionModel) CurrentColumnChanged(current *QModelIndex, previous *QModelIndex) {
	C.QItemSelectionModel_CurrentColumnChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QItemSelectionModel) OnCurrentColumnChanged(slot func(current *QModelIndex, previous *QModelIndex)) {
	C.QItemSelectionModel_connect_CurrentColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_CurrentColumnChanged
func miqt_exec_callback_QItemSelectionModel_CurrentColumnChanged(cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(current))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(previous))

	gofunc(slotval1, slotval2)
}

func (this *QItemSelectionModel) ModelChanged(model *QAbstractItemModel) {
	C.QItemSelectionModel_ModelChanged(this.h, model.cPointer())
}
func (this *QItemSelectionModel) OnModelChanged(slot func(model *QAbstractItemModel)) {
	C.QItemSelectionModel_connect_ModelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_ModelChanged
func miqt_exec_callback_QItemSelectionModel_ModelChanged(cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractItemModel(unsafe.Pointer(model), nil)

	gofunc(slotval1)
}

func QItemSelectionModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QItemSelectionModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QItemSelectionModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QItemSelectionModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QItemSelectionModel) IsRowSelected2(row int, parent *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_IsRowSelected2(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QItemSelectionModel) IsColumnSelected2(column int, parent *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_IsColumnSelected2(this.h, (C.int)(column), parent.cPointer()))
}

func (this *QItemSelectionModel) RowIntersectsSelection2(row int, parent *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_RowIntersectsSelection2(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QItemSelectionModel) ColumnIntersectsSelection2(column int, parent *QModelIndex) bool {
	return (bool)(C.QItemSelectionModel_ColumnIntersectsSelection2(this.h, (C.int)(column), parent.cPointer()))
}

func (this *QItemSelectionModel) SelectedRows1(column int) []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_SelectedRows1(this.h, (C.int)(column))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionModel) SelectedColumns1(row int) []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelectionModel_SelectedColumns1(this.h, (C.int)(row))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelectionModel) callVirtualBase_SetCurrentIndex(index *QModelIndex, command QItemSelectionModel__SelectionFlag) {

	C.QItemSelectionModel_virtualbase_SetCurrentIndex(unsafe.Pointer(this.h), index.cPointer(), (C.int)(command))

}
func (this *QItemSelectionModel) OnSetCurrentIndex(slot func(super func(index *QModelIndex, command QItemSelectionModel__SelectionFlag), index *QModelIndex, command QItemSelectionModel__SelectionFlag)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_SetCurrentIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_SetCurrentIndex
func miqt_exec_callback_QItemSelectionModel_SetCurrentIndex(self *C.QItemSelectionModel, cb C.intptr_t, index *C.QModelIndex, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, command QItemSelectionModel__SelectionFlag), index *QModelIndex, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_SetCurrentIndex, slotval1, slotval2)

}

func (this *QItemSelectionModel) callVirtualBase_Select(index *QModelIndex, command QItemSelectionModel__SelectionFlag) {

	C.QItemSelectionModel_virtualbase_Select(unsafe.Pointer(this.h), index.cPointer(), (C.int)(command))

}
func (this *QItemSelectionModel) OnSelect(slot func(super func(index *QModelIndex, command QItemSelectionModel__SelectionFlag), index *QModelIndex, command QItemSelectionModel__SelectionFlag)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_Select(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_Select
func miqt_exec_callback_QItemSelectionModel_Select(self *C.QItemSelectionModel, cb C.intptr_t, index *C.QModelIndex, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, command QItemSelectionModel__SelectionFlag), index *QModelIndex, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Select, slotval1, slotval2)

}

func (this *QItemSelectionModel) callVirtualBase_Select2(selection *QItemSelection, command QItemSelectionModel__SelectionFlag) {

	C.QItemSelectionModel_virtualbase_Select2(unsafe.Pointer(this.h), selection.cPointer(), (C.int)(command))

}
func (this *QItemSelectionModel) OnSelect2(slot func(super func(selection *QItemSelection, command QItemSelectionModel__SelectionFlag), selection *QItemSelection, command QItemSelectionModel__SelectionFlag)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_Select2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_Select2
func miqt_exec_callback_QItemSelectionModel_Select2(self *C.QItemSelectionModel, cb C.intptr_t, selection *C.QItemSelection, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection, command QItemSelectionModel__SelectionFlag), selection *QItemSelection, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(selection))
	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Select2, slotval1, slotval2)

}

func (this *QItemSelectionModel) callVirtualBase_Clear() {

	C.QItemSelectionModel_virtualbase_Clear(unsafe.Pointer(this.h))

}
func (this *QItemSelectionModel) OnClear(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_Clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_Clear
func miqt_exec_callback_QItemSelectionModel_Clear(self *C.QItemSelectionModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Clear)

}

func (this *QItemSelectionModel) callVirtualBase_Reset() {

	C.QItemSelectionModel_virtualbase_Reset(unsafe.Pointer(this.h))

}
func (this *QItemSelectionModel) OnReset(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_Reset
func miqt_exec_callback_QItemSelectionModel_Reset(self *C.QItemSelectionModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Reset)

}

func (this *QItemSelectionModel) callVirtualBase_ClearCurrentIndex() {

	C.QItemSelectionModel_virtualbase_ClearCurrentIndex(unsafe.Pointer(this.h))

}
func (this *QItemSelectionModel) OnClearCurrentIndex(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_ClearCurrentIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_ClearCurrentIndex
func miqt_exec_callback_QItemSelectionModel_ClearCurrentIndex(self *C.QItemSelectionModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_ClearCurrentIndex)

}

func (this *QItemSelectionModel) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QItemSelectionModel_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QItemSelectionModel) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_Event
func miqt_exec_callback_QItemSelectionModel_Event(self *C.QItemSelectionModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QItemSelectionModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QItemSelectionModel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QItemSelectionModel_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QItemSelectionModel) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_EventFilter
func miqt_exec_callback_QItemSelectionModel_EventFilter(self *C.QItemSelectionModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QItemSelectionModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QItemSelectionModel) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QItemSelectionModel_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QItemSelectionModel) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_TimerEvent
func miqt_exec_callback_QItemSelectionModel_TimerEvent(self *C.QItemSelectionModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QItemSelectionModel) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QItemSelectionModel_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QItemSelectionModel) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_ChildEvent
func miqt_exec_callback_QItemSelectionModel_ChildEvent(self *C.QItemSelectionModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QItemSelectionModel) callVirtualBase_CustomEvent(event *QEvent) {

	C.QItemSelectionModel_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QItemSelectionModel) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_CustomEvent
func miqt_exec_callback_QItemSelectionModel_CustomEvent(self *C.QItemSelectionModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QItemSelectionModel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QItemSelectionModel_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QItemSelectionModel) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_ConnectNotify
func miqt_exec_callback_QItemSelectionModel_ConnectNotify(self *C.QItemSelectionModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QItemSelectionModel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QItemSelectionModel_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QItemSelectionModel) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QItemSelectionModel_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QItemSelectionModel_DisconnectNotify
func miqt_exec_callback_QItemSelectionModel_DisconnectNotify(self *C.QItemSelectionModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QItemSelectionModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QItemSelectionModel) Delete() {
	C.QItemSelectionModel_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QItemSelection
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QItemSelection{h: (*C.QItemSelection)(h)}
}

// NewQItemSelection constructs a new QItemSelection object.
func NewQItemSelection(topLeft *QModelIndex, bottomRight *QModelIndex) *QItemSelection {
	var outptr_QItemSelection *C.QItemSelection = nil

	C.QItemSelection_new(topLeft.cPointer(), bottomRight.cPointer(), &outptr_QItemSelection)
	ret := newQItemSelection(outptr_QItemSelection)
	ret.isSubclass = true
	return ret
}

// NewQItemSelection2 constructs a new QItemSelection object.
func NewQItemSelection2() *QItemSelection {
	var outptr_QItemSelection *C.QItemSelection = nil

	C.QItemSelection_new2(&outptr_QItemSelection)
	ret := newQItemSelection(outptr_QItemSelection)
	ret.isSubclass = true
	return ret
}

// NewQItemSelection3 constructs a new QItemSelection object.
func NewQItemSelection3(param1 *QItemSelection) *QItemSelection {
	var outptr_QItemSelection *C.QItemSelection = nil

	C.QItemSelection_new3(param1.cPointer(), &outptr_QItemSelection)
	ret := newQItemSelection(outptr_QItemSelection)
	ret.isSubclass = true
	return ret
}

func (this *QItemSelection) Select(topLeft *QModelIndex, bottomRight *QModelIndex) {
	C.QItemSelection_Select(this.h, topLeft.cPointer(), bottomRight.cPointer())
}

func (this *QItemSelection) Contains(index *QModelIndex) bool {
	return (bool)(C.QItemSelection_Contains(this.h, index.cPointer()))
}

func (this *QItemSelection) Indexes() []QModelIndex {
	var _ma C.struct_miqt_array = C.QItemSelection_Indexes(this.h)
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QItemSelection) Merge(other *QItemSelection, command QItemSelectionModel__SelectionFlag) {
	C.QItemSelection_Merge(this.h, other.cPointer(), (C.int)(command))
}

func QItemSelection_Split(rangeVal *QItemSelectionRange, other *QItemSelectionRange, result *QItemSelection) {
	C.QItemSelection_Split(rangeVal.cPointer(), other.cPointer(), result.cPointer())
}

// Delete this object from C++ memory.
func (this *QItemSelection) Delete() {
	C.QItemSelection_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QItemSelection) GoGC() {
	runtime.SetFinalizer(this, func(this *QItemSelection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
