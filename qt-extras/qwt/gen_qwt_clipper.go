package qwt

/*

#include "gen_qwt_clipper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtClipper struct {
	h  *C.QwtClipper
	gc *[1]*C.QwtClipper
}

func (this *QwtClipper) cPointer() *C.QwtClipper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtClipper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtClipper constructs the type using only CGO pointers.
func newQwtClipper(h *C.QwtClipper) *QwtClipper {
	if h == nil {
		return nil
	}

	return &QwtClipper{h: h}
}

// UnsafeNewQwtClipper constructs the type using only unsafe pointers.
func UnsafeNewQwtClipper(h unsafe.Pointer) *QwtClipper {
	return newQwtClipper((*C.QwtClipper)(h))
}

func QwtClipper_ClipCircle(param1 *qt.QRectF, param2 *qt.QPointF, radius float64) []QwtInterval {
	var _ma C.struct_miqt_array = C.QwtClipper_clipCircle((*C.QRectF)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), (C.double)(radius))
	_ret := make([]QwtInterval, int(_ma.len))
	_outCast := unsafe.Slice((**C.QwtInterval)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQwtInterval(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QwtClipper) Delete() {
	C.QwtClipper_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtClipper) GoGC() {
	if this.gc != nil {
		return
	}
	this.gc = &[1]*C.QwtClipper{this.h}
	runtime.SetFinalizer(this.gc, func(gc *[1]*C.QwtClipper) {
		C.QwtClipper_delete(gc[0])
	})
}
