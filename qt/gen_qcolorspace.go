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
	QColorSpace__NamedColorSpace__SRgb        QColorSpace__NamedColorSpace = 1
	QColorSpace__NamedColorSpace__SRgbLinear  QColorSpace__NamedColorSpace = 2
	QColorSpace__NamedColorSpace__AdobeRgb    QColorSpace__NamedColorSpace = 3
	QColorSpace__NamedColorSpace__DisplayP3   QColorSpace__NamedColorSpace = 4
	QColorSpace__NamedColorSpace__ProPhotoRgb QColorSpace__NamedColorSpace = 5
)

type QColorSpace__Primaries int

const (
	QColorSpace__Primaries__Custom      QColorSpace__Primaries = 0
	QColorSpace__Primaries__SRgb        QColorSpace__Primaries = 1
	QColorSpace__Primaries__AdobeRgb    QColorSpace__Primaries = 2
	QColorSpace__Primaries__DciP3D65    QColorSpace__Primaries = 3
	QColorSpace__Primaries__ProPhotoRgb QColorSpace__Primaries = 4
)

type QColorSpace__TransferFunction int

const (
	QColorSpace__TransferFunction__Custom      QColorSpace__TransferFunction = 0
	QColorSpace__TransferFunction__Linear      QColorSpace__TransferFunction = 1
	QColorSpace__TransferFunction__Gamma       QColorSpace__TransferFunction = 2
	QColorSpace__TransferFunction__SRgb        QColorSpace__TransferFunction = 3
	QColorSpace__TransferFunction__ProPhotoRgb QColorSpace__TransferFunction = 4
)

type QColorSpace struct {
	h  *C.QColorSpace
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QColorSpace) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QColorSpace) cPointer() *C.QColorSpace {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColorSpace) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQColorSpace constructs the type using only CGO pointers.
func newQColorSpace(h *C.QColorSpace) *QColorSpace {
	if h == nil {
		return nil
	}

	return &QColorSpace{h: h}
}

// UnsafeNewQColorSpace constructs the type using only unsafe pointers.
func UnsafeNewQColorSpace(h unsafe.Pointer) *QColorSpace {
	return newQColorSpace((*C.QColorSpace)(h))
}

// NewQColorSpace constructs a new QColorSpace object.
func NewQColorSpace() *QColorSpace {

	return newQColorSpace(C.QColorSpace_new())
}

// NewQColorSpace2 constructs a new QColorSpace object.
func NewQColorSpace2(namedColorSpace QColorSpace__NamedColorSpace) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new2((C.int)(namedColorSpace)))
}

// NewQColorSpace3 constructs a new QColorSpace object.
func NewQColorSpace3(primaries QColorSpace__Primaries, transferFunction QColorSpace__TransferFunction) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new3((C.int)(primaries), (C.int)(transferFunction)))
}

// NewQColorSpace4 constructs a new QColorSpace object.
func NewQColorSpace4(primaries QColorSpace__Primaries, gamma float32) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new4((C.int)(primaries), (C.float)(gamma)))
}

// NewQColorSpace5 constructs a new QColorSpace object.
func NewQColorSpace5(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction QColorSpace__TransferFunction) *QColorSpace {
	defer runtime.KeepAlive(whitePoint)
	defer runtime.KeepAlive(redPoint)
	defer runtime.KeepAlive(greenPoint)
	defer runtime.KeepAlive(bluePoint)

	return newQColorSpace(C.QColorSpace_new5(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), (C.int)(transferFunction)))
}

// NewQColorSpace6 constructs a new QColorSpace object.
func NewQColorSpace6(colorSpace *QColorSpace) *QColorSpace {
	defer runtime.KeepAlive(colorSpace)

	return newQColorSpace(C.QColorSpace_new6(colorSpace.cPointer()))
}

// NewQColorSpace7 constructs a new QColorSpace object.
func NewQColorSpace7(primaries QColorSpace__Primaries, transferFunction QColorSpace__TransferFunction, gamma float32) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new7((C.int)(primaries), (C.int)(transferFunction), (C.float)(gamma)))
}

