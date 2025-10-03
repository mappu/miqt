package sql

/*

#include "gen_qsqlrelationaltablemodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSqlRelationalTableModel__JoinMode int

const (
	QSqlRelationalTableModel__InnerJoin QSqlRelationalTableModel__JoinMode = 0
	QSqlRelationalTableModel__LeftJoin  QSqlRelationalTableModel__JoinMode = 1
)

type QSqlRelation struct {
	h *C.QSqlRelation
}

func (this *QSqlRelation) cPointer() *C.QSqlRelation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlRelation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlRelation constructs the type using only CGO pointers.
func newQSqlRelation(h *C.QSqlRelation) *QSqlRelation {
	if h == nil {
		return nil
	}

	return &QSqlRelation{h: h}
}

// UnsafeNewQSqlRelation constructs the type using only unsafe pointers.
func UnsafeNewQSqlRelation(h unsafe.Pointer) *QSqlRelation {
	return newQSqlRelation((*C.QSqlRelation)(h))
}

// NewQSqlRelation constructs a new QSqlRelation object.
func NewQSqlRelation() *QSqlRelation {

	return newQSqlRelation(C.QSqlRelation_new())
}

// NewQSqlRelation2 constructs a new QSqlRelation object.
func NewQSqlRelation2(aTableName string, indexCol string, displayCol string) *QSqlRelation {
	aTableName_ms := C.struct_miqt_string{}
	aTableName_ms.data = C.CString(aTableName)
	aTableName_ms.len = C.size_t(len(aTableName))
	defer C.free(unsafe.Pointer(aTableName_ms.data))
	indexCol_ms := C.struct_miqt_string{}
	indexCol_ms.data = C.CString(indexCol)
	indexCol_ms.len = C.size_t(len(indexCol))
	defer C.free(unsafe.Pointer(indexCol_ms.data))
	displayCol_ms := C.struct_miqt_string{}
	displayCol_ms.data = C.CString(displayCol)
	displayCol_ms.len = C.size_t(len(displayCol))
	defer C.free(unsafe.Pointer(displayCol_ms.data))

	return newQSqlRelation(C.QSqlRelation_new2(aTableName_ms, indexCol_ms, displayCol_ms))
}

// NewQSqlRelation3 constructs a new QSqlRelation object.
func NewQSqlRelation3(param1 *QSqlRelation) *QSqlRelation {

	return newQSqlRelation(C.QSqlRelation_new3(param1.cPointer()))
}

func (this *QSqlRelation) Swap(other *QSqlRelation) {
	C.QSqlRelation_swap(this.h, other.cPointer())
}

func (this *QSqlRelation) TableName() string {
	var _ms C.struct_miqt_string = C.QSqlRelation_tableName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlRelation) IndexColumn() string {
	var _ms C.struct_miqt_string = C.QSqlRelation_indexColumn(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlRelation) DisplayColumn() string {
	var _ms C.struct_miqt_string = C.QSqlRelation_displayColumn(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlRelation) IsValid() bool {
	return (bool)(C.QSqlRelation_isValid(this.h))
}

func (this *QSqlRelation) OperatorAssign(param1 *QSqlRelation) {
	C.QSqlRelation_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QSqlRelation) Delete() {
	C.QSqlRelation_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSqlRelation) GoGC() {
	runtime.SetFinalizer(this, func(this *QSqlRelation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSqlRelationalTableModel struct {
	h *C.QSqlRelationalTableModel
	*QSqlTableModel
}

func (this *QSqlRelationalTableModel) cPointer() *C.QSqlRelationalTableModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlRelationalTableModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlRelationalTableModel constructs the type using only CGO pointers.
func newQSqlRelationalTableModel(h *C.QSqlRelationalTableModel) *QSqlRelationalTableModel {
	if h == nil {
		return nil
	}
	var outptr_QSqlTableModel *C.QSqlTableModel = nil
	C.QSqlRelationalTableModel_virtbase(h, &outptr_QSqlTableModel)

	return &QSqlRelationalTableModel{h: h,
		QSqlTableModel: newQSqlTableModel(outptr_QSqlTableModel)}
}

// UnsafeNewQSqlRelationalTableModel constructs the type using only unsafe pointers.
func UnsafeNewQSqlRelationalTableModel(h unsafe.Pointer) *QSqlRelationalTableModel {
	return newQSqlRelationalTableModel((*C.QSqlRelationalTableModel)(h))
}

// NewQSqlRelationalTableModel constructs a new QSqlRelationalTableModel object.
func NewQSqlRelationalTableModel() *QSqlRelationalTableModel {

	return newQSqlRelationalTableModel(C.QSqlRelationalTableModel_new())
}

// NewQSqlRelationalTableModel2 constructs a new QSqlRelationalTableModel object.
func NewQSqlRelationalTableModel2(parent *qt.QObject) *QSqlRelationalTableModel {

	return newQSqlRelationalTableModel(C.QSqlRelationalTableModel_new2((*C.QObject)(parent.UnsafePointer())))
}

// NewQSqlRelationalTableModel3 constructs a new QSqlRelationalTableModel object.
func NewQSqlRelationalTableModel3(parent *qt.QObject, db QSqlDatabase) *QSqlRelationalTableModel {

	return newQSqlRelationalTableModel(C.QSqlRelationalTableModel_new3((*C.QObject)(parent.UnsafePointer()), db.cPointer()))
}

func (this *QSqlRelationalTableModel) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QSqlRelationalTableModel_metaObject(this.h)))
}

func (this *QSqlRelationalTableModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSqlRelationalTableModel_metacast(this.h, param1_Cstring))
}

func QSqlRelationalTableModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSqlRelationalTableModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlRelationalTableModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSqlRelationalTableModel_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlRelationalTableModel) Data(item *qt.QModelIndex, role int) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlRelationalTableModel_data(this.h, (*C.QModelIndex)(item.UnsafePointer()), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRelationalTableModel) SetData(item *qt.QModelIndex, value *qt.QVariant, role int) bool {
	return (bool)(C.QSqlRelationalTableModel_setData(this.h, (*C.QModelIndex)(item.UnsafePointer()), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))
}

func (this *QSqlRelationalTableModel) RemoveColumns(column int, count int, parent *qt.QModelIndex) bool {
	return (bool)(C.QSqlRelationalTableModel_removeColumns(this.h, (C.int)(column), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))
}

func (this *QSqlRelationalTableModel) Clear() {
	C.QSqlRelationalTableModel_clear(this.h)
}

func (this *QSqlRelationalTableModel) Select() bool {
	return (bool)(C.QSqlRelationalTableModel_select(this.h))
}

func (this *QSqlRelationalTableModel) SetTable(tableName string) {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))
	C.QSqlRelationalTableModel_setTable(this.h, tableName_ms)
}

func (this *QSqlRelationalTableModel) SetRelation(column int, relation *QSqlRelation) {
	C.QSqlRelationalTableModel_setRelation(this.h, (C.int)(column), relation.cPointer())
}

func (this *QSqlRelationalTableModel) Relation(column int) *QSqlRelation {
	_goptr := newQSqlRelation(C.QSqlRelationalTableModel_relation(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRelationalTableModel) RelationModel(column int) *QSqlTableModel {
	return newQSqlTableModel(C.QSqlRelationalTableModel_relationModel(this.h, (C.int)(column)))
}

func (this *QSqlRelationalTableModel) SetJoinMode(joinMode QSqlRelationalTableModel__JoinMode) {
	C.QSqlRelationalTableModel_setJoinMode(this.h, (C.int)(joinMode))
}

func (this *QSqlRelationalTableModel) RevertRow(row int) {
	C.QSqlRelationalTableModel_revertRow(this.h, (C.int)(row))
}

func QSqlRelationalTableModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlRelationalTableModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlRelationalTableModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlRelationalTableModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlRelationalTableModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlRelationalTableModel_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlRelationalTableModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlRelationalTableModel_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetPrimaryKey can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) SetPrimaryKey(key *QSqlIndex) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_setPrimaryKey(&_dynamic_cast_ok, unsafe.Pointer(this.h), key.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetQuery can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) SetQuery(query *QSqlQuery) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_setQuery(&_dynamic_cast_ok, unsafe.Pointer(this.h), query.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrimaryValues can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) PrimaryValues(row int) QSqlRecord {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQSqlRecord(C.QSqlRelationalTableModel_protectedbase_primaryValues(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginInsertRows can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) BeginInsertRows(parent *qt.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_beginInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertRows can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) EndInsertRows() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_endInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveRows can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) BeginRemoveRows(parent *qt.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_beginRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveRows can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) EndRemoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_endRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginInsertColumns can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) BeginInsertColumns(parent *qt.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_beginInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertColumns can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) EndInsertColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_endInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveColumns can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) BeginRemoveColumns(parent *qt.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_beginRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveColumns can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) EndRemoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_endRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginResetModel can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) BeginResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_beginResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndResetModel can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) EndResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_endResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLastError can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) SetLastError(error *QSqlError) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_setLastError(&_dynamic_cast_ok, unsafe.Pointer(this.h), error.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ResetInternalData can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) ResetInternalData() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_resetInternalData(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// CreateIndex can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) CreateIndex(row int, column int) qt.QModelIndex {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlRelationalTableModel_protectedbase_createIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EncodeData can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) EncodeData(indexes []qt.QModelIndex, stream *qt.QDataStream) {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (*C.QModelIndex)(indexes[i].UnsafePointer())
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_encodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), indexes_ma, (*C.QDataStream)(stream.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DecodeData can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) DecodeData(row int, column int, parent *qt.QModelIndex, stream *qt.QDataStream) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlRelationalTableModel_protectedbase_decodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer()), (*C.QDataStream)(stream.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginMoveRows can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) BeginMoveRows(sourceParent *qt.QModelIndex, sourceFirst int, sourceLast int, destinationParent *qt.QModelIndex, destinationRow int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlRelationalTableModel_protectedbase_beginMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceFirst), (C.int)(sourceLast), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationRow)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveRows can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) EndMoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_endMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveColumns can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) BeginMoveColumns(sourceParent *qt.QModelIndex, sourceFirst int, sourceLast int, destinationParent *qt.QModelIndex, destinationColumn int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlRelationalTableModel_protectedbase_beginMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceFirst), (C.int)(sourceLast), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveColumns can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) EndMoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_endMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndex can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) ChangePersistentIndex(from *qt.QModelIndex, to *qt.QModelIndex) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_changePersistentIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(from.UnsafePointer()), (*C.QModelIndex)(to.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndexList can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) ChangePersistentIndexList(from []qt.QModelIndex, to []qt.QModelIndex) {
	from_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(from))))
	defer C.free(unsafe.Pointer(from_CArray))
	for i := range from {
		from_CArray[i] = (*C.QModelIndex)(from[i].UnsafePointer())
	}
	from_ma := C.struct_miqt_array{len: C.size_t(len(from)), data: unsafe.Pointer(from_CArray)}
	to_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(to))))
	defer C.free(unsafe.Pointer(to_CArray))
	for i := range to {
		to_CArray[i] = (*C.QModelIndex)(to[i].UnsafePointer())
	}
	to_ma := C.struct_miqt_array{len: C.size_t(len(to)), data: unsafe.Pointer(to_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QSqlRelationalTableModel_protectedbase_changePersistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h), from_ma, to_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PersistentIndexList can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) PersistentIndexList() []qt.QModelIndex {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QSqlRelationalTableModel_protectedbase_persistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := make([]qt.QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	_method_ret := _ret

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QSqlRelationalTableModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSqlRelationalTableModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSqlRelationalTableModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSqlRelationalTableModel that was directly constructed.
func (this *QSqlRelationalTableModel) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlRelationalTableModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSqlRelationalTableModel) callVirtualBase_Data(item *qt.QModelIndex, role int) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlRelationalTableModel_virtualbase_data(unsafe.Pointer(this.h), (*C.QModelIndex)(item.UnsafePointer()), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlRelationalTableModel) OnData(slot func(super func(item *qt.QModelIndex, role int) *qt.QVariant, item *qt.QModelIndex, role int) *qt.QVariant) {
	ok := C.QSqlRelationalTableModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_data
func miqt_exec_callback_QSqlRelationalTableModel_data(self *C.QSqlRelationalTableModel, cb C.intptr_t, item *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt.QModelIndex, role int) *qt.QVariant, item *qt.QModelIndex, role int) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(item))

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QSqlRelationalTableModel) callVirtualBase_SetData(item *qt.QModelIndex, value *qt.QVariant, role int) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_setData(unsafe.Pointer(this.h), (*C.QModelIndex)(item.UnsafePointer()), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))

}
func (this *QSqlRelationalTableModel) OnSetData(slot func(super func(item *qt.QModelIndex, value *qt.QVariant, role int) bool, item *qt.QModelIndex, value *qt.QVariant, role int) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_setData
func miqt_exec_callback_QSqlRelationalTableModel_setData(self *C.QSqlRelationalTableModel, cb C.intptr_t, item *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt.QModelIndex, value *qt.QVariant, role int) bool, item *qt.QModelIndex, value *qt.QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(item))

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_RemoveColumns(column int, count int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnRemoveColumns(slot func(super func(column int, count int, parent *qt.QModelIndex) bool, column int, count int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_removeColumns
func miqt_exec_callback_QSqlRelationalTableModel_removeColumns(self *C.QSqlRelationalTableModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *qt.QModelIndex) bool, column int, count int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_Clear() {

	C.QSqlRelationalTableModel_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QSqlRelationalTableModel) OnClear(slot func(super func())) {
	ok := C.QSqlRelationalTableModel_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_clear
func miqt_exec_callback_QSqlRelationalTableModel_clear(self *C.QSqlRelationalTableModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Clear)

}

func (this *QSqlRelationalTableModel) callVirtualBase_Select() bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_select(unsafe.Pointer(this.h)))

}
func (this *QSqlRelationalTableModel) OnSelect(slot func(super func() bool) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_select(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_select
func miqt_exec_callback_QSqlRelationalTableModel_select(self *C.QSqlRelationalTableModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Select)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_SetTable(tableName string) {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))

	C.QSqlRelationalTableModel_virtualbase_setTable(unsafe.Pointer(this.h), tableName_ms)

}
func (this *QSqlRelationalTableModel) OnSetTable(slot func(super func(tableName string), tableName string)) {
	ok := C.QSqlRelationalTableModel_override_virtual_setTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_setTable
func miqt_exec_callback_QSqlRelationalTableModel_setTable(self *C.QSqlRelationalTableModel, cb C.intptr_t, tableName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(tableName string), tableName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var tableName_ms C.struct_miqt_string = tableName
	tableName_ret := C.GoStringN(tableName_ms.data, C.int(int64(tableName_ms.len)))
	C.free(unsafe.Pointer(tableName_ms.data))
	slotval1 := tableName_ret

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SetTable, slotval1)

}

func (this *QSqlRelationalTableModel) callVirtualBase_SetRelation(column int, relation *QSqlRelation) {

	C.QSqlRelationalTableModel_virtualbase_setRelation(unsafe.Pointer(this.h), (C.int)(column), relation.cPointer())

}
func (this *QSqlRelationalTableModel) OnSetRelation(slot func(super func(column int, relation *QSqlRelation), column int, relation *QSqlRelation)) {
	ok := C.QSqlRelationalTableModel_override_virtual_setRelation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_setRelation
func miqt_exec_callback_QSqlRelationalTableModel_setRelation(self *C.QSqlRelationalTableModel, cb C.intptr_t, column C.int, relation *C.QSqlRelation) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, relation *QSqlRelation), column int, relation *QSqlRelation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := newQSqlRelation(relation)

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SetRelation, slotval1, slotval2)

}

func (this *QSqlRelationalTableModel) callVirtualBase_RelationModel(column int) *QSqlTableModel {

	return newQSqlTableModel(C.QSqlRelationalTableModel_virtualbase_relationModel(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QSqlRelationalTableModel) OnRelationModel(slot func(super func(column int) *QSqlTableModel, column int) *QSqlTableModel) {
	ok := C.QSqlRelationalTableModel_override_virtual_relationModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_relationModel
func miqt_exec_callback_QSqlRelationalTableModel_relationModel(self *C.QSqlRelationalTableModel, cb C.intptr_t, column C.int) *C.QSqlTableModel {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) *QSqlTableModel, column int) *QSqlTableModel)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_RelationModel, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSqlRelationalTableModel) callVirtualBase_RevertRow(row int) {

	C.QSqlRelationalTableModel_virtualbase_revertRow(unsafe.Pointer(this.h), (C.int)(row))

}
func (this *QSqlRelationalTableModel) OnRevertRow(slot func(super func(row int), row int)) {
	ok := C.QSqlRelationalTableModel_override_virtual_revertRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_revertRow
func miqt_exec_callback_QSqlRelationalTableModel_revertRow(self *C.QSqlRelationalTableModel, cb C.intptr_t, row C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int), row int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_RevertRow, slotval1)

}

func (this *QSqlRelationalTableModel) callVirtualBase_SelectStatement() string {

	var _ms C.struct_miqt_string = C.QSqlRelationalTableModel_virtualbase_selectStatement(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSqlRelationalTableModel) OnSelectStatement(slot func(super func() string) string) {
	ok := C.QSqlRelationalTableModel_override_virtual_selectStatement(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_selectStatement
func miqt_exec_callback_QSqlRelationalTableModel_selectStatement(self *C.QSqlRelationalTableModel, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SelectStatement)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSqlRelationalTableModel) callVirtualBase_UpdateRowInTable(row int, values *QSqlRecord) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_updateRowInTable(unsafe.Pointer(this.h), (C.int)(row), values.cPointer()))

}
func (this *QSqlRelationalTableModel) OnUpdateRowInTable(slot func(super func(row int, values *QSqlRecord) bool, row int, values *QSqlRecord) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_updateRowInTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_updateRowInTable
func miqt_exec_callback_QSqlRelationalTableModel_updateRowInTable(self *C.QSqlRelationalTableModel, cb C.intptr_t, row C.int, values *C.QSqlRecord) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, values *QSqlRecord) bool, row int, values *QSqlRecord) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := newQSqlRecord(values)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_UpdateRowInTable, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_InsertRowIntoTable(values *QSqlRecord) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_insertRowIntoTable(unsafe.Pointer(this.h), values.cPointer()))

}
func (this *QSqlRelationalTableModel) OnInsertRowIntoTable(slot func(super func(values *QSqlRecord) bool, values *QSqlRecord) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_insertRowIntoTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_insertRowIntoTable
func miqt_exec_callback_QSqlRelationalTableModel_insertRowIntoTable(self *C.QSqlRelationalTableModel, cb C.intptr_t, values *C.QSqlRecord) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(values *QSqlRecord) bool, values *QSqlRecord) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSqlRecord(values)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_InsertRowIntoTable, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_OrderByClause() string {

	var _ms C.struct_miqt_string = C.QSqlRelationalTableModel_virtualbase_orderByClause(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSqlRelationalTableModel) OnOrderByClause(slot func(super func() string) string) {
	ok := C.QSqlRelationalTableModel_override_virtual_orderByClause(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_orderByClause
func miqt_exec_callback_QSqlRelationalTableModel_orderByClause(self *C.QSqlRelationalTableModel, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_OrderByClause)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSqlRelationalTableModel) callVirtualBase_Flags(index *qt.QModelIndex) qt.ItemFlag {

	return (qt.ItemFlag)(C.QSqlRelationalTableModel_virtualbase_flags(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnFlags(slot func(super func(index *qt.QModelIndex) qt.ItemFlag, index *qt.QModelIndex) qt.ItemFlag) {
	ok := C.QSqlRelationalTableModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_flags
func miqt_exec_callback_QSqlRelationalTableModel_flags(self *C.QSqlRelationalTableModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex) qt.ItemFlag, index *qt.QModelIndex) qt.ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_HeaderData(section int, orientation qt.Orientation, role int) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlRelationalTableModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlRelationalTableModel) OnHeaderData(slot func(super func(section int, orientation qt.Orientation, role int) *qt.QVariant, section int, orientation qt.Orientation, role int) *qt.QVariant) {
	ok := C.QSqlRelationalTableModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_headerData
func miqt_exec_callback_QSqlRelationalTableModel_headerData(self *C.QSqlRelationalTableModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation qt.Orientation, role int) *qt.QVariant, section int, orientation qt.Orientation, role int) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (qt.Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QSqlRelationalTableModel) callVirtualBase_SetEditStrategy(strategy QSqlTableModel__EditStrategy) {

	C.QSqlRelationalTableModel_virtualbase_setEditStrategy(unsafe.Pointer(this.h), (C.int)(strategy))

}
func (this *QSqlRelationalTableModel) OnSetEditStrategy(slot func(super func(strategy QSqlTableModel__EditStrategy), strategy QSqlTableModel__EditStrategy)) {
	ok := C.QSqlRelationalTableModel_override_virtual_setEditStrategy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_setEditStrategy
func miqt_exec_callback_QSqlRelationalTableModel_setEditStrategy(self *C.QSqlRelationalTableModel, cb C.intptr_t, strategy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(strategy QSqlTableModel__EditStrategy), strategy QSqlTableModel__EditStrategy))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSqlTableModel__EditStrategy)(strategy)

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SetEditStrategy, slotval1)

}

func (this *QSqlRelationalTableModel) callVirtualBase_Sort(column int, order qt.SortOrder) {

	C.QSqlRelationalTableModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QSqlRelationalTableModel) OnSort(slot func(super func(column int, order qt.SortOrder), column int, order qt.SortOrder)) {
	ok := C.QSqlRelationalTableModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_sort
func miqt_exec_callback_QSqlRelationalTableModel_sort(self *C.QSqlRelationalTableModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order qt.SortOrder), column int, order qt.SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (qt.SortOrder)(order)

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QSqlRelationalTableModel) callVirtualBase_SetSort(column int, order qt.SortOrder) {

	C.QSqlRelationalTableModel_virtualbase_setSort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QSqlRelationalTableModel) OnSetSort(slot func(super func(column int, order qt.SortOrder), column int, order qt.SortOrder)) {
	ok := C.QSqlRelationalTableModel_override_virtual_setSort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_setSort
func miqt_exec_callback_QSqlRelationalTableModel_setSort(self *C.QSqlRelationalTableModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order qt.SortOrder), column int, order qt.SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (qt.SortOrder)(order)

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SetSort, slotval1, slotval2)

}

func (this *QSqlRelationalTableModel) callVirtualBase_SetFilter(filter string) {
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))

	C.QSqlRelationalTableModel_virtualbase_setFilter(unsafe.Pointer(this.h), filter_ms)

}
func (this *QSqlRelationalTableModel) OnSetFilter(slot func(super func(filter string), filter string)) {
	ok := C.QSqlRelationalTableModel_override_virtual_setFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_setFilter
func miqt_exec_callback_QSqlRelationalTableModel_setFilter(self *C.QSqlRelationalTableModel, cb C.intptr_t, filter C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(filter string), filter string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var filter_ms C.struct_miqt_string = filter
	filter_ret := C.GoStringN(filter_ms.data, C.int(int64(filter_ms.len)))
	C.free(unsafe.Pointer(filter_ms.data))
	slotval1 := filter_ret

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SetFilter, slotval1)

}

func (this *QSqlRelationalTableModel) callVirtualBase_RowCount(parent *qt.QModelIndex) int {

	return (int)(C.QSqlRelationalTableModel_virtualbase_rowCount(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnRowCount(slot func(super func(parent *qt.QModelIndex) int, parent *qt.QModelIndex) int) {
	ok := C.QSqlRelationalTableModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_rowCount
func miqt_exec_callback_QSqlRelationalTableModel_rowCount(self *C.QSqlRelationalTableModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QModelIndex) int, parent *qt.QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_RemoveRows(row int, count int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnRemoveRows(slot func(super func(row int, count int, parent *qt.QModelIndex) bool, row int, count int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_removeRows
func miqt_exec_callback_QSqlRelationalTableModel_removeRows(self *C.QSqlRelationalTableModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *qt.QModelIndex) bool, row int, count int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_InsertRows(row int, count int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnInsertRows(slot func(super func(row int, count int, parent *qt.QModelIndex) bool, row int, count int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_insertRows
func miqt_exec_callback_QSqlRelationalTableModel_insertRows(self *C.QSqlRelationalTableModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *qt.QModelIndex) bool, row int, count int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_SelectRow(row int) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_selectRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QSqlRelationalTableModel) OnSelectRow(slot func(super func(row int) bool, row int) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_selectRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_selectRow
func miqt_exec_callback_QSqlRelationalTableModel_selectRow(self *C.QSqlRelationalTableModel, cb C.intptr_t, row C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) bool, row int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SelectRow, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_Submit() bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QSqlRelationalTableModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_submit
func miqt_exec_callback_QSqlRelationalTableModel_submit(self *C.QSqlRelationalTableModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_Revert() {

	C.QSqlRelationalTableModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QSqlRelationalTableModel) OnRevert(slot func(super func())) {
	ok := C.QSqlRelationalTableModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_revert
func miqt_exec_callback_QSqlRelationalTableModel_revert(self *C.QSqlRelationalTableModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Revert)

}

func (this *QSqlRelationalTableModel) callVirtualBase_DeleteRowFromTable(row int) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_deleteRowFromTable(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QSqlRelationalTableModel) OnDeleteRowFromTable(slot func(super func(row int) bool, row int) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_deleteRowFromTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_deleteRowFromTable
func miqt_exec_callback_QSqlRelationalTableModel_deleteRowFromTable(self *C.QSqlRelationalTableModel, cb C.intptr_t, row C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) bool, row int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_DeleteRowFromTable, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_IndexInQuery(item *qt.QModelIndex) *qt.QModelIndex {

	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlRelationalTableModel_virtualbase_indexInQuery(unsafe.Pointer(this.h), (*C.QModelIndex)(item.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlRelationalTableModel) OnIndexInQuery(slot func(super func(item *qt.QModelIndex) *qt.QModelIndex, item *qt.QModelIndex) *qt.QModelIndex) {
	ok := C.QSqlRelationalTableModel_override_virtual_indexInQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_indexInQuery
func miqt_exec_callback_QSqlRelationalTableModel_indexInQuery(self *C.QSqlRelationalTableModel, cb C.intptr_t, item *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt.QModelIndex) *qt.QModelIndex, item *qt.QModelIndex) *qt.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(item))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_IndexInQuery, slotval1)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QSqlRelationalTableModel) callVirtualBase_ColumnCount(parent *qt.QModelIndex) int {

	return (int)(C.QSqlRelationalTableModel_virtualbase_columnCount(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnColumnCount(slot func(super func(parent *qt.QModelIndex) int, parent *qt.QModelIndex) int) {
	ok := C.QSqlRelationalTableModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_columnCount
func miqt_exec_callback_QSqlRelationalTableModel_columnCount(self *C.QSqlRelationalTableModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QModelIndex) int, parent *qt.QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_SetHeaderData(section int, orientation qt.Orientation, value *qt.QVariant, role int) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))

}
func (this *QSqlRelationalTableModel) OnSetHeaderData(slot func(super func(section int, orientation qt.Orientation, value *qt.QVariant, role int) bool, section int, orientation qt.Orientation, value *qt.QVariant, role int) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_setHeaderData
func miqt_exec_callback_QSqlRelationalTableModel_setHeaderData(self *C.QSqlRelationalTableModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation qt.Orientation, value *qt.QVariant, role int) bool, section int, orientation qt.Orientation, value *qt.QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (qt.Orientation)(orientation)

	slotval3 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_InsertColumns(column int, count int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnInsertColumns(slot func(super func(column int, count int, parent *qt.QModelIndex) bool, column int, count int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_insertColumns
func miqt_exec_callback_QSqlRelationalTableModel_insertColumns(self *C.QSqlRelationalTableModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *qt.QModelIndex) bool, column int, count int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_FetchMore(parent *qt.QModelIndex) {

	C.QSqlRelationalTableModel_virtualbase_fetchMore(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()))

}
func (this *QSqlRelationalTableModel) OnFetchMore(slot func(super func(parent *qt.QModelIndex), parent *qt.QModelIndex)) {
	ok := C.QSqlRelationalTableModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_fetchMore
func miqt_exec_callback_QSqlRelationalTableModel_fetchMore(self *C.QSqlRelationalTableModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QModelIndex), parent *qt.QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QSqlRelationalTableModel) callVirtualBase_CanFetchMore(parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnCanFetchMore(slot func(super func(parent *qt.QModelIndex) bool, parent *qt.QModelIndex) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_canFetchMore
func miqt_exec_callback_QSqlRelationalTableModel_canFetchMore(self *C.QSqlRelationalTableModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QModelIndex) bool, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QSqlRelationalTableModel_virtualbase_roleNames(unsafe.Pointer(this.h))
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
func (this *QSqlRelationalTableModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QSqlRelationalTableModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_roleNames
func miqt_exec_callback_QSqlRelationalTableModel_roleNames(self *C.QSqlRelationalTableModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_RoleNames)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_v_alias := C.struct_miqt_string{}
		if len(virtualReturn_v) > 0 {
			virtualReturn_v_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn_v[0]))
		} else {
			virtualReturn_v_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		virtualReturn_v_alias.len = C.size_t(len(virtualReturn_v))
		virtualReturn_Values_CArray[virtualReturn_ctr] = virtualReturn_v_alias
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}

func (this *QSqlRelationalTableModel) callVirtualBase_QueryChange() {

	C.QSqlRelationalTableModel_virtualbase_queryChange(unsafe.Pointer(this.h))

}
func (this *QSqlRelationalTableModel) OnQueryChange(slot func(super func())) {
	ok := C.QSqlRelationalTableModel_override_virtual_queryChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_queryChange
func miqt_exec_callback_QSqlRelationalTableModel_queryChange(self *C.QSqlRelationalTableModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_QueryChange)

}

func (this *QSqlRelationalTableModel) callVirtualBase_Index(row int, column int, parent *qt.QModelIndex) *qt.QModelIndex {

	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlRelationalTableModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlRelationalTableModel) OnIndex(slot func(super func(row int, column int, parent *qt.QModelIndex) *qt.QModelIndex, row int, column int, parent *qt.QModelIndex) *qt.QModelIndex) {
	ok := C.QSqlRelationalTableModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_index
func miqt_exec_callback_QSqlRelationalTableModel_index(self *C.QSqlRelationalTableModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *qt.QModelIndex) *qt.QModelIndex, row int, column int, parent *qt.QModelIndex) *qt.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QSqlRelationalTableModel) callVirtualBase_Sibling(row int, column int, idx *qt.QModelIndex) *qt.QModelIndex {

	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlRelationalTableModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), (*C.QModelIndex)(idx.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlRelationalTableModel) OnSibling(slot func(super func(row int, column int, idx *qt.QModelIndex) *qt.QModelIndex, row int, column int, idx *qt.QModelIndex) *qt.QModelIndex) {
	ok := C.QSqlRelationalTableModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_sibling
func miqt_exec_callback_QSqlRelationalTableModel_sibling(self *C.QSqlRelationalTableModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *qt.QModelIndex) *qt.QModelIndex, row int, column int, idx *qt.QModelIndex) *qt.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(idx))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QSqlRelationalTableModel) callVirtualBase_DropMimeData(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(data.UnsafePointer()), (C.int)(action), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnDropMimeData(slot func(super func(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool, data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_dropMimeData
func miqt_exec_callback_QSqlRelationalTableModel_dropMimeData(self *C.QSqlRelationalTableModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool, data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMimeData(unsafe.Pointer(data))

	slotval2 := (qt.DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_ItemData(index *qt.QModelIndex) map[int]qt.QVariant {

	var _mm C.struct_miqt_map = C.QSqlRelationalTableModel_virtualbase_itemData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))
	_ret := make(map[int]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QSqlRelationalTableModel) OnItemData(slot func(super func(index *qt.QModelIndex) map[int]qt.QVariant, index *qt.QModelIndex) map[int]qt.QVariant) {
	ok := C.QSqlRelationalTableModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_itemData
func miqt_exec_callback_QSqlRelationalTableModel_itemData(self *C.QSqlRelationalTableModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex) map[int]qt.QVariant, index *qt.QModelIndex) map[int]qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_ItemData, slotval1)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_Values_CArray[virtualReturn_ctr] = (*C.QVariant)(virtualReturn_v.UnsafePointer())
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}

func (this *QSqlRelationalTableModel) callVirtualBase_SetItemData(index *qt.QModelIndex, roles map[int]qt.QVariant) bool {
	roles_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Keys_CArray))
	roles_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Values_CArray))
	roles_ctr := 0
	for roles_k, roles_v := range roles {
		roles_Keys_CArray[roles_ctr] = (C.int)(roles_k)
		roles_Values_CArray[roles_ctr] = (*C.QVariant)(roles_v.UnsafePointer())
		roles_ctr++
	}
	roles_mm := C.struct_miqt_map{
		len:    C.size_t(len(roles)),
		keys:   unsafe.Pointer(roles_Keys_CArray),
		values: unsafe.Pointer(roles_Values_CArray),
	}

	return (bool)(C.QSqlRelationalTableModel_virtualbase_setItemData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()), roles_mm))

}
func (this *QSqlRelationalTableModel) OnSetItemData(slot func(super func(index *qt.QModelIndex, roles map[int]qt.QVariant) bool, index *qt.QModelIndex, roles map[int]qt.QVariant) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_setItemData
func miqt_exec_callback_QSqlRelationalTableModel_setItemData(self *C.QSqlRelationalTableModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex, roles map[int]qt.QVariant) bool, index *qt.QModelIndex, roles map[int]qt.QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	var roles_mm C.struct_miqt_map = roles
	roles_ret := make(map[int]qt.QVariant, int(roles_mm.len))
	roles_Keys := (*[0xffff]C.int)(unsafe.Pointer(roles_mm.keys))
	roles_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(roles_mm.values))
	for i := 0; i < int(roles_mm.len); i++ {
		roles_entry_Key := (int)(roles_Keys[i])

		roles_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(roles_Values[i]))
		roles_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		roles_entry_Value := *roles_mapval_goptr

		roles_ret[roles_entry_Key] = roles_entry_Value
	}
	slotval2 := roles_ret

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QSqlRelationalTableModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QSqlRelationalTableModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QSqlRelationalTableModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_mimeTypes
func miqt_exec_callback_QSqlRelationalTableModel_mimeTypes(self *C.QSqlRelationalTableModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_MimeTypes)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QSqlRelationalTableModel) callVirtualBase_MimeData(indexes []qt.QModelIndex) *qt.QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (*C.QModelIndex)(indexes[i].UnsafePointer())
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return qt.UnsafeNewQMimeData(unsafe.Pointer(C.QSqlRelationalTableModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma)))

}
func (this *QSqlRelationalTableModel) OnMimeData(slot func(super func(indexes []qt.QModelIndex) *qt.QMimeData, indexes []qt.QModelIndex) *qt.QMimeData) {
	ok := C.QSqlRelationalTableModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_mimeData
func miqt_exec_callback_QSqlRelationalTableModel_mimeData(self *C.QSqlRelationalTableModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indexes []qt.QModelIndex) *qt.QMimeData, indexes []qt.QModelIndex) *qt.QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]qt.QModelIndex, int(indexes_ma.len))
	indexes_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(indexes_ma.data)) // hey ya
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_lv_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(indexes_outCast[i]))
		indexes_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		indexes_ret[i] = *indexes_lv_goptr
	}
	slotval1 := indexes_ret

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_MimeData, slotval1)

	return (*C.QMimeData)(virtualReturn.UnsafePointer())

}

func (this *QSqlRelationalTableModel) callVirtualBase_CanDropMimeData(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(data.UnsafePointer()), (C.int)(action), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnCanDropMimeData(slot func(super func(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool, data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_canDropMimeData
func miqt_exec_callback_QSqlRelationalTableModel_canDropMimeData(self *C.QSqlRelationalTableModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool, data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMimeData(unsafe.Pointer(data))

	slotval2 := (qt.DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_SupportedDropActions() qt.DropAction {

	return (qt.DropAction)(C.QSqlRelationalTableModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QSqlRelationalTableModel) OnSupportedDropActions(slot func(super func() qt.DropAction) qt.DropAction) {
	ok := C.QSqlRelationalTableModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_supportedDropActions
func miqt_exec_callback_QSqlRelationalTableModel_supportedDropActions(self *C.QSqlRelationalTableModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt.DropAction) qt.DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_SupportedDragActions() qt.DropAction {

	return (qt.DropAction)(C.QSqlRelationalTableModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QSqlRelationalTableModel) OnSupportedDragActions(slot func(super func() qt.DropAction) qt.DropAction) {
	ok := C.QSqlRelationalTableModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_supportedDragActions
func miqt_exec_callback_QSqlRelationalTableModel_supportedDragActions(self *C.QSqlRelationalTableModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt.DropAction) qt.DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_MoveRows(sourceParent *qt.QModelIndex, sourceRow int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_moveRows(unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceRow), (C.int)(count), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationChild)))

}
func (this *QSqlRelationalTableModel) OnMoveRows(slot func(super func(sourceParent *qt.QModelIndex, sourceRow int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool, sourceParent *qt.QModelIndex, sourceRow int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_moveRows
func miqt_exec_callback_QSqlRelationalTableModel_moveRows(self *C.QSqlRelationalTableModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent *qt.QModelIndex, sourceRow int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool, sourceParent *qt.QModelIndex, sourceRow int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(sourceParent))

	slotval2 := (int)(sourceRow)

	slotval3 := (int)(count)

	slotval4 := qt.UnsafeNewQModelIndex(unsafe.Pointer(destinationParent))

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_MoveColumns(sourceParent *qt.QModelIndex, sourceColumn int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_moveColumns(unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceColumn), (C.int)(count), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationChild)))

}
func (this *QSqlRelationalTableModel) OnMoveColumns(slot func(super func(sourceParent *qt.QModelIndex, sourceColumn int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool, sourceParent *qt.QModelIndex, sourceColumn int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_moveColumns
func miqt_exec_callback_QSqlRelationalTableModel_moveColumns(self *C.QSqlRelationalTableModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent *qt.QModelIndex, sourceColumn int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool, sourceParent *qt.QModelIndex, sourceColumn int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(sourceParent))

	slotval2 := (int)(sourceColumn)

	slotval3 := (int)(count)

	slotval4 := qt.UnsafeNewQModelIndex(unsafe.Pointer(destinationParent))

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_Buddy(index *qt.QModelIndex) *qt.QModelIndex {

	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlRelationalTableModel_virtualbase_buddy(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlRelationalTableModel) OnBuddy(slot func(super func(index *qt.QModelIndex) *qt.QModelIndex, index *qt.QModelIndex) *qt.QModelIndex) {
	ok := C.QSqlRelationalTableModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_buddy
func miqt_exec_callback_QSqlRelationalTableModel_buddy(self *C.QSqlRelationalTableModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex) *qt.QModelIndex, index *qt.QModelIndex) *qt.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Buddy, slotval1)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QSqlRelationalTableModel) callVirtualBase_Match(start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex {

	var _ma C.struct_miqt_array = C.QSqlRelationalTableModel_virtualbase_match(unsafe.Pointer(this.h), (*C.QModelIndex)(start.UnsafePointer()), (C.int)(role), (*C.QVariant)(value.UnsafePointer()), (C.int)(hits), (C.int)(flags))
	_ret := make([]qt.QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QSqlRelationalTableModel) OnMatch(slot func(super func(start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex, start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex) {
	ok := C.QSqlRelationalTableModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_match
func miqt_exec_callback_QSqlRelationalTableModel_match(self *C.QSqlRelationalTableModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex, start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(start))

	slotval2 := (int)(role)

	slotval3 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval4 := (int)(hits)

	slotval5 := (qt.MatchFlag)(flags)

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QModelIndex)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QSqlRelationalTableModel) callVirtualBase_Span(index *qt.QModelIndex) *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QSqlRelationalTableModel_virtualbase_span(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlRelationalTableModel) OnSpan(slot func(super func(index *qt.QModelIndex) *qt.QSize, index *qt.QModelIndex) *qt.QSize) {
	ok := C.QSqlRelationalTableModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_span
func miqt_exec_callback_QSqlRelationalTableModel_span(self *C.QSqlRelationalTableModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex) *qt.QSize, index *qt.QModelIndex) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Span, slotval1)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QSqlRelationalTableModel) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_event
func miqt_exec_callback_QSqlRelationalTableModel_event(self *C.QSqlRelationalTableModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QSqlRelationalTableModel_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSqlRelationalTableModel) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QSqlRelationalTableModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_eventFilter
func miqt_exec_callback_QSqlRelationalTableModel_eventFilter(self *C.QSqlRelationalTableModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlRelationalTableModel) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QSqlRelationalTableModel_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSqlRelationalTableModel) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QSqlRelationalTableModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_timerEvent
func miqt_exec_callback_QSqlRelationalTableModel_timerEvent(self *C.QSqlRelationalTableModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSqlRelationalTableModel) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QSqlRelationalTableModel_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSqlRelationalTableModel) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QSqlRelationalTableModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_childEvent
func miqt_exec_callback_QSqlRelationalTableModel_childEvent(self *C.QSqlRelationalTableModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSqlRelationalTableModel) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QSqlRelationalTableModel_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSqlRelationalTableModel) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QSqlRelationalTableModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_customEvent
func miqt_exec_callback_QSqlRelationalTableModel_customEvent(self *C.QSqlRelationalTableModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSqlRelationalTableModel) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QSqlRelationalTableModel_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSqlRelationalTableModel) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSqlRelationalTableModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_connectNotify
func miqt_exec_callback_QSqlRelationalTableModel_connectNotify(self *C.QSqlRelationalTableModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSqlRelationalTableModel) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QSqlRelationalTableModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSqlRelationalTableModel) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSqlRelationalTableModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlRelationalTableModel_disconnectNotify
func miqt_exec_callback_QSqlRelationalTableModel_disconnectNotify(self *C.QSqlRelationalTableModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSqlRelationalTableModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSqlRelationalTableModel) Delete() {
	C.QSqlRelationalTableModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSqlRelationalTableModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QSqlRelationalTableModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
