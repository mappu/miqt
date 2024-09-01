package qt

/*

#include "gen_qsize.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSize struct {
	h *C.QSize
}

func (this *QSize) cPointer() *C.QSize {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSize(h *C.QSize) *QSize {
	if h == nil {
		return nil
	}
	return &QSize{h: h}
}

func newQSize_U(h unsafe.Pointer) *QSize {
	return newQSize((*C.QSize)(h))
}

// NewQSize constructs a new QSize object.
func NewQSize() *QSize {
	ret := C.QSize_new()
	return newQSize(ret)
}

// NewQSize2 constructs a new QSize object.
func NewQSize2(w int, h int) *QSize {
	ret := C.QSize_new2((C.int)(w), (C.int)(h))
	return newQSize(ret)
}

// NewQSize3 constructs a new QSize object.
func NewQSize3(param1 *QSize) *QSize {
	ret := C.QSize_new3(param1.cPointer())
	return newQSize(ret)
}

func (this *QSize) IsNull() bool {
	ret := C.QSize_IsNull(this.h)
	return (bool)(ret)
}

func (this *QSize) IsEmpty() bool {
	ret := C.QSize_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QSize) IsValid() bool {
	ret := C.QSize_IsValid(this.h)
	return (bool)(ret)
}

func (this *QSize) Width() int {
	ret := C.QSize_Width(this.h)
	return (int)(ret)
}

func (this *QSize) Height() int {
	ret := C.QSize_Height(this.h)
	return (int)(ret)
}

func (this *QSize) SetWidth(w int) {
	C.QSize_SetWidth(this.h, (C.int)(w))
}

func (this *QSize) SetHeight(h int) {
	C.QSize_SetHeight(this.h, (C.int)(h))
}

func (this *QSize) Transpose() {
	C.QSize_Transpose(this.h)
}

func (this *QSize) Transposed() *QSize {
	ret := C.QSize_Transposed(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSize) Scale(w int, h int, mode uintptr) {
	C.QSize_Scale(this.h, (C.int)(w), (C.int)(h), (C.uintptr_t)(mode))
}

func (this *QSize) Scale2(s *QSize, mode uintptr) {
	C.QSize_Scale2(this.h, s.cPointer(), (C.uintptr_t)(mode))
}

func (this *QSize) Scaled(w int, h int, mode uintptr) *QSize {
	ret := C.QSize_Scaled(this.h, (C.int)(w), (C.int)(h), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSize) Scaled2(s *QSize, mode uintptr) *QSize {
	ret := C.QSize_Scaled2(this.h, s.cPointer(), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSize) ExpandedTo(param1 *QSize) *QSize {
	ret := C.QSize_ExpandedTo(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSize) BoundedTo(param1 *QSize) *QSize {
	ret := C.QSize_BoundedTo(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSize) GrownBy(m QMargins) *QSize {
	ret := C.QSize_GrownBy(this.h, m.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSize) ShrunkBy(m QMargins) *QSize {
	ret := C.QSize_ShrunkBy(this.h, m.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSize) OperatorPlusAssign(param1 *QSize) *QSize {
	ret := C.QSize_OperatorPlusAssign(this.h, param1.cPointer())
	return newQSize_U(unsafe.Pointer(ret))
}

func (this *QSize) OperatorMinusAssign(param1 *QSize) *QSize {
	ret := C.QSize_OperatorMinusAssign(this.h, param1.cPointer())
	return newQSize_U(unsafe.Pointer(ret))
}

func (this *QSize) OperatorMultiplyAssign(c float64) *QSize {
	ret := C.QSize_OperatorMultiplyAssign(this.h, (C.double)(c))
	return newQSize_U(unsafe.Pointer(ret))
}

func (this *QSize) OperatorDivideAssign(c float64) *QSize {
	ret := C.QSize_OperatorDivideAssign(this.h, (C.double)(c))
	return newQSize_U(unsafe.Pointer(ret))
}

func (this *QSize) Delete() {
	C.QSize_Delete(this.h)
}

type QSizeF struct {
	h *C.QSizeF
}

func (this *QSizeF) cPointer() *C.QSizeF {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSizeF(h *C.QSizeF) *QSizeF {
	if h == nil {
		return nil
	}
	return &QSizeF{h: h}
}

func newQSizeF_U(h unsafe.Pointer) *QSizeF {
	return newQSizeF((*C.QSizeF)(h))
}

// NewQSizeF constructs a new QSizeF object.
func NewQSizeF() *QSizeF {
	ret := C.QSizeF_new()
	return newQSizeF(ret)
}

// NewQSizeF2 constructs a new QSizeF object.
func NewQSizeF2(sz *QSize) *QSizeF {
	ret := C.QSizeF_new2(sz.cPointer())
	return newQSizeF(ret)
}

// NewQSizeF3 constructs a new QSizeF object.
func NewQSizeF3(w float64, h float64) *QSizeF {
	ret := C.QSizeF_new3((C.double)(w), (C.double)(h))
	return newQSizeF(ret)
}

// NewQSizeF4 constructs a new QSizeF object.
func NewQSizeF4(param1 *QSizeF) *QSizeF {
	ret := C.QSizeF_new4(param1.cPointer())
	return newQSizeF(ret)
}

func (this *QSizeF) IsNull() bool {
	ret := C.QSizeF_IsNull(this.h)
	return (bool)(ret)
}

func (this *QSizeF) IsEmpty() bool {
	ret := C.QSizeF_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QSizeF) IsValid() bool {
	ret := C.QSizeF_IsValid(this.h)
	return (bool)(ret)
}

func (this *QSizeF) Width() float64 {
	ret := C.QSizeF_Width(this.h)
	return (float64)(ret)
}

func (this *QSizeF) Height() float64 {
	ret := C.QSizeF_Height(this.h)
	return (float64)(ret)
}

func (this *QSizeF) SetWidth(w float64) {
	C.QSizeF_SetWidth(this.h, (C.double)(w))
}

func (this *QSizeF) SetHeight(h float64) {
	C.QSizeF_SetHeight(this.h, (C.double)(h))
}

func (this *QSizeF) Transpose() {
	C.QSizeF_Transpose(this.h)
}

func (this *QSizeF) Transposed() *QSizeF {
	ret := C.QSizeF_Transposed(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSizeF) Scale(w float64, h float64, mode uintptr) {
	C.QSizeF_Scale(this.h, (C.double)(w), (C.double)(h), (C.uintptr_t)(mode))
}

func (this *QSizeF) Scale2(s *QSizeF, mode uintptr) {
	C.QSizeF_Scale2(this.h, s.cPointer(), (C.uintptr_t)(mode))
}

func (this *QSizeF) Scaled(w float64, h float64, mode uintptr) *QSizeF {
	ret := C.QSizeF_Scaled(this.h, (C.double)(w), (C.double)(h), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSizeF) Scaled2(s *QSizeF, mode uintptr) *QSizeF {
	ret := C.QSizeF_Scaled2(this.h, s.cPointer(), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSizeF) ExpandedTo(param1 *QSizeF) *QSizeF {
	ret := C.QSizeF_ExpandedTo(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSizeF) BoundedTo(param1 *QSizeF) *QSizeF {
	ret := C.QSizeF_BoundedTo(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSizeF) GrownBy(m QMarginsF) *QSizeF {
	ret := C.QSizeF_GrownBy(this.h, m.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSizeF) ShrunkBy(m QMarginsF) *QSizeF {
	ret := C.QSizeF_ShrunkBy(this.h, m.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSizeF) OperatorPlusAssign(param1 *QSizeF) *QSizeF {
	ret := C.QSizeF_OperatorPlusAssign(this.h, param1.cPointer())
	return newQSizeF_U(unsafe.Pointer(ret))
}

func (this *QSizeF) OperatorMinusAssign(param1 *QSizeF) *QSizeF {
	ret := C.QSizeF_OperatorMinusAssign(this.h, param1.cPointer())
	return newQSizeF_U(unsafe.Pointer(ret))
}

func (this *QSizeF) OperatorMultiplyAssign(c float64) *QSizeF {
	ret := C.QSizeF_OperatorMultiplyAssign(this.h, (C.double)(c))
	return newQSizeF_U(unsafe.Pointer(ret))
}

func (this *QSizeF) OperatorDivideAssign(c float64) *QSizeF {
	ret := C.QSizeF_OperatorDivideAssign(this.h, (C.double)(c))
	return newQSizeF_U(unsafe.Pointer(ret))
}

func (this *QSizeF) ToSize() *QSize {
	ret := C.QSizeF_ToSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSizeF) Delete() {
	C.QSizeF_Delete(this.h)
}