// NewQColorSpace8 constructs a new QColorSpace object.
func NewQColorSpace8(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction QColorSpace__TransferFunction, gamma float32) *QColorSpace {
	defer runtime.KeepAlive(whitePoint)
	defer runtime.KeepAlive(redPoint)
	defer runtime.KeepAlive(greenPoint)
	defer runtime.KeepAlive(bluePoint)

	return newQColorSpace(C.QColorSpace_new8(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), (C.int)(transferFunction), (C.float)(gamma)))
}

func (this *QColorSpace) OperatorAssign(colorSpace *QColorSpace) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(colorSpace)
	C.QColorSpace_operatorAssign(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Swap(colorSpace *QColorSpace) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(colorSpace)
	C.QColorSpace_swap(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Primaries() QColorSpace__Primaries {
	defer runtime.KeepAlive(this)
	return (QColorSpace__Primaries)(C.QColorSpace_primaries(this.h))
}

func (this *QColorSpace) TransferFunction() QColorSpace__TransferFunction {
	defer runtime.KeepAlive(this)
	return (QColorSpace__TransferFunction)(C.QColorSpace_transferFunction(this.h))
}

func (this *QColorSpace) Gamma() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QColorSpace_gamma(this.h))
}

func (this *QColorSpace) SetTransferFunction(transferFunction QColorSpace__TransferFunction) {
	defer runtime.KeepAlive(this)
	C.QColorSpace_setTransferFunction(this.h, (C.int)(transferFunction))
}

func (this *QColorSpace) WithTransferFunction(transferFunction QColorSpace__TransferFunction) *QColorSpace {
	defer runtime.KeepAlive(this)
	_goptr := newQColorSpace(C.QColorSpace_withTransferFunction(this.h, (C.int)(transferFunction)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) SetPrimaries(primariesId QColorSpace__Primaries) {
	defer runtime.KeepAlive(this)
	C.QColorSpace_setPrimaries(this.h, (C.int)(primariesId))
}

func (this *QColorSpace) SetPrimaries2(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(whitePoint)
	defer runtime.KeepAlive(redPoint)
	defer runtime.KeepAlive(greenPoint)
	defer runtime.KeepAlive(bluePoint)
	C.QColorSpace_setPrimaries2(this.h, whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer())
}

func (this *QColorSpace) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QColorSpace_isValid(this.h))
}

func QColorSpace_FromIccProfile(iccProfile []byte) *QColorSpace {
	iccProfile_alias := C.struct_miqt_string{}
	if len(iccProfile) > 0 {
		iccProfile_alias.data = (*C.char)(unsafe.Pointer(&iccProfile[0]))
	} else {
		iccProfile_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	iccProfile_alias.len = C.size_t(len(iccProfile))
	_goptr := newQColorSpace(C.QColorSpace_fromIccProfile(iccProfile_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) IccProfile() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QColorSpace_iccProfile(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QColorSpace) TransformationToColorSpace(colorspace *QColorSpace) *QColorTransform {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(colorspace)
	_goptr := newQColorTransform(C.QColorSpace_transformationToColorSpace(this.h, colorspace.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QColorSpace_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) SetTransferFunction2(transferFunction QColorSpace__TransferFunction, gamma float32) {
	defer runtime.KeepAlive(this)
	C.QColorSpace_setTransferFunction2(this.h, (C.int)(transferFunction), (C.float)(gamma))
}

func (this *QColorSpace) WithTransferFunction2(transferFunction QColorSpace__TransferFunction, gamma float32) *QColorSpace {
	defer runtime.KeepAlive(this)
	_goptr := newQColorSpace(C.QColorSpace_withTransferFunction2(this.h, (C.int)(transferFunction), (C.float)(gamma)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColorSpace) Delete() {
	C.QColorSpace_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QColorSpace) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QColorSpace_delete((*C.QColorSpace)(gc[0]))
	})
	this.miqtSetGC(gc)
}
