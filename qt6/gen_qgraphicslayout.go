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
	C.QGraphicsLayout_setContentsMargins(this.h, (C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom))
}

func (this *QGraphicsLayout) GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {
	C.QGraphicsLayout_getContentsMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QGraphicsLayout) Activate() {
	C.QGraphicsLayout_activate(this.h)
}

func (this *QGraphicsLayout) IsActivated() bool {
	return (bool)(C.QGraphicsLayout_isActivated(this.h))
}

func (this *QGraphicsLayout) Invalidate() {
	C.QGraphicsLayout_invalidate(this.h)
}

func (this *QGraphicsLayout) UpdateGeometry() {
	C.QGraphicsLayout_updateGeometry(this.h)
}

func (this *QGraphicsLayout) WidgetEvent(e *QEvent) {
	C.QGraphicsLayout_widgetEvent(this.h, e.cPointer())
}

func (this *QGraphicsLayout) Count() int {
	return (int)(C.QGraphicsLayout_count(this.h))
}

func (this *QGraphicsLayout) ItemAt(i int) *QGraphicsLayoutItem {
	return newQGraphicsLayoutItem(C.QGraphicsLayout_itemAt(this.h, (C.int)(i)))
}

func (this *QGraphicsLayout) RemoveAt(index int) {
	C.QGraphicsLayout_removeAt(this.h, (C.int)(index))
}

func QGraphicsLayout_SetInstantInvalidatePropagation(enable bool) {
	C.QGraphicsLayout_setInstantInvalidatePropagation((C.bool)(enable))
}

func QGraphicsLayout_InstantInvalidatePropagation() bool {
	return (bool)(C.QGraphicsLayout_instantInvalidatePropagation())
}

func (this *QGraphicsLayout) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsLayout_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsLayout) OngetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsLayout_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_getContentsMargins
func miqt_exec_callback_QGraphicsLayout_getContentsMargins(self *C.QGraphicsLayout, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
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

	C.QGraphicsLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QGraphicsLayout) Oninvalidate(slot func(super func())) {
	ok := C.QGraphicsLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_invalidate
func miqt_exec_callback_QGraphicsLayout_invalidate(self *C.QGraphicsLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGraphicsLayout) callVirtualBase_UpdateGeometry() {

	C.QGraphicsLayout_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsLayout) OnupdateGeometry(slot func(super func())) {
	ok := C.QGraphicsLayout_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_updateGeometry
func miqt_exec_callback_QGraphicsLayout_updateGeometry(self *C.QGraphicsLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsLayout) callVirtualBase_WidgetEvent(e *QEvent) {

	C.QGraphicsLayout_virtualbase_widgetEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGraphicsLayout) OnwidgetEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QGraphicsLayout_override_virtual_widgetEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_widgetEvent
func miqt_exec_callback_QGraphicsLayout_widgetEvent(self *C.QGraphicsLayout, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_WidgetEvent, slotval1)

}
func (this *QGraphicsLayout) Oncount(slot func() int) {
	ok := C.QGraphicsLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_count
func miqt_exec_callback_QGraphicsLayout_count(self *C.QGraphicsLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QGraphicsLayout) OnitemAt(slot func(i int) *QGraphicsLayoutItem) {
	ok := C.QGraphicsLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_itemAt
func miqt_exec_callback_QGraphicsLayout_itemAt(self *C.QGraphicsLayout, cb C.intptr_t, i C.int) *C.QGraphicsLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(i int) *QGraphicsLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(i)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QGraphicsLayout) OnremoveAt(slot func(index int)) {
	ok := C.QGraphicsLayout_override_virtual_removeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_removeAt
func miqt_exec_callback_QGraphicsLayout_removeAt(self *C.QGraphicsLayout, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)

}

func (this *QGraphicsLayout) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsLayout) OnsetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_setGeometry
func miqt_exec_callback_QGraphicsLayout_setGeometry(self *C.QGraphicsLayout, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QGraphicsLayout_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QGraphicsLayout) OnisEmpty(slot func(super func() bool) bool) {
	ok := C.QGraphicsLayout_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_isEmpty
func miqt_exec_callback_QGraphicsLayout_isEmpty(self *C.QGraphicsLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}
func (this *QGraphicsLayout) OnsizeHint(slot func(which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayout_sizeHint
func miqt_exec_callback_QGraphicsLayout_sizeHint(self *C.QGraphicsLayout, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
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
	C.QGraphicsLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
