package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qrect.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRect struct {
	h *C.QRect
}

func (this *QRect) cPointer() *C.QRect {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRect(h *C.QRect) *QRect {
	if h == nil {
		return nil
	}
	return &QRect{h: h}
}

func newQRect_U(h unsafe.Pointer) *QRect {
	return newQRect((*C.QRect)(h))
}

// NewQRect constructs a new QRect object.
func NewQRect() *QRect {
	ret := C.QRect_new()
	return newQRect(ret)
}

// NewQRect2 constructs a new QRect object.
func NewQRect2(topleft *QPoint, bottomright *QPoint) *QRect {
	ret := C.QRect_new2(topleft.cPointer(), bottomright.cPointer())
	return newQRect(ret)
}

// NewQRect3 constructs a new QRect object.
func NewQRect3(topleft *QPoint, size *QSize) *QRect {
	ret := C.QRect_new3(topleft.cPointer(), size.cPointer())
	return newQRect(ret)
}

// NewQRect4 constructs a new QRect object.
func NewQRect4(left int, top int, width int, height int) *QRect {
	ret := C.QRect_new4((C.int)(left), (C.int)(top), (C.int)(width), (C.int)(height))
	return newQRect(ret)
}

// NewQRect5 constructs a new QRect object.
func NewQRect5(param1 *QRect) *QRect {
	ret := C.QRect_new5(param1.cPointer())
	return newQRect(ret)
}

func (this *QRect) IsNull() bool {
	ret := C.QRect_IsNull(this.h)
	return (bool)(ret)
}

func (this *QRect) IsEmpty() bool {
	ret := C.QRect_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QRect) IsValid() bool {
	ret := C.QRect_IsValid(this.h)
	return (bool)(ret)
}

func (this *QRect) Left() int {
	ret := C.QRect_Left(this.h)
	return (int)(ret)
}

func (this *QRect) Top() int {
	ret := C.QRect_Top(this.h)
	return (int)(ret)
}

func (this *QRect) Right() int {
	ret := C.QRect_Right(this.h)
	return (int)(ret)
}

func (this *QRect) Bottom() int {
	ret := C.QRect_Bottom(this.h)
	return (int)(ret)
}

func (this *QRect) Normalized() *QRect {
	ret := C.QRect_Normalized(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) X() int {
	ret := C.QRect_X(this.h)
	return (int)(ret)
}

func (this *QRect) Y() int {
	ret := C.QRect_Y(this.h)
	return (int)(ret)
}

func (this *QRect) SetLeft(pos int) {
	C.QRect_SetLeft(this.h, (C.int)(pos))
}

func (this *QRect) SetTop(pos int) {
	C.QRect_SetTop(this.h, (C.int)(pos))
}

func (this *QRect) SetRight(pos int) {
	C.QRect_SetRight(this.h, (C.int)(pos))
}

func (this *QRect) SetBottom(pos int) {
	C.QRect_SetBottom(this.h, (C.int)(pos))
}

func (this *QRect) SetX(x int) {
	C.QRect_SetX(this.h, (C.int)(x))
}

func (this *QRect) SetY(y int) {
	C.QRect_SetY(this.h, (C.int)(y))
}

func (this *QRect) SetTopLeft(p *QPoint) {
	C.QRect_SetTopLeft(this.h, p.cPointer())
}

func (this *QRect) SetBottomRight(p *QPoint) {
	C.QRect_SetBottomRight(this.h, p.cPointer())
}

func (this *QRect) SetTopRight(p *QPoint) {
	C.QRect_SetTopRight(this.h, p.cPointer())
}

func (this *QRect) SetBottomLeft(p *QPoint) {
	C.QRect_SetBottomLeft(this.h, p.cPointer())
}

func (this *QRect) TopLeft() *QPoint {
	ret := C.QRect_TopLeft(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) BottomRight() *QPoint {
	ret := C.QRect_BottomRight(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) TopRight() *QPoint {
	ret := C.QRect_TopRight(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) BottomLeft() *QPoint {
	ret := C.QRect_BottomLeft(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) Center() *QPoint {
	ret := C.QRect_Center(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) MoveLeft(pos int) {
	C.QRect_MoveLeft(this.h, (C.int)(pos))
}

func (this *QRect) MoveTop(pos int) {
	C.QRect_MoveTop(this.h, (C.int)(pos))
}

func (this *QRect) MoveRight(pos int) {
	C.QRect_MoveRight(this.h, (C.int)(pos))
}

func (this *QRect) MoveBottom(pos int) {
	C.QRect_MoveBottom(this.h, (C.int)(pos))
}

func (this *QRect) MoveTopLeft(p *QPoint) {
	C.QRect_MoveTopLeft(this.h, p.cPointer())
}

func (this *QRect) MoveBottomRight(p *QPoint) {
	C.QRect_MoveBottomRight(this.h, p.cPointer())
}

func (this *QRect) MoveTopRight(p *QPoint) {
	C.QRect_MoveTopRight(this.h, p.cPointer())
}

func (this *QRect) MoveBottomLeft(p *QPoint) {
	C.QRect_MoveBottomLeft(this.h, p.cPointer())
}

func (this *QRect) MoveCenter(p *QPoint) {
	C.QRect_MoveCenter(this.h, p.cPointer())
}

func (this *QRect) Translate(dx int, dy int) {
	C.QRect_Translate(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QRect) TranslateWithQPoint(p *QPoint) {
	C.QRect_TranslateWithQPoint(this.h, p.cPointer())
}

func (this *QRect) Translated(dx int, dy int) *QRect {
	ret := C.QRect_Translated(this.h, (C.int)(dx), (C.int)(dy))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) TranslatedWithQPoint(p *QPoint) *QRect {
	ret := C.QRect_TranslatedWithQPoint(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) Transposed() *QRect {
	ret := C.QRect_Transposed(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) MoveTo(x int, t int) {
	C.QRect_MoveTo(this.h, (C.int)(x), (C.int)(t))
}

func (this *QRect) MoveToWithQPoint(p *QPoint) {
	C.QRect_MoveToWithQPoint(this.h, p.cPointer())
}

func (this *QRect) SetRect(x int, y int, w int, h int) {
	C.QRect_SetRect(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QRect) GetRect(x *int, y *int, w *int, h *int) {
	C.QRect_GetRect(this.h, (*C.int)(unsafe.Pointer(x)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(w)), (*C.int)(unsafe.Pointer(h)))
}

func (this *QRect) SetCoords(x1 int, y1 int, x2 int, y2 int) {
	C.QRect_SetCoords(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this *QRect) GetCoords(x1 *int, y1 *int, x2 *int, y2 *int) {
	C.QRect_GetCoords(this.h, (*C.int)(unsafe.Pointer(x1)), (*C.int)(unsafe.Pointer(y1)), (*C.int)(unsafe.Pointer(x2)), (*C.int)(unsafe.Pointer(y2)))
}

func (this *QRect) Adjust(x1 int, y1 int, x2 int, y2 int) {
	C.QRect_Adjust(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this *QRect) Adjusted(x1 int, y1 int, x2 int, y2 int) *QRect {
	ret := C.QRect_Adjusted(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) Size() *QSize {
	ret := C.QRect_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) Width() int {
	ret := C.QRect_Width(this.h)
	return (int)(ret)
}

func (this *QRect) Height() int {
	ret := C.QRect_Height(this.h)
	return (int)(ret)
}

func (this *QRect) SetWidth(w int) {
	C.QRect_SetWidth(this.h, (C.int)(w))
}

func (this *QRect) SetHeight(h int) {
	C.QRect_SetHeight(this.h, (C.int)(h))
}

func (this *QRect) SetSize(s *QSize) {
	C.QRect_SetSize(this.h, s.cPointer())
}

func (this *QRect) OperatorBitwiseOr(r *QRect) *QRect {
	ret := C.QRect_OperatorBitwiseOr(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) OperatorBitwiseAnd(r *QRect) *QRect {
	ret := C.QRect_OperatorBitwiseAnd(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) OperatorBitwiseOrAssign(r *QRect) {
	C.QRect_OperatorBitwiseOrAssign(this.h, r.cPointer())
}

func (this *QRect) OperatorBitwiseAndAssign(r *QRect) {
	C.QRect_OperatorBitwiseAndAssign(this.h, r.cPointer())
}

func (this *QRect) Contains(r *QRect) bool {
	ret := C.QRect_Contains(this.h, r.cPointer())
	return (bool)(ret)
}

func (this *QRect) ContainsWithQPoint(p *QPoint) bool {
	ret := C.QRect_ContainsWithQPoint(this.h, p.cPointer())
	return (bool)(ret)
}

func (this *QRect) Contains2(x int, y int) bool {
	ret := C.QRect_Contains2(this.h, (C.int)(x), (C.int)(y))
	return (bool)(ret)
}

func (this *QRect) Contains3(x int, y int, proper bool) bool {
	ret := C.QRect_Contains3(this.h, (C.int)(x), (C.int)(y), (C.bool)(proper))
	return (bool)(ret)
}

func (this *QRect) United(other *QRect) *QRect {
	ret := C.QRect_United(this.h, other.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) Intersected(other *QRect) *QRect {
	ret := C.QRect_Intersected(this.h, other.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) Intersects(r *QRect) bool {
	ret := C.QRect_Intersects(this.h, r.cPointer())
	return (bool)(ret)
}

func (this *QRect) MarginsAdded(margins *QMargins) *QRect {
	ret := C.QRect_MarginsAdded(this.h, margins.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) MarginsRemoved(margins *QMargins) *QRect {
	ret := C.QRect_MarginsRemoved(this.h, margins.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRect) OperatorPlusAssign(margins *QMargins) *QRect {
	ret := C.QRect_OperatorPlusAssign(this.h, margins.cPointer())
	return newQRect_U(unsafe.Pointer(ret))
}

func (this *QRect) OperatorMinusAssign(margins *QMargins) *QRect {
	ret := C.QRect_OperatorMinusAssign(this.h, margins.cPointer())
	return newQRect_U(unsafe.Pointer(ret))
}

func (this *QRect) Contains22(r *QRect, proper bool) bool {
	ret := C.QRect_Contains22(this.h, r.cPointer(), (C.bool)(proper))
	return (bool)(ret)
}

func (this *QRect) Contains23(p *QPoint, proper bool) bool {
	ret := C.QRect_Contains23(this.h, p.cPointer(), (C.bool)(proper))
	return (bool)(ret)
}

func (this *QRect) Delete() {
	C.QRect_Delete(this.h)
}

type QRectF struct {
	h *C.QRectF
}

func (this *QRectF) cPointer() *C.QRectF {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRectF(h *C.QRectF) *QRectF {
	if h == nil {
		return nil
	}
	return &QRectF{h: h}
}

func newQRectF_U(h unsafe.Pointer) *QRectF {
	return newQRectF((*C.QRectF)(h))
}

// NewQRectF constructs a new QRectF object.
func NewQRectF() *QRectF {
	ret := C.QRectF_new()
	return newQRectF(ret)
}

// NewQRectF2 constructs a new QRectF object.
func NewQRectF2(topleft *QPointF, size *QSizeF) *QRectF {
	ret := C.QRectF_new2(topleft.cPointer(), size.cPointer())
	return newQRectF(ret)
}

// NewQRectF3 constructs a new QRectF object.
func NewQRectF3(topleft *QPointF, bottomRight *QPointF) *QRectF {
	ret := C.QRectF_new3(topleft.cPointer(), bottomRight.cPointer())
	return newQRectF(ret)
}

// NewQRectF4 constructs a new QRectF object.
func NewQRectF4(left float64, top float64, width float64, height float64) *QRectF {
	ret := C.QRectF_new4((C.double)(left), (C.double)(top), (C.double)(width), (C.double)(height))
	return newQRectF(ret)
}

// NewQRectF5 constructs a new QRectF object.
func NewQRectF5(rect *QRect) *QRectF {
	ret := C.QRectF_new5(rect.cPointer())
	return newQRectF(ret)
}

// NewQRectF6 constructs a new QRectF object.
func NewQRectF6(param1 *QRectF) *QRectF {
	ret := C.QRectF_new6(param1.cPointer())
	return newQRectF(ret)
}

func (this *QRectF) IsNull() bool {
	ret := C.QRectF_IsNull(this.h)
	return (bool)(ret)
}

func (this *QRectF) IsEmpty() bool {
	ret := C.QRectF_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QRectF) IsValid() bool {
	ret := C.QRectF_IsValid(this.h)
	return (bool)(ret)
}

func (this *QRectF) Normalized() *QRectF {
	ret := C.QRectF_Normalized(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) Left() float64 {
	ret := C.QRectF_Left(this.h)
	return (float64)(ret)
}

func (this *QRectF) Top() float64 {
	ret := C.QRectF_Top(this.h)
	return (float64)(ret)
}

func (this *QRectF) Right() float64 {
	ret := C.QRectF_Right(this.h)
	return (float64)(ret)
}

func (this *QRectF) Bottom() float64 {
	ret := C.QRectF_Bottom(this.h)
	return (float64)(ret)
}

func (this *QRectF) X() float64 {
	ret := C.QRectF_X(this.h)
	return (float64)(ret)
}

func (this *QRectF) Y() float64 {
	ret := C.QRectF_Y(this.h)
	return (float64)(ret)
}

func (this *QRectF) SetLeft(pos float64) {
	C.QRectF_SetLeft(this.h, (C.double)(pos))
}

func (this *QRectF) SetTop(pos float64) {
	C.QRectF_SetTop(this.h, (C.double)(pos))
}

func (this *QRectF) SetRight(pos float64) {
	C.QRectF_SetRight(this.h, (C.double)(pos))
}

func (this *QRectF) SetBottom(pos float64) {
	C.QRectF_SetBottom(this.h, (C.double)(pos))
}

func (this *QRectF) SetX(pos float64) {
	C.QRectF_SetX(this.h, (C.double)(pos))
}

func (this *QRectF) SetY(pos float64) {
	C.QRectF_SetY(this.h, (C.double)(pos))
}

func (this *QRectF) TopLeft() *QPointF {
	ret := C.QRectF_TopLeft(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) BottomRight() *QPointF {
	ret := C.QRectF_BottomRight(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) TopRight() *QPointF {
	ret := C.QRectF_TopRight(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) BottomLeft() *QPointF {
	ret := C.QRectF_BottomLeft(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) Center() *QPointF {
	ret := C.QRectF_Center(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) SetTopLeft(p *QPointF) {
	C.QRectF_SetTopLeft(this.h, p.cPointer())
}

func (this *QRectF) SetBottomRight(p *QPointF) {
	C.QRectF_SetBottomRight(this.h, p.cPointer())
}

func (this *QRectF) SetTopRight(p *QPointF) {
	C.QRectF_SetTopRight(this.h, p.cPointer())
}

func (this *QRectF) SetBottomLeft(p *QPointF) {
	C.QRectF_SetBottomLeft(this.h, p.cPointer())
}

func (this *QRectF) MoveLeft(pos float64) {
	C.QRectF_MoveLeft(this.h, (C.double)(pos))
}

func (this *QRectF) MoveTop(pos float64) {
	C.QRectF_MoveTop(this.h, (C.double)(pos))
}

func (this *QRectF) MoveRight(pos float64) {
	C.QRectF_MoveRight(this.h, (C.double)(pos))
}

func (this *QRectF) MoveBottom(pos float64) {
	C.QRectF_MoveBottom(this.h, (C.double)(pos))
}

func (this *QRectF) MoveTopLeft(p *QPointF) {
	C.QRectF_MoveTopLeft(this.h, p.cPointer())
}

func (this *QRectF) MoveBottomRight(p *QPointF) {
	C.QRectF_MoveBottomRight(this.h, p.cPointer())
}

func (this *QRectF) MoveTopRight(p *QPointF) {
	C.QRectF_MoveTopRight(this.h, p.cPointer())
}

func (this *QRectF) MoveBottomLeft(p *QPointF) {
	C.QRectF_MoveBottomLeft(this.h, p.cPointer())
}

func (this *QRectF) MoveCenter(p *QPointF) {
	C.QRectF_MoveCenter(this.h, p.cPointer())
}

func (this *QRectF) Translate(dx float64, dy float64) {
	C.QRectF_Translate(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QRectF) TranslateWithQPointF(p *QPointF) {
	C.QRectF_TranslateWithQPointF(this.h, p.cPointer())
}

func (this *QRectF) Translated(dx float64, dy float64) *QRectF {
	ret := C.QRectF_Translated(this.h, (C.double)(dx), (C.double)(dy))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) TranslatedWithQPointF(p *QPointF) *QRectF {
	ret := C.QRectF_TranslatedWithQPointF(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) Transposed() *QRectF {
	ret := C.QRectF_Transposed(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) MoveTo(x float64, y float64) {
	C.QRectF_MoveTo(this.h, (C.double)(x), (C.double)(y))
}

func (this *QRectF) MoveToWithQPointF(p *QPointF) {
	C.QRectF_MoveToWithQPointF(this.h, p.cPointer())
}

func (this *QRectF) SetRect(x float64, y float64, w float64, h float64) {
	C.QRectF_SetRect(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QRectF) GetRect(x *float64, y *float64, w *float64, h *float64) {
	C.QRectF_GetRect(this.h, (*C.double)(unsafe.Pointer(x)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(w)), (*C.double)(unsafe.Pointer(h)))
}

func (this *QRectF) SetCoords(x1 float64, y1 float64, x2 float64, y2 float64) {
	C.QRectF_SetCoords(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this *QRectF) GetCoords(x1 *float64, y1 *float64, x2 *float64, y2 *float64) {
	C.QRectF_GetCoords(this.h, (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(y1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(y2)))
}

func (this *QRectF) Adjust(x1 float64, y1 float64, x2 float64, y2 float64) {
	C.QRectF_Adjust(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this *QRectF) Adjusted(x1 float64, y1 float64, x2 float64, y2 float64) *QRectF {
	ret := C.QRectF_Adjusted(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) Size() *QSizeF {
	ret := C.QRectF_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) Width() float64 {
	ret := C.QRectF_Width(this.h)
	return (float64)(ret)
}

func (this *QRectF) Height() float64 {
	ret := C.QRectF_Height(this.h)
	return (float64)(ret)
}

func (this *QRectF) SetWidth(w float64) {
	C.QRectF_SetWidth(this.h, (C.double)(w))
}

func (this *QRectF) SetHeight(h float64) {
	C.QRectF_SetHeight(this.h, (C.double)(h))
}

func (this *QRectF) SetSize(s *QSizeF) {
	C.QRectF_SetSize(this.h, s.cPointer())
}

func (this *QRectF) OperatorBitwiseOr(r *QRectF) *QRectF {
	ret := C.QRectF_OperatorBitwiseOr(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) OperatorBitwiseAnd(r *QRectF) *QRectF {
	ret := C.QRectF_OperatorBitwiseAnd(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) OperatorBitwiseOrAssign(r *QRectF) {
	C.QRectF_OperatorBitwiseOrAssign(this.h, r.cPointer())
}

func (this *QRectF) OperatorBitwiseAndAssign(r *QRectF) {
	C.QRectF_OperatorBitwiseAndAssign(this.h, r.cPointer())
}

func (this *QRectF) Contains(r *QRectF) bool {
	ret := C.QRectF_Contains(this.h, r.cPointer())
	return (bool)(ret)
}

func (this *QRectF) ContainsWithQPointF(p *QPointF) bool {
	ret := C.QRectF_ContainsWithQPointF(this.h, p.cPointer())
	return (bool)(ret)
}

func (this *QRectF) Contains2(x float64, y float64) bool {
	ret := C.QRectF_Contains2(this.h, (C.double)(x), (C.double)(y))
	return (bool)(ret)
}

func (this *QRectF) United(other *QRectF) *QRectF {
	ret := C.QRectF_United(this.h, other.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) Intersected(other *QRectF) *QRectF {
	ret := C.QRectF_Intersected(this.h, other.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) Intersects(r *QRectF) bool {
	ret := C.QRectF_Intersects(this.h, r.cPointer())
	return (bool)(ret)
}

func (this *QRectF) MarginsAdded(margins *QMarginsF) *QRectF {
	ret := C.QRectF_MarginsAdded(this.h, margins.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) MarginsRemoved(margins *QMarginsF) *QRectF {
	ret := C.QRectF_MarginsRemoved(this.h, margins.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) OperatorPlusAssign(margins *QMarginsF) *QRectF {
	ret := C.QRectF_OperatorPlusAssign(this.h, margins.cPointer())
	return newQRectF_U(unsafe.Pointer(ret))
}

func (this *QRectF) OperatorMinusAssign(margins *QMarginsF) *QRectF {
	ret := C.QRectF_OperatorMinusAssign(this.h, margins.cPointer())
	return newQRectF_U(unsafe.Pointer(ret))
}

func (this *QRectF) ToRect() *QRect {
	ret := C.QRectF_ToRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) ToAlignedRect() *QRect {
	ret := C.QRectF_ToAlignedRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRectF) Delete() {
	C.QRectF_Delete(this.h)
}
