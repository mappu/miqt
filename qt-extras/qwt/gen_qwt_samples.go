package qwt

/*

#include "gen_qwt_samples.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtIntervalSample struct {
	h  *C.QwtIntervalSample
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtIntervalSample) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtIntervalSample) cPointer() *C.QwtIntervalSample {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtIntervalSample) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtIntervalSample constructs the type using only CGO pointers.
func newQwtIntervalSample(h *C.QwtIntervalSample) *QwtIntervalSample {
	if h == nil {
		return nil
	}

	return &QwtIntervalSample{h: h}
}

// UnsafeNewQwtIntervalSample constructs the type using only unsafe pointers.
func UnsafeNewQwtIntervalSample(h unsafe.Pointer) *QwtIntervalSample {
	return newQwtIntervalSample((*C.QwtIntervalSample)(h))
}

// NewQwtIntervalSample constructs a new QwtIntervalSample object.
func NewQwtIntervalSample() *QwtIntervalSample {

	return newQwtIntervalSample(C.QwtIntervalSample_new())
}

// NewQwtIntervalSample2 constructs a new QwtIntervalSample object.
func NewQwtIntervalSample2(param1 float64, param2 *QwtInterval) *QwtIntervalSample {
	defer runtime.KeepAlive(param2)

	return newQwtIntervalSample(C.QwtIntervalSample_new2((C.double)(param1), param2.cPointer()))
}

// NewQwtIntervalSample3 constructs a new QwtIntervalSample object.
func NewQwtIntervalSample3(value float64, min float64, max float64) *QwtIntervalSample {

	return newQwtIntervalSample(C.QwtIntervalSample_new3((C.double)(value), (C.double)(min), (C.double)(max)))
}

// NewQwtIntervalSample4 constructs a new QwtIntervalSample object.
func NewQwtIntervalSample4(param1 *QwtIntervalSample) *QwtIntervalSample {
	defer runtime.KeepAlive(param1)

	return newQwtIntervalSample(C.QwtIntervalSample_new4(param1.cPointer()))
}

func (this *QwtIntervalSample) OperatorEqual(param1 *QwtIntervalSample) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QwtIntervalSample_operatorEqual(this.h, param1.cPointer()))
}

func (this *QwtIntervalSample) OperatorNotEqual(param1 *QwtIntervalSample) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QwtIntervalSample_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QwtIntervalSample) Value() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtIntervalSample_value(this.h))
}

func (this *QwtIntervalSample) SetValue(value float64) {
	defer runtime.KeepAlive(this)
	C.QwtIntervalSample_setValue(this.h, (C.double)(value))
}

func (this *QwtIntervalSample) Interval() *QwtInterval {
	defer runtime.KeepAlive(this)
	interval_goptr := newQwtInterval(C.QwtIntervalSample_interval(this.h))
	interval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return interval_goptr
}

func (this *QwtIntervalSample) SetInterval(interval QwtInterval) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(interval)
	C.QwtIntervalSample_setInterval(this.h, interval.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtIntervalSample) Delete() {
	C.QwtIntervalSample_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtIntervalSample) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtIntervalSample_delete((*C.QwtIntervalSample)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QwtSetSample struct {
	h  *C.QwtSetSample
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtSetSample) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtSetSample) cPointer() *C.QwtSetSample {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSetSample) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSetSample constructs the type using only CGO pointers.
func newQwtSetSample(h *C.QwtSetSample) *QwtSetSample {
	if h == nil {
		return nil
	}

	return &QwtSetSample{h: h}
}

// UnsafeNewQwtSetSample constructs the type using only unsafe pointers.
func UnsafeNewQwtSetSample(h unsafe.Pointer) *QwtSetSample {
	return newQwtSetSample((*C.QwtSetSample)(h))
}

// NewQwtSetSample constructs a new QwtSetSample object.
func NewQwtSetSample() *QwtSetSample {

	return newQwtSetSample(C.QwtSetSample_new())
}

// NewQwtSetSample2 constructs a new QwtSetSample object.
func NewQwtSetSample2(param1 float64) *QwtSetSample {

	return newQwtSetSample(C.QwtSetSample_new2((C.double)(param1)))
}

// NewQwtSetSample3 constructs a new QwtSetSample object.
func NewQwtSetSample3(param1 *QwtSetSample) *QwtSetSample {
	defer runtime.KeepAlive(param1)

	return newQwtSetSample(C.QwtSetSample_new3(param1.cPointer()))
}

// NewQwtSetSample4 constructs a new QwtSetSample object.
func NewQwtSetSample4(param1 float64, param2 []float64) *QwtSetSample {
	param2_CArray_ptr := (*C.double)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray_ptr))
	param2_CArray := unsafe.Slice(param2_CArray_ptr, len(param2))
	for i := range param2 {
		param2_CArray[i] = (C.double)(param2[i])
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray_ptr)}

	return newQwtSetSample(C.QwtSetSample_new4((C.double)(param1), param2_ma))
}

func (this *QwtSetSample) OperatorEqual(other *QwtSetSample) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QwtSetSample_operatorEqual(this.h, other.cPointer()))
}

func (this *QwtSetSample) OperatorNotEqual(other *QwtSetSample) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QwtSetSample_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QwtSetSample) Added() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtSetSample_added(this.h))
}

func (this *QwtSetSample) Value() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtSetSample_value(this.h))
}

func (this *QwtSetSample) SetValue(value float64) {
	defer runtime.KeepAlive(this)
	C.QwtSetSample_setValue(this.h, (C.double)(value))
}

func (this *QwtSetSample) SetSet(set []float64) {
	defer runtime.KeepAlive(this)
	set_CArray_ptr := (*C.double)(C.malloc(C.size_t(8 * len(set))))
	defer C.free(unsafe.Pointer(set_CArray_ptr))
	set_CArray := unsafe.Slice(set_CArray_ptr, len(set))
	for i := range set {
		set_CArray[i] = (C.double)(set[i])
	}
	set_ma := C.struct_miqt_array{len: C.size_t(len(set)), data: unsafe.Pointer(set_CArray_ptr)}
	C.QwtSetSample_setSet(this.h, set_ma)
}

func (this *QwtSetSample) OperatorAssign(param1 *QwtSetSample) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtSetSample_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtSetSample) Delete() {
	C.QwtSetSample_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtSetSample) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtSetSample_delete((*C.QwtSetSample)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QwtOHLCSample struct {
	h  *C.QwtOHLCSample
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtOHLCSample) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtOHLCSample) cPointer() *C.QwtOHLCSample {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtOHLCSample) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtOHLCSample constructs the type using only CGO pointers.
func newQwtOHLCSample(h *C.QwtOHLCSample) *QwtOHLCSample {
	if h == nil {
		return nil
	}

	return &QwtOHLCSample{h: h}
}

// UnsafeNewQwtOHLCSample constructs the type using only unsafe pointers.
func UnsafeNewQwtOHLCSample(h unsafe.Pointer) *QwtOHLCSample {
	return newQwtOHLCSample((*C.QwtOHLCSample)(h))
}

// NewQwtOHLCSample constructs a new QwtOHLCSample object.
func NewQwtOHLCSample() *QwtOHLCSample {

	return newQwtOHLCSample(C.QwtOHLCSample_new())
}

// NewQwtOHLCSample2 constructs a new QwtOHLCSample object.
func NewQwtOHLCSample2(param1 *QwtOHLCSample) *QwtOHLCSample {
	defer runtime.KeepAlive(param1)

	return newQwtOHLCSample(C.QwtOHLCSample_new2(param1.cPointer()))
}

// NewQwtOHLCSample3 constructs a new QwtOHLCSample object.
func NewQwtOHLCSample3(time float64) *QwtOHLCSample {

	return newQwtOHLCSample(C.QwtOHLCSample_new3((C.double)(time)))
}

// NewQwtOHLCSample4 constructs a new QwtOHLCSample object.
func NewQwtOHLCSample4(time float64, open float64) *QwtOHLCSample {

	return newQwtOHLCSample(C.QwtOHLCSample_new4((C.double)(time), (C.double)(open)))
}

// NewQwtOHLCSample5 constructs a new QwtOHLCSample object.
func NewQwtOHLCSample5(time float64, open float64, high float64) *QwtOHLCSample {

	return newQwtOHLCSample(C.QwtOHLCSample_new5((C.double)(time), (C.double)(open), (C.double)(high)))
}

// NewQwtOHLCSample6 constructs a new QwtOHLCSample object.
func NewQwtOHLCSample6(time float64, open float64, high float64, low float64) *QwtOHLCSample {

	return newQwtOHLCSample(C.QwtOHLCSample_new6((C.double)(time), (C.double)(open), (C.double)(high), (C.double)(low)))
}

// NewQwtOHLCSample7 constructs a new QwtOHLCSample object.
func NewQwtOHLCSample7(time float64, open float64, high float64, low float64, close float64) *QwtOHLCSample {

	return newQwtOHLCSample(C.QwtOHLCSample_new7((C.double)(time), (C.double)(open), (C.double)(high), (C.double)(low), (C.double)(close)))
}

func (this *QwtOHLCSample) BoundingInterval() *QwtInterval {
	defer runtime.KeepAlive(this)
	_goptr := newQwtInterval(C.QwtOHLCSample_boundingInterval(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtOHLCSample) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtOHLCSample_isValid(this.h))
}

func (this *QwtOHLCSample) Time() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtOHLCSample_time(this.h))
}

func (this *QwtOHLCSample) SetTime(time float64) {
	defer runtime.KeepAlive(this)
	C.QwtOHLCSample_setTime(this.h, (C.double)(time))
}

func (this *QwtOHLCSample) Open() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtOHLCSample_open(this.h))
}

func (this *QwtOHLCSample) SetOpen(open float64) {
	defer runtime.KeepAlive(this)
	C.QwtOHLCSample_setOpen(this.h, (C.double)(open))
}

func (this *QwtOHLCSample) High() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtOHLCSample_high(this.h))
}

func (this *QwtOHLCSample) SetHigh(high float64) {
	defer runtime.KeepAlive(this)
	C.QwtOHLCSample_setHigh(this.h, (C.double)(high))
}

func (this *QwtOHLCSample) Low() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtOHLCSample_low(this.h))
}

func (this *QwtOHLCSample) SetLow(low float64) {
	defer runtime.KeepAlive(this)
	C.QwtOHLCSample_setLow(this.h, (C.double)(low))
}

func (this *QwtOHLCSample) Close() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtOHLCSample_close(this.h))
}

func (this *QwtOHLCSample) SetClose(close float64) {
	defer runtime.KeepAlive(this)
	C.QwtOHLCSample_setClose(this.h, (C.double)(close))
}

// Delete this object from C++ memory.
func (this *QwtOHLCSample) Delete() {
	C.QwtOHLCSample_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtOHLCSample) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtOHLCSample_delete((*C.QwtOHLCSample)(gc[0]))
	})
	this.miqtSetGC(gc)
}
