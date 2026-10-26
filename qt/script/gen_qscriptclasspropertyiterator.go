package script

/*

#include "gen_qscriptclasspropertyiterator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScriptClassPropertyIterator struct {
	h  *C.QScriptClassPropertyIterator
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QScriptClassPropertyIterator) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QScriptClassPropertyIterator) cPointer() *C.QScriptClassPropertyIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptClassPropertyIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptClassPropertyIterator constructs the type using only CGO pointers.
func newQScriptClassPropertyIterator(h *C.QScriptClassPropertyIterator) *QScriptClassPropertyIterator {
	if h == nil {
		return nil
	}

	return &QScriptClassPropertyIterator{h: h}
}

// UnsafeNewQScriptClassPropertyIterator constructs the type using only unsafe pointers.
func UnsafeNewQScriptClassPropertyIterator(h unsafe.Pointer) *QScriptClassPropertyIterator {
	return newQScriptClassPropertyIterator((*C.QScriptClassPropertyIterator)(h))
}

func (this *QScriptClassPropertyIterator) Object() *QScriptValue {
	defer runtime.KeepAlive(this)
	_goptr := newQScriptValue(C.QScriptClassPropertyIterator_object(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptClassPropertyIterator) HasNext() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QScriptClassPropertyIterator_hasNext(this.h))
}

func (this *QScriptClassPropertyIterator) Next() {
	defer runtime.KeepAlive(this)
	C.QScriptClassPropertyIterator_next(this.h)
}

func (this *QScriptClassPropertyIterator) HasPrevious() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QScriptClassPropertyIterator_hasPrevious(this.h))
}

func (this *QScriptClassPropertyIterator) Previous() {
	defer runtime.KeepAlive(this)
	C.QScriptClassPropertyIterator_previous(this.h)
}

func (this *QScriptClassPropertyIterator) ToFront() {
	defer runtime.KeepAlive(this)
	C.QScriptClassPropertyIterator_toFront(this.h)
}

func (this *QScriptClassPropertyIterator) ToBack() {
	defer runtime.KeepAlive(this)
	C.QScriptClassPropertyIterator_toBack(this.h)
}

func (this *QScriptClassPropertyIterator) Name() *QScriptString {
	defer runtime.KeepAlive(this)
	_goptr := newQScriptString(C.QScriptClassPropertyIterator_name(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptClassPropertyIterator) Id() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QScriptClassPropertyIterator_id(this.h))
}

func (this *QScriptClassPropertyIterator) Flags() QScriptValue__PropertyFlag {
	defer runtime.KeepAlive(this)
	return (QScriptValue__PropertyFlag)(C.QScriptClassPropertyIterator_flags(this.h))
}

// Delete this object from C++ memory.
func (this *QScriptClassPropertyIterator) Delete() {
	C.QScriptClassPropertyIterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QScriptClassPropertyIterator) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QScriptClassPropertyIterator_delete((*C.QScriptClassPropertyIterator)(gc[0]))
	})
	this.miqtSetGC(gc)
}
