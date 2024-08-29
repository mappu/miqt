package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQtPrivate__ExceptionHolder(h *C.QtPrivate__ExceptionHolder) *QtPrivate__ExceptionHolder {
	return &QtPrivate__ExceptionHolder{h: h}
}

func newQtPrivate__ExceptionHolder_U(h unsafe.Pointer) *QtPrivate__ExceptionHolder {
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

func (this *QtPrivate__ExceptionHolder) Delete() {
	C.QtPrivate__ExceptionHolder_Delete(this.h)
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

func newQtPrivate__ExceptionStore(h *C.QtPrivate__ExceptionStore) *QtPrivate__ExceptionStore {
	return &QtPrivate__ExceptionStore{h: h}
}

func newQtPrivate__ExceptionStore_U(h unsafe.Pointer) *QtPrivate__ExceptionStore {
	return newQtPrivate__ExceptionStore((*C.QtPrivate__ExceptionStore)(h))
}

// NewQtPrivate__ExceptionStore constructs a new QtPrivate::ExceptionStore object.
func NewQtPrivate__ExceptionStore(param1 *QtPrivate__ExceptionStore) *QtPrivate__ExceptionStore {
	ret := C.QtPrivate__ExceptionStore_new(param1.cPointer())
	return newQtPrivate__ExceptionStore(ret)
}

func (this *QtPrivate__ExceptionStore) HasException() bool {
	ret := C.QtPrivate__ExceptionStore_HasException(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__ExceptionStore) Exception() *QtPrivate__ExceptionHolder {
	ret := C.QtPrivate__ExceptionStore_Exception(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtPrivate__ExceptionHolder(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtPrivate__ExceptionHolder) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtPrivate__ExceptionStore) ThrowPossibleException() {
	C.QtPrivate__ExceptionStore_ThrowPossibleException(this.h)
}

func (this *QtPrivate__ExceptionStore) HasThrown() bool {
	ret := C.QtPrivate__ExceptionStore_HasThrown(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__ExceptionStore) Delete() {
	C.QtPrivate__ExceptionStore_Delete(this.h)
}
