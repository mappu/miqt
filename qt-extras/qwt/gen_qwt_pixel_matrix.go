package qwt

/*

#include "gen_qwt_pixel_matrix.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPixelMatrix struct {
	h *C.QwtPixelMatrix
	*qt.QBitArray
}

func (this *QwtPixelMatrix) cPointer() *C.QwtPixelMatrix {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPixelMatrix) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPixelMatrix constructs the type using only CGO pointers.
func newQwtPixelMatrix(h *C.QwtPixelMatrix) *QwtPixelMatrix {
	if h == nil {
		return nil
	}
	var outptr_QBitArray *C.QBitArray = nil
	C.QwtPixelMatrix_virtbase(h, &outptr_QBitArray)

	return &QwtPixelMatrix{h: h,
		QBitArray: qt.UnsafeNewQBitArray(unsafe.Pointer(outptr_QBitArray))}
}

// UnsafeNewQwtPixelMatrix constructs the type using only unsafe pointers.
func UnsafeNewQwtPixelMatrix(h unsafe.Pointer) *QwtPixelMatrix {
	return newQwtPixelMatrix((*C.QwtPixelMatrix)(h))
}

// NewQwtPixelMatrix constructs a new QwtPixelMatrix object.
func NewQwtPixelMatrix(rect *qt.QRect) *QwtPixelMatrix {

	return newQwtPixelMatrix(C.QwtPixelMatrix_new((*C.QRect)(rect.UnsafePointer())))
}

// NewQwtPixelMatrix2 constructs a new QwtPixelMatrix object.
func NewQwtPixelMatrix2(param1 *QwtPixelMatrix) *QwtPixelMatrix {

	return newQwtPixelMatrix(C.QwtPixelMatrix_new2(param1.cPointer()))
}

func (this *QwtPixelMatrix) SetRect(rect *qt.QRect) {
	C.QwtPixelMatrix_setRect(this.h, (*C.QRect)(rect.UnsafePointer()))
}

func (this *QwtPixelMatrix) Rect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtPixelMatrix_rect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPixelMatrix) TestPixel(x int, y int) bool {
	return (bool)(C.QwtPixelMatrix_testPixel(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QwtPixelMatrix) TestAndSetPixel(x int, y int, on bool) bool {
	return (bool)(C.QwtPixelMatrix_testAndSetPixel(this.h, (C.int)(x), (C.int)(y), (C.bool)(on)))
}

func (this *QwtPixelMatrix) Index(x int, y int) int {
	return (int)(C.QwtPixelMatrix_index(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QwtPixelMatrix) OperatorAssign(param1 *QwtPixelMatrix) {
	C.QwtPixelMatrix_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtPixelMatrix) Delete() {
	C.QwtPixelMatrix_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPixelMatrix) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPixelMatrix) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
