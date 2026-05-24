package qwt

/*

#include "gen_qwt_dial_needle.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtDialSimpleNeedle__Style int

const (
	QwtDialSimpleNeedle__Arrow QwtDialSimpleNeedle__Style = 0
	QwtDialSimpleNeedle__Ray   QwtDialSimpleNeedle__Style = 1
)

type QwtCompassMagnetNeedle__Style int

const (
	QwtCompassMagnetNeedle__TriangleStyle QwtCompassMagnetNeedle__Style = 0
	QwtCompassMagnetNeedle__ThinStyle     QwtCompassMagnetNeedle__Style = 1
)

type QwtCompassWindArrow__Style int

const (
	QwtCompassWindArrow__Style1 QwtCompassWindArrow__Style = 0
	QwtCompassWindArrow__Style2 QwtCompassWindArrow__Style = 1
)

type QwtDialNeedle struct {
	h *C.QwtDialNeedle
}

func (this *QwtDialNeedle) cPointer() *C.QwtDialNeedle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtDialNeedle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtDialNeedle constructs the type using only CGO pointers.
func newQwtDialNeedle(h *C.QwtDialNeedle) *QwtDialNeedle {
	if h == nil {
		return nil
	}

	return &QwtDialNeedle{h: h}
}

// UnsafeNewQwtDialNeedle constructs the type using only unsafe pointers.
func UnsafeNewQwtDialNeedle(h unsafe.Pointer) *QwtDialNeedle {
	return newQwtDialNeedle((*C.QwtDialNeedle)(h))
}

// NewQwtDialNeedle constructs a new QwtDialNeedle object.
func NewQwtDialNeedle() *QwtDialNeedle {

	return newQwtDialNeedle(C.QwtDialNeedle_new())
}

// NewQwtDialNeedle2 constructs a new QwtDialNeedle object.
func NewQwtDialNeedle2(param1 *QwtDialNeedle) *QwtDialNeedle {

	return newQwtDialNeedle(C.QwtDialNeedle_new2(param1.cPointer()))
}

func (this *QwtDialNeedle) SetPalette(palette *qt.QPalette) {
	C.QwtDialNeedle_setPalette(this.h, (*C.QPalette)(palette.UnsafePointer()))
}

func (this *QwtDialNeedle) Palette() *qt.QPalette {
	return qt.UnsafeNewQPalette(unsafe.Pointer(C.QwtDialNeedle_palette(this.h)))
}

func (this *QwtDialNeedle) Draw(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup) {
	C.QwtDialNeedle_draw(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(length), (C.double)(direction), (C.int)(param5))
}

func (this *QwtDialNeedle) OperatorAssign(param1 *QwtDialNeedle) {
	C.QwtDialNeedle_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtDialNeedle) callVirtualBase_SetPalette(palette *qt.QPalette) {

	C.QwtDialNeedle_virtualbase_setPalette(unsafe.Pointer(this.h), (*C.QPalette)(palette.UnsafePointer()))

}
func (this *QwtDialNeedle) OnSetPalette(slot func(super func(palette *qt.QPalette), palette *qt.QPalette)) {
	ok := C.QwtDialNeedle_override_virtual_setPalette(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDialNeedle_setPalette
func miqt_exec_callback_QwtDialNeedle_setPalette(self *C.QwtDialNeedle, cb C.intptr_t, palette *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(palette *qt.QPalette), palette *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPalette(unsafe.Pointer(palette))

	gofunc((&QwtDialNeedle{h: self}).callVirtualBase_SetPalette, slotval1)

}

func (this *QwtDialNeedle) callVirtualBase_Draw(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup) {

	C.QwtDialNeedle_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(length), (C.double)(direction), (C.int)(param5))

}
func (this *QwtDialNeedle) OnDraw(slot func(super func(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup), painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup)) {
	ok := C.QwtDialNeedle_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDialNeedle_draw
func miqt_exec_callback_QwtDialNeedle_draw(self *C.QwtDialNeedle, cb C.intptr_t, painter *C.QPainter, center *C.QPointF, length C.double, direction C.double, param5 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup), painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(length)

	slotval4 := (float64)(direction)

	slotval5 := (qt.QPalette__ColorGroup)(param5)

	gofunc((&QwtDialNeedle{h: self}).callVirtualBase_Draw, slotval1, slotval2, slotval3, slotval4, slotval5)

}
func (this *QwtDialNeedle) OnDrawNeedle(slot func(painter *qt.QPainter, length float64, colorGroup qt.QPalette__ColorGroup)) {
	ok := C.QwtDialNeedle_override_virtual_drawNeedle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDialNeedle_drawNeedle
func miqt_exec_callback_QwtDialNeedle_drawNeedle(self *C.QwtDialNeedle, cb C.intptr_t, painter *C.QPainter, length C.double, colorGroup C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *qt.QPainter, length float64, colorGroup qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := (float64)(length)

	slotval3 := (qt.QPalette__ColorGroup)(colorGroup)

	gofunc(slotval1, slotval2, slotval3)

}

func (this *QwtDialNeedle) callVirtualBase_DrawKnob(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool) {

	C.QwtDialNeedle_virtualbase_drawKnob(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(width), (*C.QBrush)(param3.UnsafePointer()), (C.bool)(sunken))

}
func (this *QwtDialNeedle) OnDrawKnob(slot func(super func(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool), param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool)) {
	ok := C.QwtDialNeedle_override_virtual_drawKnob(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDialNeedle_drawKnob
func miqt_exec_callback_QwtDialNeedle_drawKnob(self *C.QwtDialNeedle, cb C.intptr_t, param1 *C.QPainter, width C.double, param3 *C.QBrush, sunken C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool), param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(width)

	slotval3 := qt.UnsafeNewQBrush(unsafe.Pointer(param3))

	slotval4 := (bool)(sunken)

	gofunc((&QwtDialNeedle{h: self}).callVirtualBase_DrawKnob, slotval1, slotval2, slotval3, slotval4)

}

// Delete this object from C++ memory.
func (this *QwtDialNeedle) Delete() {
	C.QwtDialNeedle_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtDialNeedle) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtDialNeedle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtDialSimpleNeedle struct {
	h *C.QwtDialSimpleNeedle
	*QwtDialNeedle
}

func (this *QwtDialSimpleNeedle) cPointer() *C.QwtDialSimpleNeedle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtDialSimpleNeedle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtDialSimpleNeedle constructs the type using only CGO pointers.
func newQwtDialSimpleNeedle(h *C.QwtDialSimpleNeedle) *QwtDialSimpleNeedle {
	if h == nil {
		return nil
	}
	var outptr_QwtDialNeedle *C.QwtDialNeedle = nil
	C.QwtDialSimpleNeedle_virtbase(h, &outptr_QwtDialNeedle)

	return &QwtDialSimpleNeedle{h: h,
		QwtDialNeedle: newQwtDialNeedle(outptr_QwtDialNeedle)}
}

// UnsafeNewQwtDialSimpleNeedle constructs the type using only unsafe pointers.
func UnsafeNewQwtDialSimpleNeedle(h unsafe.Pointer) *QwtDialSimpleNeedle {
	return newQwtDialSimpleNeedle((*C.QwtDialSimpleNeedle)(h))
}

// NewQwtDialSimpleNeedle constructs a new QwtDialSimpleNeedle object.
func NewQwtDialSimpleNeedle(param1 QwtDialSimpleNeedle__Style) *QwtDialSimpleNeedle {

	return newQwtDialSimpleNeedle(C.QwtDialSimpleNeedle_new((C.int)(param1)))
}

// NewQwtDialSimpleNeedle2 constructs a new QwtDialSimpleNeedle object.
func NewQwtDialSimpleNeedle2(param1 *QwtDialSimpleNeedle) *QwtDialSimpleNeedle {

	return newQwtDialSimpleNeedle(C.QwtDialSimpleNeedle_new2(param1.cPointer()))
}

// NewQwtDialSimpleNeedle3 constructs a new QwtDialSimpleNeedle object.
func NewQwtDialSimpleNeedle3(param1 QwtDialSimpleNeedle__Style, hasKnob bool) *QwtDialSimpleNeedle {

	return newQwtDialSimpleNeedle(C.QwtDialSimpleNeedle_new3((C.int)(param1), (C.bool)(hasKnob)))
}

// NewQwtDialSimpleNeedle4 constructs a new QwtDialSimpleNeedle object.
func NewQwtDialSimpleNeedle4(param1 QwtDialSimpleNeedle__Style, hasKnob bool, mid *qt.QColor) *QwtDialSimpleNeedle {

	return newQwtDialSimpleNeedle(C.QwtDialSimpleNeedle_new4((C.int)(param1), (C.bool)(hasKnob), (*C.QColor)(mid.UnsafePointer())))
}

// NewQwtDialSimpleNeedle5 constructs a new QwtDialSimpleNeedle object.
func NewQwtDialSimpleNeedle5(param1 QwtDialSimpleNeedle__Style, hasKnob bool, mid *qt.QColor, base *qt.QColor) *QwtDialSimpleNeedle {

	return newQwtDialSimpleNeedle(C.QwtDialSimpleNeedle_new5((C.int)(param1), (C.bool)(hasKnob), (*C.QColor)(mid.UnsafePointer()), (*C.QColor)(base.UnsafePointer())))
}

func (this *QwtDialSimpleNeedle) SetWidth(width float64) {
	C.QwtDialSimpleNeedle_setWidth(this.h, (C.double)(width))
}

func (this *QwtDialSimpleNeedle) Width() float64 {
	return (float64)(C.QwtDialSimpleNeedle_width(this.h))
}

func (this *QwtDialSimpleNeedle) OperatorAssign(param1 *QwtDialSimpleNeedle) {
	C.QwtDialSimpleNeedle_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtDialSimpleNeedle) callVirtualBase_DrawNeedle(param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup) {

	C.QwtDialSimpleNeedle_virtualbase_drawNeedle(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(length), (C.int)(param3))

}
func (this *QwtDialSimpleNeedle) OnDrawNeedle(slot func(super func(param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup), param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup)) {
	ok := C.QwtDialSimpleNeedle_override_virtual_drawNeedle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDialSimpleNeedle_drawNeedle
func miqt_exec_callback_QwtDialSimpleNeedle_drawNeedle(self *C.QwtDialSimpleNeedle, cb C.intptr_t, param1 *C.QPainter, length C.double, param3 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup), param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(length)

	slotval3 := (qt.QPalette__ColorGroup)(param3)

	gofunc((&QwtDialSimpleNeedle{h: self}).callVirtualBase_DrawNeedle, slotval1, slotval2, slotval3)

}

func (this *QwtDialSimpleNeedle) callVirtualBase_SetPalette(palette *qt.QPalette) {

	C.QwtDialSimpleNeedle_virtualbase_setPalette(unsafe.Pointer(this.h), (*C.QPalette)(palette.UnsafePointer()))

}
func (this *QwtDialSimpleNeedle) OnSetPalette(slot func(super func(palette *qt.QPalette), palette *qt.QPalette)) {
	ok := C.QwtDialSimpleNeedle_override_virtual_setPalette(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDialSimpleNeedle_setPalette
func miqt_exec_callback_QwtDialSimpleNeedle_setPalette(self *C.QwtDialSimpleNeedle, cb C.intptr_t, palette *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(palette *qt.QPalette), palette *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPalette(unsafe.Pointer(palette))

	gofunc((&QwtDialSimpleNeedle{h: self}).callVirtualBase_SetPalette, slotval1)

}

func (this *QwtDialSimpleNeedle) callVirtualBase_Draw(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup) {

	C.QwtDialSimpleNeedle_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(length), (C.double)(direction), (C.int)(param5))

}
func (this *QwtDialSimpleNeedle) OnDraw(slot func(super func(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup), painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup)) {
	ok := C.QwtDialSimpleNeedle_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDialSimpleNeedle_draw
func miqt_exec_callback_QwtDialSimpleNeedle_draw(self *C.QwtDialSimpleNeedle, cb C.intptr_t, painter *C.QPainter, center *C.QPointF, length C.double, direction C.double, param5 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup), painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(length)

	slotval4 := (float64)(direction)

	slotval5 := (qt.QPalette__ColorGroup)(param5)

	gofunc((&QwtDialSimpleNeedle{h: self}).callVirtualBase_Draw, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QwtDialSimpleNeedle) callVirtualBase_DrawKnob(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool) {

	C.QwtDialSimpleNeedle_virtualbase_drawKnob(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(width), (*C.QBrush)(param3.UnsafePointer()), (C.bool)(sunken))

}
func (this *QwtDialSimpleNeedle) OnDrawKnob(slot func(super func(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool), param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool)) {
	ok := C.QwtDialSimpleNeedle_override_virtual_drawKnob(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDialSimpleNeedle_drawKnob
func miqt_exec_callback_QwtDialSimpleNeedle_drawKnob(self *C.QwtDialSimpleNeedle, cb C.intptr_t, param1 *C.QPainter, width C.double, param3 *C.QBrush, sunken C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool), param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(width)

	slotval3 := qt.UnsafeNewQBrush(unsafe.Pointer(param3))

	slotval4 := (bool)(sunken)

	gofunc((&QwtDialSimpleNeedle{h: self}).callVirtualBase_DrawKnob, slotval1, slotval2, slotval3, slotval4)

}

// Delete this object from C++ memory.
func (this *QwtDialSimpleNeedle) Delete() {
	C.QwtDialSimpleNeedle_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtDialSimpleNeedle) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtDialSimpleNeedle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtCompassMagnetNeedle struct {
	h *C.QwtCompassMagnetNeedle
	*QwtDialNeedle
}

func (this *QwtCompassMagnetNeedle) cPointer() *C.QwtCompassMagnetNeedle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtCompassMagnetNeedle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtCompassMagnetNeedle constructs the type using only CGO pointers.
func newQwtCompassMagnetNeedle(h *C.QwtCompassMagnetNeedle) *QwtCompassMagnetNeedle {
	if h == nil {
		return nil
	}
	var outptr_QwtDialNeedle *C.QwtDialNeedle = nil
	C.QwtCompassMagnetNeedle_virtbase(h, &outptr_QwtDialNeedle)

	return &QwtCompassMagnetNeedle{h: h,
		QwtDialNeedle: newQwtDialNeedle(outptr_QwtDialNeedle)}
}

// UnsafeNewQwtCompassMagnetNeedle constructs the type using only unsafe pointers.
func UnsafeNewQwtCompassMagnetNeedle(h unsafe.Pointer) *QwtCompassMagnetNeedle {
	return newQwtCompassMagnetNeedle((*C.QwtCompassMagnetNeedle)(h))
}

// NewQwtCompassMagnetNeedle constructs a new QwtCompassMagnetNeedle object.
func NewQwtCompassMagnetNeedle() *QwtCompassMagnetNeedle {

	return newQwtCompassMagnetNeedle(C.QwtCompassMagnetNeedle_new())
}

// NewQwtCompassMagnetNeedle2 constructs a new QwtCompassMagnetNeedle object.
func NewQwtCompassMagnetNeedle2(param1 *QwtCompassMagnetNeedle) *QwtCompassMagnetNeedle {

	return newQwtCompassMagnetNeedle(C.QwtCompassMagnetNeedle_new2(param1.cPointer()))
}

// NewQwtCompassMagnetNeedle3 constructs a new QwtCompassMagnetNeedle object.
func NewQwtCompassMagnetNeedle3(param1 QwtCompassMagnetNeedle__Style) *QwtCompassMagnetNeedle {

	return newQwtCompassMagnetNeedle(C.QwtCompassMagnetNeedle_new3((C.int)(param1)))
}

// NewQwtCompassMagnetNeedle4 constructs a new QwtCompassMagnetNeedle object.
func NewQwtCompassMagnetNeedle4(param1 QwtCompassMagnetNeedle__Style, light *qt.QColor) *QwtCompassMagnetNeedle {

	return newQwtCompassMagnetNeedle(C.QwtCompassMagnetNeedle_new4((C.int)(param1), (*C.QColor)(light.UnsafePointer())))
}

// NewQwtCompassMagnetNeedle5 constructs a new QwtCompassMagnetNeedle object.
func NewQwtCompassMagnetNeedle5(param1 QwtCompassMagnetNeedle__Style, light *qt.QColor, dark *qt.QColor) *QwtCompassMagnetNeedle {

	return newQwtCompassMagnetNeedle(C.QwtCompassMagnetNeedle_new5((C.int)(param1), (*C.QColor)(light.UnsafePointer()), (*C.QColor)(dark.UnsafePointer())))
}

func (this *QwtCompassMagnetNeedle) OperatorAssign(param1 *QwtCompassMagnetNeedle) {
	C.QwtCompassMagnetNeedle_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtCompassMagnetNeedle) callVirtualBase_DrawNeedle(param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup) {

	C.QwtCompassMagnetNeedle_virtualbase_drawNeedle(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(length), (C.int)(param3))

}
func (this *QwtCompassMagnetNeedle) OnDrawNeedle(slot func(super func(param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup), param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup)) {
	ok := C.QwtCompassMagnetNeedle_override_virtual_drawNeedle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassMagnetNeedle_drawNeedle
func miqt_exec_callback_QwtCompassMagnetNeedle_drawNeedle(self *C.QwtCompassMagnetNeedle, cb C.intptr_t, param1 *C.QPainter, length C.double, param3 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup), param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(length)

	slotval3 := (qt.QPalette__ColorGroup)(param3)

	gofunc((&QwtCompassMagnetNeedle{h: self}).callVirtualBase_DrawNeedle, slotval1, slotval2, slotval3)

}

func (this *QwtCompassMagnetNeedle) callVirtualBase_SetPalette(palette *qt.QPalette) {

	C.QwtCompassMagnetNeedle_virtualbase_setPalette(unsafe.Pointer(this.h), (*C.QPalette)(palette.UnsafePointer()))

}
func (this *QwtCompassMagnetNeedle) OnSetPalette(slot func(super func(palette *qt.QPalette), palette *qt.QPalette)) {
	ok := C.QwtCompassMagnetNeedle_override_virtual_setPalette(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassMagnetNeedle_setPalette
func miqt_exec_callback_QwtCompassMagnetNeedle_setPalette(self *C.QwtCompassMagnetNeedle, cb C.intptr_t, palette *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(palette *qt.QPalette), palette *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPalette(unsafe.Pointer(palette))

	gofunc((&QwtCompassMagnetNeedle{h: self}).callVirtualBase_SetPalette, slotval1)

}

func (this *QwtCompassMagnetNeedle) callVirtualBase_Draw(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup) {

	C.QwtCompassMagnetNeedle_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(length), (C.double)(direction), (C.int)(param5))

}
func (this *QwtCompassMagnetNeedle) OnDraw(slot func(super func(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup), painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup)) {
	ok := C.QwtCompassMagnetNeedle_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassMagnetNeedle_draw
func miqt_exec_callback_QwtCompassMagnetNeedle_draw(self *C.QwtCompassMagnetNeedle, cb C.intptr_t, painter *C.QPainter, center *C.QPointF, length C.double, direction C.double, param5 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup), painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(length)

	slotval4 := (float64)(direction)

	slotval5 := (qt.QPalette__ColorGroup)(param5)

	gofunc((&QwtCompassMagnetNeedle{h: self}).callVirtualBase_Draw, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QwtCompassMagnetNeedle) callVirtualBase_DrawKnob(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool) {

	C.QwtCompassMagnetNeedle_virtualbase_drawKnob(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(width), (*C.QBrush)(param3.UnsafePointer()), (C.bool)(sunken))

}
func (this *QwtCompassMagnetNeedle) OnDrawKnob(slot func(super func(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool), param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool)) {
	ok := C.QwtCompassMagnetNeedle_override_virtual_drawKnob(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassMagnetNeedle_drawKnob
func miqt_exec_callback_QwtCompassMagnetNeedle_drawKnob(self *C.QwtCompassMagnetNeedle, cb C.intptr_t, param1 *C.QPainter, width C.double, param3 *C.QBrush, sunken C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool), param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(width)

	slotval3 := qt.UnsafeNewQBrush(unsafe.Pointer(param3))

	slotval4 := (bool)(sunken)

	gofunc((&QwtCompassMagnetNeedle{h: self}).callVirtualBase_DrawKnob, slotval1, slotval2, slotval3, slotval4)

}

// Delete this object from C++ memory.
func (this *QwtCompassMagnetNeedle) Delete() {
	C.QwtCompassMagnetNeedle_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtCompassMagnetNeedle) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtCompassMagnetNeedle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtCompassWindArrow struct {
	h *C.QwtCompassWindArrow
	*QwtDialNeedle
}

func (this *QwtCompassWindArrow) cPointer() *C.QwtCompassWindArrow {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtCompassWindArrow) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtCompassWindArrow constructs the type using only CGO pointers.
func newQwtCompassWindArrow(h *C.QwtCompassWindArrow) *QwtCompassWindArrow {
	if h == nil {
		return nil
	}
	var outptr_QwtDialNeedle *C.QwtDialNeedle = nil
	C.QwtCompassWindArrow_virtbase(h, &outptr_QwtDialNeedle)

	return &QwtCompassWindArrow{h: h,
		QwtDialNeedle: newQwtDialNeedle(outptr_QwtDialNeedle)}
}

// UnsafeNewQwtCompassWindArrow constructs the type using only unsafe pointers.
func UnsafeNewQwtCompassWindArrow(h unsafe.Pointer) *QwtCompassWindArrow {
	return newQwtCompassWindArrow((*C.QwtCompassWindArrow)(h))
}

// NewQwtCompassWindArrow constructs a new QwtCompassWindArrow object.
func NewQwtCompassWindArrow(param1 QwtCompassWindArrow__Style) *QwtCompassWindArrow {

	return newQwtCompassWindArrow(C.QwtCompassWindArrow_new((C.int)(param1)))
}

// NewQwtCompassWindArrow2 constructs a new QwtCompassWindArrow object.
func NewQwtCompassWindArrow2(param1 *QwtCompassWindArrow) *QwtCompassWindArrow {

	return newQwtCompassWindArrow(C.QwtCompassWindArrow_new2(param1.cPointer()))
}

// NewQwtCompassWindArrow3 constructs a new QwtCompassWindArrow object.
func NewQwtCompassWindArrow3(param1 QwtCompassWindArrow__Style, light *qt.QColor) *QwtCompassWindArrow {

	return newQwtCompassWindArrow(C.QwtCompassWindArrow_new3((C.int)(param1), (*C.QColor)(light.UnsafePointer())))
}

// NewQwtCompassWindArrow4 constructs a new QwtCompassWindArrow object.
func NewQwtCompassWindArrow4(param1 QwtCompassWindArrow__Style, light *qt.QColor, dark *qt.QColor) *QwtCompassWindArrow {

	return newQwtCompassWindArrow(C.QwtCompassWindArrow_new4((C.int)(param1), (*C.QColor)(light.UnsafePointer()), (*C.QColor)(dark.UnsafePointer())))
}

func (this *QwtCompassWindArrow) OperatorAssign(param1 *QwtCompassWindArrow) {
	C.QwtCompassWindArrow_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtCompassWindArrow) callVirtualBase_DrawNeedle(param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup) {

	C.QwtCompassWindArrow_virtualbase_drawNeedle(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(length), (C.int)(param3))

}
func (this *QwtCompassWindArrow) OnDrawNeedle(slot func(super func(param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup), param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup)) {
	ok := C.QwtCompassWindArrow_override_virtual_drawNeedle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassWindArrow_drawNeedle
func miqt_exec_callback_QwtCompassWindArrow_drawNeedle(self *C.QwtCompassWindArrow, cb C.intptr_t, param1 *C.QPainter, length C.double, param3 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup), param1 *qt.QPainter, length float64, param3 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(length)

	slotval3 := (qt.QPalette__ColorGroup)(param3)

	gofunc((&QwtCompassWindArrow{h: self}).callVirtualBase_DrawNeedle, slotval1, slotval2, slotval3)

}

func (this *QwtCompassWindArrow) callVirtualBase_SetPalette(palette *qt.QPalette) {

	C.QwtCompassWindArrow_virtualbase_setPalette(unsafe.Pointer(this.h), (*C.QPalette)(palette.UnsafePointer()))

}
func (this *QwtCompassWindArrow) OnSetPalette(slot func(super func(palette *qt.QPalette), palette *qt.QPalette)) {
	ok := C.QwtCompassWindArrow_override_virtual_setPalette(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassWindArrow_setPalette
func miqt_exec_callback_QwtCompassWindArrow_setPalette(self *C.QwtCompassWindArrow, cb C.intptr_t, palette *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(palette *qt.QPalette), palette *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPalette(unsafe.Pointer(palette))

	gofunc((&QwtCompassWindArrow{h: self}).callVirtualBase_SetPalette, slotval1)

}

func (this *QwtCompassWindArrow) callVirtualBase_Draw(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup) {

	C.QwtCompassWindArrow_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(length), (C.double)(direction), (C.int)(param5))

}
func (this *QwtCompassWindArrow) OnDraw(slot func(super func(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup), painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup)) {
	ok := C.QwtCompassWindArrow_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassWindArrow_draw
func miqt_exec_callback_QwtCompassWindArrow_draw(self *C.QwtCompassWindArrow, cb C.intptr_t, painter *C.QPainter, center *C.QPointF, length C.double, direction C.double, param5 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup), painter *qt.QPainter, center *qt.QPointF, length float64, direction float64, param5 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(length)

	slotval4 := (float64)(direction)

	slotval5 := (qt.QPalette__ColorGroup)(param5)

	gofunc((&QwtCompassWindArrow{h: self}).callVirtualBase_Draw, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QwtCompassWindArrow) callVirtualBase_DrawKnob(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool) {

	C.QwtCompassWindArrow_virtualbase_drawKnob(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(width), (*C.QBrush)(param3.UnsafePointer()), (C.bool)(sunken))

}
func (this *QwtCompassWindArrow) OnDrawKnob(slot func(super func(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool), param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool)) {
	ok := C.QwtCompassWindArrow_override_virtual_drawKnob(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassWindArrow_drawKnob
func miqt_exec_callback_QwtCompassWindArrow_drawKnob(self *C.QwtCompassWindArrow, cb C.intptr_t, param1 *C.QPainter, width C.double, param3 *C.QBrush, sunken C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool), param1 *qt.QPainter, width float64, param3 *qt.QBrush, sunken bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(width)

	slotval3 := qt.UnsafeNewQBrush(unsafe.Pointer(param3))

	slotval4 := (bool)(sunken)

	gofunc((&QwtCompassWindArrow{h: self}).callVirtualBase_DrawKnob, slotval1, slotval2, slotval3, slotval4)

}

// Delete this object from C++ memory.
func (this *QwtCompassWindArrow) Delete() {
	C.QwtCompassWindArrow_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtCompassWindArrow) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtCompassWindArrow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
