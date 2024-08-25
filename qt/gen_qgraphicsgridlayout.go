package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgraphicsgridlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QGraphicsGridLayout struct {
	h *C.QGraphicsGridLayout
	*QGraphicsLayout
}

func (this *QGraphicsGridLayout) cPointer() *C.QGraphicsGridLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsGridLayout(h *C.QGraphicsGridLayout) *QGraphicsGridLayout {
	return &QGraphicsGridLayout{h: h, QGraphicsLayout: newQGraphicsLayout_U(unsafe.Pointer(h))}
}

func newQGraphicsGridLayout_U(h unsafe.Pointer) *QGraphicsGridLayout {
	return newQGraphicsGridLayout((*C.QGraphicsGridLayout)(h))
}

// NewQGraphicsGridLayout constructs a new QGraphicsGridLayout object.
func NewQGraphicsGridLayout() *QGraphicsGridLayout {
	ret := C.QGraphicsGridLayout_new()
	return newQGraphicsGridLayout(ret)
}

// NewQGraphicsGridLayout2 constructs a new QGraphicsGridLayout object.
func NewQGraphicsGridLayout2(parent *QGraphicsLayoutItem) *QGraphicsGridLayout {
	ret := C.QGraphicsGridLayout_new2(parent.cPointer())
	return newQGraphicsGridLayout(ret)
}

func (this *QGraphicsGridLayout) SetHorizontalSpacing(spacing float64) {
	C.QGraphicsGridLayout_SetHorizontalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsGridLayout) HorizontalSpacing() float64 {
	ret := C.QGraphicsGridLayout_HorizontalSpacing(this.h)
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetVerticalSpacing(spacing float64) {
	C.QGraphicsGridLayout_SetVerticalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsGridLayout) VerticalSpacing() float64 {
	ret := C.QGraphicsGridLayout_VerticalSpacing(this.h)
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetSpacing(spacing float64) {
	C.QGraphicsGridLayout_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsGridLayout) SetRowSpacing(row int, spacing float64) {
	C.QGraphicsGridLayout_SetRowSpacing(this.h, (C.int)(row), (C.double)(spacing))
}

func (this *QGraphicsGridLayout) RowSpacing(row int) float64 {
	ret := C.QGraphicsGridLayout_RowSpacing(this.h, (C.int)(row))
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetColumnSpacing(column int, spacing float64) {
	C.QGraphicsGridLayout_SetColumnSpacing(this.h, (C.int)(column), (C.double)(spacing))
}

func (this *QGraphicsGridLayout) ColumnSpacing(column int) float64 {
	ret := C.QGraphicsGridLayout_ColumnSpacing(this.h, (C.int)(column))
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetRowStretchFactor(row int, stretch int) {
	C.QGraphicsGridLayout_SetRowStretchFactor(this.h, (C.int)(row), (C.int)(stretch))
}

func (this *QGraphicsGridLayout) RowStretchFactor(row int) int {
	ret := C.QGraphicsGridLayout_RowStretchFactor(this.h, (C.int)(row))
	return (int)(ret)
}

func (this *QGraphicsGridLayout) SetColumnStretchFactor(column int, stretch int) {
	C.QGraphicsGridLayout_SetColumnStretchFactor(this.h, (C.int)(column), (C.int)(stretch))
}

func (this *QGraphicsGridLayout) ColumnStretchFactor(column int) int {
	ret := C.QGraphicsGridLayout_ColumnStretchFactor(this.h, (C.int)(column))
	return (int)(ret)
}

func (this *QGraphicsGridLayout) SetRowMinimumHeight(row int, height float64) {
	C.QGraphicsGridLayout_SetRowMinimumHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) RowMinimumHeight(row int) float64 {
	ret := C.QGraphicsGridLayout_RowMinimumHeight(this.h, (C.int)(row))
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetRowPreferredHeight(row int, height float64) {
	C.QGraphicsGridLayout_SetRowPreferredHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) RowPreferredHeight(row int) float64 {
	ret := C.QGraphicsGridLayout_RowPreferredHeight(this.h, (C.int)(row))
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetRowMaximumHeight(row int, height float64) {
	C.QGraphicsGridLayout_SetRowMaximumHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) RowMaximumHeight(row int) float64 {
	ret := C.QGraphicsGridLayout_RowMaximumHeight(this.h, (C.int)(row))
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetRowFixedHeight(row int, height float64) {
	C.QGraphicsGridLayout_SetRowFixedHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) SetColumnMinimumWidth(column int, width float64) {
	C.QGraphicsGridLayout_SetColumnMinimumWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) ColumnMinimumWidth(column int) float64 {
	ret := C.QGraphicsGridLayout_ColumnMinimumWidth(this.h, (C.int)(column))
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetColumnPreferredWidth(column int, width float64) {
	C.QGraphicsGridLayout_SetColumnPreferredWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) ColumnPreferredWidth(column int) float64 {
	ret := C.QGraphicsGridLayout_ColumnPreferredWidth(this.h, (C.int)(column))
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetColumnMaximumWidth(column int, width float64) {
	C.QGraphicsGridLayout_SetColumnMaximumWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) ColumnMaximumWidth(column int) float64 {
	ret := C.QGraphicsGridLayout_ColumnMaximumWidth(this.h, (C.int)(column))
	return (float64)(ret)
}

func (this *QGraphicsGridLayout) SetColumnFixedWidth(column int, width float64) {
	C.QGraphicsGridLayout_SetColumnFixedWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) RowCount() int {
	ret := C.QGraphicsGridLayout_RowCount(this.h)
	return (int)(ret)
}

func (this *QGraphicsGridLayout) ColumnCount() int {
	ret := C.QGraphicsGridLayout_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QGraphicsGridLayout) ItemAt(row int, column int) *QGraphicsLayoutItem {
	ret := C.QGraphicsGridLayout_ItemAt(this.h, (C.int)(row), (C.int)(column))
	return newQGraphicsLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsGridLayout) Count() int {
	ret := C.QGraphicsGridLayout_Count(this.h)
	return (int)(ret)
}

func (this *QGraphicsGridLayout) ItemAtWithIndex(index int) *QGraphicsLayoutItem {
	ret := C.QGraphicsGridLayout_ItemAtWithIndex(this.h, (C.int)(index))
	return newQGraphicsLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsGridLayout) RemoveAt(index int) {
	C.QGraphicsGridLayout_RemoveAt(this.h, (C.int)(index))
}

func (this *QGraphicsGridLayout) RemoveItem(item *QGraphicsLayoutItem) {
	C.QGraphicsGridLayout_RemoveItem(this.h, item.cPointer())
}

func (this *QGraphicsGridLayout) Invalidate() {
	C.QGraphicsGridLayout_Invalidate(this.h)
}

func (this *QGraphicsGridLayout) SetGeometry(rect *QRectF) {
	C.QGraphicsGridLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsGridLayout) Delete() {
	C.QGraphicsGridLayout_Delete(this.h)
}
