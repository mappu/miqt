package qt6

/*

#include "gen_qpropertyprivate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QUntypedPropertyData struct {
	h *C.QUntypedPropertyData
}

func (this *QUntypedPropertyData) cPointer() *C.QUntypedPropertyData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUntypedPropertyData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUntypedPropertyData constructs the type using only CGO pointers.
func newQUntypedPropertyData(h *C.QUntypedPropertyData) *QUntypedPropertyData {
	if h == nil {
		return nil
	}

	return &QUntypedPropertyData{h: h}
}

// UnsafeNewQUntypedPropertyData constructs the type using only unsafe pointers.
func UnsafeNewQUntypedPropertyData(h unsafe.Pointer) *QUntypedPropertyData {
	return newQUntypedPropertyData((*C.QUntypedPropertyData)(h))
}

// Delete this object from C++ memory.
func (this *QUntypedPropertyData) Delete() {
	C.QUntypedPropertyData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUntypedPropertyData) GoGC() {
	runtime.SetFinalizer(this, func(this *QUntypedPropertyData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPropertyProxyBindingData struct {
	h *C.QPropertyProxyBindingData
}

func (this *QPropertyProxyBindingData) cPointer() *C.QPropertyProxyBindingData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPropertyProxyBindingData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPropertyProxyBindingData constructs the type using only CGO pointers.
func newQPropertyProxyBindingData(h *C.QPropertyProxyBindingData) *QPropertyProxyBindingData {
	if h == nil {
		return nil
	}

	return &QPropertyProxyBindingData{h: h}
}

// UnsafeNewQPropertyProxyBindingData constructs the type using only unsafe pointers.
func UnsafeNewQPropertyProxyBindingData(h unsafe.Pointer) *QPropertyProxyBindingData {
	return newQPropertyProxyBindingData((*C.QPropertyProxyBindingData)(h))
}

func (this *QPropertyProxyBindingData) DPtr() uintptr {
	return (uintptr)(C.QPropertyProxyBindingData_dPtr(this.h))
}

func (this *QPropertyProxyBindingData) SetDPtr(d_ptr uintptr) {
	C.QPropertyProxyBindingData_setDPtr(this.h, (C.uintptr_t)(d_ptr))
}

func (this *QPropertyProxyBindingData) PropertyData() *QUntypedPropertyData {
	return newQUntypedPropertyData(C.QPropertyProxyBindingData_propertyData(this.h))
}

func (this *QPropertyProxyBindingData) SetPropertyData(propertyData *QUntypedPropertyData) {
	C.QPropertyProxyBindingData_setPropertyData(this.h, propertyData.cPointer())
}

// Delete this object from C++ memory.
func (this *QPropertyProxyBindingData) Delete() {
	C.QPropertyProxyBindingData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyProxyBindingData) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyProxyBindingData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
