package qt

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
	QPainter__Antialiasing            QPainter__RenderHint = 1
	QPainter__TextAntialiasing        QPainter__RenderHint = 2
	QPainter__SmoothPixmapTransform   QPainter__RenderHint = 4
	QPainter__HighQualityAntialiasing QPainter__RenderHint = 8
	QPainter__NonCosmeticDefaultPen   QPainter__RenderHint = 16
	QPainter__Qt4CompatiblePainting   QPainter__RenderHint = 32
	QPainter__LosslessImageRendering  QPainter__RenderHint = 64
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
	h *C.QPainter
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

	return newQPainter(C.QPainter_new())
}

// NewQPainter2 constructs a new QPainter object.
func NewQPainter2(param1 *QPaintDevice) *QPainter {

	return newQPainter(C.QPainter_new2(param1.cPointer()))
}

func (this *QPainter) Device() *QPaintDevice {
	return newQPaintDevice(C.QPainter_device(this.h))
}

func (this *QPainter) Begin(param1 *QPaintDevice) bool {
	return (bool)(C.QPainter_begin(this.h, param1.cPointer()))
}

func (this *QPainter) End() bool {
	return (bool)(C.QPainter_end(this.h))
}

func (this *QPainter) IsActive() bool {
	return (bool)(C.QPainter_isActive(this.h))
}

func (this *QPainter) InitFrom(device *QPaintDevice) {
	C.QPainter_initFrom(this.h, device.cPointer())
}

func (this *QPainter) SetCompositionMode(mode QPainter__CompositionMode) {
	C.QPainter_setCompositionMode(this.h, (C.int)(mode))
}

func (this *QPainter) CompositionMode() QPainter__CompositionMode {
	return (QPainter__CompositionMode)(C.QPainter_compositionMode(this.h))
}

func (this *QPainter) Font() *QFont {
	return newQFont(C.QPainter_font(this.h))
}

func (this *QPainter) SetFont(f *QFont) {
	C.QPainter_setFont(this.h, f.cPointer())
}

