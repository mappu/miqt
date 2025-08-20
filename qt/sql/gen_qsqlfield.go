package sql

/*

#include "gen_qsqlfield.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QSqlField__RequiredStatus int

const (
	QSqlField__Unknown  QSqlField__RequiredStatus = -1
	QSqlField__Optional QSqlField__RequiredStatus = 0
	QSqlField__Required QSqlField__RequiredStatus = 1
)

type QSqlField struct {
	h *C.QSqlField
}

func (this *QSqlField) cPointer() *C.QSqlField {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlField) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlField constructs the type using only CGO pointers.
func newQSqlField(h *C.QSqlField) *QSqlField {
	if h == nil {
		return nil
	}

	return &QSqlField{h: h}
}

// UnsafeNewQSqlField constructs the type using only unsafe pointers.
func UnsafeNewQSqlField(h unsafe.Pointer) *QSqlField {
	return newQSqlField((*C.QSqlField)(h))
}

// NewQSqlField constructs a new QSqlField object.
func NewQSqlField() *QSqlField {

	return newQSqlField(C.QSqlField_new())
}

// NewQSqlField2 constructs a new QSqlField object.
func NewQSqlField2(fieldName string, typeVal qt.QVariant__Type, tableName string) *QSqlField {
	fieldName_ms := C.struct_miqt_string{}
	fieldName_ms.data = C.CString(fieldName)
	fieldName_ms.len = C.size_t(len(fieldName))
	defer C.free(unsafe.Pointer(fieldName_ms.data))
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))

	return newQSqlField(C.QSqlField_new2(fieldName_ms, (C.int)(typeVal), tableName_ms))
}

// NewQSqlField3 constructs a new QSqlField object.
func NewQSqlField3(other *QSqlField) *QSqlField {

	return newQSqlField(C.QSqlField_new3(other.cPointer()))
}

// NewQSqlField4 constructs a new QSqlField object.
func NewQSqlField4(fieldName string) *QSqlField {
	fieldName_ms := C.struct_miqt_string{}
	fieldName_ms.data = C.CString(fieldName)
	fieldName_ms.len = C.size_t(len(fieldName))
	defer C.free(unsafe.Pointer(fieldName_ms.data))

	return newQSqlField(C.QSqlField_new4(fieldName_ms))
}

// NewQSqlField5 constructs a new QSqlField object.
func NewQSqlField5(fieldName string, typeVal qt.QVariant__Type) *QSqlField {
	fieldName_ms := C.struct_miqt_string{}
	fieldName_ms.data = C.CString(fieldName)
	fieldName_ms.len = C.size_t(len(fieldName))
	defer C.free(unsafe.Pointer(fieldName_ms.data))

	return newQSqlField(C.QSqlField_new5(fieldName_ms, (C.int)(typeVal)))
}

func (this *QSqlField) OperatorAssign(other *QSqlField) {
	C.QSqlField_operatorAssign(this.h, other.cPointer())
}

func (this *QSqlField) OperatorEqual(other *QSqlField) bool {
	return (bool)(C.QSqlField_operatorEqual(this.h, other.cPointer()))
}

func (this *QSqlField) OperatorNotEqual(other *QSqlField) bool {
	return (bool)(C.QSqlField_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QSqlField) SetValue(value *qt.QVariant) {
	C.QSqlField_setValue(this.h, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QSqlField) Value() *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlField_value(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlField) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlField_setName(this.h, name_ms)
}

func (this *QSqlField) Name() string {
	var _ms C.struct_miqt_string = C.QSqlField_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlField) SetTableName(tableName string) {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))
	C.QSqlField_setTableName(this.h, tableName_ms)
}

func (this *QSqlField) TableName() string {
	var _ms C.struct_miqt_string = C.QSqlField_tableName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlField) IsNull() bool {
	return (bool)(C.QSqlField_isNull(this.h))
}

func (this *QSqlField) SetReadOnly(readOnly bool) {
	C.QSqlField_setReadOnly(this.h, (C.bool)(readOnly))
}

func (this *QSqlField) IsReadOnly() bool {
	return (bool)(C.QSqlField_isReadOnly(this.h))
}

func (this *QSqlField) Clear() {
	C.QSqlField_clear(this.h)
}

func (this *QSqlField) Type() qt.QVariant__Type {
	return (qt.QVariant__Type)(C.QSqlField_type(this.h))
}

func (this *QSqlField) IsAutoValue() bool {
	return (bool)(C.QSqlField_isAutoValue(this.h))
}

func (this *QSqlField) SetType(typeVal qt.QVariant__Type) {
	C.QSqlField_setType(this.h, (C.int)(typeVal))
}

func (this *QSqlField) SetRequiredStatus(status QSqlField__RequiredStatus) {
	C.QSqlField_setRequiredStatus(this.h, (C.int)(status))
}

func (this *QSqlField) SetRequired(required bool) {
	C.QSqlField_setRequired(this.h, (C.bool)(required))
}

func (this *QSqlField) SetLength(fieldLength int) {
	C.QSqlField_setLength(this.h, (C.int)(fieldLength))
}

func (this *QSqlField) SetPrecision(precision int) {
	C.QSqlField_setPrecision(this.h, (C.int)(precision))
}

func (this *QSqlField) SetDefaultValue(value *qt.QVariant) {
	C.QSqlField_setDefaultValue(this.h, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QSqlField) SetSqlType(typeVal int) {
	C.QSqlField_setSqlType(this.h, (C.int)(typeVal))
}

func (this *QSqlField) SetGenerated(gen bool) {
	C.QSqlField_setGenerated(this.h, (C.bool)(gen))
}

func (this *QSqlField) SetAutoValue(autoVal bool) {
	C.QSqlField_setAutoValue(this.h, (C.bool)(autoVal))
}

func (this *QSqlField) RequiredStatus() QSqlField__RequiredStatus {
	return (QSqlField__RequiredStatus)(C.QSqlField_requiredStatus(this.h))
}

func (this *QSqlField) Length() int {
	return (int)(C.QSqlField_length(this.h))
}

func (this *QSqlField) Precision() int {
	return (int)(C.QSqlField_precision(this.h))
}

func (this *QSqlField) DefaultValue() *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlField_defaultValue(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlField) TypeID() int {
	return (int)(C.QSqlField_typeID(this.h))
}

func (this *QSqlField) IsGenerated() bool {
	return (bool)(C.QSqlField_isGenerated(this.h))
}

func (this *QSqlField) IsValid() bool {
	return (bool)(C.QSqlField_isValid(this.h))
}

// Delete this object from C++ memory.
func (this *QSqlField) Delete() {
	C.QSqlField_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSqlField) GoGC() {
	runtime.SetFinalizer(this, func(this *QSqlField) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
