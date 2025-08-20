package sql

/*

#include "gen_qsqlerror.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSqlError__ErrorType int

const (
	QSqlError__NoError          QSqlError__ErrorType = 0
	QSqlError__ConnectionError  QSqlError__ErrorType = 1
	QSqlError__StatementError   QSqlError__ErrorType = 2
	QSqlError__TransactionError QSqlError__ErrorType = 3
	QSqlError__UnknownError     QSqlError__ErrorType = 4
)

type QSqlError struct {
	h *C.QSqlError
}

func (this *QSqlError) cPointer() *C.QSqlError {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlError) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlError constructs the type using only CGO pointers.
func newQSqlError(h *C.QSqlError) *QSqlError {
	if h == nil {
		return nil
	}

	return &QSqlError{h: h}
}

// UnsafeNewQSqlError constructs the type using only unsafe pointers.
func UnsafeNewQSqlError(h unsafe.Pointer) *QSqlError {
	return newQSqlError((*C.QSqlError)(h))
}

// NewQSqlError constructs a new QSqlError object.
func NewQSqlError(driverText string, databaseText string, typeVal QSqlError__ErrorType, number int) *QSqlError {
	driverText_ms := C.struct_miqt_string{}
	driverText_ms.data = C.CString(driverText)
	driverText_ms.len = C.size_t(len(driverText))
	defer C.free(unsafe.Pointer(driverText_ms.data))
	databaseText_ms := C.struct_miqt_string{}
	databaseText_ms.data = C.CString(databaseText)
	databaseText_ms.len = C.size_t(len(databaseText))
	defer C.free(unsafe.Pointer(databaseText_ms.data))

	return newQSqlError(C.QSqlError_new(driverText_ms, databaseText_ms, (C.int)(typeVal), (C.int)(number)))
}

// NewQSqlError2 constructs a new QSqlError object.
func NewQSqlError2() *QSqlError {

	return newQSqlError(C.QSqlError_new2())
}

// NewQSqlError3 constructs a new QSqlError object.
func NewQSqlError3(other *QSqlError) *QSqlError {

	return newQSqlError(C.QSqlError_new3(other.cPointer()))
}

// NewQSqlError4 constructs a new QSqlError object.
func NewQSqlError4(driverText string) *QSqlError {
	driverText_ms := C.struct_miqt_string{}
	driverText_ms.data = C.CString(driverText)
	driverText_ms.len = C.size_t(len(driverText))
	defer C.free(unsafe.Pointer(driverText_ms.data))

	return newQSqlError(C.QSqlError_new4(driverText_ms))
}

// NewQSqlError5 constructs a new QSqlError object.
func NewQSqlError5(driverText string, databaseText string) *QSqlError {
	driverText_ms := C.struct_miqt_string{}
	driverText_ms.data = C.CString(driverText)
	driverText_ms.len = C.size_t(len(driverText))
	defer C.free(unsafe.Pointer(driverText_ms.data))
	databaseText_ms := C.struct_miqt_string{}
	databaseText_ms.data = C.CString(databaseText)
	databaseText_ms.len = C.size_t(len(databaseText))
	defer C.free(unsafe.Pointer(databaseText_ms.data))

	return newQSqlError(C.QSqlError_new5(driverText_ms, databaseText_ms))
}

// NewQSqlError6 constructs a new QSqlError object.
func NewQSqlError6(driverText string, databaseText string, typeVal QSqlError__ErrorType) *QSqlError {
	driverText_ms := C.struct_miqt_string{}
	driverText_ms.data = C.CString(driverText)
	driverText_ms.len = C.size_t(len(driverText))
	defer C.free(unsafe.Pointer(driverText_ms.data))
	databaseText_ms := C.struct_miqt_string{}
	databaseText_ms.data = C.CString(databaseText)
	databaseText_ms.len = C.size_t(len(databaseText))
	defer C.free(unsafe.Pointer(databaseText_ms.data))

	return newQSqlError(C.QSqlError_new6(driverText_ms, databaseText_ms, (C.int)(typeVal)))
}

// NewQSqlError7 constructs a new QSqlError object.
func NewQSqlError7(driverText string, databaseText string, typeVal QSqlError__ErrorType, errorCode string) *QSqlError {
	driverText_ms := C.struct_miqt_string{}
	driverText_ms.data = C.CString(driverText)
	driverText_ms.len = C.size_t(len(driverText))
	defer C.free(unsafe.Pointer(driverText_ms.data))
	databaseText_ms := C.struct_miqt_string{}
	databaseText_ms.data = C.CString(databaseText)
	databaseText_ms.len = C.size_t(len(databaseText))
	defer C.free(unsafe.Pointer(databaseText_ms.data))
	errorCode_ms := C.struct_miqt_string{}
	errorCode_ms.data = C.CString(errorCode)
	errorCode_ms.len = C.size_t(len(errorCode))
	defer C.free(unsafe.Pointer(errorCode_ms.data))

	return newQSqlError(C.QSqlError_new7(driverText_ms, databaseText_ms, (C.int)(typeVal), errorCode_ms))
}

func (this *QSqlError) OperatorAssign(other *QSqlError) {
	C.QSqlError_operatorAssign(this.h, other.cPointer())
}

func (this *QSqlError) OperatorEqual(other *QSqlError) bool {
	return (bool)(C.QSqlError_operatorEqual(this.h, other.cPointer()))
}

func (this *QSqlError) OperatorNotEqual(other *QSqlError) bool {
	return (bool)(C.QSqlError_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QSqlError) Swap(other *QSqlError) {
	C.QSqlError_swap(this.h, other.cPointer())
}

func (this *QSqlError) DriverText() string {
	var _ms C.struct_miqt_string = C.QSqlError_driverText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlError) DatabaseText() string {
	var _ms C.struct_miqt_string = C.QSqlError_databaseText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlError) Type() QSqlError__ErrorType {
	return (QSqlError__ErrorType)(C.QSqlError_type(this.h))
}

func (this *QSqlError) Number() int {
	return (int)(C.QSqlError_number(this.h))
}

func (this *QSqlError) NativeErrorCode() string {
	var _ms C.struct_miqt_string = C.QSqlError_nativeErrorCode(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlError) Text() string {
	var _ms C.struct_miqt_string = C.QSqlError_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlError) IsValid() bool {
	return (bool)(C.QSqlError_isValid(this.h))
}

func (this *QSqlError) SetDriverText(driverText string) {
	driverText_ms := C.struct_miqt_string{}
	driverText_ms.data = C.CString(driverText)
	driverText_ms.len = C.size_t(len(driverText))
	defer C.free(unsafe.Pointer(driverText_ms.data))
	C.QSqlError_setDriverText(this.h, driverText_ms)
}

func (this *QSqlError) SetDatabaseText(databaseText string) {
	databaseText_ms := C.struct_miqt_string{}
	databaseText_ms.data = C.CString(databaseText)
	databaseText_ms.len = C.size_t(len(databaseText))
	defer C.free(unsafe.Pointer(databaseText_ms.data))
	C.QSqlError_setDatabaseText(this.h, databaseText_ms)
}

func (this *QSqlError) SetType(typeVal QSqlError__ErrorType) {
	C.QSqlError_setType(this.h, (C.int)(typeVal))
}

func (this *QSqlError) SetNumber(number int) {
	C.QSqlError_setNumber(this.h, (C.int)(number))
}

// Delete this object from C++ memory.
func (this *QSqlError) Delete() {
	C.QSqlError_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSqlError) GoGC() {
	runtime.SetFinalizer(this, func(this *QSqlError) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
