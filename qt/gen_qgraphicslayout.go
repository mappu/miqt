package qt

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

// NewQGraphicsLayout constructs a new QGraphicsLayout object.
func NewQGraphicsLayout() *QGraphicsLayout {
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsLayout_new(&outptr_QGraphicsLayout, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsLayout(outptr_QGraphicsLayout, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLayout2 constructs a new QGraphicsLayout object.
func NewQGraphicsLayout2(parent *QGraphicsLayoutItem) *QGraphicsLayout {
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsLayout_new2(parent.cPointer(), &outptr_QGraphicsLayout, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsLayout(outptr_QGraphicsLayout, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
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

func (this *QGraphicsLayout) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsLayout_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsLayout) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLayout_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLayout_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLayout_override_virtual_WidgetEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLayout_WidgetEvent
func miqt_exec_callback_QGraphicsLayout_WidgetEvent(self *C.QGraphicsLayout, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_WidgetEvent, slotval1)

}
func (this *QGraphicsLayout) OnCount(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLayout_override_virtual_RemoveAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLayout_SetGeometry
func miqt_exec_callback_QGraphicsLayout_SetGeometry(self *C.QGraphicsLayout, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}
func (this *QGraphicsLayout) OnSizeHint(slot func(which SizeHint, constraint *QSizeF) *QSizeF) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLayout_SizeHint
func miqt_exec_callback_QGraphicsLayout_SizeHint(self *C.QGraphicsLayout, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := UnsafeNewQSizeF(unsafe.Pointer(constraint))

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

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
