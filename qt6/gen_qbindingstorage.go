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
	h  *C.QBindingStatus
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QBindingStatus) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// NewQBindingStatus constructs a new QBindingStatus object.
func NewQBindingStatus() *QBindingStatus {

	return newQBindingStatus(C.QBindingStatus_new())
}

func (this *QBindingStatus) ThreadId() unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QBindingStatus_threadId(this.h))
}

func (this *QBindingStatus) SetThreadId(threadId unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QBindingStatus_setThreadId(this.h, threadId)
}

// Delete this object from C++ memory.
func (this *QBindingStatus) Delete() {
	C.QBindingStatus_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QBindingStatus) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QBindingStatus_delete((*C.QBindingStatus)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QBindingStorage struct {
	h  *C.QBindingStorage
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QBindingStorage) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQBindingStorage(C.QBindingStorage_new())
}

func (this *QBindingStorage) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBindingStorage_isEmpty(this.h))
}

func (this *QBindingStorage) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBindingStorage_isValid(this.h))
}

func (this *QBindingStorage) RegisterDependency(data *QUntypedPropertyData) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	C.QBindingStorage_registerDependency(this.h, data.cPointer())
}

// Delete this object from C++ memory.
func (this *QBindingStorage) Delete() {
	C.QBindingStorage_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QBindingStorage) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QBindingStorage_delete((*C.QBindingStorage)(gc[0]))
	})
	this.miqtSetGC(gc)
}
