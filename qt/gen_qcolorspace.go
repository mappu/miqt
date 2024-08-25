package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
func NewQColorSpace2(colorSpace *QColorSpace) *QColorSpace {
	ret := C.QColorSpace_new2(colorSpace.cPointer())
	return newQColorSpace(ret)
}

func (this *QColorSpace) OperatorAssign(colorSpace *QColorSpace) {
	C.QColorSpace_OperatorAssign(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Swap(colorSpace *QColorSpace) {
	C.QColorSpace_Swap(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Gamma() float32 {
	ret := C.QColorSpace_Gamma(this.h)
	return (float32)(ret)
}

func (this *QColorSpace) SetPrimaries(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF) {
	C.QColorSpace_SetPrimaries(this.h, whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer())
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

func (this *QColorSpace) Delete() {
	C.QColorSpace_Delete(this.h)
}
