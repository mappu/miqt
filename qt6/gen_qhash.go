package qt6

/*

#include "gen_qhash.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QHashDummyValue struct {
	h *C.QHashDummyValue
}

func (this *QHashDummyValue) cPointer() *C.QHashDummyValue {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHashDummyValue) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQHashDummyValue(h *C.QHashDummyValue) *QHashDummyValue {
	if h == nil {
		return nil
	}
	return &QHashDummyValue{h: h}
}

func UnsafeNewQHashDummyValue(h unsafe.Pointer) *QHashDummyValue {
	return newQHashDummyValue((*C.QHashDummyValue)(h))
}

// NewQHashDummyValue constructs a new QHashDummyValue object.
func NewQHashDummyValue() *QHashDummyValue {
	ret := C.QHashDummyValue_new()
	return newQHashDummyValue(ret)
}

// NewQHashDummyValue2 constructs a new QHashDummyValue object.
func NewQHashDummyValue2(param1 *QHashDummyValue) *QHashDummyValue {
	ret := C.QHashDummyValue_new2(param1.cPointer())
	return newQHashDummyValue(ret)
}

func (this *QHashDummyValue) OperatorEqual(param1 *QHashDummyValue) bool {
	return (bool)(C.QHashDummyValue_OperatorEqual(this.h, param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QHashDummyValue) Delete() {
	C.QHashDummyValue_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHashDummyValue) GoGC() {
	runtime.SetFinalizer(this, func(this *QHashDummyValue) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHashPrivate__SpanConstants struct {
	h *C.QHashPrivate__SpanConstants
}

func (this *QHashPrivate__SpanConstants) cPointer() *C.QHashPrivate__SpanConstants {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHashPrivate__SpanConstants) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQHashPrivate__SpanConstants(h *C.QHashPrivate__SpanConstants) *QHashPrivate__SpanConstants {
	if h == nil {
		return nil
	}
	return &QHashPrivate__SpanConstants{h: h}
}

func UnsafeNewQHashPrivate__SpanConstants(h unsafe.Pointer) *QHashPrivate__SpanConstants {
	return newQHashPrivate__SpanConstants((*C.QHashPrivate__SpanConstants)(h))
}

// Delete this object from C++ memory.
func (this *QHashPrivate__SpanConstants) Delete() {
	C.QHashPrivate__SpanConstants_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHashPrivate__SpanConstants) GoGC() {
	runtime.SetFinalizer(this, func(this *QHashPrivate__SpanConstants) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
