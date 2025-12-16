package positioning

/*

#include "gen_qgeoshape.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGeoShape__ShapeType int

const (
	QGeoShape__UnknownType   QGeoShape__ShapeType = 0
	QGeoShape__RectangleType QGeoShape__ShapeType = 1
	QGeoShape__CircleType    QGeoShape__ShapeType = 2
	QGeoShape__PathType      QGeoShape__ShapeType = 3
	QGeoShape__PolygonType   QGeoShape__ShapeType = 4
)

type QGeoShape struct {
	h *C.QGeoShape
}

func (this *QGeoShape) cPointer() *C.QGeoShape {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoShape) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoShape constructs the type using only CGO pointers.
func newQGeoShape(h *C.QGeoShape) *QGeoShape {
	if h == nil {
		return nil
	}

	return &QGeoShape{h: h}
}

// UnsafeNewQGeoShape constructs the type using only unsafe pointers.
func UnsafeNewQGeoShape(h unsafe.Pointer) *QGeoShape {
	return newQGeoShape((*C.QGeoShape)(h))
}

// NewQGeoShape constructs a new QGeoShape object.
func NewQGeoShape() *QGeoShape {

	return newQGeoShape(C.QGeoShape_new())
}

// NewQGeoShape2 constructs a new QGeoShape object.
func NewQGeoShape2(other *QGeoShape) *QGeoShape {

	return newQGeoShape(C.QGeoShape_new2(other.cPointer()))
}

func (this *QGeoShape) Type() QGeoShape__ShapeType {
	return (QGeoShape__ShapeType)(C.QGeoShape_type(this.h))
}

func (this *QGeoShape) IsValid() bool {
	return (bool)(C.QGeoShape_isValid(this.h))
}

func (this *QGeoShape) IsEmpty() bool {
	return (bool)(C.QGeoShape_isEmpty(this.h))
}

func (this *QGeoShape) Contains(coordinate *QGeoCoordinate) bool {
	return (bool)(C.QGeoShape_contains(this.h, coordinate.cPointer()))
}

func (this *QGeoShape) BoundingGeoRectangle() *QGeoRectangle {
	_goptr := newQGeoRectangle(C.QGeoShape_boundingGeoRectangle(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoShape) Center() *QGeoCoordinate {
	_goptr := newQGeoCoordinate(C.QGeoShape_center(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoShape) ExtendShape(coordinate *QGeoCoordinate) {
	C.QGeoShape_extendShape(this.h, coordinate.cPointer())
}

func (this *QGeoShape) OperatorEqual(other *QGeoShape) bool {
	return (bool)(C.QGeoShape_operatorEqual(this.h, other.cPointer()))
}

func (this *QGeoShape) OperatorNotEqual(other *QGeoShape) bool {
	return (bool)(C.QGeoShape_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGeoShape) OperatorAssign(other *QGeoShape) {
	C.QGeoShape_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoShape) ToString() string {
	var _ms C.struct_miqt_string = C.QGeoShape_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGeoShape) Delete() {
	C.QGeoShape_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGeoShape) GoGC() {
	runtime.SetFinalizer(this, func(this *QGeoShape) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
