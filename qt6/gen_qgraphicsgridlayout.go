package qt6

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
	C.QGraphicsGridLayout_AddItem(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGraphicsGridLayout) AddItem2(item *QGraphicsLayoutItem, row int, column int) {
	C.QGraphicsGridLayout_AddItem2(this.h, item.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGraphicsGridLayout) SetHorizontalSpacing(spacing float64) {
	C.QGraphicsGridLayout_SetHorizontalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsGridLayout) HorizontalSpacing() float64 {
	return (float64)(C.QGraphicsGridLayout_HorizontalSpacing(this.h))
}

func (this *QGraphicsGridLayout) SetVerticalSpacing(spacing float64) {
	C.QGraphicsGridLayout_SetVerticalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsGridLayout) VerticalSpacing() float64 {
	return (float64)(C.QGraphicsGridLayout_VerticalSpacing(this.h))
}

func (this *QGraphicsGridLayout) SetSpacing(spacing float64) {
	C.QGraphicsGridLayout_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsGridLayout) SetRowSpacing(row int, spacing float64) {
	C.QGraphicsGridLayout_SetRowSpacing(this.h, (C.int)(row), (C.double)(spacing))
}

func (this *QGraphicsGridLayout) RowSpacing(row int) float64 {
	return (float64)(C.QGraphicsGridLayout_RowSpacing(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetColumnSpacing(column int, spacing float64) {
	C.QGraphicsGridLayout_SetColumnSpacing(this.h, (C.int)(column), (C.double)(spacing))
}

func (this *QGraphicsGridLayout) ColumnSpacing(column int) float64 {
	return (float64)(C.QGraphicsGridLayout_ColumnSpacing(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetRowStretchFactor(row int, stretch int) {
	C.QGraphicsGridLayout_SetRowStretchFactor(this.h, (C.int)(row), (C.int)(stretch))
}

func (this *QGraphicsGridLayout) RowStretchFactor(row int) int {
	return (int)(C.QGraphicsGridLayout_RowStretchFactor(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetColumnStretchFactor(column int, stretch int) {
	C.QGraphicsGridLayout_SetColumnStretchFactor(this.h, (C.int)(column), (C.int)(stretch))
}

func (this *QGraphicsGridLayout) ColumnStretchFactor(column int) int {
	return (int)(C.QGraphicsGridLayout_ColumnStretchFactor(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetRowMinimumHeight(row int, height float64) {
	C.QGraphicsGridLayout_SetRowMinimumHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) RowMinimumHeight(row int) float64 {
	return (float64)(C.QGraphicsGridLayout_RowMinimumHeight(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetRowPreferredHeight(row int, height float64) {
	C.QGraphicsGridLayout_SetRowPreferredHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) RowPreferredHeight(row int) float64 {
	return (float64)(C.QGraphicsGridLayout_RowPreferredHeight(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetRowMaximumHeight(row int, height float64) {
	C.QGraphicsGridLayout_SetRowMaximumHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) RowMaximumHeight(row int) float64 {
	return (float64)(C.QGraphicsGridLayout_RowMaximumHeight(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetRowFixedHeight(row int, height float64) {
	C.QGraphicsGridLayout_SetRowFixedHeight(this.h, (C.int)(row), (C.double)(height))
}

func (this *QGraphicsGridLayout) SetColumnMinimumWidth(column int, width float64) {
	C.QGraphicsGridLayout_SetColumnMinimumWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) ColumnMinimumWidth(column int) float64 {
	return (float64)(C.QGraphicsGridLayout_ColumnMinimumWidth(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetColumnPreferredWidth(column int, width float64) {
	C.QGraphicsGridLayout_SetColumnPreferredWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) ColumnPreferredWidth(column int) float64 {
	return (float64)(C.QGraphicsGridLayout_ColumnPreferredWidth(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetColumnMaximumWidth(column int, width float64) {
	C.QGraphicsGridLayout_SetColumnMaximumWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) ColumnMaximumWidth(column int) float64 {
	return (float64)(C.QGraphicsGridLayout_ColumnMaximumWidth(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetColumnFixedWidth(column int, width float64) {
	C.QGraphicsGridLayout_SetColumnFixedWidth(this.h, (C.int)(column), (C.double)(width))
}

func (this *QGraphicsGridLayout) SetRowAlignment(row int, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_SetRowAlignment(this.h, (C.int)(row), (C.int)(alignment))
}

func (this *QGraphicsGridLayout) RowAlignment(row int) AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsGridLayout_RowAlignment(this.h, (C.int)(row)))
}

func (this *QGraphicsGridLayout) SetColumnAlignment(column int, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_SetColumnAlignment(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QGraphicsGridLayout) ColumnAlignment(column int) AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsGridLayout_ColumnAlignment(this.h, (C.int)(column)))
}

func (this *QGraphicsGridLayout) SetAlignment(item *QGraphicsLayoutItem, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_SetAlignment(this.h, item.cPointer(), (C.int)(alignment))
}

func (this *QGraphicsGridLayout) Alignment(item *QGraphicsLayoutItem) AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsGridLayout_Alignment(this.h, item.cPointer()))
}

func (this *QGraphicsGridLayout) RowCount() int {
	return (int)(C.QGraphicsGridLayout_RowCount(this.h))
}

func (this *QGraphicsGridLayout) ColumnCount() int {
	return (int)(C.QGraphicsGridLayout_ColumnCount(this.h))
}

func (this *QGraphicsGridLayout) ItemAt(row int, column int) *QGraphicsLayoutItem {
	return newQGraphicsLayoutItem(C.QGraphicsGridLayout_ItemAt(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QGraphicsGridLayout) Count() int {
	return (int)(C.QGraphicsGridLayout_Count(this.h))
}

func (this *QGraphicsGridLayout) ItemAtWithIndex(index int) *QGraphicsLayoutItem {
	return newQGraphicsLayoutItem(C.QGraphicsGridLayout_ItemAtWithIndex(this.h, (C.int)(index)))
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

func (this *QGraphicsGridLayout) SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {
	_goptr := newQSizeF(C.QGraphicsGridLayout_SizeHint(this.h, (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsGridLayout) AddItem6(item *QGraphicsLayoutItem, row int, column int, rowSpan int, columnSpan int, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_AddItem6(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(alignment))
}

func (this *QGraphicsGridLayout) AddItem4(item *QGraphicsLayoutItem, row int, column int, alignment AlignmentFlag) {
	C.QGraphicsGridLayout_AddItem4(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(alignment))
}

func (this *QGraphicsGridLayout) callVirtualBase_Count() int {

	return (int)(C.QGraphicsGridLayout_virtualbase_Count(unsafe.Pointer(this.h)))

}
func (this *QGraphicsGridLayout) OnCount(slot func(super func() int) int) {
	ok := C.QGraphicsGridLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_Count
func miqt_exec_callback_QGraphicsGridLayout_Count(self *C.QGraphicsGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsGridLayout) callVirtualBase_ItemAtWithIndex(index int) *QGraphicsLayoutItem {

	return newQGraphicsLayoutItem(C.QGraphicsGridLayout_virtualbase_ItemAtWithIndex(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QGraphicsGridLayout) OnItemAtWithIndex(slot func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem) {
	ok := C.QGraphicsGridLayout_override_virtual_ItemAtWithIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_ItemAtWithIndex
func miqt_exec_callback_QGraphicsGridLayout_ItemAtWithIndex(self *C.QGraphicsGridLayout, cb C.intptr_t, index C.int) *C.QGraphicsLayoutItem {
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

	C.QGraphicsGridLayout_virtualbase_RemoveAt(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QGraphicsGridLayout) OnRemoveAt(slot func(super func(index int), index int)) {
	ok := C.QGraphicsGridLayout_override_virtual_RemoveAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_RemoveAt
func miqt_exec_callback_QGraphicsGridLayout_RemoveAt(self *C.QGraphicsGridLayout, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_RemoveAt, slotval1)

}

func (this *QGraphicsGridLayout) callVirtualBase_Invalidate() {

	C.QGraphicsGridLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QGraphicsGridLayout) OnInvalidate(slot func(super func())) {
	ok := C.QGraphicsGridLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_Invalidate
func miqt_exec_callback_QGraphicsGridLayout_Invalidate(self *C.QGraphicsGridLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGraphicsGridLayout) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsGridLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsGridLayout) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsGridLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_SetGeometry
func miqt_exec_callback_QGraphicsGridLayout_SetGeometry(self *C.QGraphicsGridLayout, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsGridLayout) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_goptr := newQSizeF(C.QGraphicsGridLayout_virtualbase_SizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsGridLayout) OnSizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsGridLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_SizeHint
func miqt_exec_callback_QGraphicsGridLayout_SizeHint(self *C.QGraphicsGridLayout, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
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

	C.QGraphicsGridLayout_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsGridLayout) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsGridLayout_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_GetContentsMargins
func miqt_exec_callback_QGraphicsGridLayout_GetContentsMargins(self *C.QGraphicsGridLayout, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
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

	C.QGraphicsGridLayout_virtualbase_UpdateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsGridLayout) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsGridLayout_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_UpdateGeometry
func miqt_exec_callback_QGraphicsGridLayout_UpdateGeometry(self *C.QGraphicsGridLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsGridLayout) callVirtualBase_WidgetEvent(e *QEvent) {

	C.QGraphicsGridLayout_virtualbase_WidgetEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGraphicsGridLayout) OnWidgetEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QGraphicsGridLayout_override_virtual_WidgetEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_WidgetEvent
func miqt_exec_callback_QGraphicsGridLayout_WidgetEvent(self *C.QGraphicsGridLayout, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_WidgetEvent, slotval1)

}

func (this *QGraphicsGridLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QGraphicsGridLayout_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QGraphicsGridLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QGraphicsGridLayout_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsGridLayout_IsEmpty
func miqt_exec_callback_QGraphicsGridLayout_IsEmpty(self *C.QGraphicsGridLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsGridLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QGraphicsGridLayout) Delete() {
	C.QGraphicsGridLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsGridLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsGridLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
