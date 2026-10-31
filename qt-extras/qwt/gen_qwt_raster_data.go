package qwt

/*

#include "gen_qwt_raster_data.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtRasterData__ConrecFlag int

const (
	QwtRasterData__IgnoreAllVerticesOnLevel QwtRasterData__ConrecFlag = 1
	QwtRasterData__IgnoreOutOfRange         QwtRasterData__ConrecFlag = 2
)

type QwtRasterData struct {
	h  *C.QwtRasterData
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtRasterData) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtRasterData) cPointer() *C.QwtRasterData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtRasterData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtRasterData constructs the type using only CGO pointers.
func newQwtRasterData(h *C.QwtRasterData) *QwtRasterData {
	if h == nil {
		return nil
	}

	return &QwtRasterData{h: h}
}

// UnsafeNewQwtRasterData constructs the type using only unsafe pointers.
func UnsafeNewQwtRasterData(h unsafe.Pointer) *QwtRasterData {
	return newQwtRasterData((*C.QwtRasterData)(h))
}

// NewQwtRasterData constructs a new QwtRasterData object.
func NewQwtRasterData() *QwtRasterData {

	return newQwtRasterData(C.QwtRasterData_new())
}

func (this *QwtRasterData) SetInterval(param1 qt.Axis, param2 *QwtInterval) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param2)
	C.QwtRasterData_setInterval(this.h, (C.int)(param1), param2.cPointer())
}

func (this *QwtRasterData) Interval(param1 qt.Axis) *QwtInterval {
	defer runtime.KeepAlive(this)
	_ret := newQwtInterval(C.QwtRasterData_interval(this.h, (C.int)(param1)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QwtRasterData) PixelHint(param1 qt.QRectF) qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtRasterData_pixelHint(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](param1)))
}

func (this *QwtRasterData) InitRaster(param1 qt.QRectF, raster qt.QSize) {
	defer runtime.KeepAlive(this)
	C.QwtRasterData_initRaster(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](param1), libmiqt.ValueCast[C.struct_miqt_qsize](raster))
}

func (this *QwtRasterData) DiscardRaster() {
	defer runtime.KeepAlive(this)
	C.QwtRasterData_discardRaster(this.h)
}

func (this *QwtRasterData) Value(x float64, y float64) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtRasterData_value(this.h, (C.double)(x), (C.double)(y)))
}

func (this *QwtRasterData) callVirtualBase_SetInterval(param1 qt.Axis, param2 *QwtInterval) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param2)

	C.QwtRasterData_virtualbase_setInterval(unsafe.Pointer(this.h), (C.int)(param1), param2.cPointer())

}
func (this *QwtRasterData) OnSetInterval(slot func(super func(param1 qt.Axis, param2 *QwtInterval), param1 qt.Axis, param2 *QwtInterval)) {
	ok := C.QwtRasterData_override_virtual_setInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRasterData_setInterval
func miqt_exec_callback_QwtRasterData_setInterval(self *C.QwtRasterData, cb C.intptr_t, param1 C.int, param2 *C.QwtInterval) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.Axis, param2 *QwtInterval), param1 qt.Axis, param2 *QwtInterval))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.Axis)(param1)

	slotval2 := newQwtInterval(param2)

	gofunc((&QwtRasterData{h: self}).callVirtualBase_SetInterval, slotval1, slotval2)

}

func (this *QwtRasterData) callVirtualBase_PixelHint(param1 qt.QRectF) qt.QRectF {
	defer runtime.KeepAlive(this)

	return libmiqt.ValueCast[qt.QRectF](C.QwtRasterData_virtualbase_pixelHint(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qrectf](param1)))

}
func (this *QwtRasterData) OnPixelHint(slot func(super func(param1 qt.QRectF) qt.QRectF, param1 qt.QRectF) qt.QRectF) {
	ok := C.QwtRasterData_override_virtual_pixelHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRasterData_pixelHint
func miqt_exec_callback_QwtRasterData_pixelHint(self *C.QwtRasterData, cb C.intptr_t, param1 C.struct_miqt_qrectf) C.struct_miqt_qrectf {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QRectF) qt.QRectF, param1 qt.QRectF) qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QRectF](param1)

	virtualReturn := gofunc((&QwtRasterData{h: self}).callVirtualBase_PixelHint, slotval1)

	return libmiqt.ValueCast[C.struct_miqt_qrectf](virtualReturn)

}

func (this *QwtRasterData) callVirtualBase_InitRaster(param1 qt.QRectF, raster qt.QSize) {
	defer runtime.KeepAlive(this)

	C.QwtRasterData_virtualbase_initRaster(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qrectf](param1), libmiqt.ValueCast[C.struct_miqt_qsize](raster))

}
func (this *QwtRasterData) OnInitRaster(slot func(super func(param1 qt.QRectF, raster qt.QSize), param1 qt.QRectF, raster qt.QSize)) {
	ok := C.QwtRasterData_override_virtual_initRaster(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRasterData_initRaster
func miqt_exec_callback_QwtRasterData_initRaster(self *C.QwtRasterData, cb C.intptr_t, param1 C.struct_miqt_qrectf, raster C.struct_miqt_qsize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QRectF, raster qt.QSize), param1 qt.QRectF, raster qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QRectF](param1)

	slotval2 := libmiqt.ValueCast[qt.QSize](raster)

	gofunc((&QwtRasterData{h: self}).callVirtualBase_InitRaster, slotval1, slotval2)

}

func (this *QwtRasterData) callVirtualBase_DiscardRaster() {
	defer runtime.KeepAlive(this)

	C.QwtRasterData_virtualbase_discardRaster(unsafe.Pointer(this.h))

}
func (this *QwtRasterData) OnDiscardRaster(slot func(super func())) {
	ok := C.QwtRasterData_override_virtual_discardRaster(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRasterData_discardRaster
func miqt_exec_callback_QwtRasterData_discardRaster(self *C.QwtRasterData, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtRasterData{h: self}).callVirtualBase_DiscardRaster)

}
func (this *QwtRasterData) OnValue(slot func(x float64, y float64) float64) {
	ok := C.QwtRasterData_override_virtual_value(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRasterData_value
func miqt_exec_callback_QwtRasterData_value(self *C.QwtRasterData, cb C.intptr_t, x C.double, y C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(x float64, y float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(x)

	slotval2 := (float64)(y)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.double)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QwtRasterData) Delete() {
	C.QwtRasterData_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtRasterData) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtRasterData_delete((*C.QwtRasterData)(gc[0]))
	})
	this.miqtSetGC(gc)
}
