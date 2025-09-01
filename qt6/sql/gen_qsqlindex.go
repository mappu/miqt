package sql

/*

#include "gen_qsqlindex.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSqlIndex struct {
	h *C.QSqlIndex
	*QSqlRecord
}

func (this *QSqlIndex) cPointer() *C.QSqlIndex {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlIndex) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlIndex constructs the type using only CGO pointers.
func newQSqlIndex(h *C.QSqlIndex) *QSqlIndex {
	if h == nil {
		return nil
	}
	var outptr_QSqlRecord *C.QSqlRecord = nil
	C.QSqlIndex_virtbase(h, &outptr_QSqlRecord)

	return &QSqlIndex{h: h,
		QSqlRecord: newQSqlRecord(outptr_QSqlRecord)}
}

// UnsafeNewQSqlIndex constructs the type using only unsafe pointers.
func UnsafeNewQSqlIndex(h unsafe.Pointer) *QSqlIndex {
	return newQSqlIndex((*C.QSqlIndex)(h))
}

// NewQSqlIndex constructs a new QSqlIndex object.
func NewQSqlIndex() *QSqlIndex {

	return newQSqlIndex(C.QSqlIndex_new())
}

// NewQSqlIndex2 constructs a new QSqlIndex object.
func NewQSqlIndex2(other *QSqlIndex) *QSqlIndex {

	return newQSqlIndex(C.QSqlIndex_new2(other.cPointer()))
}

// NewQSqlIndex3 constructs a new QSqlIndex object.
func NewQSqlIndex3(cursorName string) *QSqlIndex {
	cursorName_ms := C.struct_miqt_string{}
	cursorName_ms.data = C.CString(cursorName)
	cursorName_ms.len = C.size_t(len(cursorName))
	defer C.free(unsafe.Pointer(cursorName_ms.data))

	return newQSqlIndex(C.QSqlIndex_new3(cursorName_ms))
}

// NewQSqlIndex4 constructs a new QSqlIndex object.
func NewQSqlIndex4(cursorName string, name string) *QSqlIndex {
	cursorName_ms := C.struct_miqt_string{}
	cursorName_ms.data = C.CString(cursorName)
	cursorName_ms.len = C.size_t(len(cursorName))
	defer C.free(unsafe.Pointer(cursorName_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQSqlIndex(C.QSqlIndex_new4(cursorName_ms, name_ms))
}

func (this *QSqlIndex) OperatorAssign(other *QSqlIndex) {
	C.QSqlIndex_operatorAssign(this.h, other.cPointer())
}

func (this *QSqlIndex) SetCursorName(cursorName string) {
	cursorName_ms := C.struct_miqt_string{}
	cursorName_ms.data = C.CString(cursorName)
	cursorName_ms.len = C.size_t(len(cursorName))
	defer C.free(unsafe.Pointer(cursorName_ms.data))
	C.QSqlIndex_setCursorName(this.h, cursorName_ms)
}

func (this *QSqlIndex) CursorName() string {
	var _ms C.struct_miqt_string = C.QSqlIndex_cursorName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlIndex) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlIndex_setName(this.h, name_ms)
}

func (this *QSqlIndex) Name() string {
	var _ms C.struct_miqt_string = C.QSqlIndex_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlIndex) Append(field *QSqlField) {
	C.QSqlIndex_append(this.h, field.cPointer())
}

func (this *QSqlIndex) Append2(field *QSqlField, desc bool) {
	C.QSqlIndex_append2(this.h, field.cPointer(), (C.bool)(desc))
}

func (this *QSqlIndex) IsDescending(i int) bool {
	return (bool)(C.QSqlIndex_isDescending(this.h, (C.int)(i)))
}

func (this *QSqlIndex) SetDescending(i int, desc bool) {
	C.QSqlIndex_setDescending(this.h, (C.int)(i), (C.bool)(desc))
}

// Delete this object from C++ memory.
func (this *QSqlIndex) Delete() {
	C.QSqlIndex_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSqlIndex) GoGC() {
	runtime.SetFinalizer(this, func(this *QSqlIndex) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
