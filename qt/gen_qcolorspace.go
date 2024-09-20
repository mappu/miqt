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

type QColorSpace__NamedColorSpace int

const (
	QColorSpace__SRgb        QColorSpace__NamedColorSpace = 1
	QColorSpace__SRgbLinear  QColorSpace__NamedColorSpace = 2
	QColorSpace__AdobeRgb    QColorSpace__NamedColorSpace = 3
	QColorSpace__DisplayP3   QColorSpace__NamedColorSpace = 4
	QColorSpace__ProPhotoRgb QColorSpace__NamedColorSpace = 5
)

type QColorSpace__Primaries int

const (
	QColorSpace__Custom      QColorSpace__Primaries = 0
	QColorSpace__SRgb        QColorSpace__Primaries = 1
	QColorSpace__AdobeRgb    QColorSpace__Primaries = 2
	QColorSpace__DciP3D65    QColorSpace__Primaries = 3
	QColorSpace__ProPhotoRgb QColorSpace__Primaries = 4
)

type QColorSpace__TransferFunction int

const (
	QColorSpace__Custom      QColorSpace__TransferFunction = 0
	QColorSpace__Linear      QColorSpace__TransferFunction = 1
	QColorSpace__Gamma       QColorSpace__TransferFunction = 2
	QColorSpace__SRgb        QColorSpace__TransferFunction = 3
	QColorSpace__ProPhotoRgb QColorSpace__TransferFunction = 4
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
func NewQColorSpace2(namedColorSpace QColorSpace__NamedColorSpace) *QColorSpace {
	ret := C.QColorSpace_new2((C.int)(namedColorSpace))
	return newQColorSpace(ret)
}

// NewQColorSpace3 constructs a new QColorSpace object.
func NewQColorSpace3(primaries QColorSpace__Primaries, transferFunction QColorSpace__TransferFunction) *QColorSpace {
	ret := C.QColorSpace_new3((C.int)(primaries), (C.int)(transferFunction))
	return newQColorSpace(ret)
}

// NewQColorSpace4 constructs a new QColorSpace object.
func NewQColorSpace4(primaries QColorSpace__Primaries, gamma float32) *QColorSpace {
	ret := C.QColorSpace_new4((C.int)(primaries), (C.float)(gamma))
	return newQColorSpace(ret)
}

// NewQColorSpace5 constructs a new QColorSpace object.
func NewQColorSpace5(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction QColorSpace__TransferFunction) *QColorSpace {
	ret := C.QColorSpace_new5(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), (C.int)(transferFunction))
	return newQColorSpace(ret)
}

// NewQColorSpace6 constructs a new QColorSpace object.
func NewQColorSpace6(colorSpace *QColorSpace) *QColorSpace {
	ret := C.QColorSpace_new6(colorSpace.cPointer())
	return newQColorSpace(ret)
}

// NewQColorSpace7 constructs a new QColorSpace object.
func NewQColorSpace7(primaries QColorSpace__Primaries, transferFunction QColorSpace__TransferFunction, gamma float32) *QColorSpace {
	ret := C.QColorSpace_new7((C.int)(primaries), (C.int)(transferFunction), (C.float)(gamma))
	return newQColorSpace(ret)
}

// NewQColorSpace8 constructs a new QColorSpace object.
func NewQColorSpace8(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction QColorSpace__TransferFunction, gamma float32) *QColorSpace {
	ret := C.QColorSpace_new8(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), (C.int)(transferFunction), (C.float)(gamma))
	return newQColorSpace(ret)
}

func (this *QColorSpace) OperatorAssign(colorSpace *QColorSpace) {
	C.QColorSpace_OperatorAssign(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Swap(colorSpace *QColorSpace) {
	C.QColorSpace_Swap(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Primaries() QColorSpace__Primaries {
	return (QColorSpace__Primaries)(C.QColorSpace_Primaries(this.h))
}

func (this *QColorSpace) TransferFunction() QColorSpace__TransferFunction {
	return (QColorSpace__TransferFunction)(C.QColorSpace_TransferFunction(this.h))
}

func (this *QColorSpace) Gamma() float32 {
	return (float32)(C.QColorSpace_Gamma(this.h))
}

func (this *QColorSpace) SetTransferFunction(transferFunction QColorSpace__TransferFunction) {
	C.QColorSpace_SetTransferFunction(this.h, (C.int)(transferFunction))
}

func (this *QColorSpace) WithTransferFunction(transferFunction QColorSpace__TransferFunction) *QColorSpace {
	_ret := C.QColorSpace_WithTransferFunction(this.h, (C.int)(transferFunction))
	_goptr := newQColorSpace(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) SetPrimaries(primariesId QColorSpace__Primaries) {
	C.QColorSpace_SetPrimaries(this.h, (C.int)(primariesId))
}

func (this *QColorSpace) SetPrimaries2(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF) {
	C.QColorSpace_SetPrimaries2(this.h, whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer())
}

func (this *QColorSpace) IsValid() bool {
	return (bool)(C.QColorSpace_IsValid(this.h))
}

func QColorSpace_FromIccProfile(iccProfile *QByteArray) *QColorSpace {
	_ret := C.QColorSpace_FromIccProfile(iccProfile.cPointer())
	_goptr := newQColorSpace(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) IccProfile() *QByteArray {
	_ret := C.QColorSpace_IccProfile(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) TransformationToColorSpace(colorspace *QColorSpace) *QColorTransform {
	_ret := C.QColorSpace_TransformationToColorSpace(this.h, colorspace.cPointer())
	_goptr := newQColorTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) SetTransferFunction2(transferFunction QColorSpace__TransferFunction, gamma float32) {
	C.QColorSpace_SetTransferFunction2(this.h, (C.int)(transferFunction), (C.float)(gamma))
}

func (this *QColorSpace) WithTransferFunction2(transferFunction QColorSpace__TransferFunction, gamma float32) *QColorSpace {
	_ret := C.QColorSpace_WithTransferFunction2(this.h, (C.int)(transferFunction), (C.float)(gamma))
	_goptr := newQColorSpace(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColorSpace) Delete() {
	C.QColorSpace_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColorSpace) GoGC() {
	runtime.SetFinalizer(this, func(this *QColorSpace) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
