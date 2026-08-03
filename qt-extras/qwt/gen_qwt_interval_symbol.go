package qwt

/*

#include "gen_qwt_interval_symbol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtIntervalSymbol__Style int

const (
	QwtIntervalSymbol__NoSymbol   QwtIntervalSymbol__Style = -1
	QwtIntervalSymbol__Bar        QwtIntervalSymbol__Style = 0
	QwtIntervalSymbol__Box        QwtIntervalSymbol__Style = 1
	QwtIntervalSymbol__UserSymbol QwtIntervalSymbol__Style = 1000
)

type QwtIntervalSymbol struct {
	h *C.QwtIntervalSymbol
}

func (this *QwtIntervalSymbol) cPointer() *C.QwtIntervalSymbol {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtIntervalSymbol) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtIntervalSymbol constructs the type using only CGO pointers.
func newQwtIntervalSymbol(h *C.QwtIntervalSymbol) *QwtIntervalSymbol {
	if h == nil {
		return nil
	}

	return &QwtIntervalSymbol{h: h}
}

// UnsafeNewQwtIntervalSymbol constructs the type using only unsafe pointers.
func UnsafeNewQwtIntervalSymbol(h unsafe.Pointer) *QwtIntervalSymbol {
	return newQwtIntervalSymbol((*C.QwtIntervalSymbol)(h))
}

// NewQwtIntervalSymbol constructs a new QwtIntervalSymbol object.
func NewQwtIntervalSymbol() *QwtIntervalSymbol {

	return newQwtIntervalSymbol(C.QwtIntervalSymbol_new())
}

// NewQwtIntervalSymbol2 constructs a new QwtIntervalSymbol object.
func NewQwtIntervalSymbol2(param1 *QwtIntervalSymbol) *QwtIntervalSymbol {

	return newQwtIntervalSymbol(C.QwtIntervalSymbol_new2(param1.cPointer()))
}

// NewQwtIntervalSymbol3 constructs a new QwtIntervalSymbol object.
func NewQwtIntervalSymbol3(param1 QwtIntervalSymbol__Style) *QwtIntervalSymbol {

	return newQwtIntervalSymbol(C.QwtIntervalSymbol_new3((C.int)(param1)))
}

func (this *QwtIntervalSymbol) OperatorAssign(param1 *QwtIntervalSymbol) {
	C.QwtIntervalSymbol_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtIntervalSymbol) OperatorEqual(param1 *QwtIntervalSymbol) bool {
	return (bool)(C.QwtIntervalSymbol_operatorEqual(this.h, param1.cPointer()))
}

func (this *QwtIntervalSymbol) OperatorNotEqual(param1 *QwtIntervalSymbol) bool {
	return (bool)(C.QwtIntervalSymbol_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QwtIntervalSymbol) SetWidth(width int) {
	C.QwtIntervalSymbol_setWidth(this.h, (C.int)(width))
}

func (this *QwtIntervalSymbol) Width() int {
	return (int)(C.QwtIntervalSymbol_width(this.h))
}

func (this *QwtIntervalSymbol) SetBrush(brush *qt.QBrush) {
	C.QwtIntervalSymbol_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QwtIntervalSymbol) Brush() *qt.QBrush {
	return qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtIntervalSymbol_brush(this.h)))
}

func (this *QwtIntervalSymbol) SetPen(param1 *qt.QColor) {
	C.QwtIntervalSymbol_setPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtIntervalSymbol) SetPenWithPen(pen *qt.QPen) {
	C.QwtIntervalSymbol_setPenWithPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtIntervalSymbol) Pen() *qt.QPen {
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtIntervalSymbol_pen(this.h)))
}

func (this *QwtIntervalSymbol) SetStyle(style QwtIntervalSymbol__Style) {
	C.QwtIntervalSymbol_setStyle(this.h, (C.int)(style))
}

func (this *QwtIntervalSymbol) Style() QwtIntervalSymbol__Style {
	return (QwtIntervalSymbol__Style)(C.QwtIntervalSymbol_style(this.h))
}

func (this *QwtIntervalSymbol) Draw(param1 *qt.QPainter, param2 qt.Orientation, from *qt.QPointF, to *qt.QPointF) {
	C.QwtIntervalSymbol_draw(this.h, (*C.QPainter)(param1.UnsafePointer()), (C.int)(param2), (*C.QPointF)(from.UnsafePointer()), (*C.QPointF)(to.UnsafePointer()))
}

func (this *QwtIntervalSymbol) SetPen2(param1 *qt.QColor, width float64) {
	C.QwtIntervalSymbol_setPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtIntervalSymbol) SetPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	C.QwtIntervalSymbol_setPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

func (this *QwtIntervalSymbol) callVirtualBase_Draw(param1 *qt.QPainter, param2 qt.Orientation, from *qt.QPointF, to *qt.QPointF) {

	C.QwtIntervalSymbol_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.int)(param2), (*C.QPointF)(from.UnsafePointer()), (*C.QPointF)(to.UnsafePointer()))

}
func (this *QwtIntervalSymbol) OnDraw(slot func(super func(param1 *qt.QPainter, param2 qt.Orientation, from *qt.QPointF, to *qt.QPointF), param1 *qt.QPainter, param2 qt.Orientation, from *qt.QPointF, to *qt.QPointF)) {
	ok := C.QwtIntervalSymbol_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtIntervalSymbol_draw
func miqt_exec_callback_QwtIntervalSymbol_draw(self *C.QwtIntervalSymbol, cb C.intptr_t, param1 *C.QPainter, param2 C.int, from *C.QPointF, to *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 qt.Orientation, from *qt.QPointF, to *qt.QPointF), param1 *qt.QPainter, param2 qt.Orientation, from *qt.QPointF, to *qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (qt.Orientation)(param2)

	slotval3 := qt.UnsafeNewQPointF(unsafe.Pointer(from))

	slotval4 := qt.UnsafeNewQPointF(unsafe.Pointer(to))

	gofunc((&QwtIntervalSymbol{h: self}).callVirtualBase_Draw, slotval1, slotval2, slotval3, slotval4)

}

// Delete this object from C++ memory.
func (this *QwtIntervalSymbol) Delete() {
	C.QwtIntervalSymbol_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtIntervalSymbol) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtIntervalSymbol) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
