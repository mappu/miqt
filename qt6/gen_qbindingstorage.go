package qt6

/*

#include "gen_qbindingstorage.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QBindingStatus struct {
	h          *C.QBindingStatus
	isSubclass bool
}

func (this *QBindingStatus) cPointer() *C.QBindingStatus {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBindingStatus) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBindingStatus constructs the type using only CGO pointers.
func newQBindingStatus(h *C.QBindingStatus) *QBindingStatus {
	if h == nil {
		return nil
	}

	return &QBindingStatus{h: h}
}

// UnsafeNewQBindingStatus constructs the type using only unsafe pointers.
func UnsafeNewQBindingStatus(h unsafe.Pointer) *QBindingStatus {
	return newQBindingStatus((*C.QBindingStatus)(h))
}

// Delete this object from C++ memory.
func (this *QBindingStatus) Delete() {
	C.QBindingStatus_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBindingStatus) GoGC() {
	runtime.SetFinalizer(this, func(this *QBindingStatus) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QBindingStorage struct {
	h          *C.QBindingStorage
	isSubclass bool
}

func (this *QBindingStorage) cPointer() *C.QBindingStorage {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBindingStorage) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBindingStorage constructs the type using only CGO pointers.
func newQBindingStorage(h *C.QBindingStorage) *QBindingStorage {
	if h == nil {
		return nil
	}

	return &QBindingStorage{h: h}
}

// UnsafeNewQBindingStorage constructs the type using only unsafe pointers.
func UnsafeNewQBindingStorage(h unsafe.Pointer) *QBindingStorage {
	return newQBindingStorage((*C.QBindingStorage)(h))
}

// NewQBindingStorage constructs a new QBindingStorage object.
func NewQBindingStorage() *QBindingStorage {

	ret := newQBindingStorage(C.QBindingStorage_new())
	ret.isSubclass = true
	return ret
}

func (this *QBindingStorage) IsEmpty() bool {
	return (bool)(C.QBindingStorage_IsEmpty(this.h))
}

func (this *QBindingStorage) IsValid() bool {
	return (bool)(C.QBindingStorage_IsValid(this.h))
}

func (this *QBindingStorage) RegisterDependency(data *QUntypedPropertyData) {
	C.QBindingStorage_RegisterDependency(this.h, data.cPointer())
}

// Delete this object from C++ memory.
func (this *QBindingStorage) Delete() {
	C.QBindingStorage_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBindingStorage) GoGC() {
	runtime.SetFinalizer(this, func(this *QBindingStorage) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
