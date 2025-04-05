package qml

/*

#include "gen_qjsvalueiterator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QJSValueIterator struct {
	h *C.QJSValueIterator
}

func (this *QJSValueIterator) cPointer() *C.QJSValueIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSValueIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSValueIterator constructs the type using only CGO pointers.
func newQJSValueIterator(h *C.QJSValueIterator) *QJSValueIterator {
	if h == nil {
		return nil
	}

	return &QJSValueIterator{h: h}
}

// UnsafeNewQJSValueIterator constructs the type using only unsafe pointers.
func UnsafeNewQJSValueIterator(h unsafe.Pointer) *QJSValueIterator {
	return newQJSValueIterator((*C.QJSValueIterator)(h))
}

// NewQJSValueIterator constructs a new QJSValueIterator object.
func NewQJSValueIterator(value *QJSValue) *QJSValueIterator {

	return newQJSValueIterator(C.QJSValueIterator_new(value.cPointer()))
}

func (this *QJSValueIterator) HasNext() bool {
	return (bool)(C.QJSValueIterator_hasNext(this.h))
}

func (this *QJSValueIterator) Next() bool {
	return (bool)(C.QJSValueIterator_next(this.h))
}

func (this *QJSValueIterator) Name() string {
	var _ms C.struct_miqt_string = C.QJSValueIterator_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJSValueIterator) Value() *QJSValue {
	_goptr := newQJSValue(C.QJSValueIterator_value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValueIterator) OperatorAssign(value *QJSValue) {
	C.QJSValueIterator_operatorAssign(this.h, value.cPointer())
}

// Delete this object from C++ memory.
func (this *QJSValueIterator) Delete() {
	C.QJSValueIterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSValueIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSValueIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
