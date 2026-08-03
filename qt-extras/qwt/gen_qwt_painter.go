package qwt

/*

#include "gen_qwt_painter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPainter struct {
	h *C.QwtPainter
}

func (this *QwtPainter) cPointer() *C.QwtPainter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPainter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPainter constructs the type using only CGO pointers.
func newQwtPainter(h *C.QwtPainter) *QwtPainter {
	if h == nil {
		return nil
	}

	return &QwtPainter{h: h}
}

// UnsafeNewQwtPainter constructs the type using only unsafe pointers.
func UnsafeNewQwtPainter(h unsafe.Pointer) *QwtPainter {
	return newQwtPainter((*C.QwtPainter)(h))
}

func QwtPainter_SetPolylineSplitting(polylineSplitting bool) {
	C.QwtPainter_setPolylineSplitting((C.bool)(polylineSplitting))
}

func QwtPainter_PolylineSplitting() bool {
	return (bool)(C.QwtPainter_polylineSplitting())
}

func QwtPainter_SetRoundingAlignment(roundingAlignment bool) {
	C.QwtPainter_setRoundingAlignment((C.bool)(roundingAlignment))
}

func QwtPainter_RoundingAlignment() bool {
	return (bool)(C.QwtPainter_roundingAlignment())
}

func QwtPainter_RoundingAlignmentWithQPainter(param1 *qt.QPainter) bool {
	return (bool)(C.QwtPainter_roundingAlignmentWithQPainter((*C.QPainter)(param1.UnsafePointer())))
}

func QwtPainter_DrawText(param1 *qt.QPainter, x float64, y float64, param4 string) {
	param4_ms := C.struct_miqt_string{}
	param4_ms.data = C.CString(param4)
	param4_ms.len = C.size_t(len(param4))
	defer C.free(unsafe.Pointer(param4_ms.data))
	C.QwtPainter_drawText((*C.QPainter)(param1.UnsafePointer()), (C.double)(x), (C.double)(y), param4_ms)
}

func QwtPainter_DrawText2(param1 *qt.QPainter, param2 *qt.QPointF, param3 string) {
	param3_ms := C.struct_miqt_string{}
	param3_ms.data = C.CString(param3)
	param3_ms.len = C.size_t(len(param3))
	defer C.free(unsafe.Pointer(param3_ms.data))
	C.QwtPainter_drawText2((*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), param3_ms)
}

func QwtPainter_DrawText3(param1 *qt.QPainter, x float64, y float64, w float64, h float64, flags int, param7 string) {
	param7_ms := C.struct_miqt_string{}
	param7_ms.data = C.CString(param7)
	param7_ms.len = C.size_t(len(param7))
	defer C.free(unsafe.Pointer(param7_ms.data))
	C.QwtPainter_drawText3((*C.QPainter)(param1.UnsafePointer()), (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(flags), param7_ms)
}

func QwtPainter_DrawText4(param1 *qt.QPainter, param2 *qt.QRectF, flags int, param4 string) {
	param4_ms := C.struct_miqt_string{}
	param4_ms.data = C.CString(param4)
	param4_ms.len = C.size_t(len(param4))
	defer C.free(unsafe.Pointer(param4_ms.data))
	C.QwtPainter_drawText4((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (C.int)(flags), param4_ms)
}

func QwtPainter_DrawSimpleRichText(param1 *qt.QPainter, param2 *qt.QRectF, flags int, param4 *qt.QTextDocument) {
	C.QwtPainter_drawSimpleRichText((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (C.int)(flags), (*C.QTextDocument)(param4.UnsafePointer()))
}

func QwtPainter_DrawRect(param1 *qt.QPainter, x float64, y float64, w float64, h float64) {
	C.QwtPainter_drawRect((*C.QPainter)(param1.UnsafePointer()), (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func QwtPainter_DrawRect2(param1 *qt.QPainter, rect *qt.QRectF) {
	C.QwtPainter_drawRect2((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()))
}

func QwtPainter_FillRect(param1 *qt.QPainter, param2 *qt.QRectF, param3 *qt.QBrush) {
	C.QwtPainter_fillRect((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (*C.QBrush)(param3.UnsafePointer()))
}

func QwtPainter_DrawEllipse(param1 *qt.QPainter, param2 *qt.QRectF) {
	C.QwtPainter_drawEllipse((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()))
}

func QwtPainter_DrawPie(param1 *qt.QPainter, param2 *qt.QRectF, a int, alen int) {
	C.QwtPainter_drawPie((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (C.int)(a), (C.int)(alen))
}

func QwtPainter_DrawLine(param1 *qt.QPainter, x1 float64, y1 float64, x2 float64, y2 float64) {
	C.QwtPainter_drawLine((*C.QPainter)(param1.UnsafePointer()), (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func QwtPainter_DrawLine2(param1 *qt.QPainter, p1 *qt.QPointF, p2 *qt.QPointF) {
	C.QwtPainter_drawLine2((*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(p1.UnsafePointer()), (*C.QPointF)(p2.UnsafePointer()))
}

func QwtPainter_DrawLine3(param1 *qt.QPainter, param2 *qt.QLineF) {
	C.QwtPainter_drawLine3((*C.QPainter)(param1.UnsafePointer()), (*C.QLineF)(param2.UnsafePointer()))
}

func QwtPainter_DrawPolyline2(param1 *qt.QPainter, param2 *qt.QPointF, pointCount int) {
	C.QwtPainter_drawPolyline2((*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), (C.int)(pointCount))
}

func QwtPainter_DrawPolyline4(param1 *qt.QPainter, param2 *qt.QPoint, pointCount int) {
	C.QwtPainter_drawPolyline4((*C.QPainter)(param1.UnsafePointer()), (*C.QPoint)(param2.UnsafePointer()), (C.int)(pointCount))
}

func QwtPainter_DrawPoint(param1 *qt.QPainter, param2 *qt.QPoint) {
	C.QwtPainter_drawPoint((*C.QPainter)(param1.UnsafePointer()), (*C.QPoint)(param2.UnsafePointer()))
}

func QwtPainter_DrawPoints2(param1 *qt.QPainter, param2 *qt.QPoint, pointCount int) {
	C.QwtPainter_drawPoints2((*C.QPainter)(param1.UnsafePointer()), (*C.QPoint)(param2.UnsafePointer()), (C.int)(pointCount))
}

func QwtPainter_DrawPoint2(param1 *qt.QPainter, x float64, y float64) {
	C.QwtPainter_drawPoint2((*C.QPainter)(param1.UnsafePointer()), (C.double)(x), (C.double)(y))
}

func QwtPainter_DrawPoint3(param1 *qt.QPainter, param2 *qt.QPointF) {
	C.QwtPainter_drawPoint3((*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()))
}

func QwtPainter_DrawPoints4(param1 *qt.QPainter, param2 *qt.QPointF, pointCount int) {
	C.QwtPainter_drawPoints4((*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), (C.int)(pointCount))
}

func QwtPainter_DrawPath(param1 *qt.QPainter, param2 *qt.QPainterPath) {
	C.QwtPainter_drawPath((*C.QPainter)(param1.UnsafePointer()), (*C.QPainterPath)(param2.UnsafePointer()))
}

func QwtPainter_DrawImage(param1 *qt.QPainter, param2 *qt.QRectF, param3 *qt.QImage) {
	C.QwtPainter_drawImage((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (*C.QImage)(param3.UnsafePointer()))
}

func QwtPainter_DrawPixmap(param1 *qt.QPainter, param2 *qt.QRectF, param3 *qt.QPixmap) {
	C.QwtPainter_drawPixmap((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (*C.QPixmap)(param3.UnsafePointer()))
}

func QwtPainter_DrawRoundFrame(param1 *qt.QPainter, param2 *qt.QRectF, param3 *qt.QPalette, lineWidth int, frameStyle int) {
	C.QwtPainter_drawRoundFrame((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (*C.QPalette)(param3.UnsafePointer()), (C.int)(lineWidth), (C.int)(frameStyle))
}

func QwtPainter_DrawRoundedFrame(param1 *qt.QPainter, param2 *qt.QRectF, xRadius float64, yRadius float64, param5 *qt.QPalette, lineWidth int, frameStyle int) {
	C.QwtPainter_drawRoundedFrame((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (C.double)(xRadius), (C.double)(yRadius), (*C.QPalette)(param5.UnsafePointer()), (C.int)(lineWidth), (C.int)(frameStyle))
}

func QwtPainter_DrawFrame(param1 *qt.QPainter, rect *qt.QRectF, palette *qt.QPalette, foregroundRole qt.QPalette__ColorRole, frameWidth int, midLineWidth int, frameStyle int) {
	C.QwtPainter_drawFrame((*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), (*C.QPalette)(palette.UnsafePointer()), (C.int)(foregroundRole), (C.int)(frameWidth), (C.int)(midLineWidth), (C.int)(frameStyle))
}

func QwtPainter_DrawFocusRect(param1 *qt.QPainter, param2 *qt.QWidget) {
	C.QwtPainter_drawFocusRect((*C.QPainter)(param1.UnsafePointer()), (*C.QWidget)(param2.UnsafePointer()))
}

func QwtPainter_DrawFocusRect2(param1 *qt.QPainter, param2 *qt.QWidget, param3 *qt.QRect) {
	C.QwtPainter_drawFocusRect2((*C.QPainter)(param1.UnsafePointer()), (*C.QWidget)(param2.UnsafePointer()), (*C.QRect)(param3.UnsafePointer()))
}

func QwtPainter_IsAligning(painter *qt.QPainter) bool {
	return (bool)(C.QwtPainter_isAligning((*C.QPainter)(painter.UnsafePointer())))
}

func QwtPainter_IsX11GraphicsSystem() bool {
	return (bool)(C.QwtPainter_isX11GraphicsSystem())
}

func QwtPainter_FillPixmap(param1 *qt.QWidget, param2 *qt.QPixmap) {
	C.QwtPainter_fillPixmap((*C.QWidget)(param1.UnsafePointer()), (*C.QPixmap)(param2.UnsafePointer()))
}

func QwtPainter_DrawBackgound(painter *qt.QPainter, rect *qt.QRectF, widget *qt.QWidget) {
	C.QwtPainter_drawBackgound((*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))
}

func QwtPainter_BackingStore(param1 *qt.QWidget, param2 *qt.QSize) *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QwtPainter_backingStore((*C.QWidget)(param1.UnsafePointer()), (*C.QSize)(param2.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtPainter_FillPixmap2(param1 *qt.QWidget, param2 *qt.QPixmap, offset *qt.QPoint) {
	C.QwtPainter_fillPixmap2((*C.QWidget)(param1.UnsafePointer()), (*C.QPixmap)(param2.UnsafePointer()), (*C.QPoint)(offset.UnsafePointer()))
}

// Delete this object from C++ memory.
func (this *QwtPainter) Delete() {
	C.QwtPainter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPainter) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPainter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
