package qt

/*

#include "gen_qhashfunctions.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QtPrivate__QHashCombine struct {
	h *C.QtPrivate__QHashCombine
}

func (this *QtPrivate__QHashCombine) cPointer() *C.QtPrivate__QHashCombine {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__QHashCombine(h *C.QtPrivate__QHashCombine) *QtPrivate__QHashCombine {
	if h == nil {
		return nil
	}
	return &QtPrivate__QHashCombine{h: h}
}

func newQtPrivate__QHashCombine_U(h unsafe.Pointer) *QtPrivate__QHashCombine {
	return newQtPrivate__QHashCombine((*C.QtPrivate__QHashCombine)(h))
}

// NewQtPrivate__QHashCombine constructs a new QtPrivate::QHashCombine object.
func NewQtPrivate__QHashCombine() *QtPrivate__QHashCombine {
	ret := C.QtPrivate__QHashCombine_new()
	return newQtPrivate__QHashCombine(ret)
}

// NewQtPrivate__QHashCombine2 constructs a new QtPrivate::QHashCombine object.
func NewQtPrivate__QHashCombine2(param1 *QtPrivate__QHashCombine) *QtPrivate__QHashCombine {
	ret := C.QtPrivate__QHashCombine_new2(param1.cPointer())
	return newQtPrivate__QHashCombine(ret)
}

func (this *QtPrivate__QHashCombine) Delete() {
	C.QtPrivate__QHashCombine_Delete(this.h)
}

type QtPrivate__QHashCombineCommutative struct {
	h *C.QtPrivate__QHashCombineCommutative
}

func (this *QtPrivate__QHashCombineCommutative) cPointer() *C.QtPrivate__QHashCombineCommutative {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__QHashCombineCommutative(h *C.QtPrivate__QHashCombineCommutative) *QtPrivate__QHashCombineCommutative {
	if h == nil {
		return nil
	}
	return &QtPrivate__QHashCombineCommutative{h: h}
}

func newQtPrivate__QHashCombineCommutative_U(h unsafe.Pointer) *QtPrivate__QHashCombineCommutative {
	return newQtPrivate__QHashCombineCommutative((*C.QtPrivate__QHashCombineCommutative)(h))
}

// NewQtPrivate__QHashCombineCommutative constructs a new QtPrivate::QHashCombineCommutative object.
func NewQtPrivate__QHashCombineCommutative() *QtPrivate__QHashCombineCommutative {
	ret := C.QtPrivate__QHashCombineCommutative_new()
	return newQtPrivate__QHashCombineCommutative(ret)
}

// NewQtPrivate__QHashCombineCommutative2 constructs a new QtPrivate::QHashCombineCommutative object.
func NewQtPrivate__QHashCombineCommutative2(param1 *QtPrivate__QHashCombineCommutative) *QtPrivate__QHashCombineCommutative {
	ret := C.QtPrivate__QHashCombineCommutative_new2(param1.cPointer())
	return newQtPrivate__QHashCombineCommutative(ret)
}

func (this *QtPrivate__QHashCombineCommutative) Delete() {
	C.QtPrivate__QHashCombineCommutative_Delete(this.h)
}
