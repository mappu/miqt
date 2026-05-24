package qwt

/*

#include "gen_qwt_abstract_scale_draw.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtAbstractScaleDraw__ScaleComponent int

const (
	QwtAbstractScaleDraw__Backbone QwtAbstractScaleDraw__ScaleComponent = 1
	QwtAbstractScaleDraw__Ticks    QwtAbstractScaleDraw__ScaleComponent = 2
	QwtAbstractScaleDraw__Labels   QwtAbstractScaleDraw__ScaleComponent = 4
)

type QwtAbstractScaleDraw struct {
	h *C.QwtAbstractScaleDraw
}

func (this *QwtAbstractScaleDraw) cPointer() *C.QwtAbstractScaleDraw {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtAbstractScaleDraw) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtAbstractScaleDraw constructs the type using only CGO pointers.
func newQwtAbstractScaleDraw(h *C.QwtAbstractScaleDraw) *QwtAbstractScaleDraw {
	if h == nil {
		return nil
	}

	return &QwtAbstractScaleDraw{h: h}
}

// UnsafeNewQwtAbstractScaleDraw constructs the type using only unsafe pointers.
func UnsafeNewQwtAbstractScaleDraw(h unsafe.Pointer) *QwtAbstractScaleDraw {
	return newQwtAbstractScaleDraw((*C.QwtAbstractScaleDraw)(h))
}

// NewQwtAbstractScaleDraw constructs a new QwtAbstractScaleDraw object.
func NewQwtAbstractScaleDraw() *QwtAbstractScaleDraw {

	return newQwtAbstractScaleDraw(C.QwtAbstractScaleDraw_new())
}

func (this *QwtAbstractScaleDraw) SetScaleDiv(scaleDiv *QwtScaleDiv) {
	C.QwtAbstractScaleDraw_setScaleDiv(this.h, scaleDiv.cPointer())
}

func (this *QwtAbstractScaleDraw) ScaleDiv() *QwtScaleDiv {
	return newQwtScaleDiv(C.QwtAbstractScaleDraw_scaleDiv(this.h))
}

func (this *QwtAbstractScaleDraw) SetTransformation(transformation *QwtTransform) {
	C.QwtAbstractScaleDraw_setTransformation(this.h, transformation.cPointer())
}

func (this *QwtAbstractScaleDraw) EnableComponent(param1 QwtAbstractScaleDraw__ScaleComponent) {
	C.QwtAbstractScaleDraw_enableComponent(this.h, (C.int)(param1))
}

func (this *QwtAbstractScaleDraw) HasComponent(param1 QwtAbstractScaleDraw__ScaleComponent) bool {
	return (bool)(C.QwtAbstractScaleDraw_hasComponent(this.h, (C.int)(param1)))
}

func (this *QwtAbstractScaleDraw) SetTickLength(param1 QwtScaleDiv__TickType, length float64) {
	C.QwtAbstractScaleDraw_setTickLength(this.h, (C.int)(param1), (C.double)(length))
}

func (this *QwtAbstractScaleDraw) TickLength(param1 QwtScaleDiv__TickType) float64 {
	return (float64)(C.QwtAbstractScaleDraw_tickLength(this.h, (C.int)(param1)))
}

func (this *QwtAbstractScaleDraw) MaxTickLength() float64 {
	return (float64)(C.QwtAbstractScaleDraw_maxTickLength(this.h))
}

func (this *QwtAbstractScaleDraw) SetSpacing(spacing float64) {
	C.QwtAbstractScaleDraw_setSpacing(this.h, (C.double)(spacing))
}

func (this *QwtAbstractScaleDraw) Spacing() float64 {
	return (float64)(C.QwtAbstractScaleDraw_spacing(this.h))
}

func (this *QwtAbstractScaleDraw) SetPenWidth(width int) {
	C.QwtAbstractScaleDraw_setPenWidth(this.h, (C.int)(width))
}

func (this *QwtAbstractScaleDraw) PenWidth() int {
	return (int)(C.QwtAbstractScaleDraw_penWidth(this.h))
}

func (this *QwtAbstractScaleDraw) Draw(param1 *qt.QPainter, param2 *qt.QPalette) {
	C.QwtAbstractScaleDraw_draw(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QPalette)(param2.UnsafePointer()))
}

func (this *QwtAbstractScaleDraw) Label(param1 float64) *QwtText {
	_goptr := newQwtText(C.QwtAbstractScaleDraw_label(this.h, (C.double)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtAbstractScaleDraw) Extent(font *qt.QFont) float64 {
	return (float64)(C.QwtAbstractScaleDraw_extent(this.h, (*C.QFont)(font.UnsafePointer())))
}

func (this *QwtAbstractScaleDraw) SetMinimumExtent(minimumExtent float64) {
	C.QwtAbstractScaleDraw_setMinimumExtent(this.h, (C.double)(minimumExtent))
}

func (this *QwtAbstractScaleDraw) MinimumExtent() float64 {
	return (float64)(C.QwtAbstractScaleDraw_minimumExtent(this.h))
}

func (this *QwtAbstractScaleDraw) EnableComponent2(param1 QwtAbstractScaleDraw__ScaleComponent, enable bool) {
	C.QwtAbstractScaleDraw_enableComponent2(this.h, (C.int)(param1), (C.bool)(enable))
}

// InvalidateCache can only be called from a QwtAbstractScaleDraw that was directly constructed.
func (this *QwtAbstractScaleDraw) InvalidateCache() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractScaleDraw_protectedbase_invalidateCache(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// TickLabel can only be called from a QwtAbstractScaleDraw that was directly constructed.
func (this *QwtAbstractScaleDraw) TickLabel(param1 *qt.QFont, value float64) *QwtText {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtText(C.QwtAbstractScaleDraw_protectedbase_tickLabel(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()), (C.double)(value)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtAbstractScaleDraw) callVirtualBase_Draw(param1 *qt.QPainter, param2 *qt.QPalette) {

	C.QwtAbstractScaleDraw_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPalette)(param2.UnsafePointer()))

}
func (this *QwtAbstractScaleDraw) OnDraw(slot func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette)) {
	ok := C.QwtAbstractScaleDraw_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractScaleDraw_draw
func miqt_exec_callback_QwtAbstractScaleDraw_draw(self *C.QwtAbstractScaleDraw, cb C.intptr_t, param1 *C.QPainter, param2 *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPalette(unsafe.Pointer(param2))

	gofunc((&QwtAbstractScaleDraw{h: self}).callVirtualBase_Draw, slotval1, slotval2)

}

func (this *QwtAbstractScaleDraw) callVirtualBase_Label(param1 float64) *QwtText {

	_goptr := newQwtText(C.QwtAbstractScaleDraw_virtualbase_label(unsafe.Pointer(this.h), (C.double)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAbstractScaleDraw) OnLabel(slot func(super func(param1 float64) *QwtText, param1 float64) *QwtText) {
	ok := C.QwtAbstractScaleDraw_override_virtual_label(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractScaleDraw_label
func miqt_exec_callback_QwtAbstractScaleDraw_label(self *C.QwtAbstractScaleDraw, cb C.intptr_t, param1 C.double) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 float64) *QwtText, param1 float64) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	virtualReturn := gofunc((&QwtAbstractScaleDraw{h: self}).callVirtualBase_Label, slotval1)

	return virtualReturn.cPointer()

}
func (this *QwtAbstractScaleDraw) OnExtent(slot func(font *qt.QFont) float64) {
	ok := C.QwtAbstractScaleDraw_override_virtual_extent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractScaleDraw_extent
func miqt_exec_callback_QwtAbstractScaleDraw_extent(self *C.QwtAbstractScaleDraw, cb C.intptr_t, font *C.QFont) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *qt.QFont) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(font))

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}
func (this *QwtAbstractScaleDraw) OnDrawTick(slot func(painter *qt.QPainter, value float64, lenVal float64)) {
	ok := C.QwtAbstractScaleDraw_override_virtual_drawTick(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractScaleDraw_drawTick
func miqt_exec_callback_QwtAbstractScaleDraw_drawTick(self *C.QwtAbstractScaleDraw, cb C.intptr_t, painter *C.QPainter, value C.double, lenVal C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *qt.QPainter, value float64, lenVal float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := (float64)(value)

	slotval3 := (float64)(lenVal)

	gofunc(slotval1, slotval2, slotval3)

}
func (this *QwtAbstractScaleDraw) OnDrawBackbone(slot func(painter *qt.QPainter)) {
	ok := C.QwtAbstractScaleDraw_override_virtual_drawBackbone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractScaleDraw_drawBackbone
func miqt_exec_callback_QwtAbstractScaleDraw_drawBackbone(self *C.QwtAbstractScaleDraw, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc(slotval1)

}
func (this *QwtAbstractScaleDraw) OnDrawLabel(slot func(painter *qt.QPainter, value float64)) {
	ok := C.QwtAbstractScaleDraw_override_virtual_drawLabel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractScaleDraw_drawLabel
func miqt_exec_callback_QwtAbstractScaleDraw_drawLabel(self *C.QwtAbstractScaleDraw, cb C.intptr_t, painter *C.QPainter, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *qt.QPainter, value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := (float64)(value)

	gofunc(slotval1, slotval2)

}

// Delete this object from C++ memory.
func (this *QwtAbstractScaleDraw) Delete() {
	C.QwtAbstractScaleDraw_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtAbstractScaleDraw) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtAbstractScaleDraw) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
