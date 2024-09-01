package qt

/*

#include "gen_qbitmap.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QBitmap struct {
	h *C.QBitmap
	*QPixmap
}

func (this *QBitmap) cPointer() *C.QBitmap {
	if this == nil {
		return nil
	}
	return this.h
}

func newQBitmap(h *C.QBitmap) *QBitmap {
	if h == nil {
		return nil
	}
	return &QBitmap{h: h, QPixmap: newQPixmap_U(unsafe.Pointer(h))}
}

func newQBitmap_U(h unsafe.Pointer) *QBitmap {
	return newQBitmap((*C.QBitmap)(h))
}

// NewQBitmap constructs a new QBitmap object.
func NewQBitmap() *QBitmap {
	ret := C.QBitmap_new()
	return newQBitmap(ret)
}

// NewQBitmap2 constructs a new QBitmap object.
func NewQBitmap2(param1 *QPixmap) *QBitmap {
	ret := C.QBitmap_new2(param1.cPointer())
	return newQBitmap(ret)
}

// NewQBitmap3 constructs a new QBitmap object.
func NewQBitmap3(w int, h int) *QBitmap {
	ret := C.QBitmap_new3((C.int)(w), (C.int)(h))
	return newQBitmap(ret)
}

// NewQBitmap4 constructs a new QBitmap object.
func NewQBitmap4(param1 *QSize) *QBitmap {
	ret := C.QBitmap_new4(param1.cPointer())
	return newQBitmap(ret)
}

// NewQBitmap5 constructs a new QBitmap object.
func NewQBitmap5(fileName string) *QBitmap {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QBitmap_new5(fileName_Cstring, C.ulong(len(fileName)))
	return newQBitmap(ret)
}

// NewQBitmap6 constructs a new QBitmap object.
func NewQBitmap6(other *QBitmap) *QBitmap {
	ret := C.QBitmap_new6(other.cPointer())
	return newQBitmap(ret)
}

// NewQBitmap7 constructs a new QBitmap object.
func NewQBitmap7(fileName string, format string) *QBitmap {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QBitmap_new7(fileName_Cstring, C.ulong(len(fileName)), format_Cstring)
	return newQBitmap(ret)
}

func (this *QBitmap) OperatorAssign(other *QBitmap) {
	C.QBitmap_OperatorAssign(this.h, other.cPointer())
}

func (this *QBitmap) OperatorAssignWithQPixmap(param1 *QPixmap) {
	C.QBitmap_OperatorAssignWithQPixmap(this.h, param1.cPointer())
}

func (this *QBitmap) Swap(other *QBitmap) {
	C.QBitmap_Swap(this.h, other.cPointer())
}

func (this *QBitmap) Clear() {
	C.QBitmap_Clear(this.h)
}

func QBitmap_FromImage(image *QImage) *QBitmap {
	ret := C.QBitmap_FromImage(image.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QBitmap_FromData(size *QSize, bits *byte) *QBitmap {
	ret := C.QBitmap_FromData(size.cPointer(), (*C.uchar)(unsafe.Pointer(bits)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBitmap) Transformed(param1 *QMatrix) *QBitmap {
	ret := C.QBitmap_Transformed(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBitmap) TransformedWithMatrix(matrix *QTransform) *QBitmap {
	ret := C.QBitmap_TransformedWithMatrix(this.h, matrix.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QBitmap_FromImage2(image *QImage, flags int) *QBitmap {
	ret := C.QBitmap_FromImage2(image.cPointer(), (C.int)(flags))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QBitmap_FromData3(size *QSize, bits *byte, monoFormat uintptr) *QBitmap {
	ret := C.QBitmap_FromData3(size.cPointer(), (*C.uchar)(unsafe.Pointer(bits)), (C.uintptr_t)(monoFormat))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBitmap) Delete() {
	C.QBitmap_Delete(this.h)
}
