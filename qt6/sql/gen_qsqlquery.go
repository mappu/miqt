package sql

/*

#include "gen_qsqlquery.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QSqlQuery__BatchExecutionMode int

const (
	QSqlQuery__ValuesAsRows    QSqlQuery__BatchExecutionMode = 0
	QSqlQuery__ValuesAsColumns QSqlQuery__BatchExecutionMode = 1
)

type QSqlQuery struct {
	h  *C.QSqlQuery
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSqlQuery) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSqlQuery) cPointer() *C.QSqlQuery {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlQuery) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlQuery constructs the type using only CGO pointers.
func newQSqlQuery(h *C.QSqlQuery) *QSqlQuery {
	if h == nil {
		return nil
	}

	return &QSqlQuery{h: h}
}

// UnsafeNewQSqlQuery constructs the type using only unsafe pointers.
func UnsafeNewQSqlQuery(h unsafe.Pointer) *QSqlQuery {
	return newQSqlQuery((*C.QSqlQuery)(h))
}

// NewQSqlQuery constructs a new QSqlQuery object.
func NewQSqlQuery(r *QSqlResult) *QSqlQuery {
	defer runtime.KeepAlive(r)

	return newQSqlQuery(C.QSqlQuery_new(r.cPointer()))
}

// NewQSqlQuery2 constructs a new QSqlQuery object.
func NewQSqlQuery2() *QSqlQuery {

	return newQSqlQuery(C.QSqlQuery_new2())
}

// NewQSqlQuery3 constructs a new QSqlQuery object.
func NewQSqlQuery3(db *QSqlDatabase) *QSqlQuery {
	defer runtime.KeepAlive(db)

	return newQSqlQuery(C.QSqlQuery_new3(db.cPointer()))
}

// NewQSqlQuery4 constructs a new QSqlQuery object.
func NewQSqlQuery4(other *QSqlQuery) *QSqlQuery {
	defer runtime.KeepAlive(other)

	return newQSqlQuery(C.QSqlQuery_new4(other.cPointer()))
}

// NewQSqlQuery5 constructs a new QSqlQuery object.
func NewQSqlQuery5(query string) *QSqlQuery {
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))

	return newQSqlQuery(C.QSqlQuery_new5(query_ms))
}

// NewQSqlQuery6 constructs a new QSqlQuery object.
func NewQSqlQuery6(query string, db *QSqlDatabase) *QSqlQuery {
	defer runtime.KeepAlive(db)
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))

	return newQSqlQuery(C.QSqlQuery_new6(query_ms, db.cPointer()))
}

func (this *QSqlQuery) OperatorAssign(other *QSqlQuery) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSqlQuery_operatorAssign(this.h, other.cPointer())
}

func (this *QSqlQuery) Swap(other *QSqlQuery) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSqlQuery_swap(this.h, other.cPointer())
}

func (this *QSqlQuery) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_isValid(this.h))
}

func (this *QSqlQuery) IsActive() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_isActive(this.h))
}

func (this *QSqlQuery) IsNull(field int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_isNull(this.h, (C.int)(field)))
}

func (this *QSqlQuery) IsNullWithName(name string) bool {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QSqlQuery_isNullWithName(this.h, name_ms))
}

func (this *QSqlQuery) At() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSqlQuery_at(this.h))
}

func (this *QSqlQuery) LastQuery() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlQuery_lastQuery(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlQuery) NumRowsAffected() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSqlQuery_numRowsAffected(this.h))
}

func (this *QSqlQuery) LastError() *QSqlError {
	defer runtime.KeepAlive(this)
	_goptr := newQSqlError(C.QSqlQuery_lastError(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQuery) IsSelect() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_isSelect(this.h))
}

func (this *QSqlQuery) Size() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSqlQuery_size(this.h))
}

func (this *QSqlQuery) Driver() *QSqlDriver {
	defer runtime.KeepAlive(this)
	return newQSqlDriver(C.QSqlQuery_driver(this.h))
}

func (this *QSqlQuery) Result() *QSqlResult {
	defer runtime.KeepAlive(this)
	return newQSqlResult(C.QSqlQuery_result(this.h))
}

func (this *QSqlQuery) IsForwardOnly() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_isForwardOnly(this.h))
}

func (this *QSqlQuery) Record() *QSqlRecord {
	defer runtime.KeepAlive(this)
	_goptr := newQSqlRecord(C.QSqlQuery_record(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQuery) SetForwardOnly(forward bool) {
	defer runtime.KeepAlive(this)
	C.QSqlQuery_setForwardOnly(this.h, (C.bool)(forward))
}

func (this *QSqlQuery) Exec(query string) bool {
	defer runtime.KeepAlive(this)
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))
	return (bool)(C.QSqlQuery_exec(this.h, query_ms))
}

func (this *QSqlQuery) Value(i int) *qt6.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlQuery_value(this.h, (C.int)(i))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQuery) ValueWithName(name string) *qt6.QVariant {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlQuery_valueWithName(this.h, name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQuery) SetNumericalPrecisionPolicy(precisionPolicy QSql__NumericalPrecisionPolicy) {
	defer runtime.KeepAlive(this)
	C.QSqlQuery_setNumericalPrecisionPolicy(this.h, (C.int)(precisionPolicy))
}

func (this *QSqlQuery) NumericalPrecisionPolicy() QSql__NumericalPrecisionPolicy {
	defer runtime.KeepAlive(this)
	return (QSql__NumericalPrecisionPolicy)(C.QSqlQuery_numericalPrecisionPolicy(this.h))
}

func (this *QSqlQuery) Seek(i int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_seek(this.h, (C.int)(i)))
}

func (this *QSqlQuery) Next() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_next(this.h))
}

func (this *QSqlQuery) Previous() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_previous(this.h))
}

func (this *QSqlQuery) First() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_first(this.h))
}

func (this *QSqlQuery) Last() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_last(this.h))
}

func (this *QSqlQuery) Clear() {
	defer runtime.KeepAlive(this)
	C.QSqlQuery_clear(this.h)
}

func (this *QSqlQuery) Exec2() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_exec2(this.h))
}

func (this *QSqlQuery) ExecBatch() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_execBatch(this.h))
}

func (this *QSqlQuery) Prepare(query string) bool {
	defer runtime.KeepAlive(this)
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))
	return (bool)(C.QSqlQuery_prepare(this.h, query_ms))
}

func (this *QSqlQuery) BindValue(placeholder string, val *qt6.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	placeholder_ms := C.struct_miqt_string{}
	placeholder_ms.data = C.CString(placeholder)
	placeholder_ms.len = C.size_t(len(placeholder))
	defer C.free(unsafe.Pointer(placeholder_ms.data))
	C.QSqlQuery_bindValue(this.h, placeholder_ms, (*C.QVariant)(val.UnsafePointer()))
}

func (this *QSqlQuery) BindValue2(pos int, val *qt6.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	C.QSqlQuery_bindValue2(this.h, (C.int)(pos), (*C.QVariant)(val.UnsafePointer()))
}

func (this *QSqlQuery) AddBindValue(val *qt6.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	C.QSqlQuery_addBindValue(this.h, (*C.QVariant)(val.UnsafePointer()))
}

func (this *QSqlQuery) BoundValue(placeholder string) *qt6.QVariant {
	defer runtime.KeepAlive(this)
	placeholder_ms := C.struct_miqt_string{}
	placeholder_ms.data = C.CString(placeholder)
	placeholder_ms.len = C.size_t(len(placeholder))
	defer C.free(unsafe.Pointer(placeholder_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlQuery_boundValue(this.h, placeholder_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQuery) BoundValueWithPos(pos int) *qt6.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlQuery_boundValueWithPos(this.h, (C.int)(pos))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQuery) BoundValues() []qt6.QVariant {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QSqlQuery_boundValues(this.h)
	_ret := make([]qt6.QVariant, int(_ma.len))
	_outCast := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSqlQuery) ExecutedQuery() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlQuery_executedQuery(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlQuery) LastInsertId() *qt6.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlQuery_lastInsertId(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlQuery) Finish() {
	defer runtime.KeepAlive(this)
	C.QSqlQuery_finish(this.h)
}

func (this *QSqlQuery) NextResult() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_nextResult(this.h))
}

func (this *QSqlQuery) Seek2(i int, relative bool) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_seek2(this.h, (C.int)(i), (C.bool)(relative)))
}

func (this *QSqlQuery) ExecBatchWithMode(mode QSqlQuery__BatchExecutionMode) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlQuery_execBatchWithMode(this.h, (C.int)(mode)))
}

func (this *QSqlQuery) BindValue3(placeholder string, val *qt6.QVariant, typeVal QSql__ParamTypeFlag) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	placeholder_ms := C.struct_miqt_string{}
	placeholder_ms.data = C.CString(placeholder)
	placeholder_ms.len = C.size_t(len(placeholder))
	defer C.free(unsafe.Pointer(placeholder_ms.data))
	C.QSqlQuery_bindValue3(this.h, placeholder_ms, (*C.QVariant)(val.UnsafePointer()), (C.int)(typeVal))
}

func (this *QSqlQuery) BindValue4(pos int, val *qt6.QVariant, typeVal QSql__ParamTypeFlag) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	C.QSqlQuery_bindValue4(this.h, (C.int)(pos), (*C.QVariant)(val.UnsafePointer()), (C.int)(typeVal))
}

func (this *QSqlQuery) AddBindValue2(val *qt6.QVariant, typeVal QSql__ParamTypeFlag) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	C.QSqlQuery_addBindValue2(this.h, (*C.QVariant)(val.UnsafePointer()), (C.int)(typeVal))
}

// Delete this object from C++ memory.
func (this *QSqlQuery) Delete() {
	C.QSqlQuery_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSqlQuery) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSqlQuery_delete((*C.QSqlQuery)(gc[0]))
	})
	this.miqtSetGC(gc)
}
