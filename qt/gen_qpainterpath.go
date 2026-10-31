package qt

/*

#include "gen_qpainterpath.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
	h  *C.QPainterPath
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPainterPath) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
func NewQPainterPath2(startPoint QPointF) *QPainterPath {

	return newQPainterPath(C.QPainterPath_new2(libmiqt.ValueCast[C.struct_miqt_qpointf](startPoint)))
}

// NewQPainterPath3 constructs a new QPainterPath object.
func NewQPainterPath3(other *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(other)

	return newQPainterPath(C.QPainterPath_new3(other.cPointer()))
}

func (this *QPainterPath) OperatorAssign(other *QPainterPath) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPainterPath_operatorAssign(this.h, other.cPointer())
}

func (this *QPainterPath) Swap(other *QPainterPath) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPainterPath_swap(this.h, other.cPointer())
}

func (this *QPainterPath) Clear() {
	defer runtime.KeepAlive(this)
	C.QPainterPath_clear(this.h)
}

func (this *QPainterPath) Reserve(size int) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_reserve(this.h, (C.int)(size))
}

func (this *QPainterPath) Capacity() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPainterPath_capacity(this.h))
}

func (this *QPainterPath) CloseSubpath() {
	defer runtime.KeepAlive(this)
	C.QPainterPath_closeSubpath(this.h)
}

func (this *QPainterPath) MoveTo(p QPointF) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_moveTo(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QPainterPath) MoveTo2(x float64, y float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_moveTo2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QPainterPath) LineTo(p QPointF) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_lineTo(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QPainterPath) LineTo2(x float64, y float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_lineTo2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QPainterPath) ArcMoveTo(rect QRectF, angle float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_arcMoveTo(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect), (C.double)(angle))
}

func (this *QPainterPath) ArcMoveTo2(x float64, y float64, w float64, h float64, angle float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_arcMoveTo2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.double)(angle))
}

func (this *QPainterPath) ArcTo(rect QRectF, startAngle float64, arcLength float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_arcTo(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect), (C.double)(startAngle), (C.double)(arcLength))
}

func (this *QPainterPath) ArcTo2(x float64, y float64, w float64, h float64, startAngle float64, arcLength float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_arcTo2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.double)(startAngle), (C.double)(arcLength))
}

func (this *QPainterPath) CubicTo(ctrlPt1 QPointF, ctrlPt2 QPointF, endPt QPointF) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_cubicTo(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](ctrlPt1), libmiqt.ValueCast[C.struct_miqt_qpointf](ctrlPt2), libmiqt.ValueCast[C.struct_miqt_qpointf](endPt))
}

func (this *QPainterPath) CubicTo2(ctrlPt1x float64, ctrlPt1y float64, ctrlPt2x float64, ctrlPt2y float64, endPtx float64, endPty float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_cubicTo2(this.h, (C.double)(ctrlPt1x), (C.double)(ctrlPt1y), (C.double)(ctrlPt2x), (C.double)(ctrlPt2y), (C.double)(endPtx), (C.double)(endPty))
}

func (this *QPainterPath) QuadTo(ctrlPt QPointF, endPt QPointF) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_quadTo(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](ctrlPt), libmiqt.ValueCast[C.struct_miqt_qpointf](endPt))
}

func (this *QPainterPath) QuadTo2(ctrlPtx float64, ctrlPty float64, endPtx float64, endPty float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_quadTo2(this.h, (C.double)(ctrlPtx), (C.double)(ctrlPty), (C.double)(endPtx), (C.double)(endPty))
}

func (this *QPainterPath) CurrentPosition() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QPainterPath_currentPosition(this.h))
}

func (this *QPainterPath) AddRect(rect QRectF) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect))
}

func (this *QPainterPath) AddRect2(x float64, y float64, w float64, h float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QPainterPath) AddEllipse(rect QRectF) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addEllipse(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect))
}

func (this *QPainterPath) AddEllipse2(x float64, y float64, w float64, h float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addEllipse2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QPainterPath) AddEllipse3(center QPointF, rx float64, ry float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addEllipse3(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](center), (C.double)(rx), (C.double)(ry))
}

func (this *QPainterPath) AddText(point QPointF, f *QFont, text string) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(f)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainterPath_addText(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](point), f.cPointer(), text_ms)
}

func (this *QPainterPath) AddText2(x float64, y float64, f *QFont, text string) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(f)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPainterPath_addText2(this.h, (C.double)(x), (C.double)(y), f.cPointer(), text_ms)
}

func (this *QPainterPath) AddPath(path *QPainterPath) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(path)
	C.QPainterPath_addPath(this.h, path.cPointer())
}

func (this *QPainterPath) AddRegion(region *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(region)
	C.QPainterPath_addRegion(this.h, region.cPointer())
}

func (this *QPainterPath) AddRoundedRect(rect QRectF, xRadius float64, yRadius float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRoundedRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainterPath) AddRoundedRect2(x float64, y float64, w float64, h float64, xRadius float64, yRadius float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRoundedRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.double)(xRadius), (C.double)(yRadius))
}

func (this *QPainterPath) AddRoundRect(rect QRectF, xRnd int, yRnd int) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRoundRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect), (C.int)(xRnd), (C.int)(yRnd))
}

func (this *QPainterPath) AddRoundRect2(x float64, y float64, w float64, h float64, xRnd int, yRnd int) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRoundRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xRnd), (C.int)(yRnd))
}

func (this *QPainterPath) AddRoundRect3(rect QRectF, roundness int) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRoundRect3(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect), (C.int)(roundness))
}

func (this *QPainterPath) AddRoundRect4(x float64, y float64, w float64, h float64, roundness int) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRoundRect4(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(roundness))
}

func (this *QPainterPath) ConnectPath(path *QPainterPath) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(path)
	C.QPainterPath_connectPath(this.h, path.cPointer())
}

func (this *QPainterPath) Contains(pt QPointF) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPainterPath_contains(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pt)))
}

func (this *QPainterPath) ContainsWithRect(rect QRectF) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPainterPath_containsWithRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect)))
}

func (this *QPainterPath) Intersects(rect QRectF) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPainterPath_intersects(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect)))
}

func (this *QPainterPath) Translate(dx float64, dy float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_translate(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QPainterPath) TranslateWithOffset(offset QPointF) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_translateWithOffset(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](offset))
}

func (this *QPainterPath) Translated(dx float64, dy float64) *QPainterPath {
	defer runtime.KeepAlive(this)
	_goptr := newQPainterPath(C.QPainterPath_translated(this.h, (C.double)(dx), (C.double)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) TranslatedWithOffset(offset QPointF) *QPainterPath {
	defer runtime.KeepAlive(this)
	_goptr := newQPainterPath(C.QPainterPath_translatedWithOffset(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](offset)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) BoundingRect() QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRectF](C.QPainterPath_boundingRect(this.h))
}

func (this *QPainterPath) ControlPointRect() QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRectF](C.QPainterPath_controlPointRect(this.h))
}

func (this *QPainterPath) FillRule() FillRule {
	defer runtime.KeepAlive(this)
	return (FillRule)(C.QPainterPath_fillRule(this.h))
}

func (this *QPainterPath) SetFillRule(fillRule FillRule) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_setFillRule(this.h, (C.int)(fillRule))
}

func (this *QPainterPath) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPainterPath_isEmpty(this.h))
}

func (this *QPainterPath) ToReversed() *QPainterPath {
	defer runtime.KeepAlive(this)
	_goptr := newQPainterPath(C.QPainterPath_toReversed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) ElementCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPainterPath_elementCount(this.h))
}

func (this *QPainterPath) ElementAt(i int) *QPainterPath__Element {
	defer runtime.KeepAlive(this)
	_goptr := newQPainterPath__Element(C.QPainterPath_elementAt(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) SetElementPositionAt(i int, x float64, y float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_setElementPositionAt(this.h, (C.int)(i), (C.double)(x), (C.double)(y))
}

func (this *QPainterPath) Length() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPath_length(this.h))
}

func (this *QPainterPath) PercentAtLength(t float64) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPath_percentAtLength(this.h, (C.double)(t)))
}

func (this *QPainterPath) PointAtPercent(t float64) QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QPainterPath_pointAtPercent(this.h, (C.double)(t)))
}

func (this *QPainterPath) AngleAtPercent(t float64) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPath_angleAtPercent(this.h, (C.double)(t)))
}

func (this *QPainterPath) SlopeAtPercent(t float64) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPath_slopeAtPercent(this.h, (C.double)(t)))
}

func (this *QPainterPath) IntersectsWithQPainterPath(p *QPainterPath) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QPainterPath_intersectsWithQPainterPath(this.h, p.cPointer()))
}

func (this *QPainterPath) ContainsWithQPainterPath(p *QPainterPath) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QPainterPath_containsWithQPainterPath(this.h, p.cPointer()))
}

func (this *QPainterPath) United(r *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQPainterPath(C.QPainterPath_united(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) Intersected(r *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQPainterPath(C.QPainterPath_intersected(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) Subtracted(r *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQPainterPath(C.QPainterPath_subtracted(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) SubtractedInverted(r *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQPainterPath(C.QPainterPath_subtractedInverted(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) Simplified() *QPainterPath {
	defer runtime.KeepAlive(this)
	_goptr := newQPainterPath(C.QPainterPath_simplified(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorEqual(other *QPainterPath) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QPainterPath_operatorEqual(this.h, other.cPointer()))
}

func (this *QPainterPath) OperatorNotEqual(other *QPainterPath) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QPainterPath_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QPainterPath) OperatorBitwiseAnd(other *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_goptr := newQPainterPath(C.QPainterPath_operatorBitwiseAnd(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorBitwiseOr(other *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_goptr := newQPainterPath(C.QPainterPath_operatorBitwiseOr(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorPlus(other *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_goptr := newQPainterPath(C.QPainterPath_operatorPlus(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorMinus(other *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_goptr := newQPainterPath(C.QPainterPath_operatorMinus(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPainterPath) OperatorBitwiseAndAssign(other *QPainterPath) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPainterPath_operatorBitwiseAndAssign(this.h, other.cPointer())
}

func (this *QPainterPath) OperatorBitwiseOrAssign(other *QPainterPath) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPainterPath_operatorBitwiseOrAssign(this.h, other.cPointer())
}

func (this *QPainterPath) OperatorPlusAssign(other *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_ret := newQPainterPath(C.QPainterPath_operatorPlusAssign(this.h, other.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPainterPath) OperatorMinusAssign(other *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_ret := newQPainterPath(C.QPainterPath_operatorMinusAssign(this.h, other.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPainterPath) AddRoundedRect3(rect QRectF, xRadius float64, yRadius float64, mode SizeMode) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRoundedRect3(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

func (this *QPainterPath) AddRoundedRect4(x float64, y float64, w float64, h float64, xRadius float64, yRadius float64, mode SizeMode) {
	defer runtime.KeepAlive(this)
	C.QPainterPath_addRoundedRect4(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.double)(xRadius), (C.double)(yRadius), (C.int)(mode))
}

// Delete this object from C++ memory.
func (this *QPainterPath) Delete() {
	C.QPainterPath_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPainterPath) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPainterPath_delete((*C.QPainterPath)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QPainterPathStroker struct {
	h  *C.QPainterPathStroker
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPainterPathStroker) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(pen)

	return newQPainterPathStroker(C.QPainterPathStroker_new2(pen.cPointer()))
}

func (this *QPainterPathStroker) SetWidth(width float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPathStroker_setWidth(this.h, (C.double)(width))
}

func (this *QPainterPathStroker) Width() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPathStroker_width(this.h))
}

func (this *QPainterPathStroker) SetCapStyle(style PenCapStyle) {
	defer runtime.KeepAlive(this)
	C.QPainterPathStroker_setCapStyle(this.h, (C.int)(style))
}

func (this *QPainterPathStroker) CapStyle() PenCapStyle {
	defer runtime.KeepAlive(this)
	return (PenCapStyle)(C.QPainterPathStroker_capStyle(this.h))
}

func (this *QPainterPathStroker) SetJoinStyle(style PenJoinStyle) {
	defer runtime.KeepAlive(this)
	C.QPainterPathStroker_setJoinStyle(this.h, (C.int)(style))
}

func (this *QPainterPathStroker) JoinStyle() PenJoinStyle {
	defer runtime.KeepAlive(this)
	return (PenJoinStyle)(C.QPainterPathStroker_joinStyle(this.h))
}

func (this *QPainterPathStroker) SetMiterLimit(length float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPathStroker_setMiterLimit(this.h, (C.double)(length))
}

func (this *QPainterPathStroker) MiterLimit() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPathStroker_miterLimit(this.h))
}

func (this *QPainterPathStroker) SetCurveThreshold(threshold float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPathStroker_setCurveThreshold(this.h, (C.double)(threshold))
}

func (this *QPainterPathStroker) CurveThreshold() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPathStroker_curveThreshold(this.h))
}

func (this *QPainterPathStroker) SetDashPattern(dashPattern PenStyle) {
	defer runtime.KeepAlive(this)
	C.QPainterPathStroker_setDashPattern(this.h, (C.int)(dashPattern))
}

func (this *QPainterPathStroker) SetDashPatternWithDashPattern(dashPattern []float64) {
	defer runtime.KeepAlive(this)
	dashPattern_CArray_ptr := (*C.double)(C.malloc(C.size_t(8 * len(dashPattern))))
	defer C.free(unsafe.Pointer(dashPattern_CArray_ptr))
	dashPattern_CArray := unsafe.Slice(dashPattern_CArray_ptr, len(dashPattern))
	for i := range dashPattern {
		dashPattern_CArray[i] = (C.double)(dashPattern[i])
	}
	dashPattern_ma := C.struct_miqt_array{len: C.size_t(len(dashPattern)), data: unsafe.Pointer(dashPattern_CArray_ptr)}
	C.QPainterPathStroker_setDashPatternWithDashPattern(this.h, dashPattern_ma)
}

func (this *QPainterPathStroker) DashPattern() []float64 {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QPainterPathStroker_dashPattern(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := unsafe.Slice((*C.double)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QPainterPathStroker) SetDashOffset(offset float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPathStroker_setDashOffset(this.h, (C.double)(offset))
}

func (this *QPainterPathStroker) DashOffset() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPathStroker_dashOffset(this.h))
}

func (this *QPainterPathStroker) CreateStroke(path *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(path)
	_goptr := newQPainterPath(C.QPainterPathStroker_createStroke(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPainterPathStroker) Delete() {
	C.QPainterPathStroker_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPainterPathStroker) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPainterPathStroker_delete((*C.QPainterPathStroker)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QPainterPath__Element struct {
	h  *C.QPainterPath__Element
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPainterPath__Element) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

func (this *QPainterPath__Element) X() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPath__Element_x(this.h))
}

func (this *QPainterPath__Element) SetX(x float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath__Element_setX(this.h, (C.double)(x))
}

func (this *QPainterPath__Element) Y() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPainterPath__Element_y(this.h))
}

func (this *QPainterPath__Element) SetY(y float64) {
	defer runtime.KeepAlive(this)
	C.QPainterPath__Element_setY(this.h, (C.double)(y))
}

func (this *QPainterPath__Element) Type() QPainterPath__ElementType {
	defer runtime.KeepAlive(this)
	return (QPainterPath__ElementType)(C.QPainterPath__Element_type(this.h))
}

func (this *QPainterPath__Element) SetType(typeVal QPainterPath__ElementType) {
	defer runtime.KeepAlive(this)
	C.QPainterPath__Element_setType(this.h, (C.int)(typeVal))
}

func (this *QPainterPath__Element) IsMoveTo() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPainterPath__Element_isMoveTo(this.h))
}

func (this *QPainterPath__Element) IsLineTo() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPainterPath__Element_isLineTo(this.h))
}

func (this *QPainterPath__Element) IsCurveTo() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPainterPath__Element_isCurveTo(this.h))
}

func (this *QPainterPath__Element) ToQPointF() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QPainterPath__Element_ToQPointF(this.h))
}

func (this *QPainterPath__Element) OperatorEqual(e *QPainterPath__Element) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(e)
	return (bool)(C.QPainterPath__Element_operatorEqual(this.h, e.cPointer()))
}

func (this *QPainterPath__Element) OperatorNotEqual(e *QPainterPath__Element) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(e)
	return (bool)(C.QPainterPath__Element_operatorNotEqual(this.h, e.cPointer()))
}

// Delete this object from C++ memory.
func (this *QPainterPath__Element) Delete() {
	C.QPainterPath__Element_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPainterPath__Element) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPainterPath__Element_delete((*C.QPainterPath__Element)(gc[0]))
	})
	this.miqtSetGC(gc)
}
