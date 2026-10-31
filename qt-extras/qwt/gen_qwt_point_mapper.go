package qwt

/*

#include "gen_qwt_point_mapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
	h  *C.QwtPointMapper
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPointMapper) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(this)
	C.QwtPointMapper_setFlags(this.h, (C.int)(flags))
}

func (this *QwtPointMapper) Flags() QwtPointMapper__TransformationFlag {
	defer runtime.KeepAlive(this)
	return (QwtPointMapper__TransformationFlag)(C.QwtPointMapper_flags(this.h))
}

func (this *QwtPointMapper) SetFlag(param1 QwtPointMapper__TransformationFlag) {
	defer runtime.KeepAlive(this)
	C.QwtPointMapper_setFlag(this.h, (C.int)(param1))
}

func (this *QwtPointMapper) TestFlag(param1 QwtPointMapper__TransformationFlag) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPointMapper_testFlag(this.h, (C.int)(param1)))
}

func (this *QwtPointMapper) SetBoundingRect(boundingRect qt.QRectF) {
	defer runtime.KeepAlive(this)
	C.QwtPointMapper_setBoundingRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](boundingRect))
}

func (this *QwtPointMapper) BoundingRect() qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtPointMapper_boundingRect(this.h))
}

func (this *QwtPointMapper) SetFlag2(param1 QwtPointMapper__TransformationFlag, on bool) {
	defer runtime.KeepAlive(this)
	C.QwtPointMapper_setFlag2(this.h, (C.int)(param1), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QwtPointMapper) Delete() {
	C.QwtPointMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPointMapper) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPointMapper_delete((*C.QwtPointMapper)(gc[0]))
	})
	this.miqtSetGC(gc)
}
