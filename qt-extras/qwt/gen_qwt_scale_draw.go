package qwt

/*

#include "gen_qwt_scale_draw.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtScaleDraw__Alignment int

const (
	QwtScaleDraw__BottomScale QwtScaleDraw__Alignment = 0
	QwtScaleDraw__TopScale    QwtScaleDraw__Alignment = 1
	QwtScaleDraw__LeftScale   QwtScaleDraw__Alignment = 2
	QwtScaleDraw__RightScale  QwtScaleDraw__Alignment = 3
)

type QwtScaleDraw struct {
	h *C.QwtScaleDraw
	*QwtAbstractScaleDraw
}

func (this *QwtScaleDraw) cPointer() *C.QwtScaleDraw {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtScaleDraw) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtScaleDraw constructs the type using only CGO pointers.
func newQwtScaleDraw(h *C.QwtScaleDraw) *QwtScaleDraw {
	if h == nil {
		return nil
	}
	var outptr_QwtAbstractScaleDraw *C.QwtAbstractScaleDraw = nil
	C.QwtScaleDraw_virtbase(h, &outptr_QwtAbstractScaleDraw)

	return &QwtScaleDraw{h: h,
		QwtAbstractScaleDraw: newQwtAbstractScaleDraw(outptr_QwtAbstractScaleDraw)}
}

// UnsafeNewQwtScaleDraw constructs the type using only unsafe pointers.
func UnsafeNewQwtScaleDraw(h unsafe.Pointer) *QwtScaleDraw {
	return newQwtScaleDraw((*C.QwtScaleDraw)(h))
}

// NewQwtScaleDraw constructs a new QwtScaleDraw object.
func NewQwtScaleDraw() *QwtScaleDraw {

	return newQwtScaleDraw(C.QwtScaleDraw_new())
}

func (this *QwtScaleDraw) GetBorderDistHint(param1 *qt.QFont, start *int, end *int) {
	C.QwtScaleDraw_getBorderDistHint(this.h, (*C.QFont)(param1.UnsafePointer()), (*C.int)(unsafe.Pointer(start)), (*C.int)(unsafe.Pointer(end)))
}

func (this *QwtScaleDraw) MinLabelDist(param1 *qt.QFont) int {
	return (int)(C.QwtScaleDraw_minLabelDist(this.h, (*C.QFont)(param1.UnsafePointer())))
}

func (this *QwtScaleDraw) MinLength(param1 *qt.QFont) int {
	return (int)(C.QwtScaleDraw_minLength(this.h, (*C.QFont)(param1.UnsafePointer())))
}

func (this *QwtScaleDraw) Extent(param1 *qt.QFont) float64 {
	return (float64)(C.QwtScaleDraw_extent(this.h, (*C.QFont)(param1.UnsafePointer())))
}

func (this *QwtScaleDraw) Move(x float64, y float64) {
	C.QwtScaleDraw_move(this.h, (C.double)(x), (C.double)(y))
}

func (this *QwtScaleDraw) MoveWithQPointF(param1 *qt.QPointF) {
	C.QwtScaleDraw_moveWithQPointF(this.h, (*C.QPointF)(param1.UnsafePointer()))
}

func (this *QwtScaleDraw) SetLength(length float64) {
	C.QwtScaleDraw_setLength(this.h, (C.double)(length))
}

func (this *QwtScaleDraw) Alignment() QwtScaleDraw__Alignment {
	return (QwtScaleDraw__Alignment)(C.QwtScaleDraw_alignment(this.h))
}

func (this *QwtScaleDraw) SetAlignment(alignment QwtScaleDraw__Alignment) {
	C.QwtScaleDraw_setAlignment(this.h, (C.int)(alignment))
}

func (this *QwtScaleDraw) Orientation() qt.Orientation {
	return (qt.Orientation)(C.QwtScaleDraw_orientation(this.h))
}

func (this *QwtScaleDraw) Pos() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtScaleDraw_pos(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleDraw) Length() float64 {
	return (float64)(C.QwtScaleDraw_length(this.h))
}

func (this *QwtScaleDraw) SetLabelAlignment(labelAlignment qt.AlignmentFlag) {
	C.QwtScaleDraw_setLabelAlignment(this.h, (C.int)(labelAlignment))
}

func (this *QwtScaleDraw) LabelAlignment() qt.AlignmentFlag {
	return (qt.AlignmentFlag)(C.QwtScaleDraw_labelAlignment(this.h))
}

func (this *QwtScaleDraw) SetLabelRotation(rotation float64) {
	C.QwtScaleDraw_setLabelRotation(this.h, (C.double)(rotation))
}

func (this *QwtScaleDraw) LabelRotation() float64 {
	return (float64)(C.QwtScaleDraw_labelRotation(this.h))
}

func (this *QwtScaleDraw) MaxLabelHeight(param1 *qt.QFont) int {
	return (int)(C.QwtScaleDraw_maxLabelHeight(this.h, (*C.QFont)(param1.UnsafePointer())))
}

func (this *QwtScaleDraw) MaxLabelWidth(param1 *qt.QFont) int {
	return (int)(C.QwtScaleDraw_maxLabelWidth(this.h, (*C.QFont)(param1.UnsafePointer())))
}

func (this *QwtScaleDraw) LabelPosition(value float64) *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtScaleDraw_labelPosition(this.h, (C.double)(value))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleDraw) LabelRect(param1 *qt.QFont, value float64) *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtScaleDraw_labelRect(this.h, (*C.QFont)(param1.UnsafePointer()), (C.double)(value))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleDraw) LabelSize(param1 *qt.QFont, value float64) *qt.QSizeF {
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtScaleDraw_labelSize(this.h, (*C.QFont)(param1.UnsafePointer()), (C.double)(value))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleDraw) BoundingLabelRect(param1 *qt.QFont, value float64) *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtScaleDraw_boundingLabelRect(this.h, (*C.QFont)(param1.UnsafePointer()), (C.double)(value))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// LabelTransformation can only be called from a QwtScaleDraw that was directly constructed.
func (this *QwtScaleDraw) LabelTransformation(param1 *qt.QPointF, param2 *qt.QSizeF) qt.QTransform {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQTransform(unsafe.Pointer(C.QwtScaleDraw_protectedbase_labelTransformation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer()), (*C.QSizeF)(param2.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// InvalidateCache can only be called from a QwtScaleDraw that was directly constructed.
func (this *QwtScaleDraw) InvalidateCache() {

	var _dynamic_cast_ok C.bool = false
	C.QwtScaleDraw_protectedbase_invalidateCache(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// TickLabel can only be called from a QwtScaleDraw that was directly constructed.
func (this *QwtScaleDraw) TickLabel(param1 *qt.QFont, value float64) *QwtText {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtText(C.QwtScaleDraw_protectedbase_tickLabel(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()), (C.double)(value)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtScaleDraw) callVirtualBase_Extent(param1 *qt.QFont) float64 {

	return (float64)(C.QwtScaleDraw_virtualbase_extent(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer())))

}
func (this *QwtScaleDraw) OnExtent(slot func(super func(param1 *qt.QFont) float64, param1 *qt.QFont) float64) {
	ok := C.QwtScaleDraw_override_virtual_extent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleDraw_extent
func miqt_exec_callback_QwtScaleDraw_extent(self *C.QwtScaleDraw, cb C.intptr_t, param1 *C.QFont) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFont) float64, param1 *qt.QFont) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtScaleDraw{h: self}).callVirtualBase_Extent, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtScaleDraw) callVirtualBase_DrawTick(param1 *qt.QPainter, value float64, lenVal float64) {

	C.QwtScaleDraw_virtualbase_drawTick(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(value), (C.double)(lenVal))

}
func (this *QwtScaleDraw) OnDrawTick(slot func(super func(param1 *qt.QPainter, value float64, lenVal float64), param1 *qt.QPainter, value float64, lenVal float64)) {
	ok := C.QwtScaleDraw_override_virtual_drawTick(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleDraw_drawTick
func miqt_exec_callback_QwtScaleDraw_drawTick(self *C.QwtScaleDraw, cb C.intptr_t, param1 *C.QPainter, value C.double, lenVal C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, value float64, lenVal float64), param1 *qt.QPainter, value float64, lenVal float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(value)

	slotval3 := (float64)(lenVal)

	gofunc((&QwtScaleDraw{h: self}).callVirtualBase_DrawTick, slotval1, slotval2, slotval3)

}

func (this *QwtScaleDraw) callVirtualBase_DrawBackbone(param1 *qt.QPainter) {

	C.QwtScaleDraw_virtualbase_drawBackbone(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtScaleDraw) OnDrawBackbone(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtScaleDraw_override_virtual_drawBackbone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleDraw_drawBackbone
func miqt_exec_callback_QwtScaleDraw_drawBackbone(self *C.QwtScaleDraw, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtScaleDraw{h: self}).callVirtualBase_DrawBackbone, slotval1)

}

func (this *QwtScaleDraw) callVirtualBase_DrawLabel(param1 *qt.QPainter, value float64) {

	C.QwtScaleDraw_virtualbase_drawLabel(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(value))

}
func (this *QwtScaleDraw) OnDrawLabel(slot func(super func(param1 *qt.QPainter, value float64), param1 *qt.QPainter, value float64)) {
	ok := C.QwtScaleDraw_override_virtual_drawLabel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleDraw_drawLabel
func miqt_exec_callback_QwtScaleDraw_drawLabel(self *C.QwtScaleDraw, cb C.intptr_t, param1 *C.QPainter, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, value float64), param1 *qt.QPainter, value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(value)

	gofunc((&QwtScaleDraw{h: self}).callVirtualBase_DrawLabel, slotval1, slotval2)

}

func (this *QwtScaleDraw) callVirtualBase_Draw(param1 *qt.QPainter, param2 *qt.QPalette) {

	C.QwtScaleDraw_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPalette)(param2.UnsafePointer()))

}
func (this *QwtScaleDraw) OnDraw(slot func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette)) {
	ok := C.QwtScaleDraw_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleDraw_draw
func miqt_exec_callback_QwtScaleDraw_draw(self *C.QwtScaleDraw, cb C.intptr_t, param1 *C.QPainter, param2 *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPalette(unsafe.Pointer(param2))

	gofunc((&QwtScaleDraw{h: self}).callVirtualBase_Draw, slotval1, slotval2)

}

func (this *QwtScaleDraw) callVirtualBase_Label(param1 float64) *QwtText {

	_goptr := newQwtText(C.QwtScaleDraw_virtualbase_label(unsafe.Pointer(this.h), (C.double)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtScaleDraw) OnLabel(slot func(super func(param1 float64) *QwtText, param1 float64) *QwtText) {
	ok := C.QwtScaleDraw_override_virtual_label(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleDraw_label
func miqt_exec_callback_QwtScaleDraw_label(self *C.QwtScaleDraw, cb C.intptr_t, param1 C.double) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 float64) *QwtText, param1 float64) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	virtualReturn := gofunc((&QwtScaleDraw{h: self}).callVirtualBase_Label, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QwtScaleDraw) Delete() {
	C.QwtScaleDraw_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtScaleDraw) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtScaleDraw) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
