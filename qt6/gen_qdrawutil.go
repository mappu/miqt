package qt6

/*

#include "gen_qdrawutil.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDrawBorderPixmap__DrawingHint int

const (
	QDrawBorderPixmap__OpaqueTopLeft     QDrawBorderPixmap__DrawingHint = 1
	QDrawBorderPixmap__OpaqueTop         QDrawBorderPixmap__DrawingHint = 2
	QDrawBorderPixmap__OpaqueTopRight    QDrawBorderPixmap__DrawingHint = 4
	QDrawBorderPixmap__OpaqueLeft        QDrawBorderPixmap__DrawingHint = 8
	QDrawBorderPixmap__OpaqueCenter      QDrawBorderPixmap__DrawingHint = 16
	QDrawBorderPixmap__OpaqueRight       QDrawBorderPixmap__DrawingHint = 32
	QDrawBorderPixmap__OpaqueBottomLeft  QDrawBorderPixmap__DrawingHint = 64
	QDrawBorderPixmap__OpaqueBottom      QDrawBorderPixmap__DrawingHint = 128
	QDrawBorderPixmap__OpaqueBottomRight QDrawBorderPixmap__DrawingHint = 256
	QDrawBorderPixmap__OpaqueCorners     QDrawBorderPixmap__DrawingHint = 325
	QDrawBorderPixmap__OpaqueEdges       QDrawBorderPixmap__DrawingHint = 170
	QDrawBorderPixmap__OpaqueFrame       QDrawBorderPixmap__DrawingHint = 495
	QDrawBorderPixmap__OpaqueAll         QDrawBorderPixmap__DrawingHint = 511
)

type QTileRules struct {
	h  *C.QTileRules
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTileRules) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QTileRules) cPointer() *C.QTileRules {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTileRules) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTileRules constructs the type using only CGO pointers.
func newQTileRules(h *C.QTileRules) *QTileRules {
	if h == nil {
		return nil
	}

	return &QTileRules{h: h}
}

// UnsafeNewQTileRules constructs the type using only unsafe pointers.
func UnsafeNewQTileRules(h unsafe.Pointer) *QTileRules {
	return newQTileRules((*C.QTileRules)(h))
}

// NewQTileRules constructs a new QTileRules object.
func NewQTileRules(horizontalRule TileRule, verticalRule TileRule) *QTileRules {

	return newQTileRules(C.QTileRules_new((C.int)(horizontalRule), (C.int)(verticalRule)))
}

// NewQTileRules2 constructs a new QTileRules object.
func NewQTileRules2() *QTileRules {

	return newQTileRules(C.QTileRules_new2())
}

// NewQTileRules3 constructs a new QTileRules object.
func NewQTileRules3(param1 *QTileRules) *QTileRules {
	defer runtime.KeepAlive(param1)

	return newQTileRules(C.QTileRules_new3(param1.cPointer()))
}

// NewQTileRules4 constructs a new QTileRules object.
func NewQTileRules4(rule TileRule) *QTileRules {

	return newQTileRules(C.QTileRules_new4((C.int)(rule)))
}

func (this *QTileRules) Horizontal() TileRule {
	defer runtime.KeepAlive(this)
	return (TileRule)(C.QTileRules_horizontal(this.h))
}

func (this *QTileRules) SetHorizontal(horizontal TileRule) {
	defer runtime.KeepAlive(this)
	C.QTileRules_setHorizontal(this.h, (C.int)(horizontal))
}

func (this *QTileRules) Vertical() TileRule {
	defer runtime.KeepAlive(this)
	return (TileRule)(C.QTileRules_vertical(this.h))
}

func (this *QTileRules) SetVertical(vertical TileRule) {
	defer runtime.KeepAlive(this)
	C.QTileRules_setVertical(this.h, (C.int)(vertical))
}

// Delete this object from C++ memory.
func (this *QTileRules) Delete() {
	C.QTileRules_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTileRules) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTileRules_delete((*C.QTileRules)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QDrawShadeLine2(p *QPainter, x1 int, y1 int, x2 int, y2 int, pal *QPalette, sunken bool, lineWidth int, midLineWidth int) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(pal)
	C.miqt_QDrawShadeLine2(p.cPointer(), (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2), pal.cPointer(), (C.bool)(sunken), (C.int)(lineWidth), (C.int)(midLineWidth))
}

func QDrawShadeLine3(p *QPainter, p1 *QPoint, p2 *QPoint, pal *QPalette, sunken bool, lineWidth int, midLineWidth int) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(p1)
	defer runtime.KeepAlive(p2)
	defer runtime.KeepAlive(pal)
	C.miqt_QDrawShadeLine3(p.cPointer(), p1.cPointer(), p2.cPointer(), pal.cPointer(), (C.bool)(sunken), (C.int)(lineWidth), (C.int)(midLineWidth))
}

func QDrawShadeRect2(p *QPainter, x int, y int, w int, h int, pal *QPalette, sunken bool, lineWidth int, midLineWidth int, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(pal)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawShadeRect2(p.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), pal.cPointer(), (C.bool)(sunken), (C.int)(lineWidth), (C.int)(midLineWidth), fill.cPointer())
}

func QDrawShadeRect3(p *QPainter, r *QRect, pal *QPalette, sunken bool, lineWidth int, midLineWidth int, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(pal)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawShadeRect3(p.cPointer(), r.cPointer(), pal.cPointer(), (C.bool)(sunken), (C.int)(lineWidth), (C.int)(midLineWidth), fill.cPointer())
}

func QDrawShadePanel2(p *QPainter, x int, y int, w int, h int, pal *QPalette, sunken bool, lineWidth int, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(pal)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawShadePanel2(p.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), pal.cPointer(), (C.bool)(sunken), (C.int)(lineWidth), fill.cPointer())
}

func QDrawShadePanel3(p *QPainter, r *QRect, pal *QPalette, sunken bool, lineWidth int, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(pal)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawShadePanel3(p.cPointer(), r.cPointer(), pal.cPointer(), (C.bool)(sunken), (C.int)(lineWidth), fill.cPointer())
}

func QDrawWinButton2(p *QPainter, x int, y int, w int, h int, pal *QPalette, sunken bool, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(pal)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawWinButton2(p.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), pal.cPointer(), (C.bool)(sunken), fill.cPointer())
}

func QDrawWinButton3(p *QPainter, r *QRect, pal *QPalette, sunken bool, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(pal)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawWinButton3(p.cPointer(), r.cPointer(), pal.cPointer(), (C.bool)(sunken), fill.cPointer())
}

func QDrawWinPanel2(p *QPainter, x int, y int, w int, h int, pal *QPalette, sunken bool, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(pal)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawWinPanel2(p.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), pal.cPointer(), (C.bool)(sunken), fill.cPointer())
}

func QDrawWinPanel3(p *QPainter, r *QRect, pal *QPalette, sunken bool, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(pal)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawWinPanel3(p.cPointer(), r.cPointer(), pal.cPointer(), (C.bool)(sunken), fill.cPointer())
}

func QDrawPlainRect2(p *QPainter, x int, y int, w int, h int, param6 *QColor, lineWidth int, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(param6)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawPlainRect2(p.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), param6.cPointer(), (C.int)(lineWidth), fill.cPointer())
}

func QDrawPlainRect3(p *QPainter, r *QRect, param3 *QColor, lineWidth int, fill *QBrush) {
	defer runtime.KeepAlive(p)
	defer runtime.KeepAlive(r)
	defer runtime.KeepAlive(param3)
	defer runtime.KeepAlive(fill)
	C.miqt_QDrawPlainRect3(p.cPointer(), r.cPointer(), param3.cPointer(), (C.int)(lineWidth), fill.cPointer())
}

func QDrawBorderPixmap2(painter *QPainter, targetRect *QRect, targetMargins *QMargins, pixmap *QPixmap, sourceRect *QRect, sourceMargins *QMargins, rules *QTileRules, hints QDrawBorderPixmap__DrawingHint) {
	defer runtime.KeepAlive(painter)
	defer runtime.KeepAlive(targetRect)
	defer runtime.KeepAlive(targetMargins)
	defer runtime.KeepAlive(pixmap)
	defer runtime.KeepAlive(sourceRect)
	defer runtime.KeepAlive(sourceMargins)
	defer runtime.KeepAlive(rules)
	C.miqt_QDrawBorderPixmap2(painter.cPointer(), targetRect.cPointer(), targetMargins.cPointer(), pixmap.cPointer(), sourceRect.cPointer(), sourceMargins.cPointer(), rules.cPointer(), (C.int)(hints))
}

func QDrawBorderPixmap3(painter *QPainter, target *QRect, margins *QMargins, pixmap *QPixmap) {
	defer runtime.KeepAlive(painter)
	defer runtime.KeepAlive(target)
	defer runtime.KeepAlive(margins)
	defer runtime.KeepAlive(pixmap)
	C.miqt_QDrawBorderPixmap3(painter.cPointer(), target.cPointer(), margins.cPointer(), pixmap.cPointer())
}
