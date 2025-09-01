package sql

/*

#include "gen_qsqltablemodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSqlTableModel__EditStrategy int

const (
	QSqlTableModel__OnFieldChange  QSqlTableModel__EditStrategy = 0
	QSqlTableModel__OnRowChange    QSqlTableModel__EditStrategy = 1
	QSqlTableModel__OnManualSubmit QSqlTableModel__EditStrategy = 2
)

type QSqlTableModel struct {
	h *C.QSqlTableModel
	*QSqlQueryModel
}

func (this *QSqlTableModel) cPointer() *C.QSqlTableModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlTableModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlTableModel constructs the type using only CGO pointers.
func newQSqlTableModel(h *C.QSqlTableModel) *QSqlTableModel {
	if h == nil {
		return nil
	}
	var outptr_QSqlQueryModel *C.QSqlQueryModel = nil
	C.QSqlTableModel_virtbase(h, &outptr_QSqlQueryModel)

	return &QSqlTableModel{h: h,
		QSqlQueryModel: newQSqlQueryModel(outptr_QSqlQueryModel)}
}

// UnsafeNewQSqlTableModel constructs the type using only unsafe pointers.
func UnsafeNewQSqlTableModel(h unsafe.Pointer) *QSqlTableModel {
	return newQSqlTableModel((*C.QSqlTableModel)(h))
}

// NewQSqlTableModel constructs a new QSqlTableModel object.
func NewQSqlTableModel() *QSqlTableModel {

	return newQSqlTableModel(C.QSqlTableModel_new())
}

// NewQSqlTableModel2 constructs a new QSqlTableModel object.
func NewQSqlTableModel2(parent *qt.QObject) *QSqlTableModel {

	return newQSqlTableModel(C.QSqlTableModel_new2((*C.QObject)(parent.UnsafePointer())))
}

// NewQSqlTableModel3 constructs a new QSqlTableModel object.
func NewQSqlTableModel3(parent *qt.QObject, db QSqlDatabase) *QSqlTableModel {

	return newQSqlTableModel(C.QSqlTableModel_new3((*C.QObject)(parent.UnsafePointer()), db.cPointer()))
}

func (this *QSqlTableModel) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QSqlTableModel_metaObject(this.h)))
}

func (this *QSqlTableModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSqlTableModel_metacast(this.h, param1_Cstring))
}

func QSqlTableModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSqlTableModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlTableModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSqlTableModel_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlTableModel) SetTable(tableName string) {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))
	C.QSqlTableModel_setTable(this.h, tableName_ms)
}

func (this *QSqlTableModel) TableName() string {
	var _ms C.struct_miqt_string = C.QSqlTableModel_tableName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlTableModel) Flags(index *qt.QModelIndex) qt.ItemFlag {
	return (qt.ItemFlag)(C.QSqlTableModel_flags(this.h, (*C.QModelIndex)(index.UnsafePointer())))
}

func (this *QSqlTableModel) Record() *QSqlRecord {
	_goptr := newQSqlRecord(C.QSqlTableModel_record(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlTableModel) RecordWithRow(row int) *QSqlRecord {
	_goptr := newQSqlRecord(C.QSqlTableModel_recordWithRow(this.h, (C.int)(row)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlTableModel) Data(idx *qt.QModelIndex, role int) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlTableModel_data(this.h, (*C.QModelIndex)(idx.UnsafePointer()), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlTableModel) SetData(index *qt.QModelIndex, value *qt.QVariant, role int) bool {
	return (bool)(C.QSqlTableModel_setData(this.h, (*C.QModelIndex)(index.UnsafePointer()), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))
}

func (this *QSqlTableModel) HeaderData(section int, orientation qt.Orientation, role int) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlTableModel_headerData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlTableModel) IsDirty() bool {
	return (bool)(C.QSqlTableModel_isDirty(this.h))
}

func (this *QSqlTableModel) IsDirtyWithIndex(index *qt.QModelIndex) bool {
	return (bool)(C.QSqlTableModel_isDirtyWithIndex(this.h, (*C.QModelIndex)(index.UnsafePointer())))
}

func (this *QSqlTableModel) Clear() {
	C.QSqlTableModel_clear(this.h)
}

func (this *QSqlTableModel) SetEditStrategy(strategy QSqlTableModel__EditStrategy) {
	C.QSqlTableModel_setEditStrategy(this.h, (C.int)(strategy))
}

func (this *QSqlTableModel) EditStrategy() QSqlTableModel__EditStrategy {
	return (QSqlTableModel__EditStrategy)(C.QSqlTableModel_editStrategy(this.h))
}

func (this *QSqlTableModel) PrimaryKey() *QSqlIndex {
	_goptr := newQSqlIndex(C.QSqlTableModel_primaryKey(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlTableModel) Database() *QSqlDatabase {
	_goptr := newQSqlDatabase(C.QSqlTableModel_database(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlTableModel) FieldIndex(fieldName string) int {
	fieldName_ms := C.struct_miqt_string{}
	fieldName_ms.data = C.CString(fieldName)
	fieldName_ms.len = C.size_t(len(fieldName))
	defer C.free(unsafe.Pointer(fieldName_ms.data))
	return (int)(C.QSqlTableModel_fieldIndex(this.h, fieldName_ms))
}

func (this *QSqlTableModel) Sort(column int, order qt.SortOrder) {
	C.QSqlTableModel_sort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QSqlTableModel) SetSort(column int, order qt.SortOrder) {
	C.QSqlTableModel_setSort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QSqlTableModel) Filter() string {
	var _ms C.struct_miqt_string = C.QSqlTableModel_filter(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlTableModel) SetFilter(filter string) {
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	C.QSqlTableModel_setFilter(this.h, filter_ms)
}

func (this *QSqlTableModel) RowCount(parent *qt.QModelIndex) int {
	return (int)(C.QSqlTableModel_rowCount(this.h, (*C.QModelIndex)(parent.UnsafePointer())))
}

func (this *QSqlTableModel) RemoveColumns(column int, count int, parent *qt.QModelIndex) bool {
	return (bool)(C.QSqlTableModel_removeColumns(this.h, (C.int)(column), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))
}

func (this *QSqlTableModel) RemoveRows(row int, count int, parent *qt.QModelIndex) bool {
	return (bool)(C.QSqlTableModel_removeRows(this.h, (C.int)(row), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))
}

func (this *QSqlTableModel) InsertRows(row int, count int, parent *qt.QModelIndex) bool {
	return (bool)(C.QSqlTableModel_insertRows(this.h, (C.int)(row), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))
}

func (this *QSqlTableModel) InsertRecord(row int, record *QSqlRecord) bool {
	return (bool)(C.QSqlTableModel_insertRecord(this.h, (C.int)(row), record.cPointer()))
}

func (this *QSqlTableModel) SetRecord(row int, record *QSqlRecord) bool {
	return (bool)(C.QSqlTableModel_setRecord(this.h, (C.int)(row), record.cPointer()))
}

func (this *QSqlTableModel) RevertRow(row int) {
	C.QSqlTableModel_revertRow(this.h, (C.int)(row))
}

func (this *QSqlTableModel) Select() bool {
	return (bool)(C.QSqlTableModel_select(this.h))
}

func (this *QSqlTableModel) SelectRow(row int) bool {
	return (bool)(C.QSqlTableModel_selectRow(this.h, (C.int)(row)))
}

func (this *QSqlTableModel) Submit() bool {
	return (bool)(C.QSqlTableModel_submit(this.h))
}

func (this *QSqlTableModel) Revert() {
	C.QSqlTableModel_revert(this.h)
}

func (this *QSqlTableModel) SubmitAll() bool {
	return (bool)(C.QSqlTableModel_submitAll(this.h))
}

func (this *QSqlTableModel) RevertAll() {
	C.QSqlTableModel_revertAll(this.h)
}

func (this *QSqlTableModel) PrimeInsert(row int, record *QSqlRecord) {
	C.QSqlTableModel_primeInsert(this.h, (C.int)(row), record.cPointer())
}
func (this *QSqlTableModel) OnPrimeInsert(slot func(row int, record *QSqlRecord)) {
	C.QSqlTableModel_connect_primeInsert(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSqlTableModel_primeInsert
func miqt_exec_callback_QSqlTableModel_primeInsert(cb C.intptr_t, row C.int, record *C.QSqlRecord) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, record *QSqlRecord))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := newQSqlRecord(record)

	gofunc(slotval1, slotval2)
}

func (this *QSqlTableModel) BeforeInsert(record *QSqlRecord) {
	C.QSqlTableModel_beforeInsert(this.h, record.cPointer())
}
func (this *QSqlTableModel) OnBeforeInsert(slot func(record *QSqlRecord)) {
	C.QSqlTableModel_connect_beforeInsert(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSqlTableModel_beforeInsert
func miqt_exec_callback_QSqlTableModel_beforeInsert(cb C.intptr_t, record *C.QSqlRecord) {
	gofunc, ok := cgo.Handle(cb).Value().(func(record *QSqlRecord))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSqlRecord(record)

	gofunc(slotval1)
}

func (this *QSqlTableModel) BeforeUpdate(row int, record *QSqlRecord) {
	C.QSqlTableModel_beforeUpdate(this.h, (C.int)(row), record.cPointer())
}
func (this *QSqlTableModel) OnBeforeUpdate(slot func(row int, record *QSqlRecord)) {
	C.QSqlTableModel_connect_beforeUpdate(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSqlTableModel_beforeUpdate
func miqt_exec_callback_QSqlTableModel_beforeUpdate(cb C.intptr_t, row C.int, record *C.QSqlRecord) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, record *QSqlRecord))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := newQSqlRecord(record)

	gofunc(slotval1, slotval2)
}

func (this *QSqlTableModel) BeforeDelete(row int) {
	C.QSqlTableModel_beforeDelete(this.h, (C.int)(row))
}
func (this *QSqlTableModel) OnBeforeDelete(slot func(row int)) {
	C.QSqlTableModel_connect_beforeDelete(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSqlTableModel_beforeDelete
func miqt_exec_callback_QSqlTableModel_beforeDelete(cb C.intptr_t, row C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	gofunc(slotval1)
}

func QSqlTableModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlTableModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlTableModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlTableModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlTableModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlTableModel_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlTableModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlTableModel_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetPrimaryKey can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) SetPrimaryKey(key *QSqlIndex) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_setPrimaryKey(&_dynamic_cast_ok, unsafe.Pointer(this.h), key.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetQuery can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) SetQuery(query *QSqlQuery) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_setQuery(&_dynamic_cast_ok, unsafe.Pointer(this.h), query.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrimaryValues can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) PrimaryValues(row int) QSqlRecord {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQSqlRecord(C.QSqlTableModel_protectedbase_primaryValues(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginInsertRows can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) BeginInsertRows(parent *qt.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_beginInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertRows can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) EndInsertRows() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_endInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveRows can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) BeginRemoveRows(parent *qt.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_beginRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveRows can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) EndRemoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_endRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginInsertColumns can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) BeginInsertColumns(parent *qt.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_beginInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertColumns can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) EndInsertColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_endInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveColumns can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) BeginRemoveColumns(parent *qt.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_beginRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveColumns can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) EndRemoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_endRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginResetModel can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) BeginResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_beginResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndResetModel can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) EndResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_endResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLastError can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) SetLastError(error *QSqlError) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_setLastError(&_dynamic_cast_ok, unsafe.Pointer(this.h), error.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ResetInternalData can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) ResetInternalData() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_resetInternalData(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// CreateIndex can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) CreateIndex(row int, column int) qt.QModelIndex {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlTableModel_protectedbase_createIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EncodeData can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) EncodeData(indexes []qt.QModelIndex, stream *qt.QDataStream) {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (*C.QModelIndex)(indexes[i].UnsafePointer())
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_encodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), indexes_ma, (*C.QDataStream)(stream.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DecodeData can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) DecodeData(row int, column int, parent *qt.QModelIndex, stream *qt.QDataStream) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlTableModel_protectedbase_decodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer()), (*C.QDataStream)(stream.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginMoveRows can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) BeginMoveRows(sourceParent *qt.QModelIndex, sourceFirst int, sourceLast int, destinationParent *qt.QModelIndex, destinationRow int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlTableModel_protectedbase_beginMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceFirst), (C.int)(sourceLast), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationRow)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveRows can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) EndMoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_endMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveColumns can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) BeginMoveColumns(sourceParent *qt.QModelIndex, sourceFirst int, sourceLast int, destinationParent *qt.QModelIndex, destinationColumn int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlTableModel_protectedbase_beginMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceFirst), (C.int)(sourceLast), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveColumns can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) EndMoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_endMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndex can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) ChangePersistentIndex(from *qt.QModelIndex, to *qt.QModelIndex) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlTableModel_protectedbase_changePersistentIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(from.UnsafePointer()), (*C.QModelIndex)(to.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndexList can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) ChangePersistentIndexList(from []qt.QModelIndex, to []qt.QModelIndex) {
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
	C.QSqlTableModel_protectedbase_changePersistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h), from_ma, to_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PersistentIndexList can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) PersistentIndexList() []qt.QModelIndex {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QSqlTableModel_protectedbase_persistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h))
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

// Sender can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QSqlTableModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSqlTableModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSqlTableModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSqlTableModel that was directly constructed.
func (this *QSqlTableModel) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlTableModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSqlTableModel) callVirtualBase_SetTable(tableName string) {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))

	C.QSqlTableModel_virtualbase_setTable(unsafe.Pointer(this.h), tableName_ms)

}
func (this *QSqlTableModel) OnSetTable(slot func(super func(tableName string), tableName string)) {
	ok := C.QSqlTableModel_override_virtual_setTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_setTable
func miqt_exec_callback_QSqlTableModel_setTable(self *C.QSqlTableModel, cb C.intptr_t, tableName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(tableName string), tableName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var tableName_ms C.struct_miqt_string = tableName
	tableName_ret := C.GoStringN(tableName_ms.data, C.int(int64(tableName_ms.len)))
	C.free(unsafe.Pointer(tableName_ms.data))
	slotval1 := tableName_ret

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_SetTable, slotval1)

}

func (this *QSqlTableModel) callVirtualBase_Flags(index *qt.QModelIndex) qt.ItemFlag {

	return (qt.ItemFlag)(C.QSqlTableModel_virtualbase_flags(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer())))

}
func (this *QSqlTableModel) OnFlags(slot func(super func(index *qt.QModelIndex) qt.ItemFlag, index *qt.QModelIndex) qt.ItemFlag) {
	ok := C.QSqlTableModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_flags
func miqt_exec_callback_QSqlTableModel_flags(self *C.QSqlTableModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex) qt.ItemFlag, index *qt.QModelIndex) qt.ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_Data(idx *qt.QModelIndex, role int) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlTableModel_virtualbase_data(unsafe.Pointer(this.h), (*C.QModelIndex)(idx.UnsafePointer()), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlTableModel) OnData(slot func(super func(idx *qt.QModelIndex, role int) *qt.QVariant, idx *qt.QModelIndex, role int) *qt.QVariant) {
	ok := C.QSqlTableModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_data
func miqt_exec_callback_QSqlTableModel_data(self *C.QSqlTableModel, cb C.intptr_t, idx *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(idx *qt.QModelIndex, role int) *qt.QVariant, idx *qt.QModelIndex, role int) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(idx))

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QSqlTableModel) callVirtualBase_SetData(index *qt.QModelIndex, value *qt.QVariant, role int) bool {

	return (bool)(C.QSqlTableModel_virtualbase_setData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))

}
func (this *QSqlTableModel) OnSetData(slot func(super func(index *qt.QModelIndex, value *qt.QVariant, role int) bool, index *qt.QModelIndex, value *qt.QVariant, role int) bool) {
	ok := C.QSqlTableModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_setData
func miqt_exec_callback_QSqlTableModel_setData(self *C.QSqlTableModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex, value *qt.QVariant, role int) bool, index *qt.QModelIndex, value *qt.QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_HeaderData(section int, orientation qt.Orientation, role int) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlTableModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlTableModel) OnHeaderData(slot func(super func(section int, orientation qt.Orientation, role int) *qt.QVariant, section int, orientation qt.Orientation, role int) *qt.QVariant) {
	ok := C.QSqlTableModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_headerData
func miqt_exec_callback_QSqlTableModel_headerData(self *C.QSqlTableModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation qt.Orientation, role int) *qt.QVariant, section int, orientation qt.Orientation, role int) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (qt.Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QSqlTableModel) callVirtualBase_Clear() {

	C.QSqlTableModel_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QSqlTableModel) OnClear(slot func(super func())) {
	ok := C.QSqlTableModel_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_clear
func miqt_exec_callback_QSqlTableModel_clear(self *C.QSqlTableModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_Clear)

}

func (this *QSqlTableModel) callVirtualBase_SetEditStrategy(strategy QSqlTableModel__EditStrategy) {

	C.QSqlTableModel_virtualbase_setEditStrategy(unsafe.Pointer(this.h), (C.int)(strategy))

}
func (this *QSqlTableModel) OnSetEditStrategy(slot func(super func(strategy QSqlTableModel__EditStrategy), strategy QSqlTableModel__EditStrategy)) {
	ok := C.QSqlTableModel_override_virtual_setEditStrategy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_setEditStrategy
func miqt_exec_callback_QSqlTableModel_setEditStrategy(self *C.QSqlTableModel, cb C.intptr_t, strategy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(strategy QSqlTableModel__EditStrategy), strategy QSqlTableModel__EditStrategy))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSqlTableModel__EditStrategy)(strategy)

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_SetEditStrategy, slotval1)

}

func (this *QSqlTableModel) callVirtualBase_Sort(column int, order qt.SortOrder) {

	C.QSqlTableModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QSqlTableModel) OnSort(slot func(super func(column int, order qt.SortOrder), column int, order qt.SortOrder)) {
	ok := C.QSqlTableModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_sort
func miqt_exec_callback_QSqlTableModel_sort(self *C.QSqlTableModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order qt.SortOrder), column int, order qt.SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (qt.SortOrder)(order)

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QSqlTableModel) callVirtualBase_SetSort(column int, order qt.SortOrder) {

	C.QSqlTableModel_virtualbase_setSort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QSqlTableModel) OnSetSort(slot func(super func(column int, order qt.SortOrder), column int, order qt.SortOrder)) {
	ok := C.QSqlTableModel_override_virtual_setSort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_setSort
func miqt_exec_callback_QSqlTableModel_setSort(self *C.QSqlTableModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order qt.SortOrder), column int, order qt.SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (qt.SortOrder)(order)

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_SetSort, slotval1, slotval2)

}

func (this *QSqlTableModel) callVirtualBase_SetFilter(filter string) {
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))

	C.QSqlTableModel_virtualbase_setFilter(unsafe.Pointer(this.h), filter_ms)

}
func (this *QSqlTableModel) OnSetFilter(slot func(super func(filter string), filter string)) {
	ok := C.QSqlTableModel_override_virtual_setFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_setFilter
func miqt_exec_callback_QSqlTableModel_setFilter(self *C.QSqlTableModel, cb C.intptr_t, filter C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(filter string), filter string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var filter_ms C.struct_miqt_string = filter
	filter_ret := C.GoStringN(filter_ms.data, C.int(int64(filter_ms.len)))
	C.free(unsafe.Pointer(filter_ms.data))
	slotval1 := filter_ret

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_SetFilter, slotval1)

}

func (this *QSqlTableModel) callVirtualBase_RowCount(parent *qt.QModelIndex) int {

	return (int)(C.QSqlTableModel_virtualbase_rowCount(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlTableModel) OnRowCount(slot func(super func(parent *qt.QModelIndex) int, parent *qt.QModelIndex) int) {
	ok := C.QSqlTableModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_rowCount
func miqt_exec_callback_QSqlTableModel_rowCount(self *C.QSqlTableModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QModelIndex) int, parent *qt.QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_RemoveColumns(column int, count int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlTableModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlTableModel) OnRemoveColumns(slot func(super func(column int, count int, parent *qt.QModelIndex) bool, column int, count int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlTableModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_removeColumns
func miqt_exec_callback_QSqlTableModel_removeColumns(self *C.QSqlTableModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *qt.QModelIndex) bool, column int, count int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_RemoveRows(row int, count int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlTableModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlTableModel) OnRemoveRows(slot func(super func(row int, count int, parent *qt.QModelIndex) bool, row int, count int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlTableModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_removeRows
func miqt_exec_callback_QSqlTableModel_removeRows(self *C.QSqlTableModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *qt.QModelIndex) bool, row int, count int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_InsertRows(row int, count int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlTableModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlTableModel) OnInsertRows(slot func(super func(row int, count int, parent *qt.QModelIndex) bool, row int, count int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlTableModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_insertRows
func miqt_exec_callback_QSqlTableModel_insertRows(self *C.QSqlTableModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *qt.QModelIndex) bool, row int, count int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_RevertRow(row int) {

	C.QSqlTableModel_virtualbase_revertRow(unsafe.Pointer(this.h), (C.int)(row))

}
func (this *QSqlTableModel) OnRevertRow(slot func(super func(row int), row int)) {
	ok := C.QSqlTableModel_override_virtual_revertRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_revertRow
func miqt_exec_callback_QSqlTableModel_revertRow(self *C.QSqlTableModel, cb C.intptr_t, row C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int), row int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_RevertRow, slotval1)

}

func (this *QSqlTableModel) callVirtualBase_Select() bool {

	return (bool)(C.QSqlTableModel_virtualbase_select(unsafe.Pointer(this.h)))

}
func (this *QSqlTableModel) OnSelect(slot func(super func() bool) bool) {
	ok := C.QSqlTableModel_override_virtual_select(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_select
func miqt_exec_callback_QSqlTableModel_select(self *C.QSqlTableModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Select)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_SelectRow(row int) bool {

	return (bool)(C.QSqlTableModel_virtualbase_selectRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QSqlTableModel) OnSelectRow(slot func(super func(row int) bool, row int) bool) {
	ok := C.QSqlTableModel_override_virtual_selectRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_selectRow
func miqt_exec_callback_QSqlTableModel_selectRow(self *C.QSqlTableModel, cb C.intptr_t, row C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) bool, row int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_SelectRow, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_Submit() bool {

	return (bool)(C.QSqlTableModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QSqlTableModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QSqlTableModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_submit
func miqt_exec_callback_QSqlTableModel_submit(self *C.QSqlTableModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_Revert() {

	C.QSqlTableModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QSqlTableModel) OnRevert(slot func(super func())) {
	ok := C.QSqlTableModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_revert
func miqt_exec_callback_QSqlTableModel_revert(self *C.QSqlTableModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_Revert)

}

func (this *QSqlTableModel) callVirtualBase_UpdateRowInTable(row int, values *QSqlRecord) bool {

	return (bool)(C.QSqlTableModel_virtualbase_updateRowInTable(unsafe.Pointer(this.h), (C.int)(row), values.cPointer()))

}
func (this *QSqlTableModel) OnUpdateRowInTable(slot func(super func(row int, values *QSqlRecord) bool, row int, values *QSqlRecord) bool) {
	ok := C.QSqlTableModel_override_virtual_updateRowInTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_updateRowInTable
func miqt_exec_callback_QSqlTableModel_updateRowInTable(self *C.QSqlTableModel, cb C.intptr_t, row C.int, values *C.QSqlRecord) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, values *QSqlRecord) bool, row int, values *QSqlRecord) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := newQSqlRecord(values)

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_UpdateRowInTable, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_InsertRowIntoTable(values *QSqlRecord) bool {

	return (bool)(C.QSqlTableModel_virtualbase_insertRowIntoTable(unsafe.Pointer(this.h), values.cPointer()))

}
func (this *QSqlTableModel) OnInsertRowIntoTable(slot func(super func(values *QSqlRecord) bool, values *QSqlRecord) bool) {
	ok := C.QSqlTableModel_override_virtual_insertRowIntoTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_insertRowIntoTable
func miqt_exec_callback_QSqlTableModel_insertRowIntoTable(self *C.QSqlTableModel, cb C.intptr_t, values *C.QSqlRecord) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(values *QSqlRecord) bool, values *QSqlRecord) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSqlRecord(values)

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_InsertRowIntoTable, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_DeleteRowFromTable(row int) bool {

	return (bool)(C.QSqlTableModel_virtualbase_deleteRowFromTable(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QSqlTableModel) OnDeleteRowFromTable(slot func(super func(row int) bool, row int) bool) {
	ok := C.QSqlTableModel_override_virtual_deleteRowFromTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_deleteRowFromTable
func miqt_exec_callback_QSqlTableModel_deleteRowFromTable(self *C.QSqlTableModel, cb C.intptr_t, row C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) bool, row int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_DeleteRowFromTable, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_OrderByClause() string {

	var _ms C.struct_miqt_string = C.QSqlTableModel_virtualbase_orderByClause(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSqlTableModel) OnOrderByClause(slot func(super func() string) string) {
	ok := C.QSqlTableModel_override_virtual_orderByClause(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_orderByClause
func miqt_exec_callback_QSqlTableModel_orderByClause(self *C.QSqlTableModel, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_OrderByClause)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSqlTableModel) callVirtualBase_SelectStatement() string {

	var _ms C.struct_miqt_string = C.QSqlTableModel_virtualbase_selectStatement(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSqlTableModel) OnSelectStatement(slot func(super func() string) string) {
	ok := C.QSqlTableModel_override_virtual_selectStatement(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_selectStatement
func miqt_exec_callback_QSqlTableModel_selectStatement(self *C.QSqlTableModel, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_SelectStatement)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSqlTableModel) callVirtualBase_IndexInQuery(item *qt.QModelIndex) *qt.QModelIndex {

	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlTableModel_virtualbase_indexInQuery(unsafe.Pointer(this.h), (*C.QModelIndex)(item.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlTableModel) OnIndexInQuery(slot func(super func(item *qt.QModelIndex) *qt.QModelIndex, item *qt.QModelIndex) *qt.QModelIndex) {
	ok := C.QSqlTableModel_override_virtual_indexInQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_indexInQuery
func miqt_exec_callback_QSqlTableModel_indexInQuery(self *C.QSqlTableModel, cb C.intptr_t, item *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt.QModelIndex) *qt.QModelIndex, item *qt.QModelIndex) *qt.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(item))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_IndexInQuery, slotval1)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QSqlTableModel) callVirtualBase_ColumnCount(parent *qt.QModelIndex) int {

	return (int)(C.QSqlTableModel_virtualbase_columnCount(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlTableModel) OnColumnCount(slot func(super func(parent *qt.QModelIndex) int, parent *qt.QModelIndex) int) {
	ok := C.QSqlTableModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_columnCount
func miqt_exec_callback_QSqlTableModel_columnCount(self *C.QSqlTableModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QModelIndex) int, parent *qt.QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_SetHeaderData(section int, orientation qt.Orientation, value *qt.QVariant, role int) bool {

	return (bool)(C.QSqlTableModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))

}
func (this *QSqlTableModel) OnSetHeaderData(slot func(super func(section int, orientation qt.Orientation, value *qt.QVariant, role int) bool, section int, orientation qt.Orientation, value *qt.QVariant, role int) bool) {
	ok := C.QSqlTableModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_setHeaderData
func miqt_exec_callback_QSqlTableModel_setHeaderData(self *C.QSqlTableModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation qt.Orientation, value *qt.QVariant, role int) bool, section int, orientation qt.Orientation, value *qt.QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (qt.Orientation)(orientation)

	slotval3 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_InsertColumns(column int, count int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlTableModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlTableModel) OnInsertColumns(slot func(super func(column int, count int, parent *qt.QModelIndex) bool, column int, count int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlTableModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_insertColumns
func miqt_exec_callback_QSqlTableModel_insertColumns(self *C.QSqlTableModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *qt.QModelIndex) bool, column int, count int, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_FetchMore(parent *qt.QModelIndex) {

	C.QSqlTableModel_virtualbase_fetchMore(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()))

}
func (this *QSqlTableModel) OnFetchMore(slot func(super func(parent *qt.QModelIndex), parent *qt.QModelIndex)) {
	ok := C.QSqlTableModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_fetchMore
func miqt_exec_callback_QSqlTableModel_fetchMore(self *C.QSqlTableModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QModelIndex), parent *qt.QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QSqlTableModel) callVirtualBase_CanFetchMore(parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlTableModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlTableModel) OnCanFetchMore(slot func(super func(parent *qt.QModelIndex) bool, parent *qt.QModelIndex) bool) {
	ok := C.QSqlTableModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_canFetchMore
func miqt_exec_callback_QSqlTableModel_canFetchMore(self *C.QSqlTableModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QModelIndex) bool, parent *qt.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QSqlTableModel_virtualbase_roleNames(unsafe.Pointer(this.h))
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
func (this *QSqlTableModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QSqlTableModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_roleNames
func miqt_exec_callback_QSqlTableModel_roleNames(self *C.QSqlTableModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_RoleNames)
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

func (this *QSqlTableModel) callVirtualBase_QueryChange() {

	C.QSqlTableModel_virtualbase_queryChange(unsafe.Pointer(this.h))

}
func (this *QSqlTableModel) OnQueryChange(slot func(super func())) {
	ok := C.QSqlTableModel_override_virtual_queryChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_queryChange
func miqt_exec_callback_QSqlTableModel_queryChange(self *C.QSqlTableModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_QueryChange)

}

func (this *QSqlTableModel) callVirtualBase_Index(row int, column int, parent *qt.QModelIndex) *qt.QModelIndex {

	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlTableModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlTableModel) OnIndex(slot func(super func(row int, column int, parent *qt.QModelIndex) *qt.QModelIndex, row int, column int, parent *qt.QModelIndex) *qt.QModelIndex) {
	ok := C.QSqlTableModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_index
func miqt_exec_callback_QSqlTableModel_index(self *C.QSqlTableModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *qt.QModelIndex) *qt.QModelIndex, row int, column int, parent *qt.QModelIndex) *qt.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QSqlTableModel) callVirtualBase_Sibling(row int, column int, idx *qt.QModelIndex) *qt.QModelIndex {

	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlTableModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), (*C.QModelIndex)(idx.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlTableModel) OnSibling(slot func(super func(row int, column int, idx *qt.QModelIndex) *qt.QModelIndex, row int, column int, idx *qt.QModelIndex) *qt.QModelIndex) {
	ok := C.QSqlTableModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_sibling
func miqt_exec_callback_QSqlTableModel_sibling(self *C.QSqlTableModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *qt.QModelIndex) *qt.QModelIndex, row int, column int, idx *qt.QModelIndex) *qt.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := qt.UnsafeNewQModelIndex(unsafe.Pointer(idx))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QSqlTableModel) callVirtualBase_DropMimeData(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlTableModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(data.UnsafePointer()), (C.int)(action), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlTableModel) OnDropMimeData(slot func(super func(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool, data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlTableModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_dropMimeData
func miqt_exec_callback_QSqlTableModel_dropMimeData(self *C.QSqlTableModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_ItemData(index *qt.QModelIndex) map[int]qt.QVariant {

	var _mm C.struct_miqt_map = C.QSqlTableModel_virtualbase_itemData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))
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
func (this *QSqlTableModel) OnItemData(slot func(super func(index *qt.QModelIndex) map[int]qt.QVariant, index *qt.QModelIndex) map[int]qt.QVariant) {
	ok := C.QSqlTableModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_itemData
func miqt_exec_callback_QSqlTableModel_itemData(self *C.QSqlTableModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex) map[int]qt.QVariant, index *qt.QModelIndex) map[int]qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_ItemData, slotval1)
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

func (this *QSqlTableModel) callVirtualBase_SetItemData(index *qt.QModelIndex, roles map[int]qt.QVariant) bool {
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

	return (bool)(C.QSqlTableModel_virtualbase_setItemData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()), roles_mm))

}
func (this *QSqlTableModel) OnSetItemData(slot func(super func(index *qt.QModelIndex, roles map[int]qt.QVariant) bool, index *qt.QModelIndex, roles map[int]qt.QVariant) bool) {
	ok := C.QSqlTableModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_setItemData
func miqt_exec_callback_QSqlTableModel_setItemData(self *C.QSqlTableModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
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

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QSqlTableModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QSqlTableModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QSqlTableModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_mimeTypes
func miqt_exec_callback_QSqlTableModel_mimeTypes(self *C.QSqlTableModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_MimeTypes)
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

func (this *QSqlTableModel) callVirtualBase_MimeData(indexes []qt.QModelIndex) *qt.QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (*C.QModelIndex)(indexes[i].UnsafePointer())
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return qt.UnsafeNewQMimeData(unsafe.Pointer(C.QSqlTableModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma)))

}
func (this *QSqlTableModel) OnMimeData(slot func(super func(indexes []qt.QModelIndex) *qt.QMimeData, indexes []qt.QModelIndex) *qt.QMimeData) {
	ok := C.QSqlTableModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_mimeData
func miqt_exec_callback_QSqlTableModel_mimeData(self *C.QSqlTableModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
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

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_MimeData, slotval1)

	return (*C.QMimeData)(virtualReturn.UnsafePointer())

}

func (this *QSqlTableModel) callVirtualBase_CanDropMimeData(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool {

	return (bool)(C.QSqlTableModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(data.UnsafePointer()), (C.int)(action), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QSqlTableModel) OnCanDropMimeData(slot func(super func(data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool, data *qt.QMimeData, action qt.DropAction, row int, column int, parent *qt.QModelIndex) bool) {
	ok := C.QSqlTableModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_canDropMimeData
func miqt_exec_callback_QSqlTableModel_canDropMimeData(self *C.QSqlTableModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_SupportedDropActions() qt.DropAction {

	return (qt.DropAction)(C.QSqlTableModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QSqlTableModel) OnSupportedDropActions(slot func(super func() qt.DropAction) qt.DropAction) {
	ok := C.QSqlTableModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_supportedDropActions
func miqt_exec_callback_QSqlTableModel_supportedDropActions(self *C.QSqlTableModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt.DropAction) qt.DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_SupportedDragActions() qt.DropAction {

	return (qt.DropAction)(C.QSqlTableModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QSqlTableModel) OnSupportedDragActions(slot func(super func() qt.DropAction) qt.DropAction) {
	ok := C.QSqlTableModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_supportedDragActions
func miqt_exec_callback_QSqlTableModel_supportedDragActions(self *C.QSqlTableModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt.DropAction) qt.DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_MoveRows(sourceParent *qt.QModelIndex, sourceRow int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool {

	return (bool)(C.QSqlTableModel_virtualbase_moveRows(unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceRow), (C.int)(count), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationChild)))

}
func (this *QSqlTableModel) OnMoveRows(slot func(super func(sourceParent *qt.QModelIndex, sourceRow int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool, sourceParent *qt.QModelIndex, sourceRow int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool) {
	ok := C.QSqlTableModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_moveRows
func miqt_exec_callback_QSqlTableModel_moveRows(self *C.QSqlTableModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_MoveColumns(sourceParent *qt.QModelIndex, sourceColumn int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool {

	return (bool)(C.QSqlTableModel_virtualbase_moveColumns(unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceColumn), (C.int)(count), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationChild)))

}
func (this *QSqlTableModel) OnMoveColumns(slot func(super func(sourceParent *qt.QModelIndex, sourceColumn int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool, sourceParent *qt.QModelIndex, sourceColumn int, count int, destinationParent *qt.QModelIndex, destinationChild int) bool) {
	ok := C.QSqlTableModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_moveColumns
func miqt_exec_callback_QSqlTableModel_moveColumns(self *C.QSqlTableModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_Buddy(index *qt.QModelIndex) *qt.QModelIndex {

	_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(C.QSqlTableModel_virtualbase_buddy(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlTableModel) OnBuddy(slot func(super func(index *qt.QModelIndex) *qt.QModelIndex, index *qt.QModelIndex) *qt.QModelIndex) {
	ok := C.QSqlTableModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_buddy
func miqt_exec_callback_QSqlTableModel_buddy(self *C.QSqlTableModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex) *qt.QModelIndex, index *qt.QModelIndex) *qt.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Buddy, slotval1)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QSqlTableModel) callVirtualBase_Match(start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex {

	var _ma C.struct_miqt_array = C.QSqlTableModel_virtualbase_match(unsafe.Pointer(this.h), (*C.QModelIndex)(start.UnsafePointer()), (C.int)(role), (*C.QVariant)(value.UnsafePointer()), (C.int)(hits), (C.int)(flags))
	_ret := make([]qt.QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQModelIndex(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QSqlTableModel) OnMatch(slot func(super func(start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex, start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex) {
	ok := C.QSqlTableModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_match
func miqt_exec_callback_QSqlTableModel_match(self *C.QSqlTableModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
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

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QModelIndex)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QSqlTableModel) callVirtualBase_Span(index *qt.QModelIndex) *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QSqlTableModel_virtualbase_span(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlTableModel) OnSpan(slot func(super func(index *qt.QModelIndex) *qt.QSize, index *qt.QModelIndex) *qt.QSize) {
	ok := C.QSqlTableModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_span
func miqt_exec_callback_QSqlTableModel_span(self *C.QSqlTableModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt.QModelIndex) *qt.QSize, index *qt.QModelIndex) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Span, slotval1)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QSqlTableModel) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QSqlTableModel_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSqlTableModel) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QSqlTableModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_event
func miqt_exec_callback_QSqlTableModel_event(self *C.QSqlTableModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QSqlTableModel_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSqlTableModel) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QSqlTableModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_eventFilter
func miqt_exec_callback_QSqlTableModel_eventFilter(self *C.QSqlTableModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSqlTableModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlTableModel) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QSqlTableModel_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSqlTableModel) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QSqlTableModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_timerEvent
func miqt_exec_callback_QSqlTableModel_timerEvent(self *C.QSqlTableModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSqlTableModel) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QSqlTableModel_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSqlTableModel) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QSqlTableModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_childEvent
func miqt_exec_callback_QSqlTableModel_childEvent(self *C.QSqlTableModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSqlTableModel) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QSqlTableModel_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSqlTableModel) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QSqlTableModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_customEvent
func miqt_exec_callback_QSqlTableModel_customEvent(self *C.QSqlTableModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSqlTableModel) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QSqlTableModel_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSqlTableModel) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSqlTableModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_connectNotify
func miqt_exec_callback_QSqlTableModel_connectNotify(self *C.QSqlTableModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSqlTableModel) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QSqlTableModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSqlTableModel) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSqlTableModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlTableModel_disconnectNotify
func miqt_exec_callback_QSqlTableModel_disconnectNotify(self *C.QSqlTableModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSqlTableModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSqlTableModel) Delete() {
	C.QSqlTableModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSqlTableModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QSqlTableModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
