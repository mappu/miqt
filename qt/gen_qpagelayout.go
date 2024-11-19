package qt

/*

#include "gen_qpagelayout.h"
#include <stdlib.h>

*/
import "C"

import (
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
	h          *C.QPageLayout
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QPageLayout{h: (*C.QPageLayout)(h)}
}

// NewQPageLayout constructs a new QPageLayout object.
func NewQPageLayout() *QPageLayout {
	var outptr_QPageLayout *C.QPageLayout = nil

	C.QPageLayout_new(&outptr_QPageLayout)
	ret := newQPageLayout(outptr_QPageLayout)
	ret.isSubclass = true
	return ret
}

// NewQPageLayout2 constructs a new QPageLayout object.
func NewQPageLayout2(pageSize *QPageSize, orientation QPageLayout__Orientation, margins *QMarginsF) *QPageLayout {
	var outptr_QPageLayout *C.QPageLayout = nil

	C.QPageLayout_new2(pageSize.cPointer(), (C.int)(orientation), margins.cPointer(), &outptr_QPageLayout)
	ret := newQPageLayout(outptr_QPageLayout)
	ret.isSubclass = true
	return ret
}

// NewQPageLayout3 constructs a new QPageLayout object.
func NewQPageLayout3(other *QPageLayout) *QPageLayout {
	var outptr_QPageLayout *C.QPageLayout = nil

	C.QPageLayout_new3(other.cPointer(), &outptr_QPageLayout)
	ret := newQPageLayout(outptr_QPageLayout)
	ret.isSubclass = true
	return ret
}

// NewQPageLayout4 constructs a new QPageLayout object.
func NewQPageLayout4(pageSize *QPageSize, orientation QPageLayout__Orientation, margins *QMarginsF, units QPageLayout__Unit) *QPageLayout {
	var outptr_QPageLayout *C.QPageLayout = nil

	C.QPageLayout_new4(pageSize.cPointer(), (C.int)(orientation), margins.cPointer(), (C.int)(units), &outptr_QPageLayout)
	ret := newQPageLayout(outptr_QPageLayout)
	ret.isSubclass = true
	return ret
}

// NewQPageLayout5 constructs a new QPageLayout object.
func NewQPageLayout5(pageSize *QPageSize, orientation QPageLayout__Orientation, margins *QMarginsF, units QPageLayout__Unit, minMargins *QMarginsF) *QPageLayout {
	var outptr_QPageLayout *C.QPageLayout = nil

	C.QPageLayout_new5(pageSize.cPointer(), (C.int)(orientation), margins.cPointer(), (C.int)(units), minMargins.cPointer(), &outptr_QPageLayout)
	ret := newQPageLayout(outptr_QPageLayout)
	ret.isSubclass = true
	return ret
}

func (this *QPageLayout) OperatorAssign(other *QPageLayout) {
	C.QPageLayout_OperatorAssign(this.h, other.cPointer())
}

func (this *QPageLayout) Swap(other *QPageLayout) {
	C.QPageLayout_Swap(this.h, other.cPointer())
}

func (this *QPageLayout) IsEquivalentTo(other *QPageLayout) bool {
	return (bool)(C.QPageLayout_IsEquivalentTo(this.h, other.cPointer()))
}

func (this *QPageLayout) IsValid() bool {
	return (bool)(C.QPageLayout_IsValid(this.h))
}

func (this *QPageLayout) SetMode(mode QPageLayout__Mode) {
	C.QPageLayout_SetMode(this.h, (C.int)(mode))
}

func (this *QPageLayout) Mode() QPageLayout__Mode {
	return (QPageLayout__Mode)(C.QPageLayout_Mode(this.h))
}

func (this *QPageLayout) SetPageSize(pageSize *QPageSize) {
	C.QPageLayout_SetPageSize(this.h, pageSize.cPointer())
}

