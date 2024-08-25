package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpaintengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func newQTextItem(h *C.QTextItem) *QTextItem {
	return &QTextItem{h: h}
}

func newQTextItem_U(h unsafe.Pointer) *QTextItem {
	return newQTextItem((*C.QTextItem)(h))
}

func (this *QTextItem) Descent() float64 {
	ret := C.QTextItem_Descent(this.h)
	return (float64)(ret)
}

func (this *QTextItem) Ascent() float64 {
	ret := C.QTextItem_Ascent(this.h)
	return (float64)(ret)
}

func (this *QTextItem) Width() float64 {
	ret := C.QTextItem_Width(this.h)
	return (float64)(ret)
}

func (this *QTextItem) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextItem_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextItem) Font() *QFont {
	ret := C.QTextItem_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextItem) Delete() {
	C.QTextItem_Delete(this.h)
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

func newQPaintEngine(h *C.QPaintEngine) *QPaintEngine {
	return &QPaintEngine{h: h}
}

func newQPaintEngine_U(h unsafe.Pointer) *QPaintEngine {
	return newQPaintEngine((*C.QPaintEngine)(h))
}

func (this *QPaintEngine) IsActive() bool {
	ret := C.QPaintEngine_IsActive(this.h)
	return (bool)(ret)
}

func (this *QPaintEngine) SetActive(newState bool) {
	C.QPaintEngine_SetActive(this.h, (C.bool)(newState))
}

func (this *QPaintEngine) Begin(pdev *QPaintDevice) bool {
	ret := C.QPaintEngine_Begin(this.h, pdev.cPointer())
	return (bool)(ret)
}

func (this *QPaintEngine) End() bool {
	ret := C.QPaintEngine_End(this.h)
	return (bool)(ret)
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

func (this *QPaintEngine) DrawPixmap(r *QRectF, pm *QPixmap, sr *QRectF) {
	C.QPaintEngine_DrawPixmap(this.h, r.cPointer(), pm.cPointer(), sr.cPointer())
}

func (this *QPaintEngine) DrawTextItem(p *QPointF, textItem *QTextItem) {
	C.QPaintEngine_DrawTextItem(this.h, p.cPointer(), textItem.cPointer())
}

func (this *QPaintEngine) DrawTiledPixmap(r *QRectF, pixmap *QPixmap, s *QPointF) {
	C.QPaintEngine_DrawTiledPixmap(this.h, r.cPointer(), pixmap.cPointer(), s.cPointer())
}

func (this *QPaintEngine) SetPaintDevice(device *QPaintDevice) {
	C.QPaintEngine_SetPaintDevice(this.h, device.cPointer())
}

func (this *QPaintEngine) PaintDevice() *QPaintDevice {
	ret := C.QPaintEngine_PaintDevice(this.h)
	return newQPaintDevice_U(unsafe.Pointer(ret))
}

func (this *QPaintEngine) SetSystemClip(baseClip *QRegion) {
	C.QPaintEngine_SetSystemClip(this.h, baseClip.cPointer())
}

func (this *QPaintEngine) SystemClip() *QRegion {
	ret := C.QPaintEngine_SystemClip(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngine) SetSystemRect(rect *QRect) {
	C.QPaintEngine_SetSystemRect(this.h, rect.cPointer())
}

func (this *QPaintEngine) SystemRect() *QRect {
	ret := C.QPaintEngine_SystemRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngine) CoordinateOffset() *QPoint {
	ret := C.QPaintEngine_CoordinateOffset(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngine) FixNegRect(x *int, y *int, w *int, h *int) {
	C.QPaintEngine_FixNegRect(this.h, (*C.int)(unsafe.Pointer(x)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(w)), (*C.int)(unsafe.Pointer(h)))
}

func (this *QPaintEngine) Painter() *QPainter {
	ret := C.QPaintEngine_Painter(this.h)
	return newQPainter_U(unsafe.Pointer(ret))
}

func (this *QPaintEngine) SyncState() {
	C.QPaintEngine_SyncState(this.h)
}

func (this *QPaintEngine) IsExtended() bool {
	ret := C.QPaintEngine_IsExtended(this.h)
	return (bool)(ret)
}

func (this *QPaintEngine) Delete() {
	C.QPaintEngine_Delete(this.h)
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

func newQPaintEngineState(h *C.QPaintEngineState) *QPaintEngineState {
	return &QPaintEngineState{h: h}
}

func newQPaintEngineState_U(h unsafe.Pointer) *QPaintEngineState {
	return newQPaintEngineState((*C.QPaintEngineState)(h))
}

func (this *QPaintEngineState) Pen() *QPen {
	ret := C.QPaintEngineState_Pen(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPen(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPen) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngineState) Brush() *QBrush {
	ret := C.QPaintEngineState_Brush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngineState) BrushOrigin() *QPointF {
	ret := C.QPaintEngineState_BrushOrigin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngineState) BackgroundBrush() *QBrush {
	ret := C.QPaintEngineState_BackgroundBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngineState) Font() *QFont {
	ret := C.QPaintEngineState_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngineState) Matrix() *QMatrix {
	ret := C.QPaintEngineState_Matrix(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngineState) Transform() *QTransform {
	ret := C.QPaintEngineState_Transform(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngineState) ClipRegion() *QRegion {
	ret := C.QPaintEngineState_ClipRegion(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngineState) ClipPath() *QPainterPath {
	ret := C.QPaintEngineState_ClipPath(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPaintEngineState) IsClipEnabled() bool {
	ret := C.QPaintEngineState_IsClipEnabled(this.h)
	return (bool)(ret)
}

func (this *QPaintEngineState) Opacity() float64 {
	ret := C.QPaintEngineState_Opacity(this.h)
	return (float64)(ret)
}

func (this *QPaintEngineState) Painter() *QPainter {
	ret := C.QPaintEngineState_Painter(this.h)
	return newQPainter_U(unsafe.Pointer(ret))
}

func (this *QPaintEngineState) BrushNeedsResolving() bool {
	ret := C.QPaintEngineState_BrushNeedsResolving(this.h)
	return (bool)(ret)
}

func (this *QPaintEngineState) PenNeedsResolving() bool {
	ret := C.QPaintEngineState_PenNeedsResolving(this.h)
	return (bool)(ret)
}

func (this *QPaintEngineState) Delete() {
	C.QPaintEngineState_Delete(this.h)
}
