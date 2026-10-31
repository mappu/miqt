package sql

/*

#include "gen_qsqlquerymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSqlQueryModel struct {
	h  *C.QSqlQueryModel
	gc *[1]unsafe.Pointer
	*qt6.QAbstractTableModel
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSqlQueryModel) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSqlQueryModel) cPointer() *C.QSqlQueryModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlQueryModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlQueryModel constructs the type using only CGO pointers.
func newQSqlQueryModel(h *C.QSqlQueryModel) *QSqlQueryModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractTableModel *C.QAbstractTableModel = nil
	C.QSqlQueryModel_virtbase(h, &outptr_QAbstractTableModel)

	return &QSqlQueryModel{h: h,
		QAbstractTableModel: qt6.UnsafeNewQAbstractTableModel(unsafe.Pointer(outptr_QAbstractTableModel))}
}

// UnsafeNewQSqlQueryModel constructs the type using only unsafe pointers.
func UnsafeNewQSqlQueryModel(h unsafe.Pointer) *QSqlQueryModel {
	return newQSqlQueryModel((*C.QSqlQueryModel)(h))
}

// NewQSqlQueryModel constructs a new QSqlQueryModel object.
func NewQSqlQueryModel() *QSqlQueryModel {

	return newQSqlQueryModel(C.QSqlQueryModel_new())
}

// NewQSqlQueryModel2 constructs a new QSqlQueryModel object.
func NewQSqlQueryModel2(parent *qt6.QObject) *QSqlQueryModel {

	return newQSqlQueryModel(C.QSqlQueryModel_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QSqlQueryModel) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSqlQueryModel_metaObject(this.h)))
}

func (this *QSqlQueryModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSqlQueryModel_metacast(this.h, param1_Cstring))
}

func QSqlQueryModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSqlQueryModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlQueryModel) RowCount(parent qt6.QModelIndex) int {
	return (int)(C.QSqlQueryModel_rowCount(this.h, libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))
}

func (this *QSqlQueryModel) ColumnCount(parent qt6.QModelIndex) int {
	return (int)(C.QSqlQueryModel_columnCount(this.h, libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))
}

func (this *QSqlQueryModel) Record(row int) *QSqlRecord {
	_goptr := newQSqlRecord(C.QSqlQueryModel_record(this.h, (C.int)(row)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQueryModel) Record2() *QSqlRecord {
	_goptr := newQSqlRecord(C.QSqlQueryModel_record2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQueryModel) Data(item qt6.QModelIndex, role int) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlQueryModel_data(this.h, libmiqt.ValueCast[C.struct_miqt_qmodelindex](item), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQueryModel) HeaderData(section int, orientation qt6.Orientation, role int) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlQueryModel_headerData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQueryModel) SetHeaderData(section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool {
	defer runtime.KeepAlive(value)
	return (bool)(C.QSqlQueryModel_setHeaderData(this.h, (C.int)(section), (C.int)(orientation), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))
}

func (this *QSqlQueryModel) InsertColumns(column int, count int, parent qt6.QModelIndex) bool {
	return (bool)(C.QSqlQueryModel_insertColumns(this.h, (C.int)(column), (C.int)(count), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))
}

func (this *QSqlQueryModel) RemoveColumns(column int, count int, parent qt6.QModelIndex) bool {
	return (bool)(C.QSqlQueryModel_removeColumns(this.h, (C.int)(column), (C.int)(count), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))
}

func (this *QSqlQueryModel) SetQuery(query *QSqlQuery) {
	defer runtime.KeepAlive(query)
	C.QSqlQueryModel_setQuery(this.h, query.cPointer())
}

func (this *QSqlQueryModel) SetQueryWithQuery(query string) {
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))
	C.QSqlQueryModel_setQueryWithQuery(this.h, query_ms)
}

func (this *QSqlQueryModel) Query() *QSqlQuery {
	_goptr := newQSqlQuery(C.QSqlQueryModel_query(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQueryModel) Clear() {
	C.QSqlQueryModel_clear(this.h)
}

func (this *QSqlQueryModel) LastError() *QSqlError {
	_goptr := newQSqlError(C.QSqlQueryModel_lastError(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQueryModel) FetchMore(parent qt6.QModelIndex) {
	C.QSqlQueryModel_fetchMore(this.h, libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent))
}

func (this *QSqlQueryModel) CanFetchMore(parent qt6.QModelIndex) bool {
	return (bool)(C.QSqlQueryModel_canFetchMore(this.h, libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))
}

func (this *QSqlQueryModel) RoleNames() map[int][]byte {
	var _mm C.struct_miqt_map = C.QSqlQueryModel_roleNames(this.h)
	_ret := make(map[int][]byte, int(_mm.len))
	_Keys := unsafe.Slice((*C.int)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.values)), int(_mm.len))
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

func QSqlQueryModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlQueryModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlQueryModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlQueryModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlQueryModel) SetQuery2(query string, db *QSqlDatabase) {
	defer runtime.KeepAlive(db)
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))
	C.QSqlQueryModel_setQuery2(this.h, query_ms, db.cPointer())
}

// BeginInsertRows can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) BeginInsertRows(parent qt6.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_beginInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertRows can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) EndInsertRows() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_endInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveRows can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) BeginRemoveRows(parent qt6.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_beginRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveRows can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) EndRemoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_endRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginInsertColumns can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) BeginInsertColumns(parent qt6.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_beginInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertColumns can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) EndInsertColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_endInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveColumns can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) BeginRemoveColumns(parent qt6.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_beginRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveColumns can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) EndRemoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_endRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginResetModel can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) BeginResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_beginResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndResetModel can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) EndResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_endResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLastError can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) SetLastError(error *QSqlError) {
	defer runtime.KeepAlive(error)

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_setLastError(&_dynamic_cast_ok, unsafe.Pointer(this.h), error.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// CreateIndex can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) CreateIndex(row int, column int) qt6.QModelIndex {

	var _dynamic_cast_ok C.bool = false
	_method_ret := libmiqt.ValueCast[qt6.QModelIndex](C.QSqlQueryModel_protectedbase_createIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EncodeData can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) EncodeData(indexes []qt6.QModelIndex, stream *qt6.QDataStream) {
	defer runtime.KeepAlive(stream)
	indexes_CArray_ptr := (*C.struct_miqt_qmodelindex)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_qmodelindex{})) * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray_ptr))
	indexes_CArray := unsafe.Slice(indexes_CArray_ptr, len(indexes))
	for i := range indexes {
		indexes_CArray[i] = libmiqt.ValueCast[C.struct_miqt_qmodelindex](indexes[i])
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray_ptr)}

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_encodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), indexes_ma, (*C.QDataStream)(stream.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DecodeData can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) DecodeData(row int, column int, parent qt6.QModelIndex, stream *qt6.QDataStream) bool {
	defer runtime.KeepAlive(stream)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlQueryModel_protectedbase_decodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent), (*C.QDataStream)(stream.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginMoveRows can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) BeginMoveRows(sourceParent qt6.QModelIndex, sourceFirst int, sourceLast int, destinationParent qt6.QModelIndex, destinationRow int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlQueryModel_protectedbase_beginMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](sourceParent), (C.int)(sourceFirst), (C.int)(sourceLast), libmiqt.ValueCast[C.struct_miqt_qmodelindex](destinationParent), (C.int)(destinationRow)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveRows can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) EndMoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_endMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveColumns can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) BeginMoveColumns(sourceParent qt6.QModelIndex, sourceFirst int, sourceLast int, destinationParent qt6.QModelIndex, destinationColumn int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlQueryModel_protectedbase_beginMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](sourceParent), (C.int)(sourceFirst), (C.int)(sourceLast), libmiqt.ValueCast[C.struct_miqt_qmodelindex](destinationParent), (C.int)(destinationColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveColumns can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) EndMoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_endMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndex can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) ChangePersistentIndex(from qt6.QModelIndex, to qt6.QModelIndex) {

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_changePersistentIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](from), libmiqt.ValueCast[C.struct_miqt_qmodelindex](to))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndexList can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) ChangePersistentIndexList(from []qt6.QModelIndex, to []qt6.QModelIndex) {
	from_CArray_ptr := (*C.struct_miqt_qmodelindex)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_qmodelindex{})) * len(from))))
	defer C.free(unsafe.Pointer(from_CArray_ptr))
	from_CArray := unsafe.Slice(from_CArray_ptr, len(from))
	for i := range from {
		from_CArray[i] = libmiqt.ValueCast[C.struct_miqt_qmodelindex](from[i])
	}
	from_ma := C.struct_miqt_array{len: C.size_t(len(from)), data: unsafe.Pointer(from_CArray_ptr)}
	to_CArray_ptr := (*C.struct_miqt_qmodelindex)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_qmodelindex{})) * len(to))))
	defer C.free(unsafe.Pointer(to_CArray_ptr))
	to_CArray := unsafe.Slice(to_CArray_ptr, len(to))
	for i := range to {
		to_CArray[i] = libmiqt.ValueCast[C.struct_miqt_qmodelindex](to[i])
	}
	to_ma := C.struct_miqt_array{len: C.size_t(len(to)), data: unsafe.Pointer(to_CArray_ptr)}

	var _dynamic_cast_ok C.bool = false
	C.QSqlQueryModel_protectedbase_changePersistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h), from_ma, to_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PersistentIndexList can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) PersistentIndexList() []qt6.QModelIndex {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QSqlQueryModel_protectedbase_persistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := make([]qt6.QModelIndex, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_qmodelindex)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = libmiqt.ValueCast[qt6.QModelIndex](_outCast[i])
	}
	_method_ret := _ret

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QSqlQueryModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSqlQueryModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSqlQueryModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSqlQueryModel that was directly constructed.
func (this *QSqlQueryModel) IsSignalConnected(signal *qt6.QMetaMethod) bool {
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlQueryModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSqlQueryModel) callVirtualBase_RowCount(parent qt6.QModelIndex) int {

	return (int)(C.QSqlQueryModel_virtualbase_rowCount(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnRowCount(slot func(super func(parent qt6.QModelIndex) int, parent qt6.QModelIndex) int) {
	ok := C.QSqlQueryModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_rowCount
func miqt_exec_callback_QSqlQueryModel_rowCount(self *C.QSqlQueryModel, cb C.intptr_t, parent C.struct_miqt_qmodelindex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent qt6.QModelIndex) int, parent qt6.QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_ColumnCount(parent qt6.QModelIndex) int {

	return (int)(C.QSqlQueryModel_virtualbase_columnCount(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnColumnCount(slot func(super func(parent qt6.QModelIndex) int, parent qt6.QModelIndex) int) {
	ok := C.QSqlQueryModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_columnCount
func miqt_exec_callback_QSqlQueryModel_columnCount(self *C.QSqlQueryModel, cb C.intptr_t, parent C.struct_miqt_qmodelindex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent qt6.QModelIndex) int, parent qt6.QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_Data(item qt6.QModelIndex, role int) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlQueryModel_virtualbase_data(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](item), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlQueryModel) OnData(slot func(super func(item qt6.QModelIndex, role int) *qt6.QVariant, item qt6.QModelIndex, role int) *qt6.QVariant) {
	ok := C.QSqlQueryModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_data
func miqt_exec_callback_QSqlQueryModel_data(self *C.QSqlQueryModel, cb C.intptr_t, item C.struct_miqt_qmodelindex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item qt6.QModelIndex, role int) *qt6.QVariant, item qt6.QModelIndex, role int) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](item)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Data, slotval1, slotval2)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSqlQueryModel_virtualreturncopy_QVariant((*C.QVariant)(virtualReturn.UnsafePointer()))

}

func (this *QSqlQueryModel) callVirtualBase_HeaderData(section int, orientation qt6.Orientation, role int) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlQueryModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlQueryModel) OnHeaderData(slot func(super func(section int, orientation qt6.Orientation, role int) *qt6.QVariant, section int, orientation qt6.Orientation, role int) *qt6.QVariant) {
	ok := C.QSqlQueryModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_headerData
func miqt_exec_callback_QSqlQueryModel_headerData(self *C.QSqlQueryModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation qt6.Orientation, role int) *qt6.QVariant, section int, orientation qt6.Orientation, role int) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (qt6.Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSqlQueryModel_virtualreturncopy_QVariant((*C.QVariant)(virtualReturn.UnsafePointer()))

}

func (this *QSqlQueryModel) callVirtualBase_SetHeaderData(section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool {
	defer runtime.KeepAlive(value)

	return (bool)(C.QSqlQueryModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))

}
func (this *QSqlQueryModel) OnSetHeaderData(slot func(super func(section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool, section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool) {
	ok := C.QSqlQueryModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_setHeaderData
func miqt_exec_callback_QSqlQueryModel_setHeaderData(self *C.QSqlQueryModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool, section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (qt6.Orientation)(orientation)

	slotval3 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_InsertColumns(column int, count int, parent qt6.QModelIndex) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnInsertColumns(slot func(super func(column int, count int, parent qt6.QModelIndex) bool, column int, count int, parent qt6.QModelIndex) bool) {
	ok := C.QSqlQueryModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_insertColumns
func miqt_exec_callback_QSqlQueryModel_insertColumns(self *C.QSqlQueryModel, cb C.intptr_t, column C.int, count C.int, parent C.struct_miqt_qmodelindex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent qt6.QModelIndex) bool, column int, count int, parent qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_RemoveColumns(column int, count int, parent qt6.QModelIndex) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnRemoveColumns(slot func(super func(column int, count int, parent qt6.QModelIndex) bool, column int, count int, parent qt6.QModelIndex) bool) {
	ok := C.QSqlQueryModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_removeColumns
func miqt_exec_callback_QSqlQueryModel_removeColumns(self *C.QSqlQueryModel, cb C.intptr_t, column C.int, count C.int, parent C.struct_miqt_qmodelindex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent qt6.QModelIndex) bool, column int, count int, parent qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_Clear() {

	C.QSqlQueryModel_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QSqlQueryModel) OnClear(slot func(super func())) {
	ok := C.QSqlQueryModel_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_clear
func miqt_exec_callback_QSqlQueryModel_clear(self *C.QSqlQueryModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Clear)

}

func (this *QSqlQueryModel) callVirtualBase_FetchMore(parent qt6.QModelIndex) {

	C.QSqlQueryModel_virtualbase_fetchMore(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent))

}
func (this *QSqlQueryModel) OnFetchMore(slot func(super func(parent qt6.QModelIndex), parent qt6.QModelIndex)) {
	ok := C.QSqlQueryModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_fetchMore
func miqt_exec_callback_QSqlQueryModel_fetchMore(self *C.QSqlQueryModel, cb C.intptr_t, parent C.struct_miqt_qmodelindex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent qt6.QModelIndex), parent qt6.QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QSqlQueryModel) callVirtualBase_CanFetchMore(parent qt6.QModelIndex) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnCanFetchMore(slot func(super func(parent qt6.QModelIndex) bool, parent qt6.QModelIndex) bool) {
	ok := C.QSqlQueryModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_canFetchMore
func miqt_exec_callback_QSqlQueryModel_canFetchMore(self *C.QSqlQueryModel, cb C.intptr_t, parent C.struct_miqt_qmodelindex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent qt6.QModelIndex) bool, parent qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QSqlQueryModel_virtualbase_roleNames(unsafe.Pointer(this.h))
	_ret := make(map[int][]byte, int(_mm.len))
	_Keys := unsafe.Slice((*C.int)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.values)), int(_mm.len))
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
func (this *QSqlQueryModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QSqlQueryModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_roleNames
func miqt_exec_callback_QSqlQueryModel_roleNames(self *C.QSqlQueryModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_RoleNames)
	virtualReturn_Keys_CArray_ptr := (*C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_Keys_CArray := unsafe.Slice(virtualReturn_Keys_CArray_ptr, len(virtualReturn))
	virtualReturn_Values_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	virtualReturn_Values_CArray := unsafe.Slice(virtualReturn_Values_CArray_ptr, len(virtualReturn))
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
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray_ptr),
		values: unsafe.Pointer(virtualReturn_Values_CArray_ptr),
	}

	return virtualReturn_mm

}

func (this *QSqlQueryModel) callVirtualBase_QueryChange() {

	C.QSqlQueryModel_virtualbase_queryChange(unsafe.Pointer(this.h))

}
func (this *QSqlQueryModel) OnQueryChange(slot func(super func())) {
	ok := C.QSqlQueryModel_override_virtual_queryChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_queryChange
func miqt_exec_callback_QSqlQueryModel_queryChange(self *C.QSqlQueryModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_QueryChange)

}

func (this *QSqlQueryModel) callVirtualBase_IndexInQuery(item qt6.QModelIndex) qt6.QModelIndex {

	return libmiqt.ValueCast[qt6.QModelIndex](C.QSqlQueryModel_virtualbase_indexInQuery(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](item)))

}
func (this *QSqlQueryModel) OnIndexInQuery(slot func(super func(item qt6.QModelIndex) qt6.QModelIndex, item qt6.QModelIndex) qt6.QModelIndex) {
	ok := C.QSqlQueryModel_override_virtual_indexInQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_indexInQuery
func miqt_exec_callback_QSqlQueryModel_indexInQuery(self *C.QSqlQueryModel, cb C.intptr_t, item C.struct_miqt_qmodelindex) C.struct_miqt_qmodelindex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item qt6.QModelIndex) qt6.QModelIndex, item qt6.QModelIndex) qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](item)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_IndexInQuery, slotval1)

	return libmiqt.ValueCast[C.struct_miqt_qmodelindex](virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_Index(row int, column int, parent qt6.QModelIndex) qt6.QModelIndex {

	return libmiqt.ValueCast[qt6.QModelIndex](C.QSqlQueryModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnIndex(slot func(super func(row int, column int, parent qt6.QModelIndex) qt6.QModelIndex, row int, column int, parent qt6.QModelIndex) qt6.QModelIndex) {
	ok := C.QSqlQueryModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_index
func miqt_exec_callback_QSqlQueryModel_index(self *C.QSqlQueryModel, cb C.intptr_t, row C.int, column C.int, parent C.struct_miqt_qmodelindex) C.struct_miqt_qmodelindex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent qt6.QModelIndex) qt6.QModelIndex, row int, column int, parent qt6.QModelIndex) qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return libmiqt.ValueCast[C.struct_miqt_qmodelindex](virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_Sibling(row int, column int, idx qt6.QModelIndex) qt6.QModelIndex {

	return libmiqt.ValueCast[qt6.QModelIndex](C.QSqlQueryModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), libmiqt.ValueCast[C.struct_miqt_qmodelindex](idx)))

}
func (this *QSqlQueryModel) OnSibling(slot func(super func(row int, column int, idx qt6.QModelIndex) qt6.QModelIndex, row int, column int, idx qt6.QModelIndex) qt6.QModelIndex) {
	ok := C.QSqlQueryModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_sibling
func miqt_exec_callback_QSqlQueryModel_sibling(self *C.QSqlQueryModel, cb C.intptr_t, row C.int, column C.int, idx C.struct_miqt_qmodelindex) C.struct_miqt_qmodelindex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx qt6.QModelIndex) qt6.QModelIndex, row int, column int, idx qt6.QModelIndex) qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := libmiqt.ValueCast[qt6.QModelIndex](idx)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return libmiqt.ValueCast[C.struct_miqt_qmodelindex](virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_DropMimeData(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(data.UnsafePointer()), (C.int)(action), (C.int)(row), (C.int)(column), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnDropMimeData(slot func(super func(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool, data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool) {
	ok := C.QSqlQueryModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_dropMimeData
func miqt_exec_callback_QSqlQueryModel_dropMimeData(self *C.QSqlQueryModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent C.struct_miqt_qmodelindex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool, data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMimeData(unsafe.Pointer(data))

	slotval2 := (qt6.DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_Flags(index qt6.QModelIndex) qt6.ItemFlag {

	return (qt6.ItemFlag)(C.QSqlQueryModel_virtualbase_flags(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](index)))

}
func (this *QSqlQueryModel) OnFlags(slot func(super func(index qt6.QModelIndex) qt6.ItemFlag, index qt6.QModelIndex) qt6.ItemFlag) {
	ok := C.QSqlQueryModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_flags
func miqt_exec_callback_QSqlQueryModel_flags(self *C.QSqlQueryModel, cb C.intptr_t, index C.struct_miqt_qmodelindex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index qt6.QModelIndex) qt6.ItemFlag, index qt6.QModelIndex) qt6.ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](index)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_SetData(index qt6.QModelIndex, value *qt6.QVariant, role int) bool {
	defer runtime.KeepAlive(value)

	return (bool)(C.QSqlQueryModel_virtualbase_setData(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](index), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))

}
func (this *QSqlQueryModel) OnSetData(slot func(super func(index qt6.QModelIndex, value *qt6.QVariant, role int) bool, index qt6.QModelIndex, value *qt6.QVariant, role int) bool) {
	ok := C.QSqlQueryModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_setData
func miqt_exec_callback_QSqlQueryModel_setData(self *C.QSqlQueryModel, cb C.intptr_t, index C.struct_miqt_qmodelindex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index qt6.QModelIndex, value *qt6.QVariant, role int) bool, index qt6.QModelIndex, value *qt6.QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](index)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_ItemData(index qt6.QModelIndex) map[int]qt6.QVariant {

	var _mm C.struct_miqt_map = C.QSqlQueryModel_virtualbase_itemData(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](index))
	_ret := make(map[int]qt6.QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.int)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QSqlQueryModel) OnItemData(slot func(super func(index qt6.QModelIndex) map[int]qt6.QVariant, index qt6.QModelIndex) map[int]qt6.QVariant) {
	ok := C.QSqlQueryModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_itemData
func miqt_exec_callback_QSqlQueryModel_itemData(self *C.QSqlQueryModel, cb C.intptr_t, index C.struct_miqt_qmodelindex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index qt6.QModelIndex) map[int]qt6.QVariant, index qt6.QModelIndex) map[int]qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](index)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_ItemData, slotval1)
	defer runtime.KeepAlive(virtualReturn)
	virtualReturn_Keys_CArray_ptr := (*C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_Keys_CArray := unsafe.Slice(virtualReturn_Keys_CArray_ptr, len(virtualReturn))
	virtualReturn_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_Values_CArray := unsafe.Slice(virtualReturn_Values_CArray_ptr, len(virtualReturn))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_Values_CArray[virtualReturn_ctr] = C.QSqlQueryModel_virtualreturncopy_QVariant((*C.QVariant)(virtualReturn_v.UnsafePointer()))
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray_ptr),
		values: unsafe.Pointer(virtualReturn_Values_CArray_ptr),
	}

	return virtualReturn_mm

}

func (this *QSqlQueryModel) callVirtualBase_SetItemData(index qt6.QModelIndex, roles map[int]qt6.QVariant) bool {
	defer runtime.KeepAlive(roles)
	roles_Keys_CArray_ptr := (*C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Keys_CArray_ptr))
	roles_Keys_CArray := unsafe.Slice(roles_Keys_CArray_ptr, len(roles))
	roles_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Values_CArray_ptr))
	roles_Values_CArray := unsafe.Slice(roles_Values_CArray_ptr, len(roles))
	roles_ctr := 0
	for roles_k, roles_v := range roles {
		roles_Keys_CArray[roles_ctr] = (C.int)(roles_k)
		roles_Values_CArray[roles_ctr] = (*C.QVariant)(roles_v.UnsafePointer())
		roles_ctr++
	}
	roles_mm := C.struct_miqt_map{
		len:    C.size_t(len(roles)),
		keys:   unsafe.Pointer(roles_Keys_CArray_ptr),
		values: unsafe.Pointer(roles_Values_CArray_ptr),
	}

	return (bool)(C.QSqlQueryModel_virtualbase_setItemData(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](index), roles_mm))

}
func (this *QSqlQueryModel) OnSetItemData(slot func(super func(index qt6.QModelIndex, roles map[int]qt6.QVariant) bool, index qt6.QModelIndex, roles map[int]qt6.QVariant) bool) {
	ok := C.QSqlQueryModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_setItemData
func miqt_exec_callback_QSqlQueryModel_setItemData(self *C.QSqlQueryModel, cb C.intptr_t, index C.struct_miqt_qmodelindex, roles C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index qt6.QModelIndex, roles map[int]qt6.QVariant) bool, index qt6.QModelIndex, roles map[int]qt6.QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](index)

	var roles_mm C.struct_miqt_map = roles
	roles_ret := make(map[int]qt6.QVariant, int(roles_mm.len))
	roles_Keys := unsafe.Slice((*C.int)(unsafe.Pointer(roles_mm.keys)), int(roles_mm.len))
	roles_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(roles_mm.values)), int(roles_mm.len))
	for i := 0; i < int(roles_mm.len); i++ {
		roles_entry_Key := (int)(roles_Keys[i])

		roles_mapval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(roles_Values[i]))
		roles_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		roles_entry_Value := *roles_mapval_goptr

		roles_ret[roles_entry_Key] = roles_entry_Value
	}
	slotval2 := roles_ret

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_ClearItemData(index qt6.QModelIndex) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_clearItemData(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](index)))

}
func (this *QSqlQueryModel) OnClearItemData(slot func(super func(index qt6.QModelIndex) bool, index qt6.QModelIndex) bool) {
	ok := C.QSqlQueryModel_override_virtual_clearItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_clearItemData
func miqt_exec_callback_QSqlQueryModel_clearItemData(self *C.QSqlQueryModel, cb C.intptr_t, index C.struct_miqt_qmodelindex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index qt6.QModelIndex) bool, index qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](index)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_ClearItemData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QSqlQueryModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret

}
func (this *QSqlQueryModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QSqlQueryModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_mimeTypes
func miqt_exec_callback_QSqlQueryModel_mimeTypes(self *C.QSqlQueryModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_MimeTypes)
	virtualReturn_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	virtualReturn_CArray := unsafe.Slice(virtualReturn_CArray_ptr, len(virtualReturn))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray_ptr)}

	return virtualReturn_ma

}

func (this *QSqlQueryModel) callVirtualBase_MimeData(indexes []qt6.QModelIndex) *qt6.QMimeData {
	indexes_CArray_ptr := (*C.struct_miqt_qmodelindex)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_qmodelindex{})) * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray_ptr))
	indexes_CArray := unsafe.Slice(indexes_CArray_ptr, len(indexes))
	for i := range indexes {
		indexes_CArray[i] = libmiqt.ValueCast[C.struct_miqt_qmodelindex](indexes[i])
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray_ptr)}

	return qt6.UnsafeNewQMimeData(unsafe.Pointer(C.QSqlQueryModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma)))

}
func (this *QSqlQueryModel) OnMimeData(slot func(super func(indexes []qt6.QModelIndex) *qt6.QMimeData, indexes []qt6.QModelIndex) *qt6.QMimeData) {
	ok := C.QSqlQueryModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_mimeData
func miqt_exec_callback_QSqlQueryModel_mimeData(self *C.QSqlQueryModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indexes []qt6.QModelIndex) *qt6.QMimeData, indexes []qt6.QModelIndex) *qt6.QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]qt6.QModelIndex, int(indexes_ma.len))
	indexes_outCast := unsafe.Slice((*C.struct_miqt_qmodelindex)(unsafe.Pointer(indexes_ma.data)), int(indexes_ma.len))
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_ret[i] = libmiqt.ValueCast[qt6.QModelIndex](indexes_outCast[i])
	}
	slotval1 := indexes_ret

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_MimeData, slotval1)

	return (*C.QMimeData)(virtualReturn.UnsafePointer())

}

func (this *QSqlQueryModel) callVirtualBase_CanDropMimeData(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(data.UnsafePointer()), (C.int)(action), (C.int)(row), (C.int)(column), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnCanDropMimeData(slot func(super func(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool, data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool) {
	ok := C.QSqlQueryModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_canDropMimeData
func miqt_exec_callback_QSqlQueryModel_canDropMimeData(self *C.QSqlQueryModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent C.struct_miqt_qmodelindex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool, data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMimeData(unsafe.Pointer(data))

	slotval2 := (qt6.DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_SupportedDropActions() qt6.DropAction {

	return (qt6.DropAction)(C.QSqlQueryModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QSqlQueryModel) OnSupportedDropActions(slot func(super func() qt6.DropAction) qt6.DropAction) {
	ok := C.QSqlQueryModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_supportedDropActions
func miqt_exec_callback_QSqlQueryModel_supportedDropActions(self *C.QSqlQueryModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt6.DropAction) qt6.DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_SupportedDragActions() qt6.DropAction {

	return (qt6.DropAction)(C.QSqlQueryModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QSqlQueryModel) OnSupportedDragActions(slot func(super func() qt6.DropAction) qt6.DropAction) {
	ok := C.QSqlQueryModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_supportedDragActions
func miqt_exec_callback_QSqlQueryModel_supportedDragActions(self *C.QSqlQueryModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt6.DropAction) qt6.DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_InsertRows(row int, count int, parent qt6.QModelIndex) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnInsertRows(slot func(super func(row int, count int, parent qt6.QModelIndex) bool, row int, count int, parent qt6.QModelIndex) bool) {
	ok := C.QSqlQueryModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_insertRows
func miqt_exec_callback_QSqlQueryModel_insertRows(self *C.QSqlQueryModel, cb C.intptr_t, row C.int, count C.int, parent C.struct_miqt_qmodelindex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent qt6.QModelIndex) bool, row int, count int, parent qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_RemoveRows(row int, count int, parent qt6.QModelIndex) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), libmiqt.ValueCast[C.struct_miqt_qmodelindex](parent)))

}
func (this *QSqlQueryModel) OnRemoveRows(slot func(super func(row int, count int, parent qt6.QModelIndex) bool, row int, count int, parent qt6.QModelIndex) bool) {
	ok := C.QSqlQueryModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_removeRows
func miqt_exec_callback_QSqlQueryModel_removeRows(self *C.QSqlQueryModel, cb C.intptr_t, row C.int, count C.int, parent C.struct_miqt_qmodelindex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent qt6.QModelIndex) bool, row int, count int, parent qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := libmiqt.ValueCast[qt6.QModelIndex](parent)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_MoveRows(sourceParent qt6.QModelIndex, sourceRow int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_moveRows(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](sourceParent), (C.int)(sourceRow), (C.int)(count), libmiqt.ValueCast[C.struct_miqt_qmodelindex](destinationParent), (C.int)(destinationChild)))

}
func (this *QSqlQueryModel) OnMoveRows(slot func(super func(sourceParent qt6.QModelIndex, sourceRow int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool, sourceParent qt6.QModelIndex, sourceRow int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool) {
	ok := C.QSqlQueryModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_moveRows
func miqt_exec_callback_QSqlQueryModel_moveRows(self *C.QSqlQueryModel, cb C.intptr_t, sourceParent C.struct_miqt_qmodelindex, sourceRow C.int, count C.int, destinationParent C.struct_miqt_qmodelindex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent qt6.QModelIndex, sourceRow int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool, sourceParent qt6.QModelIndex, sourceRow int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](sourceParent)

	slotval2 := (int)(sourceRow)

	slotval3 := (int)(count)

	slotval4 := libmiqt.ValueCast[qt6.QModelIndex](destinationParent)

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_MoveColumns(sourceParent qt6.QModelIndex, sourceColumn int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool {

	return (bool)(C.QSqlQueryModel_virtualbase_moveColumns(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](sourceParent), (C.int)(sourceColumn), (C.int)(count), libmiqt.ValueCast[C.struct_miqt_qmodelindex](destinationParent), (C.int)(destinationChild)))

}
func (this *QSqlQueryModel) OnMoveColumns(slot func(super func(sourceParent qt6.QModelIndex, sourceColumn int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool, sourceParent qt6.QModelIndex, sourceColumn int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool) {
	ok := C.QSqlQueryModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_moveColumns
func miqt_exec_callback_QSqlQueryModel_moveColumns(self *C.QSqlQueryModel, cb C.intptr_t, sourceParent C.struct_miqt_qmodelindex, sourceColumn C.int, count C.int, destinationParent C.struct_miqt_qmodelindex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent qt6.QModelIndex, sourceColumn int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool, sourceParent qt6.QModelIndex, sourceColumn int, count int, destinationParent qt6.QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](sourceParent)

	slotval2 := (int)(sourceColumn)

	slotval3 := (int)(count)

	slotval4 := libmiqt.ValueCast[qt6.QModelIndex](destinationParent)

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_Sort(column int, order qt6.SortOrder) {

	C.QSqlQueryModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QSqlQueryModel) OnSort(slot func(super func(column int, order qt6.SortOrder), column int, order qt6.SortOrder)) {
	ok := C.QSqlQueryModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_sort
func miqt_exec_callback_QSqlQueryModel_sort(self *C.QSqlQueryModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order qt6.SortOrder), column int, order qt6.SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (qt6.SortOrder)(order)

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QSqlQueryModel) callVirtualBase_Buddy(index qt6.QModelIndex) qt6.QModelIndex {

	return libmiqt.ValueCast[qt6.QModelIndex](C.QSqlQueryModel_virtualbase_buddy(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](index)))

}
func (this *QSqlQueryModel) OnBuddy(slot func(super func(index qt6.QModelIndex) qt6.QModelIndex, index qt6.QModelIndex) qt6.QModelIndex) {
	ok := C.QSqlQueryModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_buddy
func miqt_exec_callback_QSqlQueryModel_buddy(self *C.QSqlQueryModel, cb C.intptr_t, index C.struct_miqt_qmodelindex) C.struct_miqt_qmodelindex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index qt6.QModelIndex) qt6.QModelIndex, index qt6.QModelIndex) qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](index)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Buddy, slotval1)

	return libmiqt.ValueCast[C.struct_miqt_qmodelindex](virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_Match(start qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex {
	defer runtime.KeepAlive(value)

	var _ma C.struct_miqt_array = C.QSqlQueryModel_virtualbase_match(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](start), (C.int)(role), (*C.QVariant)(value.UnsafePointer()), (C.int)(hits), (C.int)(flags))
	_ret := make([]qt6.QModelIndex, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_qmodelindex)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = libmiqt.ValueCast[qt6.QModelIndex](_outCast[i])
	}
	return _ret

}
func (this *QSqlQueryModel) OnMatch(slot func(super func(start qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex, start qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex) {
	ok := C.QSqlQueryModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_match
func miqt_exec_callback_QSqlQueryModel_match(self *C.QSqlQueryModel, cb C.intptr_t, start C.struct_miqt_qmodelindex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(start qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex, start qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](start)

	slotval2 := (int)(role)

	slotval3 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval4 := (int)(hits)

	slotval5 := (qt6.MatchFlag)(flags)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray_ptr := (*C.struct_miqt_qmodelindex)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_qmodelindex{})) * len(virtualReturn))))
	virtualReturn_CArray := unsafe.Slice(virtualReturn_CArray_ptr, len(virtualReturn))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = libmiqt.ValueCast[C.struct_miqt_qmodelindex](virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray_ptr)}

	return virtualReturn_ma

}

func (this *QSqlQueryModel) callVirtualBase_Span(index qt6.QModelIndex) qt6.QSize {

	return libmiqt.ValueCast[qt6.QSize](C.QSqlQueryModel_virtualbase_span(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](index)))

}
func (this *QSqlQueryModel) OnSpan(slot func(super func(index qt6.QModelIndex) qt6.QSize, index qt6.QModelIndex) qt6.QSize) {
	ok := C.QSqlQueryModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_span
func miqt_exec_callback_QSqlQueryModel_span(self *C.QSqlQueryModel, cb C.intptr_t, index C.struct_miqt_qmodelindex) C.struct_miqt_qsize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index qt6.QModelIndex) qt6.QSize, index qt6.QModelIndex) qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](index)

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Span, slotval1)

	return libmiqt.ValueCast[C.struct_miqt_qsize](virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_MultiData(index qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan) {
	defer runtime.KeepAlive(roleDataSpan)

	C.QSqlQueryModel_virtualbase_multiData(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmodelindex](index), (*C.QModelRoleDataSpan)(roleDataSpan.UnsafePointer()))

}
func (this *QSqlQueryModel) OnMultiData(slot func(super func(index qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan), index qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan)) {
	ok := C.QSqlQueryModel_override_virtual_multiData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_multiData
func miqt_exec_callback_QSqlQueryModel_multiData(self *C.QSqlQueryModel, cb C.intptr_t, index C.struct_miqt_qmodelindex, roleDataSpan *C.QModelRoleDataSpan) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan), index qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QModelIndex](index)

	roleDataSpan_goptr := qt6.UnsafeNewQModelRoleDataSpan(unsafe.Pointer(roleDataSpan))
	roleDataSpan_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *roleDataSpan_goptr

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_MultiData, slotval1, slotval2)

}

func (this *QSqlQueryModel) callVirtualBase_Submit() bool {

	return (bool)(C.QSqlQueryModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QSqlQueryModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QSqlQueryModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_submit
func miqt_exec_callback_QSqlQueryModel_submit(self *C.QSqlQueryModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_Revert() {

	C.QSqlQueryModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QSqlQueryModel) OnRevert(slot func(super func())) {
	ok := C.QSqlQueryModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_revert
func miqt_exec_callback_QSqlQueryModel_revert(self *C.QSqlQueryModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Revert)

}

func (this *QSqlQueryModel) callVirtualBase_ResetInternalData() {

	C.QSqlQueryModel_virtualbase_resetInternalData(unsafe.Pointer(this.h))

}
func (this *QSqlQueryModel) OnResetInternalData(slot func(super func())) {
	ok := C.QSqlQueryModel_override_virtual_resetInternalData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_resetInternalData
func miqt_exec_callback_QSqlQueryModel_resetInternalData(self *C.QSqlQueryModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_ResetInternalData)

}

func (this *QSqlQueryModel) callVirtualBase_Event(event *qt6.QEvent) bool {
	defer runtime.KeepAlive(event)

	return (bool)(C.QSqlQueryModel_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSqlQueryModel) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QSqlQueryModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_event
func miqt_exec_callback_QSqlQueryModel_event(self *C.QSqlQueryModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {
	defer runtime.KeepAlive(event)

	return (bool)(C.QSqlQueryModel_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSqlQueryModel) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QSqlQueryModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_eventFilter
func miqt_exec_callback_QSqlQueryModel_eventFilter(self *C.QSqlQueryModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSqlQueryModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlQueryModel) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {
	defer runtime.KeepAlive(event)

	C.QSqlQueryModel_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSqlQueryModel) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QSqlQueryModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_timerEvent
func miqt_exec_callback_QSqlQueryModel_timerEvent(self *C.QSqlQueryModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSqlQueryModel) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {
	defer runtime.KeepAlive(event)

	C.QSqlQueryModel_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSqlQueryModel) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QSqlQueryModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_childEvent
func miqt_exec_callback_QSqlQueryModel_childEvent(self *C.QSqlQueryModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSqlQueryModel) callVirtualBase_CustomEvent(event *qt6.QEvent) {
	defer runtime.KeepAlive(event)

	C.QSqlQueryModel_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSqlQueryModel) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSqlQueryModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_customEvent
func miqt_exec_callback_QSqlQueryModel_customEvent(self *C.QSqlQueryModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSqlQueryModel) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(signal)

	C.QSqlQueryModel_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSqlQueryModel) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSqlQueryModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_connectNotify
func miqt_exec_callback_QSqlQueryModel_connectNotify(self *C.QSqlQueryModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSqlQueryModel) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(signal)

	C.QSqlQueryModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSqlQueryModel) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSqlQueryModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlQueryModel_disconnectNotify
func miqt_exec_callback_QSqlQueryModel_disconnectNotify(self *C.QSqlQueryModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSqlQueryModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSqlQueryModel) Delete() {
	C.QSqlQueryModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
// This is a QObject class, so this is unsupported: the bindings do not
// keep it alive during calls into C++, and its parent may delete it.
func (this *QSqlQueryModel) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSqlQueryModel_delete((*C.QSqlQueryModel)(gc[0]))
	})
	this.miqtSetGC(gc)
}
