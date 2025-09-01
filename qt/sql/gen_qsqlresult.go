package sql

/*

#include "gen_qsqlresult.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QSqlResult__BindingSyntax int

const (
	QSqlResult__PositionalBinding QSqlResult__BindingSyntax = 0
	QSqlResult__NamedBinding      QSqlResult__BindingSyntax = 1
)

type QSqlResult struct {
	h *C.QSqlResult
}

func (this *QSqlResult) cPointer() *C.QSqlResult {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlResult) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlResult constructs the type using only CGO pointers.
func newQSqlResult(h *C.QSqlResult) *QSqlResult {
	if h == nil {
		return nil
	}

	return &QSqlResult{h: h}
}

// UnsafeNewQSqlResult constructs the type using only unsafe pointers.
func UnsafeNewQSqlResult(h unsafe.Pointer) *QSqlResult {
	return newQSqlResult((*C.QSqlResult)(h))
}

func (this *QSqlResult) Handle() *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlResult_handle(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSqlResult) Delete() {
	C.QSqlResult_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSqlResult) GoGC() {
	runtime.SetFinalizer(this, func(this *QSqlResult) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
