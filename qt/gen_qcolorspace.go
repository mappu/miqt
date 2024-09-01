package qt

/*

#include "gen_qcolorspace.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QColorSpace struct {
	h *C.QColorSpace
}

func (this *QColorSpace) cPointer() *C.QColorSpace {
	if this == nil {
		return nil
	}
	return this.h
}

func newQColorSpace(h *C.QColorSpace) *QColorSpace {
	if h == nil {
		return nil
	}
	return &QColorSpace{h: h}
}

func newQColorSpace_U(h unsafe.Pointer) *QColorSpace {
	return newQColorSpace((*C.QColorSpace)(h))
}

// NewQColorSpace constructs a new QColorSpace object.
func NewQColorSpace() *QColorSpace {
	ret := C.QColorSpace_new()
	return newQColorSpace(ret)
}

// NewQColorSpace2 constructs a new QColorSpace object.
func NewQColorSpace2(namedColorSpace uintptr) *QColorSpace {
	ret := C.QColorSpace_new2((C.uintptr_t)(namedColorSpace))
	return newQColorSpace(ret)
}

// NewQColorSpace3 constructs a new QColorSpace object.
func NewQColorSpace3(primaries uintptr, transferFunction uintptr) *QColorSpace {
	ret := C.QColorSpace_new3((C.uintptr_t)(primaries), (C.uintptr_t)(transferFunction))
	return newQColorSpace(ret)
}

// NewQColorSpace4 constructs a new QColorSpace object.
func NewQColorSpace4(primaries uintptr, gamma float32) *QColorSpace {
	ret := C.QColorSpace_new4((C.uintptr_t)(primaries), (C.float)(gamma))
	return newQColorSpace(ret)
}

// NewQColorSpace5 constructs a new QColorSpace object.
func NewQColorSpace5(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction uintptr) *QColorSpace {
	ret := C.QColorSpace_new5(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), (C.uintptr_t)(transferFunction))
	return newQColorSpace(ret)
}

// NewQColorSpace6 constructs a new QColorSpace object.
func NewQColorSpace6(colorSpace *QColorSpace) *QColorSpace {
	ret := C.QColorSpace_new6(colorSpace.cPointer())
	return newQColorSpace(ret)
}

// NewQColorSpace7 constructs a new QColorSpace object.
func NewQColorSpace7(primaries uintptr, transferFunction uintptr, gamma float32) *QColorSpace {
	ret := C.QColorSpace_new7((C.uintptr_t)(primaries), (C.uintptr_t)(transferFunction), (C.float)(gamma))
	return newQColorSpace(ret)
}

// NewQColorSpace8 constructs a new QColorSpace object.
func NewQColorSpace8(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction uintptr, gamma float32) *QColorSpace {
	ret := C.QColorSpace_new8(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), (C.uintptr_t)(transferFunction), (C.float)(gamma))
	return newQColorSpace(ret)
}

func (this *QColorSpace) OperatorAssign(colorSpace *QColorSpace) {
	C.QColorSpace_OperatorAssign(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Swap(colorSpace *QColorSpace) {
	C.QColorSpace_Swap(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Primaries() uintptr {
	ret := C.QColorSpace_Primaries(this.h)
	return (uintptr)(ret)
}

func (this *QColorSpace) TransferFunction() uintptr {
	ret := C.QColorSpace_TransferFunction(this.h)
	return (uintptr)(ret)
}

func (this *QColorSpace) Gamma() float32 {
	ret := C.QColorSpace_Gamma(this.h)
	return (float32)(ret)
}

func (this *QColorSpace) SetTransferFunction(transferFunction uintptr) {
	C.QColorSpace_SetTransferFunction(this.h, (C.uintptr_t)(transferFunction))
}

func (this *QColorSpace) WithTransferFunction(transferFunction uintptr) *QColorSpace {
	ret := C.QColorSpace_WithTransferFunction(this.h, (C.uintptr_t)(transferFunction))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColorSpace(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColorSpace) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColorSpace) SetPrimaries(primariesId uintptr) {
	C.QColorSpace_SetPrimaries(this.h, (C.uintptr_t)(primariesId))
}

func (this *QColorSpace) SetPrimaries2(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF) {
	C.QColorSpace_SetPrimaries2(this.h, whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer())
}

func (this *QColorSpace) IsValid() bool {
	ret := C.QColorSpace_IsValid(this.h)
	return (bool)(ret)
}

func QColorSpace_FromIccProfile(iccProfile *QByteArray) *QColorSpace {
	ret := C.QColorSpace_FromIccProfile(iccProfile.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColorSpace(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColorSpace) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColorSpace) IccProfile() *QByteArray {
	ret := C.QColorSpace_IccProfile(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColorSpace) TransformationToColorSpace(colorspace *QColorSpace) *QColorTransform {
	ret := C.QColorSpace_TransformationToColorSpace(this.h, colorspace.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColorTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColorTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColorSpace) SetTransferFunction2(transferFunction uintptr, gamma float32) {
	C.QColorSpace_SetTransferFunction2(this.h, (C.uintptr_t)(transferFunction), (C.float)(gamma))
}

func (this *QColorSpace) WithTransferFunction2(transferFunction uintptr, gamma float32) *QColorSpace {
	ret := C.QColorSpace_WithTransferFunction2(this.h, (C.uintptr_t)(transferFunction), (C.float)(gamma))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColorSpace(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColorSpace) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColorSpace) Delete() {
	C.QColorSpace_Delete(this.h)
}
