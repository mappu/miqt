package qwt

/*

#include "gen_qwt_matrix_raster_data.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtMatrixRasterData__ResampleMode int

const (
	QwtMatrixRasterData__NearestNeighbour      QwtMatrixRasterData__ResampleMode = 0
	QwtMatrixRasterData__BilinearInterpolation QwtMatrixRasterData__ResampleMode = 1
)

type QwtMatrixRasterData struct {
	h *C.QwtMatrixRasterData
	*QwtRasterData
}

func (this *QwtMatrixRasterData) cPointer() *C.QwtMatrixRasterData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtMatrixRasterData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtMatrixRasterData constructs the type using only CGO pointers.
func newQwtMatrixRasterData(h *C.QwtMatrixRasterData) *QwtMatrixRasterData {
	if h == nil {
		return nil
	}
	var outptr_QwtRasterData *C.QwtRasterData = nil
	C.QwtMatrixRasterData_virtbase(h, &outptr_QwtRasterData)

	return &QwtMatrixRasterData{h: h,
		QwtRasterData: newQwtRasterData(outptr_QwtRasterData)}
}

// UnsafeNewQwtMatrixRasterData constructs the type using only unsafe pointers.
func UnsafeNewQwtMatrixRasterData(h unsafe.Pointer) *QwtMatrixRasterData {
	return newQwtMatrixRasterData((*C.QwtMatrixRasterData)(h))
}

// NewQwtMatrixRasterData constructs a new QwtMatrixRasterData object.
func NewQwtMatrixRasterData() *QwtMatrixRasterData {

	return newQwtMatrixRasterData(C.QwtMatrixRasterData_new())
}

func (this *QwtMatrixRasterData) SetResampleMode(mode QwtMatrixRasterData__ResampleMode) {
	C.QwtMatrixRasterData_setResampleMode(this.h, (C.int)(mode))
}

func (this *QwtMatrixRasterData) ResampleMode() QwtMatrixRasterData__ResampleMode {
	return (QwtMatrixRasterData__ResampleMode)(C.QwtMatrixRasterData_resampleMode(this.h))
}

func (this *QwtMatrixRasterData) SetInterval(param1 qt.Axis, param2 *QwtInterval) {
	C.QwtMatrixRasterData_setInterval(this.h, (C.int)(param1), param2.cPointer())
}

func (this *QwtMatrixRasterData) SetValueMatrix(values []float64, numColumns int) {
	values_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(values))))
	defer C.free(unsafe.Pointer(values_CArray))
	for i := range values {
		values_CArray[i] = (C.double)(values[i])
	}
	values_ma := C.struct_miqt_array{len: C.size_t(len(values)), data: unsafe.Pointer(values_CArray)}
	C.QwtMatrixRasterData_setValueMatrix(this.h, values_ma, (C.int)(numColumns))
}

func (this *QwtMatrixRasterData) ValueMatrix() []float64 {
	var _ma C.struct_miqt_array = C.QwtMatrixRasterData_valueMatrix(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtMatrixRasterData) SetValue(row int, col int, value float64) {
	C.QwtMatrixRasterData_setValue(this.h, (C.int)(row), (C.int)(col), (C.double)(value))
}

func (this *QwtMatrixRasterData) NumColumns() int {
	return (int)(C.QwtMatrixRasterData_numColumns(this.h))
}

func (this *QwtMatrixRasterData) NumRows() int {
	return (int)(C.QwtMatrixRasterData_numRows(this.h))
}

func (this *QwtMatrixRasterData) PixelHint(param1 *qt.QRectF) *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtMatrixRasterData_pixelHint(this.h, (*C.QRectF)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtMatrixRasterData) Value(x float64, y float64) float64 {
	return (float64)(C.QwtMatrixRasterData_value(this.h, (C.double)(x), (C.double)(y)))
}

func (this *QwtMatrixRasterData) callVirtualBase_SetInterval(param1 qt.Axis, param2 *QwtInterval) {

	C.QwtMatrixRasterData_virtualbase_setInterval(unsafe.Pointer(this.h), (C.int)(param1), param2.cPointer())

}
func (this *QwtMatrixRasterData) OnSetInterval(slot func(super func(param1 qt.Axis, param2 *QwtInterval), param1 qt.Axis, param2 *QwtInterval)) {
	ok := C.QwtMatrixRasterData_override_virtual_setInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMatrixRasterData_setInterval
func miqt_exec_callback_QwtMatrixRasterData_setInterval(self *C.QwtMatrixRasterData, cb C.intptr_t, param1 C.int, param2 *C.QwtInterval) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.Axis, param2 *QwtInterval), param1 qt.Axis, param2 *QwtInterval))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.Axis)(param1)

	slotval2 := newQwtInterval(param2)

	gofunc((&QwtMatrixRasterData{h: self}).callVirtualBase_SetInterval, slotval1, slotval2)

}

func (this *QwtMatrixRasterData) callVirtualBase_PixelHint(param1 *qt.QRectF) *qt.QRectF {

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtMatrixRasterData_virtualbase_pixelHint(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtMatrixRasterData) OnPixelHint(slot func(super func(param1 *qt.QRectF) *qt.QRectF, param1 *qt.QRectF) *qt.QRectF) {
	ok := C.QwtMatrixRasterData_override_virtual_pixelHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMatrixRasterData_pixelHint
func miqt_exec_callback_QwtMatrixRasterData_pixelHint(self *C.QwtMatrixRasterData, cb C.intptr_t, param1 *C.QRectF) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF) *qt.QRectF, param1 *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtMatrixRasterData{h: self}).callVirtualBase_PixelHint, slotval1)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QwtMatrixRasterData) callVirtualBase_Value(x float64, y float64) float64 {

	return (float64)(C.QwtMatrixRasterData_virtualbase_value(unsafe.Pointer(this.h), (C.double)(x), (C.double)(y)))

}
func (this *QwtMatrixRasterData) OnValue(slot func(super func(x float64, y float64) float64, x float64, y float64) float64) {
	ok := C.QwtMatrixRasterData_override_virtual_value(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMatrixRasterData_value
func miqt_exec_callback_QwtMatrixRasterData_value(self *C.QwtMatrixRasterData, cb C.intptr_t, x C.double, y C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(x float64, y float64) float64, x float64, y float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(x)

	slotval2 := (float64)(y)

	virtualReturn := gofunc((&QwtMatrixRasterData{h: self}).callVirtualBase_Value, slotval1, slotval2)

	return (C.double)(virtualReturn)

}

func (this *QwtMatrixRasterData) callVirtualBase_InitRaster(param1 *qt.QRectF, raster *qt.QSize) {

	C.QwtMatrixRasterData_virtualbase_initRaster(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()), (*C.QSize)(raster.UnsafePointer()))

}
func (this *QwtMatrixRasterData) OnInitRaster(slot func(super func(param1 *qt.QRectF, raster *qt.QSize), param1 *qt.QRectF, raster *qt.QSize)) {
	ok := C.QwtMatrixRasterData_override_virtual_initRaster(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMatrixRasterData_initRaster
func miqt_exec_callback_QwtMatrixRasterData_initRaster(self *C.QwtMatrixRasterData, cb C.intptr_t, param1 *C.QRectF, raster *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF, raster *qt.QSize), param1 *qt.QRectF, raster *qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQSize(unsafe.Pointer(raster))

	gofunc((&QwtMatrixRasterData{h: self}).callVirtualBase_InitRaster, slotval1, slotval2)

}

func (this *QwtMatrixRasterData) callVirtualBase_DiscardRaster() {

	C.QwtMatrixRasterData_virtualbase_discardRaster(unsafe.Pointer(this.h))

}
func (this *QwtMatrixRasterData) OnDiscardRaster(slot func(super func())) {
	ok := C.QwtMatrixRasterData_override_virtual_discardRaster(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMatrixRasterData_discardRaster
func miqt_exec_callback_QwtMatrixRasterData_discardRaster(self *C.QwtMatrixRasterData, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtMatrixRasterData{h: self}).callVirtualBase_DiscardRaster)

}

// Delete this object from C++ memory.
func (this *QwtMatrixRasterData) Delete() {
	C.QwtMatrixRasterData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtMatrixRasterData) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtMatrixRasterData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
