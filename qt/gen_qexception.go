package qt

/*

#include "gen_qexception.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__ExceptionHolder struct {
	h          *C.QtPrivate__ExceptionHolder
	isSubclass bool
}

func (this *QtPrivate__ExceptionHolder) cPointer() *C.QtPrivate__ExceptionHolder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__ExceptionHolder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQtPrivate__ExceptionHolder constructs the type using only CGO pointers.
func newQtPrivate__ExceptionHolder(h *C.QtPrivate__ExceptionHolder) *QtPrivate__ExceptionHolder {
	if h == nil {
		return nil
	}
	return &QtPrivate__ExceptionHolder{h: h}
}

// UnsafeNewQtPrivate__ExceptionHolder constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__ExceptionHolder(h unsafe.Pointer) *QtPrivate__ExceptionHolder {
	if h == nil {
		return nil
	}

	return &QtPrivate__ExceptionHolder{h: (*C.QtPrivate__ExceptionHolder)(h)}
}

// NewQtPrivate__ExceptionHolder constructs a new QtPrivate::ExceptionHolder object.
func NewQtPrivate__ExceptionHolder() *QtPrivate__ExceptionHolder {
	var outptr_QtPrivate__ExceptionHolder *C.QtPrivate__ExceptionHolder = nil

	C.QtPrivate__ExceptionHolder_new(&outptr_QtPrivate__ExceptionHolder)
	ret := newQtPrivate__ExceptionHolder(outptr_QtPrivate__ExceptionHolder)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QtPrivate__ExceptionHolder) Delete() {
	C.QtPrivate__ExceptionHolder_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__ExceptionHolder) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__ExceptionHolder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__ExceptionStore struct {
	h          *C.QtPrivate__ExceptionStore
	isSubclass bool
}

func (this *QtPrivate__ExceptionStore) cPointer() *C.QtPrivate__ExceptionStore {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__ExceptionStore) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQtPrivate__ExceptionStore constructs the type using only CGO pointers.
func newQtPrivate__ExceptionStore(h *C.QtPrivate__ExceptionStore) *QtPrivate__ExceptionStore {
	if h == nil {
		return nil
	}
	return &QtPrivate__ExceptionStore{h: h}
}

// UnsafeNewQtPrivate__ExceptionStore constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__ExceptionStore(h unsafe.Pointer) *QtPrivate__ExceptionStore {
	if h == nil {
		return nil
	}

	return &QtPrivate__ExceptionStore{h: (*C.QtPrivate__ExceptionStore)(h)}
}

func (this *QtPrivate__ExceptionStore) HasException() bool {
	return (bool)(C.QtPrivate__ExceptionStore_HasException(this.h))
}

func (this *QtPrivate__ExceptionStore) ThrowPossibleException() {
	C.QtPrivate__ExceptionStore_ThrowPossibleException(this.h)
}

func (this *QtPrivate__ExceptionStore) HasThrown() bool {
	return (bool)(C.QtPrivate__ExceptionStore_HasThrown(this.h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__ExceptionStore) Delete() {
	C.QtPrivate__ExceptionStore_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__ExceptionStore) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__ExceptionStore) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
