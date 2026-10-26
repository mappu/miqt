package qml

/*

#include "gen_qqmlerror.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QQmlError struct {
	h  *C.QQmlError
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QQmlError) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QQmlError) cPointer() *C.QQmlError {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlError) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlError constructs the type using only CGO pointers.
func newQQmlError(h *C.QQmlError) *QQmlError {
	if h == nil {
		return nil
	}

	return &QQmlError{h: h}
}

// UnsafeNewQQmlError constructs the type using only unsafe pointers.
func UnsafeNewQQmlError(h unsafe.Pointer) *QQmlError {
	return newQQmlError((*C.QQmlError)(h))
}

// NewQQmlError constructs a new QQmlError object.
func NewQQmlError() *QQmlError {

	return newQQmlError(C.QQmlError_new())
}

// NewQQmlError2 constructs a new QQmlError object.
func NewQQmlError2(param1 *QQmlError) *QQmlError {
	defer runtime.KeepAlive(param1)

	return newQQmlError(C.QQmlError_new2(param1.cPointer()))
}

func (this *QQmlError) OperatorAssign(param1 *QQmlError) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QQmlError_operatorAssign(this.h, param1.cPointer())
}

func (this *QQmlError) Swap(other *QQmlError) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QQmlError_swap(this.h, other.cPointer())
}

func (this *QQmlError) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QQmlError_isValid(this.h))
}

func (this *QQmlError) Url() *qt6.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QQmlError_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlError) SetUrl(url *qt6.QUrl) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(url)
	C.QQmlError_setUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QQmlError) Description() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QQmlError_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlError) SetDescription(description string) {
	defer runtime.KeepAlive(this)
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QQmlError_setDescription(this.h, description_ms)
}

func (this *QQmlError) Line() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QQmlError_line(this.h))
}

func (this *QQmlError) SetLine(line int) {
	defer runtime.KeepAlive(this)
	C.QQmlError_setLine(this.h, (C.int)(line))
}

func (this *QQmlError) Column() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QQmlError_column(this.h))
}

func (this *QQmlError) SetColumn(column int) {
	defer runtime.KeepAlive(this)
	C.QQmlError_setColumn(this.h, (C.int)(column))
}

func (this *QQmlError) Object() *qt6.QObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlError_object(this.h)))
}

func (this *QQmlError) SetObject(object *qt6.QObject) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(object)
	C.QQmlError_setObject(this.h, (*C.QObject)(object.UnsafePointer()))
}

func (this *QQmlError) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QQmlError_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QQmlError) Delete() {
	C.QQmlError_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QQmlError) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QQmlError_delete((*C.QQmlError)(gc[0]))
	})
	this.miqtSetGC(gc)
}