func (this *QPageLayout) PageSize() *QPageSize {
	_ret := C.QPageLayout_PageSize(this.h)
	_goptr := newQPageSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) SetOrientation(orientation QPageLayout__Orientation) {
	C.QPageLayout_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QPageLayout) Orientation() QPageLayout__Orientation {
	return (QPageLayout__Orientation)(C.QPageLayout_Orientation(this.h))
}

func (this *QPageLayout) SetUnits(units QPageLayout__Unit) {
	C.QPageLayout_SetUnits(this.h, (C.int)(units))
}

func (this *QPageLayout) Units() QPageLayout__Unit {
	return (QPageLayout__Unit)(C.QPageLayout_Units(this.h))
}

func (this *QPageLayout) SetMargins(margins *QMarginsF) bool {
	return (bool)(C.QPageLayout_SetMargins(this.h, margins.cPointer()))
}

func (this *QPageLayout) SetLeftMargin(leftMargin float64) bool {
	return (bool)(C.QPageLayout_SetLeftMargin(this.h, (C.double)(leftMargin)))
}

func (this *QPageLayout) SetRightMargin(rightMargin float64) bool {
	return (bool)(C.QPageLayout_SetRightMargin(this.h, (C.double)(rightMargin)))
}

func (this *QPageLayout) SetTopMargin(topMargin float64) bool {
	return (bool)(C.QPageLayout_SetTopMargin(this.h, (C.double)(topMargin)))
}

func (this *QPageLayout) SetBottomMargin(bottomMargin float64) bool {
	return (bool)(C.QPageLayout_SetBottomMargin(this.h, (C.double)(bottomMargin)))
}

func (this *QPageLayout) Margins() *QMarginsF {
	_ret := C.QPageLayout_Margins(this.h)
	_goptr := newQMarginsF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) MarginsWithUnits(units QPageLayout__Unit) *QMarginsF {
	_ret := C.QPageLayout_MarginsWithUnits(this.h, (C.int)(units))
	_goptr := newQMarginsF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) MarginsPoints() *QMargins {
	_ret := C.QPageLayout_MarginsPoints(this.h)
	_goptr := newQMargins(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) MarginsPixels(resolution int) *QMargins {
	_ret := C.QPageLayout_MarginsPixels(this.h, (C.int)(resolution))
	_goptr := newQMargins(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) SetMinimumMargins(minMargins *QMarginsF) {
	C.QPageLayout_SetMinimumMargins(this.h, minMargins.cPointer())
}

func (this *QPageLayout) MinimumMargins() *QMarginsF {
	_ret := C.QPageLayout_MinimumMargins(this.h)
	_goptr := newQMarginsF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) MaximumMargins() *QMarginsF {
	_ret := C.QPageLayout_MaximumMargins(this.h)
	_goptr := newQMarginsF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) FullRect() *QRectF {
	_ret := C.QPageLayout_FullRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) FullRectWithUnits(units QPageLayout__Unit) *QRectF {
	_ret := C.QPageLayout_FullRectWithUnits(this.h, (C.int)(units))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) FullRectPoints() *QRect {
	_ret := C.QPageLayout_FullRectPoints(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) FullRectPixels(resolution int) *QRect {
	_ret := C.QPageLayout_FullRectPixels(this.h, (C.int)(resolution))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) PaintRect() *QRectF {
	_ret := C.QPageLayout_PaintRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) PaintRectWithUnits(units QPageLayout__Unit) *QRectF {
	_ret := C.QPageLayout_PaintRectWithUnits(this.h, (C.int)(units))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) PaintRectPoints() *QRect {
	_ret := C.QPageLayout_PaintRectPoints(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) PaintRectPixels(resolution int) *QRect {
	_ret := C.QPageLayout_PaintRectPixels(this.h, (C.int)(resolution))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageLayout) SetPageSize2(pageSize *QPageSize, minMargins *QMarginsF) {
	C.QPageLayout_SetPageSize2(this.h, pageSize.cPointer(), minMargins.cPointer())
}

// Delete this object from C++ memory.
func (this *QPageLayout) Delete() {
	C.QPageLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPageLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QPageLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
