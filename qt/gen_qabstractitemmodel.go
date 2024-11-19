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
	QAbstractItemModel__NoLayoutChangeHint QAbstractItemModel__LayoutChangeHint = 0
	QAbstractItemModel__VerticalSortHint   QAbstractItemModel__LayoutChangeHint = 1
	QAbstractItemModel__HorizontalSortHint QAbstractItemModel__LayoutChangeHint = 2
)

type QAbstractItemModel__CheckIndexOption int

const (
	QAbstractItemModel__NoOption        QAbstractItemModel__CheckIndexOption = 0
	QAbstractItemModel__IndexIsValid    QAbstractItemModel__CheckIndexOption = 1
	QAbstractItemModel__DoNotUseParent  QAbstractItemModel__CheckIndexOption = 2
	QAbstractItemModel__ParentIsInvalid QAbstractItemModel__CheckIndexOption = 4
)

type QModelIndex struct {
	h          *C.QModelIndex
	isSubclass bool
}

func (this *QModelIndex) cPointer() *C.QModelIndex {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QModelIndex) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQModelIndex constructs the type using only CGO pointers.
func newQModelIndex(h *C.QModelIndex) *QModelIndex {
	if h == nil {
		return nil
	}
	return &QModelIndex{h: h}
}

// UnsafeNewQModelIndex constructs the type using only unsafe pointers.
func UnsafeNewQModelIndex(h unsafe.Pointer) *QModelIndex {
	if h == nil {
		return nil
	}

	return &QModelIndex{h: (*C.QModelIndex)(h)}
}

// NewQModelIndex constructs a new QModelIndex object.
func NewQModelIndex() *QModelIndex {
	var outptr_QModelIndex *C.QModelIndex = nil

	C.QModelIndex_new(&outptr_QModelIndex)
	ret := newQModelIndex(outptr_QModelIndex)
	ret.isSubclass = true
	return ret
}

// NewQModelIndex2 constructs a new QModelIndex object.
func NewQModelIndex2(param1 *QModelIndex) *QModelIndex {
	var outptr_QModelIndex *C.QModelIndex = nil

	C.QModelIndex_new2(param1.cPointer(), &outptr_QModelIndex)
	ret := newQModelIndex(outptr_QModelIndex)
	ret.isSubclass = true
	return ret
}

func (this *QModelIndex) Row() int {
	return (int)(C.QModelIndex_Row(this.h))
}

func (this *QModelIndex) Column() int {
	return (int)(C.QModelIndex_Column(this.h))
}

func (this *QModelIndex) InternalId() uintptr {
	return (uintptr)(C.QModelIndex_InternalId(this.h))
}

func (this *QModelIndex) InternalPointer() unsafe.Pointer {
	return (unsafe.Pointer)(C.QModelIndex_InternalPointer(this.h))
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

func (this *QModelIndex) Flags() ItemFlag {
	return (ItemFlag)(C.QModelIndex_Flags(this.h))
}

func (this *QModelIndex) Model() *QAbstractItemModel {
	return UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QModelIndex_Model(this.h)), nil)
}

func (this *QModelIndex) IsValid() bool {
	return (bool)(C.QModelIndex_IsValid(this.h))
}

func (this *QModelIndex) OperatorEqual(other *QModelIndex) bool {
	return (bool)(C.QModelIndex_OperatorEqual(this.h, other.cPointer()))
}

