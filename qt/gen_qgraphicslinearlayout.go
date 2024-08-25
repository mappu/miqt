package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgraphicslinearlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QGraphicsLinearLayout struct {
	h *C.QGraphicsLinearLayout
	*QGraphicsLayout
}

func (this *QGraphicsLinearLayout) cPointer() *C.QGraphicsLinearLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsLinearLayout(h *C.QGraphicsLinearLayout) *QGraphicsLinearLayout {
	return &QGraphicsLinearLayout{h: h, QGraphicsLayout: newQGraphicsLayout_U(unsafe.Pointer(h))}
}

func newQGraphicsLinearLayout_U(h unsafe.Pointer) *QGraphicsLinearLayout {
	return newQGraphicsLinearLayout((*C.QGraphicsLinearLayout)(h))
}

// NewQGraphicsLinearLayout constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout() *QGraphicsLinearLayout {
	ret := C.QGraphicsLinearLayout_new()
	return newQGraphicsLinearLayout(ret)
}

// NewQGraphicsLinearLayout2 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout2(parent *QGraphicsLayoutItem) *QGraphicsLinearLayout {
	ret := C.QGraphicsLinearLayout_new2(parent.cPointer())
	return newQGraphicsLinearLayout(ret)
}

func (this *QGraphicsLinearLayout) AddItem(item *QGraphicsLayoutItem) {
	C.QGraphicsLinearLayout_AddItem(this.h, item.cPointer())
}

func (this *QGraphicsLinearLayout) AddStretch() {
	C.QGraphicsLinearLayout_AddStretch(this.h)
}

func (this *QGraphicsLinearLayout) InsertItem(index int, item *QGraphicsLayoutItem) {
	C.QGraphicsLinearLayout_InsertItem(this.h, (C.int)(index), item.cPointer())
}

func (this *QGraphicsLinearLayout) InsertStretch(index int) {
	C.QGraphicsLinearLayout_InsertStretch(this.h, (C.int)(index))
}

func (this *QGraphicsLinearLayout) RemoveItem(item *QGraphicsLayoutItem) {
	C.QGraphicsLinearLayout_RemoveItem(this.h, item.cPointer())
}

func (this *QGraphicsLinearLayout) RemoveAt(index int) {
	C.QGraphicsLinearLayout_RemoveAt(this.h, (C.int)(index))
}

func (this *QGraphicsLinearLayout) SetSpacing(spacing float64) {
	C.QGraphicsLinearLayout_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsLinearLayout) Spacing() float64 {
	ret := C.QGraphicsLinearLayout_Spacing(this.h)
	return (float64)(ret)
}

func (this *QGraphicsLinearLayout) SetItemSpacing(index int, spacing float64) {
	C.QGraphicsLinearLayout_SetItemSpacing(this.h, (C.int)(index), (C.double)(spacing))
}

func (this *QGraphicsLinearLayout) ItemSpacing(index int) float64 {
	ret := C.QGraphicsLinearLayout_ItemSpacing(this.h, (C.int)(index))
	return (float64)(ret)
}

func (this *QGraphicsLinearLayout) SetStretchFactor(item *QGraphicsLayoutItem, stretch int) {
	C.QGraphicsLinearLayout_SetStretchFactor(this.h, item.cPointer(), (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) StretchFactor(item *QGraphicsLayoutItem) int {
	ret := C.QGraphicsLinearLayout_StretchFactor(this.h, item.cPointer())
	return (int)(ret)
}

func (this *QGraphicsLinearLayout) SetGeometry(rect *QRectF) {
	C.QGraphicsLinearLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsLinearLayout) Count() int {
	ret := C.QGraphicsLinearLayout_Count(this.h)
	return (int)(ret)
}

func (this *QGraphicsLinearLayout) ItemAt(index int) *QGraphicsLayoutItem {
	ret := C.QGraphicsLinearLayout_ItemAt(this.h, (C.int)(index))
	return newQGraphicsLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsLinearLayout) Invalidate() {
	C.QGraphicsLinearLayout_Invalidate(this.h)
}

func (this *QGraphicsLinearLayout) Dump() {
	C.QGraphicsLinearLayout_Dump(this.h)
}

func (this *QGraphicsLinearLayout) AddStretch1(stretch int) {
	C.QGraphicsLinearLayout_AddStretch1(this.h, (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) InsertStretch2(index int, stretch int) {
	C.QGraphicsLinearLayout_InsertStretch2(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) Dump1(indent int) {
	C.QGraphicsLinearLayout_Dump1(this.h, (C.int)(indent))
}

func (this *QGraphicsLinearLayout) Delete() {
	C.QGraphicsLinearLayout_Delete(this.h)
}
