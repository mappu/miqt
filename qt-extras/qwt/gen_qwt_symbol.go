package qwt

/*

#include "gen_qwt_symbol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtSymbol__Style int

const (
	QwtSymbol__NoSymbol    QwtSymbol__Style = -1
	QwtSymbol__Ellipse     QwtSymbol__Style = 0
	QwtSymbol__Rect        QwtSymbol__Style = 1
	QwtSymbol__Diamond     QwtSymbol__Style = 2
	QwtSymbol__Triangle    QwtSymbol__Style = 3
	QwtSymbol__DTriangle   QwtSymbol__Style = 4
	QwtSymbol__UTriangle   QwtSymbol__Style = 5
	QwtSymbol__LTriangle   QwtSymbol__Style = 6
	QwtSymbol__RTriangle   QwtSymbol__Style = 7
	QwtSymbol__Cross       QwtSymbol__Style = 8
	QwtSymbol__XCross      QwtSymbol__Style = 9
	QwtSymbol__HLine       QwtSymbol__Style = 10
	QwtSymbol__VLine       QwtSymbol__Style = 11
	QwtSymbol__Star1       QwtSymbol__Style = 12
	QwtSymbol__Star2       QwtSymbol__Style = 13
	QwtSymbol__Hexagon     QwtSymbol__Style = 14
	QwtSymbol__Path        QwtSymbol__Style = 15
	QwtSymbol__Pixmap      QwtSymbol__Style = 16
	QwtSymbol__Graphic     QwtSymbol__Style = 17
	QwtSymbol__SvgDocument QwtSymbol__Style = 18
	QwtSymbol__UserStyle   QwtSymbol__Style = 1000
)

type QwtSymbol__CachePolicy int

const (
	QwtSymbol__NoCache   QwtSymbol__CachePolicy = 0
	QwtSymbol__Cache     QwtSymbol__CachePolicy = 1
	QwtSymbol__AutoCache QwtSymbol__CachePolicy = 2
)

type QwtSymbol struct {
	h *C.QwtSymbol
}

func (this *QwtSymbol) cPointer() *C.QwtSymbol {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSymbol) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSymbol constructs the type using only CGO pointers.
func newQwtSymbol(h *C.QwtSymbol) *QwtSymbol {
	if h == nil {
		return nil
	}

	return &QwtSymbol{h: h}
}

// UnsafeNewQwtSymbol constructs the type using only unsafe pointers.
func UnsafeNewQwtSymbol(h unsafe.Pointer) *QwtSymbol {
	return newQwtSymbol((*C.QwtSymbol)(h))
}

// NewQwtSymbol constructs a new QwtSymbol object.
func NewQwtSymbol() *QwtSymbol {

	return newQwtSymbol(C.QwtSymbol_new())
}

// NewQwtSymbol2 constructs a new QwtSymbol object.
func NewQwtSymbol2(param1 QwtSymbol__Style, param2 *qt.QBrush, param3 *qt.QPen, param4 *qt.QSize) *QwtSymbol {

	return newQwtSymbol(C.QwtSymbol_new2((C.int)(param1), (*C.QBrush)(param2.UnsafePointer()), (*C.QPen)(param3.UnsafePointer()), (*C.QSize)(param4.UnsafePointer())))
}

// NewQwtSymbol3 constructs a new QwtSymbol object.
func NewQwtSymbol3(param1 *qt.QPainterPath, param2 *qt.QBrush, param3 *qt.QPen) *QwtSymbol {

	return newQwtSymbol(C.QwtSymbol_new3((*C.QPainterPath)(param1.UnsafePointer()), (*C.QBrush)(param2.UnsafePointer()), (*C.QPen)(param3.UnsafePointer())))
}

// NewQwtSymbol4 constructs a new QwtSymbol object.
func NewQwtSymbol4(param1 QwtSymbol__Style) *QwtSymbol {

	return newQwtSymbol(C.QwtSymbol_new4((C.int)(param1)))
}

func (this *QwtSymbol) SetCachePolicy(cachePolicy QwtSymbol__CachePolicy) {
	C.QwtSymbol_setCachePolicy(this.h, (C.int)(cachePolicy))
}

func (this *QwtSymbol) CachePolicy() QwtSymbol__CachePolicy {
	return (QwtSymbol__CachePolicy)(C.QwtSymbol_cachePolicy(this.h))
}

func (this *QwtSymbol) SetSize(size *qt.QSize) {
	C.QwtSymbol_setSize(this.h, (*C.QSize)(size.UnsafePointer()))
}

func (this *QwtSymbol) SetSizeWithWidth(width int) {
	C.QwtSymbol_setSizeWithWidth(this.h, (C.int)(width))
}

func (this *QwtSymbol) Size() *qt.QSize {
	return qt.UnsafeNewQSize(unsafe.Pointer(C.QwtSymbol_size(this.h)))
}

func (this *QwtSymbol) SetPinPoint(pos *qt.QPointF) {
	C.QwtSymbol_setPinPoint(this.h, (*C.QPointF)(pos.UnsafePointer()))
}

func (this *QwtSymbol) PinPoint() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtSymbol_pinPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSymbol) SetPinPointEnabled(pinPointEnabled bool) {
	C.QwtSymbol_setPinPointEnabled(this.h, (C.bool)(pinPointEnabled))
}

func (this *QwtSymbol) IsPinPointEnabled() bool {
	return (bool)(C.QwtSymbol_isPinPointEnabled(this.h))
}

func (this *QwtSymbol) SetColor(color *qt.QColor) {
	C.QwtSymbol_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QwtSymbol) SetBrush(brush *qt.QBrush) {
	C.QwtSymbol_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QwtSymbol) Brush() *qt.QBrush {
	return qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtSymbol_brush(this.h)))
}

func (this *QwtSymbol) SetPen(param1 *qt.QColor) {
	C.QwtSymbol_setPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtSymbol) SetPenWithPen(pen *qt.QPen) {
	C.QwtSymbol_setPenWithPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtSymbol) Pen() *qt.QPen {
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtSymbol_pen(this.h)))
}

func (this *QwtSymbol) SetStyle(style QwtSymbol__Style) {
	C.QwtSymbol_setStyle(this.h, (C.int)(style))
}

func (this *QwtSymbol) Style() QwtSymbol__Style {
	return (QwtSymbol__Style)(C.QwtSymbol_style(this.h))
}

func (this *QwtSymbol) SetPath(path *qt.QPainterPath) {
	C.QwtSymbol_setPath(this.h, (*C.QPainterPath)(path.UnsafePointer()))
}

func (this *QwtSymbol) Path() *qt.QPainterPath {
	return qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtSymbol_path(this.h)))
}

func (this *QwtSymbol) SetPixmap(pixmap *qt.QPixmap) {
	C.QwtSymbol_setPixmap(this.h, (*C.QPixmap)(pixmap.UnsafePointer()))
}

func (this *QwtSymbol) Pixmap() *qt.QPixmap {
	return qt.UnsafeNewQPixmap(unsafe.Pointer(C.QwtSymbol_pixmap(this.h)))
}

func (this *QwtSymbol) SetGraphic(graphic *QwtGraphic) {
	C.QwtSymbol_setGraphic(this.h, graphic.cPointer())
}

func (this *QwtSymbol) Graphic() *QwtGraphic {
	return newQwtGraphic(C.QwtSymbol_graphic(this.h))
}

func (this *QwtSymbol) SetSvgDocument(svgDocument []byte) {
	svgDocument_alias := C.struct_miqt_string{}
	if len(svgDocument) > 0 {
		svgDocument_alias.data = (*C.char)(unsafe.Pointer(&svgDocument[0]))
	} else {
		svgDocument_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	svgDocument_alias.len = C.size_t(len(svgDocument))
	C.QwtSymbol_setSvgDocument(this.h, svgDocument_alias)
}

func (this *QwtSymbol) DrawSymbol(param1 *qt.QPainter, param2 *qt.QRectF) {
	C.QwtSymbol_drawSymbol(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()))
}

func (this *QwtSymbol) DrawSymbol2(param1 *qt.QPainter, param2 *qt.QPointF) {
	C.QwtSymbol_drawSymbol2(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()))
}

func (this *QwtSymbol) DrawSymbols2(param1 *qt.QPainter, param2 *qt.QPointF, numPoints int) {
	C.QwtSymbol_drawSymbols2(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), (C.int)(numPoints))
}

func (this *QwtSymbol) BoundingRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtSymbol_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSymbol) InvalidateCache() {
	C.QwtSymbol_invalidateCache(this.h)
}

func (this *QwtSymbol) SetSize2(width int, height int) {
	C.QwtSymbol_setSize2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QwtSymbol) SetPinPoint2(pos *qt.QPointF, enable bool) {
	C.QwtSymbol_setPinPoint2(this.h, (*C.QPointF)(pos.UnsafePointer()), (C.bool)(enable))
}

func (this *QwtSymbol) SetPen2(param1 *qt.QColor, width float64) {
	C.QwtSymbol_setPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtSymbol) SetPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	C.QwtSymbol_setPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

func (this *QwtSymbol) callVirtualBase_SetColor(color *qt.QColor) {

	C.QwtSymbol_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(color.UnsafePointer()))

}
func (this *QwtSymbol) OnSetColor(slot func(super func(color *qt.QColor), color *qt.QColor)) {
	ok := C.QwtSymbol_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSymbol_setColor
func miqt_exec_callback_QwtSymbol_setColor(self *C.QwtSymbol, cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(color *qt.QColor), color *qt.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc((&QwtSymbol{h: self}).callVirtualBase_SetColor, slotval1)

}

func (this *QwtSymbol) callVirtualBase_BoundingRect() *qt.QRect {

	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtSymbol_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtSymbol) OnBoundingRect(slot func(super func() *qt.QRect) *qt.QRect) {
	ok := C.QwtSymbol_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSymbol_boundingRect
func miqt_exec_callback_QwtSymbol_boundingRect(self *C.QwtSymbol, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRect) *qt.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSymbol{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRect)(virtualReturn.UnsafePointer())

}

func (this *QwtSymbol) callVirtualBase_RenderSymbols(param1 *qt.QPainter, param2 *qt.QPointF, numPoints int) {

	C.QwtSymbol_virtualbase_renderSymbols(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), (C.int)(numPoints))

}
func (this *QwtSymbol) OnRenderSymbols(slot func(super func(param1 *qt.QPainter, param2 *qt.QPointF, numPoints int), param1 *qt.QPainter, param2 *qt.QPointF, numPoints int)) {
	ok := C.QwtSymbol_override_virtual_renderSymbols(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSymbol_renderSymbols
func miqt_exec_callback_QwtSymbol_renderSymbols(self *C.QwtSymbol, cb C.intptr_t, param1 *C.QPainter, param2 *C.QPointF, numPoints C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QPointF, numPoints int), param1 *qt.QPainter, param2 *qt.QPointF, numPoints int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(param2))

	slotval3 := (int)(numPoints)

	gofunc((&QwtSymbol{h: self}).callVirtualBase_RenderSymbols, slotval1, slotval2, slotval3)

}

// Delete this object from C++ memory.
func (this *QwtSymbol) Delete() {
	C.QwtSymbol_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtSymbol) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtSymbol) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
