package qwt

/*

#include "gen_qwt_round_scale_draw.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtRoundScaleDraw struct {
	h *C.QwtRoundScaleDraw
	*QwtAbstractScaleDraw
}

func (this *QwtRoundScaleDraw) cPointer() *C.QwtRoundScaleDraw {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtRoundScaleDraw) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtRoundScaleDraw constructs the type using only CGO pointers.
func newQwtRoundScaleDraw(h *C.QwtRoundScaleDraw) *QwtRoundScaleDraw {
	if h == nil {
		return nil
	}
	var outptr_QwtAbstractScaleDraw *C.QwtAbstractScaleDraw = nil
	C.QwtRoundScaleDraw_virtbase(h, &outptr_QwtAbstractScaleDraw)

	return &QwtRoundScaleDraw{h: h,
		QwtAbstractScaleDraw: newQwtAbstractScaleDraw(outptr_QwtAbstractScaleDraw)}
}

// UnsafeNewQwtRoundScaleDraw constructs the type using only unsafe pointers.
func UnsafeNewQwtRoundScaleDraw(h unsafe.Pointer) *QwtRoundScaleDraw {
	return newQwtRoundScaleDraw((*C.QwtRoundScaleDraw)(h))
}

// NewQwtRoundScaleDraw constructs a new QwtRoundScaleDraw object.
func NewQwtRoundScaleDraw() *QwtRoundScaleDraw {

	return newQwtRoundScaleDraw(C.QwtRoundScaleDraw_new())
}

func (this *QwtRoundScaleDraw) SetRadius(radius float64) {
	C.QwtRoundScaleDraw_setRadius(this.h, (C.double)(radius))
}

func (this *QwtRoundScaleDraw) Radius() float64 {
	return (float64)(C.QwtRoundScaleDraw_radius(this.h))
}

func (this *QwtRoundScaleDraw) MoveCenter(x float64, y float64) {
	C.QwtRoundScaleDraw_moveCenter(this.h, (C.double)(x), (C.double)(y))
}

func (this *QwtRoundScaleDraw) MoveCenterWithQPointF(param1 *qt.QPointF) {
	C.QwtRoundScaleDraw_moveCenterWithQPointF(this.h, (*C.QPointF)(param1.UnsafePointer()))
}

func (this *QwtRoundScaleDraw) Center() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtRoundScaleDraw_center(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtRoundScaleDraw) SetAngleRange(angle1 float64, angle2 float64) {
	C.QwtRoundScaleDraw_setAngleRange(this.h, (C.double)(angle1), (C.double)(angle2))
}

func (this *QwtRoundScaleDraw) Extent(param1 *qt.QFont) float64 {
	return (float64)(C.QwtRoundScaleDraw_extent(this.h, (*C.QFont)(param1.UnsafePointer())))
}

// InvalidateCache can only be called from a QwtRoundScaleDraw that was directly constructed.
func (this *QwtRoundScaleDraw) InvalidateCache() {

	var _dynamic_cast_ok C.bool = false
	C.QwtRoundScaleDraw_protectedbase_invalidateCache(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// TickLabel can only be called from a QwtRoundScaleDraw that was directly constructed.
func (this *QwtRoundScaleDraw) TickLabel(param1 *qt.QFont, value float64) *QwtText {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtText(C.QwtRoundScaleDraw_protectedbase_tickLabel(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()), (C.double)(value)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtRoundScaleDraw) callVirtualBase_Extent(param1 *qt.QFont) float64 {

	return (float64)(C.QwtRoundScaleDraw_virtualbase_extent(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer())))

}
func (this *QwtRoundScaleDraw) OnExtent(slot func(super func(param1 *qt.QFont) float64, param1 *qt.QFont) float64) {
	ok := C.QwtRoundScaleDraw_override_virtual_extent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRoundScaleDraw_extent
func miqt_exec_callback_QwtRoundScaleDraw_extent(self *C.QwtRoundScaleDraw, cb C.intptr_t, param1 *C.QFont) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFont) float64, param1 *qt.QFont) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtRoundScaleDraw{h: self}).callVirtualBase_Extent, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtRoundScaleDraw) callVirtualBase_DrawTick(param1 *qt.QPainter, value float64, lenVal float64) {

	C.QwtRoundScaleDraw_virtualbase_drawTick(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(value), (C.double)(lenVal))

}
func (this *QwtRoundScaleDraw) OnDrawTick(slot func(super func(param1 *qt.QPainter, value float64, lenVal float64), param1 *qt.QPainter, value float64, lenVal float64)) {
	ok := C.QwtRoundScaleDraw_override_virtual_drawTick(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRoundScaleDraw_drawTick
func miqt_exec_callback_QwtRoundScaleDraw_drawTick(self *C.QwtRoundScaleDraw, cb C.intptr_t, param1 *C.QPainter, value C.double, lenVal C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, value float64, lenVal float64), param1 *qt.QPainter, value float64, lenVal float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(value)

	slotval3 := (float64)(lenVal)

	gofunc((&QwtRoundScaleDraw{h: self}).callVirtualBase_DrawTick, slotval1, slotval2, slotval3)

}

func (this *QwtRoundScaleDraw) callVirtualBase_DrawBackbone(param1 *qt.QPainter) {

	C.QwtRoundScaleDraw_virtualbase_drawBackbone(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtRoundScaleDraw) OnDrawBackbone(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtRoundScaleDraw_override_virtual_drawBackbone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRoundScaleDraw_drawBackbone
func miqt_exec_callback_QwtRoundScaleDraw_drawBackbone(self *C.QwtRoundScaleDraw, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtRoundScaleDraw{h: self}).callVirtualBase_DrawBackbone, slotval1)

}

func (this *QwtRoundScaleDraw) callVirtualBase_DrawLabel(param1 *qt.QPainter, val float64) {

	C.QwtRoundScaleDraw_virtualbase_drawLabel(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(val))

}
func (this *QwtRoundScaleDraw) OnDrawLabel(slot func(super func(param1 *qt.QPainter, val float64), param1 *qt.QPainter, val float64)) {
	ok := C.QwtRoundScaleDraw_override_virtual_drawLabel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRoundScaleDraw_drawLabel
func miqt_exec_callback_QwtRoundScaleDraw_drawLabel(self *C.QwtRoundScaleDraw, cb C.intptr_t, param1 *C.QPainter, val C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, val float64), param1 *qt.QPainter, val float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(val)

	gofunc((&QwtRoundScaleDraw{h: self}).callVirtualBase_DrawLabel, slotval1, slotval2)

}

func (this *QwtRoundScaleDraw) callVirtualBase_Draw(param1 *qt.QPainter, param2 *qt.QPalette) {

	C.QwtRoundScaleDraw_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPalette)(param2.UnsafePointer()))

}
func (this *QwtRoundScaleDraw) OnDraw(slot func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette)) {
	ok := C.QwtRoundScaleDraw_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRoundScaleDraw_draw
func miqt_exec_callback_QwtRoundScaleDraw_draw(self *C.QwtRoundScaleDraw, cb C.intptr_t, param1 *C.QPainter, param2 *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPalette(unsafe.Pointer(param2))

	gofunc((&QwtRoundScaleDraw{h: self}).callVirtualBase_Draw, slotval1, slotval2)

}

func (this *QwtRoundScaleDraw) callVirtualBase_Label(param1 float64) *QwtText {

	_goptr := newQwtText(C.QwtRoundScaleDraw_virtualbase_label(unsafe.Pointer(this.h), (C.double)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtRoundScaleDraw) OnLabel(slot func(super func(param1 float64) *QwtText, param1 float64) *QwtText) {
	ok := C.QwtRoundScaleDraw_override_virtual_label(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRoundScaleDraw_label
func miqt_exec_callback_QwtRoundScaleDraw_label(self *C.QwtRoundScaleDraw, cb C.intptr_t, param1 C.double) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 float64) *QwtText, param1 float64) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	virtualReturn := gofunc((&QwtRoundScaleDraw{h: self}).callVirtualBase_Label, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QwtRoundScaleDraw) Delete() {
	C.QwtRoundScaleDraw_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtRoundScaleDraw) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtRoundScaleDraw) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
