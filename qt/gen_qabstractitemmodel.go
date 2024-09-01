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
	ret := C.QModelIndex_Row(this.h)
	return (int)(ret)
}

func (this *QModelIndex) Column() int {
	ret := C.QModelIndex_Column(this.h)
	return (int)(ret)
}

func (this *QModelIndex) InternalId() uintptr {
	ret := C.QModelIndex_InternalId(this.h)
	return (uintptr)(ret)
}

func (this *QModelIndex) Parent() *QModelIndex {
	ret := C.QModelIndex_Parent(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QModelIndex) Sibling(row int, column int) *QModelIndex {
	ret := C.QModelIndex_Sibling(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QModelIndex) SiblingAtColumn(column int) *QModelIndex {
	ret := C.QModelIndex_SiblingAtColumn(this.h, (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QModelIndex) SiblingAtRow(row int) *QModelIndex {
	ret := C.QModelIndex_SiblingAtRow(this.h, (C.int)(row))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QModelIndex) Child(row int, column int) *QModelIndex {
	ret := C.QModelIndex_Child(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QModelIndex) Data() *QVariant {
	ret := C.QModelIndex_Data(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QModelIndex) Flags() int {
	ret := C.QModelIndex_Flags(this.h)
	return (int)(ret)
}

func (this *QModelIndex) Model() *QAbstractItemModel {
	ret := C.QModelIndex_Model(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(ret))
}

func (this *QModelIndex) IsValid() bool {
	ret := C.QModelIndex_IsValid(this.h)
	return (bool)(ret)
}

func (this *QModelIndex) OperatorEqual(other *QModelIndex) bool {
	ret := C.QModelIndex_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QModelIndex) OperatorNotEqual(other *QModelIndex) bool {
	ret := C.QModelIndex_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QModelIndex) OperatorLesser(other *QModelIndex) bool {
	ret := C.QModelIndex_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QModelIndex) Data1(role int) *QVariant {
	ret := C.QModelIndex_Data1(this.h, (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QModelIndex) Delete() {
	C.QModelIndex_Delete(this.h)
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
	ret := C.QPersistentModelIndex_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QPersistentModelIndex) OperatorEqual(other *QPersistentModelIndex) bool {
	ret := C.QPersistentModelIndex_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QPersistentModelIndex) OperatorNotEqual(other *QPersistentModelIndex) bool {
	ret := C.QPersistentModelIndex_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QPersistentModelIndex) OperatorAssign(other *QPersistentModelIndex) {
	C.QPersistentModelIndex_OperatorAssign(this.h, other.cPointer())
}

func (this *QPersistentModelIndex) Swap(other *QPersistentModelIndex) {
	C.QPersistentModelIndex_Swap(this.h, other.cPointer())
}

func (this *QPersistentModelIndex) OperatorEqualWithOther(other *QModelIndex) bool {
	ret := C.QPersistentModelIndex_OperatorEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QPersistentModelIndex) OperatorNotEqualWithOther(other *QModelIndex) bool {
	ret := C.QPersistentModelIndex_OperatorNotEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QPersistentModelIndex) OperatorAssignWithOther(other *QModelIndex) {
	C.QPersistentModelIndex_OperatorAssignWithOther(this.h, other.cPointer())
}

func (this *QPersistentModelIndex) Row() int {
	ret := C.QPersistentModelIndex_Row(this.h)
	return (int)(ret)
}

func (this *QPersistentModelIndex) Column() int {
	ret := C.QPersistentModelIndex_Column(this.h)
	return (int)(ret)
}

func (this *QPersistentModelIndex) InternalId() uintptr {
	ret := C.QPersistentModelIndex_InternalId(this.h)
	return (uintptr)(ret)
}

func (this *QPersistentModelIndex) Parent() *QModelIndex {
	ret := C.QPersistentModelIndex_Parent(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPersistentModelIndex) Sibling(row int, column int) *QModelIndex {
	ret := C.QPersistentModelIndex_Sibling(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPersistentModelIndex) Child(row int, column int) *QModelIndex {
	ret := C.QPersistentModelIndex_Child(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPersistentModelIndex) Data() *QVariant {
	ret := C.QPersistentModelIndex_Data(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPersistentModelIndex) Flags() int {
	ret := C.QPersistentModelIndex_Flags(this.h)
	return (int)(ret)
}

func (this *QPersistentModelIndex) Model() *QAbstractItemModel {
	ret := C.QPersistentModelIndex_Model(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(ret))
}

func (this *QPersistentModelIndex) IsValid() bool {
	ret := C.QPersistentModelIndex_IsValid(this.h)
	return (bool)(ret)
}

func (this *QPersistentModelIndex) Data1(role int) *QVariant {
	ret := C.QPersistentModelIndex_Data1(this.h, (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPersistentModelIndex) Delete() {
	C.QPersistentModelIndex_Delete(this.h)
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
	ret := C.QAbstractItemModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractItemModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemModel) HasIndex(row int, column int) bool {
	ret := C.QAbstractItemModel_HasIndex(this.h, (C.int)(row), (C.int)(column))
	return (bool)(ret)
}

func (this *QAbstractItemModel) Index(row int, column int) *QModelIndex {
	ret := C.QAbstractItemModel_Index(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) Parent(child *QModelIndex) *QModelIndex {
	ret := C.QAbstractItemModel_Parent(this.h, child.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	ret := C.QAbstractItemModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) RowCount() int {
	ret := C.QAbstractItemModel_RowCount(this.h)
	return (int)(ret)
}

func (this *QAbstractItemModel) ColumnCount() int {
	ret := C.QAbstractItemModel_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QAbstractItemModel) HasChildren() bool {
	ret := C.QAbstractItemModel_HasChildren(this.h)
	return (bool)(ret)
}

func (this *QAbstractItemModel) Data(index *QModelIndex) *QVariant {
	ret := C.QAbstractItemModel_Data(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) SetData(index *QModelIndex, value *QVariant) bool {
	ret := C.QAbstractItemModel_SetData(this.h, index.cPointer(), value.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) HeaderData(section int, orientation uintptr) *QVariant {
	ret := C.QAbstractItemModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) SetHeaderData(section int, orientation uintptr, value *QVariant) bool {
	ret := C.QAbstractItemModel_SetHeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) MimeTypes() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QAbstractItemModel_MimeTypes(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.ulong(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	ret := C.QAbstractItemModel_MimeData(this.h, &indexes_CArray[0], C.ulong(len(indexes)))
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QAbstractItemModel) CanDropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_CanDropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) DropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) SupportedDropActions() int {
	ret := C.QAbstractItemModel_SupportedDropActions(this.h)
	return (int)(ret)
}

func (this *QAbstractItemModel) SupportedDragActions() int {
	ret := C.QAbstractItemModel_SupportedDragActions(this.h)
	return (int)(ret)
}

func (this *QAbstractItemModel) InsertRows(row int, count int) bool {
	ret := C.QAbstractItemModel_InsertRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QAbstractItemModel) InsertColumns(column int, count int) bool {
	ret := C.QAbstractItemModel_InsertColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(ret)
}

func (this *QAbstractItemModel) RemoveRows(row int, count int) bool {
	ret := C.QAbstractItemModel_RemoveRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QAbstractItemModel) RemoveColumns(column int, count int) bool {
	ret := C.QAbstractItemModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(ret)
}

func (this *QAbstractItemModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	ret := C.QAbstractItemModel_MoveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(ret)
}

func (this *QAbstractItemModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	ret := C.QAbstractItemModel_MoveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(ret)
}

func (this *QAbstractItemModel) InsertRow(row int) bool {
	ret := C.QAbstractItemModel_InsertRow(this.h, (C.int)(row))
	return (bool)(ret)
}

func (this *QAbstractItemModel) InsertColumn(column int) bool {
	ret := C.QAbstractItemModel_InsertColumn(this.h, (C.int)(column))
	return (bool)(ret)
}

func (this *QAbstractItemModel) RemoveRow(row int) bool {
	ret := C.QAbstractItemModel_RemoveRow(this.h, (C.int)(row))
	return (bool)(ret)
}

func (this *QAbstractItemModel) RemoveColumn(column int) bool {
	ret := C.QAbstractItemModel_RemoveColumn(this.h, (C.int)(column))
	return (bool)(ret)
}

func (this *QAbstractItemModel) MoveRow(sourceParent *QModelIndex, sourceRow int, destinationParent *QModelIndex, destinationChild int) bool {
	ret := C.QAbstractItemModel_MoveRow(this.h, sourceParent.cPointer(), (C.int)(sourceRow), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(ret)
}

func (this *QAbstractItemModel) MoveColumn(sourceParent *QModelIndex, sourceColumn int, destinationParent *QModelIndex, destinationChild int) bool {
	ret := C.QAbstractItemModel_MoveColumn(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(ret)
}

func (this *QAbstractItemModel) FetchMore(parent *QModelIndex) {
	C.QAbstractItemModel_FetchMore(this.h, parent.cPointer())
}

func (this *QAbstractItemModel) CanFetchMore(parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_CanFetchMore(this.h, parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) Flags(index *QModelIndex) int {
	ret := C.QAbstractItemModel_Flags(this.h, index.cPointer())
	return (int)(ret)
}

func (this *QAbstractItemModel) Sort(column int) {
	C.QAbstractItemModel_Sort(this.h, (C.int)(column))
}

func (this *QAbstractItemModel) Buddy(index *QModelIndex) *QModelIndex {
	ret := C.QAbstractItemModel_Buddy(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) Match(start *QModelIndex, role int, value *QVariant) []QModelIndex {
	var _out **C.QModelIndex = nil
	var _out_len C.size_t = 0
	C.QAbstractItemModel_Match(this.h, start.cPointer(), (C.int)(role), value.cPointer(), &_out, &_out_len)
	ret := make([]QModelIndex, int(_out_len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemModel) Span(index *QModelIndex) *QSize {
	ret := C.QAbstractItemModel_Span(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) CheckIndex(index *QModelIndex) bool {
	ret := C.QAbstractItemModel_CheckIndex(this.h, index.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex) {
	C.QAbstractItemModel_DataChanged(this.h, topLeft.cPointer(), bottomRight.cPointer())
}

func (this *QAbstractItemModel) HeaderDataChanged(orientation uintptr, first int, last int) {
	C.QAbstractItemModel_HeaderDataChanged(this.h, (C.uintptr_t)(orientation), (C.int)(first), (C.int)(last))
}

func (this *QAbstractItemModel) OnHeaderDataChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemModel_connect_HeaderDataChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemModel) LayoutChanged() {
	C.QAbstractItemModel_LayoutChanged(this.h)
}

func (this *QAbstractItemModel) LayoutAboutToBeChanged() {
	C.QAbstractItemModel_LayoutAboutToBeChanged(this.h)
}

func (this *QAbstractItemModel) Submit() bool {
	ret := C.QAbstractItemModel_Submit(this.h)
	return (bool)(ret)
}

func (this *QAbstractItemModel) Revert() {
	C.QAbstractItemModel_Revert(this.h)
}

func QAbstractItemModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemModel) HasIndex3(row int, column int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_HasIndex3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	ret := C.QAbstractItemModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) RowCount1(parent *QModelIndex) int {
	ret := C.QAbstractItemModel_RowCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QAbstractItemModel) ColumnCount1(parent *QModelIndex) int {
	ret := C.QAbstractItemModel_ColumnCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QAbstractItemModel) HasChildren1(parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_HasChildren1(this.h, parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) Data2(index *QModelIndex, role int) *QVariant {
	ret := C.QAbstractItemModel_Data2(this.h, index.cPointer(), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	ret := C.QAbstractItemModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QAbstractItemModel) HeaderData3(section int, orientation uintptr, role int) *QVariant {
	ret := C.QAbstractItemModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemModel) SetHeaderData4(section int, orientation uintptr, value *QVariant, role int) bool {
	ret := C.QAbstractItemModel_SetHeaderData4(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QAbstractItemModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) InsertColumns3(column int, count int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_InsertColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) RemoveColumns3(column int, count int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_RemoveColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) InsertRow2(row int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_InsertRow2(this.h, (C.int)(row), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) InsertColumn2(column int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_InsertColumn2(this.h, (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) RemoveRow2(row int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_RemoveRow2(this.h, (C.int)(row), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) RemoveColumn2(column int, parent *QModelIndex) bool {
	ret := C.QAbstractItemModel_RemoveColumn2(this.h, (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemModel) Sort2(column int, order uintptr) {
	C.QAbstractItemModel_Sort2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QAbstractItemModel) Match4(start *QModelIndex, role int, value *QVariant, hits int) []QModelIndex {
	var _out **C.QModelIndex = nil
	var _out_len C.size_t = 0
	C.QAbstractItemModel_Match4(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), &_out, &_out_len)
	ret := make([]QModelIndex, int(_out_len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemModel) Match5(start *QModelIndex, role int, value *QVariant, hits int, flags int) []QModelIndex {
	var _out **C.QModelIndex = nil
	var _out_len C.size_t = 0
	C.QAbstractItemModel_Match5(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags), &_out, &_out_len)
	ret := make([]QModelIndex, int(_out_len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemModel) CheckIndex2(index *QModelIndex, options int) bool {
	ret := C.QAbstractItemModel_CheckIndex2(this.h, index.cPointer(), (C.int)(options))
	return (bool)(ret)
}

func (this *QAbstractItemModel) DataChanged3(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	// For the C ABI, malloc a C array of raw pointers
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.ulong(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	C.QAbstractItemModel_DataChanged3(this.h, topLeft.cPointer(), bottomRight.cPointer(), &roles_CArray[0], C.ulong(len(roles)))
}

func (this *QAbstractItemModel) OnDataChanged3(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemModel_connect_DataChanged3(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemModel) LayoutChanged1(parents []QPersistentModelIndex) {
	// For the C ABI, malloc a C array of raw pointers
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.ulong(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	C.QAbstractItemModel_LayoutChanged1(this.h, &parents_CArray[0], C.ulong(len(parents)))
}

func (this *QAbstractItemModel) LayoutChanged2(parents []QPersistentModelIndex, hint uintptr) {
	// For the C ABI, malloc a C array of raw pointers
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.ulong(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	C.QAbstractItemModel_LayoutChanged2(this.h, &parents_CArray[0], C.ulong(len(parents)), (C.uintptr_t)(hint))
}

func (this *QAbstractItemModel) OnLayoutChanged2(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemModel_connect_LayoutChanged2(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemModel) LayoutAboutToBeChanged1(parents []QPersistentModelIndex) {
	// For the C ABI, malloc a C array of raw pointers
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.ulong(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	C.QAbstractItemModel_LayoutAboutToBeChanged1(this.h, &parents_CArray[0], C.ulong(len(parents)))
}

func (this *QAbstractItemModel) LayoutAboutToBeChanged2(parents []QPersistentModelIndex, hint uintptr) {
	// For the C ABI, malloc a C array of raw pointers
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.ulong(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	C.QAbstractItemModel_LayoutAboutToBeChanged2(this.h, &parents_CArray[0], C.ulong(len(parents)), (C.uintptr_t)(hint))
}

func (this *QAbstractItemModel) OnLayoutAboutToBeChanged2(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemModel_connect_LayoutAboutToBeChanged2(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemModel) Delete() {
	C.QAbstractItemModel_Delete(this.h)
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
	ret := C.QAbstractTableModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractTableModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTableModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTableModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTableModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractTableModel) Index(row int, column int) *QModelIndex {
	ret := C.QAbstractTableModel_Index(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractTableModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	ret := C.QAbstractTableModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractTableModel) DropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QAbstractTableModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractTableModel) Flags(index *QModelIndex) int {
	ret := C.QAbstractTableModel_Flags(this.h, index.cPointer())
	return (int)(ret)
}

func QAbstractTableModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTableModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTableModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTableModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTableModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTableModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTableModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTableModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractTableModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	ret := C.QAbstractTableModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractTableModel) Delete() {
	C.QAbstractTableModel_Delete(this.h)
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
	ret := C.QAbstractListModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractListModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractListModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractListModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractListModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractListModel) Index(row int) *QModelIndex {
	ret := C.QAbstractListModel_Index(this.h, (C.int)(row))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractListModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	ret := C.QAbstractListModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractListModel) DropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QAbstractListModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractListModel) Flags(index *QModelIndex) int {
	ret := C.QAbstractListModel_Flags(this.h, index.cPointer())
	return (int)(ret)
}

func QAbstractListModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractListModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractListModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractListModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractListModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractListModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractListModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractListModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractListModel) Index2(row int, column int) *QModelIndex {
	ret := C.QAbstractListModel_Index2(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractListModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	ret := C.QAbstractListModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractListModel) Delete() {
	C.QAbstractListModel_Delete(this.h)
}
