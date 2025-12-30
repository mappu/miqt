package scxml

/*

#include "gen_qscxmlerror.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScxmlError struct {
	h *C.QScxmlError
}

func (this *QScxmlError) cPointer() *C.QScxmlError {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlError) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlError constructs the type using only CGO pointers.
func newQScxmlError(h *C.QScxmlError) *QScxmlError {
	if h == nil {
		return nil
	}

	return &QScxmlError{h: h}
}

// UnsafeNewQScxmlError constructs the type using only unsafe pointers.
func UnsafeNewQScxmlError(h unsafe.Pointer) *QScxmlError {
	return newQScxmlError((*C.QScxmlError)(h))
}

// NewQScxmlError constructs a new QScxmlError object.
func NewQScxmlError() *QScxmlError {

	return newQScxmlError(C.QScxmlError_new())
}

// NewQScxmlError2 constructs a new QScxmlError object.
func NewQScxmlError2(fileName string, line int, column int, description string) *QScxmlError {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))

	return newQScxmlError(C.QScxmlError_new2(fileName_ms, (C.int)(line), (C.int)(column), description_ms))
}

// NewQScxmlError3 constructs a new QScxmlError object.
func NewQScxmlError3(param1 *QScxmlError) *QScxmlError {

	return newQScxmlError(C.QScxmlError_new3(param1.cPointer()))
}

func (this *QScxmlError) OperatorAssign(param1 *QScxmlError) {
	C.QScxmlError_operatorAssign(this.h, param1.cPointer())
}

func (this *QScxmlError) IsValid() bool {
	return (bool)(C.QScxmlError_isValid(this.h))
}

func (this *QScxmlError) FileName() string {
	var _ms C.struct_miqt_string = C.QScxmlError_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlError) Line() int {
	return (int)(C.QScxmlError_line(this.h))
}

func (this *QScxmlError) Column() int {
	return (int)(C.QScxmlError_column(this.h))
}

func (this *QScxmlError) Description() string {
	var _ms C.struct_miqt_string = C.QScxmlError_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlError) ToString() string {
	var _ms C.struct_miqt_string = C.QScxmlError_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QScxmlError) Delete() {
	C.QScxmlError_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlError) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlError) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
