package qt

/*

#include "gen_qabstractitemmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractItemModel__LayoutChangeHint int

const (
	QAbstractItemModel__LayoutChangeHint__NoLayoutChangeHint QAbstractItemModel__LayoutChangeHint = 0
	QAbstractItemModel__LayoutChangeHint__VerticalSortHint   QAbstractItemModel__LayoutChangeHint = 1
	QAbstractItemModel__LayoutChangeHint__HorizontalSortHint QAbstractItemModel__LayoutChangeHint = 2
)

type QAbstractItemModel__CheckIndexOption int

const (
	QAbstractItemModel__CheckIndexOption__NoOption        QAbstractItemModel__CheckIndexOption = 0
	QAbstractItemModel__CheckIndexOption__IndexIsValid    QAbstractItemModel__CheckIndexOption = 1
	QAbstractItemModel__CheckIndexOption__DoNotUseParent  QAbstractItemModel__CheckIndexOption = 2
	QAbstractItemModel__CheckIndexOption__ParentIsInvalid QAbstractItemModel__CheckIndexOption = 4
)

type QModelIndex struct {
	h *C.QModelIndex
}

func (this *QModelIndex) cPointer() *C.QModelIndex {
	if this == nil {
		return nil
	}
	return this.h
}

func newQModelIndex(h *C.QModelIndex) *QModelIndex {
	if h == nil {
		return nil
	}
	return &QModelIndex{h: h}
}

func newQModelIndex_U(h unsafe.Pointer) *QModelIndex {
	return newQModelIndex((*C.QModelIndex)(h))
}

// NewQModelIndex constructs a new QModelIndex object.
func NewQModelIndex() *QModelIndex {
	ret := C.QModelIndex_new()
	return newQModelIndex(ret)
}

// NewQModelIndex2 constructs a new QModelIndex object.
func NewQModelIndex2(param1 *QModelIndex) *QModelIndex {
	ret := C.QModelIndex_new2(param1.cPointer())
	return newQModelIndex(ret)
}

func (this *QModelIndex) Row() int {
	_ret := C.QModelIndex_Row(this.h)
	return (int)(_ret)
}

func (this *QModelIndex) Column() int {
	_ret := C.QModelIndex_Column(this.h)
	return (int)(_ret)
}

func (this *QModelIndex) InternalId() uintptr {
	_ret := C.QModelIndex_InternalId(this.h)
	return (uintptr)(_ret)
}

func (this *QModelIndex) Parent() *QModelIndex {
	_ret := C.QModelIndex_Parent(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QModelIndex) Sibling(row int, column int) *QModelIndex {
	_ret := C.QModelIndex_Sibling(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QModelIndex) SiblingAtColumn(column int) *QModelIndex {
	_ret := C.QModelIndex_SiblingAtColumn(this.h, (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QModelIndex) SiblingAtRow(row int) *QModelIndex {
	_ret := C.QModelIndex_SiblingAtRow(this.h, (C.int)(row))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QModelIndex) Child(row int, column int) *QModelIndex {
	_ret := C.QModelIndex_Child(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QModelIndex) Data() *QVariant {
	_ret := C.QModelIndex_Data(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QModelIndex) Flags() int {
	_ret := C.QModelIndex_Flags(this.h)
	return (int)(_ret)
}

func (this *QModelIndex) Model() *QAbstractItemModel {
	_ret := C.QModelIndex_Model(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(_ret))
}

func (this *QModelIndex) IsValid() bool {
	_ret := C.QModelIndex_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QModelIndex) OperatorEqual(other *QModelIndex) bool {
	_ret := C.QModelIndex_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QModelIndex) OperatorNotEqual(other *QModelIndex) bool {
	_ret := C.QModelIndex_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QModelIndex) OperatorLesser(other *QModelIndex) bool {
	_ret := C.QModelIndex_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QModelIndex) Data1(role int) *QVariant {
	_ret := C.QModelIndex_Data1(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QModelIndex) Delete() {
	C.QModelIndex_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QModelIndex) GoGC() {
	runtime.SetFinalizer(this, func(this *QModelIndex) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPersistentModelIndex struct {
	h *C.QPersistentModelIndex
}

func (this *QPersistentModelIndex) cPointer() *C.QPersistentModelIndex {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPersistentModelIndex(h *C.QPersistentModelIndex) *QPersistentModelIndex {
	if h == nil {
		return nil
	}
	return &QPersistentModelIndex{h: h}
}

func newQPersistentModelIndex_U(h unsafe.Pointer) *QPersistentModelIndex {
	return newQPersistentModelIndex((*C.QPersistentModelIndex)(h))
}

// NewQPersistentModelIndex constructs a new QPersistentModelIndex object.
func NewQPersistentModelIndex() *QPersistentModelIndex {
	ret := C.QPersistentModelIndex_new()
	return newQPersistentModelIndex(ret)
}

// NewQPersistentModelIndex2 constructs a new QPersistentModelIndex object.
func NewQPersistentModelIndex2(index *QModelIndex) *QPersistentModelIndex {
	ret := C.QPersistentModelIndex_new2(index.cPointer())
	return newQPersistentModelIndex(ret)
}

// NewQPersistentModelIndex3 constructs a new QPersistentModelIndex object.
func NewQPersistentModelIndex3(other *QPersistentModelIndex) *QPersistentModelIndex {
	ret := C.QPersistentModelIndex_new3(other.cPointer())
	return newQPersistentModelIndex(ret)
}

func (this *QPersistentModelIndex) OperatorLesser(other *QPersistentModelIndex) bool {
	_ret := C.QPersistentModelIndex_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QPersistentModelIndex) OperatorEqual(other *QPersistentModelIndex) bool {
	_ret := C.QPersistentModelIndex_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QPersistentModelIndex) OperatorNotEqual(other *QPersistentModelIndex) bool {
	_ret := C.QPersistentModelIndex_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QPersistentModelIndex) OperatorAssign(other *QPersistentModelIndex) {
	C.QPersistentModelIndex_OperatorAssign(this.h, other.cPointer())
}

func (this *QPersistentModelIndex) Swap(other *QPersistentModelIndex) {
	C.QPersistentModelIndex_Swap(this.h, other.cPointer())
}

func (this *QPersistentModelIndex) OperatorEqualWithOther(other *QModelIndex) bool {
	_ret := C.QPersistentModelIndex_OperatorEqualWithOther(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QPersistentModelIndex) OperatorNotEqualWithOther(other *QModelIndex) bool {
	_ret := C.QPersistentModelIndex_OperatorNotEqualWithOther(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QPersistentModelIndex) OperatorAssignWithOther(other *QModelIndex) {
	C.QPersistentModelIndex_OperatorAssignWithOther(this.h, other.cPointer())
}

func (this *QPersistentModelIndex) Row() int {
	_ret := C.QPersistentModelIndex_Row(this.h)
	return (int)(_ret)
}

func (this *QPersistentModelIndex) Column() int {
	_ret := C.QPersistentModelIndex_Column(this.h)
	return (int)(_ret)
}

func (this *QPersistentModelIndex) InternalId() uintptr {
	_ret := C.QPersistentModelIndex_InternalId(this.h)
	return (uintptr)(_ret)
}

func (this *QPersistentModelIndex) Parent() *QModelIndex {
	_ret := C.QPersistentModelIndex_Parent(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPersistentModelIndex) Sibling(row int, column int) *QModelIndex {
	_ret := C.QPersistentModelIndex_Sibling(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPersistentModelIndex) Child(row int, column int) *QModelIndex {
	_ret := C.QPersistentModelIndex_Child(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPersistentModelIndex) Data() *QVariant {
	_ret := C.QPersistentModelIndex_Data(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPersistentModelIndex) Flags() int {
	_ret := C.QPersistentModelIndex_Flags(this.h)
	return (int)(_ret)
}

func (this *QPersistentModelIndex) Model() *QAbstractItemModel {
	_ret := C.QPersistentModelIndex_Model(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(_ret))
}

func (this *QPersistentModelIndex) IsValid() bool {
	_ret := C.QPersistentModelIndex_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QPersistentModelIndex) Data1(role int) *QVariant {
	_ret := C.QPersistentModelIndex_Data1(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPersistentModelIndex) Delete() {
	C.QPersistentModelIndex_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPersistentModelIndex) GoGC() {
	runtime.SetFinalizer(this, func(this *QPersistentModelIndex) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractItemModel struct {
	h *C.QAbstractItemModel
	*QObject
}

func (this *QAbstractItemModel) cPointer() *C.QAbstractItemModel {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractItemModel(h *C.QAbstractItemModel) *QAbstractItemModel {
	if h == nil {
		return nil
	}
	return &QAbstractItemModel{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAbstractItemModel_U(h unsafe.Pointer) *QAbstractItemModel {
	return newQAbstractItemModel((*C.QAbstractItemModel)(h))
}

func (this *QAbstractItemModel) MetaObject() *QMetaObject {
	_ret := C.QAbstractItemModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QAbstractItemModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemModel_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractItemModel) HasIndex(row int, column int) bool {
	_ret := C.QAbstractItemModel_HasIndex(this.h, (C.int)(row), (C.int)(column))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) Index(row int, column int) *QModelIndex {
	_ret := C.QAbstractItemModel_Index(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) Parent(child *QModelIndex) *QModelIndex {
	_ret := C.QAbstractItemModel_Parent(this.h, child.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_ret := C.QAbstractItemModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) RowCount() int {
	_ret := C.QAbstractItemModel_RowCount(this.h)
	return (int)(_ret)
}

func (this *QAbstractItemModel) ColumnCount() int {
	_ret := C.QAbstractItemModel_ColumnCount(this.h)
	return (int)(_ret)
}

func (this *QAbstractItemModel) HasChildren() bool {
	_ret := C.QAbstractItemModel_HasChildren(this.h)
	return (bool)(_ret)
}

func (this *QAbstractItemModel) Data(index *QModelIndex) *QVariant {
	_ret := C.QAbstractItemModel_Data(this.h, index.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) SetData(index *QModelIndex, value *QVariant) bool {
	_ret := C.QAbstractItemModel_SetData(this.h, index.cPointer(), value.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) HeaderData(section int, orientation Orientation) *QVariant {
	_ret := C.QAbstractItemModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) SetHeaderData(section int, orientation Orientation, value *QVariant) bool {
	_ret := C.QAbstractItemModel_SetHeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) MimeTypes() []string {
	var _ma *C.struct_miqt_array = C.QAbstractItemModel_MimeTypes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QAbstractItemModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := &C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(indexes_ma))
	_ret := C.QAbstractItemModel_MimeData(this.h, indexes_ma)
	return newQMimeData_U(unsafe.Pointer(_ret))
}

func (this *QAbstractItemModel) CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_CanDropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) SupportedDropActions() int {
	_ret := C.QAbstractItemModel_SupportedDropActions(this.h)
	return (int)(_ret)
}

func (this *QAbstractItemModel) SupportedDragActions() int {
	_ret := C.QAbstractItemModel_SupportedDragActions(this.h)
	return (int)(_ret)
}

func (this *QAbstractItemModel) InsertRows(row int, count int) bool {
	_ret := C.QAbstractItemModel_InsertRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) InsertColumns(column int, count int) bool {
	_ret := C.QAbstractItemModel_InsertColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) RemoveRows(row int, count int) bool {
	_ret := C.QAbstractItemModel_RemoveRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) RemoveColumns(column int, count int) bool {
	_ret := C.QAbstractItemModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	_ret := C.QAbstractItemModel_MoveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	_ret := C.QAbstractItemModel_MoveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) InsertRow(row int) bool {
	_ret := C.QAbstractItemModel_InsertRow(this.h, (C.int)(row))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) InsertColumn(column int) bool {
	_ret := C.QAbstractItemModel_InsertColumn(this.h, (C.int)(column))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) RemoveRow(row int) bool {
	_ret := C.QAbstractItemModel_RemoveRow(this.h, (C.int)(row))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) RemoveColumn(column int) bool {
	_ret := C.QAbstractItemModel_RemoveColumn(this.h, (C.int)(column))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) MoveRow(sourceParent *QModelIndex, sourceRow int, destinationParent *QModelIndex, destinationChild int) bool {
	_ret := C.QAbstractItemModel_MoveRow(this.h, sourceParent.cPointer(), (C.int)(sourceRow), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) MoveColumn(sourceParent *QModelIndex, sourceColumn int, destinationParent *QModelIndex, destinationChild int) bool {
	_ret := C.QAbstractItemModel_MoveColumn(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) FetchMore(parent *QModelIndex) {
	C.QAbstractItemModel_FetchMore(this.h, parent.cPointer())
}

func (this *QAbstractItemModel) CanFetchMore(parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_CanFetchMore(this.h, parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) Flags(index *QModelIndex) int {
	_ret := C.QAbstractItemModel_Flags(this.h, index.cPointer())
	return (int)(_ret)
}

func (this *QAbstractItemModel) Sort(column int) {
	C.QAbstractItemModel_Sort(this.h, (C.int)(column))
}

func (this *QAbstractItemModel) Buddy(index *QModelIndex) *QModelIndex {
	_ret := C.QAbstractItemModel_Buddy(this.h, index.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) Match(start *QModelIndex, role int, value *QVariant) []QModelIndex {
	var _ma *C.struct_miqt_array = C.QAbstractItemModel_Match(this.h, start.cPointer(), (C.int)(role), value.cPointer())
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QAbstractItemModel) Span(index *QModelIndex) *QSize {
	_ret := C.QAbstractItemModel_Span(this.h, index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) CheckIndex(index *QModelIndex) bool {
	_ret := C.QAbstractItemModel_CheckIndex(this.h, index.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex) {
	C.QAbstractItemModel_DataChanged(this.h, topLeft.cPointer(), bottomRight.cPointer())
}
func (this *QAbstractItemModel) OnDataChanged(slot func(topLeft *QModelIndex, bottomRight *QModelIndex)) {
	C.QAbstractItemModel_connect_DataChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemModel_DataChanged
func miqt_exec_callback_QAbstractItemModel_DataChanged(cb *C.void, topLeft *C.QModelIndex, bottomRight *C.QModelIndex) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(topLeft *QModelIndex, bottomRight *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	topLeft_ret := topLeft
	slotval1 := newQModelIndex_U(unsafe.Pointer(topLeft_ret))
	bottomRight_ret := bottomRight
	slotval2 := newQModelIndex_U(unsafe.Pointer(bottomRight_ret))

	gofunc(slotval1, slotval2)
}

func (this *QAbstractItemModel) HeaderDataChanged(orientation Orientation, first int, last int) {
	C.QAbstractItemModel_HeaderDataChanged(this.h, (C.uintptr_t)(orientation), (C.int)(first), (C.int)(last))
}
func (this *QAbstractItemModel) OnHeaderDataChanged(slot func(orientation Orientation, first int, last int)) {
	C.QAbstractItemModel_connect_HeaderDataChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemModel_HeaderDataChanged
func miqt_exec_callback_QAbstractItemModel_HeaderDataChanged(cb *C.void, orientation C.uintptr_t, first C.int, last C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(orientation Orientation, first int, last int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	orientation_ret := orientation
	slotval1 := (Orientation)(orientation_ret)

	first_ret := first
	slotval2 := (int)(first_ret)

	last_ret := last
	slotval3 := (int)(last_ret)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QAbstractItemModel) LayoutChanged() {
	C.QAbstractItemModel_LayoutChanged(this.h)
}
func (this *QAbstractItemModel) OnLayoutChanged(slot func()) {
	C.QAbstractItemModel_connect_LayoutChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutChanged
func miqt_exec_callback_QAbstractItemModel_LayoutChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractItemModel) LayoutAboutToBeChanged() {
	C.QAbstractItemModel_LayoutAboutToBeChanged(this.h)
}
func (this *QAbstractItemModel) OnLayoutAboutToBeChanged(slot func()) {
	C.QAbstractItemModel_connect_LayoutAboutToBeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged
func miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractItemModel) Submit() bool {
	_ret := C.QAbstractItemModel_Submit(this.h)
	return (bool)(_ret)
}

func (this *QAbstractItemModel) Revert() {
	C.QAbstractItemModel_Revert(this.h)
}

func QAbstractItemModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractItemModel) HasIndex3(row int, column int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_HasIndex3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QAbstractItemModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) RowCount1(parent *QModelIndex) int {
	_ret := C.QAbstractItemModel_RowCount1(this.h, parent.cPointer())
	return (int)(_ret)
}

func (this *QAbstractItemModel) ColumnCount1(parent *QModelIndex) int {
	_ret := C.QAbstractItemModel_ColumnCount1(this.h, parent.cPointer())
	return (int)(_ret)
}

func (this *QAbstractItemModel) HasChildren1(parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_HasChildren1(this.h, parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) Data2(index *QModelIndex, role int) *QVariant {
	_ret := C.QAbstractItemModel_Data2(this.h, index.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	_ret := C.QAbstractItemModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QAbstractItemModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) SetHeaderData4(section int, orientation Orientation, value *QVariant, role int) bool {
	_ret := C.QAbstractItemModel_SetHeaderData4(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer(), (C.int)(role))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) InsertColumns3(column int, count int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_InsertColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) RemoveColumns3(column int, count int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_RemoveColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) InsertRow2(row int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_InsertRow2(this.h, (C.int)(row), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) InsertColumn2(column int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_InsertColumn2(this.h, (C.int)(column), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) RemoveRow2(row int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_RemoveRow2(this.h, (C.int)(row), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) RemoveColumn2(column int, parent *QModelIndex) bool {
	_ret := C.QAbstractItemModel_RemoveColumn2(this.h, (C.int)(column), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemModel) Sort2(column int, order SortOrder) {
	C.QAbstractItemModel_Sort2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QAbstractItemModel) Match4(start *QModelIndex, role int, value *QVariant, hits int) []QModelIndex {
	var _ma *C.struct_miqt_array = C.QAbstractItemModel_Match4(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QAbstractItemModel) Match5(start *QModelIndex, role int, value *QVariant, hits int, flags int) []QModelIndex {
	var _ma *C.struct_miqt_array = C.QAbstractItemModel_Match5(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QAbstractItemModel) CheckIndex2(index *QModelIndex, options int) bool {
	_ret := C.QAbstractItemModel_CheckIndex2(this.h, index.cPointer(), (C.int)(options))
	return (bool)(_ret)
}

func (this *QAbstractItemModel) DataChanged3(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	// For the C ABI, malloc a C array of raw pointers
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := &C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(roles_ma))
	C.QAbstractItemModel_DataChanged3(this.h, topLeft.cPointer(), bottomRight.cPointer(), roles_ma)
}
func (this *QAbstractItemModel) OnDataChanged3(slot func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	C.QAbstractItemModel_connect_DataChanged3(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemModel_DataChanged3
func miqt_exec_callback_QAbstractItemModel_DataChanged3(cb *C.void, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles *C.struct_miqt_array) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	topLeft_ret := topLeft
	slotval1 := newQModelIndex_U(unsafe.Pointer(topLeft_ret))
	bottomRight_ret := bottomRight
	slotval2 := newQModelIndex_U(unsafe.Pointer(bottomRight_ret))
	var roles_ma *C.struct_miqt_array = roles
	roles_ret := make([]int, int(roles_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(roles_ma.data)) // mrs jackson
	for i := 0; i < int(roles_ma.len); i++ {
		roles_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(roles_ma))
	slotval3 := roles_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QAbstractItemModel) LayoutChanged1(parents []QPersistentModelIndex) {
	// For the C ABI, malloc a C array of raw pointers
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.size_t(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	parents_ma := &C.struct_miqt_array{len: C.size_t(len(parents)), data: unsafe.Pointer(parents_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(parents_ma))
	C.QAbstractItemModel_LayoutChanged1(this.h, parents_ma)
}
func (this *QAbstractItemModel) OnLayoutChanged1(slot func(parents []QPersistentModelIndex)) {
	C.QAbstractItemModel_connect_LayoutChanged1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutChanged1
func miqt_exec_callback_QAbstractItemModel_LayoutChanged1(cb *C.void, parents *C.struct_miqt_array) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(parents []QPersistentModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var parents_ma *C.struct_miqt_array = parents
	parents_ret := make([]QPersistentModelIndex, int(parents_ma.len))
	_outCast := (*[0xffff]*C.QPersistentModelIndex)(unsafe.Pointer(parents_ma.data)) // mrs jackson
	for i := 0; i < int(parents_ma.len); i++ {
		parents_ret[i] = *newQPersistentModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(parents_ma))
	slotval1 := parents_ret

	gofunc(slotval1)
}

func (this *QAbstractItemModel) LayoutChanged2(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint) {
	// For the C ABI, malloc a C array of raw pointers
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.size_t(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	parents_ma := &C.struct_miqt_array{len: C.size_t(len(parents)), data: unsafe.Pointer(parents_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(parents_ma))
	C.QAbstractItemModel_LayoutChanged2(this.h, parents_ma, (C.uintptr_t)(hint))
}
func (this *QAbstractItemModel) OnLayoutChanged2(slot func(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint)) {
	C.QAbstractItemModel_connect_LayoutChanged2(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutChanged2
func miqt_exec_callback_QAbstractItemModel_LayoutChanged2(cb *C.void, parents *C.struct_miqt_array, hint C.uintptr_t) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var parents_ma *C.struct_miqt_array = parents
	parents_ret := make([]QPersistentModelIndex, int(parents_ma.len))
	_outCast := (*[0xffff]*C.QPersistentModelIndex)(unsafe.Pointer(parents_ma.data)) // mrs jackson
	for i := 0; i < int(parents_ma.len); i++ {
		parents_ret[i] = *newQPersistentModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(parents_ma))
	slotval1 := parents_ret

	hint_ret := hint
	slotval2 := (QAbstractItemModel__LayoutChangeHint)(hint_ret)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractItemModel) LayoutAboutToBeChanged1(parents []QPersistentModelIndex) {
	// For the C ABI, malloc a C array of raw pointers
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.size_t(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	parents_ma := &C.struct_miqt_array{len: C.size_t(len(parents)), data: unsafe.Pointer(parents_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(parents_ma))
	C.QAbstractItemModel_LayoutAboutToBeChanged1(this.h, parents_ma)
}
func (this *QAbstractItemModel) OnLayoutAboutToBeChanged1(slot func(parents []QPersistentModelIndex)) {
	C.QAbstractItemModel_connect_LayoutAboutToBeChanged1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged1
func miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged1(cb *C.void, parents *C.struct_miqt_array) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(parents []QPersistentModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var parents_ma *C.struct_miqt_array = parents
	parents_ret := make([]QPersistentModelIndex, int(parents_ma.len))
	_outCast := (*[0xffff]*C.QPersistentModelIndex)(unsafe.Pointer(parents_ma.data)) // mrs jackson
	for i := 0; i < int(parents_ma.len); i++ {
		parents_ret[i] = *newQPersistentModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(parents_ma))
	slotval1 := parents_ret

	gofunc(slotval1)
}

func (this *QAbstractItemModel) LayoutAboutToBeChanged2(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint) {
	// For the C ABI, malloc a C array of raw pointers
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.size_t(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	parents_ma := &C.struct_miqt_array{len: C.size_t(len(parents)), data: unsafe.Pointer(parents_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(parents_ma))
	C.QAbstractItemModel_LayoutAboutToBeChanged2(this.h, parents_ma, (C.uintptr_t)(hint))
}
func (this *QAbstractItemModel) OnLayoutAboutToBeChanged2(slot func(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint)) {
	C.QAbstractItemModel_connect_LayoutAboutToBeChanged2(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged2
func miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged2(cb *C.void, parents *C.struct_miqt_array, hint C.uintptr_t) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var parents_ma *C.struct_miqt_array = parents
	parents_ret := make([]QPersistentModelIndex, int(parents_ma.len))
	_outCast := (*[0xffff]*C.QPersistentModelIndex)(unsafe.Pointer(parents_ma.data)) // mrs jackson
	for i := 0; i < int(parents_ma.len); i++ {
		parents_ret[i] = *newQPersistentModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(parents_ma))
	slotval1 := parents_ret

	hint_ret := hint
	slotval2 := (QAbstractItemModel__LayoutChangeHint)(hint_ret)

	gofunc(slotval1, slotval2)
}

// Delete this object from C++ memory.
func (this *QAbstractItemModel) Delete() {
	C.QAbstractItemModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractItemModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractItemModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractTableModel struct {
	h *C.QAbstractTableModel
	*QAbstractItemModel
}

func (this *QAbstractTableModel) cPointer() *C.QAbstractTableModel {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractTableModel(h *C.QAbstractTableModel) *QAbstractTableModel {
	if h == nil {
		return nil
	}
	return &QAbstractTableModel{h: h, QAbstractItemModel: newQAbstractItemModel_U(unsafe.Pointer(h))}
}

func newQAbstractTableModel_U(h unsafe.Pointer) *QAbstractTableModel {
	return newQAbstractTableModel((*C.QAbstractTableModel)(h))
}

func (this *QAbstractTableModel) MetaObject() *QMetaObject {
	_ret := C.QAbstractTableModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QAbstractTableModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTableModel_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTableModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTableModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractTableModel) Index(row int, column int) *QModelIndex {
	_ret := C.QAbstractTableModel_Index(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractTableModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_ret := C.QAbstractTableModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractTableModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	_ret := C.QAbstractTableModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractTableModel) Flags(index *QModelIndex) int {
	_ret := C.QAbstractTableModel_Flags(this.h, index.cPointer())
	return (int)(_ret)
}

func QAbstractTableModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTableModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTableModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTableModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTableModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTableModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTableModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTableModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractTableModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QAbstractTableModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QAbstractTableModel) Delete() {
	C.QAbstractTableModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractTableModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractTableModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractListModel struct {
	h *C.QAbstractListModel
	*QAbstractItemModel
}

func (this *QAbstractListModel) cPointer() *C.QAbstractListModel {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractListModel(h *C.QAbstractListModel) *QAbstractListModel {
	if h == nil {
		return nil
	}
	return &QAbstractListModel{h: h, QAbstractItemModel: newQAbstractItemModel_U(unsafe.Pointer(h))}
}

func newQAbstractListModel_U(h unsafe.Pointer) *QAbstractListModel {
	return newQAbstractListModel((*C.QAbstractListModel)(h))
}

func (this *QAbstractListModel) MetaObject() *QMetaObject {
	_ret := C.QAbstractListModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QAbstractListModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractListModel_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractListModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractListModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractListModel) Index(row int) *QModelIndex {
	_ret := C.QAbstractListModel_Index(this.h, (C.int)(row))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractListModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_ret := C.QAbstractListModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractListModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	_ret := C.QAbstractListModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractListModel) Flags(index *QModelIndex) int {
	_ret := C.QAbstractListModel_Flags(this.h, index.cPointer())
	return (int)(_ret)
}

func QAbstractListModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractListModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractListModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractListModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractListModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractListModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractListModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractListModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractListModel) Index2(row int, column int) *QModelIndex {
	_ret := C.QAbstractListModel_Index2(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractListModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QAbstractListModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QAbstractListModel) Delete() {
	C.QAbstractListModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractListModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractListModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
