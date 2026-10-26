package sql

/*

#include "gen_qsqlfield.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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
	h  *C.QSqlField
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSqlField) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
func NewQSqlField2(other *QSqlField) *QSqlField {
	defer runtime.KeepAlive(other)

	return newQSqlField(C.QSqlField_new2(other.cPointer()))
}

// NewQSqlField3 constructs a new QSqlField object.
func NewQSqlField3(fieldName string, typeVal qt6.QVariant__Type) *QSqlField {
	fieldName_ms := C.struct_miqt_string{}
	fieldName_ms.data = C.CString(fieldName)
	fieldName_ms.len = C.size_t(len(fieldName))
	defer C.free(unsafe.Pointer(fieldName_ms.data))

	return newQSqlField(C.QSqlField_new3(fieldName_ms, (C.int)(typeVal)))
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
func NewQSqlField5(fieldName string, typeVal qt6.QMetaType) *QSqlField {
	defer runtime.KeepAlive(typeVal)
	fieldName_ms := C.struct_miqt_string{}
	fieldName_ms.data = C.CString(fieldName)
	fieldName_ms.len = C.size_t(len(fieldName))
	defer C.free(unsafe.Pointer(fieldName_ms.data))

	return newQSqlField(C.QSqlField_new5(fieldName_ms, (*C.QMetaType)(typeVal.UnsafePointer())))
}

// NewQSqlField6 constructs a new QSqlField object.
func NewQSqlField6(fieldName string, typeVal qt6.QMetaType, tableName string) *QSqlField {
	defer runtime.KeepAlive(typeVal)
	fieldName_ms := C.struct_miqt_string{}
	fieldName_ms.data = C.CString(fieldName)
	fieldName_ms.len = C.size_t(len(fieldName))
	defer C.free(unsafe.Pointer(fieldName_ms.data))
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))

	return newQSqlField(C.QSqlField_new6(fieldName_ms, (*C.QMetaType)(typeVal.UnsafePointer()), tableName_ms))
}

// NewQSqlField7 constructs a new QSqlField object.
func NewQSqlField7(fieldName string, typeVal qt6.QVariant__Type, tableName string) *QSqlField {
	fieldName_ms := C.struct_miqt_string{}
	fieldName_ms.data = C.CString(fieldName)
	fieldName_ms.len = C.size_t(len(fieldName))
	defer C.free(unsafe.Pointer(fieldName_ms.data))
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))

	return newQSqlField(C.QSqlField_new7(fieldName_ms, (C.int)(typeVal), tableName_ms))
}

func (this *QSqlField) OperatorAssign(other *QSqlField) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSqlField_operatorAssign(this.h, other.cPointer())
}

func (this *QSqlField) OperatorEqual(other *QSqlField) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QSqlField_operatorEqual(this.h, other.cPointer()))
}

func (this *QSqlField) OperatorNotEqual(other *QSqlField) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QSqlField_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QSqlField) SetValue(value *qt6.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QSqlField_setValue(this.h, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QSqlField) Value() *qt6.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlField_value(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlField) SetName(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlField_setName(this.h, name_ms)
}

func (this *QSqlField) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlField_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlField) SetTableName(tableName string) {
	defer runtime.KeepAlive(this)
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))
	C.QSqlField_setTableName(this.h, tableName_ms)
}

func (this *QSqlField) TableName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlField_tableName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlField) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlField_isNull(this.h))
}

func (this *QSqlField) SetReadOnly(readOnly bool) {
	defer runtime.KeepAlive(this)
	C.QSqlField_setReadOnly(this.h, (C.bool)(readOnly))
}

func (this *QSqlField) IsReadOnly() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlField_isReadOnly(this.h))
}

func (this *QSqlField) Clear() {
	defer runtime.KeepAlive(this)
	C.QSqlField_clear(this.h)
}

func (this *QSqlField) IsAutoValue() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlField_isAutoValue(this.h))
}

func (this *QSqlField) MetaType() *qt6.QMetaType {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQMetaType(unsafe.Pointer(C.QSqlField_metaType(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlField) SetMetaType(typeVal qt6.QMetaType) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(typeVal)
	C.QSqlField_setMetaType(this.h, (*C.QMetaType)(typeVal.UnsafePointer()))
}

func (this *QSqlField) Type() qt6.QVariant__Type {
	defer runtime.KeepAlive(this)
	return (qt6.QVariant__Type)(C.QSqlField_type(this.h))
}

func (this *QSqlField) SetType(typeVal qt6.QVariant__Type) {
	defer runtime.KeepAlive(this)
	C.QSqlField_setType(this.h, (C.int)(typeVal))
}

func (this *QSqlField) SetRequiredStatus(status QSqlField__RequiredStatus) {
	defer runtime.KeepAlive(this)
	C.QSqlField_setRequiredStatus(this.h, (C.int)(status))
}

func (this *QSqlField) SetRequired(required bool) {
	defer runtime.KeepAlive(this)
	C.QSqlField_setRequired(this.h, (C.bool)(required))
}

func (this *QSqlField) SetLength(fieldLength int) {
	defer runtime.KeepAlive(this)
	C.QSqlField_setLength(this.h, (C.int)(fieldLength))
}

func (this *QSqlField) SetPrecision(precision int) {
	defer runtime.KeepAlive(this)
	C.QSqlField_setPrecision(this.h, (C.int)(precision))
}

func (this *QSqlField) SetDefaultValue(value *qt6.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QSqlField_setDefaultValue(this.h, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QSqlField) SetSqlType(typeVal int) {
	defer runtime.KeepAlive(this)
	C.QSqlField_setSqlType(this.h, (C.int)(typeVal))
}

func (this *QSqlField) SetGenerated(gen bool) {
	defer runtime.KeepAlive(this)
	C.QSqlField_setGenerated(this.h, (C.bool)(gen))
}

func (this *QSqlField) SetAutoValue(autoVal bool) {
	defer runtime.KeepAlive(this)
	C.QSqlField_setAutoValue(this.h, (C.bool)(autoVal))
}

func (this *QSqlField) RequiredStatus() QSqlField__RequiredStatus {
	defer runtime.KeepAlive(this)
	return (QSqlField__RequiredStatus)(C.QSqlField_requiredStatus(this.h))
}

func (this *QSqlField) Length() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSqlField_length(this.h))
}

func (this *QSqlField) Precision() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSqlField_precision(this.h))
}

func (this *QSqlField) DefaultValue() *qt6.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlField_defaultValue(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlField) TypeID() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSqlField_typeID(this.h))
}

func (this *QSqlField) IsGenerated() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlField_isGenerated(this.h))
}

func (this *QSqlField) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlField_isValid(this.h))
}

// Delete this object from C++ memory.
func (this *QSqlField) Delete() {
	C.QSqlField_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSqlField) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSqlField_delete((*C.QSqlField)(gc[0]))
	})
	this.miqtSetGC(gc)
}
