package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfloat16.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newqfloat16(h *C.qfloat16) *qfloat16 {
	if h == nil {
		return nil
	}
	return &qfloat16{h: h}
}

func newqfloat16_U(h unsafe.Pointer) *qfloat16 {
	return newqfloat16((*C.qfloat16)(h))
}

// Newqfloat16 constructs a new qfloat16 object.
func Newqfloat16() *qfloat16 {
	ret := C.qfloat16_new()
	return newqfloat16(ret)
}

// Newqfloat162 constructs a new qfloat16 object.
func Newqfloat162(f float32) *qfloat16 {
	ret := C.qfloat16_new2((C.float)(f))
	return newqfloat16(ret)
}

func (this *qfloat16) IsInf() bool {
	ret := C.qfloat16_IsInf(this.h)
	return (bool)(ret)
}

func (this *qfloat16) IsNaN() bool {
	ret := C.qfloat16_IsNaN(this.h)
	return (bool)(ret)
}

func (this *qfloat16) IsFinite() bool {
	ret := C.qfloat16_IsFinite(this.h)
	return (bool)(ret)
}

func (this *qfloat16) FpClassify() int {
	ret := C.qfloat16_FpClassify(this.h)
	return (int)(ret)
}

func (this *qfloat16) IsNormal() bool {
	ret := C.qfloat16_IsNormal(this.h)
	return (bool)(ret)
}

func (this *qfloat16) Delete() {
	C.qfloat16_Delete(this.h)
}
