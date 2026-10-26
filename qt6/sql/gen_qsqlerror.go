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
	h  *C.QSqlError
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSqlError) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
func NewQSqlError() *QSqlError {

	return newQSqlError(C.QSqlError_new())
}

// NewQSqlError2 constructs a new QSqlError object.
func NewQSqlError2(other *QSqlError) *QSqlError {
	defer runtime.KeepAlive(other)

	return newQSqlError(C.QSqlError_new2(other.cPointer()))
}

// NewQSqlError3 constructs a new QSqlError object.
func NewQSqlError3(driverText string) *QSqlError {
	driverText_ms := C.struct_miqt_string{}
	driverText_ms.data = C.CString(driverText)
	driverText_ms.len = C.size_t(len(driverText))
	defer C.free(unsafe.Pointer(driverText_ms.data))

	return newQSqlError(C.QSqlError_new3(driverText_ms))
}

// NewQSqlError4 constructs a new QSqlError object.
func NewQSqlError4(driverText string, databaseText string) *QSqlError {
	driverText_ms := C.struct_miqt_string{}
	driverText_ms.data = C.CString(driverText)
	driverText_ms.len = C.size_t(len(driverText))
	defer C.free(unsafe.Pointer(driverText_ms.data))
	databaseText_ms := C.struct_miqt_string{}
	databaseText_ms.data = C.CString(databaseText)
	databaseText_ms.len = C.size_t(len(databaseText))
	defer C.free(unsafe.Pointer(databaseText_ms.data))

	return newQSqlError(C.QSqlError_new4(driverText_ms, databaseText_ms))
}

// NewQSqlError5 constructs a new QSqlError object.
func NewQSqlError5(driverText string, databaseText string, typeVal QSqlError__ErrorType) *QSqlError {
	driverText_ms := C.struct_miqt_string{}
	driverText_ms.data = C.CString(driverText)
	driverText_ms.len = C.size_t(len(driverText))
	defer C.free(unsafe.Pointer(driverText_ms.data))
	databaseText_ms := C.struct_miqt_string{}
	databaseText_ms.data = C.CString(databaseText)
	databaseText_ms.len = C.size_t(len(databaseText))
	defer C.free(unsafe.Pointer(databaseText_ms.data))

	return newQSqlError(C.QSqlError_new5(driverText_ms, databaseText_ms, (C.int)(typeVal)))
}

// NewQSqlError6 constructs a new QSqlError object.
func NewQSqlError6(driverText string, databaseText string, typeVal QSqlError__ErrorType, errorCode string) *QSqlError {
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

	return newQSqlError(C.QSqlError_new6(driverText_ms, databaseText_ms, (C.int)(typeVal), errorCode_ms))
}

func (this *QSqlError) OperatorAssign(other *QSqlError) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSqlError_operatorAssign(this.h, other.cPointer())
}

func (this *QSqlError) OperatorEqual(other *QSqlError) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QSqlError_operatorEqual(this.h, other.cPointer()))
}

func (this *QSqlError) OperatorNotEqual(other *QSqlError) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QSqlError_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QSqlError) Swap(other *QSqlError) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSqlError_swap(this.h, other.cPointer())
}

func (this *QSqlError) DriverText() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlError_driverText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlError) DatabaseText() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlError_databaseText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlError) Type() QSqlError__ErrorType {
	defer runtime.KeepAlive(this)
	return (QSqlError__ErrorType)(C.QSqlError_type(this.h))
}

func (this *QSqlError) NativeErrorCode() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlError_nativeErrorCode(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlError) Text() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlError_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlError) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlError_isValid(this.h))
}

// Delete this object from C++ memory.
func (this *QSqlError) Delete() {
	C.QSqlError_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSqlError) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSqlError_delete((*C.QSqlError)(gc[0]))
	})
	this.miqtSetGC(gc)
}
