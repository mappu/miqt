package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgraphicslayoutitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGraphicsLayoutItem struct {
	h *C.QGraphicsLayoutItem
}

func (this *QGraphicsLayoutItem) cPointer() *C.QGraphicsLayoutItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsLayoutItem(h *C.QGraphicsLayoutItem) *QGraphicsLayoutItem {
	return &QGraphicsLayoutItem{h: h}
}

func newQGraphicsLayoutItem_U(h unsafe.Pointer) *QGraphicsLayoutItem {
	return newQGraphicsLayoutItem((*C.QGraphicsLayoutItem)(h))
}

func (this *QGraphicsLayoutItem) SetSizePolicy(policy *QSizePolicy) {
	C.QGraphicsLayoutItem_SetSizePolicy(this.h, policy.cPointer())
}

func (this *QGraphicsLayoutItem) SetSizePolicy2(hPolicy uintptr, vPolicy uintptr) {
	C.QGraphicsLayoutItem_SetSizePolicy2(this.h, (C.uintptr_t)(hPolicy), (C.uintptr_t)(vPolicy))
}

func (this *QGraphicsLayoutItem) SizePolicy() *QSizePolicy {
	ret := C.QGraphicsLayoutItem_SizePolicy(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizePolicy(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizePolicy) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLayoutItem) SetMinimumSize(size *QSizeF) {
	C.QGraphicsLayoutItem_SetMinimumSize(this.h, size.cPointer())
}

func (this *QGraphicsLayoutItem) SetMinimumSize2(w float64, h float64) {
	C.QGraphicsLayoutItem_SetMinimumSize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsLayoutItem) MinimumSize() *QSizeF {
	ret := C.QGraphicsLayoutItem_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLayoutItem) SetMinimumWidth(width float64) {
	C.QGraphicsLayoutItem_SetMinimumWidth(this.h, (C.double)(width))
}

func (this *QGraphicsLayoutItem) MinimumWidth() float64 {
	ret := C.QGraphicsLayoutItem_MinimumWidth(this.h)
	return (float64)(ret)
}

func (this *QGraphicsLayoutItem) SetMinimumHeight(height float64) {
	C.QGraphicsLayoutItem_SetMinimumHeight(this.h, (C.double)(height))
}

func (this *QGraphicsLayoutItem) MinimumHeight() float64 {
	ret := C.QGraphicsLayoutItem_MinimumHeight(this.h)
	return (float64)(ret)
}

func (this *QGraphicsLayoutItem) SetPreferredSize(size *QSizeF) {
	C.QGraphicsLayoutItem_SetPreferredSize(this.h, size.cPointer())
}

func (this *QGraphicsLayoutItem) SetPreferredSize2(w float64, h float64) {
	C.QGraphicsLayoutItem_SetPreferredSize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsLayoutItem) PreferredSize() *QSizeF {
	ret := C.QGraphicsLayoutItem_PreferredSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLayoutItem) SetPreferredWidth(width float64) {
	C.QGraphicsLayoutItem_SetPreferredWidth(this.h, (C.double)(width))
}

func (this *QGraphicsLayoutItem) PreferredWidth() float64 {
	ret := C.QGraphicsLayoutItem_PreferredWidth(this.h)
	return (float64)(ret)
}

func (this *QGraphicsLayoutItem) SetPreferredHeight(height float64) {
	C.QGraphicsLayoutItem_SetPreferredHeight(this.h, (C.double)(height))
}

func (this *QGraphicsLayoutItem) PreferredHeight() float64 {
	ret := C.QGraphicsLayoutItem_PreferredHeight(this.h)
	return (float64)(ret)
}

func (this *QGraphicsLayoutItem) SetMaximumSize(size *QSizeF) {
	C.QGraphicsLayoutItem_SetMaximumSize(this.h, size.cPointer())
}

func (this *QGraphicsLayoutItem) SetMaximumSize2(w float64, h float64) {
	C.QGraphicsLayoutItem_SetMaximumSize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsLayoutItem) MaximumSize() *QSizeF {
	ret := C.QGraphicsLayoutItem_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLayoutItem) SetMaximumWidth(width float64) {
	C.QGraphicsLayoutItem_SetMaximumWidth(this.h, (C.double)(width))
}

func (this *QGraphicsLayoutItem) MaximumWidth() float64 {
	ret := C.QGraphicsLayoutItem_MaximumWidth(this.h)
	return (float64)(ret)
}

func (this *QGraphicsLayoutItem) SetMaximumHeight(height float64) {
	C.QGraphicsLayoutItem_SetMaximumHeight(this.h, (C.double)(height))
}

func (this *QGraphicsLayoutItem) MaximumHeight() float64 {
	ret := C.QGraphicsLayoutItem_MaximumHeight(this.h)
	return (float64)(ret)
}

func (this *QGraphicsLayoutItem) SetGeometry(rect *QRectF) {
	C.QGraphicsLayoutItem_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsLayoutItem) Geometry() *QRectF {
	ret := C.QGraphicsLayoutItem_Geometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLayoutItem) GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {
	C.QGraphicsLayoutItem_GetContentsMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QGraphicsLayoutItem) ContentsRect() *QRectF {
	ret := C.QGraphicsLayoutItem_ContentsRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLayoutItem) EffectiveSizeHint(which uintptr) *QSizeF {
	ret := C.QGraphicsLayoutItem_EffectiveSizeHint(this.h, (C.uintptr_t)(which))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLayoutItem) UpdateGeometry() {
	C.QGraphicsLayoutItem_UpdateGeometry(this.h)
}

func (this *QGraphicsLayoutItem) ParentLayoutItem() *QGraphicsLayoutItem {
	ret := C.QGraphicsLayoutItem_ParentLayoutItem(this.h)
	return newQGraphicsLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsLayoutItem) SetParentLayoutItem(parent *QGraphicsLayoutItem) {
	C.QGraphicsLayoutItem_SetParentLayoutItem(this.h, parent.cPointer())
}

func (this *QGraphicsLayoutItem) IsLayout() bool {
	ret := C.QGraphicsLayoutItem_IsLayout(this.h)
	return (bool)(ret)
}

func (this *QGraphicsLayoutItem) GraphicsItem() *QGraphicsItem {
	ret := C.QGraphicsLayoutItem_GraphicsItem(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsLayoutItem) OwnedByLayout() bool {
	ret := C.QGraphicsLayoutItem_OwnedByLayout(this.h)
	return (bool)(ret)
}

func (this *QGraphicsLayoutItem) SetSizePolicy3(hPolicy uintptr, vPolicy uintptr, controlType uintptr) {
	C.QGraphicsLayoutItem_SetSizePolicy3(this.h, (C.uintptr_t)(hPolicy), (C.uintptr_t)(vPolicy), (C.uintptr_t)(controlType))
}

func (this *QGraphicsLayoutItem) EffectiveSizeHint2(which uintptr, constraint *QSizeF) *QSizeF {
	ret := C.QGraphicsLayoutItem_EffectiveSizeHint2(this.h, (C.uintptr_t)(which), constraint.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLayoutItem) Delete() {
	C.QGraphicsLayoutItem_Delete(this.h)
}
