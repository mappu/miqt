package qt6

/*

#include "gen_qpaintengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTextItem__RenderFlag int

const (
	QTextItem__RightToLeft QTextItem__RenderFlag = 1
	QTextItem__Overline    QTextItem__RenderFlag = 16
	QTextItem__Underline   QTextItem__RenderFlag = 32
	QTextItem__StrikeOut   QTextItem__RenderFlag = 64
	QTextItem__Dummy       QTextItem__RenderFlag = -1 // overflow

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
	QPaintEngine__AllFeatures                 QPaintEngine__PaintEngineFeature = -1 // overflow

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
	QPaintEngine__OpenGL        QPaintEngine__Type = 6
	QPaintEngine__Picture       QPaintEngine__Type = 7
	QPaintEngine__SVG           QPaintEngine__Type = 8
	QPaintEngine__Raster        QPaintEngine__Type = 9
	QPaintEngine__Direct3D      QPaintEngine__Type = 10
	QPaintEngine__Pdf           QPaintEngine__Type = 11
	QPaintEngine__OpenVG        QPaintEngine__Type = 12
	QPaintEngine__OpenGL2       QPaintEngine__Type = 13
	QPaintEngine__PaintBuffer   QPaintEngine__Type = 14
	QPaintEngine__Blitter       QPaintEngine__Type = 15
	QPaintEngine__Direct2D      QPaintEngine__Type = 16
	QPaintEngine__User          QPaintEngine__Type = 50
	QPaintEngine__MaxUser       QPaintEngine__Type = 100
)

type QTextItem struct {
	h  *C.QTextItem
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTextItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQTextItem constructs the type using only CGO pointers.
func newQTextItem(h *C.QTextItem) *QTextItem {
	if h == nil {
		return nil
	}

	return &QTextItem{h: h}
}

// UnsafeNewQTextItem constructs the type using only unsafe pointers.
func UnsafeNewQTextItem(h unsafe.Pointer) *QTextItem {
	return newQTextItem((*C.QTextItem)(h))
}

func (this *QTextItem) Descent() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTextItem_descent(this.h))
}

func (this *QTextItem) Ascent() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTextItem_ascent(this.h))
}

func (this *QTextItem) Width() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTextItem_width(this.h))
}

func (this *QTextItem) RenderFlags() QTextItem__RenderFlag {
	defer runtime.KeepAlive(this)
	return (QTextItem__RenderFlag)(C.QTextItem_renderFlags(this.h))
}

func (this *QTextItem) Text() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTextItem_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextItem) Font() *QFont {
	defer runtime.KeepAlive(this)
	_goptr := newQFont(C.QTextItem_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QTextItem) Delete() {
	C.QTextItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTextItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTextItem_delete((*C.QTextItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QPaintEngine struct {
	h  *C.QPaintEngine
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPaintEngine) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQPaintEngine constructs the type using only CGO pointers.
func newQPaintEngine(h *C.QPaintEngine) *QPaintEngine {
	if h == nil {
		return nil
	}

	return &QPaintEngine{h: h}
}

// UnsafeNewQPaintEngine constructs the type using only unsafe pointers.
func UnsafeNewQPaintEngine(h unsafe.Pointer) *QPaintEngine {
	return newQPaintEngine((*C.QPaintEngine)(h))
}

// NewQPaintEngine constructs a new QPaintEngine object.
func NewQPaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPaintEngine_new())
}

// NewQPaintEngine2 constructs a new QPaintEngine object.
func NewQPaintEngine2(features QPaintEngine__PaintEngineFeature) *QPaintEngine {

	return newQPaintEngine(C.QPaintEngine_new2((C.int)(features)))
}

func (this *QPaintEngine) IsActive() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPaintEngine_isActive(this.h))
}

func (this *QPaintEngine) SetActive(newState bool) {
	defer runtime.KeepAlive(this)
	C.QPaintEngine_setActive(this.h, (C.bool)(newState))
}

func (this *QPaintEngine) Begin(pdev *QPaintDevice) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pdev)
	return (bool)(C.QPaintEngine_begin(this.h, pdev.cPointer()))
}

func (this *QPaintEngine) End() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPaintEngine_end(this.h))
}

func (this *QPaintEngine) UpdateState(state *QPaintEngineState) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(state)
	C.QPaintEngine_updateState(this.h, state.cPointer())
}

func (this *QPaintEngine) DrawRects(rects *QRect, rectCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rects)
	C.QPaintEngine_drawRects(this.h, rects.cPointer(), (C.int)(rectCount))
}

func (this *QPaintEngine) DrawRects2(rects *QRectF, rectCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rects)
	C.QPaintEngine_drawRects2(this.h, rects.cPointer(), (C.int)(rectCount))
}

func (this *QPaintEngine) DrawLines(lines *QLine, lineCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lines)
	C.QPaintEngine_drawLines(this.h, lines.cPointer(), (C.int)(lineCount))
}

func (this *QPaintEngine) DrawLines2(lines *QLineF, lineCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lines)
	C.QPaintEngine_drawLines2(this.h, lines.cPointer(), (C.int)(lineCount))
}

func (this *QPaintEngine) DrawEllipse(r *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QPaintEngine_drawEllipse(this.h, r.cPointer())
}

func (this *QPaintEngine) DrawEllipseWithQRect(r *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QPaintEngine_drawEllipseWithQRect(this.h, r.cPointer())
}

func (this *QPaintEngine) DrawPath(path *QPainterPath) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(path)
	C.QPaintEngine_drawPath(this.h, path.cPointer())
}

func (this *QPaintEngine) DrawPoints(points *QPointF, pointCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(points)
	C.QPaintEngine_drawPoints(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPaintEngine) DrawPoints2(points *QPoint, pointCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(points)
	C.QPaintEngine_drawPoints2(this.h, points.cPointer(), (C.int)(pointCount))
}

func (this *QPaintEngine) DrawPolygon(points *QPointF, pointCount int, mode QPaintEngine__PolygonDrawMode) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(points)
	C.QPaintEngine_drawPolygon(this.h, points.cPointer(), (C.int)(pointCount), (C.int)(mode))
}

func (this *QPaintEngine) DrawPolygon2(points *QPoint, pointCount int, mode QPaintEngine__PolygonDrawMode) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(points)
	C.QPaintEngine_drawPolygon2(this.h, points.cPointer(), (C.int)(pointCount), (C.int)(mode))
}

func (this *QPaintEngine) DrawPixmap(r *QRectF, pm *QPixmap, sr *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(pm)
	defer runtime.KeepAlive(sr)
	C.QPaintEngine_drawPixmap(this.h, r.cPointer(), pm.cPointer(), sr.cPointer())
}

func (this *QPaintEngine) DrawTextItem(p *QPointF, textItem *QTextItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(textItem)
	C.QPaintEngine_drawTextItem(this.h, p.cPointer(), textItem.cPointer())
}

func (this *QPaintEngine) DrawTiledPixmap(r *QRectF, pixmap *QPixmap, s *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(pixmap)
	defer runtime.KeepAlive(s)
	C.QPaintEngine_drawTiledPixmap(this.h, r.cPointer(), pixmap.cPointer(), s.cPointer())
}

func (this *QPaintEngine) DrawImage(r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(pm)
	defer runtime.KeepAlive(sr)
	C.QPaintEngine_drawImage(this.h, r.cPointer(), pm.cPointer(), sr.cPointer(), (C.int)(flags))
}

func (this *QPaintEngine) SetPaintDevice(device *QPaintDevice) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(device)
	C.QPaintEngine_setPaintDevice(this.h, device.cPointer())
}

func (this *QPaintEngine) PaintDevice() *QPaintDevice {
	defer runtime.KeepAlive(this)
	return newQPaintDevice(C.QPaintEngine_paintDevice(this.h))
}

func (this *QPaintEngine) SetSystemClip(baseClip *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(baseClip)
	C.QPaintEngine_setSystemClip(this.h, baseClip.cPointer())
}

func (this *QPaintEngine) SystemClip() *QRegion {
	defer runtime.KeepAlive(this)
	_goptr := newQRegion(C.QPaintEngine_systemClip(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) SetSystemRect(rect *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rect)
	C.QPaintEngine_setSystemRect(this.h, rect.cPointer())
}

func (this *QPaintEngine) SystemRect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QPaintEngine_systemRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) CoordinateOffset() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QPaintEngine_coordinateOffset(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) Type() QPaintEngine__Type {
	defer runtime.KeepAlive(this)
	return (QPaintEngine__Type)(C.QPaintEngine_type(this.h))
}

func (this *QPaintEngine) FixNegRect(x *int, y *int, w *int, h *int) {
	defer runtime.KeepAlive(this)
	C.QPaintEngine_fixNegRect(this.h, (*C.int)(unsafe.Pointer(x)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(w)), (*C.int)(unsafe.Pointer(h)))
}

func (this *QPaintEngine) TestDirty(df QPaintEngine__DirtyFlag) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPaintEngine_testDirty(this.h, (C.int)(df)))
}

func (this *QPaintEngine) SetDirty(df QPaintEngine__DirtyFlag) {
	defer runtime.KeepAlive(this)
	C.QPaintEngine_setDirty(this.h, (C.int)(df))
}

func (this *QPaintEngine) ClearDirty(df QPaintEngine__DirtyFlag) {
	defer runtime.KeepAlive(this)
	C.QPaintEngine_clearDirty(this.h, (C.int)(df))
}

func (this *QPaintEngine) HasFeature(feature QPaintEngine__PaintEngineFeature) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPaintEngine_hasFeature(this.h, (C.int)(feature)))
}

func (this *QPaintEngine) Painter() *QPainter {
	defer runtime.KeepAlive(this)
	return newQPainter(C.QPaintEngine_painter(this.h))
}

func (this *QPaintEngine) SyncState() {
	defer runtime.KeepAlive(this)
	C.QPaintEngine_syncState(this.h)
}

func (this *QPaintEngine) IsExtended() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPaintEngine_isExtended(this.h))
}

func (this *QPaintEngine) CreatePixmap(size QSize) *QPixmap {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)
	_goptr := newQPixmap(C.QPaintEngine_createPixmap(this.h, size.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) CreatePixmapFromImage(image QImage, flags ImageConversionFlag) *QPixmap {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(image)
	_goptr := newQPixmap(C.QPaintEngine_createPixmapFromImage(this.h, image.cPointer(), (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}
func (this *QPaintEngine) OnBegin(slot func(pdev *QPaintDevice) bool) {
	C.QPaintEngine_override_virtual_begin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_begin
func miqt_exec_callback_QPaintEngine_begin(self *C.QPaintEngine, cb C.intptr_t, pdev *C.QPaintDevice) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(pdev *QPaintDevice) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintDevice(pdev)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QPaintEngine) OnEnd(slot func() bool) {
	C.QPaintEngine_override_virtual_end(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_end
func miqt_exec_callback_QPaintEngine_end(self *C.QPaintEngine, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QPaintEngine) OnUpdateState(slot func(state *QPaintEngineState)) {
	C.QPaintEngine_override_virtual_updateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_updateState
func miqt_exec_callback_QPaintEngine_updateState(self *C.QPaintEngine, cb C.intptr_t, state *C.QPaintEngineState) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state *QPaintEngineState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEngineState(state)

	gofunc(slotval1)

}

func (this *QPaintEngine) callVirtualBase_DrawRects(rects *QRect, rectCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rects)

	C.QPaintEngine_virtualbase_drawRects(unsafe.Pointer(this.h), rects.cPointer(), (C.int)(rectCount))

}
func (this *QPaintEngine) OnDrawRects(slot func(super func(rects *QRect, rectCount int), rects *QRect, rectCount int)) {
	ok := C.QPaintEngine_override_virtual_drawRects(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawRects
func miqt_exec_callback_QPaintEngine_drawRects(self *C.QPaintEngine, cb C.intptr_t, rects *C.QRect, rectCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rects *QRect, rectCount int), rects *QRect, rectCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rects)

	slotval2 := (int)(rectCount)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawRects, slotval1, slotval2)

}

func (this *QPaintEngine) callVirtualBase_DrawRects2(rects *QRectF, rectCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rects)

	C.QPaintEngine_virtualbase_drawRects2(unsafe.Pointer(this.h), rects.cPointer(), (C.int)(rectCount))

}
func (this *QPaintEngine) OnDrawRects2(slot func(super func(rects *QRectF, rectCount int), rects *QRectF, rectCount int)) {
	ok := C.QPaintEngine_override_virtual_drawRects2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawRects2
func miqt_exec_callback_QPaintEngine_drawRects2(self *C.QPaintEngine, cb C.intptr_t, rects *C.QRectF, rectCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rects *QRectF, rectCount int), rects *QRectF, rectCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rects)

	slotval2 := (int)(rectCount)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawRects2, slotval1, slotval2)

}

func (this *QPaintEngine) callVirtualBase_DrawLines(lines *QLine, lineCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lines)

	C.QPaintEngine_virtualbase_drawLines(unsafe.Pointer(this.h), lines.cPointer(), (C.int)(lineCount))

}
func (this *QPaintEngine) OnDrawLines(slot func(super func(lines *QLine, lineCount int), lines *QLine, lineCount int)) {
	ok := C.QPaintEngine_override_virtual_drawLines(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawLines
func miqt_exec_callback_QPaintEngine_drawLines(self *C.QPaintEngine, cb C.intptr_t, lines *C.QLine, lineCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(lines *QLine, lineCount int), lines *QLine, lineCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLine(lines)

	slotval2 := (int)(lineCount)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawLines, slotval1, slotval2)

}

func (this *QPaintEngine) callVirtualBase_DrawLines2(lines *QLineF, lineCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lines)

	C.QPaintEngine_virtualbase_drawLines2(unsafe.Pointer(this.h), lines.cPointer(), (C.int)(lineCount))

}
func (this *QPaintEngine) OnDrawLines2(slot func(super func(lines *QLineF, lineCount int), lines *QLineF, lineCount int)) {
	ok := C.QPaintEngine_override_virtual_drawLines2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawLines2
func miqt_exec_callback_QPaintEngine_drawLines2(self *C.QPaintEngine, cb C.intptr_t, lines *C.QLineF, lineCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(lines *QLineF, lineCount int), lines *QLineF, lineCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLineF(lines)

	slotval2 := (int)(lineCount)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawLines2, slotval1, slotval2)

}

func (this *QPaintEngine) callVirtualBase_DrawEllipse(r *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)

	C.QPaintEngine_virtualbase_drawEllipse(unsafe.Pointer(this.h), r.cPointer())

}
func (this *QPaintEngine) OnDrawEllipse(slot func(super func(r *QRectF), r *QRectF)) {
	ok := C.QPaintEngine_override_virtual_drawEllipse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawEllipse
func miqt_exec_callback_QPaintEngine_drawEllipse(self *C.QPaintEngine, cb C.intptr_t, r *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r *QRectF), r *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(r)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawEllipse, slotval1)

}

func (this *QPaintEngine) callVirtualBase_DrawEllipseWithQRect(r *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)

	C.QPaintEngine_virtualbase_drawEllipseWithQRect(unsafe.Pointer(this.h), r.cPointer())

}
func (this *QPaintEngine) OnDrawEllipseWithQRect(slot func(super func(r *QRect), r *QRect)) {
	ok := C.QPaintEngine_override_virtual_drawEllipseWithQRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawEllipseWithQRect
func miqt_exec_callback_QPaintEngine_drawEllipseWithQRect(self *C.QPaintEngine, cb C.intptr_t, r *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r *QRect), r *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(r)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawEllipseWithQRect, slotval1)

}

func (this *QPaintEngine) callVirtualBase_DrawPath(path *QPainterPath) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(path)

	C.QPaintEngine_virtualbase_drawPath(unsafe.Pointer(this.h), path.cPointer())

}
func (this *QPaintEngine) OnDrawPath(slot func(super func(path *QPainterPath), path *QPainterPath)) {
	ok := C.QPaintEngine_override_virtual_drawPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawPath
func miqt_exec_callback_QPaintEngine_drawPath(self *C.QPaintEngine, cb C.intptr_t, path *C.QPainterPath) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath), path *QPainterPath))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawPath, slotval1)

}

func (this *QPaintEngine) callVirtualBase_DrawPoints(points *QPointF, pointCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(points)

	C.QPaintEngine_virtualbase_drawPoints(unsafe.Pointer(this.h), points.cPointer(), (C.int)(pointCount))

}
func (this *QPaintEngine) OnDrawPoints(slot func(super func(points *QPointF, pointCount int), points *QPointF, pointCount int)) {
	ok := C.QPaintEngine_override_virtual_drawPoints(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawPoints
func miqt_exec_callback_QPaintEngine_drawPoints(self *C.QPaintEngine, cb C.intptr_t, points *C.QPointF, pointCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(points *QPointF, pointCount int), points *QPointF, pointCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(points)

	slotval2 := (int)(pointCount)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawPoints, slotval1, slotval2)

}

func (this *QPaintEngine) callVirtualBase_DrawPoints2(points *QPoint, pointCount int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(points)

	C.QPaintEngine_virtualbase_drawPoints2(unsafe.Pointer(this.h), points.cPointer(), (C.int)(pointCount))

}
func (this *QPaintEngine) OnDrawPoints2(slot func(super func(points *QPoint, pointCount int), points *QPoint, pointCount int)) {
	ok := C.QPaintEngine_override_virtual_drawPoints2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawPoints2
func miqt_exec_callback_QPaintEngine_drawPoints2(self *C.QPaintEngine, cb C.intptr_t, points *C.QPoint, pointCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(points *QPoint, pointCount int), points *QPoint, pointCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(points)

	slotval2 := (int)(pointCount)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawPoints2, slotval1, slotval2)

}

func (this *QPaintEngine) callVirtualBase_DrawPolygon(points *QPointF, pointCount int, mode QPaintEngine__PolygonDrawMode) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(points)

	C.QPaintEngine_virtualbase_drawPolygon(unsafe.Pointer(this.h), points.cPointer(), (C.int)(pointCount), (C.int)(mode))

}
func (this *QPaintEngine) OnDrawPolygon(slot func(super func(points *QPointF, pointCount int, mode QPaintEngine__PolygonDrawMode), points *QPointF, pointCount int, mode QPaintEngine__PolygonDrawMode)) {
	ok := C.QPaintEngine_override_virtual_drawPolygon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawPolygon
func miqt_exec_callback_QPaintEngine_drawPolygon(self *C.QPaintEngine, cb C.intptr_t, points *C.QPointF, pointCount C.int, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(points *QPointF, pointCount int, mode QPaintEngine__PolygonDrawMode), points *QPointF, pointCount int, mode QPaintEngine__PolygonDrawMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(points)

	slotval2 := (int)(pointCount)

	slotval3 := (QPaintEngine__PolygonDrawMode)(mode)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawPolygon, slotval1, slotval2, slotval3)

}

func (this *QPaintEngine) callVirtualBase_DrawPolygon2(points *QPoint, pointCount int, mode QPaintEngine__PolygonDrawMode) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(points)

	C.QPaintEngine_virtualbase_drawPolygon2(unsafe.Pointer(this.h), points.cPointer(), (C.int)(pointCount), (C.int)(mode))

}
func (this *QPaintEngine) OnDrawPolygon2(slot func(super func(points *QPoint, pointCount int, mode QPaintEngine__PolygonDrawMode), points *QPoint, pointCount int, mode QPaintEngine__PolygonDrawMode)) {
	ok := C.QPaintEngine_override_virtual_drawPolygon2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawPolygon2
func miqt_exec_callback_QPaintEngine_drawPolygon2(self *C.QPaintEngine, cb C.intptr_t, points *C.QPoint, pointCount C.int, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(points *QPoint, pointCount int, mode QPaintEngine__PolygonDrawMode), points *QPoint, pointCount int, mode QPaintEngine__PolygonDrawMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(points)

	slotval2 := (int)(pointCount)

	slotval3 := (QPaintEngine__PolygonDrawMode)(mode)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawPolygon2, slotval1, slotval2, slotval3)

}
func (this *QPaintEngine) OnDrawPixmap(slot func(r *QRectF, pm *QPixmap, sr *QRectF)) {
	C.QPaintEngine_override_virtual_drawPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_drawPixmap
func miqt_exec_callback_QPaintEngine_drawPixmap(self *C.QPaintEngine, cb C.intptr_t, r *C.QRectF, pm *C.QPixmap, sr *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(r *QRectF, pm *QPixmap, sr *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(r)

	slotval2 := newQPixmap(pm)

	slotval3 := newQRectF(sr)

	gofunc(slotval1, slotval2, slotval3)

}

func (this *QPaintEngine) callVirtualBase_DrawTextItem(p *QPointF, textItem *QTextItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(textItem)

	C.QPaintEngine_virtualbase_drawTextItem(unsafe.Pointer(this.h), p.cPointer(), textItem.cPointer())

}
func (this *QPaintEngine) OnDrawTextItem(slot func(super func(p *QPointF, textItem *QTextItem), p *QPointF, textItem *QTextItem)) {
	ok := C.QPaintEngine_override_virtual_drawTextItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawTextItem
func miqt_exec_callback_QPaintEngine_drawTextItem(self *C.QPaintEngine, cb C.intptr_t, p *C.QPointF, textItem *C.QTextItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPointF, textItem *QTextItem), p *QPointF, textItem *QTextItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(p)

	slotval2 := newQTextItem(textItem)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawTextItem, slotval1, slotval2)

}

func (this *QPaintEngine) callVirtualBase_DrawTiledPixmap(r *QRectF, pixmap *QPixmap, s *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(pixmap)
	defer runtime.KeepAlive(s)

	C.QPaintEngine_virtualbase_drawTiledPixmap(unsafe.Pointer(this.h), r.cPointer(), pixmap.cPointer(), s.cPointer())

}
func (this *QPaintEngine) OnDrawTiledPixmap(slot func(super func(r *QRectF, pixmap *QPixmap, s *QPointF), r *QRectF, pixmap *QPixmap, s *QPointF)) {
	ok := C.QPaintEngine_override_virtual_drawTiledPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawTiledPixmap
func miqt_exec_callback_QPaintEngine_drawTiledPixmap(self *C.QPaintEngine, cb C.intptr_t, r *C.QRectF, pixmap *C.QPixmap, s *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r *QRectF, pixmap *QPixmap, s *QPointF), r *QRectF, pixmap *QPixmap, s *QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(r)

	slotval2 := newQPixmap(pixmap)

	slotval3 := newQPointF(s)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawTiledPixmap, slotval1, slotval2, slotval3)

}

func (this *QPaintEngine) callVirtualBase_DrawImage(r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(pm)
	defer runtime.KeepAlive(sr)

	C.QPaintEngine_virtualbase_drawImage(unsafe.Pointer(this.h), r.cPointer(), pm.cPointer(), sr.cPointer(), (C.int)(flags))

}
func (this *QPaintEngine) OnDrawImage(slot func(super func(r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag), r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag)) {
	ok := C.QPaintEngine_override_virtual_drawImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_drawImage
func miqt_exec_callback_QPaintEngine_drawImage(self *C.QPaintEngine, cb C.intptr_t, r *C.QRectF, pm *C.QImage, sr *C.QRectF, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag), r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(r)

	slotval2 := newQImage(pm)

	slotval3 := newQRectF(sr)

	slotval4 := (ImageConversionFlag)(flags)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawImage, slotval1, slotval2, slotval3, slotval4)

}

func (this *QPaintEngine) callVirtualBase_CoordinateOffset() *QPoint {
	defer runtime.KeepAlive(this)

	_goptr := newQPoint(C.QPaintEngine_virtualbase_coordinateOffset(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPaintEngine) OnCoordinateOffset(slot func(super func() *QPoint) *QPoint) {
	ok := C.QPaintEngine_override_virtual_coordinateOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_coordinateOffset
func miqt_exec_callback_QPaintEngine_coordinateOffset(self *C.QPaintEngine, cb C.intptr_t) *C.QPoint {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPoint) *QPoint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPaintEngine{h: self}).callVirtualBase_CoordinateOffset)
	defer runtime.KeepAlive(virtualReturn)

	return C.QPaintEngine_virtualreturncopy_QPoint(virtualReturn.cPointer())

}
func (this *QPaintEngine) OnType(slot func() QPaintEngine__Type) {
	C.QPaintEngine_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_type
func miqt_exec_callback_QPaintEngine_type(self *C.QPaintEngine, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QPaintEngine__Type)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}

func (this *QPaintEngine) callVirtualBase_CreatePixmap(size QSize) *QPixmap {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)

	_goptr := newQPixmap(C.QPaintEngine_virtualbase_createPixmap(unsafe.Pointer(this.h), size.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPaintEngine) OnCreatePixmap(slot func(super func(size QSize) *QPixmap, size QSize) *QPixmap) {
	ok := C.QPaintEngine_override_virtual_createPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_createPixmap
func miqt_exec_callback_QPaintEngine_createPixmap(self *C.QPaintEngine, cb C.intptr_t, size *C.QSize) *C.QPixmap {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size QSize) *QPixmap, size QSize) *QPixmap)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	size_goptr := newQSize(size)
	size_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *size_goptr

	virtualReturn := gofunc((&QPaintEngine{h: self}).callVirtualBase_CreatePixmap, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QPaintEngine_virtualreturncopy_QPixmap(virtualReturn.cPointer())

}

func (this *QPaintEngine) callVirtualBase_CreatePixmapFromImage(image QImage, flags ImageConversionFlag) *QPixmap {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(image)

	_goptr := newQPixmap(C.QPaintEngine_virtualbase_createPixmapFromImage(unsafe.Pointer(this.h), image.cPointer(), (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPaintEngine) OnCreatePixmapFromImage(slot func(super func(image QImage, flags ImageConversionFlag) *QPixmap, image QImage, flags ImageConversionFlag) *QPixmap) {
	ok := C.QPaintEngine_override_virtual_createPixmapFromImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEngine_createPixmapFromImage
func miqt_exec_callback_QPaintEngine_createPixmapFromImage(self *C.QPaintEngine, cb C.intptr_t, image *C.QImage, flags C.int) *C.QPixmap {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(image QImage, flags ImageConversionFlag) *QPixmap, image QImage, flags ImageConversionFlag) *QPixmap)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	image_goptr := newQImage(image)
	image_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *image_goptr

	slotval2 := (ImageConversionFlag)(flags)

	virtualReturn := gofunc((&QPaintEngine{h: self}).callVirtualBase_CreatePixmapFromImage, slotval1, slotval2)
	defer runtime.KeepAlive(virtualReturn)

	return C.QPaintEngine_virtualreturncopy_QPixmap(virtualReturn.cPointer())

}

// Delete this object from C++ memory.
func (this *QPaintEngine) Delete() {
	C.QPaintEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPaintEngine) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPaintEngine_delete((*C.QPaintEngine)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QPaintEngineState struct {
	h  *C.QPaintEngineState
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPaintEngineState) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQPaintEngineState constructs the type using only CGO pointers.
func newQPaintEngineState(h *C.QPaintEngineState) *QPaintEngineState {
	if h == nil {
		return nil
	}

	return &QPaintEngineState{h: h}
}

// UnsafeNewQPaintEngineState constructs the type using only unsafe pointers.
func UnsafeNewQPaintEngineState(h unsafe.Pointer) *QPaintEngineState {
	return newQPaintEngineState((*C.QPaintEngineState)(h))
}

// NewQPaintEngineState constructs a new QPaintEngineState object.
func NewQPaintEngineState() *QPaintEngineState {

	return newQPaintEngineState(C.QPaintEngineState_new())
}

func (this *QPaintEngineState) State() QPaintEngine__DirtyFlag {
	defer runtime.KeepAlive(this)
	return (QPaintEngine__DirtyFlag)(C.QPaintEngineState_state(this.h))
}

func (this *QPaintEngineState) Pen() *QPen {
	defer runtime.KeepAlive(this)
	_goptr := newQPen(C.QPaintEngineState_pen(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) Brush() *QBrush {
	defer runtime.KeepAlive(this)
	_goptr := newQBrush(C.QPaintEngineState_brush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) BrushOrigin() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QPaintEngineState_brushOrigin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) BackgroundBrush() *QBrush {
	defer runtime.KeepAlive(this)
	_goptr := newQBrush(C.QPaintEngineState_backgroundBrush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) BackgroundMode() BGMode {
	defer runtime.KeepAlive(this)
	return (BGMode)(C.QPaintEngineState_backgroundMode(this.h))
}

func (this *QPaintEngineState) Font() *QFont {
	defer runtime.KeepAlive(this)
	_goptr := newQFont(C.QPaintEngineState_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) Transform() *QTransform {
	defer runtime.KeepAlive(this)
	_goptr := newQTransform(C.QPaintEngineState_transform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) ClipOperation() ClipOperation {
	defer runtime.KeepAlive(this)
	return (ClipOperation)(C.QPaintEngineState_clipOperation(this.h))
}

func (this *QPaintEngineState) ClipRegion() *QRegion {
	defer runtime.KeepAlive(this)
	_goptr := newQRegion(C.QPaintEngineState_clipRegion(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) ClipPath() *QPainterPath {
	defer runtime.KeepAlive(this)
	_goptr := newQPainterPath(C.QPaintEngineState_clipPath(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) IsClipEnabled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPaintEngineState_isClipEnabled(this.h))
}

func (this *QPaintEngineState) RenderHints() QPainter__RenderHint {
	defer runtime.KeepAlive(this)
	return (QPainter__RenderHint)(C.QPaintEngineState_renderHints(this.h))
}

func (this *QPaintEngineState) CompositionMode() QPainter__CompositionMode {
	defer runtime.KeepAlive(this)
	return (QPainter__CompositionMode)(C.QPaintEngineState_compositionMode(this.h))
}

func (this *QPaintEngineState) Opacity() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPaintEngineState_opacity(this.h))
}

func (this *QPaintEngineState) Painter() *QPainter {
	defer runtime.KeepAlive(this)
	return newQPainter(C.QPaintEngineState_painter(this.h))
}

func (this *QPaintEngineState) BrushNeedsResolving() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPaintEngineState_brushNeedsResolving(this.h))
}

func (this *QPaintEngineState) PenNeedsResolving() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPaintEngineState_penNeedsResolving(this.h))
}

// Delete this object from C++ memory.
func (this *QPaintEngineState) Delete() {
	C.QPaintEngineState_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPaintEngineState) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPaintEngineState_delete((*C.QPaintEngineState)(gc[0]))
	})
	this.miqtSetGC(gc)
}
