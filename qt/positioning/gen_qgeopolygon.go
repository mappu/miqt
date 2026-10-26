package positioning

/*

#include "gen_qgeopolygon.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QGeoPolygon struct {
	h  *C.QGeoPolygon
	gc *[1]unsafe.Pointer
	*QGeoShape
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoPolygon) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGeoShape.miqtSetGC(gc)
}

func (this *QGeoPolygon) cPointer() *C.QGeoPolygon {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoPolygon) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoPolygon constructs the type using only CGO pointers.
func newQGeoPolygon(h *C.QGeoPolygon) *QGeoPolygon {
	if h == nil {
		return nil
	}
	var outptr_QGeoShape *C.QGeoShape = nil
	C.QGeoPolygon_virtbase(h, &outptr_QGeoShape)

	return &QGeoPolygon{h: h,
		QGeoShape: newQGeoShape(outptr_QGeoShape)}
}

// UnsafeNewQGeoPolygon constructs the type using only unsafe pointers.
func UnsafeNewQGeoPolygon(h unsafe.Pointer) *QGeoPolygon {
	return newQGeoPolygon((*C.QGeoPolygon)(h))
}

// NewQGeoPolygon constructs a new QGeoPolygon object.
func NewQGeoPolygon() *QGeoPolygon {

	return newQGeoPolygon(C.QGeoPolygon_new())
}

// NewQGeoPolygon2 constructs a new QGeoPolygon object.
func NewQGeoPolygon2(path []QGeoCoordinate) *QGeoPolygon {
	defer runtime.KeepAlive(path)
	path_CArray_ptr := (**C.QGeoCoordinate)(C.malloc(C.size_t(8 * len(path))))
	defer C.free(unsafe.Pointer(path_CArray_ptr))
	path_CArray := unsafe.Slice(path_CArray_ptr, len(path))
	for i := range path {
		path_CArray[i] = path[i].cPointer()
	}
	path_ma := C.struct_miqt_array{len: C.size_t(len(path)), data: unsafe.Pointer(path_CArray_ptr)}

	return newQGeoPolygon(C.QGeoPolygon_new2(path_ma))
}

// NewQGeoPolygon3 constructs a new QGeoPolygon object.
func NewQGeoPolygon3(other *QGeoPolygon) *QGeoPolygon {
	defer runtime.KeepAlive(other)

	return newQGeoPolygon(C.QGeoPolygon_new3(other.cPointer()))
}

// NewQGeoPolygon4 constructs a new QGeoPolygon object.
func NewQGeoPolygon4(other *QGeoShape) *QGeoPolygon {
	defer runtime.KeepAlive(other)

	return newQGeoPolygon(C.QGeoPolygon_new4(other.cPointer()))
}

func (this *QGeoPolygon) OperatorAssign(other *QGeoPolygon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoPolygon_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoPolygon) OperatorEqual(other *QGeoPolygon) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoPolygon_operatorEqual(this.h, other.cPointer()))
}

func (this *QGeoPolygon) OperatorNotEqual(other *QGeoPolygon) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoPolygon_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGeoPolygon) SetPath(path []QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(path)
	path_CArray_ptr := (**C.QGeoCoordinate)(C.malloc(C.size_t(8 * len(path))))
	defer C.free(unsafe.Pointer(path_CArray_ptr))
	path_CArray := unsafe.Slice(path_CArray_ptr, len(path))
	for i := range path {
		path_CArray[i] = path[i].cPointer()
	}
	path_ma := C.struct_miqt_array{len: C.size_t(len(path)), data: unsafe.Pointer(path_CArray_ptr)}
	C.QGeoPolygon_setPath(this.h, path_ma)
}

func (this *QGeoPolygon) Path() []QGeoCoordinate {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QGeoPolygon_path(this.h)
	_ret := make([]QGeoCoordinate, int(_ma.len))
	_outCast := unsafe.Slice((**C.QGeoCoordinate)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGeoCoordinate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QGeoPolygon) AddHole(holePath *qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(holePath)
	C.QGeoPolygon_addHole(this.h, (*C.QVariant)(holePath.UnsafePointer()))
}

func (this *QGeoPolygon) AddHoleWithHolePath(holePath []QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(holePath)
	holePath_CArray_ptr := (**C.QGeoCoordinate)(C.malloc(C.size_t(8 * len(holePath))))
	defer C.free(unsafe.Pointer(holePath_CArray_ptr))
	holePath_CArray := unsafe.Slice(holePath_CArray_ptr, len(holePath))
	for i := range holePath {
		holePath_CArray[i] = holePath[i].cPointer()
	}
	holePath_ma := C.struct_miqt_array{len: C.size_t(len(holePath)), data: unsafe.Pointer(holePath_CArray_ptr)}
	C.QGeoPolygon_addHoleWithHolePath(this.h, holePath_ma)
}

func (this *QGeoPolygon) Hole(index int) []qt.QVariant {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QGeoPolygon_hole(this.h, (C.int)(index))
	_ret := make([]qt.QVariant, int(_ma.len))
	_outCast := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QGeoPolygon) HolePath(index int) []QGeoCoordinate {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QGeoPolygon_holePath(this.h, (C.int)(index))
	_ret := make([]QGeoCoordinate, int(_ma.len))
	_outCast := unsafe.Slice((**C.QGeoCoordinate)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGeoCoordinate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QGeoPolygon) RemoveHole(index int) {
	defer runtime.KeepAlive(this)
	C.QGeoPolygon_removeHole(this.h, (C.int)(index))
}

func (this *QGeoPolygon) HolesCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QGeoPolygon_holesCount(this.h))
}

func (this *QGeoPolygon) Translate(degreesLatitude float64, degreesLongitude float64) {
	defer runtime.KeepAlive(this)
	C.QGeoPolygon_translate(this.h, (C.double)(degreesLatitude), (C.double)(degreesLongitude))
}

func (this *QGeoPolygon) Translated(degreesLatitude float64, degreesLongitude float64) *QGeoPolygon {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoPolygon(C.QGeoPolygon_translated(this.h, (C.double)(degreesLatitude), (C.double)(degreesLongitude)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoPolygon) Length() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoPolygon_length(this.h))
}

func (this *QGeoPolygon) Size() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QGeoPolygon_size(this.h))
}

func (this *QGeoPolygon) AddCoordinate(coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoPolygon_addCoordinate(this.h, coordinate.cPointer())
}

func (this *QGeoPolygon) InsertCoordinate(index int, coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoPolygon_insertCoordinate(this.h, (C.int)(index), coordinate.cPointer())
}

func (this *QGeoPolygon) ReplaceCoordinate(index int, coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoPolygon_replaceCoordinate(this.h, (C.int)(index), coordinate.cPointer())
}

func (this *QGeoPolygon) CoordinateAt(index int) *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoPolygon_coordinateAt(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoPolygon) ContainsCoordinate(coordinate *QGeoCoordinate) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	return (bool)(C.QGeoPolygon_containsCoordinate(this.h, coordinate.cPointer()))
}

func (this *QGeoPolygon) RemoveCoordinate(coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoPolygon_removeCoordinate(this.h, coordinate.cPointer())
}

func (this *QGeoPolygon) RemoveCoordinateWithIndex(index int) {
	defer runtime.KeepAlive(this)
	C.QGeoPolygon_removeCoordinateWithIndex(this.h, (C.int)(index))
}

func (this *QGeoPolygon) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoPolygon_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoPolygon) LengthWithIndexFrom(indexFrom int) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoPolygon_lengthWithIndexFrom(this.h, (C.int)(indexFrom)))
}

func (this *QGeoPolygon) Length2(indexFrom int, indexTo int) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoPolygon_length2(this.h, (C.int)(indexFrom), (C.int)(indexTo)))
}

// Delete this object from C++ memory.
func (this *QGeoPolygon) Delete() {
	C.QGeoPolygon_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoPolygon) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoPolygon_delete((*C.QGeoPolygon)(gc[0]))
	})
	this.miqtSetGC(gc)
}
