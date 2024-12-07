package qt

/*

#include "gen_qgraphicslinearlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsLinearLayout struct {
	h          *C.QGraphicsLinearLayout
	isSubclass bool
	*QGraphicsLayout
}

func (this *QGraphicsLinearLayout) cPointer() *C.QGraphicsLinearLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsLinearLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsLinearLayout constructs the type using only CGO pointers.
func newQGraphicsLinearLayout(h *C.QGraphicsLinearLayout, h_QGraphicsLayout *C.QGraphicsLayout, h_QGraphicsLayoutItem *C.QGraphicsLayoutItem) *QGraphicsLinearLayout {
	if h == nil {
		return nil
	}
	return &QGraphicsLinearLayout{h: h,
		QGraphicsLayout: newQGraphicsLayout(h_QGraphicsLayout, h_QGraphicsLayoutItem)}
}

// UnsafeNewQGraphicsLinearLayout constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsLinearLayout(h unsafe.Pointer, h_QGraphicsLayout unsafe.Pointer, h_QGraphicsLayoutItem unsafe.Pointer) *QGraphicsLinearLayout {
	if h == nil {
		return nil
	}

	return &QGraphicsLinearLayout{h: (*C.QGraphicsLinearLayout)(h),
		QGraphicsLayout: UnsafeNewQGraphicsLayout(h_QGraphicsLayout, h_QGraphicsLayoutItem)}
}

// NewQGraphicsLinearLayout constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout() *QGraphicsLinearLayout {
	var outptr_QGraphicsLinearLayout *C.QGraphicsLinearLayout = nil
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsLinearLayout_new(&outptr_QGraphicsLinearLayout, &outptr_QGraphicsLayout, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsLinearLayout(outptr_QGraphicsLinearLayout, outptr_QGraphicsLayout, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLinearLayout2 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout2(orientation Orientation) *QGraphicsLinearLayout {
	var outptr_QGraphicsLinearLayout *C.QGraphicsLinearLayout = nil
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsLinearLayout_new2((C.int)(orientation), &outptr_QGraphicsLinearLayout, &outptr_QGraphicsLayout, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsLinearLayout(outptr_QGraphicsLinearLayout, outptr_QGraphicsLayout, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLinearLayout3 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout3(parent *QGraphicsLayoutItem) *QGraphicsLinearLayout {
	var outptr_QGraphicsLinearLayout *C.QGraphicsLinearLayout = nil
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsLinearLayout_new3(parent.cPointer(), &outptr_QGraphicsLinearLayout, &outptr_QGraphicsLayout, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsLinearLayout(outptr_QGraphicsLinearLayout, outptr_QGraphicsLayout, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLinearLayout4 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout4(orientation Orientation, parent *QGraphicsLayoutItem) *QGraphicsLinearLayout {
	var outptr_QGraphicsLinearLayout *C.QGraphicsLinearLayout = nil
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsLinearLayout_new4((C.int)(orientation), parent.cPointer(), &outptr_QGraphicsLinearLayout, &outptr_QGraphicsLayout, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsLinearLayout(outptr_QGraphicsLinearLayout, outptr_QGraphicsLayout, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsLinearLayout) SetOrientation(orientation Orientation) {
	C.QGraphicsLinearLayout_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QGraphicsLinearLayout) Orientation() Orientation {
	return (Orientation)(C.QGraphicsLinearLayout_Orientation(this.h))
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
	return (float64)(C.QGraphicsLinearLayout_Spacing(this.h))
}

func (this *QGraphicsLinearLayout) SetItemSpacing(index int, spacing float64) {
	C.QGraphicsLinearLayout_SetItemSpacing(this.h, (C.int)(index), (C.double)(spacing))
}

func (this *QGraphicsLinearLayout) ItemSpacing(index int) float64 {
	return (float64)(C.QGraphicsLinearLayout_ItemSpacing(this.h, (C.int)(index)))
}

func (this *QGraphicsLinearLayout) SetStretchFactor(item *QGraphicsLayoutItem, stretch int) {
	C.QGraphicsLinearLayout_SetStretchFactor(this.h, item.cPointer(), (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) StretchFactor(item *QGraphicsLayoutItem) int {
	return (int)(C.QGraphicsLinearLayout_StretchFactor(this.h, item.cPointer()))
}

func (this *QGraphicsLinearLayout) SetAlignment(item *QGraphicsLayoutItem, alignment AlignmentFlag) {
	C.QGraphicsLinearLayout_SetAlignment(this.h, item.cPointer(), (C.int)(alignment))
}

func (this *QGraphicsLinearLayout) Alignment(item *QGraphicsLayoutItem) AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsLinearLayout_Alignment(this.h, item.cPointer()))
}

func (this *QGraphicsLinearLayout) SetGeometry(rect *QRectF) {
	C.QGraphicsLinearLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsLinearLayout) Count() int {
	return (int)(C.QGraphicsLinearLayout_Count(this.h))
}

func (this *QGraphicsLinearLayout) ItemAt(index int) *QGraphicsLayoutItem {
	return newQGraphicsLayoutItem(C.QGraphicsLinearLayout_ItemAt(this.h, (C.int)(index)))
}

func (this *QGraphicsLinearLayout) Invalidate() {
	C.QGraphicsLinearLayout_Invalidate(this.h)
}

func (this *QGraphicsLinearLayout) SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {
	_goptr := newQSizeF(C.QGraphicsLinearLayout_SizeHint(this.h, (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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

func (this *QGraphicsLinearLayout) callVirtualBase_RemoveAt(index int) {

	C.QGraphicsLinearLayout_virtualbase_RemoveAt(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QGraphicsLinearLayout) OnRemoveAt(slot func(super func(index int), index int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLinearLayout_override_virtual_RemoveAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLinearLayout_RemoveAt
func miqt_exec_callback_QGraphicsLinearLayout_RemoveAt(self *C.QGraphicsLinearLayout, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_RemoveAt, slotval1)

}

func (this *QGraphicsLinearLayout) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsLinearLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsLinearLayout) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLinearLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLinearLayout_SetGeometry
func miqt_exec_callback_QGraphicsLinearLayout_SetGeometry(self *C.QGraphicsLinearLayout, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsLinearLayout) callVirtualBase_Count() int {

	return (int)(C.QGraphicsLinearLayout_virtualbase_Count(unsafe.Pointer(this.h)))

}
func (this *QGraphicsLinearLayout) OnCount(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLinearLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLinearLayout_Count
func miqt_exec_callback_QGraphicsLinearLayout_Count(self *C.QGraphicsLinearLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsLinearLayout) callVirtualBase_ItemAt(index int) *QGraphicsLayoutItem {

	return newQGraphicsLayoutItem(C.QGraphicsLinearLayout_virtualbase_ItemAt(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QGraphicsLinearLayout) OnItemAt(slot func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLinearLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLinearLayout_ItemAt
func miqt_exec_callback_QGraphicsLinearLayout_ItemAt(self *C.QGraphicsLinearLayout, cb C.intptr_t, index C.int) *C.QGraphicsLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLinearLayout) callVirtualBase_Invalidate() {

	C.QGraphicsLinearLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QGraphicsLinearLayout) OnInvalidate(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLinearLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLinearLayout_Invalidate
func miqt_exec_callback_QGraphicsLinearLayout_Invalidate(self *C.QGraphicsLinearLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGraphicsLinearLayout) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_goptr := newQSizeF(C.QGraphicsLinearLayout_virtualbase_SizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLinearLayout) OnSizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLinearLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLinearLayout_SizeHint
func miqt_exec_callback_QGraphicsLinearLayout_SizeHint(self *C.QGraphicsLinearLayout, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := newQSizeF(constraint)

	virtualReturn := gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLinearLayout) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsLinearLayout_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsLinearLayout) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLinearLayout_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLinearLayout_GetContentsMargins
func miqt_exec_callback_QGraphicsLinearLayout_GetContentsMargins(self *C.QGraphicsLinearLayout, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QGraphicsLinearLayout) callVirtualBase_UpdateGeometry() {

	C.QGraphicsLinearLayout_virtualbase_UpdateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsLinearLayout) OnUpdateGeometry(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLinearLayout_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLinearLayout_UpdateGeometry
func miqt_exec_callback_QGraphicsLinearLayout_UpdateGeometry(self *C.QGraphicsLinearLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsLinearLayout) callVirtualBase_WidgetEvent(e *QEvent) {

	C.QGraphicsLinearLayout_virtualbase_WidgetEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGraphicsLinearLayout) OnWidgetEvent(slot func(super func(e *QEvent), e *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLinearLayout_override_virtual_WidgetEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLinearLayout_WidgetEvent
func miqt_exec_callback_QGraphicsLinearLayout_WidgetEvent(self *C.QGraphicsLinearLayout, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_WidgetEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsLinearLayout) Delete() {
	C.QGraphicsLinearLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsLinearLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsLinearLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
