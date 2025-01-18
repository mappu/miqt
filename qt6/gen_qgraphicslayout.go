package qt6

/*

#include "gen_qgraphicslayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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

func (this *QGraphicsLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsLayout constructs the type using only CGO pointers.
func newQGraphicsLayout(h *C.QGraphicsLayout) *QGraphicsLayout {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil
	C.QGraphicsLayout_virtbase(h, &outptr_QGraphicsLayoutItem)

	return &QGraphicsLayout{h: h,
		QGraphicsLayoutItem: newQGraphicsLayoutItem(outptr_QGraphicsLayoutItem)}
}

// UnsafeNewQGraphicsLayout constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsLayout(h unsafe.Pointer) *QGraphicsLayout {
	return newQGraphicsLayout((*C.QGraphicsLayout)(h))
}

// NewQGraphicsLayout constructs a new QGraphicsLayout object.
func NewQGraphicsLayout() *QGraphicsLayout {

	return newQGraphicsLayout(C.QGraphicsLayout_new())
}

// NewQGraphicsLayout2 constructs a new QGraphicsLayout object.
func NewQGraphicsLayout2(parent *QGraphicsLayoutItem) *QGraphicsLayout {

	return newQGraphicsLayout(C.QGraphicsLayout_new2(parent.cPointer()))
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
	return newQGraphicsLayoutItem(C.QGraphicsLayout_ItemAt(this.h, (C.int)(i)))
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

func (this *QGraphicsLayout) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsLayout_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsLayout) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsLayout_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_GetContentsMargins
func miqt_exec_callback_QGraphicsLayout_GetContentsMargins(self *C.QGraphicsLayout, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QGraphicsLayout) callVirtualBase_Invalidate() {

	C.QGraphicsLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QGraphicsLayout) OnInvalidate(slot func(super func())) {
	ok := C.QGraphicsLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_Invalidate
func miqt_exec_callback_QGraphicsLayout_Invalidate(self *C.QGraphicsLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGraphicsLayout) callVirtualBase_UpdateGeometry() {

	C.QGraphicsLayout_virtualbase_UpdateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsLayout) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsLayout_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_UpdateGeometry
func miqt_exec_callback_QGraphicsLayout_UpdateGeometry(self *C.QGraphicsLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsLayout) callVirtualBase_WidgetEvent(e *QEvent) {

	C.QGraphicsLayout_virtualbase_WidgetEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGraphicsLayout) OnWidgetEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QGraphicsLayout_override_virtual_WidgetEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_WidgetEvent
func miqt_exec_callback_QGraphicsLayout_WidgetEvent(self *C.QGraphicsLayout, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_WidgetEvent, slotval1)

}
func (this *QGraphicsLayout) OnCount(slot func() int) {
	ok := C.QGraphicsLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_Count
func miqt_exec_callback_QGraphicsLayout_Count(self *C.QGraphicsLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QGraphicsLayout) OnItemAt(slot func(i int) *QGraphicsLayoutItem) {
	ok := C.QGraphicsLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_ItemAt
func miqt_exec_callback_QGraphicsLayout_ItemAt(self *C.QGraphicsLayout, cb C.intptr_t, i C.int) *C.QGraphicsLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(i int) *QGraphicsLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(i)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QGraphicsLayout) OnRemoveAt(slot func(index int)) {
	ok := C.QGraphicsLayout_override_virtual_RemoveAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_RemoveAt
func miqt_exec_callback_QGraphicsLayout_RemoveAt(self *C.QGraphicsLayout, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)

}

func (this *QGraphicsLayout) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsLayout) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_SetGeometry
func miqt_exec_callback_QGraphicsLayout_SetGeometry(self *C.QGraphicsLayout, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QGraphicsLayout_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QGraphicsLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QGraphicsLayout_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_IsEmpty
func miqt_exec_callback_QGraphicsLayout_IsEmpty(self *C.QGraphicsLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}
func (this *QGraphicsLayout) OnSizeHint(slot func(which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_SizeHint
func miqt_exec_callback_QGraphicsLayout_SizeHint(self *C.QGraphicsLayout, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := newQSizeF(constraint)

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsLayout) Delete() {
	C.QGraphicsLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
