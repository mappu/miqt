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
	h *C.QtPrivate__ExceptionHolder
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

func newQtPrivate__ExceptionHolder(h *C.QtPrivate__ExceptionHolder) *QtPrivate__ExceptionHolder {
	if h == nil {
		return nil
	}
	return &QtPrivate__ExceptionHolder{h: h}
}

func UnsafeNewQtPrivate__ExceptionHolder(h unsafe.Pointer) *QtPrivate__ExceptionHolder {
	return newQtPrivate__ExceptionHolder((*C.QtPrivate__ExceptionHolder)(h))
}

// NewQtPrivate__ExceptionHolder constructs a new QtPrivate::ExceptionHolder object.
func NewQtPrivate__ExceptionHolder() *QtPrivate__ExceptionHolder {
	ret := C.QtPrivate__ExceptionHolder_new()
	return newQtPrivate__ExceptionHolder(ret)
}

// NewQtPrivate__ExceptionHolder2 constructs a new QtPrivate::ExceptionHolder object.
func NewQtPrivate__ExceptionHolder2(other *QtPrivate__ExceptionHolder) *QtPrivate__ExceptionHolder {
	ret := C.QtPrivate__ExceptionHolder_new2(other.cPointer())
	return newQtPrivate__ExceptionHolder(ret)
}

func (this *QtPrivate__ExceptionHolder) OperatorAssign(other *QtPrivate__ExceptionHolder) {
	C.QtPrivate__ExceptionHolder_OperatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QtPrivate__ExceptionHolder) Delete() {
	C.QtPrivate__ExceptionHolder_Delete(this.h)
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
	h *C.QtPrivate__ExceptionStore
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

func newQtPrivate__ExceptionStore(h *C.QtPrivate__ExceptionStore) *QtPrivate__ExceptionStore {
	if h == nil {
		return nil
	}
	return &QtPrivate__ExceptionStore{h: h}
}

func UnsafeNewQtPrivate__ExceptionStore(h unsafe.Pointer) *QtPrivate__ExceptionStore {
	return newQtPrivate__ExceptionStore((*C.QtPrivate__ExceptionStore)(h))
}

// NewQtPrivate__ExceptionStore constructs a new QtPrivate::ExceptionStore object.
func NewQtPrivate__ExceptionStore(param1 *QtPrivate__ExceptionStore) *QtPrivate__ExceptionStore {
	ret := C.QtPrivate__ExceptionStore_new(param1.cPointer())
	return newQtPrivate__ExceptionStore(ret)
}

func (this *QtPrivate__ExceptionStore) HasException() bool {
	return (bool)(C.QtPrivate__ExceptionStore_HasException(this.h))
}

func (this *QtPrivate__ExceptionStore) Exception() *QtPrivate__ExceptionHolder {
	_ret := C.QtPrivate__ExceptionStore_Exception(this.h)
	_goptr := newQtPrivate__ExceptionHolder(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtPrivate__ExceptionStore) ThrowPossibleException() {
	C.QtPrivate__ExceptionStore_ThrowPossibleException(this.h)
}

func (this *QtPrivate__ExceptionStore) HasThrown() bool {
	return (bool)(C.QtPrivate__ExceptionStore_HasThrown(this.h))
}

func (this *QtPrivate__ExceptionStore) OperatorAssign(param1 *QtPrivate__ExceptionStore) {
	C.QtPrivate__ExceptionStore_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QtPrivate__ExceptionStore) Delete() {
	C.QtPrivate__ExceptionStore_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__ExceptionStore) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__ExceptionStore) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
