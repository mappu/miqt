package qt6

/*

#include "gen_qrect.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"unsafe"
)

// QRect is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQRect().
type QRect struct {
	x1 int32
	y1 int32
	x2 int32
	y2 int32
}

func (this *QRect) cPointer() *C.QRect {
	return (*C.QRect)(unsafe.Pointer(this))
}

func (this *QRect) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQRect views C++ memory as this type, without copying it.
func newQRect(h *C.QRect) *QRect {
	return (*QRect)(unsafe.Pointer(h))
}

// UnsafeNewQRect views C++ memory as this type, without copying it.
func UnsafeNewQRect(h unsafe.Pointer) *QRect {
	return (*QRect)(h)
}

// NewQRect constructs a new QRect object.
func NewQRect() QRect {

	return libmiqt.ValueCast[QRect](C.QRect_new())
}

// NewQRect2 constructs a new QRect object.
func NewQRect2(topleft QPoint, bottomright QPoint) QRect {

	return libmiqt.ValueCast[QRect](C.QRect_new2(libmiqt.ValueCast[C.struct_miqt_qpoint](topleft), libmiqt.ValueCast[C.struct_miqt_qpoint](bottomright)))
}

// NewQRect3 constructs a new QRect object.
func NewQRect3(topleft QPoint, size QSize) QRect {

	return libmiqt.ValueCast[QRect](C.QRect_new3(libmiqt.ValueCast[C.struct_miqt_qpoint](topleft), libmiqt.ValueCast[C.struct_miqt_qsize](size)))
}

// NewQRect4 constructs a new QRect object.
func NewQRect4(left int, top int, width int, height int) QRect {

	return libmiqt.ValueCast[QRect](C.QRect_new4((C.int)(left), (C.int)(top), (C.int)(width), (C.int)(height)))
}

// NewQRect5 constructs a new QRect object.
func NewQRect5(param1 QRect) QRect {

	return libmiqt.ValueCast[QRect](C.QRect_new5(libmiqt.ValueCast[C.struct_miqt_qrect](param1)))
}

func (this QRect) IsNull() bool {
	return (bool)(C.QRect_isNull(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) IsEmpty() bool {
	return (bool)(C.QRect_isEmpty(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) IsValid() bool {
	return (bool)(C.QRect_isValid(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) Left() int {
	return (int)(C.QRect_left(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) Top() int {
	return (int)(C.QRect_top(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) Right() int {
	return (int)(C.QRect_right(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) Bottom() int {
	return (int)(C.QRect_bottom(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) Normalized() QRect {
	return libmiqt.ValueCast[QRect](C.QRect_normalized(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) X() int {
	return (int)(C.QRect_x(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) Y() int {
	return (int)(C.QRect_y(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this *QRect) SetLeft(pos int) {
	C.QRect_setLeft(this.cPointer(), (C.int)(pos))
}

func (this *QRect) SetTop(pos int) {
	C.QRect_setTop(this.cPointer(), (C.int)(pos))
}

func (this *QRect) SetRight(pos int) {
	C.QRect_setRight(this.cPointer(), (C.int)(pos))
}

func (this *QRect) SetBottom(pos int) {
	C.QRect_setBottom(this.cPointer(), (C.int)(pos))
}

func (this *QRect) SetX(x int) {
	C.QRect_setX(this.cPointer(), (C.int)(x))
}

func (this *QRect) SetY(y int) {
	C.QRect_setY(this.cPointer(), (C.int)(y))
}

func (this *QRect) SetTopLeft(p QPoint) {
	C.QRect_setTopLeft(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QRect) SetBottomRight(p QPoint) {
	C.QRect_setBottomRight(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QRect) SetTopRight(p QPoint) {
	C.QRect_setTopRight(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QRect) SetBottomLeft(p QPoint) {
	C.QRect_setBottomLeft(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this QRect) TopLeft() QPoint {
	return libmiqt.ValueCast[QPoint](C.QRect_topLeft(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) BottomRight() QPoint {
	return libmiqt.ValueCast[QPoint](C.QRect_bottomRight(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) TopRight() QPoint {
	return libmiqt.ValueCast[QPoint](C.QRect_topRight(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) BottomLeft() QPoint {
	return libmiqt.ValueCast[QPoint](C.QRect_bottomLeft(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) Center() QPoint {
	return libmiqt.ValueCast[QPoint](C.QRect_center(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this *QRect) MoveLeft(pos int) {
	C.QRect_moveLeft(this.cPointer(), (C.int)(pos))
}

func (this *QRect) MoveTop(pos int) {
	C.QRect_moveTop(this.cPointer(), (C.int)(pos))
}

func (this *QRect) MoveRight(pos int) {
	C.QRect_moveRight(this.cPointer(), (C.int)(pos))
}

func (this *QRect) MoveBottom(pos int) {
	C.QRect_moveBottom(this.cPointer(), (C.int)(pos))
}

func (this *QRect) MoveTopLeft(p QPoint) {
	C.QRect_moveTopLeft(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QRect) MoveBottomRight(p QPoint) {
	C.QRect_moveBottomRight(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QRect) MoveTopRight(p QPoint) {
	C.QRect_moveTopRight(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QRect) MoveBottomLeft(p QPoint) {
	C.QRect_moveBottomLeft(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QRect) MoveCenter(p QPoint) {
	C.QRect_moveCenter(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QRect) Translate(dx int, dy int) {
	C.QRect_translate(this.cPointer(), (C.int)(dx), (C.int)(dy))
}

func (this *QRect) TranslateWithQPoint(p QPoint) {
	C.QRect_translateWithQPoint(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this QRect) Translated(dx int, dy int) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_translated(libmiqt.ValueCast[C.struct_miqt_qrect](this), (C.int)(dx), (C.int)(dy)))
}

func (this QRect) TranslatedWithQPoint(p QPoint) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_translatedWithQPoint(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qpoint](p)))
}

func (this QRect) Transposed() QRect {
	return libmiqt.ValueCast[QRect](C.QRect_transposed(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this *QRect) MoveTo(x int, t int) {
	C.QRect_moveTo(this.cPointer(), (C.int)(x), (C.int)(t))
}

func (this *QRect) MoveToWithQPoint(p QPoint) {
	C.QRect_moveToWithQPoint(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QRect) SetRect(x int, y int, w int, h int) {
	C.QRect_setRect(this.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this QRect) GetRect(x *int, y *int, w *int, h *int) {
	C.QRect_getRect(libmiqt.ValueCast[C.struct_miqt_qrect](this), (*C.int)(unsafe.Pointer(x)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(w)), (*C.int)(unsafe.Pointer(h)))
}

func (this *QRect) SetCoords(x1 int, y1 int, x2 int, y2 int) {
	C.QRect_setCoords(this.cPointer(), (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this QRect) GetCoords(x1 *int, y1 *int, x2 *int, y2 *int) {
	C.QRect_getCoords(libmiqt.ValueCast[C.struct_miqt_qrect](this), (*C.int)(unsafe.Pointer(x1)), (*C.int)(unsafe.Pointer(y1)), (*C.int)(unsafe.Pointer(x2)), (*C.int)(unsafe.Pointer(y2)))
}

func (this *QRect) Adjust(x1 int, y1 int, x2 int, y2 int) {
	C.QRect_adjust(this.cPointer(), (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this QRect) Adjusted(x1 int, y1 int, x2 int, y2 int) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_adjusted(libmiqt.ValueCast[C.struct_miqt_qrect](this), (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2)))
}

func (this QRect) Size() QSize {
	return libmiqt.ValueCast[QSize](C.QRect_size(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) Width() int {
	return (int)(C.QRect_width(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this QRect) Height() int {
	return (int)(C.QRect_height(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this *QRect) SetWidth(w int) {
	C.QRect_setWidth(this.cPointer(), (C.int)(w))
}

func (this *QRect) SetHeight(h int) {
	C.QRect_setHeight(this.cPointer(), (C.int)(h))
}

func (this *QRect) SetSize(s QSize) {
	C.QRect_setSize(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsize](s))
}

func (this QRect) OperatorBitwiseOr(r QRect) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_operatorBitwiseOr(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qrect](r)))
}

func (this QRect) OperatorBitwiseAnd(r QRect) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_operatorBitwiseAnd(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qrect](r)))
}

func (this *QRect) OperatorBitwiseOrAssign(r QRect) {
	C.QRect_operatorBitwiseOrAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrect](r))
}

func (this *QRect) OperatorBitwiseAndAssign(r QRect) {
	C.QRect_operatorBitwiseAndAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrect](r))
}

func (this QRect) Contains(r QRect) bool {
	return (bool)(C.QRect_contains(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qrect](r)))
}

func (this QRect) ContainsWithQPoint(p QPoint) bool {
	return (bool)(C.QRect_containsWithQPoint(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qpoint](p)))
}

func (this QRect) Contains2(x int, y int) bool {
	return (bool)(C.QRect_contains2(libmiqt.ValueCast[C.struct_miqt_qrect](this), (C.int)(x), (C.int)(y)))
}

func (this QRect) Contains3(x int, y int, proper bool) bool {
	return (bool)(C.QRect_contains3(libmiqt.ValueCast[C.struct_miqt_qrect](this), (C.int)(x), (C.int)(y), (C.bool)(proper)))
}

func (this QRect) United(other QRect) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_united(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qrect](other)))
}

func (this QRect) Intersected(other QRect) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_intersected(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qrect](other)))
}

func (this QRect) Intersects(r QRect) bool {
	return (bool)(C.QRect_intersects(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qrect](r)))
}

func (this QRect) MarginsAdded(margins QMargins) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_marginsAdded(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qmargins](margins)))
}

func (this QRect) MarginsRemoved(margins QMargins) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_marginsRemoved(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qmargins](margins)))
}

func (this *QRect) OperatorPlusAssign(margins QMargins) *QRect {
	return newQRect(C.QRect_operatorPlusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmargins](margins)))
}

func (this *QRect) OperatorMinusAssign(margins QMargins) *QRect {
	return newQRect(C.QRect_operatorMinusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmargins](margins)))
}

func QRect_Span(p1 QPoint, p2 QPoint) QRect {
	return libmiqt.ValueCast[QRect](C.QRect_span(libmiqt.ValueCast[C.struct_miqt_qpoint](p1), libmiqt.ValueCast[C.struct_miqt_qpoint](p2)))
}

func (this QRect) ToRectF() QRectF {
	return libmiqt.ValueCast[QRectF](C.QRect_toRectF(libmiqt.ValueCast[C.struct_miqt_qrect](this)))
}

func (this *QRect) OperatorAssign(param1 QRect) {
	C.QRect_operatorAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrect](param1))
}

func (this QRect) Contains4(r QRect, proper bool) bool {
	return (bool)(C.QRect_contains4(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qrect](r), (C.bool)(proper)))
}

func (this QRect) Contains5(p QPoint, proper bool) bool {
	return (bool)(C.QRect_contains5(libmiqt.ValueCast[C.struct_miqt_qrect](this), libmiqt.ValueCast[C.struct_miqt_qpoint](p), (C.bool)(proper)))
}

// QRectF is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQRectF().
type QRectF struct {
	xp float64
	yp float64
	w  float64
	h  float64
}

func (this *QRectF) cPointer() *C.QRectF {
	return (*C.QRectF)(unsafe.Pointer(this))
}

func (this *QRectF) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQRectF views C++ memory as this type, without copying it.
func newQRectF(h *C.QRectF) *QRectF {
	return (*QRectF)(unsafe.Pointer(h))
}

// UnsafeNewQRectF views C++ memory as this type, without copying it.
func UnsafeNewQRectF(h unsafe.Pointer) *QRectF {
	return (*QRectF)(h)
}

// NewQRectF constructs a new QRectF object.
func NewQRectF() QRectF {

	return libmiqt.ValueCast[QRectF](C.QRectF_new())
}

// NewQRectF2 constructs a new QRectF object.
func NewQRectF2(topleft QPointF, size QSizeF) QRectF {

	return libmiqt.ValueCast[QRectF](C.QRectF_new2(libmiqt.ValueCast[C.struct_miqt_qpointf](topleft), libmiqt.ValueCast[C.struct_miqt_qsizef](size)))
}

// NewQRectF3 constructs a new QRectF object.
func NewQRectF3(topleft QPointF, bottomRight QPointF) QRectF {

	return libmiqt.ValueCast[QRectF](C.QRectF_new3(libmiqt.ValueCast[C.struct_miqt_qpointf](topleft), libmiqt.ValueCast[C.struct_miqt_qpointf](bottomRight)))
}

// NewQRectF4 constructs a new QRectF object.
func NewQRectF4(left float64, top float64, width float64, height float64) QRectF {

	return libmiqt.ValueCast[QRectF](C.QRectF_new4((C.double)(left), (C.double)(top), (C.double)(width), (C.double)(height)))
}

// NewQRectF5 constructs a new QRectF object.
func NewQRectF5(rect QRect) QRectF {

	return libmiqt.ValueCast[QRectF](C.QRectF_new5(libmiqt.ValueCast[C.struct_miqt_qrect](rect)))
}

// NewQRectF6 constructs a new QRectF object.
func NewQRectF6(param1 QRectF) QRectF {

	return libmiqt.ValueCast[QRectF](C.QRectF_new6(libmiqt.ValueCast[C.struct_miqt_qrectf](param1)))
}

func (this QRectF) IsNull() bool {
	return (bool)(C.QRectF_isNull(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) IsEmpty() bool {
	return (bool)(C.QRectF_isEmpty(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) IsValid() bool {
	return (bool)(C.QRectF_isValid(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) Normalized() QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_normalized(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) Left() float64 {
	return (float64)(C.QRectF_left(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) Top() float64 {
	return (float64)(C.QRectF_top(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) Right() float64 {
	return (float64)(C.QRectF_right(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) Bottom() float64 {
	return (float64)(C.QRectF_bottom(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) X() float64 {
	return (float64)(C.QRectF_x(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) Y() float64 {
	return (float64)(C.QRectF_y(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this *QRectF) SetLeft(pos float64) {
	C.QRectF_setLeft(this.cPointer(), (C.double)(pos))
}

func (this *QRectF) SetTop(pos float64) {
	C.QRectF_setTop(this.cPointer(), (C.double)(pos))
}

func (this *QRectF) SetRight(pos float64) {
	C.QRectF_setRight(this.cPointer(), (C.double)(pos))
}

func (this *QRectF) SetBottom(pos float64) {
	C.QRectF_setBottom(this.cPointer(), (C.double)(pos))
}

func (this *QRectF) SetX(pos float64) {
	C.QRectF_setX(this.cPointer(), (C.double)(pos))
}

func (this *QRectF) SetY(pos float64) {
	C.QRectF_setY(this.cPointer(), (C.double)(pos))
}

func (this QRectF) TopLeft() QPointF {
	return libmiqt.ValueCast[QPointF](C.QRectF_topLeft(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) BottomRight() QPointF {
	return libmiqt.ValueCast[QPointF](C.QRectF_bottomRight(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) TopRight() QPointF {
	return libmiqt.ValueCast[QPointF](C.QRectF_topRight(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) BottomLeft() QPointF {
	return libmiqt.ValueCast[QPointF](C.QRectF_bottomLeft(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) Center() QPointF {
	return libmiqt.ValueCast[QPointF](C.QRectF_center(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this *QRectF) SetTopLeft(p QPointF) {
	C.QRectF_setTopLeft(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) SetBottomRight(p QPointF) {
	C.QRectF_setBottomRight(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) SetTopRight(p QPointF) {
	C.QRectF_setTopRight(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) SetBottomLeft(p QPointF) {
	C.QRectF_setBottomLeft(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) MoveLeft(pos float64) {
	C.QRectF_moveLeft(this.cPointer(), (C.double)(pos))
}

func (this *QRectF) MoveTop(pos float64) {
	C.QRectF_moveTop(this.cPointer(), (C.double)(pos))
}

func (this *QRectF) MoveRight(pos float64) {
	C.QRectF_moveRight(this.cPointer(), (C.double)(pos))
}

func (this *QRectF) MoveBottom(pos float64) {
	C.QRectF_moveBottom(this.cPointer(), (C.double)(pos))
}

func (this *QRectF) MoveTopLeft(p QPointF) {
	C.QRectF_moveTopLeft(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) MoveBottomRight(p QPointF) {
	C.QRectF_moveBottomRight(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) MoveTopRight(p QPointF) {
	C.QRectF_moveTopRight(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) MoveBottomLeft(p QPointF) {
	C.QRectF_moveBottomLeft(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) MoveCenter(p QPointF) {
	C.QRectF_moveCenter(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) Translate(dx float64, dy float64) {
	C.QRectF_translate(this.cPointer(), (C.double)(dx), (C.double)(dy))
}

func (this *QRectF) TranslateWithQPointF(p QPointF) {
	C.QRectF_translateWithQPointF(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this QRectF) Translated(dx float64, dy float64) QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_translated(libmiqt.ValueCast[C.struct_miqt_qrectf](this), (C.double)(dx), (C.double)(dy)))
}

func (this QRectF) TranslatedWithQPointF(p QPointF) QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_translatedWithQPointF(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qpointf](p)))
}

func (this QRectF) Transposed() QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_transposed(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this *QRectF) MoveTo(x float64, y float64) {
	C.QRectF_moveTo(this.cPointer(), (C.double)(x), (C.double)(y))
}

func (this *QRectF) MoveToWithQPointF(p QPointF) {
	C.QRectF_moveToWithQPointF(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QRectF) SetRect(x float64, y float64, w float64, h float64) {
	C.QRectF_setRect(this.cPointer(), (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this QRectF) GetRect(x *float64, y *float64, w *float64, h *float64) {
	C.QRectF_getRect(libmiqt.ValueCast[C.struct_miqt_qrectf](this), (*C.double)(unsafe.Pointer(x)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(w)), (*C.double)(unsafe.Pointer(h)))
}

func (this *QRectF) SetCoords(x1 float64, y1 float64, x2 float64, y2 float64) {
	C.QRectF_setCoords(this.cPointer(), (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this QRectF) GetCoords(x1 *float64, y1 *float64, x2 *float64, y2 *float64) {
	C.QRectF_getCoords(libmiqt.ValueCast[C.struct_miqt_qrectf](this), (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(y1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(y2)))
}

func (this *QRectF) Adjust(x1 float64, y1 float64, x2 float64, y2 float64) {
	C.QRectF_adjust(this.cPointer(), (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this QRectF) Adjusted(x1 float64, y1 float64, x2 float64, y2 float64) QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_adjusted(libmiqt.ValueCast[C.struct_miqt_qrectf](this), (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2)))
}

func (this QRectF) Size() QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QRectF_size(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) Width() float64 {
	return (float64)(C.QRectF_width(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) Height() float64 {
	return (float64)(C.QRectF_height(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this *QRectF) SetWidth(w float64) {
	C.QRectF_setWidth(this.cPointer(), (C.double)(w))
}

func (this *QRectF) SetHeight(h float64) {
	C.QRectF_setHeight(this.cPointer(), (C.double)(h))
}

func (this *QRectF) SetSize(s QSizeF) {
	C.QRectF_setSize(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsizef](s))
}

func (this QRectF) OperatorBitwiseOr(r QRectF) QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_operatorBitwiseOr(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qrectf](r)))
}

func (this QRectF) OperatorBitwiseAnd(r QRectF) QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_operatorBitwiseAnd(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qrectf](r)))
}

func (this *QRectF) OperatorBitwiseOrAssign(r QRectF) {
	C.QRectF_operatorBitwiseOrAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrectf](r))
}

func (this *QRectF) OperatorBitwiseAndAssign(r QRectF) {
	C.QRectF_operatorBitwiseAndAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrectf](r))
}

func (this QRectF) Contains(r QRectF) bool {
	return (bool)(C.QRectF_contains(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qrectf](r)))
}

func (this QRectF) ContainsWithQPointF(p QPointF) bool {
	return (bool)(C.QRectF_containsWithQPointF(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qpointf](p)))
}

func (this QRectF) Contains2(x float64, y float64) bool {
	return (bool)(C.QRectF_contains2(libmiqt.ValueCast[C.struct_miqt_qrectf](this), (C.double)(x), (C.double)(y)))
}

func (this QRectF) United(other QRectF) QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_united(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qrectf](other)))
}

func (this QRectF) Intersected(other QRectF) QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_intersected(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qrectf](other)))
}

func (this QRectF) Intersects(r QRectF) bool {
	return (bool)(C.QRectF_intersects(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qrectf](r)))
}

func (this QRectF) MarginsAdded(margins QMarginsF) QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_marginsAdded(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins)))
}

func (this QRectF) MarginsRemoved(margins QMarginsF) QRectF {
	return libmiqt.ValueCast[QRectF](C.QRectF_marginsRemoved(libmiqt.ValueCast[C.struct_miqt_qrectf](this), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins)))
}

func (this *QRectF) OperatorPlusAssign(margins QMarginsF) *QRectF {
	return newQRectF(C.QRectF_operatorPlusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins)))
}

func (this *QRectF) OperatorMinusAssign(margins QMarginsF) *QRectF {
	return newQRectF(C.QRectF_operatorMinusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins)))
}

func (this QRectF) ToRect() QRect {
	return libmiqt.ValueCast[QRect](C.QRectF_toRect(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this QRectF) ToAlignedRect() QRect {
	return libmiqt.ValueCast[QRect](C.QRectF_toAlignedRect(libmiqt.ValueCast[C.struct_miqt_qrectf](this)))
}

func (this *QRectF) OperatorAssign(param1 QRectF) {
	C.QRectF_operatorAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrectf](param1))
}
