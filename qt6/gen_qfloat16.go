package qt6

/*

#include "gen_qfloat16.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type qfloat16 struct {
	h *C.qfloat16
}

func (this *qfloat16) cPointer() *C.qfloat16 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *qfloat16) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newqfloat16 constructs the type using only CGO pointers.
func newqfloat16(h *C.qfloat16) *qfloat16 {
	if h == nil {
		return nil
	}

	return &qfloat16{h: h}
}

// UnsafeNewqfloat16 constructs the type using only unsafe pointers.
func UnsafeNewqfloat16(h unsafe.Pointer) *qfloat16 {
	return newqfloat16((*C.qfloat16)(h))
}

// Newqfloat16 constructs a new qfloat16 object.
func Newqfloat16() *qfloat16 {

	return newqfloat16(C.qfloat16_new())
}

// Newqfloat162 constructs a new qfloat16 object.
func Newqfloat162(param1 Initialization) *qfloat16 {

	return newqfloat16(C.qfloat16_new2((C.int)(param1)))
}

// Newqfloat163 constructs a new qfloat16 object.
func Newqfloat163(f float32) *qfloat16 {

	return newqfloat16(C.qfloat16_new3((C.float)(f)))
}

func (this *qfloat16) IsInf() bool {
	return (bool)(C.qfloat16_isInf(this.h))
}

func (this *qfloat16) IsNaN() bool {
	return (bool)(C.qfloat16_isNaN(this.h))
}

func (this *qfloat16) IsFinite() bool {
	return (bool)(C.qfloat16_isFinite(this.h))
}

func (this *qfloat16) FpClassify() int {
	return (int)(C.qfloat16_fpClassify(this.h))
}

func (this *qfloat16) IsNormal() bool {
	return (bool)(C.qfloat16_isNormal(this.h))
}

// Delete this object from C++ memory.
func (this *qfloat16) Delete() {
	C.qfloat16_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *qfloat16) GoGC() {
	runtime.SetFinalizer(this, func(this *qfloat16) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
