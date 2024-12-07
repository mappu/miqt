package qt6

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
	h          *C.QColorSpace
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QColorSpace{h: (*C.QColorSpace)(h)}
}

// NewQColorSpace constructs a new QColorSpace object.
func NewQColorSpace() *QColorSpace {
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new(&outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace2 constructs a new QColorSpace object.
func NewQColorSpace2(namedColorSpace QColorSpace__NamedColorSpace) *QColorSpace {
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new2((C.int)(namedColorSpace), &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace3 constructs a new QColorSpace object.
func NewQColorSpace3(primaries QColorSpace__Primaries, transferFunction QColorSpace__TransferFunction) *QColorSpace {
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new3((C.int)(primaries), (C.int)(transferFunction), &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace4 constructs a new QColorSpace object.
func NewQColorSpace4(primaries QColorSpace__Primaries, gamma float32) *QColorSpace {
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new4((C.int)(primaries), (C.float)(gamma), &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace5 constructs a new QColorSpace object.
func NewQColorSpace5(primaries QColorSpace__Primaries, transferFunctionTable []uint16) *QColorSpace {
	transferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(transferFunctionTable))))
	defer C.free(unsafe.Pointer(transferFunctionTable_CArray))
	for i := range transferFunctionTable {
		transferFunctionTable_CArray[i] = (C.uint16_t)(transferFunctionTable[i])
	}
	transferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(transferFunctionTable)), data: unsafe.Pointer(transferFunctionTable_CArray)}
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new5((C.int)(primaries), transferFunctionTable_ma, &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace6 constructs a new QColorSpace object.
func NewQColorSpace6(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction QColorSpace__TransferFunction) *QColorSpace {
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new6(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), (C.int)(transferFunction), &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace7 constructs a new QColorSpace object.
func NewQColorSpace7(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunctionTable []uint16) *QColorSpace {
	transferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(transferFunctionTable))))
	defer C.free(unsafe.Pointer(transferFunctionTable_CArray))
	for i := range transferFunctionTable {
		transferFunctionTable_CArray[i] = (C.uint16_t)(transferFunctionTable[i])
	}
	transferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(transferFunctionTable)), data: unsafe.Pointer(transferFunctionTable_CArray)}
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new7(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), transferFunctionTable_ma, &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace8 constructs a new QColorSpace object.
func NewQColorSpace8(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, redTransferFunctionTable []uint16, greenTransferFunctionTable []uint16, blueTransferFunctionTable []uint16) *QColorSpace {
	redTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(redTransferFunctionTable))))
	defer C.free(unsafe.Pointer(redTransferFunctionTable_CArray))
	for i := range redTransferFunctionTable {
		redTransferFunctionTable_CArray[i] = (C.uint16_t)(redTransferFunctionTable[i])
	}
	redTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(redTransferFunctionTable)), data: unsafe.Pointer(redTransferFunctionTable_CArray)}
	greenTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(greenTransferFunctionTable))))
	defer C.free(unsafe.Pointer(greenTransferFunctionTable_CArray))
	for i := range greenTransferFunctionTable {
		greenTransferFunctionTable_CArray[i] = (C.uint16_t)(greenTransferFunctionTable[i])
	}
	greenTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(greenTransferFunctionTable)), data: unsafe.Pointer(greenTransferFunctionTable_CArray)}
	blueTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(blueTransferFunctionTable))))
	defer C.free(unsafe.Pointer(blueTransferFunctionTable_CArray))
	for i := range blueTransferFunctionTable {
		blueTransferFunctionTable_CArray[i] = (C.uint16_t)(blueTransferFunctionTable[i])
	}
	blueTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(blueTransferFunctionTable)), data: unsafe.Pointer(blueTransferFunctionTable_CArray)}
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new8(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), redTransferFunctionTable_ma, greenTransferFunctionTable_ma, blueTransferFunctionTable_ma, &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace9 constructs a new QColorSpace object.
func NewQColorSpace9(colorSpace *QColorSpace) *QColorSpace {
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new9(colorSpace.cPointer(), &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace10 constructs a new QColorSpace object.
func NewQColorSpace10(primaries QColorSpace__Primaries, transferFunction QColorSpace__TransferFunction, gamma float32) *QColorSpace {
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new10((C.int)(primaries), (C.int)(transferFunction), (C.float)(gamma), &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
}

// NewQColorSpace11 constructs a new QColorSpace object.
func NewQColorSpace11(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction QColorSpace__TransferFunction, gamma float32) *QColorSpace {
	var outptr_QColorSpace *C.QColorSpace = nil

	C.QColorSpace_new11(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), (C.int)(transferFunction), (C.float)(gamma), &outptr_QColorSpace)
	ret := newQColorSpace(outptr_QColorSpace)
	ret.isSubclass = true
	return ret
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

func (this *QColorSpace) Description() string {
	var _ms C.struct_miqt_string = C.QColorSpace_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColorSpace) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QColorSpace_SetDescription(this.h, description_ms)
}

func (this *QColorSpace) SetTransferFunction(transferFunction QColorSpace__TransferFunction) {
	C.QColorSpace_SetTransferFunction(this.h, (C.int)(transferFunction))
}

func (this *QColorSpace) SetTransferFunctionWithTransferFunctionTable(transferFunctionTable []uint16) {
	transferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(transferFunctionTable))))
	defer C.free(unsafe.Pointer(transferFunctionTable_CArray))
	for i := range transferFunctionTable {
		transferFunctionTable_CArray[i] = (C.uint16_t)(transferFunctionTable[i])
	}
	transferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(transferFunctionTable)), data: unsafe.Pointer(transferFunctionTable_CArray)}
	C.QColorSpace_SetTransferFunctionWithTransferFunctionTable(this.h, transferFunctionTable_ma)
}

