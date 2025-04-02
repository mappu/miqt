package qml

/*

#include "gen_qjsnumbercoercion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QJSNumberCoercion struct {
	h *C.QJSNumberCoercion
}

func (this *QJSNumberCoercion) cPointer() *C.QJSNumberCoercion {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSNumberCoercion) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSNumberCoercion constructs the type using only CGO pointers.
func newQJSNumberCoercion(h *C.QJSNumberCoercion) *QJSNumberCoercion {
	if h == nil {
		return nil
	}

	return &QJSNumberCoercion{h: h}
}

// UnsafeNewQJSNumberCoercion constructs the type using only unsafe pointers.
func UnsafeNewQJSNumberCoercion(h unsafe.Pointer) *QJSNumberCoercion {
	return newQJSNumberCoercion((*C.QJSNumberCoercion)(h))
}

// NewQJSNumberCoercion constructs a new QJSNumberCoercion object.
func NewQJSNumberCoercion(param1 *QJSNumberCoercion) *QJSNumberCoercion {

	return newQJSNumberCoercion(C.QJSNumberCoercion_new(param1.cPointer()))
}

func QJSNumberCoercion_IsInteger(d float64) bool {
	return (bool)(C.QJSNumberCoercion_isInteger((C.double)(d)))
}

func QJSNumberCoercion_ToInteger(d float64) int {
	return (int)(C.QJSNumberCoercion_toInteger((C.double)(d)))
}

func QJSNumberCoercion_Equals(lhs float64, rhs float64) bool {
	return (bool)(C.QJSNumberCoercion_equals((C.double)(lhs), (C.double)(rhs)))
}

// Delete this object from C++ memory.
func (this *QJSNumberCoercion) Delete() {
	C.QJSNumberCoercion_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSNumberCoercion) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSNumberCoercion) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
