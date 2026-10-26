package sql

/*

#include "gen_qsqlrecord.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QSqlRecord struct {
	h  *C.QSqlRecord
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSqlRecord) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSqlRecord) cPointer() *C.QSqlRecord {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlRecord) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlRecord constructs the type using only CGO pointers.
func newQSqlRecord(h *C.QSqlRecord) *QSqlRecord {
	if h == nil {
		return nil
	}

	return &QSqlRecord{h: h}
}

// UnsafeNewQSqlRecord constructs the type using only unsafe pointers.
func UnsafeNewQSqlRecord(h unsafe.Pointer) *QSqlRecord {
	return newQSqlRecord((*C.QSqlRecord)(h))
}

// NewQSqlRecord constructs a new QSqlRecord object.
func NewQSqlRecord() *QSqlRecord {

	return newQSqlRecord(C.QSqlRecord_new())
}

// NewQSqlRecord2 constructs a new QSqlRecord object.
func NewQSqlRecord2(other *QSqlRecord) *QSqlRecord {
	defer runtime.KeepAlive(other)

	return newQSqlRecord(C.QSqlRecord_new2(other.cPointer()))
}

func (this *QSqlRecord) OperatorAssign(other *QSqlRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSqlRecord_operatorAssign(this.h, other.cPointer())
}

func (this *QSqlRecord) OperatorEqual(other *QSqlRecord) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QSqlRecord_operatorEqual(this.h, other.cPointer()))
}

func (this *QSqlRecord) OperatorNotEqual(other *QSqlRecord) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QSqlRecord_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QSqlRecord) Value(i int) *qt.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlRecord_value(this.h, (C.int)(i))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRecord) ValueWithName(name string) *qt.QVariant {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlRecord_valueWithName(this.h, name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRecord) SetValue(i int, val *qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	C.QSqlRecord_setValue(this.h, (C.int)(i), (*C.QVariant)(val.UnsafePointer()))
}

func (this *QSqlRecord) SetValue2(name string, val *qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlRecord_setValue2(this.h, name_ms, (*C.QVariant)(val.UnsafePointer()))
}

func (this *QSqlRecord) SetNull(i int) {
	defer runtime.KeepAlive(this)
	C.QSqlRecord_setNull(this.h, (C.int)(i))
}

func (this *QSqlRecord) SetNullWithName(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlRecord_setNullWithName(this.h, name_ms)
}

func (this *QSqlRecord) IsNull(i int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlRecord_isNull(this.h, (C.int)(i)))
}

func (this *QSqlRecord) IsNullWithName(name string) bool {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QSqlRecord_isNullWithName(this.h, name_ms))
}

func (this *QSqlRecord) IndexOf(name string) int {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (int)(C.QSqlRecord_indexOf(this.h, name_ms))
}

func (this *QSqlRecord) FieldName(i int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlRecord_fieldName(this.h, (C.int)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlRecord) Field(i int) *QSqlField {
	defer runtime.KeepAlive(this)
	_goptr := newQSqlField(C.QSqlRecord_field(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRecord) FieldWithName(name string) *QSqlField {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQSqlField(C.QSqlRecord_fieldWithName(this.h, name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRecord) IsGenerated(i int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlRecord_isGenerated(this.h, (C.int)(i)))
}

func (this *QSqlRecord) IsGeneratedWithName(name string) bool {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QSqlRecord_isGeneratedWithName(this.h, name_ms))
}

func (this *QSqlRecord) SetGenerated(name string, generated bool) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlRecord_setGenerated(this.h, name_ms, (C.bool)(generated))
}

func (this *QSqlRecord) SetGenerated2(i int, generated bool) {
	defer runtime.KeepAlive(this)
	C.QSqlRecord_setGenerated2(this.h, (C.int)(i), (C.bool)(generated))
}

func (this *QSqlRecord) Append(field *QSqlField) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(field)
	C.QSqlRecord_append(this.h, field.cPointer())
}

func (this *QSqlRecord) Replace(pos int, field *QSqlField) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(field)
	C.QSqlRecord_replace(this.h, (C.int)(pos), field.cPointer())
}

func (this *QSqlRecord) Insert(pos int, field *QSqlField) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(field)
	C.QSqlRecord_insert(this.h, (C.int)(pos), field.cPointer())
}

func (this *QSqlRecord) Remove(pos int) {
	defer runtime.KeepAlive(this)
	C.QSqlRecord_remove(this.h, (C.int)(pos))
}

func (this *QSqlRecord) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlRecord_isEmpty(this.h))
}

func (this *QSqlRecord) Contains(name string) bool {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QSqlRecord_contains(this.h, name_ms))
}

func (this *QSqlRecord) Clear() {
	defer runtime.KeepAlive(this)
	C.QSqlRecord_clear(this.h)
}

func (this *QSqlRecord) ClearValues() {
	defer runtime.KeepAlive(this)
	C.QSqlRecord_clearValues(this.h)
}

func (this *QSqlRecord) Count() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSqlRecord_count(this.h))
}

func (this *QSqlRecord) KeyValues(keyFields *QSqlRecord) *QSqlRecord {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(keyFields)
	_goptr := newQSqlRecord(C.QSqlRecord_keyValues(this.h, keyFields.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSqlRecord) Delete() {
	C.QSqlRecord_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSqlRecord) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSqlRecord_delete((*C.QSqlRecord)(gc[0]))
	})
	this.miqtSetGC(gc)
}