func (this *QColorSpace) SetTransferFunctions(redTransferFunctionTable []uint16, greenTransferFunctionTable []uint16, blueTransferFunctionTable []uint16) {
	redTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(redTransferFunctionTable))))
	defer C.free(unsafe.Pointer(redTransferFunctionTable_CArray))
	for i := range redTransferFunctionTable {
		redTransferFunctionTable_CArray[i] = (C.uint16_t)(redTransferFunctionTable[i])
	}
	redTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(redTransferFunctionTable)), data: unsafe.Pointer(redTransferFunctionTable_CArray)}
	greenTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(greenTransferFunctionTable))))
	defer C.free(unsafe.Pointer(greenTransferFunctionTable_CArray))
	for i := range greenTransferFunctionTable {
		greenTransferFunctionTable_CArray[i] = (C.uint16_t)(greenTransferFunctionTable[i])
	}
	greenTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(greenTransferFunctionTable)), data: unsafe.Pointer(greenTransferFunctionTable_CArray)}
	blueTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(blueTransferFunctionTable))))
	defer C.free(unsafe.Pointer(blueTransferFunctionTable_CArray))
	for i := range blueTransferFunctionTable {
		blueTransferFunctionTable_CArray[i] = (C.uint16_t)(blueTransferFunctionTable[i])
	}
	blueTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(blueTransferFunctionTable)), data: unsafe.Pointer(blueTransferFunctionTable_CArray)}
	C.QColorSpace_SetTransferFunctions(this.h, redTransferFunctionTable_ma, greenTransferFunctionTable_ma, blueTransferFunctionTable_ma)
}