func (this *QModelIndex) OperatorNotEqual(other *QModelIndex) bool {
	return (bool)(C.QModelIndex_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QModelIndex) OperatorLesser(other *QModelIndex) bool {
	return (bool)(C.QModelIndex_OperatorLesser(this.h, other.cPointer()))
}

func (this *QModelIndex) Data1(role int) *QVariant {
	_ret := C.QModelIndex_Data1(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QModelIndex) Delete() {
	C.QModelIndex_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QPersistentModelIndex
	isSubclass bool
}

func (this *QPersistentModelIndex) cPointer() *C.QPersistentModelIndex {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPersistentModelIndex) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPersistentModelIndex constructs the type using only CGO pointers.
func newQPersistentModelIndex(h *C.QPersistentModelIndex) *QPersistentModelIndex {
	if h == nil {
		return nil
	}
	return &QPersistentModelIndex{h: h}
}

// UnsafeNewQPersistentModelIndex constructs the type using only unsafe pointers.
func UnsafeNewQPersistentModelIndex(h unsafe.Pointer) *QPersistentModelIndex {
	if h == nil {
		return nil
	}

	return &QPersistentModelIndex{h: (*C.QPersistentModelIndex)(h)}
}

// NewQPersistentModelIndex constructs a new QPersistentModelIndex object.
func NewQPersistentModelIndex() *QPersistentModelIndex {
	var outptr_QPersistentModelIndex *C.QPersistentModelIndex = nil

	C.QPersistentModelIndex_new(&outptr_QPersistentModelIndex)
	ret := newQPersistentModelIndex(outptr_QPersistentModelIndex)
	ret.isSubclass = true
	return ret
}

// NewQPersistentModelIndex2 constructs a new QPersistentModelIndex object.
func NewQPersistentModelIndex2(index *QModelIndex) *QPersistentModelIndex {
	var outptr_QPersistentModelIndex *C.QPersistentModelIndex = nil

	C.QPersistentModelIndex_new2(index.cPointer(), &outptr_QPersistentModelIndex)
	ret := newQPersistentModelIndex(outptr_QPersistentModelIndex)
	ret.isSubclass = true
	return ret
}

// NewQPersistentModelIndex3 constructs a new QPersistentModelIndex object.
func NewQPersistentModelIndex3(other *QPersistentModelIndex) *QPersistentModelIndex {
	var outptr_QPersistentModelIndex *C.QPersistentModelIndex = nil

	C.QPersistentModelIndex_new3(other.cPointer(), &outptr_QPersistentModelIndex)
	ret := newQPersistentModelIndex(outptr_QPersistentModelIndex)
	ret.isSubclass = true
	return ret
}

func (this *QPersistentModelIndex) OperatorLesser(other *QPersistentModelIndex) bool {
	return (bool)(C.QPersistentModelIndex_OperatorLesser(this.h, other.cPointer()))
}

func (this *QPersistentModelIndex) OperatorEqual(other *QPersistentModelIndex) bool {
	return (bool)(C.QPersistentModelIndex_OperatorEqual(this.h, other.cPointer()))
}

func (this *QPersistentModelIndex) OperatorNotEqual(other *QPersistentModelIndex) bool {
	return (bool)(C.QPersistentModelIndex_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QPersistentModelIndex) OperatorAssign(other *QPersistentModelIndex) {
	C.QPersistentModelIndex_OperatorAssign(this.h, other.cPointer())
}

func (this *QPersistentModelIndex) Swap(other *QPersistentModelIndex) {
	C.QPersistentModelIndex_Swap(this.h, other.cPointer())
}

func (this *QPersistentModelIndex) OperatorEqualWithOther(other *QModelIndex) bool {
	return (bool)(C.QPersistentModelIndex_OperatorEqualWithOther(this.h, other.cPointer()))
}

func (this *QPersistentModelIndex) OperatorNotEqualWithOther(other *QModelIndex) bool {
	return (bool)(C.QPersistentModelIndex_OperatorNotEqualWithOther(this.h, other.cPointer()))
}

func (this *QPersistentModelIndex) OperatorAssignWithOther(other *QModelIndex) {
	C.QPersistentModelIndex_OperatorAssignWithOther(this.h, other.cPointer())
}

func (this *QPersistentModelIndex) Row() int {
	return (int)(C.QPersistentModelIndex_Row(this.h))
}

func (this *QPersistentModelIndex) Column() int {
	return (int)(C.QPersistentModelIndex_Column(this.h))
}

func (this *QPersistentModelIndex) InternalPointer() unsafe.Pointer {
	return (unsafe.Pointer)(C.QPersistentModelIndex_InternalPointer(this.h))
}

func (this *QPersistentModelIndex) InternalId() uintptr {
	return (uintptr)(C.QPersistentModelIndex_InternalId(this.h))
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

func (this *QPersistentModelIndex) Flags() ItemFlag {
	return (ItemFlag)(C.QPersistentModelIndex_Flags(this.h))
}

func (this *QPersistentModelIndex) Model() *QAbstractItemModel {
	return UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QPersistentModelIndex_Model(this.h)), nil)
}

func (this *QPersistentModelIndex) IsValid() bool {
	return (bool)(C.QPersistentModelIndex_IsValid(this.h))
}

func (this *QPersistentModelIndex) Data1(role int) *QVariant {
	_ret := C.QPersistentModelIndex_Data1(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPersistentModelIndex) Delete() {
	C.QPersistentModelIndex_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QAbstractItemModel
	isSubclass bool
	*QObject
}

func (this *QAbstractItemModel) cPointer() *C.QAbstractItemModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractItemModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractItemModel constructs the type using only CGO pointers.
func newQAbstractItemModel(h *C.QAbstractItemModel, h_QObject *C.QObject) *QAbstractItemModel {
	if h == nil {
		return nil
	}
	return &QAbstractItemModel{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQAbstractItemModel constructs the type using only unsafe pointers.
func UnsafeNewQAbstractItemModel(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractItemModel {
	if h == nil {
		return nil
	}

	return &QAbstractItemModel{h: (*C.QAbstractItemModel)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

func (this *QAbstractItemModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractItemModel_MetaObject(this.h)))
}

func (this *QAbstractItemModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractItemModel_Metacast(this.h, param1_Cstring))
}

func QAbstractItemModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemModel) HasIndex(row int, column int) bool {
	return (bool)(C.QAbstractItemModel_HasIndex(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QAbstractItemModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QAbstractItemModel_Index(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
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

func (this *QAbstractItemModel) RowCount(parent *QModelIndex) int {
	return (int)(C.QAbstractItemModel_RowCount(this.h, parent.cPointer()))
}

func (this *QAbstractItemModel) ColumnCount(parent *QModelIndex) int {
	return (int)(C.QAbstractItemModel_ColumnCount(this.h, parent.cPointer()))
}

func (this *QAbstractItemModel) HasChildren(parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_HasChildren(this.h, parent.cPointer()))
}

func (this *QAbstractItemModel) Data(index *QModelIndex, role int) *QVariant {
	_ret := C.QAbstractItemModel_Data(this.h, index.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) SetData(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QAbstractItemModel_SetData(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QAbstractItemModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QAbstractItemModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QAbstractItemModel_SetHeaderData(this.h, (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QAbstractItemModel) ItemData(index *QModelIndex) map[int]QVariant {
	var _mm C.struct_miqt_map = C.QAbstractItemModel_ItemData(this.h, index.cPointer())
	_ret := make(map[int]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_ret := _Values[i]
		_mapval_goptr := newQVariant(_mapval_ret)
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QAbstractItemModel) SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
	roles_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Keys_CArray))
	roles_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Values_CArray))
	roles_ctr := 0
	for roles_k, roles_v := range roles {
		roles_Keys_CArray[roles_ctr] = (C.int)(roles_k)
		roles_Values_CArray[roles_ctr] = roles_v.cPointer()
		roles_ctr++
	}
	roles_mm := C.struct_miqt_map{
		len:    C.size_t(len(roles)),
		keys:   unsafe.Pointer(roles_Keys_CArray),
		values: unsafe.Pointer(roles_Values_CArray),
	}
	return (bool)(C.QAbstractItemModel_SetItemData(this.h, index.cPointer(), roles_mm))
}

func (this *QAbstractItemModel) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.QAbstractItemModel_MimeTypes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QAbstractItemModel) MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	return UnsafeNewQMimeData(unsafe.Pointer(C.QAbstractItemModel_MimeData(this.h, indexes_ma)), nil)
}

func (this *QAbstractItemModel) CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_CanDropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractItemModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractItemModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QAbstractItemModel_SupportedDropActions(this.h))
}

func (this *QAbstractItemModel) SupportedDragActions() DropAction {
	return (DropAction)(C.QAbstractItemModel_SupportedDragActions(this.h))
}

func (this *QAbstractItemModel) InsertRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_InsertRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QAbstractItemModel) InsertColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_InsertColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QAbstractItemModel) RemoveRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_RemoveRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QAbstractItemModel) RemoveColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QAbstractItemModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QAbstractItemModel_MoveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QAbstractItemModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QAbstractItemModel_MoveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QAbstractItemModel) InsertRow(row int) bool {
	return (bool)(C.QAbstractItemModel_InsertRow(this.h, (C.int)(row)))
}

