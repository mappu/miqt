package script

/*

#include "gen_qscriptable.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScriptable struct {
	h  *C.QScriptable
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QScriptable) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QScriptable) cPointer() *C.QScriptable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptable constructs the type using only CGO pointers.
func newQScriptable(h *C.QScriptable) *QScriptable {
	if h == nil {
		return nil
	}

	return &QScriptable{h: h}
}

// UnsafeNewQScriptable constructs the type using only unsafe pointers.
func UnsafeNewQScriptable(h unsafe.Pointer) *QScriptable {
	return newQScriptable((*C.QScriptable)(h))
}

// NewQScriptable constructs a new QScriptable object.
func NewQScriptable() *QScriptable {

	return newQScriptable(C.QScriptable_new())
}

func (this *QScriptable) Engine() *QScriptEngine {
	defer runtime.KeepAlive(this)
	return newQScriptEngine(C.QScriptable_engine(this.h))
}

func (this *QScriptable) Context() *QScriptContext {
	defer runtime.KeepAlive(this)
	return newQScriptContext(C.QScriptable_context(this.h))
}

func (this *QScriptable) ThisObject() *QScriptValue {
	defer runtime.KeepAlive(this)
	_goptr := newQScriptValue(C.QScriptable_thisObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptable) ArgumentCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QScriptable_argumentCount(this.h))
}

func (this *QScriptable) Argument(index int) *QScriptValue {
	defer runtime.KeepAlive(this)
	_goptr := newQScriptValue(C.QScriptable_argument(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QScriptable) Delete() {
	C.QScriptable_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QScriptable) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QScriptable_delete((*C.QScriptable)(gc[0]))
	})
	this.miqtSetGC(gc)
}