func (this *QColorSpace) WithTransferFunction(transferFunction QColorSpace__TransferFunction) *QColorSpace {
	_goptr := newQColorSpace(C.QColorSpace_WithTransferFunction(this.h, (C.int)(transferFunction)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) WithTransferFunctionWithTransferFunctionTable(transferFunctionTable []uint16) *QColorSpace {
	transferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(transferFunctionTable))))
	defer C.free(unsafe.Pointer(transferFunctionTable_CArray))
	for i := range transferFunctionTable {
		transferFunctionTable_CArray[i] = (C.uint16_t)(transferFunctionTable[i])
	}
	transferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(transferFunctionTable)), data: unsafe.Pointer(transferFunctionTable_CArray)}
	_goptr := newQColorSpace(C.QColorSpace_WithTransferFunctionWithTransferFunctionTable(this.h, transferFunctionTable_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) WithTransferFunctions(redTransferFunctionTable []uint16, greenTransferFunctionTable []uint16, blueTransferFunctionTable []uint16) *QColorSpace {
	redTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(redTransferFunctionTable))))
	defer C.free(unsafe.Pointer(redTransferFunctionTable_CArray))
	for i := range redTransferFunctionTable {
		redTransferFunctionTable_CArray[i] = (C.uint16_t)(redTransferFunctionTable[i])
	}
	redTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(redTransferFunctionTable)), data: unsafe.Pointer(redTransferFunctionTable_CArray)}
	greenTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(greenTransferFunctionTable))))
	defer C.free(unsafe.Pointer(greenTransferFunctionTable_CArray))
	for i := range greenTransferFunctionTable {
		greenTransferFunctionTable_CArray[i] = (C.uint16_t)(greenTransferFunctionTable[i])
	}
	greenTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(greenTransferFunctionTable)), data: unsafe.Pointer(greenTransferFunctionTable_CArray)}
	blueTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(blueTransferFunctionTable))))
	defer C.free(unsafe.Pointer(blueTransferFunctionTable_CArray))
	for i := range blueTransferFunctionTable {
		blueTransferFunctionTable_CArray[i] = (C.uint16_t)(blueTransferFunctionTable[i])
	}
	blueTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(blueTransferFunctionTable)), data: unsafe.Pointer(blueTransferFunctionTable_CArray)}
	_goptr := newQColorSpace(C.QColorSpace_WithTransferFunctions(this.h, redTransferFunctionTable_ma, greenTransferFunctionTable_ma, blueTransferFunctionTable_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) SetPrimaries(primariesId QColorSpace__Primaries) {
	C.QColorSpace_SetPrimaries(this.h, (C.int)(primariesId))
}

func (this *QColorSpace) SetPrimaries2(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF) {
	C.QColorSpace_SetPrimaries2(this.h, whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer())
}

func (this *QColorSpace) Detach() {
	C.QColorSpace_Detach(this.h)
}

func (this *QColorSpace) IsValid() bool {
	return (bool)(C.QColorSpace_IsValid(this.h))
}

func QColorSpace_FromIccProfile(iccProfile []byte) *QColorSpace {
	iccProfile_alias := C.struct_miqt_string{}
	iccProfile_alias.data = (*C.char)(unsafe.Pointer(&iccProfile[0]))
	iccProfile_alias.len = C.size_t(len(iccProfile))
	_goptr := newQColorSpace(C.QColorSpace_FromIccProfile(iccProfile_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) IccProfile() []byte {
	var _bytearray C.struct_miqt_string = C.QColorSpace_IccProfile(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QColorSpace) TransformationToColorSpace(colorspace *QColorSpace) *QColorTransform {
	_goptr := newQColorTransform(C.QColorSpace_TransformationToColorSpace(this.h, colorspace.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) SetTransferFunction2(transferFunction QColorSpace__TransferFunction, gamma float32) {
	C.QColorSpace_SetTransferFunction2(this.h, (C.int)(transferFunction), (C.float)(gamma))
}

func (this *QColorSpace) WithTransferFunction2(transferFunction QColorSpace__TransferFunction, gamma float32) *QColorSpace {
	_goptr := newQColorSpace(C.QColorSpace_WithTransferFunction2(this.h, (C.int)(transferFunction), (C.float)(gamma)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColorSpace) Delete() {
	C.QColorSpace_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColorSpace) GoGC() {
	runtime.SetFinalizer(this, func(this *QColorSpace) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
