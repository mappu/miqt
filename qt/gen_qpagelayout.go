package qt

/*

#include "gen_qpagelayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QPageLayout__Unit int

const (
	QPageLayout__Millimeter QPageLayout__Unit = 0
	QPageLayout__Point      QPageLayout__Unit = 1
	QPageLayout__Inch       QPageLayout__Unit = 2
	QPageLayout__Pica       QPageLayout__Unit = 3
	QPageLayout__Didot      QPageLayout__Unit = 4
	QPageLayout__Cicero     QPageLayout__Unit = 5
)

type QPageLayout__Orientation int

const (
	QPageLayout__Portrait  QPageLayout__Orientation = 0
	QPageLayout__Landscape QPageLayout__Orientation = 1
)

type QPageLayout__Mode int

const (
	QPageLayout__StandardMode QPageLayout__Mode = 0
	QPageLayout__FullPageMode QPageLayout__Mode = 1
)

type QPageLayout struct {
	h  *C.QPageLayout
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPageLayout) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPageLayout) cPointer() *C.QPageLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPageLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPageLayout constructs the type using only CGO pointers.
func newQPageLayout(h *C.QPageLayout) *QPageLayout {
	if h == nil {
		return nil
	}

	return &QPageLayout{h: h}
}

// UnsafeNewQPageLayout constructs the type using only unsafe pointers.
func UnsafeNewQPageLayout(h unsafe.Pointer) *QPageLayout {
	return newQPageLayout((*C.QPageLayout)(h))
}

// NewQPageLayout constructs a new QPageLayout object.
func NewQPageLayout() *QPageLayout {

	return newQPageLayout(C.QPageLayout_new())
}

// NewQPageLayout2 constructs a new QPageLayout object.
func NewQPageLayout2(pageSize *QPageSize, orientation QPageLayout__Orientation, margins QMarginsF) *QPageLayout {
	defer runtime.KeepAlive(pageSize)

	return newQPageLayout(C.QPageLayout_new2(pageSize.cPointer(), (C.int)(orientation), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins)))
}

// NewQPageLayout3 constructs a new QPageLayout object.
func NewQPageLayout3(other *QPageLayout) *QPageLayout {
	defer runtime.KeepAlive(other)

	return newQPageLayout(C.QPageLayout_new3(other.cPointer()))
}

// NewQPageLayout4 constructs a new QPageLayout object.
func NewQPageLayout4(pageSize *QPageSize, orientation QPageLayout__Orientation, margins QMarginsF, units QPageLayout__Unit) *QPageLayout {
	defer runtime.KeepAlive(pageSize)

	return newQPageLayout(C.QPageLayout_new4(pageSize.cPointer(), (C.int)(orientation), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins), (C.int)(units)))
}

// NewQPageLayout5 constructs a new QPageLayout object.
func NewQPageLayout5(pageSize *QPageSize, orientation QPageLayout__Orientation, margins QMarginsF, units QPageLayout__Unit, minMargins QMarginsF) *QPageLayout {
	defer runtime.KeepAlive(pageSize)

	return newQPageLayout(C.QPageLayout_new5(pageSize.cPointer(), (C.int)(orientation), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins), (C.int)(units), libmiqt.ValueCast[C.struct_miqt_qmarginsf](minMargins)))
}

func (this *QPageLayout) OperatorAssign(other *QPageLayout) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPageLayout_operatorAssign(this.h, other.cPointer())
}

func (this *QPageLayout) Swap(other *QPageLayout) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPageLayout_swap(this.h, other.cPointer())
}

func (this *QPageLayout) IsEquivalentTo(other *QPageLayout) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QPageLayout_isEquivalentTo(this.h, other.cPointer()))
}

func (this *QPageLayout) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPageLayout_isValid(this.h))
}

func (this *QPageLayout) SetMode(mode QPageLayout__Mode) {
	defer runtime.KeepAlive(this)
	C.QPageLayout_setMode(this.h, (C.int)(mode))
}

func (this *QPageLayout) Mode() QPageLayout__Mode {
	defer runtime.KeepAlive(this)
	return (QPageLayout__Mode)(C.QPageLayout_mode(this.h))
}

func (this *QPageLayout) SetPageSize(pageSize *QPageSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pageSize)
	C.QPageLayout_setPageSize(this.h, pageSize.cPointer())
}

func (this *QPageLayout) PageSize() *QPageSize {
	defer runtime.KeepAlive(this)
	_goptr := newQPageSize(C.QPageLayout_pageSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) SetOrientation(orientation QPageLayout__Orientation) {
	defer runtime.KeepAlive(this)
	C.QPageLayout_setOrientation(this.h, (C.int)(orientation))
}

func (this *QPageLayout) Orientation() QPageLayout__Orientation {
	defer runtime.KeepAlive(this)
	return (QPageLayout__Orientation)(C.QPageLayout_orientation(this.h))
}

func (this *QPageLayout) SetUnits(units QPageLayout__Unit) {
	defer runtime.KeepAlive(this)
	C.QPageLayout_setUnits(this.h, (C.int)(units))
}

func (this *QPageLayout) Units() QPageLayout__Unit {
	defer runtime.KeepAlive(this)
	return (QPageLayout__Unit)(C.QPageLayout_units(this.h))
}

func (this *QPageLayout) SetMargins(margins QMarginsF) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPageLayout_setMargins(this.h, libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins)))
}

func (this *QPageLayout) SetLeftMargin(leftMargin float64) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPageLayout_setLeftMargin(this.h, (C.double)(leftMargin)))
}

func (this *QPageLayout) SetRightMargin(rightMargin float64) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPageLayout_setRightMargin(this.h, (C.double)(rightMargin)))
}

func (this *QPageLayout) SetTopMargin(topMargin float64) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPageLayout_setTopMargin(this.h, (C.double)(topMargin)))
}

func (this *QPageLayout) SetBottomMargin(bottomMargin float64) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPageLayout_setBottomMargin(this.h, (C.double)(bottomMargin)))
}

func (this *QPageLayout) Margins() QMarginsF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QMarginsF](C.QPageLayout_margins(this.h))
}

func (this *QPageLayout) MarginsWithUnits(units QPageLayout__Unit) QMarginsF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QMarginsF](C.QPageLayout_marginsWithUnits(this.h, (C.int)(units)))
}

func (this *QPageLayout) MarginsPoints() QMargins {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QMargins](C.QPageLayout_marginsPoints(this.h))
}

func (this *QPageLayout) MarginsPixels(resolution int) QMargins {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QMargins](C.QPageLayout_marginsPixels(this.h, (C.int)(resolution)))
}

func (this *QPageLayout) SetMinimumMargins(minMargins QMarginsF) {
	defer runtime.KeepAlive(this)
	C.QPageLayout_setMinimumMargins(this.h, libmiqt.ValueCast[C.struct_miqt_qmarginsf](minMargins))
}

func (this *QPageLayout) MinimumMargins() QMarginsF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QMarginsF](C.QPageLayout_minimumMargins(this.h))
}

func (this *QPageLayout) MaximumMargins() QMarginsF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QMarginsF](C.QPageLayout_maximumMargins(this.h))
}

func (this *QPageLayout) FullRect() QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRectF](C.QPageLayout_fullRect(this.h))
}

func (this *QPageLayout) FullRectWithUnits(units QPageLayout__Unit) QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRectF](C.QPageLayout_fullRectWithUnits(this.h, (C.int)(units)))
}

func (this *QPageLayout) FullRectPoints() QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRect](C.QPageLayout_fullRectPoints(this.h))
}

func (this *QPageLayout) FullRectPixels(resolution int) QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRect](C.QPageLayout_fullRectPixels(this.h, (C.int)(resolution)))
}

func (this *QPageLayout) PaintRect() QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRectF](C.QPageLayout_paintRect(this.h))
}

func (this *QPageLayout) PaintRectWithUnits(units QPageLayout__Unit) QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRectF](C.QPageLayout_paintRectWithUnits(this.h, (C.int)(units)))
}

func (this *QPageLayout) PaintRectPoints() QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRect](C.QPageLayout_paintRectPoints(this.h))
}

func (this *QPageLayout) PaintRectPixels(resolution int) QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRect](C.QPageLayout_paintRectPixels(this.h, (C.int)(resolution)))
}

func (this *QPageLayout) SetPageSize2(pageSize *QPageSize, minMargins QMarginsF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pageSize)
	C.QPageLayout_setPageSize2(this.h, pageSize.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmarginsf](minMargins))
}

// Delete this object from C++ memory.
func (this *QPageLayout) Delete() {
	C.QPageLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPageLayout) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPageLayout_delete((*C.QPageLayout)(gc[0]))
	})
	this.miqtSetGC(gc)
}
