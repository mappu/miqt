package qwt

/*

#include "gen_qwt_series_data.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPointSeriesData struct {
	h  *C.QwtPointSeriesData
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPointSeriesData) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtPointSeriesData) cPointer() *C.QwtPointSeriesData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPointSeriesData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPointSeriesData constructs the type using only CGO pointers.
func newQwtPointSeriesData(h *C.QwtPointSeriesData) *QwtPointSeriesData {
	if h == nil {
		return nil
	}

	return &QwtPointSeriesData{h: h}
}

// UnsafeNewQwtPointSeriesData constructs the type using only unsafe pointers.
func UnsafeNewQwtPointSeriesData(h unsafe.Pointer) *QwtPointSeriesData {
	return newQwtPointSeriesData((*C.QwtPointSeriesData)(h))
}

// NewQwtPointSeriesData constructs a new QwtPointSeriesData object.
func NewQwtPointSeriesData() *QwtPointSeriesData {

	return newQwtPointSeriesData(C.QwtPointSeriesData_new())
}

// NewQwtPointSeriesData2 constructs a new QwtPointSeriesData object.
func NewQwtPointSeriesData2(param1 []qt.QPointF) *QwtPointSeriesData {
	defer runtime.KeepAlive(param1)
	param1_CArray_ptr := (**C.QPointF)(C.malloc(C.size_t(8 * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray_ptr))
	param1_CArray := unsafe.Slice(param1_CArray_ptr, len(param1))
	for i := range param1 {
		param1_CArray[i] = (*C.QPointF)(param1[i].UnsafePointer())
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray_ptr)}

	return newQwtPointSeriesData(C.QwtPointSeriesData_new2(param1_ma))
}

func (this *QwtPointSeriesData) BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPointSeriesData_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPointSeriesData) callVirtualBase_BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPointSeriesData_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPointSeriesData) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QwtPointSeriesData_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPointSeriesData_boundingRect
func miqt_exec_callback_QwtPointSeriesData_boundingRect(self *C.QwtPointSeriesData, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPointSeriesData{h: self}).callVirtualBase_BoundingRect)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtPointSeriesData_virtualreturncopy_QRectF((*C.QRectF)(virtualReturn.UnsafePointer()))

}

// Delete this object from C++ memory.
func (this *QwtPointSeriesData) Delete() {
	C.QwtPointSeriesData_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPointSeriesData) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPointSeriesData_delete((*C.QwtPointSeriesData)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QwtPoint3DSeriesData struct {
	h  *C.QwtPoint3DSeriesData
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPoint3DSeriesData) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtPoint3DSeriesData) cPointer() *C.QwtPoint3DSeriesData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPoint3DSeriesData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPoint3DSeriesData constructs the type using only CGO pointers.
func newQwtPoint3DSeriesData(h *C.QwtPoint3DSeriesData) *QwtPoint3DSeriesData {
	if h == nil {
		return nil
	}

	return &QwtPoint3DSeriesData{h: h}
}

// UnsafeNewQwtPoint3DSeriesData constructs the type using only unsafe pointers.
func UnsafeNewQwtPoint3DSeriesData(h unsafe.Pointer) *QwtPoint3DSeriesData {
	return newQwtPoint3DSeriesData((*C.QwtPoint3DSeriesData)(h))
}

// NewQwtPoint3DSeriesData constructs a new QwtPoint3DSeriesData object.
func NewQwtPoint3DSeriesData() *QwtPoint3DSeriesData {

	return newQwtPoint3DSeriesData(C.QwtPoint3DSeriesData_new())
}

// NewQwtPoint3DSeriesData2 constructs a new QwtPoint3DSeriesData object.
func NewQwtPoint3DSeriesData2(param1 []QwtPoint3D) *QwtPoint3DSeriesData {
	defer runtime.KeepAlive(param1)
	param1_CArray_ptr := (**C.QwtPoint3D)(C.malloc(C.size_t(8 * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray_ptr))
	param1_CArray := unsafe.Slice(param1_CArray_ptr, len(param1))
	for i := range param1 {
		param1_CArray[i] = param1[i].cPointer()
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray_ptr)}

	return newQwtPoint3DSeriesData(C.QwtPoint3DSeriesData_new2(param1_ma))
}

func (this *QwtPoint3DSeriesData) BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPoint3DSeriesData_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPoint3DSeriesData) callVirtualBase_BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPoint3DSeriesData_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPoint3DSeriesData) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QwtPoint3DSeriesData_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPoint3DSeriesData_boundingRect
func miqt_exec_callback_QwtPoint3DSeriesData_boundingRect(self *C.QwtPoint3DSeriesData, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPoint3DSeriesData{h: self}).callVirtualBase_BoundingRect)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtPoint3DSeriesData_virtualreturncopy_QRectF((*C.QRectF)(virtualReturn.UnsafePointer()))

}

// Delete this object from C++ memory.
func (this *QwtPoint3DSeriesData) Delete() {
	C.QwtPoint3DSeriesData_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPoint3DSeriesData) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPoint3DSeriesData_delete((*C.QwtPoint3DSeriesData)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QwtIntervalSeriesData struct {
	h  *C.QwtIntervalSeriesData
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtIntervalSeriesData) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtIntervalSeriesData) cPointer() *C.QwtIntervalSeriesData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtIntervalSeriesData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtIntervalSeriesData constructs the type using only CGO pointers.
func newQwtIntervalSeriesData(h *C.QwtIntervalSeriesData) *QwtIntervalSeriesData {
	if h == nil {
		return nil
	}

	return &QwtIntervalSeriesData{h: h}
}

// UnsafeNewQwtIntervalSeriesData constructs the type using only unsafe pointers.
func UnsafeNewQwtIntervalSeriesData(h unsafe.Pointer) *QwtIntervalSeriesData {
	return newQwtIntervalSeriesData((*C.QwtIntervalSeriesData)(h))
}

// NewQwtIntervalSeriesData constructs a new QwtIntervalSeriesData object.
func NewQwtIntervalSeriesData() *QwtIntervalSeriesData {

	return newQwtIntervalSeriesData(C.QwtIntervalSeriesData_new())
}

// NewQwtIntervalSeriesData2 constructs a new QwtIntervalSeriesData object.
func NewQwtIntervalSeriesData2(param1 []QwtIntervalSample) *QwtIntervalSeriesData {
	defer runtime.KeepAlive(param1)
	param1_CArray_ptr := (**C.QwtIntervalSample)(C.malloc(C.size_t(8 * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray_ptr))
	param1_CArray := unsafe.Slice(param1_CArray_ptr, len(param1))
	for i := range param1 {
		param1_CArray[i] = param1[i].cPointer()
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray_ptr)}

	return newQwtIntervalSeriesData(C.QwtIntervalSeriesData_new2(param1_ma))
}

func (this *QwtIntervalSeriesData) BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtIntervalSeriesData_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtIntervalSeriesData) callVirtualBase_BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtIntervalSeriesData_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtIntervalSeriesData) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QwtIntervalSeriesData_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtIntervalSeriesData_boundingRect
func miqt_exec_callback_QwtIntervalSeriesData_boundingRect(self *C.QwtIntervalSeriesData, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtIntervalSeriesData{h: self}).callVirtualBase_BoundingRect)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtIntervalSeriesData_virtualreturncopy_QRectF((*C.QRectF)(virtualReturn.UnsafePointer()))

}

// Delete this object from C++ memory.
func (this *QwtIntervalSeriesData) Delete() {
	C.QwtIntervalSeriesData_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtIntervalSeriesData) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtIntervalSeriesData_delete((*C.QwtIntervalSeriesData)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QwtSetSeriesData struct {
	h  *C.QwtSetSeriesData
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtSetSeriesData) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtSetSeriesData) cPointer() *C.QwtSetSeriesData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSetSeriesData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSetSeriesData constructs the type using only CGO pointers.
func newQwtSetSeriesData(h *C.QwtSetSeriesData) *QwtSetSeriesData {
	if h == nil {
		return nil
	}

	return &QwtSetSeriesData{h: h}
}

// UnsafeNewQwtSetSeriesData constructs the type using only unsafe pointers.
func UnsafeNewQwtSetSeriesData(h unsafe.Pointer) *QwtSetSeriesData {
	return newQwtSetSeriesData((*C.QwtSetSeriesData)(h))
}

// NewQwtSetSeriesData constructs a new QwtSetSeriesData object.
func NewQwtSetSeriesData() *QwtSetSeriesData {

	return newQwtSetSeriesData(C.QwtSetSeriesData_new())
}

// NewQwtSetSeriesData2 constructs a new QwtSetSeriesData object.
func NewQwtSetSeriesData2(param1 []QwtSetSample) *QwtSetSeriesData {
	defer runtime.KeepAlive(param1)
	param1_CArray_ptr := (**C.QwtSetSample)(C.malloc(C.size_t(8 * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray_ptr))
	param1_CArray := unsafe.Slice(param1_CArray_ptr, len(param1))
	for i := range param1 {
		param1_CArray[i] = param1[i].cPointer()
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray_ptr)}

	return newQwtSetSeriesData(C.QwtSetSeriesData_new2(param1_ma))
}

func (this *QwtSetSeriesData) BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtSetSeriesData_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSetSeriesData) callVirtualBase_BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtSetSeriesData_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtSetSeriesData) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QwtSetSeriesData_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSetSeriesData_boundingRect
func miqt_exec_callback_QwtSetSeriesData_boundingRect(self *C.QwtSetSeriesData, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSetSeriesData{h: self}).callVirtualBase_BoundingRect)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtSetSeriesData_virtualreturncopy_QRectF((*C.QRectF)(virtualReturn.UnsafePointer()))

}

// Delete this object from C++ memory.
func (this *QwtSetSeriesData) Delete() {
	C.QwtSetSeriesData_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtSetSeriesData) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtSetSeriesData_delete((*C.QwtSetSeriesData)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QwtTradingChartData struct {
	h  *C.QwtTradingChartData
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtTradingChartData) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtTradingChartData) cPointer() *C.QwtTradingChartData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtTradingChartData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtTradingChartData constructs the type using only CGO pointers.
func newQwtTradingChartData(h *C.QwtTradingChartData) *QwtTradingChartData {
	if h == nil {
		return nil
	}

	return &QwtTradingChartData{h: h}
}

// UnsafeNewQwtTradingChartData constructs the type using only unsafe pointers.
func UnsafeNewQwtTradingChartData(h unsafe.Pointer) *QwtTradingChartData {
	return newQwtTradingChartData((*C.QwtTradingChartData)(h))
}

// NewQwtTradingChartData constructs a new QwtTradingChartData object.
func NewQwtTradingChartData() *QwtTradingChartData {

	return newQwtTradingChartData(C.QwtTradingChartData_new())
}

// NewQwtTradingChartData2 constructs a new QwtTradingChartData object.
func NewQwtTradingChartData2(param1 []QwtOHLCSample) *QwtTradingChartData {
	defer runtime.KeepAlive(param1)
	param1_CArray_ptr := (**C.QwtOHLCSample)(C.malloc(C.size_t(8 * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray_ptr))
	param1_CArray := unsafe.Slice(param1_CArray_ptr, len(param1))
	for i := range param1 {
		param1_CArray[i] = param1[i].cPointer()
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray_ptr)}

	return newQwtTradingChartData(C.QwtTradingChartData_new2(param1_ma))
}

func (this *QwtTradingChartData) BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtTradingChartData_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtTradingChartData) callVirtualBase_BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtTradingChartData_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtTradingChartData) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QwtTradingChartData_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTradingChartData_boundingRect
func miqt_exec_callback_QwtTradingChartData_boundingRect(self *C.QwtTradingChartData, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtTradingChartData{h: self}).callVirtualBase_BoundingRect)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtTradingChartData_virtualreturncopy_QRectF((*C.QRectF)(virtualReturn.UnsafePointer()))

}

// Delete this object from C++ memory.
func (this *QwtTradingChartData) Delete() {
	C.QwtTradingChartData_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtTradingChartData) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtTradingChartData_delete((*C.QwtTradingChartData)(gc[0]))
	})
	this.miqtSetGC(gc)
}
