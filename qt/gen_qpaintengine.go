package qt

/*

#include "gen_qpaintengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextItem__RenderFlag int

const (
	QTextItem__RightToLeft QTextItem__RenderFlag = 1
	QTextItem__Overline    QTextItem__RenderFlag = 16
	QTextItem__Underline   QTextItem__RenderFlag = 32
	QTextItem__StrikeOut   QTextItem__RenderFlag = 64
	QTextItem__Dummy       QTextItem__RenderFlag = 4294967295
)

type QPaintEngine__PaintEngineFeature int

const (
	QPaintEngine__PrimitiveTransform          QPaintEngine__PaintEngineFeature = 1
	QPaintEngine__PatternTransform            QPaintEngine__PaintEngineFeature = 2
	QPaintEngine__PixmapTransform             QPaintEngine__PaintEngineFeature = 4
	QPaintEngine__PatternBrush                QPaintEngine__PaintEngineFeature = 8
	QPaintEngine__LinearGradientFill          QPaintEngine__PaintEngineFeature = 16
	QPaintEngine__RadialGradientFill          QPaintEngine__PaintEngineFeature = 32
	QPaintEngine__ConicalGradientFill         QPaintEngine__PaintEngineFeature = 64
	QPaintEngine__AlphaBlend                  QPaintEngine__PaintEngineFeature = 128
	QPaintEngine__PorterDuff                  QPaintEngine__PaintEngineFeature = 256
	QPaintEngine__PainterPaths                QPaintEngine__PaintEngineFeature = 512
	QPaintEngine__Antialiasing                QPaintEngine__PaintEngineFeature = 1024
	QPaintEngine__BrushStroke                 QPaintEngine__PaintEngineFeature = 2048
	QPaintEngine__ConstantOpacity             QPaintEngine__PaintEngineFeature = 4096
	QPaintEngine__MaskedBrush                 QPaintEngine__PaintEngineFeature = 8192
	QPaintEngine__PerspectiveTransform        QPaintEngine__PaintEngineFeature = 16384
	QPaintEngine__BlendModes                  QPaintEngine__PaintEngineFeature = 32768
	QPaintEngine__ObjectBoundingModeGradients QPaintEngine__PaintEngineFeature = 65536
	QPaintEngine__RasterOpModes               QPaintEngine__PaintEngineFeature = 131072
	QPaintEngine__PaintOutsidePaintEvent      QPaintEngine__PaintEngineFeature = 536870912
	QPaintEngine__AllFeatures                 QPaintEngine__PaintEngineFeature = 4294967295
)

type QPaintEngine__DirtyFlag int

const (
	QPaintEngine__DirtyPen             QPaintEngine__DirtyFlag = 1
	QPaintEngine__DirtyBrush           QPaintEngine__DirtyFlag = 2
	QPaintEngine__DirtyBrushOrigin     QPaintEngine__DirtyFlag = 4
	QPaintEngine__DirtyFont            QPaintEngine__DirtyFlag = 8
	QPaintEngine__DirtyBackground      QPaintEngine__DirtyFlag = 16
	QPaintEngine__DirtyBackgroundMode  QPaintEngine__DirtyFlag = 32
	QPaintEngine__DirtyTransform       QPaintEngine__DirtyFlag = 64
	QPaintEngine__DirtyClipRegion      QPaintEngine__DirtyFlag = 128
	QPaintEngine__DirtyClipPath        QPaintEngine__DirtyFlag = 256
	QPaintEngine__DirtyHints           QPaintEngine__DirtyFlag = 512
	QPaintEngine__DirtyCompositionMode QPaintEngine__DirtyFlag = 1024
	QPaintEngine__DirtyClipEnabled     QPaintEngine__DirtyFlag = 2048
	QPaintEngine__DirtyOpacity         QPaintEngine__DirtyFlag = 4096
	QPaintEngine__AllDirty             QPaintEngine__DirtyFlag = 65535
)

type QPaintEngine__PolygonDrawMode int

const (
	QPaintEngine__OddEvenMode  QPaintEngine__PolygonDrawMode = 0
	QPaintEngine__WindingMode  QPaintEngine__PolygonDrawMode = 1
	QPaintEngine__ConvexMode   QPaintEngine__PolygonDrawMode = 2
	QPaintEngine__PolylineMode QPaintEngine__PolygonDrawMode = 3
)

type QPaintEngine__Type int

const (
	QPaintEngine__X11           QPaintEngine__Type = 0
	QPaintEngine__Windows       QPaintEngine__Type = 1
	QPaintEngine__QuickDraw     QPaintEngine__Type = 2
	QPaintEngine__CoreGraphics  QPaintEngine__Type = 3
	QPaintEngine__MacPrinter    QPaintEngine__Type = 4
	QPaintEngine__QWindowSystem QPaintEngine__Type = 5
	QPaintEngine__PostScript    QPaintEngine__Type = 6
	QPaintEngine__OpenGL        QPaintEngine__Type = 7
	QPaintEngine__Picture       QPaintEngine__Type = 8
	QPaintEngine__SVG           QPaintEngine__Type = 9
	QPaintEngine__Raster        QPaintEngine__Type = 10
	QPaintEngine__Direct3D      QPaintEngine__Type = 11
	QPaintEngine__Pdf           QPaintEngine__Type = 12
	QPaintEngine__OpenVG        QPaintEngine__Type = 13
	QPaintEngine__OpenGL2       QPaintEngine__Type = 14
	QPaintEngine__PaintBuffer   QPaintEngine__Type = 15
	QPaintEngine__Blitter       QPaintEngine__Type = 16
	QPaintEngine__Direct2D      QPaintEngine__Type = 17
	QPaintEngine__User          QPaintEngine__Type = 50
	QPaintEngine__MaxUser       QPaintEngine__Type = 100
)

type QTextItem struct {
	h *C.QTextItem
}

func (this *QTextItem) cPointer() *C.QTextItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextItem(h *C.QTextItem) *QTextItem {
	if h == nil {
		return nil
	}
	return &QTextItem{h: h}
}

func UnsafeNewQTextItem(h unsafe.Pointer) *QTextItem {
	return newQTextItem((*C.QTextItem)(h))
}

func (this *QTextItem) Descent() float64 {
	return (float64)(C.QTextItem_Descent(this.h))
}

func (this *QTextItem) Ascent() float64 {
	return (float64)(C.QTextItem_Ascent(this.h))
}

func (this *QTextItem) Width() float64 {
	return (float64)(C.QTextItem_Width(this.h))
}

func (this *QTextItem) RenderFlags() QTextItem__RenderFlag {
	return (QTextItem__RenderFlag)(C.QTextItem_RenderFlags(this.h))
}

func (this *QTextItem) Text() string {
	var _ms C.struct_miqt_string = C.QTextItem_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextItem) Font() *QFont {
	_ret := C.QTextItem_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QTextItem) Delete() {
	C.QTextItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPaintEngine struct {
	h *C.QPaintEngine
}

func (this *QPaintEngine) cPointer() *C.QPaintEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPaintEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPaintEngine(h *C.QPaintEngine) *QPaintEngine {
	if h == nil {
		return nil
	}
	return &QPaintEngine{h: h}
}

func UnsafeNewQPaintEngine(h unsafe.Pointer) *QPaintEngine {
	return newQPaintEngine((*C.QPaintEngine)(h))
}

func (this *QPaintEngine) IsActive() bool {
	return (bool)(C.QPaintEngine_IsActive(this.h))
}

func (this *QPaintEngine) SetActive(newState bool) {
	C.QPaintEngine_SetActive(this.h, (C.bool)(newState))
}

func (this *QPaintEngine) Begin(pdev *QPaintDevice) bool {
	return (bool)(C.QPaintEngine_Begin(this.h, pdev.cPointer()))
}

func (this *QPaintEngine) End() bool {
	return (bool)(C.QPaintEngine_End(this.h))
}

func (this *QPaintEngine) UpdateState(state *QPaintEngineState) {
	C.QPaintEngine_UpdateState(this.h, state.cPointer())
}

func (this *QPaintEngine) DrawRects(rects *QRect, rectCount int) {
	C.QPaintEngine_DrawRects(this.h, rects.cPointer(), (C.int)(rectCount))
}

func (this *QPaintEngine) DrawRects2(rects *QRectF, rectCount int) {
	C.QPaintEngine_DrawRects2(this.h, rects.cPointer(), (C.int)(rectCount))
}

func (this *QPaintEngine) DrawLines(lines *QLine, lineCount int) {
	C.QPaintEngine_DrawLines(this.h, lines.cPointer(), (C.int)(lineCount))
}

func (this *QPaintEngine) DrawLines2(lines *QLineF, lineCount int) {
	C.QPaintEngine_DrawLines2(this.h, lines.cPointer(), (C.int)(lineCount))
}

func (this *QPaintEngine) DrawEllipse(r *QRectF) {
	C.QPaintEngine_DrawEllipse(this.h, r.cPointer())
}

func (this *QPaintEngine) DrawEllipseWithQRect(r *QRect) {
	C.QPaintEngine_DrawEllipseWithQRect(this.h, r.cPointer())
}

func (this *QPaintEngine) DrawPath(path *QPainterPath) {
	C.QPaintEngine_DrawPath(this.h, path.cPointer())
}

func (this *QPaintEngine) DrawPoints(points *QPointF, pointCount int) {
	C.QPaintEngine_DrawPoints(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPaintEngine) DrawPoints2(points *QPoint, pointCount int) {
	C.QPaintEngine_DrawPoints2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPaintEngine) DrawPolygon(points *QPointF, pointCount int, mode QPaintEngine__PolygonDrawMode) {
	C.QPaintEngine_DrawPolygon(this.h, points.cPointer(), (C.int)(pointCount), (C.int)(mode))
}

func (this *QPaintEngine) DrawPolygon2(points *QPoint, pointCount int, mode QPaintEngine__PolygonDrawMode) {
	C.QPaintEngine_DrawPolygon2(this.h, points.cPointer(), (C.int)(pointCount), (C.int)(mode))
}

func (this *QPaintEngine) DrawPixmap(r *QRectF, pm *QPixmap, sr *QRectF) {
	C.QPaintEngine_DrawPixmap(this.h, r.cPointer(), pm.cPointer(), sr.cPointer())
}

func (this *QPaintEngine) DrawTextItem(p *QPointF, textItem *QTextItem) {
	C.QPaintEngine_DrawTextItem(this.h, p.cPointer(), textItem.cPointer())
}

func (this *QPaintEngine) DrawTiledPixmap(r *QRectF, pixmap *QPixmap, s *QPointF) {
	C.QPaintEngine_DrawTiledPixmap(this.h, r.cPointer(), pixmap.cPointer(), s.cPointer())
}

func (this *QPaintEngine) DrawImage(r *QRectF, pm *QImage, sr *QRectF) {
	C.QPaintEngine_DrawImage(this.h, r.cPointer(), pm.cPointer(), sr.cPointer())
}

func (this *QPaintEngine) SetPaintDevice(device *QPaintDevice) {
	C.QPaintEngine_SetPaintDevice(this.h, device.cPointer())
}

func (this *QPaintEngine) PaintDevice() *QPaintDevice {
	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QPaintEngine_PaintDevice(this.h)))
}

func (this *QPaintEngine) SetSystemClip(baseClip *QRegion) {
	C.QPaintEngine_SetSystemClip(this.h, baseClip.cPointer())
}

func (this *QPaintEngine) SystemClip() *QRegion {
	_ret := C.QPaintEngine_SystemClip(this.h)
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) SetSystemRect(rect *QRect) {
	C.QPaintEngine_SetSystemRect(this.h, rect.cPointer())
}

func (this *QPaintEngine) SystemRect() *QRect {
	_ret := C.QPaintEngine_SystemRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) CoordinateOffset() *QPoint {
	_ret := C.QPaintEngine_CoordinateOffset(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) Type() QPaintEngine__Type {
	return (QPaintEngine__Type)(C.QPaintEngine_Type(this.h))
}

func (this *QPaintEngine) FixNegRect(x *int, y *int, w *int, h *int) {
	C.QPaintEngine_FixNegRect(this.h, (*C.int)(unsafe.Pointer(x)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(w)), (*C.int)(unsafe.Pointer(h)))
}

func (this *QPaintEngine) TestDirty(df QPaintEngine__DirtyFlag) bool {
	return (bool)(C.QPaintEngine_TestDirty(this.h, (C.int)(df)))
}

func (this *QPaintEngine) SetDirty(df QPaintEngine__DirtyFlag) {
	C.QPaintEngine_SetDirty(this.h, (C.int)(df))
}

func (this *QPaintEngine) ClearDirty(df QPaintEngine__DirtyFlag) {
	C.QPaintEngine_ClearDirty(this.h, (C.int)(df))
}

func (this *QPaintEngine) HasFeature(feature QPaintEngine__PaintEngineFeature) bool {
	return (bool)(C.QPaintEngine_HasFeature(this.h, (C.int)(feature)))
}

func (this *QPaintEngine) Painter() *QPainter {
	return UnsafeNewQPainter(unsafe.Pointer(C.QPaintEngine_Painter(this.h)))
}

func (this *QPaintEngine) SyncState() {
	C.QPaintEngine_SyncState(this.h)
}

func (this *QPaintEngine) IsExtended() bool {
	return (bool)(C.QPaintEngine_IsExtended(this.h))
}

func (this *QPaintEngine) DrawImage4(r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag) {
	C.QPaintEngine_DrawImage4(this.h, r.cPointer(), pm.cPointer(), sr.cPointer(), (C.int)(flags))
}

// Delete this object from C++ memory.
func (this *QPaintEngine) Delete() {
	C.QPaintEngine_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPaintEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QPaintEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPaintEngineState struct {
	h *C.QPaintEngineState
}

func (this *QPaintEngineState) cPointer() *C.QPaintEngineState {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPaintEngineState) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPaintEngineState(h *C.QPaintEngineState) *QPaintEngineState {
	if h == nil {
		return nil
	}
	return &QPaintEngineState{h: h}
}

func UnsafeNewQPaintEngineState(h unsafe.Pointer) *QPaintEngineState {
	return newQPaintEngineState((*C.QPaintEngineState)(h))
}

func (this *QPaintEngineState) State() QPaintEngine__DirtyFlag {
	return (QPaintEngine__DirtyFlag)(C.QPaintEngineState_State(this.h))
}

func (this *QPaintEngineState) Pen() *QPen {
	_ret := C.QPaintEngineState_Pen(this.h)
	_goptr := newQPen(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) Brush() *QBrush {
	_ret := C.QPaintEngineState_Brush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) BrushOrigin() *QPointF {
	_ret := C.QPaintEngineState_BrushOrigin(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) BackgroundBrush() *QBrush {
	_ret := C.QPaintEngineState_BackgroundBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) BackgroundMode() BGMode {
	return (BGMode)(C.QPaintEngineState_BackgroundMode(this.h))
}

func (this *QPaintEngineState) Font() *QFont {
	_ret := C.QPaintEngineState_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) Matrix() *QMatrix {
	_ret := C.QPaintEngineState_Matrix(this.h)
	_goptr := newQMatrix(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) Transform() *QTransform {
	_ret := C.QPaintEngineState_Transform(this.h)
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) ClipOperation() ClipOperation {
	return (ClipOperation)(C.QPaintEngineState_ClipOperation(this.h))
}

func (this *QPaintEngineState) ClipRegion() *QRegion {
	_ret := C.QPaintEngineState_ClipRegion(this.h)
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) ClipPath() *QPainterPath {
	_ret := C.QPaintEngineState_ClipPath(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) IsClipEnabled() bool {
	return (bool)(C.QPaintEngineState_IsClipEnabled(this.h))
}

func (this *QPaintEngineState) RenderHints() QPainter__RenderHint {
	return (QPainter__RenderHint)(C.QPaintEngineState_RenderHints(this.h))
}

func (this *QPaintEngineState) CompositionMode() QPainter__CompositionMode {
	return (QPainter__CompositionMode)(C.QPaintEngineState_CompositionMode(this.h))
}

func (this *QPaintEngineState) Opacity() float64 {
	return (float64)(C.QPaintEngineState_Opacity(this.h))
}

func (this *QPaintEngineState) Painter() *QPainter {
	return UnsafeNewQPainter(unsafe.Pointer(C.QPaintEngineState_Painter(this.h)))
}

func (this *QPaintEngineState) BrushNeedsResolving() bool {
	return (bool)(C.QPaintEngineState_BrushNeedsResolving(this.h))
}

func (this *QPaintEngineState) PenNeedsResolving() bool {
	return (bool)(C.QPaintEngineState_PenNeedsResolving(this.h))
}

// Delete this object from C++ memory.
func (this *QPaintEngineState) Delete() {
	C.QPaintEngineState_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPaintEngineState) GoGC() {
	runtime.SetFinalizer(this, func(this *QPaintEngineState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
