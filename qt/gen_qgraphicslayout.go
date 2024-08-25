package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgraphicslayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QGraphicsLayout struct {
	h *C.QGraphicsLayout
	*QGraphicsLayoutItem
}

func (this *QGraphicsLayout) cPointer() *C.QGraphicsLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsLayout(h *C.QGraphicsLayout) *QGraphicsLayout {
	return &QGraphicsLayout{h: h, QGraphicsLayoutItem: newQGraphicsLayoutItem_U(unsafe.Pointer(h))}
}

func newQGraphicsLayout_U(h unsafe.Pointer) *QGraphicsLayout {
	return newQGraphicsLayout((*C.QGraphicsLayout)(h))
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
	ret := C.QGraphicsLayout_IsActivated(this.h)
	return (bool)(ret)
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
	ret := C.QGraphicsLayout_Count(this.h)
	return (int)(ret)
}

func (this *QGraphicsLayout) ItemAt(i int) *QGraphicsLayoutItem {
	ret := C.QGraphicsLayout_ItemAt(this.h, (C.int)(i))
	return newQGraphicsLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsLayout) RemoveAt(index int) {
	C.QGraphicsLayout_RemoveAt(this.h, (C.int)(index))
}

func QGraphicsLayout_SetInstantInvalidatePropagation(enable bool) {
	C.QGraphicsLayout_SetInstantInvalidatePropagation((C.bool)(enable))
}

func QGraphicsLayout_InstantInvalidatePropagation() bool {
	ret := C.QGraphicsLayout_InstantInvalidatePropagation()
	return (bool)(ret)
}

func (this *QGraphicsLayout) Delete() {
	C.QGraphicsLayout_Delete(this.h)
}
