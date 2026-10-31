package qwt

/*

#include "gen_qwt_pixel_matrix.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPixelMatrix struct {
	h  *C.QwtPixelMatrix
	gc *[1]unsafe.Pointer
	*qt.QBitArray
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPixelMatrix) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
func NewQwtPixelMatrix(rect qt.QRect) *QwtPixelMatrix {

	return newQwtPixelMatrix(C.QwtPixelMatrix_new(libmiqt.ValueCast[C.struct_miqt_qrect](rect)))
}

// NewQwtPixelMatrix2 constructs a new QwtPixelMatrix object.
func NewQwtPixelMatrix2(param1 *QwtPixelMatrix) *QwtPixelMatrix {
	defer runtime.KeepAlive(param1)

	return newQwtPixelMatrix(C.QwtPixelMatrix_new2(param1.cPointer()))
}

func (this *QwtPixelMatrix) SetRect(rect qt.QRect) {
	defer runtime.KeepAlive(this)
	C.QwtPixelMatrix_setRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](rect))
}

func (this *QwtPixelMatrix) Rect() qt.QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRect](C.QwtPixelMatrix_rect(this.h))
}

func (this *QwtPixelMatrix) TestPixel(x int, y int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPixelMatrix_testPixel(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QwtPixelMatrix) TestAndSetPixel(x int, y int, on bool) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPixelMatrix_testAndSetPixel(this.h, (C.int)(x), (C.int)(y), (C.bool)(on)))
}

func (this *QwtPixelMatrix) Index(x int, y int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPixelMatrix_index(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QwtPixelMatrix) OperatorAssign(param1 *QwtPixelMatrix) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPixelMatrix_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtPixelMatrix) Delete() {
	C.QwtPixelMatrix_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPixelMatrix) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPixelMatrix_delete((*C.QwtPixelMatrix)(gc[0]))
	})
	this.miqtSetGC(gc)
}
