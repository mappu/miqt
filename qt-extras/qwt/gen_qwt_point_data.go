package qwt

/*

#include "gen_qwt_point_data.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPointArrayData struct {
	h *C.QwtPointArrayData
}

func (this *QwtPointArrayData) cPointer() *C.QwtPointArrayData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPointArrayData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPointArrayData constructs the type using only CGO pointers.
func newQwtPointArrayData(h *C.QwtPointArrayData) *QwtPointArrayData {
	if h == nil {
		return nil
	}

	return &QwtPointArrayData{h: h}
}

// UnsafeNewQwtPointArrayData constructs the type using only unsafe pointers.
func UnsafeNewQwtPointArrayData(h unsafe.Pointer) *QwtPointArrayData {
	return newQwtPointArrayData((*C.QwtPointArrayData)(h))
}

// NewQwtPointArrayData constructs a new QwtPointArrayData object.
func NewQwtPointArrayData(x []float64, y []float64) *QwtPointArrayData {
	x_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(x))))
	defer C.free(unsafe.Pointer(x_CArray))
	for i := range x {
		x_CArray[i] = (C.double)(x[i])
	}
	x_ma := C.struct_miqt_array{len: C.size_t(len(x)), data: unsafe.Pointer(x_CArray)}
	y_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(y))))
	defer C.free(unsafe.Pointer(y_CArray))
	for i := range y {
		y_CArray[i] = (C.double)(y[i])
	}
	y_ma := C.struct_miqt_array{len: C.size_t(len(y)), data: unsafe.Pointer(y_CArray)}

	return newQwtPointArrayData(C.QwtPointArrayData_new(x_ma, y_ma))
}

// NewQwtPointArrayData2 constructs a new QwtPointArrayData object.
func NewQwtPointArrayData2(x *float64, y *float64, size uint64) *QwtPointArrayData {

	return newQwtPointArrayData(C.QwtPointArrayData_new2((*C.double)(unsafe.Pointer(x)), (*C.double)(unsafe.Pointer(y)), (C.size_t)(size)))
}

// NewQwtPointArrayData3 constructs a new QwtPointArrayData object.
func NewQwtPointArrayData3(param1 *QwtPointArrayData) *QwtPointArrayData {

	return newQwtPointArrayData(C.QwtPointArrayData_new3(param1.cPointer()))
}

func (this *QwtPointArrayData) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPointArrayData_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPointArrayData) Size() uint64 {
	return (uint64)(C.QwtPointArrayData_size(this.h))
}

func (this *QwtPointArrayData) Sample(index uint64) *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtPointArrayData_sample(this.h, (C.size_t)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPointArrayData) XData() []float64 {
	var _ma C.struct_miqt_array = C.QwtPointArrayData_xData(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtPointArrayData) YData() []float64 {
	var _ma C.struct_miqt_array = C.QwtPointArrayData_yData(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtPointArrayData) callVirtualBase_BoundingRect() *qt.QRectF {

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPointArrayData_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPointArrayData) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QwtPointArrayData_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPointArrayData_boundingRect
func miqt_exec_callback_QwtPointArrayData_boundingRect(self *C.QwtPointArrayData, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPointArrayData{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QwtPointArrayData) callVirtualBase_Size() uint64 {

	return (uint64)(C.QwtPointArrayData_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QwtPointArrayData) OnSize(slot func(super func() uint64) uint64) {
	ok := C.QwtPointArrayData_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPointArrayData_size
func miqt_exec_callback_QwtPointArrayData_size(self *C.QwtPointArrayData, cb C.intptr_t) C.size_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uint64) uint64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPointArrayData{h: self}).callVirtualBase_Size)

	return (C.size_t)(virtualReturn)

}

func (this *QwtPointArrayData) callVirtualBase_Sample(index uint64) *qt.QPointF {

	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtPointArrayData_virtualbase_sample(unsafe.Pointer(this.h), (C.size_t)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPointArrayData) OnSample(slot func(super func(index uint64) *qt.QPointF, index uint64) *qt.QPointF) {
	ok := C.QwtPointArrayData_override_virtual_sample(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPointArrayData_sample
func miqt_exec_callback_QwtPointArrayData_sample(self *C.QwtPointArrayData, cb C.intptr_t, index C.size_t) *C.QPointF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index uint64) *qt.QPointF, index uint64) *qt.QPointF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(index)

	virtualReturn := gofunc((&QwtPointArrayData{h: self}).callVirtualBase_Sample, slotval1)

	return (*C.QPointF)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QwtPointArrayData) Delete() {
	C.QwtPointArrayData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPointArrayData) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPointArrayData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtCPointerData struct {
	h *C.QwtCPointerData
}

func (this *QwtCPointerData) cPointer() *C.QwtCPointerData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtCPointerData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtCPointerData constructs the type using only CGO pointers.
func newQwtCPointerData(h *C.QwtCPointerData) *QwtCPointerData {
	if h == nil {
		return nil
	}

	return &QwtCPointerData{h: h}
}

// UnsafeNewQwtCPointerData constructs the type using only unsafe pointers.
func UnsafeNewQwtCPointerData(h unsafe.Pointer) *QwtCPointerData {
	return newQwtCPointerData((*C.QwtCPointerData)(h))
}

// NewQwtCPointerData constructs a new QwtCPointerData object.
func NewQwtCPointerData(x *float64, y *float64, size uint64) *QwtCPointerData {

	return newQwtCPointerData(C.QwtCPointerData_new((*C.double)(unsafe.Pointer(x)), (*C.double)(unsafe.Pointer(y)), (C.size_t)(size)))
}

// NewQwtCPointerData2 constructs a new QwtCPointerData object.
func NewQwtCPointerData2(param1 *QwtCPointerData) *QwtCPointerData {

	return newQwtCPointerData(C.QwtCPointerData_new2(param1.cPointer()))
}

func (this *QwtCPointerData) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtCPointerData_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtCPointerData) Size() uint64 {
	return (uint64)(C.QwtCPointerData_size(this.h))
}

func (this *QwtCPointerData) Sample(index uint64) *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtCPointerData_sample(this.h, (C.size_t)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtCPointerData) XData() *float64 {
	return (*float64)(unsafe.Pointer(C.QwtCPointerData_xData(this.h)))
}

func (this *QwtCPointerData) YData() *float64 {
	return (*float64)(unsafe.Pointer(C.QwtCPointerData_yData(this.h)))
}

func (this *QwtCPointerData) callVirtualBase_BoundingRect() *qt.QRectF {

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtCPointerData_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtCPointerData) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QwtCPointerData_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCPointerData_boundingRect
func miqt_exec_callback_QwtCPointerData_boundingRect(self *C.QwtCPointerData, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtCPointerData{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QwtCPointerData) callVirtualBase_Size() uint64 {

	return (uint64)(C.QwtCPointerData_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QwtCPointerData) OnSize(slot func(super func() uint64) uint64) {
	ok := C.QwtCPointerData_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCPointerData_size
func miqt_exec_callback_QwtCPointerData_size(self *C.QwtCPointerData, cb C.intptr_t) C.size_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uint64) uint64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtCPointerData{h: self}).callVirtualBase_Size)

	return (C.size_t)(virtualReturn)

}

func (this *QwtCPointerData) callVirtualBase_Sample(index uint64) *qt.QPointF {

	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtCPointerData_virtualbase_sample(unsafe.Pointer(this.h), (C.size_t)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtCPointerData) OnSample(slot func(super func(index uint64) *qt.QPointF, index uint64) *qt.QPointF) {
	ok := C.QwtCPointerData_override_virtual_sample(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCPointerData_sample
func miqt_exec_callback_QwtCPointerData_sample(self *C.QwtCPointerData, cb C.intptr_t, index C.size_t) *C.QPointF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index uint64) *qt.QPointF, index uint64) *qt.QPointF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(index)

	virtualReturn := gofunc((&QwtCPointerData{h: self}).callVirtualBase_Sample, slotval1)

	return (*C.QPointF)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QwtCPointerData) Delete() {
	C.QwtCPointerData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtCPointerData) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtCPointerData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtSyntheticPointData struct {
	h *C.QwtSyntheticPointData
}

func (this *QwtSyntheticPointData) cPointer() *C.QwtSyntheticPointData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSyntheticPointData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSyntheticPointData constructs the type using only CGO pointers.
func newQwtSyntheticPointData(h *C.QwtSyntheticPointData) *QwtSyntheticPointData {
	if h == nil {
		return nil
	}

	return &QwtSyntheticPointData{h: h}
}

// UnsafeNewQwtSyntheticPointData constructs the type using only unsafe pointers.
func UnsafeNewQwtSyntheticPointData(h unsafe.Pointer) *QwtSyntheticPointData {
	return newQwtSyntheticPointData((*C.QwtSyntheticPointData)(h))
}

// NewQwtSyntheticPointData constructs a new QwtSyntheticPointData object.
func NewQwtSyntheticPointData(size uint64) *QwtSyntheticPointData {

	return newQwtSyntheticPointData(C.QwtSyntheticPointData_new((C.size_t)(size)))
}

// NewQwtSyntheticPointData2 constructs a new QwtSyntheticPointData object.
func NewQwtSyntheticPointData2(param1 *QwtSyntheticPointData) *QwtSyntheticPointData {

	return newQwtSyntheticPointData(C.QwtSyntheticPointData_new2(param1.cPointer()))
}

// NewQwtSyntheticPointData3 constructs a new QwtSyntheticPointData object.
func NewQwtSyntheticPointData3(size uint64, param2 *QwtInterval) *QwtSyntheticPointData {

	return newQwtSyntheticPointData(C.QwtSyntheticPointData_new3((C.size_t)(size), param2.cPointer()))
}

func (this *QwtSyntheticPointData) SetSize(size uint64) {
	C.QwtSyntheticPointData_setSize(this.h, (C.size_t)(size))
}

func (this *QwtSyntheticPointData) Size() uint64 {
	return (uint64)(C.QwtSyntheticPointData_size(this.h))
}

func (this *QwtSyntheticPointData) SetInterval(interval *QwtInterval) {
	C.QwtSyntheticPointData_setInterval(this.h, interval.cPointer())
}

func (this *QwtSyntheticPointData) Interval() *QwtInterval {
	_goptr := newQwtInterval(C.QwtSyntheticPointData_interval(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSyntheticPointData) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtSyntheticPointData_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSyntheticPointData) Sample(index uint64) *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtSyntheticPointData_sample(this.h, (C.size_t)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSyntheticPointData) Y(x float64) float64 {
	return (float64)(C.QwtSyntheticPointData_y(this.h, (C.double)(x)))
}

func (this *QwtSyntheticPointData) X(index uint) float64 {
	return (float64)(C.QwtSyntheticPointData_x(this.h, (C.uint)(index)))
}

func (this *QwtSyntheticPointData) SetRectOfInterest(rectOfInterest *qt.QRectF) {
	C.QwtSyntheticPointData_setRectOfInterest(this.h, (*C.QRectF)(rectOfInterest.UnsafePointer()))
}

func (this *QwtSyntheticPointData) RectOfInterest() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtSyntheticPointData_rectOfInterest(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSyntheticPointData) callVirtualBase_Size() uint64 {

	return (uint64)(C.QwtSyntheticPointData_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QwtSyntheticPointData) OnSize(slot func(super func() uint64) uint64) {
	ok := C.QwtSyntheticPointData_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSyntheticPointData_size
func miqt_exec_callback_QwtSyntheticPointData_size(self *C.QwtSyntheticPointData, cb C.intptr_t) C.size_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uint64) uint64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSyntheticPointData{h: self}).callVirtualBase_Size)

	return (C.size_t)(virtualReturn)

}

func (this *QwtSyntheticPointData) callVirtualBase_BoundingRect() *qt.QRectF {

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtSyntheticPointData_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtSyntheticPointData) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QwtSyntheticPointData_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSyntheticPointData_boundingRect
func miqt_exec_callback_QwtSyntheticPointData_boundingRect(self *C.QwtSyntheticPointData, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSyntheticPointData{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QwtSyntheticPointData) callVirtualBase_Sample(index uint64) *qt.QPointF {

	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtSyntheticPointData_virtualbase_sample(unsafe.Pointer(this.h), (C.size_t)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtSyntheticPointData) OnSample(slot func(super func(index uint64) *qt.QPointF, index uint64) *qt.QPointF) {
	ok := C.QwtSyntheticPointData_override_virtual_sample(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSyntheticPointData_sample
func miqt_exec_callback_QwtSyntheticPointData_sample(self *C.QwtSyntheticPointData, cb C.intptr_t, index C.size_t) *C.QPointF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index uint64) *qt.QPointF, index uint64) *qt.QPointF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(index)

	virtualReturn := gofunc((&QwtSyntheticPointData{h: self}).callVirtualBase_Sample, slotval1)

	return (*C.QPointF)(virtualReturn.UnsafePointer())

}
func (this *QwtSyntheticPointData) OnY(slot func(x float64) float64) {
	ok := C.QwtSyntheticPointData_override_virtual_y(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSyntheticPointData_y
func miqt_exec_callback_QwtSyntheticPointData_y(self *C.QwtSyntheticPointData, cb C.intptr_t, x C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(x float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(x)

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtSyntheticPointData) callVirtualBase_X(index uint) float64 {

	return (float64)(C.QwtSyntheticPointData_virtualbase_x(unsafe.Pointer(this.h), (C.uint)(index)))

}
func (this *QwtSyntheticPointData) OnX(slot func(super func(index uint) float64, index uint) float64) {
	ok := C.QwtSyntheticPointData_override_virtual_x(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSyntheticPointData_x
func miqt_exec_callback_QwtSyntheticPointData_x(self *C.QwtSyntheticPointData, cb C.intptr_t, index C.uint) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index uint) float64, index uint) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint)(index)

	virtualReturn := gofunc((&QwtSyntheticPointData{h: self}).callVirtualBase_X, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtSyntheticPointData) callVirtualBase_SetRectOfInterest(rectOfInterest *qt.QRectF) {

	C.QwtSyntheticPointData_virtualbase_setRectOfInterest(unsafe.Pointer(this.h), (*C.QRectF)(rectOfInterest.UnsafePointer()))

}
func (this *QwtSyntheticPointData) OnSetRectOfInterest(slot func(super func(rectOfInterest *qt.QRectF), rectOfInterest *qt.QRectF)) {
	ok := C.QwtSyntheticPointData_override_virtual_setRectOfInterest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSyntheticPointData_setRectOfInterest
func miqt_exec_callback_QwtSyntheticPointData_setRectOfInterest(self *C.QwtSyntheticPointData, cb C.intptr_t, rectOfInterest *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rectOfInterest *qt.QRectF), rectOfInterest *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(rectOfInterest))

	gofunc((&QwtSyntheticPointData{h: self}).callVirtualBase_SetRectOfInterest, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtSyntheticPointData) Delete() {
	C.QwtSyntheticPointData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtSyntheticPointData) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtSyntheticPointData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
