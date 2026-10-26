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
	h  *C.QJSValueIterator
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QJSValueIterator) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(value)

	return newQJSValueIterator(C.QJSValueIterator_new(value.cPointer()))
}

func (this *QJSValueIterator) HasNext() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSValueIterator_hasNext(this.h))
}

func (this *QJSValueIterator) Next() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSValueIterator_next(this.h))
}

func (this *QJSValueIterator) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QJSValueIterator_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJSValueIterator) Value() *QJSValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSValue(C.QJSValueIterator_value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSValueIterator) OperatorAssign(value *QJSValue) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QJSValueIterator_operatorAssign(this.h, value.cPointer())
}

// Delete this object from C++ memory.
func (this *QJSValueIterator) Delete() {
	C.QJSValueIterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QJSValueIterator) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QJSValueIterator_delete((*C.QJSValueIterator)(gc[0]))
	})
	this.miqtSetGC(gc)
}