func (this *QAbstractItemModel) InsertColumn(column int) bool {
	return (bool)(C.QAbstractItemModel_InsertColumn(this.h, (C.int)(column)))
}

func (this *QAbstractItemModel) RemoveRow(row int) bool {
	return (bool)(C.QAbstractItemModel_RemoveRow(this.h, (C.int)(row)))
}

func (this *QAbstractItemModel) RemoveColumn(column int) bool {
	return (bool)(C.QAbstractItemModel_RemoveColumn(this.h, (C.int)(column)))
}

func (this *QAbstractItemModel) MoveRow(sourceParent *QModelIndex, sourceRow int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QAbstractItemModel_MoveRow(this.h, sourceParent.cPointer(), (C.int)(sourceRow), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QAbstractItemModel) MoveColumn(sourceParent *QModelIndex, sourceColumn int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QAbstractItemModel_MoveColumn(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QAbstractItemModel) FetchMore(parent *QModelIndex) {
	C.QAbstractItemModel_FetchMore(this.h, parent.cPointer())
}

func (this *QAbstractItemModel) CanFetchMore(parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_CanFetchMore(this.h, parent.cPointer()))
}

func (this *QAbstractItemModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QAbstractItemModel_Flags(this.h, index.cPointer()))
}

func (this *QAbstractItemModel) Sort(column int, order SortOrder) {
	C.QAbstractItemModel_Sort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QAbstractItemModel) Buddy(index *QModelIndex) *QModelIndex {
	_ret := C.QAbstractItemModel_Buddy(this.h, index.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {
	var _ma C.struct_miqt_array = C.QAbstractItemModel_Match(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
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

func (this *QAbstractItemModel) Span(index *QModelIndex) *QSize {
	_ret := C.QAbstractItemModel_Span(this.h, index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemModel) RoleNames() map[int][]byte {
	var _mm C.struct_miqt_map = C.QAbstractItemModel_RoleNames(this.h)
	_ret := make(map[int][]byte, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		var _hashval_bytearray C.struct_miqt_string = _Values[i]
		_hashval_ret := C.GoBytes(unsafe.Pointer(_hashval_bytearray.data), C.int(int64(_hashval_bytearray.len)))
		C.free(unsafe.Pointer(_hashval_bytearray.data))
		_entry_Value := _hashval_ret
		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QAbstractItemModel) CheckIndex(index *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_CheckIndex(this.h, index.cPointer()))
}

func (this *QAbstractItemModel) DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex) {
	C.QAbstractItemModel_DataChanged(this.h, topLeft.cPointer(), bottomRight.cPointer())
}
func (this *QAbstractItemModel) OnDataChanged(slot func(topLeft *QModelIndex, bottomRight *QModelIndex)) {
	C.QAbstractItemModel_connect_DataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemModel_DataChanged
func miqt_exec_callback_QAbstractItemModel_DataChanged(cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(topLeft *QModelIndex, bottomRight *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(topLeft))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(bottomRight))

	gofunc(slotval1, slotval2)
}

func (this *QAbstractItemModel) HeaderDataChanged(orientation Orientation, first int, last int) {
	C.QAbstractItemModel_HeaderDataChanged(this.h, (C.int)(orientation), (C.int)(first), (C.int)(last))
}
func (this *QAbstractItemModel) OnHeaderDataChanged(slot func(orientation Orientation, first int, last int)) {
	C.QAbstractItemModel_connect_HeaderDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemModel_HeaderDataChanged
func miqt_exec_callback_QAbstractItemModel_HeaderDataChanged(cb C.intptr_t, orientation C.int, first C.int, last C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(orientation Orientation, first int, last int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (Orientation)(orientation)

	slotval2 := (int)(first)

	slotval3 := (int)(last)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QAbstractItemModel) LayoutChanged() {
	C.QAbstractItemModel_LayoutChanged(this.h)
}
func (this *QAbstractItemModel) OnLayoutChanged(slot func()) {
	C.QAbstractItemModel_connect_LayoutChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutChanged
func miqt_exec_callback_QAbstractItemModel_LayoutChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractItemModel) LayoutAboutToBeChanged() {
	C.QAbstractItemModel_LayoutAboutToBeChanged(this.h)
}
func (this *QAbstractItemModel) OnLayoutAboutToBeChanged(slot func()) {
	C.QAbstractItemModel_connect_LayoutAboutToBeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged
func miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractItemModel) Submit() bool {
	return (bool)(C.QAbstractItemModel_Submit(this.h))
}

func (this *QAbstractItemModel) Revert() {
	C.QAbstractItemModel_Revert(this.h)
}

func QAbstractItemModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemModel) HasIndex3(row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_HasIndex3(this.h, (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractItemModel) InsertRow2(row int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_InsertRow2(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QAbstractItemModel) InsertColumn2(column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_InsertColumn2(this.h, (C.int)(column), parent.cPointer()))
}

func (this *QAbstractItemModel) RemoveRow2(row int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_RemoveRow2(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QAbstractItemModel) RemoveColumn2(column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractItemModel_RemoveColumn2(this.h, (C.int)(column), parent.cPointer()))
}

func (this *QAbstractItemModel) CheckIndex2(index *QModelIndex, options QAbstractItemModel__CheckIndexOption) bool {
	return (bool)(C.QAbstractItemModel_CheckIndex2(this.h, index.cPointer(), (C.int)(options)))
}

func (this *QAbstractItemModel) DataChanged3(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}
	C.QAbstractItemModel_DataChanged3(this.h, topLeft.cPointer(), bottomRight.cPointer(), roles_ma)
}
func (this *QAbstractItemModel) OnDataChanged3(slot func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	C.QAbstractItemModel_connect_DataChanged3(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemModel_DataChanged3
func miqt_exec_callback_QAbstractItemModel_DataChanged3(cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(topLeft))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(bottomRight))
	var roles_ma C.struct_miqt_array = roles
	roles_ret := make([]int, int(roles_ma.len))
	roles_outCast := (*[0xffff]C.int)(unsafe.Pointer(roles_ma.data)) // hey ya
	for i := 0; i < int(roles_ma.len); i++ {
		roles_ret[i] = (int)(roles_outCast[i])
	}
	slotval3 := roles_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QAbstractItemModel) LayoutChanged1(parents []QPersistentModelIndex) {
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.size_t(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	parents_ma := C.struct_miqt_array{len: C.size_t(len(parents)), data: unsafe.Pointer(parents_CArray)}
	C.QAbstractItemModel_LayoutChanged1(this.h, parents_ma)
}
func (this *QAbstractItemModel) OnLayoutChanged1(slot func(parents []QPersistentModelIndex)) {
	C.QAbstractItemModel_connect_LayoutChanged1(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutChanged1
func miqt_exec_callback_QAbstractItemModel_LayoutChanged1(cb C.intptr_t, parents C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parents []QPersistentModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var parents_ma C.struct_miqt_array = parents
	parents_ret := make([]QPersistentModelIndex, int(parents_ma.len))
	parents_outCast := (*[0xffff]*C.QPersistentModelIndex)(unsafe.Pointer(parents_ma.data)) // hey ya
	for i := 0; i < int(parents_ma.len); i++ {
		parents_lv_ret := parents_outCast[i]
		parents_lv_goptr := newQPersistentModelIndex(parents_lv_ret)
		parents_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		parents_ret[i] = *parents_lv_goptr
	}
	slotval1 := parents_ret

	gofunc(slotval1)
}

func (this *QAbstractItemModel) LayoutChanged2(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint) {
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.size_t(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	parents_ma := C.struct_miqt_array{len: C.size_t(len(parents)), data: unsafe.Pointer(parents_CArray)}
	C.QAbstractItemModel_LayoutChanged2(this.h, parents_ma, (C.int)(hint))
}
func (this *QAbstractItemModel) OnLayoutChanged2(slot func(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint)) {
	C.QAbstractItemModel_connect_LayoutChanged2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutChanged2
func miqt_exec_callback_QAbstractItemModel_LayoutChanged2(cb C.intptr_t, parents C.struct_miqt_array, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var parents_ma C.struct_miqt_array = parents
	parents_ret := make([]QPersistentModelIndex, int(parents_ma.len))
	parents_outCast := (*[0xffff]*C.QPersistentModelIndex)(unsafe.Pointer(parents_ma.data)) // hey ya
	for i := 0; i < int(parents_ma.len); i++ {
		parents_lv_ret := parents_outCast[i]
		parents_lv_goptr := newQPersistentModelIndex(parents_lv_ret)
		parents_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		parents_ret[i] = *parents_lv_goptr
	}
	slotval1 := parents_ret

	slotval2 := (QAbstractItemModel__LayoutChangeHint)(hint)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractItemModel) LayoutAboutToBeChanged1(parents []QPersistentModelIndex) {
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.size_t(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	parents_ma := C.struct_miqt_array{len: C.size_t(len(parents)), data: unsafe.Pointer(parents_CArray)}
	C.QAbstractItemModel_LayoutAboutToBeChanged1(this.h, parents_ma)
}
func (this *QAbstractItemModel) OnLayoutAboutToBeChanged1(slot func(parents []QPersistentModelIndex)) {
	C.QAbstractItemModel_connect_LayoutAboutToBeChanged1(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged1
func miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged1(cb C.intptr_t, parents C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parents []QPersistentModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var parents_ma C.struct_miqt_array = parents
	parents_ret := make([]QPersistentModelIndex, int(parents_ma.len))
	parents_outCast := (*[0xffff]*C.QPersistentModelIndex)(unsafe.Pointer(parents_ma.data)) // hey ya
	for i := 0; i < int(parents_ma.len); i++ {
		parents_lv_ret := parents_outCast[i]
		parents_lv_goptr := newQPersistentModelIndex(parents_lv_ret)
		parents_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		parents_ret[i] = *parents_lv_goptr
	}
	slotval1 := parents_ret

	gofunc(slotval1)
}

func (this *QAbstractItemModel) LayoutAboutToBeChanged2(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint) {
	parents_CArray := (*[0xffff]*C.QPersistentModelIndex)(C.malloc(C.size_t(8 * len(parents))))
	defer C.free(unsafe.Pointer(parents_CArray))
	for i := range parents {
		parents_CArray[i] = parents[i].cPointer()
	}
	parents_ma := C.struct_miqt_array{len: C.size_t(len(parents)), data: unsafe.Pointer(parents_CArray)}
	C.QAbstractItemModel_LayoutAboutToBeChanged2(this.h, parents_ma, (C.int)(hint))
}
func (this *QAbstractItemModel) OnLayoutAboutToBeChanged2(slot func(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint)) {
	C.QAbstractItemModel_connect_LayoutAboutToBeChanged2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged2
func miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged2(cb C.intptr_t, parents C.struct_miqt_array, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parents []QPersistentModelIndex, hint QAbstractItemModel__LayoutChangeHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var parents_ma C.struct_miqt_array = parents
	parents_ret := make([]QPersistentModelIndex, int(parents_ma.len))
	parents_outCast := (*[0xffff]*C.QPersistentModelIndex)(unsafe.Pointer(parents_ma.data)) // hey ya
	for i := 0; i < int(parents_ma.len); i++ {
		parents_lv_ret := parents_outCast[i]
		parents_lv_goptr := newQPersistentModelIndex(parents_lv_ret)
		parents_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		parents_ret[i] = *parents_lv_goptr
	}
	slotval1 := parents_ret

	slotval2 := (QAbstractItemModel__LayoutChangeHint)(hint)

	gofunc(slotval1, slotval2)
}

// Delete this object from C++ memory.
func (this *QAbstractItemModel) Delete() {
	C.QAbstractItemModel_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QAbstractTableModel
	isSubclass bool
	*QAbstractItemModel
}

func (this *QAbstractTableModel) cPointer() *C.QAbstractTableModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractTableModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractTableModel constructs the type using only CGO pointers.
func newQAbstractTableModel(h *C.QAbstractTableModel, h_QAbstractItemModel *C.QAbstractItemModel, h_QObject *C.QObject) *QAbstractTableModel {
	if h == nil {
		return nil
	}
	return &QAbstractTableModel{h: h,
		QAbstractItemModel: newQAbstractItemModel(h_QAbstractItemModel, h_QObject)}
}

// UnsafeNewQAbstractTableModel constructs the type using only unsafe pointers.
func UnsafeNewQAbstractTableModel(h unsafe.Pointer, h_QAbstractItemModel unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractTableModel {
	if h == nil {
		return nil
	}

	return &QAbstractTableModel{h: (*C.QAbstractTableModel)(h),
		QAbstractItemModel: UnsafeNewQAbstractItemModel(h_QAbstractItemModel, h_QObject)}
}

func (this *QAbstractTableModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractTableModel_MetaObject(this.h)))
}

func (this *QAbstractTableModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractTableModel_Metacast(this.h, param1_Cstring))
}

func QAbstractTableModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTableModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTableModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTableModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractTableModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QAbstractTableModel_Index(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
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
	return (bool)(C.QAbstractTableModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractTableModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QAbstractTableModel_Flags(this.h, index.cPointer()))
}

func QAbstractTableModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTableModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTableModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTableModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTableModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTableModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTableModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTableModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractTableModel) Delete() {
	C.QAbstractTableModel_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QAbstractListModel
	isSubclass bool
	*QAbstractItemModel
}

func (this *QAbstractListModel) cPointer() *C.QAbstractListModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractListModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractListModel constructs the type using only CGO pointers.
func newQAbstractListModel(h *C.QAbstractListModel, h_QAbstractItemModel *C.QAbstractItemModel, h_QObject *C.QObject) *QAbstractListModel {
	if h == nil {
		return nil
	}
	return &QAbstractListModel{h: h,
		QAbstractItemModel: newQAbstractItemModel(h_QAbstractItemModel, h_QObject)}
}

// UnsafeNewQAbstractListModel constructs the type using only unsafe pointers.
func UnsafeNewQAbstractListModel(h unsafe.Pointer, h_QAbstractItemModel unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractListModel {
	if h == nil {
		return nil
	}

	return &QAbstractListModel{h: (*C.QAbstractListModel)(h),
		QAbstractItemModel: UnsafeNewQAbstractItemModel(h_QAbstractItemModel, h_QObject)}
}

func (this *QAbstractListModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractListModel_MetaObject(this.h)))
}

func (this *QAbstractListModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractListModel_Metacast(this.h, param1_Cstring))
}

func QAbstractListModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractListModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractListModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractListModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractListModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QAbstractListModel_Index(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
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
	return (bool)(C.QAbstractListModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractListModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QAbstractListModel_Flags(this.h, index.cPointer()))
}

func QAbstractListModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractListModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractListModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractListModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractListModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractListModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractListModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractListModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractListModel) Delete() {
	C.QAbstractListModel_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractListModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractListModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
