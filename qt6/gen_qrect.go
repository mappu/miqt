package qt6

/*

#include "gen_qrect.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRect struct {
	h  *C.QRect
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QRect) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QRect) cPointer() *C.QRect {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRect) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRect constructs the type using only CGO pointers.
func newQRect(h *C.QRect) *QRect {
	if h == nil {
		return nil
	}

	return &QRect{h: h}
}

// UnsafeNewQRect constructs the type using only unsafe pointers.
func UnsafeNewQRect(h unsafe.Pointer) *QRect {
	return newQRect((*C.QRect)(h))
}

// NewQRect constructs a new QRect object.
func NewQRect() *QRect {

	return newQRect(C.QRect_new())
}

// NewQRect2 constructs a new QRect object.
func NewQRect2(topleft *QPoint, bottomright *QPoint) *QRect {
	defer runtime.KeepAlive(topleft)
	defer runtime.KeepAlive(bottomright)

	return newQRect(C.QRect_new2(topleft.cPointer(), bottomright.cPointer()))
}

// NewQRect3 constructs a new QRect object.
func NewQRect3(topleft *QPoint, size *QSize) *QRect {
	defer runtime.KeepAlive(topleft)
	defer runtime.KeepAlive(size)

	return newQRect(C.QRect_new3(topleft.cPointer(), size.cPointer()))
}

// NewQRect4 constructs a new QRect object.
func NewQRect4(left int, top int, width int, height int) *QRect {

	return newQRect(C.QRect_new4((C.int)(left), (C.int)(top), (C.int)(width), (C.int)(height)))
}

// NewQRect5 constructs a new QRect object.
func NewQRect5(param1 *QRect) *QRect {
	defer runtime.KeepAlive(param1)

	return newQRect(C.QRect_new5(param1.cPointer()))
}

func (this *QRect) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRect_isNull(this.h))
}

func (this *QRect) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRect_isEmpty(this.h))
}

func (this *QRect) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRect_isValid(this.h))
}

func (this *QRect) Left() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRect_left(this.h))
}

func (this *QRect) Top() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRect_top(this.h))
}

func (this *QRect) Right() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRect_right(this.h))
}

func (this *QRect) Bottom() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRect_bottom(this.h))
}

func (this *QRect) Normalized() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QRect_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) X() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRect_x(this.h))
}

func (this *QRect) Y() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRect_y(this.h))
}

func (this *QRect) SetLeft(pos int) {
	defer runtime.KeepAlive(this)
	C.QRect_setLeft(this.h, (C.int)(pos))
}

func (this *QRect) SetTop(pos int) {
	defer runtime.KeepAlive(this)
	C.QRect_setTop(this.h, (C.int)(pos))
}

func (this *QRect) SetRight(pos int) {
	defer runtime.KeepAlive(this)
	C.QRect_setRight(this.h, (C.int)(pos))
}

func (this *QRect) SetBottom(pos int) {
	defer runtime.KeepAlive(this)
	C.QRect_setBottom(this.h, (C.int)(pos))
}

func (this *QRect) SetX(x int) {
	defer runtime.KeepAlive(this)
	C.QRect_setX(this.h, (C.int)(x))
}

func (this *QRect) SetY(y int) {
	defer runtime.KeepAlive(this)
	C.QRect_setY(this.h, (C.int)(y))
}

func (this *QRect) SetTopLeft(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_setTopLeft(this.h, p.cPointer())
}

func (this *QRect) SetBottomRight(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_setBottomRight(this.h, p.cPointer())
}

func (this *QRect) SetTopRight(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_setTopRight(this.h, p.cPointer())
}

func (this *QRect) SetBottomLeft(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_setBottomLeft(this.h, p.cPointer())
}

func (this *QRect) TopLeft() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QRect_topLeft(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) BottomRight() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QRect_bottomRight(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) TopRight() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QRect_topRight(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) BottomLeft() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QRect_bottomLeft(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) Center() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QRect_center(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) MoveLeft(pos int) {
	defer runtime.KeepAlive(this)
	C.QRect_moveLeft(this.h, (C.int)(pos))
}

func (this *QRect) MoveTop(pos int) {
	defer runtime.KeepAlive(this)
	C.QRect_moveTop(this.h, (C.int)(pos))
}

func (this *QRect) MoveRight(pos int) {
	defer runtime.KeepAlive(this)
	C.QRect_moveRight(this.h, (C.int)(pos))
}

func (this *QRect) MoveBottom(pos int) {
	defer runtime.KeepAlive(this)
	C.QRect_moveBottom(this.h, (C.int)(pos))
}

func (this *QRect) MoveTopLeft(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_moveTopLeft(this.h, p.cPointer())
}

func (this *QRect) MoveBottomRight(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_moveBottomRight(this.h, p.cPointer())
}

func (this *QRect) MoveTopRight(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_moveTopRight(this.h, p.cPointer())
}

func (this *QRect) MoveBottomLeft(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_moveBottomLeft(this.h, p.cPointer())
}

func (this *QRect) MoveCenter(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_moveCenter(this.h, p.cPointer())
}

func (this *QRect) Translate(dx int, dy int) {
	defer runtime.KeepAlive(this)
	C.QRect_translate(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QRect) TranslateWithQPoint(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_translateWithQPoint(this.h, p.cPointer())
}

func (this *QRect) Translated(dx int, dy int) *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QRect_translated(this.h, (C.int)(dx), (C.int)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) TranslatedWithQPoint(p *QPoint) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_goptr := newQRect(C.QRect_translatedWithQPoint(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) Transposed() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QRect_transposed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) MoveTo(x int, t int) {
	defer runtime.KeepAlive(this)
	C.QRect_moveTo(this.h, (C.int)(x), (C.int)(t))
}

func (this *QRect) MoveToWithQPoint(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRect_moveToWithQPoint(this.h, p.cPointer())
}

func (this *QRect) SetRect(x int, y int, w int, h int) {
	defer runtime.KeepAlive(this)
	C.QRect_setRect(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QRect) GetRect(x *int, y *int, w *int, h *int) {
	defer runtime.KeepAlive(this)
	C.QRect_getRect(this.h, (*C.int)(unsafe.Pointer(x)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(w)), (*C.int)(unsafe.Pointer(h)))
}

func (this *QRect) SetCoords(x1 int, y1 int, x2 int, y2 int) {
	defer runtime.KeepAlive(this)
	C.QRect_setCoords(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this *QRect) GetCoords(x1 *int, y1 *int, x2 *int, y2 *int) {
	defer runtime.KeepAlive(this)
	C.QRect_getCoords(this.h, (*C.int)(unsafe.Pointer(x1)), (*C.int)(unsafe.Pointer(y1)), (*C.int)(unsafe.Pointer(x2)), (*C.int)(unsafe.Pointer(y2)))
}

func (this *QRect) Adjust(x1 int, y1 int, x2 int, y2 int) {
	defer runtime.KeepAlive(this)
	C.QRect_adjust(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this *QRect) Adjusted(x1 int, y1 int, x2 int, y2 int) *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QRect_adjusted(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) Size() *QSize {
	defer runtime.KeepAlive(this)
	_goptr := newQSize(C.QRect_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) Width() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRect_width(this.h))
}

func (this *QRect) Height() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRect_height(this.h))
}

func (this *QRect) SetWidth(w int) {
	defer runtime.KeepAlive(this)
	C.QRect_setWidth(this.h, (C.int)(w))
}

func (this *QRect) SetHeight(h int) {
	defer runtime.KeepAlive(this)
	C.QRect_setHeight(this.h, (C.int)(h))
}

func (this *QRect) SetSize(s *QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(s)
	C.QRect_setSize(this.h, s.cPointer())
}

func (this *QRect) OperatorBitwiseOr(r *QRect) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRect(C.QRect_operatorBitwiseOr(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) OperatorBitwiseAnd(r *QRect) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRect(C.QRect_operatorBitwiseAnd(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) OperatorBitwiseOrAssign(r *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QRect_operatorBitwiseOrAssign(this.h, r.cPointer())
}

func (this *QRect) OperatorBitwiseAndAssign(r *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QRect_operatorBitwiseAndAssign(this.h, r.cPointer())
}

func (this *QRect) Contains(r *QRect) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRect_contains(this.h, r.cPointer()))
}

func (this *QRect) ContainsWithQPoint(p *QPoint) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QRect_containsWithQPoint(this.h, p.cPointer()))
}

func (this *QRect) Contains2(x int, y int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRect_contains2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QRect) Contains3(x int, y int, proper bool) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRect_contains3(this.h, (C.int)(x), (C.int)(y), (C.bool)(proper)))
}

func (this *QRect) United(other *QRect) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_goptr := newQRect(C.QRect_united(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) Intersected(other *QRect) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_goptr := newQRect(C.QRect_intersected(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) Intersects(r *QRect) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRect_intersects(this.h, r.cPointer()))
}

func (this *QRect) MarginsAdded(margins *QMargins) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_goptr := newQRect(C.QRect_marginsAdded(this.h, margins.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) MarginsRemoved(margins *QMargins) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_goptr := newQRect(C.QRect_marginsRemoved(this.h, margins.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) OperatorPlusAssign(margins *QMargins) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_ret := newQRect(C.QRect_operatorPlusAssign(this.h, margins.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QRect) OperatorMinusAssign(margins *QMargins) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_ret := newQRect(C.QRect_operatorMinusAssign(this.h, margins.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func QRect_Span(p1 *QPoint, p2 *QPoint) *QRect {
	defer runtime.KeepAlive(p1)
	defer runtime.KeepAlive(p2)
	_goptr := newQRect(C.QRect_span(p1.cPointer(), p2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) ToRectF() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QRect_toRectF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRect) OperatorAssign(param1 *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QRect_operatorAssign(this.h, param1.cPointer())
}

func (this *QRect) Contains4(r *QRect, proper bool) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRect_contains4(this.h, r.cPointer(), (C.bool)(proper)))
}

func (this *QRect) Contains5(p *QPoint, proper bool) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QRect_contains5(this.h, p.cPointer(), (C.bool)(proper)))
}

// Delete this object from C++ memory.
func (this *QRect) Delete() {
	C.QRect_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QRect) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QRect_delete((*C.QRect)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QRectF struct {
	h  *C.QRectF
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QRectF) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QRectF) cPointer() *C.QRectF {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRectF) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRectF constructs the type using only CGO pointers.
func newQRectF(h *C.QRectF) *QRectF {
	if h == nil {
		return nil
	}

	return &QRectF{h: h}
}

// UnsafeNewQRectF constructs the type using only unsafe pointers.
func UnsafeNewQRectF(h unsafe.Pointer) *QRectF {
	return newQRectF((*C.QRectF)(h))
}

// NewQRectF constructs a new QRectF object.
func NewQRectF() *QRectF {

	return newQRectF(C.QRectF_new())
}

// NewQRectF2 constructs a new QRectF object.
func NewQRectF2(topleft *QPointF, size *QSizeF) *QRectF {
	defer runtime.KeepAlive(topleft)
	defer runtime.KeepAlive(size)

	return newQRectF(C.QRectF_new2(topleft.cPointer(), size.cPointer()))
}

// NewQRectF3 constructs a new QRectF object.
func NewQRectF3(topleft *QPointF, bottomRight *QPointF) *QRectF {
	defer runtime.KeepAlive(topleft)
	defer runtime.KeepAlive(bottomRight)

	return newQRectF(C.QRectF_new3(topleft.cPointer(), bottomRight.cPointer()))
}

// NewQRectF4 constructs a new QRectF object.
func NewQRectF4(left float64, top float64, width float64, height float64) *QRectF {

	return newQRectF(C.QRectF_new4((C.double)(left), (C.double)(top), (C.double)(width), (C.double)(height)))
}

// NewQRectF5 constructs a new QRectF object.
func NewQRectF5(rect *QRect) *QRectF {
	defer runtime.KeepAlive(rect)

	return newQRectF(C.QRectF_new5(rect.cPointer()))
}

// NewQRectF6 constructs a new QRectF object.
func NewQRectF6(param1 *QRectF) *QRectF {
	defer runtime.KeepAlive(param1)

	return newQRectF(C.QRectF_new6(param1.cPointer()))
}

func (this *QRectF) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRectF_isNull(this.h))
}

func (this *QRectF) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRectF_isEmpty(this.h))
}

func (this *QRectF) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRectF_isValid(this.h))
}

func (this *QRectF) Normalized() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QRectF_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) Left() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRectF_left(this.h))
}

func (this *QRectF) Top() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRectF_top(this.h))
}

func (this *QRectF) Right() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRectF_right(this.h))
}

func (this *QRectF) Bottom() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRectF_bottom(this.h))
}

func (this *QRectF) X() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRectF_x(this.h))
}

func (this *QRectF) Y() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRectF_y(this.h))
}

func (this *QRectF) SetLeft(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setLeft(this.h, (C.double)(pos))
}

func (this *QRectF) SetTop(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setTop(this.h, (C.double)(pos))
}

func (this *QRectF) SetRight(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setRight(this.h, (C.double)(pos))
}

func (this *QRectF) SetBottom(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setBottom(this.h, (C.double)(pos))
}

func (this *QRectF) SetX(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setX(this.h, (C.double)(pos))
}

func (this *QRectF) SetY(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setY(this.h, (C.double)(pos))
}

func (this *QRectF) TopLeft() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QRectF_topLeft(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) BottomRight() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QRectF_bottomRight(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) TopRight() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QRectF_topRight(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) BottomLeft() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QRectF_bottomLeft(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) Center() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QRectF_center(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) SetTopLeft(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_setTopLeft(this.h, p.cPointer())
}

func (this *QRectF) SetBottomRight(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_setBottomRight(this.h, p.cPointer())
}

func (this *QRectF) SetTopRight(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_setTopRight(this.h, p.cPointer())
}

func (this *QRectF) SetBottomLeft(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_setBottomLeft(this.h, p.cPointer())
}

func (this *QRectF) MoveLeft(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_moveLeft(this.h, (C.double)(pos))
}

func (this *QRectF) MoveTop(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_moveTop(this.h, (C.double)(pos))
}

func (this *QRectF) MoveRight(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_moveRight(this.h, (C.double)(pos))
}

func (this *QRectF) MoveBottom(pos float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_moveBottom(this.h, (C.double)(pos))
}

func (this *QRectF) MoveTopLeft(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_moveTopLeft(this.h, p.cPointer())
}

func (this *QRectF) MoveBottomRight(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_moveBottomRight(this.h, p.cPointer())
}

func (this *QRectF) MoveTopRight(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_moveTopRight(this.h, p.cPointer())
}

func (this *QRectF) MoveBottomLeft(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_moveBottomLeft(this.h, p.cPointer())
}

func (this *QRectF) MoveCenter(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_moveCenter(this.h, p.cPointer())
}

func (this *QRectF) Translate(dx float64, dy float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_translate(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QRectF) TranslateWithQPointF(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_translateWithQPointF(this.h, p.cPointer())
}

func (this *QRectF) Translated(dx float64, dy float64) *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QRectF_translated(this.h, (C.double)(dx), (C.double)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) TranslatedWithQPointF(p *QPointF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_goptr := newQRectF(C.QRectF_translatedWithQPointF(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) Transposed() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QRectF_transposed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) MoveTo(x float64, y float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_moveTo(this.h, (C.double)(x), (C.double)(y))
}

func (this *QRectF) MoveToWithQPointF(p *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRectF_moveToWithQPointF(this.h, p.cPointer())
}

func (this *QRectF) SetRect(x float64, y float64, w float64, h float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setRect(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QRectF) GetRect(x *float64, y *float64, w *float64, h *float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_getRect(this.h, (*C.double)(unsafe.Pointer(x)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(w)), (*C.double)(unsafe.Pointer(h)))
}

func (this *QRectF) SetCoords(x1 float64, y1 float64, x2 float64, y2 float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setCoords(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this *QRectF) GetCoords(x1 *float64, y1 *float64, x2 *float64, y2 *float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_getCoords(this.h, (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(y1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(y2)))
}

func (this *QRectF) Adjust(x1 float64, y1 float64, x2 float64, y2 float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_adjust(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this *QRectF) Adjusted(x1 float64, y1 float64, x2 float64, y2 float64) *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QRectF_adjusted(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) Size() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QRectF_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) Width() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRectF_width(this.h))
}

func (this *QRectF) Height() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRectF_height(this.h))
}

func (this *QRectF) SetWidth(w float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setWidth(this.h, (C.double)(w))
}

func (this *QRectF) SetHeight(h float64) {
	defer runtime.KeepAlive(this)
	C.QRectF_setHeight(this.h, (C.double)(h))
}

func (this *QRectF) SetSize(s *QSizeF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(s)
	C.QRectF_setSize(this.h, s.cPointer())
}

func (this *QRectF) OperatorBitwiseOr(r *QRectF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRectF(C.QRectF_operatorBitwiseOr(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) OperatorBitwiseAnd(r *QRectF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRectF(C.QRectF_operatorBitwiseAnd(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) OperatorBitwiseOrAssign(r *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QRectF_operatorBitwiseOrAssign(this.h, r.cPointer())
}

func (this *QRectF) OperatorBitwiseAndAssign(r *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QRectF_operatorBitwiseAndAssign(this.h, r.cPointer())
}

func (this *QRectF) Contains(r *QRectF) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRectF_contains(this.h, r.cPointer()))
}

func (this *QRectF) ContainsWithQPointF(p *QPointF) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QRectF_containsWithQPointF(this.h, p.cPointer()))
}

func (this *QRectF) Contains2(x float64, y float64) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRectF_contains2(this.h, (C.double)(x), (C.double)(y)))
}

func (this *QRectF) United(other *QRectF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_goptr := newQRectF(C.QRectF_united(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) Intersected(other *QRectF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_goptr := newQRectF(C.QRectF_intersected(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) Intersects(r *QRectF) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRectF_intersects(this.h, r.cPointer()))
}

func (this *QRectF) MarginsAdded(margins *QMarginsF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_goptr := newQRectF(C.QRectF_marginsAdded(this.h, margins.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) MarginsRemoved(margins *QMarginsF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_goptr := newQRectF(C.QRectF_marginsRemoved(this.h, margins.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) OperatorPlusAssign(margins *QMarginsF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_ret := newQRectF(C.QRectF_operatorPlusAssign(this.h, margins.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QRectF) OperatorMinusAssign(margins *QMarginsF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_ret := newQRectF(C.QRectF_operatorMinusAssign(this.h, margins.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QRectF) ToRect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QRectF_toRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) ToAlignedRect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QRectF_toAlignedRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRectF) OperatorAssign(param1 *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QRectF_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QRectF) Delete() {
	C.QRectF_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QRectF) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QRectF_delete((*C.QRectF)(gc[0]))
	})
	this.miqtSetGC(gc)
}
