package qt6

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
	h          *C.QSharedData
	isSubclass bool
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

	ret := newQSharedData(C.QSharedData_new())
	ret.isSubclass = true
	return ret
}

// NewQSharedData2 constructs a new QSharedData object.
func NewQSharedData2(param1 *QSharedData) *QSharedData {

	ret := newQSharedData(C.QSharedData_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QSharedData) Delete() {
	C.QSharedData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSharedData) GoGC() {
	runtime.SetFinalizer(this, func(this *QSharedData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAdoptSharedDataTag struct {
	h          *C.QAdoptSharedDataTag
	isSubclass bool
}

func (this *QAdoptSharedDataTag) cPointer() *C.QAdoptSharedDataTag {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAdoptSharedDataTag) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAdoptSharedDataTag constructs the type using only CGO pointers.
func newQAdoptSharedDataTag(h *C.QAdoptSharedDataTag) *QAdoptSharedDataTag {
	if h == nil {
		return nil
	}

	return &QAdoptSharedDataTag{h: h}
}

// UnsafeNewQAdoptSharedDataTag constructs the type using only unsafe pointers.
func UnsafeNewQAdoptSharedDataTag(h unsafe.Pointer) *QAdoptSharedDataTag {
	return newQAdoptSharedDataTag((*C.QAdoptSharedDataTag)(h))
}

// NewQAdoptSharedDataTag constructs a new QAdoptSharedDataTag object.
func NewQAdoptSharedDataTag() *QAdoptSharedDataTag {

	ret := newQAdoptSharedDataTag(C.QAdoptSharedDataTag_new())
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QAdoptSharedDataTag) Delete() {
	C.QAdoptSharedDataTag_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAdoptSharedDataTag) GoGC() {
	runtime.SetFinalizer(this, func(this *QAdoptSharedDataTag) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
