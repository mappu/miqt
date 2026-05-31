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
	h *C.QwtIntervalSample
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

	return newQwtIntervalSample(C.QwtIntervalSample_new2((C.double)(param1), param2.cPointer()))
}

// NewQwtIntervalSample3 constructs a new QwtIntervalSample object.
func NewQwtIntervalSample3(value float64, min float64, max float64) *QwtIntervalSample {

	return newQwtIntervalSample(C.QwtIntervalSample_new3((C.double)(value), (C.double)(min), (C.double)(max)))
}

// NewQwtIntervalSample4 constructs a new QwtIntervalSample object.
func NewQwtIntervalSample4(param1 *QwtIntervalSample) *QwtIntervalSample {

	return newQwtIntervalSample(C.QwtIntervalSample_new4(param1.cPointer()))
}

func (this *QwtIntervalSample) OperatorEqual(param1 *QwtIntervalSample) bool {
	return (bool)(C.QwtIntervalSample_operatorEqual(this.h, param1.cPointer()))
}

func (this *QwtIntervalSample) OperatorNotEqual(param1 *QwtIntervalSample) bool {
	return (bool)(C.QwtIntervalSample_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QwtIntervalSample) Value() float64 {
	return (float64)(C.QwtIntervalSample_value(this.h))
}

func (this *QwtIntervalSample) SetValue(value float64) {
	C.QwtIntervalSample_setValue(this.h, (C.double)(value))
}

func (this *QwtIntervalSample) Interval() *QwtInterval {
	interval_goptr := newQwtInterval(C.QwtIntervalSample_interval(this.h))
	interval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return interval_goptr
}

func (this *QwtIntervalSample) SetInterval(interval QwtInterval) {
	C.QwtIntervalSample_setInterval(this.h, interval.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtIntervalSample) Delete() {
	C.QwtIntervalSample_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtIntervalSample) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtIntervalSample) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtSetSample struct {
	h *C.QwtSetSample
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

	return newQwtSetSample(C.QwtSetSample_new3(param1.cPointer()))
}

// NewQwtSetSample4 constructs a new QwtSetSample object.
func NewQwtSetSample4(param1 float64, param2 []float64) *QwtSetSample {
	param2_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	for i := range param2 {
		param2_CArray[i] = (C.double)(param2[i])
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray)}

	return newQwtSetSample(C.QwtSetSample_new4((C.double)(param1), param2_ma))
}

func (this *QwtSetSample) OperatorEqual(other *QwtSetSample) bool {
	return (bool)(C.QwtSetSample_operatorEqual(this.h, other.cPointer()))
}

func (this *QwtSetSample) OperatorNotEqual(other *QwtSetSample) bool {
	return (bool)(C.QwtSetSample_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QwtSetSample) Added() float64 {
	return (float64)(C.QwtSetSample_added(this.h))
}

func (this *QwtSetSample) Value() float64 {
	return (float64)(C.QwtSetSample_value(this.h))
}

func (this *QwtSetSample) SetValue(value float64) {
	C.QwtSetSample_setValue(this.h, (C.double)(value))
}

func (this *QwtSetSample) SetSet(set []float64) {
	set_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(set))))
	defer C.free(unsafe.Pointer(set_CArray))
	for i := range set {
		set_CArray[i] = (C.double)(set[i])
	}
	set_ma := C.struct_miqt_array{len: C.size_t(len(set)), data: unsafe.Pointer(set_CArray)}
	C.QwtSetSample_setSet(this.h, set_ma)
}

func (this *QwtSetSample) OperatorAssign(param1 *QwtSetSample) {
	C.QwtSetSample_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtSetSample) Delete() {
	C.QwtSetSample_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtSetSample) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtSetSample) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtOHLCSample struct {
	h *C.QwtOHLCSample
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
	_goptr := newQwtInterval(C.QwtOHLCSample_boundingInterval(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtOHLCSample) IsValid() bool {
	return (bool)(C.QwtOHLCSample_isValid(this.h))
}

func (this *QwtOHLCSample) Time() float64 {
	return (float64)(C.QwtOHLCSample_time(this.h))
}

func (this *QwtOHLCSample) SetTime(time float64) {
	C.QwtOHLCSample_setTime(this.h, (C.double)(time))
}

func (this *QwtOHLCSample) Open() float64 {
	return (float64)(C.QwtOHLCSample_open(this.h))
}

func (this *QwtOHLCSample) SetOpen(open float64) {
	C.QwtOHLCSample_setOpen(this.h, (C.double)(open))
}

func (this *QwtOHLCSample) High() float64 {
	return (float64)(C.QwtOHLCSample_high(this.h))
}

func (this *QwtOHLCSample) SetHigh(high float64) {
	C.QwtOHLCSample_setHigh(this.h, (C.double)(high))
}

func (this *QwtOHLCSample) Low() float64 {
	return (float64)(C.QwtOHLCSample_low(this.h))
}

func (this *QwtOHLCSample) SetLow(low float64) {
	C.QwtOHLCSample_setLow(this.h, (C.double)(low))
}

func (this *QwtOHLCSample) Close() float64 {
	return (float64)(C.QwtOHLCSample_close(this.h))
}

func (this *QwtOHLCSample) SetClose(close float64) {
	C.QwtOHLCSample_setClose(this.h, (C.double)(close))
}

// Delete this object from C++ memory.
func (this *QwtOHLCSample) Delete() {
	C.QwtOHLCSample_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtOHLCSample) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtOHLCSample) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
