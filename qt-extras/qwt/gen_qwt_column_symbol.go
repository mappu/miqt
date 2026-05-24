package qwt

/*

#include "gen_qwt_column_symbol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtColumnRect__Direction int

const (
	QwtColumnRect__LeftToRight QwtColumnRect__Direction = 0
	QwtColumnRect__RightToLeft QwtColumnRect__Direction = 1
	QwtColumnRect__BottomToTop QwtColumnRect__Direction = 2
	QwtColumnRect__TopToBottom QwtColumnRect__Direction = 3
)

type QwtColumnSymbol__Style int

const (
	QwtColumnSymbol__NoStyle   QwtColumnSymbol__Style = -1
	QwtColumnSymbol__Box       QwtColumnSymbol__Style = 0
	QwtColumnSymbol__UserStyle QwtColumnSymbol__Style = 1000
)

type QwtColumnSymbol__FrameStyle int

const (
	QwtColumnSymbol__NoFrame QwtColumnSymbol__FrameStyle = 0
	QwtColumnSymbol__Plain   QwtColumnSymbol__FrameStyle = 1
	QwtColumnSymbol__Raised  QwtColumnSymbol__FrameStyle = 2
)

type QwtColumnRect struct {
	h *C.QwtColumnRect
}

func (this *QwtColumnRect) cPointer() *C.QwtColumnRect {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtColumnRect) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtColumnRect constructs the type using only CGO pointers.
func newQwtColumnRect(h *C.QwtColumnRect) *QwtColumnRect {
	if h == nil {
		return nil
	}

	return &QwtColumnRect{h: h}
}

// UnsafeNewQwtColumnRect constructs the type using only unsafe pointers.
func UnsafeNewQwtColumnRect(h unsafe.Pointer) *QwtColumnRect {
	return newQwtColumnRect((*C.QwtColumnRect)(h))
}

// NewQwtColumnRect constructs a new QwtColumnRect object.
func NewQwtColumnRect() *QwtColumnRect {

	return newQwtColumnRect(C.QwtColumnRect_new())
}

func (this *QwtColumnRect) ToRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtColumnRect_toRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtColumnRect) Orientation() qt.Orientation {
	return (qt.Orientation)(C.QwtColumnRect_orientation(this.h))
}

func (this *QwtColumnRect) HInterval() *QwtInterval {
	hInterval_goptr := newQwtInterval(C.QwtColumnRect_hInterval(this.h))
	hInterval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return hInterval_goptr
}

func (this *QwtColumnRect) SetHInterval(hInterval QwtInterval) {
	C.QwtColumnRect_setHInterval(this.h, hInterval.cPointer())
}

func (this *QwtColumnRect) VInterval() *QwtInterval {
	vInterval_goptr := newQwtInterval(C.QwtColumnRect_vInterval(this.h))
	vInterval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return vInterval_goptr
}

func (this *QwtColumnRect) SetVInterval(vInterval QwtInterval) {
	C.QwtColumnRect_setVInterval(this.h, vInterval.cPointer())
}

func (this *QwtColumnRect) Direction() QwtColumnRect__Direction {
	return (QwtColumnRect__Direction)(C.QwtColumnRect_direction(this.h))
}

func (this *QwtColumnRect) SetDirection(direction QwtColumnRect__Direction) {
	C.QwtColumnRect_setDirection(this.h, (C.int)(direction))
}

// Delete this object from C++ memory.
func (this *QwtColumnRect) Delete() {
	C.QwtColumnRect_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtColumnRect) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtColumnRect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtColumnSymbol struct {
	h *C.QwtColumnSymbol
}

func (this *QwtColumnSymbol) cPointer() *C.QwtColumnSymbol {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtColumnSymbol) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtColumnSymbol constructs the type using only CGO pointers.
func newQwtColumnSymbol(h *C.QwtColumnSymbol) *QwtColumnSymbol {
	if h == nil {
		return nil
	}

	return &QwtColumnSymbol{h: h}
}

// UnsafeNewQwtColumnSymbol constructs the type using only unsafe pointers.
func UnsafeNewQwtColumnSymbol(h unsafe.Pointer) *QwtColumnSymbol {
	return newQwtColumnSymbol((*C.QwtColumnSymbol)(h))
}

// NewQwtColumnSymbol constructs a new QwtColumnSymbol object.
func NewQwtColumnSymbol() *QwtColumnSymbol {

	return newQwtColumnSymbol(C.QwtColumnSymbol_new())
}

// NewQwtColumnSymbol2 constructs a new QwtColumnSymbol object.
func NewQwtColumnSymbol2(param1 QwtColumnSymbol__Style) *QwtColumnSymbol {

	return newQwtColumnSymbol(C.QwtColumnSymbol_new2((C.int)(param1)))
}

func (this *QwtColumnSymbol) SetFrameStyle(frameStyle QwtColumnSymbol__FrameStyle) {
	C.QwtColumnSymbol_setFrameStyle(this.h, (C.int)(frameStyle))
}

func (this *QwtColumnSymbol) FrameStyle() QwtColumnSymbol__FrameStyle {
	return (QwtColumnSymbol__FrameStyle)(C.QwtColumnSymbol_frameStyle(this.h))
}

func (this *QwtColumnSymbol) SetLineWidth(width int) {
	C.QwtColumnSymbol_setLineWidth(this.h, (C.int)(width))
}

func (this *QwtColumnSymbol) LineWidth() int {
	return (int)(C.QwtColumnSymbol_lineWidth(this.h))
}

func (this *QwtColumnSymbol) SetPalette(palette *qt.QPalette) {
	C.QwtColumnSymbol_setPalette(this.h, (*C.QPalette)(palette.UnsafePointer()))
}

func (this *QwtColumnSymbol) Palette() *qt.QPalette {
	return qt.UnsafeNewQPalette(unsafe.Pointer(C.QwtColumnSymbol_palette(this.h)))
}

func (this *QwtColumnSymbol) SetStyle(style QwtColumnSymbol__Style) {
	C.QwtColumnSymbol_setStyle(this.h, (C.int)(style))
}

func (this *QwtColumnSymbol) Style() QwtColumnSymbol__Style {
	return (QwtColumnSymbol__Style)(C.QwtColumnSymbol_style(this.h))
}

func (this *QwtColumnSymbol) Draw(param1 *qt.QPainter, param2 *QwtColumnRect) {
	C.QwtColumnSymbol_draw(this.h, (*C.QPainter)(param1.UnsafePointer()), param2.cPointer())
}

func (this *QwtColumnSymbol) OperatorAssign(param1 *QwtColumnSymbol) {
	C.QwtColumnSymbol_operatorAssign(this.h, param1.cPointer())
}

// DrawBox can only be called from a QwtColumnSymbol that was directly constructed.
func (this *QwtColumnSymbol) DrawBox(param1 *qt.QPainter, param2 *QwtColumnRect) {

	var _dynamic_cast_ok C.bool = false
	C.QwtColumnSymbol_protectedbase_drawBox(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), param2.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QwtColumnSymbol) callVirtualBase_Draw(param1 *qt.QPainter, param2 *QwtColumnRect) {

	C.QwtColumnSymbol_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), param2.cPointer())

}
func (this *QwtColumnSymbol) OnDraw(slot func(super func(param1 *qt.QPainter, param2 *QwtColumnRect), param1 *qt.QPainter, param2 *QwtColumnRect)) {
	ok := C.QwtColumnSymbol_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtColumnSymbol_draw
func miqt_exec_callback_QwtColumnSymbol_draw(self *C.QwtColumnSymbol, cb C.intptr_t, param1 *C.QPainter, param2 *C.QwtColumnRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *QwtColumnRect), param1 *qt.QPainter, param2 *QwtColumnRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := newQwtColumnRect(param2)

	gofunc((&QwtColumnSymbol{h: self}).callVirtualBase_Draw, slotval1, slotval2)

}

// Delete this object from C++ memory.
func (this *QwtColumnSymbol) Delete() {
	C.QwtColumnSymbol_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtColumnSymbol) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtColumnSymbol) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
