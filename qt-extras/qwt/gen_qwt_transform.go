package qwt

/*

#include "gen_qwt_transform.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtTransform struct {
	h *C.QwtTransform
}

func (this *QwtTransform) cPointer() *C.QwtTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtTransform) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtTransform constructs the type using only CGO pointers.
func newQwtTransform(h *C.QwtTransform) *QwtTransform {
	if h == nil {
		return nil
	}

	return &QwtTransform{h: h}
}

// UnsafeNewQwtTransform constructs the type using only unsafe pointers.
func UnsafeNewQwtTransform(h unsafe.Pointer) *QwtTransform {
	return newQwtTransform((*C.QwtTransform)(h))
}

// NewQwtTransform constructs a new QwtTransform object.
func NewQwtTransform() *QwtTransform {

	return newQwtTransform(C.QwtTransform_new())
}

// NewQwtTransform2 constructs a new QwtTransform object.
func NewQwtTransform2(param1 *QwtTransform) *QwtTransform {

	return newQwtTransform(C.QwtTransform_new2(param1.cPointer()))
}

func (this *QwtTransform) Bounded(value float64) float64 {
	return (float64)(C.QwtTransform_bounded(this.h, (C.double)(value)))
}

func (this *QwtTransform) Transform(value float64) float64 {
	return (float64)(C.QwtTransform_transform(this.h, (C.double)(value)))
}

func (this *QwtTransform) InvTransform(value float64) float64 {
	return (float64)(C.QwtTransform_invTransform(this.h, (C.double)(value)))
}

func (this *QwtTransform) Copy() *QwtTransform {
	return newQwtTransform(C.QwtTransform_copy(this.h))
}

func (this *QwtTransform) OperatorAssign(param1 *QwtTransform) {
	C.QwtTransform_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtTransform) callVirtualBase_Bounded(value float64) float64 {

	return (float64)(C.QwtTransform_virtualbase_bounded(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtTransform) OnBounded(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtTransform_override_virtual_bounded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTransform_bounded
func miqt_exec_callback_QwtTransform_bounded(self *C.QwtTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtTransform{h: self}).callVirtualBase_Bounded, slotval1)

	return (C.double)(virtualReturn)

}
func (this *QwtTransform) OnTransform(slot func(value float64) float64) {
	ok := C.QwtTransform_override_virtual_transform(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTransform_transform
func miqt_exec_callback_QwtTransform_transform(self *C.QwtTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}
func (this *QwtTransform) OnInvTransform(slot func(value float64) float64) {
	ok := C.QwtTransform_override_virtual_invTransform(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTransform_invTransform
func miqt_exec_callback_QwtTransform_invTransform(self *C.QwtTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}
func (this *QwtTransform) OnCopy(slot func() *QwtTransform) {
	ok := C.QwtTransform_override_virtual_copy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTransform_copy
func miqt_exec_callback_QwtTransform_copy(self *C.QwtTransform, cb C.intptr_t) *C.QwtTransform {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QwtTransform)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QwtTransform) Delete() {
	C.QwtTransform_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtTransform) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtTransform) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtNullTransform struct {
	h *C.QwtNullTransform
	*QwtTransform
}

func (this *QwtNullTransform) cPointer() *C.QwtNullTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtNullTransform) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtNullTransform constructs the type using only CGO pointers.
func newQwtNullTransform(h *C.QwtNullTransform) *QwtNullTransform {
	if h == nil {
		return nil
	}
	var outptr_QwtTransform *C.QwtTransform = nil
	C.QwtNullTransform_virtbase(h, &outptr_QwtTransform)

	return &QwtNullTransform{h: h,
		QwtTransform: newQwtTransform(outptr_QwtTransform)}
}

// UnsafeNewQwtNullTransform constructs the type using only unsafe pointers.
func UnsafeNewQwtNullTransform(h unsafe.Pointer) *QwtNullTransform {
	return newQwtNullTransform((*C.QwtNullTransform)(h))
}

// NewQwtNullTransform constructs a new QwtNullTransform object.
func NewQwtNullTransform() *QwtNullTransform {

	return newQwtNullTransform(C.QwtNullTransform_new())
}

// NewQwtNullTransform2 constructs a new QwtNullTransform object.
func NewQwtNullTransform2(param1 *QwtNullTransform) *QwtNullTransform {

	return newQwtNullTransform(C.QwtNullTransform_new2(param1.cPointer()))
}

func (this *QwtNullTransform) Transform(value float64) float64 {
	return (float64)(C.QwtNullTransform_transform(this.h, (C.double)(value)))
}

func (this *QwtNullTransform) InvTransform(value float64) float64 {
	return (float64)(C.QwtNullTransform_invTransform(this.h, (C.double)(value)))
}

func (this *QwtNullTransform) Copy() *QwtTransform {
	return newQwtTransform(C.QwtNullTransform_copy(this.h))
}

func (this *QwtNullTransform) OperatorAssign(param1 *QwtNullTransform) {
	C.QwtNullTransform_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtNullTransform) callVirtualBase_Transform(value float64) float64 {

	return (float64)(C.QwtNullTransform_virtualbase_transform(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtNullTransform) OnTransform(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtNullTransform_override_virtual_transform(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullTransform_transform
func miqt_exec_callback_QwtNullTransform_transform(self *C.QwtNullTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtNullTransform{h: self}).callVirtualBase_Transform, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtNullTransform) callVirtualBase_InvTransform(value float64) float64 {

	return (float64)(C.QwtNullTransform_virtualbase_invTransform(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtNullTransform) OnInvTransform(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtNullTransform_override_virtual_invTransform(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullTransform_invTransform
func miqt_exec_callback_QwtNullTransform_invTransform(self *C.QwtNullTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtNullTransform{h: self}).callVirtualBase_InvTransform, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtNullTransform) callVirtualBase_Copy() *QwtTransform {

	return newQwtTransform(C.QwtNullTransform_virtualbase_copy(unsafe.Pointer(this.h)))

}
func (this *QwtNullTransform) OnCopy(slot func(super func() *QwtTransform) *QwtTransform) {
	ok := C.QwtNullTransform_override_virtual_copy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullTransform_copy
func miqt_exec_callback_QwtNullTransform_copy(self *C.QwtNullTransform, cb C.intptr_t) *C.QwtTransform {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QwtTransform) *QwtTransform)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtNullTransform{h: self}).callVirtualBase_Copy)

	return virtualReturn.cPointer()

}

func (this *QwtNullTransform) callVirtualBase_Bounded(value float64) float64 {

	return (float64)(C.QwtNullTransform_virtualbase_bounded(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtNullTransform) OnBounded(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtNullTransform_override_virtual_bounded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullTransform_bounded
func miqt_exec_callback_QwtNullTransform_bounded(self *C.QwtNullTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtNullTransform{h: self}).callVirtualBase_Bounded, slotval1)

	return (C.double)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QwtNullTransform) Delete() {
	C.QwtNullTransform_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtNullTransform) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtNullTransform) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtLogTransform struct {
	h *C.QwtLogTransform
	*QwtTransform
}

func (this *QwtLogTransform) cPointer() *C.QwtLogTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtLogTransform) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtLogTransform constructs the type using only CGO pointers.
func newQwtLogTransform(h *C.QwtLogTransform) *QwtLogTransform {
	if h == nil {
		return nil
	}
	var outptr_QwtTransform *C.QwtTransform = nil
	C.QwtLogTransform_virtbase(h, &outptr_QwtTransform)

	return &QwtLogTransform{h: h,
		QwtTransform: newQwtTransform(outptr_QwtTransform)}
}

// UnsafeNewQwtLogTransform constructs the type using only unsafe pointers.
func UnsafeNewQwtLogTransform(h unsafe.Pointer) *QwtLogTransform {
	return newQwtLogTransform((*C.QwtLogTransform)(h))
}

// NewQwtLogTransform constructs a new QwtLogTransform object.
func NewQwtLogTransform() *QwtLogTransform {

	return newQwtLogTransform(C.QwtLogTransform_new())
}

// NewQwtLogTransform2 constructs a new QwtLogTransform object.
func NewQwtLogTransform2(param1 *QwtLogTransform) *QwtLogTransform {

	return newQwtLogTransform(C.QwtLogTransform_new2(param1.cPointer()))
}

func (this *QwtLogTransform) Transform(value float64) float64 {
	return (float64)(C.QwtLogTransform_transform(this.h, (C.double)(value)))
}

func (this *QwtLogTransform) InvTransform(value float64) float64 {
	return (float64)(C.QwtLogTransform_invTransform(this.h, (C.double)(value)))
}

func (this *QwtLogTransform) Bounded(value float64) float64 {
	return (float64)(C.QwtLogTransform_bounded(this.h, (C.double)(value)))
}

func (this *QwtLogTransform) Copy() *QwtTransform {
	return newQwtTransform(C.QwtLogTransform_copy(this.h))
}

func (this *QwtLogTransform) OperatorAssign(param1 *QwtLogTransform) {
	C.QwtLogTransform_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtLogTransform) callVirtualBase_Transform(value float64) float64 {

	return (float64)(C.QwtLogTransform_virtualbase_transform(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtLogTransform) OnTransform(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtLogTransform_override_virtual_transform(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLogTransform_transform
func miqt_exec_callback_QwtLogTransform_transform(self *C.QwtLogTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtLogTransform{h: self}).callVirtualBase_Transform, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtLogTransform) callVirtualBase_InvTransform(value float64) float64 {

	return (float64)(C.QwtLogTransform_virtualbase_invTransform(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtLogTransform) OnInvTransform(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtLogTransform_override_virtual_invTransform(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLogTransform_invTransform
func miqt_exec_callback_QwtLogTransform_invTransform(self *C.QwtLogTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtLogTransform{h: self}).callVirtualBase_InvTransform, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtLogTransform) callVirtualBase_Bounded(value float64) float64 {

	return (float64)(C.QwtLogTransform_virtualbase_bounded(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtLogTransform) OnBounded(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtLogTransform_override_virtual_bounded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLogTransform_bounded
func miqt_exec_callback_QwtLogTransform_bounded(self *C.QwtLogTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtLogTransform{h: self}).callVirtualBase_Bounded, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtLogTransform) callVirtualBase_Copy() *QwtTransform {

	return newQwtTransform(C.QwtLogTransform_virtualbase_copy(unsafe.Pointer(this.h)))

}
func (this *QwtLogTransform) OnCopy(slot func(super func() *QwtTransform) *QwtTransform) {
	ok := C.QwtLogTransform_override_virtual_copy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLogTransform_copy
func miqt_exec_callback_QwtLogTransform_copy(self *C.QwtLogTransform, cb C.intptr_t) *C.QwtTransform {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QwtTransform) *QwtTransform)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtLogTransform{h: self}).callVirtualBase_Copy)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QwtLogTransform) Delete() {
	C.QwtLogTransform_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtLogTransform) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtLogTransform) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPowerTransform struct {
	h *C.QwtPowerTransform
	*QwtTransform
}

func (this *QwtPowerTransform) cPointer() *C.QwtPowerTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPowerTransform) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPowerTransform constructs the type using only CGO pointers.
func newQwtPowerTransform(h *C.QwtPowerTransform) *QwtPowerTransform {
	if h == nil {
		return nil
	}
	var outptr_QwtTransform *C.QwtTransform = nil
	C.QwtPowerTransform_virtbase(h, &outptr_QwtTransform)

	return &QwtPowerTransform{h: h,
		QwtTransform: newQwtTransform(outptr_QwtTransform)}
}

// UnsafeNewQwtPowerTransform constructs the type using only unsafe pointers.
func UnsafeNewQwtPowerTransform(h unsafe.Pointer) *QwtPowerTransform {
	return newQwtPowerTransform((*C.QwtPowerTransform)(h))
}

// NewQwtPowerTransform constructs a new QwtPowerTransform object.
func NewQwtPowerTransform(exponent float64) *QwtPowerTransform {

	return newQwtPowerTransform(C.QwtPowerTransform_new((C.double)(exponent)))
}

// NewQwtPowerTransform2 constructs a new QwtPowerTransform object.
func NewQwtPowerTransform2(param1 *QwtPowerTransform) *QwtPowerTransform {

	return newQwtPowerTransform(C.QwtPowerTransform_new2(param1.cPointer()))
}

func (this *QwtPowerTransform) Transform(value float64) float64 {
	return (float64)(C.QwtPowerTransform_transform(this.h, (C.double)(value)))
}

func (this *QwtPowerTransform) InvTransform(value float64) float64 {
	return (float64)(C.QwtPowerTransform_invTransform(this.h, (C.double)(value)))
}

func (this *QwtPowerTransform) Copy() *QwtTransform {
	return newQwtTransform(C.QwtPowerTransform_copy(this.h))
}

func (this *QwtPowerTransform) callVirtualBase_Transform(value float64) float64 {

	return (float64)(C.QwtPowerTransform_virtualbase_transform(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtPowerTransform) OnTransform(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtPowerTransform_override_virtual_transform(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPowerTransform_transform
func miqt_exec_callback_QwtPowerTransform_transform(self *C.QwtPowerTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtPowerTransform{h: self}).callVirtualBase_Transform, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtPowerTransform) callVirtualBase_InvTransform(value float64) float64 {

	return (float64)(C.QwtPowerTransform_virtualbase_invTransform(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtPowerTransform) OnInvTransform(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtPowerTransform_override_virtual_invTransform(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPowerTransform_invTransform
func miqt_exec_callback_QwtPowerTransform_invTransform(self *C.QwtPowerTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtPowerTransform{h: self}).callVirtualBase_InvTransform, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtPowerTransform) callVirtualBase_Copy() *QwtTransform {

	return newQwtTransform(C.QwtPowerTransform_virtualbase_copy(unsafe.Pointer(this.h)))

}
func (this *QwtPowerTransform) OnCopy(slot func(super func() *QwtTransform) *QwtTransform) {
	ok := C.QwtPowerTransform_override_virtual_copy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPowerTransform_copy
func miqt_exec_callback_QwtPowerTransform_copy(self *C.QwtPowerTransform, cb C.intptr_t) *C.QwtTransform {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QwtTransform) *QwtTransform)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPowerTransform{h: self}).callVirtualBase_Copy)

	return virtualReturn.cPointer()

}

func (this *QwtPowerTransform) callVirtualBase_Bounded(value float64) float64 {

	return (float64)(C.QwtPowerTransform_virtualbase_bounded(unsafe.Pointer(this.h), (C.double)(value)))

}
func (this *QwtPowerTransform) OnBounded(slot func(super func(value float64) float64, value float64) float64) {
	ok := C.QwtPowerTransform_override_virtual_bounded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPowerTransform_bounded
func miqt_exec_callback_QwtPowerTransform_bounded(self *C.QwtPowerTransform, cb C.intptr_t, value C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) float64, value float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtPowerTransform{h: self}).callVirtualBase_Bounded, slotval1)

	return (C.double)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QwtPowerTransform) Delete() {
	C.QwtPowerTransform_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPowerTransform) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPowerTransform) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
