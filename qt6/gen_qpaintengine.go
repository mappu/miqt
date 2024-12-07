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
	h          *C.QTextItem
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QTextItem{h: (*C.QTextItem)(h)}
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
	_goptr := newQFont(C.QTextItem_Font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QTextItem) Delete() {
	C.QTextItem_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QPaintEngine
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QPaintEngine{h: (*C.QPaintEngine)(h)}
}

// NewQPaintEngine constructs a new QPaintEngine object.
func NewQPaintEngine() *QPaintEngine {
	var outptr_QPaintEngine *C.QPaintEngine = nil

	C.QPaintEngine_new(&outptr_QPaintEngine)
	ret := newQPaintEngine(outptr_QPaintEngine)
	ret.isSubclass = true
	return ret
}

// NewQPaintEngine2 constructs a new QPaintEngine object.
func NewQPaintEngine2(features QPaintEngine__PaintEngineFeature) *QPaintEngine {
	var outptr_QPaintEngine *C.QPaintEngine = nil

	C.QPaintEngine_new2((C.int)(features), &outptr_QPaintEngine)
	ret := newQPaintEngine(outptr_QPaintEngine)
	ret.isSubclass = true
	return ret
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

func (this *QPaintEngine) DrawImage(r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag) {
	C.QPaintEngine_DrawImage(this.h, r.cPointer(), pm.cPointer(), sr.cPointer(), (C.int)(flags))
}

func (this *QPaintEngine) SetPaintDevice(device *QPaintDevice) {
	C.QPaintEngine_SetPaintDevice(this.h, device.cPointer())
}

func (this *QPaintEngine) PaintDevice() *QPaintDevice {
	return newQPaintDevice(C.QPaintEngine_PaintDevice(this.h))
}

func (this *QPaintEngine) SetSystemClip(baseClip *QRegion) {
	C.QPaintEngine_SetSystemClip(this.h, baseClip.cPointer())
}

func (this *QPaintEngine) SystemClip() *QRegion {
	_goptr := newQRegion(C.QPaintEngine_SystemClip(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) SetSystemRect(rect *QRect) {
	C.QPaintEngine_SetSystemRect(this.h, rect.cPointer())
}

func (this *QPaintEngine) SystemRect() *QRect {
	_goptr := newQRect(C.QPaintEngine_SystemRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) CoordinateOffset() *QPoint {
	_goptr := newQPoint(C.QPaintEngine_CoordinateOffset(this.h))
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
	return newQPainter(C.QPaintEngine_Painter(this.h))
}

func (this *QPaintEngine) SyncState() {
	C.QPaintEngine_SyncState(this.h)
}

func (this *QPaintEngine) IsExtended() bool {
	return (bool)(C.QPaintEngine_IsExtended(this.h))
}

func (this *QPaintEngine) CreatePixmap(size QSize) *QPixmap {
	_goptr := newQPixmap(C.QPaintEngine_CreatePixmap(this.h, size.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngine) CreatePixmapFromImage(image QImage, flags ImageConversionFlag) *QPixmap {
	_goptr := newQPixmap(C.QPaintEngine_CreatePixmapFromImage(this.h, image.cPointer(), (C.int)(flags)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}
func (this *QPaintEngine) OnBegin(slot func(pdev *QPaintDevice) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_Begin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_Begin
func miqt_exec_callback_QPaintEngine_Begin(self *C.QPaintEngine, cb C.intptr_t, pdev *C.QPaintDevice) C.bool {
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_End(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_End
func miqt_exec_callback_QPaintEngine_End(self *C.QPaintEngine, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QPaintEngine) OnUpdateState(slot func(state *QPaintEngineState)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_UpdateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_UpdateState
func miqt_exec_callback_QPaintEngine_UpdateState(self *C.QPaintEngine, cb C.intptr_t, state *C.QPaintEngineState) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state *QPaintEngineState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEngineState(state)

	gofunc(slotval1)

}

func (this *QPaintEngine) callVirtualBase_DrawRects(rects *QRect, rectCount int) {

	C.QPaintEngine_virtualbase_DrawRects(unsafe.Pointer(this.h), rects.cPointer(), (C.int)(rectCount))

}
func (this *QPaintEngine) OnDrawRects(slot func(super func(rects *QRect, rectCount int), rects *QRect, rectCount int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawRects(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawRects
func miqt_exec_callback_QPaintEngine_DrawRects(self *C.QPaintEngine, cb C.intptr_t, rects *C.QRect, rectCount C.int) {
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

	C.QPaintEngine_virtualbase_DrawRects2(unsafe.Pointer(this.h), rects.cPointer(), (C.int)(rectCount))

}
func (this *QPaintEngine) OnDrawRects2(slot func(super func(rects *QRectF, rectCount int), rects *QRectF, rectCount int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawRects2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawRects2
func miqt_exec_callback_QPaintEngine_DrawRects2(self *C.QPaintEngine, cb C.intptr_t, rects *C.QRectF, rectCount C.int) {
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

	C.QPaintEngine_virtualbase_DrawLines(unsafe.Pointer(this.h), lines.cPointer(), (C.int)(lineCount))

}
func (this *QPaintEngine) OnDrawLines(slot func(super func(lines *QLine, lineCount int), lines *QLine, lineCount int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawLines(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawLines
func miqt_exec_callback_QPaintEngine_DrawLines(self *C.QPaintEngine, cb C.intptr_t, lines *C.QLine, lineCount C.int) {
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

	C.QPaintEngine_virtualbase_DrawLines2(unsafe.Pointer(this.h), lines.cPointer(), (C.int)(lineCount))

}
func (this *QPaintEngine) OnDrawLines2(slot func(super func(lines *QLineF, lineCount int), lines *QLineF, lineCount int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawLines2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawLines2
func miqt_exec_callback_QPaintEngine_DrawLines2(self *C.QPaintEngine, cb C.intptr_t, lines *C.QLineF, lineCount C.int) {
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

	C.QPaintEngine_virtualbase_DrawEllipse(unsafe.Pointer(this.h), r.cPointer())

}
func (this *QPaintEngine) OnDrawEllipse(slot func(super func(r *QRectF), r *QRectF)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawEllipse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawEllipse
func miqt_exec_callback_QPaintEngine_DrawEllipse(self *C.QPaintEngine, cb C.intptr_t, r *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r *QRectF), r *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(r)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawEllipse, slotval1)

}

func (this *QPaintEngine) callVirtualBase_DrawEllipseWithQRect(r *QRect) {

	C.QPaintEngine_virtualbase_DrawEllipseWithQRect(unsafe.Pointer(this.h), r.cPointer())

}
func (this *QPaintEngine) OnDrawEllipseWithQRect(slot func(super func(r *QRect), r *QRect)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawEllipseWithQRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawEllipseWithQRect
func miqt_exec_callback_QPaintEngine_DrawEllipseWithQRect(self *C.QPaintEngine, cb C.intptr_t, r *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r *QRect), r *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(r)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawEllipseWithQRect, slotval1)

}

func (this *QPaintEngine) callVirtualBase_DrawPath(path *QPainterPath) {

	C.QPaintEngine_virtualbase_DrawPath(unsafe.Pointer(this.h), path.cPointer())

}
func (this *QPaintEngine) OnDrawPath(slot func(super func(path *QPainterPath), path *QPainterPath)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawPath
func miqt_exec_callback_QPaintEngine_DrawPath(self *C.QPaintEngine, cb C.intptr_t, path *C.QPainterPath) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath), path *QPainterPath))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawPath, slotval1)

}

func (this *QPaintEngine) callVirtualBase_DrawPoints(points *QPointF, pointCount int) {

	C.QPaintEngine_virtualbase_DrawPoints(unsafe.Pointer(this.h), points.cPointer(), (C.int)(pointCount))

}
func (this *QPaintEngine) OnDrawPoints(slot func(super func(points *QPointF, pointCount int), points *QPointF, pointCount int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawPoints(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawPoints
func miqt_exec_callback_QPaintEngine_DrawPoints(self *C.QPaintEngine, cb C.intptr_t, points *C.QPointF, pointCount C.int) {
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

	C.QPaintEngine_virtualbase_DrawPoints2(unsafe.Pointer(this.h), points.cPointer(), (C.int)(pointCount))

}
func (this *QPaintEngine) OnDrawPoints2(slot func(super func(points *QPoint, pointCount int), points *QPoint, pointCount int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawPoints2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawPoints2
func miqt_exec_callback_QPaintEngine_DrawPoints2(self *C.QPaintEngine, cb C.intptr_t, points *C.QPoint, pointCount C.int) {
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

	C.QPaintEngine_virtualbase_DrawPolygon(unsafe.Pointer(this.h), points.cPointer(), (C.int)(pointCount), (C.int)(mode))

}
func (this *QPaintEngine) OnDrawPolygon(slot func(super func(points *QPointF, pointCount int, mode QPaintEngine__PolygonDrawMode), points *QPointF, pointCount int, mode QPaintEngine__PolygonDrawMode)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawPolygon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawPolygon
func miqt_exec_callback_QPaintEngine_DrawPolygon(self *C.QPaintEngine, cb C.intptr_t, points *C.QPointF, pointCount C.int, mode C.int) {
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

	C.QPaintEngine_virtualbase_DrawPolygon2(unsafe.Pointer(this.h), points.cPointer(), (C.int)(pointCount), (C.int)(mode))

}
func (this *QPaintEngine) OnDrawPolygon2(slot func(super func(points *QPoint, pointCount int, mode QPaintEngine__PolygonDrawMode), points *QPoint, pointCount int, mode QPaintEngine__PolygonDrawMode)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawPolygon2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawPolygon2
func miqt_exec_callback_QPaintEngine_DrawPolygon2(self *C.QPaintEngine, cb C.intptr_t, points *C.QPoint, pointCount C.int, mode C.int) {
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawPixmap
func miqt_exec_callback_QPaintEngine_DrawPixmap(self *C.QPaintEngine, cb C.intptr_t, r *C.QRectF, pm *C.QPixmap, sr *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(r *QRectF, pm *QPixmap, sr *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(r)

	slotval2 := newQPixmap(pm, nil)

	slotval3 := newQRectF(sr)

	gofunc(slotval1, slotval2, slotval3)

}

func (this *QPaintEngine) callVirtualBase_DrawTextItem(p *QPointF, textItem *QTextItem) {

	C.QPaintEngine_virtualbase_DrawTextItem(unsafe.Pointer(this.h), p.cPointer(), textItem.cPointer())

}
func (this *QPaintEngine) OnDrawTextItem(slot func(super func(p *QPointF, textItem *QTextItem), p *QPointF, textItem *QTextItem)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawTextItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawTextItem
func miqt_exec_callback_QPaintEngine_DrawTextItem(self *C.QPaintEngine, cb C.intptr_t, p *C.QPointF, textItem *C.QTextItem) {
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

	C.QPaintEngine_virtualbase_DrawTiledPixmap(unsafe.Pointer(this.h), r.cPointer(), pixmap.cPointer(), s.cPointer())

}
func (this *QPaintEngine) OnDrawTiledPixmap(slot func(super func(r *QRectF, pixmap *QPixmap, s *QPointF), r *QRectF, pixmap *QPixmap, s *QPointF)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawTiledPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawTiledPixmap
func miqt_exec_callback_QPaintEngine_DrawTiledPixmap(self *C.QPaintEngine, cb C.intptr_t, r *C.QRectF, pixmap *C.QPixmap, s *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r *QRectF, pixmap *QPixmap, s *QPointF), r *QRectF, pixmap *QPixmap, s *QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(r)

	slotval2 := newQPixmap(pixmap, nil)

	slotval3 := newQPointF(s)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawTiledPixmap, slotval1, slotval2, slotval3)

}

func (this *QPaintEngine) callVirtualBase_DrawImage(r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag) {

	C.QPaintEngine_virtualbase_DrawImage(unsafe.Pointer(this.h), r.cPointer(), pm.cPointer(), sr.cPointer(), (C.int)(flags))

}
func (this *QPaintEngine) OnDrawImage(slot func(super func(r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag), r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_DrawImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_DrawImage
func miqt_exec_callback_QPaintEngine_DrawImage(self *C.QPaintEngine, cb C.intptr_t, r *C.QRectF, pm *C.QImage, sr *C.QRectF, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag), r *QRectF, pm *QImage, sr *QRectF, flags ImageConversionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(r)

	slotval2 := newQImage(pm, nil)

	slotval3 := newQRectF(sr)

	slotval4 := (ImageConversionFlag)(flags)

	gofunc((&QPaintEngine{h: self}).callVirtualBase_DrawImage, slotval1, slotval2, slotval3, slotval4)

}

func (this *QPaintEngine) callVirtualBase_CoordinateOffset() *QPoint {

	_goptr := newQPoint(C.QPaintEngine_virtualbase_CoordinateOffset(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPaintEngine) OnCoordinateOffset(slot func(super func() *QPoint) *QPoint) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_CoordinateOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_CoordinateOffset
func miqt_exec_callback_QPaintEngine_CoordinateOffset(self *C.QPaintEngine, cb C.intptr_t) *C.QPoint {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPoint) *QPoint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPaintEngine{h: self}).callVirtualBase_CoordinateOffset)

	return virtualReturn.cPointer()

}
func (this *QPaintEngine) OnType(slot func() QPaintEngine__Type) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_Type
func miqt_exec_callback_QPaintEngine_Type(self *C.QPaintEngine, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QPaintEngine__Type)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}

func (this *QPaintEngine) callVirtualBase_CreatePixmap(size QSize) *QPixmap {

	_goptr := newQPixmap(C.QPaintEngine_virtualbase_CreatePixmap(unsafe.Pointer(this.h), size.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPaintEngine) OnCreatePixmap(slot func(super func(size QSize) *QPixmap, size QSize) *QPixmap) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_CreatePixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_CreatePixmap
func miqt_exec_callback_QPaintEngine_CreatePixmap(self *C.QPaintEngine, cb C.intptr_t, size *C.QSize) *C.QPixmap {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size QSize) *QPixmap, size QSize) *QPixmap)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	size_goptr := newQSize(size)
	size_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *size_goptr

	virtualReturn := gofunc((&QPaintEngine{h: self}).callVirtualBase_CreatePixmap, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPaintEngine) callVirtualBase_CreatePixmapFromImage(image QImage, flags ImageConversionFlag) *QPixmap {

	_goptr := newQPixmap(C.QPaintEngine_virtualbase_CreatePixmapFromImage(unsafe.Pointer(this.h), image.cPointer(), (C.int)(flags)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPaintEngine) OnCreatePixmapFromImage(slot func(super func(image QImage, flags ImageConversionFlag) *QPixmap, image QImage, flags ImageConversionFlag) *QPixmap) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPaintEngine_override_virtual_CreatePixmapFromImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPaintEngine_CreatePixmapFromImage
func miqt_exec_callback_QPaintEngine_CreatePixmapFromImage(self *C.QPaintEngine, cb C.intptr_t, image *C.QImage, flags C.int) *C.QPixmap {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(image QImage, flags ImageConversionFlag) *QPixmap, image QImage, flags ImageConversionFlag) *QPixmap)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	image_goptr := newQImage(image, nil)
	image_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *image_goptr

	slotval2 := (ImageConversionFlag)(flags)

	virtualReturn := gofunc((&QPaintEngine{h: self}).callVirtualBase_CreatePixmapFromImage, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QPaintEngine) Delete() {
	C.QPaintEngine_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QPaintEngineState
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QPaintEngineState{h: (*C.QPaintEngineState)(h)}
}

func (this *QPaintEngineState) State() QPaintEngine__DirtyFlag {
	return (QPaintEngine__DirtyFlag)(C.QPaintEngineState_State(this.h))
}

func (this *QPaintEngineState) Pen() *QPen {
	_goptr := newQPen(C.QPaintEngineState_Pen(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) Brush() *QBrush {
	_goptr := newQBrush(C.QPaintEngineState_Brush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) BrushOrigin() *QPointF {
	_goptr := newQPointF(C.QPaintEngineState_BrushOrigin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) BackgroundBrush() *QBrush {
	_goptr := newQBrush(C.QPaintEngineState_BackgroundBrush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) BackgroundMode() BGMode {
	return (BGMode)(C.QPaintEngineState_BackgroundMode(this.h))
}

func (this *QPaintEngineState) Font() *QFont {
	_goptr := newQFont(C.QPaintEngineState_Font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) Transform() *QTransform {
	_goptr := newQTransform(C.QPaintEngineState_Transform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) ClipOperation() ClipOperation {
	return (ClipOperation)(C.QPaintEngineState_ClipOperation(this.h))
}

func (this *QPaintEngineState) ClipRegion() *QRegion {
	_goptr := newQRegion(C.QPaintEngineState_ClipRegion(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPaintEngineState) ClipPath() *QPainterPath {
	_goptr := newQPainterPath(C.QPaintEngineState_ClipPath(this.h))
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
	return newQPainter(C.QPaintEngineState_Painter(this.h))
}

func (this *QPaintEngineState) BrushNeedsResolving() bool {
	return (bool)(C.QPaintEngineState_BrushNeedsResolving(this.h))
}

func (this *QPaintEngineState) PenNeedsResolving() bool {
	return (bool)(C.QPaintEngineState_PenNeedsResolving(this.h))
}

// Delete this object from C++ memory.
func (this *QPaintEngineState) Delete() {
	C.QPaintEngineState_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPaintEngineState) GoGC() {
	runtime.SetFinalizer(this, func(this *QPaintEngineState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
