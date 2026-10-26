package positioning

/*

#include "gen_qgeopath.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QGeoPath struct {
	h  *C.QGeoPath
	gc *[1]unsafe.Pointer
	*QGeoShape
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoPath) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGeoShape.miqtSetGC(gc)
}

func (this *QGeoPath) cPointer() *C.QGeoPath {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoPath) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoPath constructs the type using only CGO pointers.
func newQGeoPath(h *C.QGeoPath) *QGeoPath {
	if h == nil {
		return nil
	}
	var outptr_QGeoShape *C.QGeoShape = nil
	C.QGeoPath_virtbase(h, &outptr_QGeoShape)

	return &QGeoPath{h: h,
		QGeoShape: newQGeoShape(outptr_QGeoShape)}
}

// UnsafeNewQGeoPath constructs the type using only unsafe pointers.
func UnsafeNewQGeoPath(h unsafe.Pointer) *QGeoPath {
	return newQGeoPath((*C.QGeoPath)(h))
}

// NewQGeoPath constructs a new QGeoPath object.
func NewQGeoPath() *QGeoPath {

	return newQGeoPath(C.QGeoPath_new())
}

// NewQGeoPath2 constructs a new QGeoPath object.
func NewQGeoPath2(path []QGeoCoordinate) *QGeoPath {
	defer runtime.KeepAlive(path)
	path_CArray_ptr := (**C.QGeoCoordinate)(C.malloc(C.size_t(8 * len(path))))
	defer C.free(unsafe.Pointer(path_CArray_ptr))
	path_CArray := unsafe.Slice(path_CArray_ptr, len(path))
	for i := range path {
		path_CArray[i] = path[i].cPointer()
	}
	path_ma := C.struct_miqt_array{len: C.size_t(len(path)), data: unsafe.Pointer(path_CArray_ptr)}

	return newQGeoPath(C.QGeoPath_new2(path_ma))
}

// NewQGeoPath3 constructs a new QGeoPath object.
func NewQGeoPath3(other *QGeoPath) *QGeoPath {
	defer runtime.KeepAlive(other)

	return newQGeoPath(C.QGeoPath_new3(other.cPointer()))
}

// NewQGeoPath4 constructs a new QGeoPath object.
func NewQGeoPath4(other *QGeoShape) *QGeoPath {
	defer runtime.KeepAlive(other)

	return newQGeoPath(C.QGeoPath_new4(other.cPointer()))
}

// NewQGeoPath5 constructs a new QGeoPath object.
func NewQGeoPath5(path []QGeoCoordinate, width *float64) *QGeoPath {
	defer runtime.KeepAlive(path)
	path_CArray_ptr := (**C.QGeoCoordinate)(C.malloc(C.size_t(8 * len(path))))
	defer C.free(unsafe.Pointer(path_CArray_ptr))
	path_CArray := unsafe.Slice(path_CArray_ptr, len(path))
	for i := range path {
		path_CArray[i] = path[i].cPointer()
	}
	path_ma := C.struct_miqt_array{len: C.size_t(len(path)), data: unsafe.Pointer(path_CArray_ptr)}

	return newQGeoPath(C.QGeoPath_new5(path_ma, (*C.double)(unsafe.Pointer(width))))
}

func (this *QGeoPath) OperatorAssign(other *QGeoPath) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoPath_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoPath) OperatorEqual(other *QGeoPath) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoPath_operatorEqual(this.h, other.cPointer()))
}

func (this *QGeoPath) OperatorNotEqual(other *QGeoPath) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoPath_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGeoPath) SetPath(path []QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(path)
	path_CArray_ptr := (**C.QGeoCoordinate)(C.malloc(C.size_t(8 * len(path))))
	defer C.free(unsafe.Pointer(path_CArray_ptr))
	path_CArray := unsafe.Slice(path_CArray_ptr, len(path))
	for i := range path {
		path_CArray[i] = path[i].cPointer()
	}
	path_ma := C.struct_miqt_array{len: C.size_t(len(path)), data: unsafe.Pointer(path_CArray_ptr)}
	C.QGeoPath_setPath(this.h, path_ma)
}

func (this *QGeoPath) Path() []QGeoCoordinate {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QGeoPath_path(this.h)
	_ret := make([]QGeoCoordinate, int(_ma.len))
	_outCast := unsafe.Slice((**C.QGeoCoordinate)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGeoCoordinate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QGeoPath) ClearPath() {
	defer runtime.KeepAlive(this)
	C.QGeoPath_clearPath(this.h)
}

func (this *QGeoPath) SetVariantPath(path []qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(path)
	path_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(path))))
	defer C.free(unsafe.Pointer(path_CArray_ptr))
	path_CArray := unsafe.Slice(path_CArray_ptr, len(path))
	for i := range path {
		path_CArray[i] = (*C.QVariant)(path[i].UnsafePointer())
	}
	path_ma := C.struct_miqt_array{len: C.size_t(len(path)), data: unsafe.Pointer(path_CArray_ptr)}
	C.QGeoPath_setVariantPath(this.h, path_ma)
}

func (this *QGeoPath) VariantPath() []qt.QVariant {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QGeoPath_variantPath(this.h)
	_ret := make([]qt.QVariant, int(_ma.len))
	_outCast := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QGeoPath) SetWidth(width *float64) {
	defer runtime.KeepAlive(this)
	C.QGeoPath_setWidth(this.h, (*C.double)(unsafe.Pointer(width)))
}

func (this *QGeoPath) Width() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoPath_width(this.h))
}

func (this *QGeoPath) Translate(degreesLatitude float64, degreesLongitude float64) {
	defer runtime.KeepAlive(this)
	C.QGeoPath_translate(this.h, (C.double)(degreesLatitude), (C.double)(degreesLongitude))
}

func (this *QGeoPath) Translated(degreesLatitude float64, degreesLongitude float64) *QGeoPath {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoPath(C.QGeoPath_translated(this.h, (C.double)(degreesLatitude), (C.double)(degreesLongitude)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoPath) Length() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoPath_length(this.h))
}

func (this *QGeoPath) Size() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QGeoPath_size(this.h))
}

func (this *QGeoPath) AddCoordinate(coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoPath_addCoordinate(this.h, coordinate.cPointer())
}

func (this *QGeoPath) InsertCoordinate(index int, coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoPath_insertCoordinate(this.h, (C.int)(index), coordinate.cPointer())
}

func (this *QGeoPath) ReplaceCoordinate(index int, coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoPath_replaceCoordinate(this.h, (C.int)(index), coordinate.cPointer())
}

func (this *QGeoPath) CoordinateAt(index int) *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoPath_coordinateAt(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoPath) ContainsCoordinate(coordinate *QGeoCoordinate) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	return (bool)(C.QGeoPath_containsCoordinate(this.h, coordinate.cPointer()))
}

func (this *QGeoPath) RemoveCoordinate(coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoPath_removeCoordinate(this.h, coordinate.cPointer())
}

func (this *QGeoPath) RemoveCoordinateWithIndex(index int) {
	defer runtime.KeepAlive(this)
	C.QGeoPath_removeCoordinateWithIndex(this.h, (C.int)(index))
}

func (this *QGeoPath) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoPath_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoPath) LengthWithIndexFrom(indexFrom int) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoPath_lengthWithIndexFrom(this.h, (C.int)(indexFrom)))
}

func (this *QGeoPath) Length2(indexFrom int, indexTo int) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoPath_length2(this.h, (C.int)(indexFrom), (C.int)(indexTo)))
}

// Delete this object from C++ memory.
func (this *QGeoPath) Delete() {
	C.QGeoPath_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoPath) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoPath_delete((*C.QGeoPath)(gc[0]))
	})
	this.miqtSetGC(gc)
}
