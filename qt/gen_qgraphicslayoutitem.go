package qt

/*

#include "gen_qgraphicslayoutitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsLayoutItem struct {
	h          *C.QGraphicsLayoutItem
	isSubclass bool
}

func (this *QGraphicsLayoutItem) cPointer() *C.QGraphicsLayoutItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsLayoutItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsLayoutItem constructs the type using only CGO pointers.
func newQGraphicsLayoutItem(h *C.QGraphicsLayoutItem) *QGraphicsLayoutItem {
	if h == nil {
		return nil
	}
	return &QGraphicsLayoutItem{h: h}
}

// UnsafeNewQGraphicsLayoutItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsLayoutItem(h unsafe.Pointer) *QGraphicsLayoutItem {
	if h == nil {
		return nil
	}

	return &QGraphicsLayoutItem{h: (*C.QGraphicsLayoutItem)(h)}
}

// NewQGraphicsLayoutItem constructs a new QGraphicsLayoutItem object.
func NewQGraphicsLayoutItem() *QGraphicsLayoutItem {
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsLayoutItem_new(&outptr_QGraphicsLayoutItem)
	ret := newQGraphicsLayoutItem(outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLayoutItem2 constructs a new QGraphicsLayoutItem object.
func NewQGraphicsLayoutItem2(parent *QGraphicsLayoutItem) *QGraphicsLayoutItem {
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsLayoutItem_new2(parent.cPointer(), &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsLayoutItem(outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLayoutItem3 constructs a new QGraphicsLayoutItem object.
func NewQGraphicsLayoutItem3(parent *QGraphicsLayoutItem, isLayout bool) *QGraphicsLayoutItem {
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsLayoutItem_new3(parent.cPointer(), (C.bool)(isLayout), &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsLayoutItem(outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsLayoutItem) SetSizePolicy(policy *QSizePolicy) {
	C.QGraphicsLayoutItem_SetSizePolicy(this.h, policy.cPointer())
}

func (this *QGraphicsLayoutItem) SetSizePolicy2(hPolicy QSizePolicy__Policy, vPolicy QSizePolicy__Policy) {
	C.QGraphicsLayoutItem_SetSizePolicy2(this.h, (C.int)(hPolicy), (C.int)(vPolicy))
}

func (this *QGraphicsLayoutItem) SizePolicy() *QSizePolicy {
	_ret := C.QGraphicsLayoutItem_SizePolicy(this.h)
	_goptr := newQSizePolicy(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) SetMinimumSize(size *QSizeF) {
	C.QGraphicsLayoutItem_SetMinimumSize(this.h, size.cPointer())
}

func (this *QGraphicsLayoutItem) SetMinimumSize2(w float64, h float64) {
	C.QGraphicsLayoutItem_SetMinimumSize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsLayoutItem) MinimumSize() *QSizeF {
	_ret := C.QGraphicsLayoutItem_MinimumSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) SetMinimumWidth(width float64) {
	C.QGraphicsLayoutItem_SetMinimumWidth(this.h, (C.double)(width))
}

func (this *QGraphicsLayoutItem) MinimumWidth() float64 {
	return (float64)(C.QGraphicsLayoutItem_MinimumWidth(this.h))
}

func (this *QGraphicsLayoutItem) SetMinimumHeight(height float64) {
	C.QGraphicsLayoutItem_SetMinimumHeight(this.h, (C.double)(height))
}

func (this *QGraphicsLayoutItem) MinimumHeight() float64 {
	return (float64)(C.QGraphicsLayoutItem_MinimumHeight(this.h))
}

func (this *QGraphicsLayoutItem) SetPreferredSize(size *QSizeF) {
	C.QGraphicsLayoutItem_SetPreferredSize(this.h, size.cPointer())
}

func (this *QGraphicsLayoutItem) SetPreferredSize2(w float64, h float64) {
	C.QGraphicsLayoutItem_SetPreferredSize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsLayoutItem) PreferredSize() *QSizeF {
	_ret := C.QGraphicsLayoutItem_PreferredSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) SetPreferredWidth(width float64) {
	C.QGraphicsLayoutItem_SetPreferredWidth(this.h, (C.double)(width))
}

func (this *QGraphicsLayoutItem) PreferredWidth() float64 {
	return (float64)(C.QGraphicsLayoutItem_PreferredWidth(this.h))
}

func (this *QGraphicsLayoutItem) SetPreferredHeight(height float64) {
	C.QGraphicsLayoutItem_SetPreferredHeight(this.h, (C.double)(height))
}

func (this *QGraphicsLayoutItem) PreferredHeight() float64 {
	return (float64)(C.QGraphicsLayoutItem_PreferredHeight(this.h))
}

func (this *QGraphicsLayoutItem) SetMaximumSize(size *QSizeF) {
	C.QGraphicsLayoutItem_SetMaximumSize(this.h, size.cPointer())
}

func (this *QGraphicsLayoutItem) SetMaximumSize2(w float64, h float64) {
	C.QGraphicsLayoutItem_SetMaximumSize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsLayoutItem) MaximumSize() *QSizeF {
	_ret := C.QGraphicsLayoutItem_MaximumSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) SetMaximumWidth(width float64) {
	C.QGraphicsLayoutItem_SetMaximumWidth(this.h, (C.double)(width))
}

func (this *QGraphicsLayoutItem) MaximumWidth() float64 {
	return (float64)(C.QGraphicsLayoutItem_MaximumWidth(this.h))
}

func (this *QGraphicsLayoutItem) SetMaximumHeight(height float64) {
	C.QGraphicsLayoutItem_SetMaximumHeight(this.h, (C.double)(height))
}

func (this *QGraphicsLayoutItem) MaximumHeight() float64 {
	return (float64)(C.QGraphicsLayoutItem_MaximumHeight(this.h))
}

func (this *QGraphicsLayoutItem) SetGeometry(rect *QRectF) {
	C.QGraphicsLayoutItem_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsLayoutItem) Geometry() *QRectF {
	_ret := C.QGraphicsLayoutItem_Geometry(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {
	C.QGraphicsLayoutItem_GetContentsMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QGraphicsLayoutItem) ContentsRect() *QRectF {
	_ret := C.QGraphicsLayoutItem_ContentsRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) EffectiveSizeHint(which SizeHint) *QSizeF {
	_ret := C.QGraphicsLayoutItem_EffectiveSizeHint(this.h, (C.int)(which))
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) UpdateGeometry() {
	C.QGraphicsLayoutItem_UpdateGeometry(this.h)
}

func (this *QGraphicsLayoutItem) ParentLayoutItem() *QGraphicsLayoutItem {
	return UnsafeNewQGraphicsLayoutItem(unsafe.Pointer(C.QGraphicsLayoutItem_ParentLayoutItem(this.h)))
}

func (this *QGraphicsLayoutItem) SetParentLayoutItem(parent *QGraphicsLayoutItem) {
	C.QGraphicsLayoutItem_SetParentLayoutItem(this.h, parent.cPointer())
}

func (this *QGraphicsLayoutItem) IsLayout() bool {
	return (bool)(C.QGraphicsLayoutItem_IsLayout(this.h))
}

func (this *QGraphicsLayoutItem) GraphicsItem() *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsLayoutItem_GraphicsItem(this.h)))
}

func (this *QGraphicsLayoutItem) OwnedByLayout() bool {
	return (bool)(C.QGraphicsLayoutItem_OwnedByLayout(this.h))
}

func (this *QGraphicsLayoutItem) SetSizePolicy3(hPolicy QSizePolicy__Policy, vPolicy QSizePolicy__Policy, controlType QSizePolicy__ControlType) {
	C.QGraphicsLayoutItem_SetSizePolicy3(this.h, (C.int)(hPolicy), (C.int)(vPolicy), (C.int)(controlType))
}

func (this *QGraphicsLayoutItem) EffectiveSizeHint2(which SizeHint, constraint *QSizeF) *QSizeF {
	_ret := C.QGraphicsLayoutItem_EffectiveSizeHint2(this.h, (C.int)(which), constraint.cPointer())
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsLayoutItem_virtualbase_SetGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsLayoutItem) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	C.QGraphicsLayoutItem_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLayoutItem_SetGeometry
func miqt_exec_callback_QGraphicsLayoutItem_SetGeometry(self *C.QGraphicsLayoutItem, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QGraphicsLayoutItem{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsLayoutItem) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsLayoutItem_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsLayoutItem) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	C.QGraphicsLayoutItem_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLayoutItem_GetContentsMargins
func miqt_exec_callback_QGraphicsLayoutItem_GetContentsMargins(self *C.QGraphicsLayoutItem, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QGraphicsLayoutItem{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QGraphicsLayoutItem) callVirtualBase_UpdateGeometry() {

	C.QGraphicsLayoutItem_virtualbase_UpdateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsLayoutItem) OnUpdateGeometry(slot func(super func())) {
	C.QGraphicsLayoutItem_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLayoutItem_UpdateGeometry
func miqt_exec_callback_QGraphicsLayoutItem_UpdateGeometry(self *C.QGraphicsLayoutItem, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLayoutItem{h: self}).callVirtualBase_UpdateGeometry)

}
func (this *QGraphicsLayoutItem) OnSizeHint(slot func(which SizeHint, constraint *QSizeF) *QSizeF) {
	C.QGraphicsLayoutItem_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLayoutItem_SizeHint
func miqt_exec_callback_QGraphicsLayoutItem_SizeHint(self *C.QGraphicsLayoutItem, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
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
func (this *QGraphicsLayoutItem) Delete() {
	C.QGraphicsLayoutItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsLayoutItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsLayoutItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
