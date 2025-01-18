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
	h *C.QScriptClassPropertyIterator
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
	_goptr := newQScriptValue(C.QScriptClassPropertyIterator_Object(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptClassPropertyIterator) HasNext() bool {
	return (bool)(C.QScriptClassPropertyIterator_HasNext(this.h))
}

func (this *QScriptClassPropertyIterator) Next() {
	C.QScriptClassPropertyIterator_Next(this.h)
}

func (this *QScriptClassPropertyIterator) HasPrevious() bool {
	return (bool)(C.QScriptClassPropertyIterator_HasPrevious(this.h))
}

func (this *QScriptClassPropertyIterator) Previous() {
	C.QScriptClassPropertyIterator_Previous(this.h)
}

func (this *QScriptClassPropertyIterator) ToFront() {
	C.QScriptClassPropertyIterator_ToFront(this.h)
}

func (this *QScriptClassPropertyIterator) ToBack() {
	C.QScriptClassPropertyIterator_ToBack(this.h)
}

func (this *QScriptClassPropertyIterator) Name() *QScriptString {
	_goptr := newQScriptString(C.QScriptClassPropertyIterator_Name(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptClassPropertyIterator) Id() uint {
	return (uint)(C.QScriptClassPropertyIterator_Id(this.h))
}

func (this *QScriptClassPropertyIterator) Flags() QScriptValue__PropertyFlag {
	return (QScriptValue__PropertyFlag)(C.QScriptClassPropertyIterator_Flags(this.h))
}

// Delete this object from C++ memory.
func (this *QScriptClassPropertyIterator) Delete() {
	C.QScriptClassPropertyIterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptClassPropertyIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptClassPropertyIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
