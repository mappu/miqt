package qt

/*

#include "gen_qgraphicsgridlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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

func (this *QGraphicsGridLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsGridLayout constructs the type using only CGO pointers.
func newQGraphicsGridLayout(h *C.QGraphicsGridLayout) *QGraphicsGridLayout {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	C.QGraphicsGridLayout_virtbase(h, &outptr_QGraphicsLayout)

	return &QGraphicsGridLayout{h: h,
		QGraphicsLayout: newQGraphicsLayout(outptr_QGraphicsLayout)}
}

// UnsafeNewQGraphicsGridLayout constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsGridLayout(h unsafe.Pointer) *QGraphicsGridLayout {
	return newQGraphicsGridLayout((*C.QGraphicsGridLayout)(h))
}

// NewQGraphicsGridLayout constructs a new QGraphicsGridLayout object.
func NewQGraphicsGridLayout() *QGraphicsGridLayout {

	return newQGraphicsGridLayout(C.QGraphicsGridLayout_new())
}

// NewQGraphicsGridLayout2 constructs a new QGraphicsGridLayout object.
func NewQGraphicsGridLayout2(parent *QGraphicsLayoutItem) *QGraphicsGridLayout {

	return newQGraphicsGridLayout(C.QGraphicsGridLayout_new2(parent.cPointer()))
}

func (this *QGraphicsGridLayout) AddItem(item *QGraphicsLayoutItem, row int, column int, rowSpan int, columnSpan int) {
	C.QGraphicsGridLayout_addItem(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGraphicsGridLayout) AddItem2(item *QGraphicsLayoutItem, row int, column int) {
	C.QGraphicsGridLayout_addItem2(this.h, item.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGraphicsGridLayout) SetHorizontalSpacing(spacing float64) {
	C.QGraphicsGridLayout_setHorizontalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsGridLayout) HorizontalSpacing() float64 {
	return (float64)(C.QGraphicsGridLayout_horizontalSpacing(this.h))
}

func (this *QGraphicsGridLayout) SetVerticalSpacing(spacing float64) {
	C.QGraphicsGridLayout_setVerticalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsGridLayout) VerticalSpacing() float64 {
	return (float64)(C.QGraphicsGridLayout_verticalSpacing(this.h))
}

func (this *QGraphicsGridLayout) SetSpacing(spacing float64) {
	C.QGraphicsGridLayout_setSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsGridLayout) SetRowSpacing(row int, spacing float64) {
	C.QGraphicsGridLayout_setRowSpacing(this.h, (C.int)(row), (C.double)(spacing))
}

func (this *QGraphicsGridLayout) RowSpacing(row int) float64 {
	return (float64)(C.QGraphicsGridLayout_rowSpacing(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetColumnSpacing(column int, spacing float64) {
	C.QGraphicsGridLayout_setColumnSpacing(this.h, (C.int)(column), (C.double)(spacing))
}

func (this *QGraphicsGridLayout) ColumnSpacing(column int) float64 {
	return (float64)(C.QGraphicsGridLayout_columnSpacing(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetRowStretchFactor(row int, stretch int) {
	C.QGraphicsGridLayout_setRowStretchFactor(this.h, (C.int)(row), (C.int)(stretch))
}

func (this *QGraphicsGridLayout) RowStretchFactor(row int) int {
	return (int)(C.QGraphicsGridLayout_rowStretchFactor(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetColumnStretchFactor(column int, stretch int) {
	C.QGraphicsGridLayout_setColumnStretchFactor(this.h, (C.int)(column), (C.int)(stretch))
}

func (this *QGraphicsGridLayout) ColumnStretchFactor(column int) int {
	return (int)(C.QGraphicsGridLayout_columnStretchFactor(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetRowMinimumHeight(row int, height float64) {
	C.QGraphicsGridLayout_setRowMinimumHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) RowMinimumHeight(row int) float64 {
	return (float64)(C.QGraphicsGridLayout_rowMinimumHeight(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetRowPreferredHeight(row int, height float64) {
	C.QGraphicsGridLayout_setRowPreferredHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) RowPreferredHeight(row int) float64 {
	return (float64)(C.QGraphicsGridLayout_rowPreferredHeight(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetRowMaximumHeight(row int, height float64) {
	C.QGraphicsGridLayout_setRowMaximumHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) RowMaximumHeight(row int) float64 {
	return (float64)(C.QGraphicsGridLayout_rowMaximumHeight(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetRowFixedHeight(row int, height float64) {
	C.QGraphicsGridLayout_setRowFixedHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) SetColumnMinimumWidth(column int, width float64) {
	C.QGraphicsGridLayout_setColumnMinimumWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) ColumnMinimumWidth(column int) float64 {
	return (float64)(C.QGraphicsGridLayout_columnMinimumWidth(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetColumnPreferredWidth(column int, width float64) {
	C.QGraphicsGridLayout_setColumnPreferredWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) ColumnPreferredWidth(column int) float64 {
	return (float64)(C.QGraphicsGridLayout_columnPreferredWidth(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetColumnMaximumWidth(column int, width float64) {
	C.QGraphicsGridLayout_setColumnMaximumWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) ColumnMaximumWidth(column int) float64 {
	return (float64)(C.QGraphicsGridLayout_columnMaximumWidth(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetColumnFixedWidth(column int, width float64) {
	C.QGraphicsGridLayout_setColumnFixedWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) SetRowAlignment(row int, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_setRowAlignment(this.h, (C.int)(row), (C.int)(alignment))
}

func (this *QGraphicsGridLayout) RowAlignment(row int) AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsGridLayout_rowAlignment(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetColumnAlignment(column int, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_setColumnAlignment(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QGraphicsGridLayout) ColumnAlignment(column int) AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsGridLayout_columnAlignment(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetAlignment(item *QGraphicsLayoutItem, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_setAlignment(this.h, item.cPointer(), (C.int)(alignment))
}

func (this *QGraphicsGridLayout) Alignment(item *QGraphicsLayoutItem) AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsGridLayout_alignment(this.h, item.cPointer()))
}

func (this *QGraphicsGridLayout) RowCount() int {
	return (int)(C.QGraphicsGridLayout_rowCount(this.h))
}

func (this *QGraphicsGridLayout) ColumnCount() int {
	return (int)(C.QGraphicsGridLayout_columnCount(this.h))
}

func (this *QGraphicsGridLayout) ItemAt(row int, column int) *QGraphicsLayoutItem {
	return newQGraphicsLayoutItem(C.QGraphicsGridLayout_itemAt(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QGraphicsGridLayout) Count() int {
	return (int)(C.QGraphicsGridLayout_count(this.h))
}

func (this *QGraphicsGridLayout) ItemAtWithIndex(index int) *QGraphicsLayoutItem {
	return newQGraphicsLayoutItem(C.QGraphicsGridLayout_itemAtWithIndex(this.h, (C.int)(index)))
}

func (this *QGraphicsGridLayout) RemoveAt(index int) {
	C.QGraphicsGridLayout_removeAt(this.h, (C.int)(index))
}

func (this *QGraphicsGridLayout) RemoveItem(item *QGraphicsLayoutItem) {
	C.QGraphicsGridLayout_removeItem(this.h, item.cPointer())
}

func (this *QGraphicsGridLayout) Invalidate() {
	C.QGraphicsGridLayout_invalidate(this.h)
}

func (this *QGraphicsGridLayout) SetGeometry(rect *QRectF) {
	C.QGraphicsGridLayout_setGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsGridLayout) SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {
	_goptr := newQSizeF(C.QGraphicsGridLayout_sizeHint(this.h, (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsGridLayout) AddItem3(item *QGraphicsLayoutItem, row int, column int, rowSpan int, columnSpan int, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_addItem3(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(alignment))
}

func (this *QGraphicsGridLayout) AddItem4(item *QGraphicsLayoutItem, row int, column int, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_addItem4(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(alignment))
}

// AddChildLayoutItem can only be called from a QGraphicsGridLayout that was directly constructed.
func (this *QGraphicsGridLayout) AddChildLayoutItem(layoutItem *QGraphicsLayoutItem) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsGridLayout_protectedbase_addChildLayoutItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), layoutItem.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetGraphicsItem can only be called from a QGraphicsGridLayout that was directly constructed.
func (this *QGraphicsGridLayout) SetGraphicsItem(item *QGraphicsItem) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsGridLayout_protectedbase_setGraphicsItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), item.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOwnedByLayout can only be called from a QGraphicsGridLayout that was directly constructed.
func (this *QGraphicsGridLayout) SetOwnedByLayout(ownedByLayout bool) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsGridLayout_protectedbase_setOwnedByLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(ownedByLayout))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsGridLayout) callVirtualBase_Count() int {

	return (int)(C.QGraphicsGridLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QGraphicsGridLayout) OnCount(slot func(super func() int) int) {
	ok := C.QGraphicsGridLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_count
func miqt_exec_callback_QGraphicsGridLayout_count(self *C.QGraphicsGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsGridLayout) callVirtualBase_ItemAtWithIndex(index int) *QGraphicsLayoutItem {

	return newQGraphicsLayoutItem(C.QGraphicsGridLayout_virtualbase_itemAtWithIndex(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QGraphicsGridLayout) OnItemAtWithIndex(slot func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem) {
	ok := C.QGraphicsGridLayout_override_virtual_itemAtWithIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_itemAtWithIndex
func miqt_exec_callback_QGraphicsGridLayout_itemAtWithIndex(self *C.QGraphicsGridLayout, cb C.intptr_t, index C.int) *C.QGraphicsLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_ItemAtWithIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsGridLayout) callVirtualBase_RemoveAt(index int) {

	C.QGraphicsGridLayout_virtualbase_removeAt(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QGraphicsGridLayout) OnRemoveAt(slot func(super func(index int), index int)) {
	ok := C.QGraphicsGridLayout_override_virtual_removeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_removeAt
func miqt_exec_callback_QGraphicsGridLayout_removeAt(self *C.QGraphicsGridLayout, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_RemoveAt, slotval1)

}

func (this *QGraphicsGridLayout) callVirtualBase_Invalidate() {

	C.QGraphicsGridLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QGraphicsGridLayout) OnInvalidate(slot func(super func())) {
	ok := C.QGraphicsGridLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_invalidate
func miqt_exec_callback_QGraphicsGridLayout_invalidate(self *C.QGraphicsGridLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGraphicsGridLayout) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsGridLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsGridLayout) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsGridLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_setGeometry
func miqt_exec_callback_QGraphicsGridLayout_setGeometry(self *C.QGraphicsGridLayout, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsGridLayout) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_goptr := newQSizeF(C.QGraphicsGridLayout_virtualbase_sizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsGridLayout) OnSizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsGridLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_sizeHint
func miqt_exec_callback_QGraphicsGridLayout_sizeHint(self *C.QGraphicsGridLayout, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := newQSizeF(constraint)

	virtualReturn := gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsGridLayout) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsGridLayout_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsGridLayout) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsGridLayout_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_getContentsMargins
func miqt_exec_callback_QGraphicsGridLayout_getContentsMargins(self *C.QGraphicsGridLayout, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QGraphicsGridLayout) callVirtualBase_UpdateGeometry() {

	C.QGraphicsGridLayout_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsGridLayout) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsGridLayout_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_updateGeometry
func miqt_exec_callback_QGraphicsGridLayout_updateGeometry(self *C.QGraphicsGridLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsGridLayout) callVirtualBase_WidgetEvent(e *QEvent) {

	C.QGraphicsGridLayout_virtualbase_widgetEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGraphicsGridLayout) OnWidgetEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QGraphicsGridLayout_override_virtual_widgetEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_widgetEvent
func miqt_exec_callback_QGraphicsGridLayout_widgetEvent(self *C.QGraphicsGridLayout, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_WidgetEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsGridLayout) Delete() {
	C.QGraphicsGridLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsGridLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsGridLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
