package qt6

/*

#include "gen_qpainter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPainter__RenderHint int

const (
	QPainter__Antialiasing                QPainter__RenderHint = 1
	QPainter__TextAntialiasing            QPainter__RenderHint = 2
	QPainter__SmoothPixmapTransform       QPainter__RenderHint = 4
	QPainter__VerticalSubpixelPositioning QPainter__RenderHint = 8
	QPainter__LosslessImageRendering      QPainter__RenderHint = 64
	QPainter__NonCosmeticBrushPatterns    QPainter__RenderHint = 128
)

type QPainter__PixmapFragmentHint int

const (
	QPainter__OpaqueHint QPainter__PixmapFragmentHint = 1
)

type QPainter__CompositionMode int

const (
	QPainter__CompositionMode_SourceOver          QPainter__CompositionMode = 0
	QPainter__CompositionMode_DestinationOver     QPainter__CompositionMode = 1
	QPainter__CompositionMode_Clear               QPainter__CompositionMode = 2
	QPainter__CompositionMode_Source              QPainter__CompositionMode = 3
	QPainter__CompositionMode_Destination         QPainter__CompositionMode = 4
	QPainter__CompositionMode_SourceIn            QPainter__CompositionMode = 5
	QPainter__CompositionMode_DestinationIn       QPainter__CompositionMode = 6
	QPainter__CompositionMode_SourceOut           QPainter__CompositionMode = 7
	QPainter__CompositionMode_DestinationOut      QPainter__CompositionMode = 8
	QPainter__CompositionMode_SourceAtop          QPainter__CompositionMode = 9
	QPainter__CompositionMode_DestinationAtop     QPainter__CompositionMode = 10
	QPainter__CompositionMode_Xor                 QPainter__CompositionMode = 11
	QPainter__CompositionMode_Plus                QPainter__CompositionMode = 12
	QPainter__CompositionMode_Multiply            QPainter__CompositionMode = 13
	QPainter__CompositionMode_Screen              QPainter__CompositionMode = 14
	QPainter__CompositionMode_Overlay             QPainter__CompositionMode = 15
	QPainter__CompositionMode_Darken              QPainter__CompositionMode = 16
	QPainter__CompositionMode_Lighten             QPainter__CompositionMode = 17
	QPainter__CompositionMode_ColorDodge          QPainter__CompositionMode = 18
	QPainter__CompositionMode_ColorBurn           QPainter__CompositionMode = 19
	QPainter__CompositionMode_HardLight           QPainter__CompositionMode = 20
	QPainter__CompositionMode_SoftLight           QPainter__CompositionMode = 21
	QPainter__CompositionMode_Difference          QPainter__CompositionMode = 22
	QPainter__CompositionMode_Exclusion           QPainter__CompositionMode = 23
	QPainter__RasterOp_SourceOrDestination        QPainter__CompositionMode = 24
	QPainter__RasterOp_SourceAndDestination       QPainter__CompositionMode = 25
	QPainter__RasterOp_SourceXorDestination       QPainter__CompositionMode = 26
	QPainter__RasterOp_NotSourceAndNotDestination QPainter__CompositionMode = 27
	QPainter__RasterOp_NotSourceOrNotDestination  QPainter__CompositionMode = 28
	QPainter__RasterOp_NotSourceXorDestination    QPainter__CompositionMode = 29
	QPainter__RasterOp_NotSource                  QPainter__CompositionMode = 30
	QPainter__RasterOp_NotSourceAndDestination    QPainter__CompositionMode = 31
	QPainter__RasterOp_SourceAndNotDestination    QPainter__CompositionMode = 32
	QPainter__RasterOp_NotSourceOrDestination     QPainter__CompositionMode = 33
	QPainter__RasterOp_SourceOrNotDestination     QPainter__CompositionMode = 34
	QPainter__RasterOp_ClearDestination           QPainter__CompositionMode = 35
	QPainter__RasterOp_SetDestination             QPainter__CompositionMode = 36
	QPainter__RasterOp_NotDestination             QPainter__CompositionMode = 37
)

type QPainter struct {
	h          *C.QPainter
	isSubclass bool
}

func (this *QPainter) cPointer() *C.QPainter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPainter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPainter constructs the type using only CGO pointers.
func newQPainter(h *C.QPainter) *QPainter {
	if h == nil {
		return nil
	}

	return &QPainter{h: h}
}

// UnsafeNewQPainter constructs the type using only unsafe pointers.
func UnsafeNewQPainter(h unsafe.Pointer) *QPainter {
	return newQPainter((*C.QPainter)(h))
}

// NewQPainter constructs a new QPainter object.
func NewQPainter() *QPainter {

	ret := newQPainter(C.QPainter_new())
	ret.isSubclass = true
	return ret
}

// NewQPainter2 constructs a new QPainter object.
func NewQPainter2(param1 *QPaintDevice) *QPainter {

	ret := newQPainter(C.QPainter_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QPainter) Device() *QPaintDevice {
	return newQPaintDevice(C.QPainter_Device(this.h))
}

func (this *QPainter) Begin(param1 *QPaintDevice) bool {
	return (bool)(C.QPainter_Begin(this.h, param1.cPointer()))
}

func (this *QPainter) End() bool {
	return (bool)(C.QPainter_End(this.h))
}

func (this *QPainter) IsActive() bool {
	return (bool)(C.QPainter_IsActive(this.h))
}

func (this *QPainter) SetCompositionMode(mode QPainter__CompositionMode) {
	C.QPainter_SetCompositionMode(this.h, (C.int)(mode))
}

func (this *QPainter) CompositionMode() QPainter__CompositionMode {
	return (QPainter__CompositionMode)(C.QPainter_CompositionMode(this.h))
}

func (this *QPainter) Font() *QFont {
	return newQFont(C.QPainter_Font(this.h))
}

func (this *QPainter) SetFont(f *QFont) {
	C.QPainter_SetFont(this.h, f.cPointer())
}

func (this *QPainter) FontMetrics() *QFontMetrics {
	_goptr := newQFontMetrics(C.QPainter_FontMetrics(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) FontInfo() *QFontInfo {
	_goptr := newQFontInfo(C.QPainter_FontInfo(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetPen(color *QColor) {
	C.QPainter_SetPen(this.h, color.cPointer())
}

func (this *QPainter) SetPenWithPen(pen *QPen) {
	C.QPainter_SetPenWithPen(this.h, pen.cPointer())
}

func (this *QPainter) SetPenWithStyle(style PenStyle) {
	C.QPainter_SetPenWithStyle(this.h, (C.int)(style))
}

func (this *QPainter) Pen() *QPen {
	return newQPen(C.QPainter_Pen(this.h))
}

func (this *QPainter) SetBrush(brush *QBrush) {
	C.QPainter_SetBrush(this.h, brush.cPointer())
}

func (this *QPainter) SetBrushWithStyle(style BrushStyle) {
	C.QPainter_SetBrushWithStyle(this.h, (C.int)(style))
}

func (this *QPainter) Brush() *QBrush {
	return newQBrush(C.QPainter_Brush(this.h))
}

func (this *QPainter) SetBackgroundMode(mode BGMode) {
	C.QPainter_SetBackgroundMode(this.h, (C.int)(mode))
}

func (this *QPainter) BackgroundMode() BGMode {
	return (BGMode)(C.QPainter_BackgroundMode(this.h))
}

func (this *QPainter) BrushOrigin() *QPoint {
	_goptr := newQPoint(C.QPainter_BrushOrigin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetBrushOrigin(x int, y int) {
	C.QPainter_SetBrushOrigin(this.h, (C.int)(x), (C.int)(y))
}

func (this *QPainter) SetBrushOriginWithBrushOrigin(brushOrigin *QPoint) {
	C.QPainter_SetBrushOriginWithBrushOrigin(this.h, brushOrigin.cPointer())
}

func (this *QPainter) SetBrushOrigin2(brushOrigin *QPointF) {
	C.QPainter_SetBrushOrigin2(this.h, brushOrigin.cPointer())
}

func (this *QPainter) SetBackground(bg *QBrush) {
	C.QPainter_SetBackground(this.h, bg.cPointer())
}

func (this *QPainter) Background() *QBrush {
	return newQBrush(C.QPainter_Background(this.h))
}

func (this *QPainter) Opacity() float64 {
	return (float64)(C.QPainter_Opacity(this.h))
}

func (this *QPainter) SetOpacity(opacity float64) {
	C.QPainter_SetOpacity(this.h, (C.double)(opacity))
}

func (this *QPainter) ClipRegion() *QRegion {
	_goptr := newQRegion(C.QPainter_ClipRegion(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) ClipPath() *QPainterPath {
	_goptr := newQPainterPath(C.QPainter_ClipPath(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetClipRect(param1 *QRectF) {
	C.QPainter_SetClipRect(this.h, param1.cPointer())
}

func (this *QPainter) SetClipRectWithQRect(param1 *QRect) {
	C.QPainter_SetClipRectWithQRect(this.h, param1.cPointer())
}

func (this *QPainter) SetClipRect2(x int, y int, w int, h int) {
	C.QPainter_SetClipRect2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) SetClipRegion(param1 *QRegion) {
	C.QPainter_SetClipRegion(this.h, param1.cPointer())
}

func (this *QPainter) SetClipPath(path *QPainterPath) {
	C.QPainter_SetClipPath(this.h, path.cPointer())
}

func (this *QPainter) SetClipping(enable bool) {
	C.QPainter_SetClipping(this.h, (C.bool)(enable))
}

func (this *QPainter) HasClipping() bool {
	return (bool)(C.QPainter_HasClipping(this.h))
}

func (this *QPainter) ClipBoundingRect() *QRectF {
	_goptr := newQRectF(C.QPainter_ClipBoundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) Save() {
	C.QPainter_Save(this.h)
}

func (this *QPainter) Restore() {
	C.QPainter_Restore(this.h)
}

func (this *QPainter) SetTransform(transform *QTransform) {
	C.QPainter_SetTransform(this.h, transform.cPointer())
}

func (this *QPainter) Transform() *QTransform {
	return newQTransform(C.QPainter_Transform(this.h))
}

func (this *QPainter) DeviceTransform() *QTransform {
	return newQTransform(C.QPainter_DeviceTransform(this.h))
}

func (this *QPainter) ResetTransform() {
	C.QPainter_ResetTransform(this.h)
}

func (this *QPainter) SetWorldTransform(matrix *QTransform) {
	C.QPainter_SetWorldTransform(this.h, matrix.cPointer())
}

func (this *QPainter) WorldTransform() *QTransform {
	return newQTransform(C.QPainter_WorldTransform(this.h))
}

func (this *QPainter) CombinedTransform() *QTransform {
	_goptr := newQTransform(C.QPainter_CombinedTransform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetWorldMatrixEnabled(enabled bool) {
	C.QPainter_SetWorldMatrixEnabled(this.h, (C.bool)(enabled))
}

func (this *QPainter) WorldMatrixEnabled() bool {
	return (bool)(C.QPainter_WorldMatrixEnabled(this.h))
}

func (this *QPainter) Scale(sx float64, sy float64) {
	C.QPainter_Scale(this.h, (C.double)(sx), (C.double)(sy))
}

func (this *QPainter) Shear(sh float64, sv float64) {
	C.QPainter_Shear(this.h, (C.double)(sh), (C.double)(sv))
}

func (this *QPainter) Rotate(a float64) {
	C.QPainter_Rotate(this.h, (C.double)(a))
}

func (this *QPainter) Translate(offset *QPointF) {
	C.QPainter_Translate(this.h, offset.cPointer())
}

func (this *QPainter) TranslateWithOffset(offset *QPoint) {
	C.QPainter_TranslateWithOffset(this.h, offset.cPointer())
}

func (this *QPainter) Translate2(dx float64, dy float64) {
	C.QPainter_Translate2(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QPainter) Window() *QRect {
	_goptr := newQRect(C.QPainter_Window(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetWindow(window *QRect) {
	C.QPainter_SetWindow(this.h, window.cPointer())
}

func (this *QPainter) SetWindow2(x int, y int, w int, h int) {
	C.QPainter_SetWindow2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) Viewport() *QRect {
	_goptr := newQRect(C.QPainter_Viewport(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetViewport(viewport *QRect) {
	C.QPainter_SetViewport(this.h, viewport.cPointer())
}

func (this *QPainter) SetViewport2(x int, y int, w int, h int) {
	C.QPainter_SetViewport2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) SetViewTransformEnabled(enable bool) {
	C.QPainter_SetViewTransformEnabled(this.h, (C.bool)(enable))
}

func (this *QPainter) ViewTransformEnabled() bool {
	return (bool)(C.QPainter_ViewTransformEnabled(this.h))
}

func (this *QPainter) StrokePath(path *QPainterPath, pen *QPen) {
	C.QPainter_StrokePath(this.h, path.cPointer(), pen.cPointer())
}

func (this *QPainter) FillPath(path *QPainterPath, brush *QBrush) {
	C.QPainter_FillPath(this.h, path.cPointer(), brush.cPointer())
}

func (this *QPainter) DrawPath(path *QPainterPath) {
	C.QPainter_DrawPath(this.h, path.cPointer())
}

func (this *QPainter) DrawPoint(pt *QPointF) {
	C.QPainter_DrawPoint(this.h, pt.cPointer())
}

func (this *QPainter) DrawPointWithQPoint(p *QPoint) {
	C.QPainter_DrawPointWithQPoint(this.h, p.cPointer())
}

func (this *QPainter) DrawPoint2(x int, y int) {
	C.QPainter_DrawPoint2(this.h, (C.int)(x), (C.int)(y))
}

func (this *QPainter) DrawPoints(points *QPointF, pointCount int) {
	C.QPainter_DrawPoints(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawPoints2(points *QPoint, pointCount int) {
	C.QPainter_DrawPoints2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawLine(line *QLineF) {
	C.QPainter_DrawLine(this.h, line.cPointer())
}

func (this *QPainter) DrawLineWithLine(line *QLine) {
	C.QPainter_DrawLineWithLine(this.h, line.cPointer())
}

func (this *QPainter) DrawLine2(x1 int, y1 int, x2 int, y2 int) {
	C.QPainter_DrawLine2(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this *QPainter) DrawLine3(p1 *QPoint, p2 *QPoint) {
	C.QPainter_DrawLine3(this.h, p1.cPointer(), p2.cPointer())
}

func (this *QPainter) DrawLine4(p1 *QPointF, p2 *QPointF) {
	C.QPainter_DrawLine4(this.h, p1.cPointer(), p2.cPointer())
}

func (this *QPainter) DrawLines(lines *QLineF, lineCount int) {
	C.QPainter_DrawLines(this.h, lines.cPointer(), (C.int)(lineCount))
}

func (this *QPainter) DrawLinesWithLines(lines []QLineF) {
	lines_CArray := (*[0xffff]*C.QLineF)(C.malloc(C.size_t(8 * len(lines))))
	defer C.free(unsafe.Pointer(lines_CArray))
	for i := range lines {
		lines_CArray[i] = lines[i].cPointer()
	}
	lines_ma := C.struct_miqt_array{len: C.size_t(len(lines)), data: unsafe.Pointer(lines_CArray)}
	C.QPainter_DrawLinesWithLines(this.h, lines_ma)
}

func (this *QPainter) DrawLines2(pointPairs *QPointF, lineCount int) {
	C.QPainter_DrawLines2(this.h, pointPairs.cPointer(), (C.int)(lineCount))
}

func (this *QPainter) DrawLinesWithPointPairs(pointPairs []QPointF) {
	pointPairs_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(pointPairs))))
	defer C.free(unsafe.Pointer(pointPairs_CArray))
	for i := range pointPairs {
		pointPairs_CArray[i] = pointPairs[i].cPointer()
	}
	pointPairs_ma := C.struct_miqt_array{len: C.size_t(len(pointPairs)), data: unsafe.Pointer(pointPairs_CArray)}
	C.QPainter_DrawLinesWithPointPairs(this.h, pointPairs_ma)
}

func (this *QPainter) DrawLines3(lines *QLine, lineCount int) {
	C.QPainter_DrawLines3(this.h, lines.cPointer(), (C.int)(lineCount))
}

func (this *QPainter) DrawLines4(lines []QLine) {
	lines_CArray := (*[0xffff]*C.QLine)(C.malloc(C.size_t(8 * len(lines))))
	defer C.free(unsafe.Pointer(lines_CArray))
	for i := range lines {
		lines_CArray[i] = lines[i].cPointer()
	}
	lines_ma := C.struct_miqt_array{len: C.size_t(len(lines)), data: unsafe.Pointer(lines_CArray)}
	C.QPainter_DrawLines4(this.h, lines_ma)
}

func (this *QPainter) DrawLines5(pointPairs *QPoint, lineCount int) {
	C.QPainter_DrawLines5(this.h, pointPairs.cPointer(), (C.int)(lineCount))
}

func (this *QPainter) DrawLines6(pointPairs []QPoint) {
	pointPairs_CArray := (*[0xffff]*C.QPoint)(C.malloc(C.size_t(8 * len(pointPairs))))
	defer C.free(unsafe.Pointer(pointPairs_CArray))
	for i := range pointPairs {
		pointPairs_CArray[i] = pointPairs[i].cPointer()
	}
	pointPairs_ma := C.struct_miqt_array{len: C.size_t(len(pointPairs)), data: unsafe.Pointer(pointPairs_CArray)}
	C.QPainter_DrawLines6(this.h, pointPairs_ma)
}

func (this *QPainter) DrawRect(rect *QRectF) {
	C.QPainter_DrawRect(this.h, rect.cPointer())
}

func (this *QPainter) DrawRect2(x1 int, y1 int, w int, h int) {
	C.QPainter_DrawRect2(this.h, (C.int)(x1), (C.int)(y1), (C.int)(w), (C.int)(h))
}

func (this *QPainter) DrawRectWithRect(rect *QRect) {
	C.QPainter_DrawRectWithRect(this.h, rect.cPointer())
}

func (this *QPainter) DrawRects(rects *QRectF, rectCount int) {
	C.QPainter_DrawRects(this.h, rects.cPointer(), (C.int)(rectCount))
}

func (this *QPainter) DrawRectsWithRectangles(rectangles []QRectF) {
	rectangles_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.size_t(8 * len(rectangles))))
	defer C.free(unsafe.Pointer(rectangles_CArray))
	for i := range rectangles {
		rectangles_CArray[i] = rectangles[i].cPointer()
	}
	rectangles_ma := C.struct_miqt_array{len: C.size_t(len(rectangles)), data: unsafe.Pointer(rectangles_CArray)}
	C.QPainter_DrawRectsWithRectangles(this.h, rectangles_ma)
}

func (this *QPainter) DrawRects2(rects *QRect, rectCount int) {
	C.QPainter_DrawRects2(this.h, rects.cPointer(), (C.int)(rectCount))
}

func (this *QPainter) DrawRects3(rectangles []QRect) {
	rectangles_CArray := (*[0xffff]*C.QRect)(C.malloc(C.size_t(8 * len(rectangles))))
	defer C.free(unsafe.Pointer(rectangles_CArray))
	for i := range rectangles {
		rectangles_CArray[i] = rectangles[i].cPointer()
	}
	rectangles_ma := C.struct_miqt_array{len: C.size_t(len(rectangles)), data: unsafe.Pointer(rectangles_CArray)}
	C.QPainter_DrawRects3(this.h, rectangles_ma)
}

func (this *QPainter) DrawEllipse(r *QRectF) {
	C.QPainter_DrawEllipse(this.h, r.cPointer())
}

func (this *QPainter) DrawEllipseWithQRect(r *QRect) {
	C.QPainter_DrawEllipseWithQRect(this.h, r.cPointer())
}

func (this *QPainter) DrawEllipse2(x int, y int, w int, h int) {
	C.QPainter_DrawEllipse2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) DrawEllipse3(center *QPointF, rx float64, ry float64) {
	C.QPainter_DrawEllipse3(this.h, center.cPointer(), (C.double)(rx), (C.double)(ry))
}

func (this *QPainter) DrawEllipse4(center *QPoint, rx int, ry int) {
	C.QPainter_DrawEllipse4(this.h, center.cPointer(), (C.int)(rx), (C.int)(ry))
}

func (this *QPainter) DrawPolyline(points *QPointF, pointCount int) {
	C.QPainter_DrawPolyline(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawPolyline2(points *QPoint, pointCount int) {
	C.QPainter_DrawPolyline2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawPolygon(points *QPointF, pointCount int) {
	C.QPainter_DrawPolygon(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawPolygon2(points *QPoint, pointCount int) {
	C.QPainter_DrawPolygon2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawConvexPolygon(points *QPointF, pointCount int) {
	C.QPainter_DrawConvexPolygon(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawConvexPolygon2(points *QPoint, pointCount int) {
	C.QPainter_DrawConvexPolygon2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawArc(rect *QRectF, a int, alen int) {
	C.QPainter_DrawArc(this.h, rect.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawArc2(param1 *QRect, a int, alen int) {
	C.QPainter_DrawArc2(this.h, param1.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawArc3(x int, y int, w int, h int, a int, alen int) {
	C.QPainter_DrawArc3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawPie(rect *QRectF, a int, alen int) {
	C.QPainter_DrawPie(this.h, rect.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawPie2(x int, y int, w int, h int, a int, alen int) {
	C.QPainter_DrawPie2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawPie3(param1 *QRect, a int, alen int) {
	C.QPainter_DrawPie3(this.h, param1.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawChord(rect *QRectF, a int, alen int) {
	C.QPainter_DrawChord(this.h, rect.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawChord2(x int, y int, w int, h int, a int, alen int) {
	C.QPainter_DrawChord2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawChord3(param1 *QRect, a int, alen int) {
	C.QPainter_DrawChord3(this.h, param1.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawRoundedRect(rect *QRectF, xRadius float64, yRadius float64) {
	C.QPainter_DrawRoundedRect(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainter) DrawRoundedRect2(x int, y int, w int, h int, xRadius float64, yRadius float64) {
	C.QPainter_DrawRoundedRect2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainter) DrawRoundedRect3(rect *QRect, xRadius float64, yRadius float64) {
	C.QPainter_DrawRoundedRect3(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainter) DrawTiledPixmap(rect *QRectF, pm *QPixmap) {
	C.QPainter_DrawTiledPixmap(this.h, rect.cPointer(), pm.cPointer())
}

func (this *QPainter) DrawTiledPixmap2(x int, y int, w int, h int, param5 *QPixmap) {
	C.QPainter_DrawTiledPixmap2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), param5.cPointer())
}

func (this *QPainter) DrawTiledPixmap3(param1 *QRect, param2 *QPixmap) {
	C.QPainter_DrawTiledPixmap3(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QPainter) DrawPicture(p *QPointF, picture *QPicture) {
	C.QPainter_DrawPicture(this.h, p.cPointer(), picture.cPointer())
}

func (this *QPainter) DrawPicture2(x int, y int, picture *QPicture) {
	C.QPainter_DrawPicture2(this.h, (C.int)(x), (C.int)(y), picture.cPointer())
}

func (this *QPainter) DrawPicture3(p *QPoint, picture *QPicture) {
	C.QPainter_DrawPicture3(this.h, p.cPointer(), picture.cPointer())
}

func (this *QPainter) DrawPixmap(targetRect *QRectF, pixmap *QPixmap, sourceRect *QRectF) {
	C.QPainter_DrawPixmap(this.h, targetRect.cPointer(), pixmap.cPointer(), sourceRect.cPointer())
}

func (this *QPainter) DrawPixmap2(targetRect *QRect, pixmap *QPixmap, sourceRect *QRect) {
	C.QPainter_DrawPixmap2(this.h, targetRect.cPointer(), pixmap.cPointer(), sourceRect.cPointer())
}

func (this *QPainter) DrawPixmap3(x int, y int, w int, h int, pm *QPixmap, sx int, sy int, sw int, sh int) {
	C.QPainter_DrawPixmap3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), pm.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw), (C.int)(sh))
}

func (this *QPainter) DrawPixmap4(x int, y int, pm *QPixmap, sx int, sy int, sw int, sh int) {
	C.QPainter_DrawPixmap4(this.h, (C.int)(x), (C.int)(y), pm.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw), (C.int)(sh))
}

func (this *QPainter) DrawPixmap5(p *QPointF, pm *QPixmap, sr *QRectF) {
	C.QPainter_DrawPixmap5(this.h, p.cPointer(), pm.cPointer(), sr.cPointer())
}

func (this *QPainter) DrawPixmap6(p *QPoint, pm *QPixmap, sr *QRect) {
	C.QPainter_DrawPixmap6(this.h, p.cPointer(), pm.cPointer(), sr.cPointer())
}

func (this *QPainter) DrawPixmap7(p *QPointF, pm *QPixmap) {
	C.QPainter_DrawPixmap7(this.h, p.cPointer(), pm.cPointer())
}

func (this *QPainter) DrawPixmap8(p *QPoint, pm *QPixmap) {
	C.QPainter_DrawPixmap8(this.h, p.cPointer(), pm.cPointer())
}

func (this *QPainter) DrawPixmap9(x int, y int, pm *QPixmap) {
	C.QPainter_DrawPixmap9(this.h, (C.int)(x), (C.int)(y), pm.cPointer())
}

func (this *QPainter) DrawPixmap10(r *QRect, pm *QPixmap) {
	C.QPainter_DrawPixmap10(this.h, r.cPointer(), pm.cPointer())
}

func (this *QPainter) DrawPixmap11(x int, y int, w int, h int, pm *QPixmap) {
	C.QPainter_DrawPixmap11(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), pm.cPointer())
}

func (this *QPainter) DrawPixmapFragments(fragments *QPainter__PixmapFragment, fragmentCount int, pixmap *QPixmap) {
	C.QPainter_DrawPixmapFragments(this.h, fragments.cPointer(), (C.int)(fragmentCount), pixmap.cPointer())
}

func (this *QPainter) DrawImage(targetRect *QRectF, image *QImage, sourceRect *QRectF) {
	C.QPainter_DrawImage(this.h, targetRect.cPointer(), image.cPointer(), sourceRect.cPointer())
}

func (this *QPainter) DrawImage2(targetRect *QRect, image *QImage, sourceRect *QRect) {
	C.QPainter_DrawImage2(this.h, targetRect.cPointer(), image.cPointer(), sourceRect.cPointer())
}

func (this *QPainter) DrawImage3(p *QPointF, image *QImage, sr *QRectF) {
	C.QPainter_DrawImage3(this.h, p.cPointer(), image.cPointer(), sr.cPointer())
}

func (this *QPainter) DrawImage4(p *QPoint, image *QImage, sr *QRect) {
	C.QPainter_DrawImage4(this.h, p.cPointer(), image.cPointer(), sr.cPointer())
}

func (this *QPainter) DrawImage5(r *QRectF, image *QImage) {
	C.QPainter_DrawImage5(this.h, r.cPointer(), image.cPointer())
}

func (this *QPainter) DrawImage6(r *QRect, image *QImage) {
	C.QPainter_DrawImage6(this.h, r.cPointer(), image.cPointer())
}

func (this *QPainter) DrawImage7(p *QPointF, image *QImage) {
	C.QPainter_DrawImage7(this.h, p.cPointer(), image.cPointer())
}

func (this *QPainter) DrawImage8(p *QPoint, image *QImage) {
	C.QPainter_DrawImage8(this.h, p.cPointer(), image.cPointer())
}

func (this *QPainter) DrawImage9(x int, y int, image *QImage) {
	C.QPainter_DrawImage9(this.h, (C.int)(x), (C.int)(y), image.cPointer())
}

func (this *QPainter) SetLayoutDirection(direction LayoutDirection) {
	C.QPainter_SetLayoutDirection(this.h, (C.int)(direction))
}

func (this *QPainter) LayoutDirection() LayoutDirection {
	return (LayoutDirection)(C.QPainter_LayoutDirection(this.h))
}

func (this *QPainter) DrawGlyphRun(position *QPointF, glyphRun *QGlyphRun) {
	C.QPainter_DrawGlyphRun(this.h, position.cPointer(), glyphRun.cPointer())
}

func (this *QPainter) DrawStaticText(topLeftPosition *QPointF, staticText *QStaticText) {
	C.QPainter_DrawStaticText(this.h, topLeftPosition.cPointer(), staticText.cPointer())
}

func (this *QPainter) DrawStaticText2(topLeftPosition *QPoint, staticText *QStaticText) {
	C.QPainter_DrawStaticText2(this.h, topLeftPosition.cPointer(), staticText.cPointer())
}

func (this *QPainter) DrawStaticText3(left int, top int, staticText *QStaticText) {
	C.QPainter_DrawStaticText3(this.h, (C.int)(left), (C.int)(top), staticText.cPointer())
}

func (this *QPainter) DrawText(p *QPointF, s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	C.QPainter_DrawText(this.h, p.cPointer(), s_ms)
}

func (this *QPainter) DrawText2(p *QPoint, s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	C.QPainter_DrawText2(this.h, p.cPointer(), s_ms)
}

func (this *QPainter) DrawText3(x int, y int, s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	C.QPainter_DrawText3(this.h, (C.int)(x), (C.int)(y), s_ms)
}

func (this *QPainter) DrawText4(p *QPointF, str string, tf int, justificationPadding int) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	C.QPainter_DrawText4(this.h, p.cPointer(), str_ms, (C.int)(tf), (C.int)(justificationPadding))
}

func (this *QPainter) DrawText5(r *QRectF, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_DrawText5(this.h, r.cPointer(), (C.int)(flags), text_ms)
}

func (this *QPainter) DrawText6(r *QRect, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_DrawText6(this.h, r.cPointer(), (C.int)(flags), text_ms)
}

func (this *QPainter) DrawText7(x int, y int, w int, h int, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_DrawText7(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_ms)
}

func (this *QPainter) DrawText8(r *QRectF, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_DrawText8(this.h, r.cPointer(), text_ms)
}

func (this *QPainter) BoundingRect(rect *QRectF, flags int, text string) *QRectF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRectF(C.QPainter_BoundingRect(this.h, rect.cPointer(), (C.int)(flags), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) BoundingRect2(rect *QRect, flags int, text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QPainter_BoundingRect2(this.h, rect.cPointer(), (C.int)(flags), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) BoundingRect3(x int, y int, w int, h int, flags int, text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QPainter_BoundingRect3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) BoundingRect4(rect *QRectF, text string) *QRectF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRectF(C.QPainter_BoundingRect4(this.h, rect.cPointer(), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) DrawTextItem(p *QPointF, ti *QTextItem) {
	C.QPainter_DrawTextItem(this.h, p.cPointer(), ti.cPointer())
}

func (this *QPainter) DrawTextItem2(x int, y int, ti *QTextItem) {
	C.QPainter_DrawTextItem2(this.h, (C.int)(x), (C.int)(y), ti.cPointer())
}

func (this *QPainter) DrawTextItem3(p *QPoint, ti *QTextItem) {
	C.QPainter_DrawTextItem3(this.h, p.cPointer(), ti.cPointer())
}

func (this *QPainter) FillRect(param1 *QRectF, param2 *QBrush) {
	C.QPainter_FillRect(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QPainter) FillRect2(x int, y int, w int, h int, param5 *QBrush) {
	C.QPainter_FillRect2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), param5.cPointer())
}

func (this *QPainter) FillRect3(param1 *QRect, param2 *QBrush) {
	C.QPainter_FillRect3(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QPainter) FillRect4(param1 *QRectF, color *QColor) {
	C.QPainter_FillRect4(this.h, param1.cPointer(), color.cPointer())
}

func (this *QPainter) FillRect5(x int, y int, w int, h int, color *QColor) {
	C.QPainter_FillRect5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), color.cPointer())
}

func (this *QPainter) FillRect6(param1 *QRect, color *QColor) {
	C.QPainter_FillRect6(this.h, param1.cPointer(), color.cPointer())
}

func (this *QPainter) FillRect7(x int, y int, w int, h int, c GlobalColor) {
	C.QPainter_FillRect7(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(c))
}

func (this *QPainter) FillRect8(r *QRect, c GlobalColor) {
	C.QPainter_FillRect8(this.h, r.cPointer(), (C.int)(c))
}

func (this *QPainter) FillRect9(r *QRectF, c GlobalColor) {
	C.QPainter_FillRect9(this.h, r.cPointer(), (C.int)(c))
}

func (this *QPainter) FillRect10(x int, y int, w int, h int, style BrushStyle) {
	C.QPainter_FillRect10(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(style))
}

func (this *QPainter) FillRect11(r *QRect, style BrushStyle) {
	C.QPainter_FillRect11(this.h, r.cPointer(), (C.int)(style))
}

func (this *QPainter) FillRect12(r *QRectF, style BrushStyle) {
	C.QPainter_FillRect12(this.h, r.cPointer(), (C.int)(style))
}

func (this *QPainter) FillRect13(x int, y int, w int, h int, preset QGradient__Preset) {
	C.QPainter_FillRect13(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(preset))
}

func (this *QPainter) FillRect14(r *QRect, preset QGradient__Preset) {
	C.QPainter_FillRect14(this.h, r.cPointer(), (C.int)(preset))
}

func (this *QPainter) FillRect15(r *QRectF, preset QGradient__Preset) {
	C.QPainter_FillRect15(this.h, r.cPointer(), (C.int)(preset))
}

func (this *QPainter) EraseRect(param1 *QRectF) {
	C.QPainter_EraseRect(this.h, param1.cPointer())
}

func (this *QPainter) EraseRect2(x int, y int, w int, h int) {
	C.QPainter_EraseRect2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) EraseRectWithQRect(param1 *QRect) {
	C.QPainter_EraseRectWithQRect(this.h, param1.cPointer())
}

func (this *QPainter) SetRenderHint(hint QPainter__RenderHint) {
	C.QPainter_SetRenderHint(this.h, (C.int)(hint))
}

func (this *QPainter) SetRenderHints(hints QPainter__RenderHint) {
	C.QPainter_SetRenderHints(this.h, (C.int)(hints))
}

func (this *QPainter) RenderHints() QPainter__RenderHint {
	return (QPainter__RenderHint)(C.QPainter_RenderHints(this.h))
}

func (this *QPainter) TestRenderHint(hint QPainter__RenderHint) bool {
	return (bool)(C.QPainter_TestRenderHint(this.h, (C.int)(hint)))
}

func (this *QPainter) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QPainter_PaintEngine(this.h))
}

func (this *QPainter) BeginNativePainting() {
	C.QPainter_BeginNativePainting(this.h)
}

func (this *QPainter) EndNativePainting() {
	C.QPainter_EndNativePainting(this.h)
}

func (this *QPainter) SetClipRect22(param1 *QRectF, op ClipOperation) {
	C.QPainter_SetClipRect22(this.h, param1.cPointer(), (C.int)(op))
}

func (this *QPainter) SetClipRect23(param1 *QRect, op ClipOperation) {
	C.QPainter_SetClipRect23(this.h, param1.cPointer(), (C.int)(op))
}

func (this *QPainter) SetClipRect5(x int, y int, w int, h int, op ClipOperation) {
	C.QPainter_SetClipRect5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(op))
}

func (this *QPainter) SetClipRegion2(param1 *QRegion, op ClipOperation) {
	C.QPainter_SetClipRegion2(this.h, param1.cPointer(), (C.int)(op))
}

func (this *QPainter) SetClipPath2(path *QPainterPath, op ClipOperation) {
	C.QPainter_SetClipPath2(this.h, path.cPointer(), (C.int)(op))
}

func (this *QPainter) SetTransform2(transform *QTransform, combine bool) {
	C.QPainter_SetTransform2(this.h, transform.cPointer(), (C.bool)(combine))
}

func (this *QPainter) SetWorldTransform2(matrix *QTransform, combine bool) {
	C.QPainter_SetWorldTransform2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QPainter) DrawPolygon32(points *QPointF, pointCount int, fillRule FillRule) {
	C.QPainter_DrawPolygon32(this.h, points.cPointer(), (C.int)(pointCount), (C.int)(fillRule))
}

func (this *QPainter) DrawPolygon33(points *QPoint, pointCount int, fillRule FillRule) {
	C.QPainter_DrawPolygon33(this.h, points.cPointer(), (C.int)(pointCount), (C.int)(fillRule))
}

func (this *QPainter) DrawRoundedRect4(rect *QRectF, xRadius float64, yRadius float64, mode SizeMode) {
	C.QPainter_DrawRoundedRect4(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

func (this *QPainter) DrawRoundedRect7(x int, y int, w int, h int, xRadius float64, yRadius float64, mode SizeMode) {
	C.QPainter_DrawRoundedRect7(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

func (this *QPainter) DrawRoundedRect42(rect *QRect, xRadius float64, yRadius float64, mode SizeMode) {
	C.QPainter_DrawRoundedRect42(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

func (this *QPainter) DrawTiledPixmap32(rect *QRectF, pm *QPixmap, offset *QPointF) {
	C.QPainter_DrawTiledPixmap32(this.h, rect.cPointer(), pm.cPointer(), offset.cPointer())
}

func (this *QPainter) DrawTiledPixmap6(x int, y int, w int, h int, param5 *QPixmap, sx int) {
	C.QPainter_DrawTiledPixmap6(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), param5.cPointer(), (C.int)(sx))
}

func (this *QPainter) DrawTiledPixmap7(x int, y int, w int, h int, param5 *QPixmap, sx int, sy int) {
	C.QPainter_DrawTiledPixmap7(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), param5.cPointer(), (C.int)(sx), (C.int)(sy))
}

func (this *QPainter) DrawTiledPixmap33(param1 *QRect, param2 *QPixmap, param3 *QPoint) {
	C.QPainter_DrawTiledPixmap33(this.h, param1.cPointer(), param2.cPointer(), param3.cPointer())
}

func (this *QPainter) DrawPixmapFragments4(fragments *QPainter__PixmapFragment, fragmentCount int, pixmap *QPixmap, hints QPainter__PixmapFragmentHint) {
	C.QPainter_DrawPixmapFragments4(this.h, fragments.cPointer(), (C.int)(fragmentCount), pixmap.cPointer(), (C.int)(hints))
}

func (this *QPainter) DrawImage42(targetRect *QRectF, image *QImage, sourceRect *QRectF, flags ImageConversionFlag) {
	C.QPainter_DrawImage42(this.h, targetRect.cPointer(), image.cPointer(), sourceRect.cPointer(), (C.int)(flags))
}

func (this *QPainter) DrawImage43(targetRect *QRect, image *QImage, sourceRect *QRect, flags ImageConversionFlag) {
	C.QPainter_DrawImage43(this.h, targetRect.cPointer(), image.cPointer(), sourceRect.cPointer(), (C.int)(flags))
}

func (this *QPainter) DrawImage44(p *QPointF, image *QImage, sr *QRectF, flags ImageConversionFlag) {
	C.QPainter_DrawImage44(this.h, p.cPointer(), image.cPointer(), sr.cPointer(), (C.int)(flags))
}

func (this *QPainter) DrawImage45(p *QPoint, image *QImage, sr *QRect, flags ImageConversionFlag) {
	C.QPainter_DrawImage45(this.h, p.cPointer(), image.cPointer(), sr.cPointer(), (C.int)(flags))
}

func (this *QPainter) DrawImage46(x int, y int, image *QImage, sx int) {
	C.QPainter_DrawImage46(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx))
}

func (this *QPainter) DrawImage52(x int, y int, image *QImage, sx int, sy int) {
	C.QPainter_DrawImage52(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx), (C.int)(sy))
}

func (this *QPainter) DrawImage62(x int, y int, image *QImage, sx int, sy int, sw int) {
	C.QPainter_DrawImage62(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw))
}

func (this *QPainter) DrawImage72(x int, y int, image *QImage, sx int, sy int, sw int, sh int) {
	C.QPainter_DrawImage72(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw), (C.int)(sh))
}

func (this *QPainter) DrawImage82(x int, y int, image *QImage, sx int, sy int, sw int, sh int, flags ImageConversionFlag) {
	C.QPainter_DrawImage82(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw), (C.int)(sh), (C.int)(flags))
}

func (this *QPainter) DrawText42(r *QRectF, flags int, text string, br *QRectF) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_DrawText42(this.h, r.cPointer(), (C.int)(flags), text_ms, br.cPointer())
}

func (this *QPainter) DrawText43(r *QRect, flags int, text string, br *QRect) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_DrawText43(this.h, r.cPointer(), (C.int)(flags), text_ms, br.cPointer())
}

func (this *QPainter) DrawText72(x int, y int, w int, h int, flags int, text string, br *QRect) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_DrawText72(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_ms, br.cPointer())
}

func (this *QPainter) DrawText32(r *QRectF, text string, o *QTextOption) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_DrawText32(this.h, r.cPointer(), text_ms, o.cPointer())
}

func (this *QPainter) BoundingRect32(rect *QRectF, text string, o *QTextOption) *QRectF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRectF(C.QPainter_BoundingRect32(this.h, rect.cPointer(), text_ms, o.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetRenderHint2(hint QPainter__RenderHint, on bool) {
	C.QPainter_SetRenderHint2(this.h, (C.int)(hint), (C.bool)(on))
}

func (this *QPainter) SetRenderHints2(hints QPainter__RenderHint, on bool) {
	C.QPainter_SetRenderHints2(this.h, (C.int)(hints), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QPainter) Delete() {
	C.QPainter_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPainter) GoGC() {
	runtime.SetFinalizer(this, func(this *QPainter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPainter__PixmapFragment struct {
	h          *C.QPainter__PixmapFragment
	isSubclass bool
}

func (this *QPainter__PixmapFragment) cPointer() *C.QPainter__PixmapFragment {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPainter__PixmapFragment) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPainter__PixmapFragment constructs the type using only CGO pointers.
func newQPainter__PixmapFragment(h *C.QPainter__PixmapFragment) *QPainter__PixmapFragment {
	if h == nil {
		return nil
	}

	return &QPainter__PixmapFragment{h: h}
}

// UnsafeNewQPainter__PixmapFragment constructs the type using only unsafe pointers.
func UnsafeNewQPainter__PixmapFragment(h unsafe.Pointer) *QPainter__PixmapFragment {
	return newQPainter__PixmapFragment((*C.QPainter__PixmapFragment)(h))
}

func QPainter__PixmapFragment_Create(pos *QPointF, sourceRect *QRectF) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_Create(pos.cPointer(), sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPainter__PixmapFragment_Create3(pos *QPointF, sourceRect *QRectF, scaleX float64) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_Create3(pos.cPointer(), sourceRect.cPointer(), (C.double)(scaleX)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPainter__PixmapFragment_Create4(pos *QPointF, sourceRect *QRectF, scaleX float64, scaleY float64) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_Create4(pos.cPointer(), sourceRect.cPointer(), (C.double)(scaleX), (C.double)(scaleY)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPainter__PixmapFragment_Create5(pos *QPointF, sourceRect *QRectF, scaleX float64, scaleY float64, rotation float64) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_Create5(pos.cPointer(), sourceRect.cPointer(), (C.double)(scaleX), (C.double)(scaleY), (C.double)(rotation)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPainter__PixmapFragment_Create6(pos *QPointF, sourceRect *QRectF, scaleX float64, scaleY float64, rotation float64, opacity float64) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_Create6(pos.cPointer(), sourceRect.cPointer(), (C.double)(scaleX), (C.double)(scaleY), (C.double)(rotation), (C.double)(opacity)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPainter__PixmapFragment) Delete() {
	C.QPainter__PixmapFragment_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPainter__PixmapFragment) GoGC() {
	runtime.SetFinalizer(this, func(this *QPainter__PixmapFragment) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
