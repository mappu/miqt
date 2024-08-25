package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpagelayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPageLayout struct {
	h *C.QPageLayout
}

func (this *QPageLayout) cPointer() *C.QPageLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPageLayout(h *C.QPageLayout) *QPageLayout {
	return &QPageLayout{h: h}
}

func newQPageLayout_U(h unsafe.Pointer) *QPageLayout {
	return newQPageLayout((*C.QPageLayout)(h))
}

// NewQPageLayout constructs a new QPageLayout object.
func NewQPageLayout() *QPageLayout {
	ret := C.QPageLayout_new()
	return newQPageLayout(ret)
}

// NewQPageLayout2 constructs a new QPageLayout object.
func NewQPageLayout2(other *QPageLayout) *QPageLayout {
	ret := C.QPageLayout_new2(other.cPointer())
	return newQPageLayout(ret)
}

func (this *QPageLayout) OperatorAssign(other *QPageLayout) {
	C.QPageLayout_OperatorAssign(this.h, other.cPointer())
}

func (this *QPageLayout) Swap(other *QPageLayout) {
	C.QPageLayout_Swap(this.h, other.cPointer())
}

func (this *QPageLayout) IsEquivalentTo(other *QPageLayout) bool {
	ret := C.QPageLayout_IsEquivalentTo(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QPageLayout) IsValid() bool {
	ret := C.QPageLayout_IsValid(this.h)
	return (bool)(ret)
}

func (this *QPageLayout) SetPageSize(pageSize *QPageSize) {
	C.QPageLayout_SetPageSize(this.h, pageSize.cPointer())
}

func (this *QPageLayout) PageSize() *QPageSize {
	ret := C.QPageLayout_PageSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPageSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPageSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) SetMargins(margins *QMarginsF) bool {
	ret := C.QPageLayout_SetMargins(this.h, margins.cPointer())
	return (bool)(ret)
}

func (this *QPageLayout) SetLeftMargin(leftMargin float64) bool {
	ret := C.QPageLayout_SetLeftMargin(this.h, (C.double)(leftMargin))
	return (bool)(ret)
}

func (this *QPageLayout) SetRightMargin(rightMargin float64) bool {
	ret := C.QPageLayout_SetRightMargin(this.h, (C.double)(rightMargin))
	return (bool)(ret)
}

func (this *QPageLayout) SetTopMargin(topMargin float64) bool {
	ret := C.QPageLayout_SetTopMargin(this.h, (C.double)(topMargin))
	return (bool)(ret)
}

func (this *QPageLayout) SetBottomMargin(bottomMargin float64) bool {
	ret := C.QPageLayout_SetBottomMargin(this.h, (C.double)(bottomMargin))
	return (bool)(ret)
}

func (this *QPageLayout) Margins() *QMarginsF {
	ret := C.QPageLayout_Margins(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMarginsF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMarginsF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) MarginsPoints() *QMargins {
	ret := C.QPageLayout_MarginsPoints(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMargins(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMargins) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) MarginsPixels(resolution int) *QMargins {
	ret := C.QPageLayout_MarginsPixels(this.h, (C.int)(resolution))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMargins(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMargins) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) SetMinimumMargins(minMargins *QMarginsF) {
	C.QPageLayout_SetMinimumMargins(this.h, minMargins.cPointer())
}

func (this *QPageLayout) MinimumMargins() *QMarginsF {
	ret := C.QPageLayout_MinimumMargins(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMarginsF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMarginsF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) MaximumMargins() *QMarginsF {
	ret := C.QPageLayout_MaximumMargins(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMarginsF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMarginsF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) FullRect() *QRectF {
	ret := C.QPageLayout_FullRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) FullRectPoints() *QRect {
	ret := C.QPageLayout_FullRectPoints(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) FullRectPixels(resolution int) *QRect {
	ret := C.QPageLayout_FullRectPixels(this.h, (C.int)(resolution))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) PaintRect() *QRectF {
	ret := C.QPageLayout_PaintRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) PaintRectPoints() *QRect {
	ret := C.QPageLayout_PaintRectPoints(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) PaintRectPixels(resolution int) *QRect {
	ret := C.QPageLayout_PaintRectPixels(this.h, (C.int)(resolution))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageLayout) SetPageSize2(pageSize *QPageSize, minMargins *QMarginsF) {
	C.QPageLayout_SetPageSize2(this.h, pageSize.cPointer(), minMargins.cPointer())
}

func (this *QPageLayout) Delete() {
	C.QPageLayout_Delete(this.h)
}
