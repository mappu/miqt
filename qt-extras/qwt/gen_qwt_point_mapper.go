package qwt

/*

#include "gen_qwt_point_mapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPointMapper__TransformationFlag int

const (
	QwtPointMapper__RoundPoints   QwtPointMapper__TransformationFlag = 1
	QwtPointMapper__WeedOutPoints QwtPointMapper__TransformationFlag = 2
)

type QwtPointMapper struct {
	h *C.QwtPointMapper
}

func (this *QwtPointMapper) cPointer() *C.QwtPointMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPointMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPointMapper constructs the type using only CGO pointers.
func newQwtPointMapper(h *C.QwtPointMapper) *QwtPointMapper {
	if h == nil {
		return nil
	}

	return &QwtPointMapper{h: h}
}

// UnsafeNewQwtPointMapper constructs the type using only unsafe pointers.
func UnsafeNewQwtPointMapper(h unsafe.Pointer) *QwtPointMapper {
	return newQwtPointMapper((*C.QwtPointMapper)(h))
}

// NewQwtPointMapper constructs a new QwtPointMapper object.
func NewQwtPointMapper() *QwtPointMapper {

	return newQwtPointMapper(C.QwtPointMapper_new())
}

func (this *QwtPointMapper) SetFlags(flags QwtPointMapper__TransformationFlag) {
	C.QwtPointMapper_setFlags(this.h, (C.int)(flags))
}

func (this *QwtPointMapper) Flags() QwtPointMapper__TransformationFlag {
	return (QwtPointMapper__TransformationFlag)(C.QwtPointMapper_flags(this.h))
}

func (this *QwtPointMapper) SetFlag(param1 QwtPointMapper__TransformationFlag) {
	C.QwtPointMapper_setFlag(this.h, (C.int)(param1))
}

func (this *QwtPointMapper) TestFlag(param1 QwtPointMapper__TransformationFlag) bool {
	return (bool)(C.QwtPointMapper_testFlag(this.h, (C.int)(param1)))
}

func (this *QwtPointMapper) SetBoundingRect(boundingRect *qt.QRectF) {
	C.QwtPointMapper_setBoundingRect(this.h, (*C.QRectF)(boundingRect.UnsafePointer()))
}

func (this *QwtPointMapper) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPointMapper_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPointMapper) SetFlag2(param1 QwtPointMapper__TransformationFlag, on bool) {
	C.QwtPointMapper_setFlag2(this.h, (C.int)(param1), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QwtPointMapper) Delete() {
	C.QwtPointMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPointMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPointMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
