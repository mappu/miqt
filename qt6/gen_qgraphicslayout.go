package qt6

/*

#include "gen_qgraphicslayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGraphicsLayout struct {
	h          *C.QGraphicsLayout
	isSubclass bool
	*QGraphicsLayoutItem
}

func (this *QGraphicsLayout) cPointer() *C.QGraphicsLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsLayout constructs the type using only CGO pointers.
func newQGraphicsLayout(h *C.QGraphicsLayout, h_QGraphicsLayoutItem *C.QGraphicsLayoutItem) *QGraphicsLayout {
	if h == nil {
		return nil
	}
	return &QGraphicsLayout{h: h,
		QGraphicsLayoutItem: newQGraphicsLayoutItem(h_QGraphicsLayoutItem)}
}

// UnsafeNewQGraphicsLayout constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsLayout(h unsafe.Pointer, h_QGraphicsLayoutItem unsafe.Pointer) *QGraphicsLayout {
	if h == nil {
		return nil
	}

	return &QGraphicsLayout{h: (*C.QGraphicsLayout)(h),
		QGraphicsLayoutItem: UnsafeNewQGraphicsLayoutItem(h_QGraphicsLayoutItem)}
}

func (this *QGraphicsLayout) SetContentsMargins(left float64, top float64, right float64, bottom float64) {
	C.QGraphicsLayout_SetContentsMargins(this.h, (C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom))
}

func (this *QGraphicsLayout) GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {
	C.QGraphicsLayout_GetContentsMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QGraphicsLayout) Activate() {
	C.QGraphicsLayout_Activate(this.h)
}

func (this *QGraphicsLayout) IsActivated() bool {
	return (bool)(C.QGraphicsLayout_IsActivated(this.h))
}

func (this *QGraphicsLayout) Invalidate() {
	C.QGraphicsLayout_Invalidate(this.h)
}

func (this *QGraphicsLayout) UpdateGeometry() {
	C.QGraphicsLayout_UpdateGeometry(this.h)
}

func (this *QGraphicsLayout) WidgetEvent(e *QEvent) {
	C.QGraphicsLayout_WidgetEvent(this.h, e.cPointer())
}

func (this *QGraphicsLayout) Count() int {
	return (int)(C.QGraphicsLayout_Count(this.h))
}

func (this *QGraphicsLayout) ItemAt(i int) *QGraphicsLayoutItem {
	return UnsafeNewQGraphicsLayoutItem(unsafe.Pointer(C.QGraphicsLayout_ItemAt(this.h, (C.int)(i))))
}

func (this *QGraphicsLayout) RemoveAt(index int) {
	C.QGraphicsLayout_RemoveAt(this.h, (C.int)(index))
}

func QGraphicsLayout_SetInstantInvalidatePropagation(enable bool) {
	C.QGraphicsLayout_SetInstantInvalidatePropagation((C.bool)(enable))
}

func QGraphicsLayout_InstantInvalidatePropagation() bool {
	return (bool)(C.QGraphicsLayout_InstantInvalidatePropagation())
}

// Delete this object from C++ memory.
func (this *QGraphicsLayout) Delete() {
	C.QGraphicsLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