func (this *QPainter) FontMetrics() *QFontMetrics {
	_goptr := newQFontMetrics(C.QPainter_fontMetrics(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) FontInfo() *QFontInfo {
	_goptr := newQFontInfo(C.QPainter_fontInfo(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetPen(color *QColor) {
	C.QPainter_setPen(this.h, color.cPointer())
}

func (this *QPainter) SetPenWithPen(pen *QPen) {
	C.QPainter_setPenWithPen(this.h, pen.cPointer())
}

func (this *QPainter) SetPenWithStyle(style PenStyle) {
	C.QPainter_setPenWithStyle(this.h, (C.int)(style))
}

func (this *QPainter) Pen() *QPen {
	return newQPen(C.QPainter_pen(this.h))
}

func (this *QPainter) SetBrush(brush *QBrush) {
	C.QPainter_setBrush(this.h, brush.cPointer())
}

func (this *QPainter) SetBrushWithStyle(style BrushStyle) {
	C.QPainter_setBrushWithStyle(this.h, (C.int)(style))
}

func (this *QPainter) Brush() *QBrush {
	return newQBrush(C.QPainter_brush(this.h))
}

func (this *QPainter) SetBackgroundMode(mode BGMode) {
	C.QPainter_setBackgroundMode(this.h, (C.int)(mode))
}

func (this *QPainter) BackgroundMode() BGMode {
	return (BGMode)(C.QPainter_backgroundMode(this.h))
}

func (this *QPainter) BrushOrigin() *QPoint {
	_goptr := newQPoint(C.QPainter_brushOrigin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetBrushOrigin(x int, y int) {
	C.QPainter_setBrushOrigin(this.h, (C.int)(x), (C.int)(y))
}

func (this *QPainter) SetBrushOriginWithBrushOrigin(brushOrigin *QPoint) {
	C.QPainter_setBrushOriginWithBrushOrigin(this.h, brushOrigin.cPointer())
}

func (this *QPainter) SetBrushOrigin2(brushOrigin *QPointF) {
	C.QPainter_setBrushOrigin2(this.h, brushOrigin.cPointer())
}

func (this *QPainter) SetBackground(bg *QBrush) {
	C.QPainter_setBackground(this.h, bg.cPointer())
}

func (this *QPainter) Background() *QBrush {
	return newQBrush(C.QPainter_background(this.h))
}

func (this *QPainter) Opacity() float64 {
	return (float64)(C.QPainter_opacity(this.h))
}

func (this *QPainter) SetOpacity(opacity float64) {
	C.QPainter_setOpacity(this.h, (C.double)(opacity))
}

func (this *QPainter) ClipRegion() *QRegion {
	_goptr := newQRegion(C.QPainter_clipRegion(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) ClipPath() *QPainterPath {
	_goptr := newQPainterPath(C.QPainter_clipPath(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetClipRect(param1 *QRectF) {
	C.QPainter_setClipRect(this.h, param1.cPointer())
}

func (this *QPainter) SetClipRectWithQRect(param1 *QRect) {
	C.QPainter_setClipRectWithQRect(this.h, param1.cPointer())
}

func (this *QPainter) SetClipRect2(x int, y int, w int, h int) {
	C.QPainter_setClipRect2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) SetClipRegion(param1 *QRegion) {
	C.QPainter_setClipRegion(this.h, param1.cPointer())
}

func (this *QPainter) SetClipPath(path *QPainterPath) {
	C.QPainter_setClipPath(this.h, path.cPointer())
}

func (this *QPainter) SetClipping(enable bool) {
	C.QPainter_setClipping(this.h, (C.bool)(enable))
}

func (this *QPainter) HasClipping() bool {
	return (bool)(C.QPainter_hasClipping(this.h))
}

func (this *QPainter) ClipBoundingRect() *QRectF {
	_goptr := newQRectF(C.QPainter_clipBoundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) Save() {
	C.QPainter_save(this.h)
}

func (this *QPainter) Restore() {
	C.QPainter_restore(this.h)
}

func (this *QPainter) SetMatrix(matrix *QMatrix) {
	C.QPainter_setMatrix(this.h, matrix.cPointer())
}

func (this *QPainter) Matrix() *QMatrix {
	return newQMatrix(C.QPainter_matrix(this.h))
}

func (this *QPainter) DeviceMatrix() *QMatrix {
	return newQMatrix(C.QPainter_deviceMatrix(this.h))
}

func (this *QPainter) ResetMatrix() {
	C.QPainter_resetMatrix(this.h)
}

func (this *QPainter) SetTransform(transform *QTransform) {
	C.QPainter_setTransform(this.h, transform.cPointer())
}

func (this *QPainter) Transform() *QTransform {
	return newQTransform(C.QPainter_transform(this.h))
}

func (this *QPainter) DeviceTransform() *QTransform {
	return newQTransform(C.QPainter_deviceTransform(this.h))
}

func (this *QPainter) ResetTransform() {
	C.QPainter_resetTransform(this.h)
}

func (this *QPainter) SetWorldMatrix(matrix *QMatrix) {
	C.QPainter_setWorldMatrix(this.h, matrix.cPointer())
}

func (this *QPainter) WorldMatrix() *QMatrix {
	return newQMatrix(C.QPainter_worldMatrix(this.h))
}

func (this *QPainter) CombinedMatrix() *QMatrix {
	_goptr := newQMatrix(C.QPainter_combinedMatrix(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetMatrixEnabled(enabled bool) {
	C.QPainter_setMatrixEnabled(this.h, (C.bool)(enabled))
}

func (this *QPainter) MatrixEnabled() bool {
	return (bool)(C.QPainter_matrixEnabled(this.h))
}

func (this *QPainter) SetWorldTransform(matrix *QTransform) {
	C.QPainter_setWorldTransform(this.h, matrix.cPointer())
}

func (this *QPainter) WorldTransform() *QTransform {
	return newQTransform(C.QPainter_worldTransform(this.h))
}

func (this *QPainter) CombinedTransform() *QTransform {
	_goptr := newQTransform(C.QPainter_combinedTransform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetWorldMatrixEnabled(enabled bool) {
	C.QPainter_setWorldMatrixEnabled(this.h, (C.bool)(enabled))
}

func (this *QPainter) WorldMatrixEnabled() bool {
	return (bool)(C.QPainter_worldMatrixEnabled(this.h))
}

func (this *QPainter) Scale(sx float64, sy float64) {
	C.QPainter_scale(this.h, (C.double)(sx), (C.double)(sy))
}

func (this *QPainter) Shear(sh float64, sv float64) {
	C.QPainter_shear(this.h, (C.double)(sh), (C.double)(sv))
}

func (this *QPainter) Rotate(a float64) {
	C.QPainter_rotate(this.h, (C.double)(a))
}

func (this *QPainter) Translate(offset *QPointF) {
	C.QPainter_translate(this.h, offset.cPointer())
}

func (this *QPainter) TranslateWithOffset(offset *QPoint) {
	C.QPainter_translateWithOffset(this.h, offset.cPointer())
}

func (this *QPainter) Translate2(dx float64, dy float64) {
	C.QPainter_translate2(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QPainter) Window() *QRect {
	_goptr := newQRect(C.QPainter_window(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetWindow(window *QRect) {
	C.QPainter_setWindow(this.h, window.cPointer())
}

func (this *QPainter) SetWindow2(x int, y int, w int, h int) {
	C.QPainter_setWindow2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) Viewport() *QRect {
	_goptr := newQRect(C.QPainter_viewport(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetViewport(viewport *QRect) {
	C.QPainter_setViewport(this.h, viewport.cPointer())
}

func (this *QPainter) SetViewport2(x int, y int, w int, h int) {
	C.QPainter_setViewport2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) SetViewTransformEnabled(enable bool) {
	C.QPainter_setViewTransformEnabled(this.h, (C.bool)(enable))
}

func (this *QPainter) ViewTransformEnabled() bool {
	return (bool)(C.QPainter_viewTransformEnabled(this.h))
}

func (this *QPainter) StrokePath(path *QPainterPath, pen *QPen) {
	C.QPainter_strokePath(this.h, path.cPointer(), pen.cPointer())
}

func (this *QPainter) FillPath(path *QPainterPath, brush *QBrush) {
	C.QPainter_fillPath(this.h, path.cPointer(), brush.cPointer())
}

func (this *QPainter) DrawPath(path *QPainterPath) {
	C.QPainter_drawPath(this.h, path.cPointer())
}

func (this *QPainter) DrawPoint(pt *QPointF) {
	C.QPainter_drawPoint(this.h, pt.cPointer())
}

func (this *QPainter) DrawPointWithQPoint(p *QPoint) {
	C.QPainter_drawPointWithQPoint(this.h, p.cPointer())
}

func (this *QPainter) DrawPoint2(x int, y int) {
	C.QPainter_drawPoint2(this.h, (C.int)(x), (C.int)(y))
}

func (this *QPainter) DrawPoints(points *QPointF, pointCount int) {
	C.QPainter_drawPoints(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawPoints2(points *QPoint, pointCount int) {
	C.QPainter_drawPoints2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawLine(line *QLineF) {
	C.QPainter_drawLine(this.h, line.cPointer())
}

func (this *QPainter) DrawLineWithLine(line *QLine) {
	C.QPainter_drawLineWithLine(this.h, line.cPointer())
}

func (this *QPainter) DrawLine2(x1 int, y1 int, x2 int, y2 int) {
	C.QPainter_drawLine2(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this *QPainter) DrawLine3(p1 *QPoint, p2 *QPoint) {
	C.QPainter_drawLine3(this.h, p1.cPointer(), p2.cPointer())
}

func (this *QPainter) DrawLine4(p1 *QPointF, p2 *QPointF) {
	C.QPainter_drawLine4(this.h, p1.cPointer(), p2.cPointer())
}

func (this *QPainter) DrawLines(lines *QLineF, lineCount int) {
	C.QPainter_drawLines(this.h, lines.cPointer(), (C.int)(lineCount))
}

func (this *QPainter) DrawLinesWithLines(lines []QLineF) {
	lines_CArray := (*[0xffff]*C.QLineF)(C.malloc(C.size_t(8 * len(lines))))
	defer C.free(unsafe.Pointer(lines_CArray))
	for i := range lines {
		lines_CArray[i] = lines[i].cPointer()
	}
	lines_ma := C.struct_miqt_array{len: C.size_t(len(lines)), data: unsafe.Pointer(lines_CArray)}
	C.QPainter_drawLinesWithLines(this.h, lines_ma)
}

func (this *QPainter) DrawLines2(pointPairs *QPointF, lineCount int) {
	C.QPainter_drawLines2(this.h, pointPairs.cPointer(), (C.int)(lineCount))
}

func (this *QPainter) DrawLinesWithPointPairs(pointPairs []QPointF) {
	pointPairs_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(pointPairs))))
	defer C.free(unsafe.Pointer(pointPairs_CArray))
	for i := range pointPairs {
		pointPairs_CArray[i] = pointPairs[i].cPointer()
	}
	pointPairs_ma := C.struct_miqt_array{len: C.size_t(len(pointPairs)), data: unsafe.Pointer(pointPairs_CArray)}
	C.QPainter_drawLinesWithPointPairs(this.h, pointPairs_ma)
}

func (this *QPainter) DrawLines3(lines *QLine, lineCount int) {
	C.QPainter_drawLines3(this.h, lines.cPointer(), (C.int)(lineCount))
}

func (this *QPainter) DrawLines4(lines []QLine) {
	lines_CArray := (*[0xffff]*C.QLine)(C.malloc(C.size_t(8 * len(lines))))
	defer C.free(unsafe.Pointer(lines_CArray))
	for i := range lines {
		lines_CArray[i] = lines[i].cPointer()
	}
	lines_ma := C.struct_miqt_array{len: C.size_t(len(lines)), data: unsafe.Pointer(lines_CArray)}
	C.QPainter_drawLines4(this.h, lines_ma)
}

func (this *QPainter) DrawLines5(pointPairs *QPoint, lineCount int) {
	C.QPainter_drawLines5(this.h, pointPairs.cPointer(), (C.int)(lineCount))
}

func (this *QPainter) DrawLines6(pointPairs []QPoint) {
	pointPairs_CArray := (*[0xffff]*C.QPoint)(C.malloc(C.size_t(8 * len(pointPairs))))
	defer C.free(unsafe.Pointer(pointPairs_CArray))
	for i := range pointPairs {
		pointPairs_CArray[i] = pointPairs[i].cPointer()
	}
	pointPairs_ma := C.struct_miqt_array{len: C.size_t(len(pointPairs)), data: unsafe.Pointer(pointPairs_CArray)}
	C.QPainter_drawLines6(this.h, pointPairs_ma)
}

func (this *QPainter) DrawRect(rect *QRectF) {
	C.QPainter_drawRect(this.h, rect.cPointer())
}

func (this *QPainter) DrawRect2(x1 int, y1 int, w int, h int) {
	C.QPainter_drawRect2(this.h, (C.int)(x1), (C.int)(y1), (C.int)(w), (C.int)(h))
}

func (this *QPainter) DrawRectWithRect(rect *QRect) {
	C.QPainter_drawRectWithRect(this.h, rect.cPointer())
}

func (this *QPainter) DrawRects(rects *QRectF, rectCount int) {
	C.QPainter_drawRects(this.h, rects.cPointer(), (C.int)(rectCount))
}

func (this *QPainter) DrawRectsWithRectangles(rectangles []QRectF) {
	rectangles_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.size_t(8 * len(rectangles))))
	defer C.free(unsafe.Pointer(rectangles_CArray))
	for i := range rectangles {
		rectangles_CArray[i] = rectangles[i].cPointer()
	}
	rectangles_ma := C.struct_miqt_array{len: C.size_t(len(rectangles)), data: unsafe.Pointer(rectangles_CArray)}
	C.QPainter_drawRectsWithRectangles(this.h, rectangles_ma)
}

func (this *QPainter) DrawRects2(rects *QRect, rectCount int) {
	C.QPainter_drawRects2(this.h, rects.cPointer(), (C.int)(rectCount))
}

func (this *QPainter) DrawRects3(rectangles []QRect) {
	rectangles_CArray := (*[0xffff]*C.QRect)(C.malloc(C.size_t(8 * len(rectangles))))
	defer C.free(unsafe.Pointer(rectangles_CArray))
	for i := range rectangles {
		rectangles_CArray[i] = rectangles[i].cPointer()
	}
	rectangles_ma := C.struct_miqt_array{len: C.size_t(len(rectangles)), data: unsafe.Pointer(rectangles_CArray)}
	C.QPainter_drawRects3(this.h, rectangles_ma)
}

func (this *QPainter) DrawEllipse(r *QRectF) {
	C.QPainter_drawEllipse(this.h, r.cPointer())
}

func (this *QPainter) DrawEllipseWithQRect(r *QRect) {
	C.QPainter_drawEllipseWithQRect(this.h, r.cPointer())
}

func (this *QPainter) DrawEllipse2(x int, y int, w int, h int) {
	C.QPainter_drawEllipse2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) DrawEllipse3(center *QPointF, rx float64, ry float64) {
	C.QPainter_drawEllipse3(this.h, center.cPointer(), (C.double)(rx), (C.double)(ry))
}

func (this *QPainter) DrawEllipse4(center *QPoint, rx int, ry int) {
	C.QPainter_drawEllipse4(this.h, center.cPointer(), (C.int)(rx), (C.int)(ry))
}

func (this *QPainter) DrawPolyline(points *QPointF, pointCount int) {
	C.QPainter_drawPolyline(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawPolyline2(points *QPoint, pointCount int) {
	C.QPainter_drawPolyline2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawPolygon(points *QPointF, pointCount int) {
	C.QPainter_drawPolygon(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawPolygon2(points *QPoint, pointCount int) {
	C.QPainter_drawPolygon2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawConvexPolygon(points *QPointF, pointCount int) {
	C.QPainter_drawConvexPolygon(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawConvexPolygon2(points *QPoint, pointCount int) {
	C.QPainter_drawConvexPolygon2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPainter) DrawArc(rect *QRectF, a int, alen int) {
	C.QPainter_drawArc(this.h, rect.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawArc2(param1 *QRect, a int, alen int) {
	C.QPainter_drawArc2(this.h, param1.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawArc3(x int, y int, w int, h int, a int, alen int) {
	C.QPainter_drawArc3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawPie(rect *QRectF, a int, alen int) {
	C.QPainter_drawPie(this.h, rect.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawPie2(x int, y int, w int, h int, a int, alen int) {
	C.QPainter_drawPie2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawPie3(param1 *QRect, a int, alen int) {
	C.QPainter_drawPie3(this.h, param1.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawChord(rect *QRectF, a int, alen int) {
	C.QPainter_drawChord(this.h, rect.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawChord2(x int, y int, w int, h int, a int, alen int) {
	C.QPainter_drawChord2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawChord3(param1 *QRect, a int, alen int) {
	C.QPainter_drawChord3(this.h, param1.cPointer(), (C.int)(a), (C.int)(alen))
}

func (this *QPainter) DrawRoundedRect(rect *QRectF, xRadius float64, yRadius float64) {
	C.QPainter_drawRoundedRect(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainter) DrawRoundedRect2(x int, y int, w int, h int, xRadius float64, yRadius float64) {
	C.QPainter_drawRoundedRect2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainter) DrawRoundedRect3(rect *QRect, xRadius float64, yRadius float64) {
	C.QPainter_drawRoundedRect3(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainter) DrawRoundRect(r *QRectF) {
	C.QPainter_drawRoundRect(this.h, r.cPointer())
}

func (this *QPainter) DrawRoundRect2(x int, y int, w int, h int) {
	C.QPainter_drawRoundRect2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) DrawRoundRectWithQRect(r *QRect) {
	C.QPainter_drawRoundRectWithQRect(this.h, r.cPointer())
}

func (this *QPainter) DrawTiledPixmap(rect *QRectF, pm *QPixmap) {
	C.QPainter_drawTiledPixmap(this.h, rect.cPointer(), pm.cPointer())
}

func (this *QPainter) DrawTiledPixmap2(x int, y int, w int, h int, param5 *QPixmap) {
	C.QPainter_drawTiledPixmap2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), param5.cPointer())
}

func (this *QPainter) DrawTiledPixmap3(param1 *QRect, param2 *QPixmap) {
	C.QPainter_drawTiledPixmap3(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QPainter) DrawPicture(p *QPointF, picture *QPicture) {
	C.QPainter_drawPicture(this.h, p.cPointer(), picture.cPointer())
}

func (this *QPainter) DrawPicture2(x int, y int, picture *QPicture) {
	C.QPainter_drawPicture2(this.h, (C.int)(x), (C.int)(y), picture.cPointer())
}

func (this *QPainter) DrawPicture3(p *QPoint, picture *QPicture) {
	C.QPainter_drawPicture3(this.h, p.cPointer(), picture.cPointer())
}

func (this *QPainter) DrawPixmap(targetRect *QRectF, pixmap *QPixmap, sourceRect *QRectF) {
	C.QPainter_drawPixmap(this.h, targetRect.cPointer(), pixmap.cPointer(), sourceRect.cPointer())
}

func (this *QPainter) DrawPixmap2(targetRect *QRect, pixmap *QPixmap, sourceRect *QRect) {
	C.QPainter_drawPixmap2(this.h, targetRect.cPointer(), pixmap.cPointer(), sourceRect.cPointer())
}

func (this *QPainter) DrawPixmap3(x int, y int, w int, h int, pm *QPixmap, sx int, sy int, sw int, sh int) {
	C.QPainter_drawPixmap3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), pm.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw), (C.int)(sh))
}

func (this *QPainter) DrawPixmap4(x int, y int, pm *QPixmap, sx int, sy int, sw int, sh int) {
	C.QPainter_drawPixmap4(this.h, (C.int)(x), (C.int)(y), pm.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw), (C.int)(sh))
}

func (this *QPainter) DrawPixmap5(p *QPointF, pm *QPixmap, sr *QRectF) {
	C.QPainter_drawPixmap5(this.h, p.cPointer(), pm.cPointer(), sr.cPointer())
}

func (this *QPainter) DrawPixmap6(p *QPoint, pm *QPixmap, sr *QRect) {
	C.QPainter_drawPixmap6(this.h, p.cPointer(), pm.cPointer(), sr.cPointer())
}

func (this *QPainter) DrawPixmap7(p *QPointF, pm *QPixmap) {
	C.QPainter_drawPixmap7(this.h, p.cPointer(), pm.cPointer())
}

func (this *QPainter) DrawPixmap8(p *QPoint, pm *QPixmap) {
	C.QPainter_drawPixmap8(this.h, p.cPointer(), pm.cPointer())
}

func (this *QPainter) DrawPixmap9(x int, y int, pm *QPixmap) {
	C.QPainter_drawPixmap9(this.h, (C.int)(x), (C.int)(y), pm.cPointer())
}

func (this *QPainter) DrawPixmap10(r *QRect, pm *QPixmap) {
	C.QPainter_drawPixmap10(this.h, r.cPointer(), pm.cPointer())
}

func (this *QPainter) DrawPixmap11(x int, y int, w int, h int, pm *QPixmap) {
	C.QPainter_drawPixmap11(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), pm.cPointer())
}

func (this *QPainter) DrawPixmapFragments(fragments *QPainter__PixmapFragment, fragmentCount int, pixmap *QPixmap) {
	C.QPainter_drawPixmapFragments(this.h, fragments.cPointer(), (C.int)(fragmentCount), pixmap.cPointer())
}

func (this *QPainter) DrawImage(targetRect *QRectF, image *QImage, sourceRect *QRectF) {
	C.QPainter_drawImage(this.h, targetRect.cPointer(), image.cPointer(), sourceRect.cPointer())
}

func (this *QPainter) DrawImage2(targetRect *QRect, image *QImage, sourceRect *QRect) {
	C.QPainter_drawImage2(this.h, targetRect.cPointer(), image.cPointer(), sourceRect.cPointer())
}

func (this *QPainter) DrawImage3(p *QPointF, image *QImage, sr *QRectF) {
	C.QPainter_drawImage3(this.h, p.cPointer(), image.cPointer(), sr.cPointer())
}

func (this *QPainter) DrawImage4(p *QPoint, image *QImage, sr *QRect) {
	C.QPainter_drawImage4(this.h, p.cPointer(), image.cPointer(), sr.cPointer())
}

func (this *QPainter) DrawImage5(r *QRectF, image *QImage) {
	C.QPainter_drawImage5(this.h, r.cPointer(), image.cPointer())
}

func (this *QPainter) DrawImage6(r *QRect, image *QImage) {
	C.QPainter_drawImage6(this.h, r.cPointer(), image.cPointer())
}

func (this *QPainter) DrawImage7(p *QPointF, image *QImage) {
	C.QPainter_drawImage7(this.h, p.cPointer(), image.cPointer())
}

func (this *QPainter) DrawImage8(p *QPoint, image *QImage) {
	C.QPainter_drawImage8(this.h, p.cPointer(), image.cPointer())
}

func (this *QPainter) DrawImage9(x int, y int, image *QImage) {
	C.QPainter_drawImage9(this.h, (C.int)(x), (C.int)(y), image.cPointer())
}

func (this *QPainter) SetLayoutDirection(direction LayoutDirection) {
	C.QPainter_setLayoutDirection(this.h, (C.int)(direction))
}

func (this *QPainter) LayoutDirection() LayoutDirection {
	return (LayoutDirection)(C.QPainter_layoutDirection(this.h))
}

func (this *QPainter) DrawGlyphRun(position *QPointF, glyphRun *QGlyphRun) {
	C.QPainter_drawGlyphRun(this.h, position.cPointer(), glyphRun.cPointer())
}

func (this *QPainter) DrawStaticText(topLeftPosition *QPointF, staticText *QStaticText) {
	C.QPainter_drawStaticText(this.h, topLeftPosition.cPointer(), staticText.cPointer())
}

func (this *QPainter) DrawStaticText2(topLeftPosition *QPoint, staticText *QStaticText) {
	C.QPainter_drawStaticText2(this.h, topLeftPosition.cPointer(), staticText.cPointer())
}

func (this *QPainter) DrawStaticText3(left int, top int, staticText *QStaticText) {
	C.QPainter_drawStaticText3(this.h, (C.int)(left), (C.int)(top), staticText.cPointer())
}

func (this *QPainter) DrawText(p *QPointF, s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	C.QPainter_drawText(this.h, p.cPointer(), s_ms)
}

func (this *QPainter) DrawText2(p *QPoint, s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	C.QPainter_drawText2(this.h, p.cPointer(), s_ms)
}

func (this *QPainter) DrawText3(x int, y int, s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	C.QPainter_drawText3(this.h, (C.int)(x), (C.int)(y), s_ms)
}

func (this *QPainter) DrawText4(p *QPointF, str string, tf int, justificationPadding int) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	C.QPainter_drawText4(this.h, p.cPointer(), str_ms, (C.int)(tf), (C.int)(justificationPadding))
}

func (this *QPainter) DrawText5(r *QRectF, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_drawText5(this.h, r.cPointer(), (C.int)(flags), text_ms)
}

func (this *QPainter) DrawText6(r *QRect, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_drawText6(this.h, r.cPointer(), (C.int)(flags), text_ms)
}

func (this *QPainter) DrawText7(x int, y int, w int, h int, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_drawText7(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_ms)
}

func (this *QPainter) DrawText8(r *QRectF, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_drawText8(this.h, r.cPointer(), text_ms)
}

func (this *QPainter) BoundingRect(rect *QRectF, flags int, text string) *QRectF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRectF(C.QPainter_boundingRect(this.h, rect.cPointer(), (C.int)(flags), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) BoundingRect2(rect *QRect, flags int, text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QPainter_boundingRect2(this.h, rect.cPointer(), (C.int)(flags), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) BoundingRect3(x int, y int, w int, h int, flags int, text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QPainter_boundingRect3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) BoundingRect4(rect *QRectF, text string) *QRectF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRectF(C.QPainter_boundingRect4(this.h, rect.cPointer(), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) DrawTextItem(p *QPointF, ti *QTextItem) {
	C.QPainter_drawTextItem(this.h, p.cPointer(), ti.cPointer())
}

func (this *QPainter) DrawTextItem2(x int, y int, ti *QTextItem) {
	C.QPainter_drawTextItem2(this.h, (C.int)(x), (C.int)(y), ti.cPointer())
}

func (this *QPainter) DrawTextItem3(p *QPoint, ti *QTextItem) {
	C.QPainter_drawTextItem3(this.h, p.cPointer(), ti.cPointer())
}

func (this *QPainter) FillRect(param1 *QRectF, param2 *QBrush) {
	C.QPainter_fillRect(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QPainter) FillRect2(x int, y int, w int, h int, param5 *QBrush) {
	C.QPainter_fillRect2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), param5.cPointer())
}

func (this *QPainter) FillRect3(param1 *QRect, param2 *QBrush) {
	C.QPainter_fillRect3(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QPainter) FillRect4(param1 *QRectF, color *QColor) {
	C.QPainter_fillRect4(this.h, param1.cPointer(), color.cPointer())
}

func (this *QPainter) FillRect5(x int, y int, w int, h int, color *QColor) {
	C.QPainter_fillRect5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), color.cPointer())
}

func (this *QPainter) FillRect6(param1 *QRect, color *QColor) {
	C.QPainter_fillRect6(this.h, param1.cPointer(), color.cPointer())
}

func (this *QPainter) FillRect7(x int, y int, w int, h int, c GlobalColor) {
	C.QPainter_fillRect7(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(c))
}

func (this *QPainter) FillRect8(r *QRect, c GlobalColor) {
	C.QPainter_fillRect8(this.h, r.cPointer(), (C.int)(c))
}

func (this *QPainter) FillRect9(r *QRectF, c GlobalColor) {
	C.QPainter_fillRect9(this.h, r.cPointer(), (C.int)(c))
}

func (this *QPainter) FillRect10(x int, y int, w int, h int, style BrushStyle) {
	C.QPainter_fillRect10(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(style))
}

func (this *QPainter) FillRect11(r *QRect, style BrushStyle) {
	C.QPainter_fillRect11(this.h, r.cPointer(), (C.int)(style))
}

func (this *QPainter) FillRect12(r *QRectF, style BrushStyle) {
	C.QPainter_fillRect12(this.h, r.cPointer(), (C.int)(style))
}

func (this *QPainter) FillRect13(x int, y int, w int, h int, preset QGradient__Preset) {
	C.QPainter_fillRect13(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(preset))
}

func (this *QPainter) FillRect14(r *QRect, preset QGradient__Preset) {
	C.QPainter_fillRect14(this.h, r.cPointer(), (C.int)(preset))
}

func (this *QPainter) FillRect15(r *QRectF, preset QGradient__Preset) {
	C.QPainter_fillRect15(this.h, r.cPointer(), (C.int)(preset))
}

func (this *QPainter) EraseRect(param1 *QRectF) {
	C.QPainter_eraseRect(this.h, param1.cPointer())
}

func (this *QPainter) EraseRect2(x int, y int, w int, h int) {
	C.QPainter_eraseRect2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QPainter) EraseRectWithQRect(param1 *QRect) {
	C.QPainter_eraseRectWithQRect(this.h, param1.cPointer())
}

func (this *QPainter) SetRenderHint(hint QPainter__RenderHint) {
	C.QPainter_setRenderHint(this.h, (C.int)(hint))
}

func (this *QPainter) SetRenderHints(hints QPainter__RenderHint) {
	C.QPainter_setRenderHints(this.h, (C.int)(hints))
}

func (this *QPainter) RenderHints() QPainter__RenderHint {
	return (QPainter__RenderHint)(C.QPainter_renderHints(this.h))
}

func (this *QPainter) TestRenderHint(hint QPainter__RenderHint) bool {
	return (bool)(C.QPainter_testRenderHint(this.h, (C.int)(hint)))
}

func (this *QPainter) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QPainter_paintEngine(this.h))
}

func QPainter_SetRedirected(device *QPaintDevice, replacement *QPaintDevice) {
	C.QPainter_setRedirected(device.cPointer(), replacement.cPointer())
}

func QPainter_Redirected(device *QPaintDevice) *QPaintDevice {
	return newQPaintDevice(C.QPainter_redirected(device.cPointer()))
}

func QPainter_RestoreRedirected(device *QPaintDevice) {
	C.QPainter_restoreRedirected(device.cPointer())
}

func (this *QPainter) BeginNativePainting() {
	C.QPainter_beginNativePainting(this.h)
}

func (this *QPainter) EndNativePainting() {
	C.QPainter_endNativePainting(this.h)
}

func (this *QPainter) SetClipRect3(param1 *QRectF, op ClipOperation) {
	C.QPainter_setClipRect3(this.h, param1.cPointer(), (C.int)(op))
}

func (this *QPainter) SetClipRect4(param1 *QRect, op ClipOperation) {
	C.QPainter_setClipRect4(this.h, param1.cPointer(), (C.int)(op))
}

func (this *QPainter) SetClipRect5(x int, y int, w int, h int, op ClipOperation) {
	C.QPainter_setClipRect5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(op))
}

func (this *QPainter) SetClipRegion2(param1 *QRegion, op ClipOperation) {
	C.QPainter_setClipRegion2(this.h, param1.cPointer(), (C.int)(op))
}

func (this *QPainter) SetClipPath2(path *QPainterPath, op ClipOperation) {
	C.QPainter_setClipPath2(this.h, path.cPointer(), (C.int)(op))
}

func (this *QPainter) SetMatrix2(matrix *QMatrix, combine bool) {
	C.QPainter_setMatrix2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QPainter) SetTransform2(transform *QTransform, combine bool) {
	C.QPainter_setTransform2(this.h, transform.cPointer(), (C.bool)(combine))
}

func (this *QPainter) SetWorldMatrix2(matrix *QMatrix, combine bool) {
	C.QPainter_setWorldMatrix2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QPainter) SetWorldTransform2(matrix *QTransform, combine bool) {
	C.QPainter_setWorldTransform2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QPainter) DrawPolygon4(points *QPointF, pointCount int, fillRule FillRule) {
	C.QPainter_drawPolygon4(this.h, points.cPointer(), (C.int)(pointCount), (C.int)(fillRule))
}

func (this *QPainter) DrawPolygon6(points *QPoint, pointCount int, fillRule FillRule) {
	C.QPainter_drawPolygon6(this.h, points.cPointer(), (C.int)(pointCount), (C.int)(fillRule))
}

func (this *QPainter) DrawRoundedRect4(rect *QRectF, xRadius float64, yRadius float64, mode SizeMode) {
	C.QPainter_drawRoundedRect4(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

func (this *QPainter) DrawRoundedRect5(x int, y int, w int, h int, xRadius float64, yRadius float64, mode SizeMode) {
	C.QPainter_drawRoundedRect5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

func (this *QPainter) DrawRoundedRect6(rect *QRect, xRadius float64, yRadius float64, mode SizeMode) {
	C.QPainter_drawRoundedRect6(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

func (this *QPainter) DrawRoundRect3(r *QRectF, xround int) {
	C.QPainter_drawRoundRect3(this.h, r.cPointer(), (C.int)(xround))
}

func (this *QPainter) DrawRoundRect4(r *QRectF, xround int, yround int) {
	C.QPainter_drawRoundRect4(this.h, r.cPointer(), (C.int)(xround), (C.int)(yround))
}

func (this *QPainter) DrawRoundRect5(x int, y int, w int, h int, param5 int) {
	C.QPainter_drawRoundRect5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(param5))
}

func (this *QPainter) DrawRoundRect6(x int, y int, w int, h int, param5 int, param6 int) {
	C.QPainter_drawRoundRect6(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(param5), (C.int)(param6))
}

func (this *QPainter) DrawRoundRect7(r *QRect, xround int) {
	C.QPainter_drawRoundRect7(this.h, r.cPointer(), (C.int)(xround))
}

func (this *QPainter) DrawRoundRect8(r *QRect, xround int, yround int) {
	C.QPainter_drawRoundRect8(this.h, r.cPointer(), (C.int)(xround), (C.int)(yround))
}

func (this *QPainter) DrawTiledPixmap4(rect *QRectF, pm *QPixmap, offset *QPointF) {
	C.QPainter_drawTiledPixmap4(this.h, rect.cPointer(), pm.cPointer(), offset.cPointer())
}

func (this *QPainter) DrawTiledPixmap5(x int, y int, w int, h int, param5 *QPixmap, sx int) {
	C.QPainter_drawTiledPixmap5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), param5.cPointer(), (C.int)(sx))
}

func (this *QPainter) DrawTiledPixmap6(x int, y int, w int, h int, param5 *QPixmap, sx int, sy int) {
	C.QPainter_drawTiledPixmap6(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), param5.cPointer(), (C.int)(sx), (C.int)(sy))
}

func (this *QPainter) DrawTiledPixmap7(param1 *QRect, param2 *QPixmap, param3 *QPoint) {
	C.QPainter_drawTiledPixmap7(this.h, param1.cPointer(), param2.cPointer(), param3.cPointer())
}

func (this *QPainter) DrawPixmapFragments2(fragments *QPainter__PixmapFragment, fragmentCount int, pixmap *QPixmap, hints QPainter__PixmapFragmentHint) {
	C.QPainter_drawPixmapFragments2(this.h, fragments.cPointer(), (C.int)(fragmentCount), pixmap.cPointer(), (C.int)(hints))
}

func (this *QPainter) DrawImage10(targetRect *QRectF, image *QImage, sourceRect *QRectF, flags ImageConversionFlag) {
	C.QPainter_drawImage10(this.h, targetRect.cPointer(), image.cPointer(), sourceRect.cPointer(), (C.int)(flags))
}

func (this *QPainter) DrawImage11(targetRect *QRect, image *QImage, sourceRect *QRect, flags ImageConversionFlag) {
	C.QPainter_drawImage11(this.h, targetRect.cPointer(), image.cPointer(), sourceRect.cPointer(), (C.int)(flags))
}

func (this *QPainter) DrawImage12(p *QPointF, image *QImage, sr *QRectF, flags ImageConversionFlag) {
	C.QPainter_drawImage12(this.h, p.cPointer(), image.cPointer(), sr.cPointer(), (C.int)(flags))
}

func (this *QPainter) DrawImage13(p *QPoint, image *QImage, sr *QRect, flags ImageConversionFlag) {
	C.QPainter_drawImage13(this.h, p.cPointer(), image.cPointer(), sr.cPointer(), (C.int)(flags))
}

func (this *QPainter) DrawImage14(x int, y int, image *QImage, sx int) {
	C.QPainter_drawImage14(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx))
}

func (this *QPainter) DrawImage15(x int, y int, image *QImage, sx int, sy int) {
	C.QPainter_drawImage15(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx), (C.int)(sy))
}

func (this *QPainter) DrawImage16(x int, y int, image *QImage, sx int, sy int, sw int) {
	C.QPainter_drawImage16(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw))
}

func (this *QPainter) DrawImage17(x int, y int, image *QImage, sx int, sy int, sw int, sh int) {
	C.QPainter_drawImage17(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw), (C.int)(sh))
}

func (this *QPainter) DrawImage18(x int, y int, image *QImage, sx int, sy int, sw int, sh int, flags ImageConversionFlag) {
	C.QPainter_drawImage18(this.h, (C.int)(x), (C.int)(y), image.cPointer(), (C.int)(sx), (C.int)(sy), (C.int)(sw), (C.int)(sh), (C.int)(flags))
}

func (this *QPainter) DrawText9(r *QRectF, flags int, text string, br *QRectF) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_drawText9(this.h, r.cPointer(), (C.int)(flags), text_ms, br.cPointer())
}

func (this *QPainter) DrawText10(r *QRect, flags int, text string, br *QRect) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_drawText10(this.h, r.cPointer(), (C.int)(flags), text_ms, br.cPointer())
}

func (this *QPainter) DrawText11(x int, y int, w int, h int, flags int, text string, br *QRect) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_drawText11(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_ms, br.cPointer())
}

func (this *QPainter) DrawText12(r *QRectF, text string, o *QTextOption) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainter_drawText12(this.h, r.cPointer(), text_ms, o.cPointer())
}

func (this *QPainter) BoundingRect5(rect *QRectF, text string, o *QTextOption) *QRectF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRectF(C.QPainter_boundingRect5(this.h, rect.cPointer(), text_ms, o.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainter) SetRenderHint2(hint QPainter__RenderHint, on bool) {
	C.QPainter_setRenderHint2(this.h, (C.int)(hint), (C.bool)(on))
}

func (this *QPainter) SetRenderHints2(hints QPainter__RenderHint, on bool) {
	C.QPainter_setRenderHints2(this.h, (C.int)(hints), (C.bool)(on))
}

func QPainter_SetRedirected2(device *QPaintDevice, replacement *QPaintDevice, offset *QPoint) {
	C.QPainter_setRedirected2(device.cPointer(), replacement.cPointer(), offset.cPointer())
}

func QPainter_Redirected2(device *QPaintDevice, offset *QPoint) *QPaintDevice {
	return newQPaintDevice(C.QPainter_redirected2(device.cPointer(), offset.cPointer()))
}

// Delete this object from C++ memory.
func (this *QPainter) Delete() {
	C.QPainter_delete(this.h)
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
	h *C.QPainter__PixmapFragment
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

func (this *QPainter__PixmapFragment) X() float64 {
	return (float64)(C.QPainter__PixmapFragment_x(this.h))
}

func (this *QPainter__PixmapFragment) SetX(x float64) {
	C.QPainter__PixmapFragment_setX(this.h, (C.double)(x))
}

func (this *QPainter__PixmapFragment) Y() float64 {
	return (float64)(C.QPainter__PixmapFragment_y(this.h))
}

func (this *QPainter__PixmapFragment) SetY(y float64) {
	C.QPainter__PixmapFragment_setY(this.h, (C.double)(y))
}

func (this *QPainter__PixmapFragment) SourceLeft() float64 {
	return (float64)(C.QPainter__PixmapFragment_sourceLeft(this.h))
}

func (this *QPainter__PixmapFragment) SetSourceLeft(sourceLeft float64) {
	C.QPainter__PixmapFragment_setSourceLeft(this.h, (C.double)(sourceLeft))
}

func (this *QPainter__PixmapFragment) SourceTop() float64 {
	return (float64)(C.QPainter__PixmapFragment_sourceTop(this.h))
}

func (this *QPainter__PixmapFragment) SetSourceTop(sourceTop float64) {
	C.QPainter__PixmapFragment_setSourceTop(this.h, (C.double)(sourceTop))
}

func (this *QPainter__PixmapFragment) Width() float64 {
	return (float64)(C.QPainter__PixmapFragment_width(this.h))
}

func (this *QPainter__PixmapFragment) SetWidth(width float64) {
	C.QPainter__PixmapFragment_setWidth(this.h, (C.double)(width))
}

func (this *QPainter__PixmapFragment) Height() float64 {
	return (float64)(C.QPainter__PixmapFragment_height(this.h))
}

func (this *QPainter__PixmapFragment) SetHeight(height float64) {
	C.QPainter__PixmapFragment_setHeight(this.h, (C.double)(height))
}

func (this *QPainter__PixmapFragment) ScaleX() float64 {
	return (float64)(C.QPainter__PixmapFragment_scaleX(this.h))
}

func (this *QPainter__PixmapFragment) SetScaleX(scaleX float64) {
	C.QPainter__PixmapFragment_setScaleX(this.h, (C.double)(scaleX))
}

func (this *QPainter__PixmapFragment) ScaleY() float64 {
	return (float64)(C.QPainter__PixmapFragment_scaleY(this.h))
}

func (this *QPainter__PixmapFragment) SetScaleY(scaleY float64) {
	C.QPainter__PixmapFragment_setScaleY(this.h, (C.double)(scaleY))
}

func (this *QPainter__PixmapFragment) Rotation() float64 {
	return (float64)(C.QPainter__PixmapFragment_rotation(this.h))
}

func (this *QPainter__PixmapFragment) SetRotation(rotation float64) {
	C.QPainter__PixmapFragment_setRotation(this.h, (C.double)(rotation))
}

func (this *QPainter__PixmapFragment) Opacity() float64 {
	return (float64)(C.QPainter__PixmapFragment_opacity(this.h))
}

func (this *QPainter__PixmapFragment) SetOpacity(opacity float64) {
	C.QPainter__PixmapFragment_setOpacity(this.h, (C.double)(opacity))
}

func QPainter__PixmapFragment_Create(pos *QPointF, sourceRect *QRectF) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_create(pos.cPointer(), sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPainter__PixmapFragment_Create2(pos *QPointF, sourceRect *QRectF, scaleX float64) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_create2(pos.cPointer(), sourceRect.cPointer(), (C.double)(scaleX)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPainter__PixmapFragment_Create3(pos *QPointF, sourceRect *QRectF, scaleX float64, scaleY float64) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_create3(pos.cPointer(), sourceRect.cPointer(), (C.double)(scaleX), (C.double)(scaleY)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPainter__PixmapFragment_Create4(pos *QPointF, sourceRect *QRectF, scaleX float64, scaleY float64, rotation float64) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_create4(pos.cPointer(), sourceRect.cPointer(), (C.double)(scaleX), (C.double)(scaleY), (C.double)(rotation)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPainter__PixmapFragment_Create5(pos *QPointF, sourceRect *QRectF, scaleX float64, scaleY float64, rotation float64, opacity float64) *QPainter__PixmapFragment {
	_goptr := newQPainter__PixmapFragment(C.QPainter__PixmapFragment_create5(pos.cPointer(), sourceRect.cPointer(), (C.double)(scaleX), (C.double)(scaleY), (C.double)(rotation), (C.double)(opacity)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPainter__PixmapFragment) Delete() {
	C.QPainter__PixmapFragment_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPainter__PixmapFragment) GoGC() {
	runtime.SetFinalizer(this, func(this *QPainter__PixmapFragment) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
