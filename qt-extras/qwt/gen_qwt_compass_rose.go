package qwt

/*

#include "gen_qwt_compass_rose.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtCompassRose struct {
	h *C.QwtCompassRose
}

func (this *QwtCompassRose) cPointer() *C.QwtCompassRose {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtCompassRose) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtCompassRose constructs the type using only CGO pointers.
func newQwtCompassRose(h *C.QwtCompassRose) *QwtCompassRose {
	if h == nil {
		return nil
	}

	return &QwtCompassRose{h: h}
}

// UnsafeNewQwtCompassRose constructs the type using only unsafe pointers.
func UnsafeNewQwtCompassRose(h unsafe.Pointer) *QwtCompassRose {
	return newQwtCompassRose((*C.QwtCompassRose)(h))
}

// NewQwtCompassRose constructs a new QwtCompassRose object.
func NewQwtCompassRose(param1 *QwtCompassRose) *QwtCompassRose {

	return newQwtCompassRose(C.QwtCompassRose_new(param1.cPointer()))
}

func (this *QwtCompassRose) SetPalette(p *qt.QPalette) {
	C.QwtCompassRose_setPalette(this.h, (*C.QPalette)(p.UnsafePointer()))
}

func (this *QwtCompassRose) Palette() *qt.QPalette {
	return qt.UnsafeNewQPalette(unsafe.Pointer(C.QwtCompassRose_palette(this.h)))
}

func (this *QwtCompassRose) Draw(painter *qt.QPainter, center *qt.QPointF, radius float64, north float64, colorGroup qt.QPalette__ColorGroup) {
	C.QwtCompassRose_draw(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius), (C.double)(north), (C.int)(colorGroup))
}

func (this *QwtCompassRose) OperatorAssign(param1 *QwtCompassRose) {
	C.QwtCompassRose_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtCompassRose) callVirtualBase_SetPalette(p *qt.QPalette) {

	C.QwtCompassRose_virtualbase_setPalette(unsafe.Pointer(this.h), (*C.QPalette)(p.UnsafePointer()))

}
func (this *QwtCompassRose) OnSetPalette(slot func(super func(p *qt.QPalette), p *qt.QPalette)) {
	ok := C.QwtCompassRose_override_virtual_setPalette(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassRose_setPalette
func miqt_exec_callback_QwtCompassRose_setPalette(self *C.QwtCompassRose, cb C.intptr_t, p *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *qt.QPalette), p *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPalette(unsafe.Pointer(p))

	gofunc((&QwtCompassRose{h: self}).callVirtualBase_SetPalette, slotval1)

}
func (this *QwtCompassRose) OnDraw(slot func(painter *qt.QPainter, center *qt.QPointF, radius float64, north float64, colorGroup qt.QPalette__ColorGroup)) {
	ok := C.QwtCompassRose_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassRose_draw
func miqt_exec_callback_QwtCompassRose_draw(self *C.QwtCompassRose, cb C.intptr_t, painter *C.QPainter, center *C.QPointF, radius C.double, north C.double, colorGroup C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *qt.QPainter, center *qt.QPointF, radius float64, north float64, colorGroup qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(radius)

	slotval4 := (float64)(north)

	slotval5 := (qt.QPalette__ColorGroup)(colorGroup)

	gofunc(slotval1, slotval2, slotval3, slotval4, slotval5)

}

// Delete this object from C++ memory.
func (this *QwtCompassRose) Delete() {
	C.QwtCompassRose_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtCompassRose) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtCompassRose) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtSimpleCompassRose struct {
	h *C.QwtSimpleCompassRose
	*QwtCompassRose
}

func (this *QwtSimpleCompassRose) cPointer() *C.QwtSimpleCompassRose {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSimpleCompassRose) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSimpleCompassRose constructs the type using only CGO pointers.
func newQwtSimpleCompassRose(h *C.QwtSimpleCompassRose) *QwtSimpleCompassRose {
	if h == nil {
		return nil
	}
	var outptr_QwtCompassRose *C.QwtCompassRose = nil
	C.QwtSimpleCompassRose_virtbase(h, &outptr_QwtCompassRose)

	return &QwtSimpleCompassRose{h: h,
		QwtCompassRose: newQwtCompassRose(outptr_QwtCompassRose)}
}

// UnsafeNewQwtSimpleCompassRose constructs the type using only unsafe pointers.
func UnsafeNewQwtSimpleCompassRose(h unsafe.Pointer) *QwtSimpleCompassRose {
	return newQwtSimpleCompassRose((*C.QwtSimpleCompassRose)(h))
}

// NewQwtSimpleCompassRose constructs a new QwtSimpleCompassRose object.
func NewQwtSimpleCompassRose() *QwtSimpleCompassRose {

	return newQwtSimpleCompassRose(C.QwtSimpleCompassRose_new())
}

// NewQwtSimpleCompassRose2 constructs a new QwtSimpleCompassRose object.
func NewQwtSimpleCompassRose2(param1 *QwtSimpleCompassRose) *QwtSimpleCompassRose {

	return newQwtSimpleCompassRose(C.QwtSimpleCompassRose_new2(param1.cPointer()))
}

// NewQwtSimpleCompassRose3 constructs a new QwtSimpleCompassRose object.
func NewQwtSimpleCompassRose3(numThorns int) *QwtSimpleCompassRose {

	return newQwtSimpleCompassRose(C.QwtSimpleCompassRose_new3((C.int)(numThorns)))
}

// NewQwtSimpleCompassRose4 constructs a new QwtSimpleCompassRose object.
func NewQwtSimpleCompassRose4(numThorns int, numThornLevels int) *QwtSimpleCompassRose {

	return newQwtSimpleCompassRose(C.QwtSimpleCompassRose_new4((C.int)(numThorns), (C.int)(numThornLevels)))
}

func (this *QwtSimpleCompassRose) SetWidth(width float64) {
	C.QwtSimpleCompassRose_setWidth(this.h, (C.double)(width))
}

func (this *QwtSimpleCompassRose) Width() float64 {
	return (float64)(C.QwtSimpleCompassRose_width(this.h))
}

func (this *QwtSimpleCompassRose) SetNumThorns(numThorns int) {
	C.QwtSimpleCompassRose_setNumThorns(this.h, (C.int)(numThorns))
}

func (this *QwtSimpleCompassRose) NumThorns() int {
	return (int)(C.QwtSimpleCompassRose_numThorns(this.h))
}

func (this *QwtSimpleCompassRose) SetNumThornLevels(numThornLevels int) {
	C.QwtSimpleCompassRose_setNumThornLevels(this.h, (C.int)(numThornLevels))
}

func (this *QwtSimpleCompassRose) NumThornLevels() int {
	return (int)(C.QwtSimpleCompassRose_numThornLevels(this.h))
}

func (this *QwtSimpleCompassRose) SetShrinkFactor(factor float64) {
	C.QwtSimpleCompassRose_setShrinkFactor(this.h, (C.double)(factor))
}

func (this *QwtSimpleCompassRose) ShrinkFactor() float64 {
	return (float64)(C.QwtSimpleCompassRose_shrinkFactor(this.h))
}

func (this *QwtSimpleCompassRose) Draw(param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup) {
	C.QwtSimpleCompassRose_draw(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius), (C.double)(north), (C.int)(param5))
}

func QwtSimpleCompassRose_DrawRose(param1 *qt.QPainter, param2 *qt.QPalette, center *qt.QPointF, radius float64, north float64, width float64, numThorns int, numThornLevels int, shrinkFactor float64) {
	C.QwtSimpleCompassRose_drawRose((*C.QPainter)(param1.UnsafePointer()), (*C.QPalette)(param2.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius), (C.double)(north), (C.double)(width), (C.int)(numThorns), (C.int)(numThornLevels), (C.double)(shrinkFactor))
}

func (this *QwtSimpleCompassRose) OperatorAssign(param1 *QwtSimpleCompassRose) {
	C.QwtSimpleCompassRose_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtSimpleCompassRose) callVirtualBase_Draw(param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup) {

	C.QwtSimpleCompassRose_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius), (C.double)(north), (C.int)(param5))

}
func (this *QwtSimpleCompassRose) OnDraw(slot func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup), param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup)) {
	ok := C.QwtSimpleCompassRose_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSimpleCompassRose_draw
func miqt_exec_callback_QwtSimpleCompassRose_draw(self *C.QwtSimpleCompassRose, cb C.intptr_t, param1 *C.QPainter, center *C.QPointF, radius C.double, north C.double, param5 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup), param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(radius)

	slotval4 := (float64)(north)

	slotval5 := (qt.QPalette__ColorGroup)(param5)

	gofunc((&QwtSimpleCompassRose{h: self}).callVirtualBase_Draw, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QwtSimpleCompassRose) callVirtualBase_SetPalette(p *qt.QPalette) {

	C.QwtSimpleCompassRose_virtualbase_setPalette(unsafe.Pointer(this.h), (*C.QPalette)(p.UnsafePointer()))

}
func (this *QwtSimpleCompassRose) OnSetPalette(slot func(super func(p *qt.QPalette), p *qt.QPalette)) {
	ok := C.QwtSimpleCompassRose_override_virtual_setPalette(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSimpleCompassRose_setPalette
func miqt_exec_callback_QwtSimpleCompassRose_setPalette(self *C.QwtSimpleCompassRose, cb C.intptr_t, p *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *qt.QPalette), p *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPalette(unsafe.Pointer(p))

	gofunc((&QwtSimpleCompassRose{h: self}).callVirtualBase_SetPalette, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtSimpleCompassRose) Delete() {
	C.QwtSimpleCompassRose_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtSimpleCompassRose) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtSimpleCompassRose) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
