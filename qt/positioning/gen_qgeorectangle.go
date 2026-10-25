package positioning

/*

#include "gen_qgeorectangle.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGeoRectangle struct {
	h  *C.QGeoRectangle
	gc *[1]unsafe.Pointer
	*QGeoShape
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoRectangle) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGeoShape.miqtSetGC(gc)
}

func (this *QGeoRectangle) cPointer() *C.QGeoRectangle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoRectangle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoRectangle constructs the type using only CGO pointers.
func newQGeoRectangle(h *C.QGeoRectangle) *QGeoRectangle {
	if h == nil {
		return nil
	}
	var outptr_QGeoShape *C.QGeoShape = nil
	C.QGeoRectangle_virtbase(h, &outptr_QGeoShape)

	return &QGeoRectangle{h: h,
		QGeoShape: newQGeoShape(outptr_QGeoShape)}
}

// UnsafeNewQGeoRectangle constructs the type using only unsafe pointers.
func UnsafeNewQGeoRectangle(h unsafe.Pointer) *QGeoRectangle {
	return newQGeoRectangle((*C.QGeoRectangle)(h))
}

// NewQGeoRectangle constructs a new QGeoRectangle object.
func NewQGeoRectangle() *QGeoRectangle {

	return newQGeoRectangle(C.QGeoRectangle_new())
}

// NewQGeoRectangle2 constructs a new QGeoRectangle object.
func NewQGeoRectangle2(center *QGeoCoordinate, degreesWidth float64, degreesHeight float64) *QGeoRectangle {
	defer runtime.KeepAlive(center)

	return newQGeoRectangle(C.QGeoRectangle_new2(center.cPointer(), (C.double)(degreesWidth), (C.double)(degreesHeight)))
}

// NewQGeoRectangle3 constructs a new QGeoRectangle object.
func NewQGeoRectangle3(topLeft *QGeoCoordinate, bottomRight *QGeoCoordinate) *QGeoRectangle {
	defer runtime.KeepAlive(topLeft)
	defer runtime.KeepAlive(bottomRight)

	return newQGeoRectangle(C.QGeoRectangle_new3(topLeft.cPointer(), bottomRight.cPointer()))
}

// NewQGeoRectangle4 constructs a new QGeoRectangle object.
func NewQGeoRectangle4(coordinates []QGeoCoordinate) *QGeoRectangle {
	defer runtime.KeepAlive(coordinates)
	coordinates_CArray_ptr := (**C.QGeoCoordinate)(C.malloc(C.size_t(8 * len(coordinates))))
	defer C.free(unsafe.Pointer(coordinates_CArray_ptr))
	coordinates_CArray := unsafe.Slice(coordinates_CArray_ptr, len(coordinates))
	for i := range coordinates {
		coordinates_CArray[i] = coordinates[i].cPointer()
	}
	coordinates_ma := C.struct_miqt_array{len: C.size_t(len(coordinates)), data: unsafe.Pointer(coordinates_CArray_ptr)}

	return newQGeoRectangle(C.QGeoRectangle_new4(coordinates_ma))
}

// NewQGeoRectangle5 constructs a new QGeoRectangle object.
func NewQGeoRectangle5(other *QGeoRectangle) *QGeoRectangle {
	defer runtime.KeepAlive(other)

	return newQGeoRectangle(C.QGeoRectangle_new5(other.cPointer()))
}

// NewQGeoRectangle6 constructs a new QGeoRectangle object.
func NewQGeoRectangle6(other *QGeoShape) *QGeoRectangle {
	defer runtime.KeepAlive(other)

	return newQGeoRectangle(C.QGeoRectangle_new6(other.cPointer()))
}

func (this *QGeoRectangle) OperatorAssign(other *QGeoRectangle) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoRectangle_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoRectangle) OperatorEqual(other *QGeoRectangle) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoRectangle_operatorEqual(this.h, other.cPointer()))
}

func (this *QGeoRectangle) OperatorNotEqual(other *QGeoRectangle) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoRectangle_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGeoRectangle) SetTopLeft(topLeft *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(topLeft)
	C.QGeoRectangle_setTopLeft(this.h, topLeft.cPointer())
}

func (this *QGeoRectangle) TopLeft() *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoRectangle_topLeft(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoRectangle) SetTopRight(topRight *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(topRight)
	C.QGeoRectangle_setTopRight(this.h, topRight.cPointer())
}

func (this *QGeoRectangle) TopRight() *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoRectangle_topRight(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoRectangle) SetBottomLeft(bottomLeft *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(bottomLeft)
	C.QGeoRectangle_setBottomLeft(this.h, bottomLeft.cPointer())
}

func (this *QGeoRectangle) BottomLeft() *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoRectangle_bottomLeft(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoRectangle) SetBottomRight(bottomRight *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(bottomRight)
	C.QGeoRectangle_setBottomRight(this.h, bottomRight.cPointer())
}

func (this *QGeoRectangle) BottomRight() *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoRectangle_bottomRight(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoRectangle) SetCenter(center *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(center)
	C.QGeoRectangle_setCenter(this.h, center.cPointer())
}

func (this *QGeoRectangle) Center() *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoRectangle_center(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoRectangle) SetWidth(degreesWidth float64) {
	defer runtime.KeepAlive(this)
	C.QGeoRectangle_setWidth(this.h, (C.double)(degreesWidth))
}

func (this *QGeoRectangle) Width() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoRectangle_width(this.h))
}

func (this *QGeoRectangle) SetHeight(degreesHeight float64) {
	defer runtime.KeepAlive(this)
	C.QGeoRectangle_setHeight(this.h, (C.double)(degreesHeight))
}

func (this *QGeoRectangle) Height() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoRectangle_height(this.h))
}

func (this *QGeoRectangle) Contains(rectangle *QGeoRectangle) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rectangle)
	return (bool)(C.QGeoRectangle_contains(this.h, rectangle.cPointer()))
}

func (this *QGeoRectangle) Intersects(rectangle *QGeoRectangle) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rectangle)
	return (bool)(C.QGeoRectangle_intersects(this.h, rectangle.cPointer()))
}

func (this *QGeoRectangle) Translate(degreesLatitude float64, degreesLongitude float64) {
	defer runtime.KeepAlive(this)
	C.QGeoRectangle_translate(this.h, (C.double)(degreesLatitude), (C.double)(degreesLongitude))
}

func (this *QGeoRectangle) Translated(degreesLatitude float64, degreesLongitude float64) *QGeoRectangle {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoRectangle(C.QGeoRectangle_translated(this.h, (C.double)(degreesLatitude), (C.double)(degreesLongitude)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoRectangle) ExtendRectangle(coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoRectangle_extendRectangle(this.h, coordinate.cPointer())
}

func (this *QGeoRectangle) United(rectangle *QGeoRectangle) *QGeoRectangle {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rectangle)
	_goptr := newQGeoRectangle(C.QGeoRectangle_united(this.h, rectangle.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoRectangle) OperatorBitwiseOr(rectangle *QGeoRectangle) *QGeoRectangle {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rectangle)
	_goptr := newQGeoRectangle(C.QGeoRectangle_operatorBitwiseOr(this.h, rectangle.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoRectangle) OperatorBitwiseOrAssign(rectangle *QGeoRectangle) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rectangle)
	C.QGeoRectangle_operatorBitwiseOrAssign(this.h, rectangle.cPointer())
}

func (this *QGeoRectangle) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoRectangle_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGeoRectangle) Delete() {
	C.QGeoRectangle_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoRectangle) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoRectangle_delete((*C.QGeoRectangle)(gc[0]))
	})
	this.miqtSetGC(gc)
}
