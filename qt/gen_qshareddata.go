package qt

/*

#include "gen_qshareddata.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSharedData struct {
	h  *C.QSharedData
	gc *[1]*C.QSharedData
}

func (this *QSharedData) cPointer() *C.QSharedData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSharedData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSharedData constructs the type using only CGO pointers.
func newQSharedData(h *C.QSharedData) *QSharedData {
	if h == nil {
		return nil
	}

	return &QSharedData{h: h}
}

// UnsafeNewQSharedData constructs the type using only unsafe pointers.
func UnsafeNewQSharedData(h unsafe.Pointer) *QSharedData {
	return newQSharedData((*C.QSharedData)(h))
}

// NewQSharedData constructs a new QSharedData object.
func NewQSharedData() *QSharedData {

	return newQSharedData(C.QSharedData_new())
}

// NewQSharedData2 constructs a new QSharedData object.
func NewQSharedData2(param1 *QSharedData) *QSharedData {

	return newQSharedData(C.QSharedData_new2(param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QSharedData) Delete() {
	C.QSharedData_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSharedData) GoGC() {
	if this.gc != nil {
		return
	}
	this.gc = &[1]*C.QSharedData{this.h}
	runtime.SetFinalizer(this.gc, func(gc *[1]*C.QSharedData) {
		C.QSharedData_delete(gc[0])
	})
}
