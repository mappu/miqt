package qt6

/*

#include "gen_qpainterpath.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPainterPath__ElementType int

const (
	QPainterPath__MoveToElement      QPainterPath__ElementType = 0
	QPainterPath__LineToElement      QPainterPath__ElementType = 1
	QPainterPath__CurveToElement     QPainterPath__ElementType = 2
	QPainterPath__CurveToDataElement QPainterPath__ElementType = 3
)

type QPainterPath struct {
	h *C.QPainterPath
}

func (this *QPainterPath) cPointer() *C.QPainterPath {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPainterPath) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPainterPath constructs the type using only CGO pointers.
func newQPainterPath(h *C.QPainterPath) *QPainterPath {
	if h == nil {
		return nil
	}

	return &QPainterPath{h: h}
}

// UnsafeNewQPainterPath constructs the type using only unsafe pointers.
func UnsafeNewQPainterPath(h unsafe.Pointer) *QPainterPath {
	return newQPainterPath((*C.QPainterPath)(h))
}

// NewQPainterPath constructs a new QPainterPath object.
func NewQPainterPath() *QPainterPath {

	return newQPainterPath(C.QPainterPath_new())
}

// NewQPainterPath2 constructs a new QPainterPath object.
func NewQPainterPath2(startPoint *QPointF) *QPainterPath {

	return newQPainterPath(C.QPainterPath_new2(startPoint.cPointer()))
}

// NewQPainterPath3 constructs a new QPainterPath object.
func NewQPainterPath3(other *QPainterPath) *QPainterPath {

	return newQPainterPath(C.QPainterPath_new3(other.cPointer()))
}

func (this *QPainterPath) OperatorAssign(other *QPainterPath) {
	C.QPainterPath_operatorAssign(this.h, other.cPointer())
}

func (this *QPainterPath) Swap(other *QPainterPath) {
	C.QPainterPath_swap(this.h, other.cPointer())
}

func (this *QPainterPath) Clear() {
	C.QPainterPath_clear(this.h)
}

func (this *QPainterPath) Reserve(size int) {
	C.QPainterPath_reserve(this.h, (C.int)(size))
}

func (this *QPainterPath) Capacity() int {
	return (int)(C.QPainterPath_capacity(this.h))
}

func (this *QPainterPath) CloseSubpath() {
	C.QPainterPath_closeSubpath(this.h)
}

func (this *QPainterPath) MoveTo(p *QPointF) {
	C.QPainterPath_moveTo(this.h, p.cPointer())
}

func (this *QPainterPath) MoveTo2(x float64, y float64) {
	C.QPainterPath_moveTo2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QPainterPath) LineTo(p *QPointF) {
	C.QPainterPath_lineTo(this.h, p.cPointer())
}

func (this *QPainterPath) LineTo2(x float64, y float64) {
	C.QPainterPath_lineTo2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QPainterPath) ArcMoveTo(rect *QRectF, angle float64) {
	C.QPainterPath_arcMoveTo(this.h, rect.cPointer(), (C.double)(angle))
}

func (this *QPainterPath) ArcMoveTo2(x float64, y float64, w float64, h float64, angle float64) {
	C.QPainterPath_arcMoveTo2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.double)(angle))
}

func (this *QPainterPath) ArcTo(rect *QRectF, startAngle float64, arcLength float64) {
	C.QPainterPath_arcTo(this.h, rect.cPointer(), (C.double)(startAngle), (C.double)(arcLength))
}

func (this *QPainterPath) ArcTo2(x float64, y float64, w float64, h float64, startAngle float64, arcLength float64) {
	C.QPainterPath_arcTo2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.double)(startAngle), (C.double)(arcLength))
}

func (this *QPainterPath) CubicTo(ctrlPt1 *QPointF, ctrlPt2 *QPointF, endPt *QPointF) {
	C.QPainterPath_cubicTo(this.h, ctrlPt1.cPointer(), ctrlPt2.cPointer(), endPt.cPointer())
}

func (this *QPainterPath) CubicTo2(ctrlPt1x float64, ctrlPt1y float64, ctrlPt2x float64, ctrlPt2y float64, endPtx float64, endPty float64) {
	C.QPainterPath_cubicTo2(this.h, (C.double)(ctrlPt1x), (C.double)(ctrlPt1y), (C.double)(ctrlPt2x), (C.double)(ctrlPt2y), (C.double)(endPtx), (C.double)(endPty))
}

func (this *QPainterPath) QuadTo(ctrlPt *QPointF, endPt *QPointF) {
	C.QPainterPath_quadTo(this.h, ctrlPt.cPointer(), endPt.cPointer())
}

func (this *QPainterPath) QuadTo2(ctrlPtx float64, ctrlPty float64, endPtx float64, endPty float64) {
	C.QPainterPath_quadTo2(this.h, (C.double)(ctrlPtx), (C.double)(ctrlPty), (C.double)(endPtx), (C.double)(endPty))
}

func (this *QPainterPath) CurrentPosition() *QPointF {
	_goptr := newQPointF(C.QPainterPath_currentPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) AddRect(rect *QRectF) {
	C.QPainterPath_addRect(this.h, rect.cPointer())
}

func (this *QPainterPath) AddRect2(x float64, y float64, w float64, h float64) {
	C.QPainterPath_addRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QPainterPath) AddEllipse(rect *QRectF) {
	C.QPainterPath_addEllipse(this.h, rect.cPointer())
}

func (this *QPainterPath) AddEllipse2(x float64, y float64, w float64, h float64) {
	C.QPainterPath_addEllipse2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QPainterPath) AddEllipse3(center *QPointF, rx float64, ry float64) {
	C.QPainterPath_addEllipse3(this.h, center.cPointer(), (C.double)(rx), (C.double)(ry))
}

func (this *QPainterPath) AddText(point *QPointF, f *QFont, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainterPath_addText(this.h, point.cPointer(), f.cPointer(), text_ms)
}

func (this *QPainterPath) AddText2(x float64, y float64, f *QFont, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainterPath_addText2(this.h, (C.double)(x), (C.double)(y), f.cPointer(), text_ms)
}

func (this *QPainterPath) AddPath(path *QPainterPath) {
	C.QPainterPath_addPath(this.h, path.cPointer())
}

func (this *QPainterPath) AddRegion(region *QRegion) {
	C.QPainterPath_addRegion(this.h, region.cPointer())
}

func (this *QPainterPath) AddRoundedRect(rect *QRectF, xRadius float64, yRadius float64) {
	C.QPainterPath_addRoundedRect(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainterPath) AddRoundedRect2(x float64, y float64, w float64, h float64, xRadius float64, yRadius float64) {
	C.QPainterPath_addRoundedRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainterPath) ConnectPath(path *QPainterPath) {
	C.QPainterPath_connectPath(this.h, path.cPointer())
}

func (this *QPainterPath) Contains(pt *QPointF) bool {
	return (bool)(C.QPainterPath_contains(this.h, pt.cPointer()))
}

func (this *QPainterPath) ContainsWithRect(rect *QRectF) bool {
	return (bool)(C.QPainterPath_containsWithRect(this.h, rect.cPointer()))
}

func (this *QPainterPath) Intersects(rect *QRectF) bool {
	return (bool)(C.QPainterPath_intersects(this.h, rect.cPointer()))
}

func (this *QPainterPath) Translate(dx float64, dy float64) {
	C.QPainterPath_translate(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QPainterPath) TranslateWithOffset(offset *QPointF) {
	C.QPainterPath_translateWithOffset(this.h, offset.cPointer())
}

func (this *QPainterPath) Translated(dx float64, dy float64) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_translated(this.h, (C.double)(dx), (C.double)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) TranslatedWithOffset(offset *QPointF) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_translatedWithOffset(this.h, offset.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QPainterPath_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) ControlPointRect() *QRectF {
	_goptr := newQRectF(C.QPainterPath_controlPointRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) FillRule() FillRule {
	return (FillRule)(C.QPainterPath_fillRule(this.h))
}

func (this *QPainterPath) SetFillRule(fillRule FillRule) {
	C.QPainterPath_setFillRule(this.h, (C.int)(fillRule))
}

func (this *QPainterPath) IsEmpty() bool {
	return (bool)(C.QPainterPath_isEmpty(this.h))
}

func (this *QPainterPath) ToReversed() *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_toReversed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) ElementCount() int {
	return (int)(C.QPainterPath_elementCount(this.h))
}

func (this *QPainterPath) ElementAt(i int) *QPainterPath__Element {
	_goptr := newQPainterPath__Element(C.QPainterPath_elementAt(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) SetElementPositionAt(i int, x float64, y float64) {
	C.QPainterPath_setElementPositionAt(this.h, (C.int)(i), (C.double)(x), (C.double)(y))
}

func (this *QPainterPath) Length() float64 {
	return (float64)(C.QPainterPath_length(this.h))
}

func (this *QPainterPath) PercentAtLength(t float64) float64 {
	return (float64)(C.QPainterPath_percentAtLength(this.h, (C.double)(t)))
}

func (this *QPainterPath) PointAtPercent(t float64) *QPointF {
	_goptr := newQPointF(C.QPainterPath_pointAtPercent(this.h, (C.double)(t)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) AngleAtPercent(t float64) float64 {
	return (float64)(C.QPainterPath_angleAtPercent(this.h, (C.double)(t)))
}

func (this *QPainterPath) SlopeAtPercent(t float64) float64 {
	return (float64)(C.QPainterPath_slopeAtPercent(this.h, (C.double)(t)))
}

func (this *QPainterPath) IntersectsWithQPainterPath(p *QPainterPath) bool {
	return (bool)(C.QPainterPath_intersectsWithQPainterPath(this.h, p.cPointer()))
}

func (this *QPainterPath) ContainsWithQPainterPath(p *QPainterPath) bool {
	return (bool)(C.QPainterPath_containsWithQPainterPath(this.h, p.cPointer()))
}

func (this *QPainterPath) United(r *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_united(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) Intersected(r *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_intersected(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) Subtracted(r *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_subtracted(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) Simplified() *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_simplified(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorEqual(other *QPainterPath) bool {
	return (bool)(C.QPainterPath_operatorEqual(this.h, other.cPointer()))
}

func (this *QPainterPath) OperatorNotEqual(other *QPainterPath) bool {
	return (bool)(C.QPainterPath_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QPainterPath) OperatorBitwiseAnd(other *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_operatorBitwiseAnd(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorBitwiseOr(other *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_operatorBitwiseOr(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorPlus(other *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_operatorPlus(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorMinus(other *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPath_operatorMinus(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorBitwiseAndAssign(other *QPainterPath) {
	C.QPainterPath_operatorBitwiseAndAssign(this.h, other.cPointer())
}

func (this *QPainterPath) OperatorBitwiseOrAssign(other *QPainterPath) {
	C.QPainterPath_operatorBitwiseOrAssign(this.h, other.cPointer())
}

func (this *QPainterPath) OperatorPlusAssign(other *QPainterPath) *QPainterPath {
	return newQPainterPath(C.QPainterPath_operatorPlusAssign(this.h, other.cPointer()))
}

func (this *QPainterPath) OperatorMinusAssign(other *QPainterPath) *QPainterPath {
	return newQPainterPath(C.QPainterPath_operatorMinusAssign(this.h, other.cPointer()))
}

func (this *QPainterPath) AddRoundedRect3(rect *QRectF, xRadius float64, yRadius float64, mode SizeMode) {
	C.QPainterPath_addRoundedRect3(this.h, rect.cPointer(), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

func (this *QPainterPath) AddRoundedRect4(x float64, y float64, w float64, h float64, xRadius float64, yRadius float64, mode SizeMode) {
	C.QPainterPath_addRoundedRect4(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

// Delete this object from C++ memory.
func (this *QPainterPath) Delete() {
	C.QPainterPath_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPainterPath) GoGC() {
	runtime.SetFinalizer(this, func(this *QPainterPath) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPainterPathStroker struct {
	h *C.QPainterPathStroker
}

func (this *QPainterPathStroker) cPointer() *C.QPainterPathStroker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPainterPathStroker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPainterPathStroker constructs the type using only CGO pointers.
func newQPainterPathStroker(h *C.QPainterPathStroker) *QPainterPathStroker {
	if h == nil {
		return nil
	}

	return &QPainterPathStroker{h: h}
}

// UnsafeNewQPainterPathStroker constructs the type using only unsafe pointers.
func UnsafeNewQPainterPathStroker(h unsafe.Pointer) *QPainterPathStroker {
	return newQPainterPathStroker((*C.QPainterPathStroker)(h))
}

// NewQPainterPathStroker constructs a new QPainterPathStroker object.
func NewQPainterPathStroker() *QPainterPathStroker {

	return newQPainterPathStroker(C.QPainterPathStroker_new())
}

// NewQPainterPathStroker2 constructs a new QPainterPathStroker object.
func NewQPainterPathStroker2(pen *QPen) *QPainterPathStroker {

	return newQPainterPathStroker(C.QPainterPathStroker_new2(pen.cPointer()))
}

func (this *QPainterPathStroker) SetWidth(width float64) {
	C.QPainterPathStroker_setWidth(this.h, (C.double)(width))
}

func (this *QPainterPathStroker) Width() float64 {
	return (float64)(C.QPainterPathStroker_width(this.h))
}

func (this *QPainterPathStroker) SetCapStyle(style PenCapStyle) {
	C.QPainterPathStroker_setCapStyle(this.h, (C.int)(style))
}

func (this *QPainterPathStroker) CapStyle() PenCapStyle {
	return (PenCapStyle)(C.QPainterPathStroker_capStyle(this.h))
}

func (this *QPainterPathStroker) SetJoinStyle(style PenJoinStyle) {
	C.QPainterPathStroker_setJoinStyle(this.h, (C.int)(style))
}

func (this *QPainterPathStroker) JoinStyle() PenJoinStyle {
	return (PenJoinStyle)(C.QPainterPathStroker_joinStyle(this.h))
}

func (this *QPainterPathStroker) SetMiterLimit(length float64) {
	C.QPainterPathStroker_setMiterLimit(this.h, (C.double)(length))
}

func (this *QPainterPathStroker) MiterLimit() float64 {
	return (float64)(C.QPainterPathStroker_miterLimit(this.h))
}

func (this *QPainterPathStroker) SetCurveThreshold(threshold float64) {
	C.QPainterPathStroker_setCurveThreshold(this.h, (C.double)(threshold))
}

func (this *QPainterPathStroker) CurveThreshold() float64 {
	return (float64)(C.QPainterPathStroker_curveThreshold(this.h))
}

func (this *QPainterPathStroker) SetDashPattern(dashPattern PenStyle) {
	C.QPainterPathStroker_setDashPattern(this.h, (C.int)(dashPattern))
}

func (this *QPainterPathStroker) SetDashPatternWithDashPattern(dashPattern []float64) {
	dashPattern_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(dashPattern))))
	defer C.free(unsafe.Pointer(dashPattern_CArray))
	for i := range dashPattern {
		dashPattern_CArray[i] = (C.double)(dashPattern[i])
	}
	dashPattern_ma := C.struct_miqt_array{len: C.size_t(len(dashPattern)), data: unsafe.Pointer(dashPattern_CArray)}
	C.QPainterPathStroker_setDashPatternWithDashPattern(this.h, dashPattern_ma)
}

func (this *QPainterPathStroker) DashPattern() []float64 {
	var _ma C.struct_miqt_array = C.QPainterPathStroker_dashPattern(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QPainterPathStroker) SetDashOffset(offset float64) {
	C.QPainterPathStroker_setDashOffset(this.h, (C.double)(offset))
}

func (this *QPainterPathStroker) DashOffset() float64 {
	return (float64)(C.QPainterPathStroker_dashOffset(this.h))
}

func (this *QPainterPathStroker) CreateStroke(path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QPainterPathStroker_createStroke(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPainterPathStroker) Delete() {
	C.QPainterPathStroker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPainterPathStroker) GoGC() {
	runtime.SetFinalizer(this, func(this *QPainterPathStroker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPainterPath__Element struct {
	h *C.QPainterPath__Element
}

func (this *QPainterPath__Element) cPointer() *C.QPainterPath__Element {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPainterPath__Element) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPainterPath__Element constructs the type using only CGO pointers.
func newQPainterPath__Element(h *C.QPainterPath__Element) *QPainterPath__Element {
	if h == nil {
		return nil
	}

	return &QPainterPath__Element{h: h}
}

// UnsafeNewQPainterPath__Element constructs the type using only unsafe pointers.
func UnsafeNewQPainterPath__Element(h unsafe.Pointer) *QPainterPath__Element {
	return newQPainterPath__Element((*C.QPainterPath__Element)(h))
}

func (this *QPainterPath__Element) IsMoveTo() bool {
	return (bool)(C.QPainterPath__Element_isMoveTo(this.h))
}

func (this *QPainterPath__Element) IsLineTo() bool {
	return (bool)(C.QPainterPath__Element_isLineTo(this.h))
}

func (this *QPainterPath__Element) IsCurveTo() bool {
	return (bool)(C.QPainterPath__Element_isCurveTo(this.h))
}

func (this *QPainterPath__Element) ToQPointF() *QPointF {
	_goptr := newQPointF(C.QPainterPath__Element_ToQPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath__Element) OperatorEqual(e *QPainterPath__Element) bool {
	return (bool)(C.QPainterPath__Element_operatorEqual(this.h, e.cPointer()))
}

func (this *QPainterPath__Element) OperatorNotEqual(e *QPainterPath__Element) bool {
	return (bool)(C.QPainterPath__Element_operatorNotEqual(this.h, e.cPointer()))
}

// Delete this object from C++ memory.
func (this *QPainterPath__Element) Delete() {
	C.QPainterPath__Element_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPainterPath__Element) GoGC() {
	runtime.SetFinalizer(this, func(this *QPainterPath__Element) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
