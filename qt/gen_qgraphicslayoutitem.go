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
	h  *C.QGraphicsLayoutItem
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsLayoutItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQGraphicsLayoutItem((*C.QGraphicsLayoutItem)(h))
}

// NewQGraphicsLayoutItem constructs a new QGraphicsLayoutItem object.
func NewQGraphicsLayoutItem() *QGraphicsLayoutItem {

	return newQGraphicsLayoutItem(C.QGraphicsLayoutItem_new())
}

// NewQGraphicsLayoutItem2 constructs a new QGraphicsLayoutItem object.
func NewQGraphicsLayoutItem2(parent *QGraphicsLayoutItem) *QGraphicsLayoutItem {
	defer runtime.KeepAlive(parent)

	return newQGraphicsLayoutItem(C.QGraphicsLayoutItem_new2(parent.cPointer()))
}

// NewQGraphicsLayoutItem3 constructs a new QGraphicsLayoutItem object.
func NewQGraphicsLayoutItem3(parent *QGraphicsLayoutItem, isLayout bool) *QGraphicsLayoutItem {
	defer runtime.KeepAlive(parent)

	return newQGraphicsLayoutItem(C.QGraphicsLayoutItem_new3(parent.cPointer(), (C.bool)(isLayout)))
}

func (this *QGraphicsLayoutItem) SetSizePolicy(policy *QSizePolicy) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(policy)
	C.QGraphicsLayoutItem_setSizePolicy(this.h, policy.cPointer())
}

func (this *QGraphicsLayoutItem) SetSizePolicy2(hPolicy QSizePolicy__Policy, vPolicy QSizePolicy__Policy) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setSizePolicy2(this.h, (C.int)(hPolicy), (C.int)(vPolicy))
}

func (this *QGraphicsLayoutItem) SizePolicy() *QSizePolicy {
	defer runtime.KeepAlive(this)
	_goptr := newQSizePolicy(C.QGraphicsLayoutItem_sizePolicy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) SetMinimumSize(size *QSizeF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)
	C.QGraphicsLayoutItem_setMinimumSize(this.h, size.cPointer())
}

func (this *QGraphicsLayoutItem) SetMinimumSize2(w float64, h float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setMinimumSize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsLayoutItem) MinimumSize() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QGraphicsLayoutItem_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) SetMinimumWidth(width float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setMinimumWidth(this.h, (C.double)(width))
}

func (this *QGraphicsLayoutItem) MinimumWidth() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsLayoutItem_minimumWidth(this.h))
}

func (this *QGraphicsLayoutItem) SetMinimumHeight(height float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setMinimumHeight(this.h, (C.double)(height))
}

func (this *QGraphicsLayoutItem) MinimumHeight() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsLayoutItem_minimumHeight(this.h))
}

func (this *QGraphicsLayoutItem) SetPreferredSize(size *QSizeF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)
	C.QGraphicsLayoutItem_setPreferredSize(this.h, size.cPointer())
}

func (this *QGraphicsLayoutItem) SetPreferredSize2(w float64, h float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setPreferredSize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsLayoutItem) PreferredSize() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QGraphicsLayoutItem_preferredSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) SetPreferredWidth(width float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setPreferredWidth(this.h, (C.double)(width))
}

func (this *QGraphicsLayoutItem) PreferredWidth() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsLayoutItem_preferredWidth(this.h))
}

func (this *QGraphicsLayoutItem) SetPreferredHeight(height float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setPreferredHeight(this.h, (C.double)(height))
}

func (this *QGraphicsLayoutItem) PreferredHeight() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsLayoutItem_preferredHeight(this.h))
}

func (this *QGraphicsLayoutItem) SetMaximumSize(size *QSizeF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)
	C.QGraphicsLayoutItem_setMaximumSize(this.h, size.cPointer())
}

func (this *QGraphicsLayoutItem) SetMaximumSize2(w float64, h float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setMaximumSize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsLayoutItem) MaximumSize() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QGraphicsLayoutItem_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) SetMaximumWidth(width float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setMaximumWidth(this.h, (C.double)(width))
}

func (this *QGraphicsLayoutItem) MaximumWidth() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsLayoutItem_maximumWidth(this.h))
}

func (this *QGraphicsLayoutItem) SetMaximumHeight(height float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setMaximumHeight(this.h, (C.double)(height))
}

func (this *QGraphicsLayoutItem) MaximumHeight() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsLayoutItem_maximumHeight(this.h))
}

func (this *QGraphicsLayoutItem) SetGeometry(rect *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rect)
	C.QGraphicsLayoutItem_setGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsLayoutItem) Geometry() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QGraphicsLayoutItem_geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_getContentsMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QGraphicsLayoutItem) ContentsRect() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QGraphicsLayoutItem_contentsRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) EffectiveSizeHint(which SizeHint) *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QGraphicsLayoutItem_effectiveSizeHint(this.h, (C.int)(which)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLayoutItem) UpdateGeometry() {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_updateGeometry(this.h)
}

func (this *QGraphicsLayoutItem) ParentLayoutItem() *QGraphicsLayoutItem {
	defer runtime.KeepAlive(this)
	return newQGraphicsLayoutItem(C.QGraphicsLayoutItem_parentLayoutItem(this.h))
}

func (this *QGraphicsLayoutItem) SetParentLayoutItem(parent *QGraphicsLayoutItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	C.QGraphicsLayoutItem_setParentLayoutItem(this.h, parent.cPointer())
}

func (this *QGraphicsLayoutItem) IsLayout() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGraphicsLayoutItem_isLayout(this.h))
}

func (this *QGraphicsLayoutItem) GraphicsItem() *QGraphicsItem {
	defer runtime.KeepAlive(this)
	return newQGraphicsItem(C.QGraphicsLayoutItem_graphicsItem(this.h))
}

func (this *QGraphicsLayoutItem) OwnedByLayout() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGraphicsLayoutItem_ownedByLayout(this.h))
}

func (this *QGraphicsLayoutItem) SetSizePolicy3(hPolicy QSizePolicy__Policy, vPolicy QSizePolicy__Policy, controlType QSizePolicy__ControlType) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLayoutItem_setSizePolicy3(this.h, (C.int)(hPolicy), (C.int)(vPolicy), (C.int)(controlType))
}

func (this *QGraphicsLayoutItem) EffectiveSizeHint2(which SizeHint, constraint *QSizeF) *QSizeF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(constraint)
	_goptr := newQSizeF(C.QGraphicsLayoutItem_effectiveSizeHint2(this.h, (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// SetGraphicsItem can only be called from a QGraphicsLayoutItem that was directly constructed.
func (this *QGraphicsLayoutItem) SetGraphicsItem(item *QGraphicsItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsLayoutItem_protectedbase_setGraphicsItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), item.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOwnedByLayout can only be called from a QGraphicsLayoutItem that was directly constructed.
func (this *QGraphicsLayoutItem) SetOwnedByLayout(ownedByLayout bool) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsLayoutItem_protectedbase_setOwnedByLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(ownedByLayout))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsLayoutItem) callVirtualBase_SetGeometry(rect *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rect)

	C.QGraphicsLayoutItem_virtualbase_setGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsLayoutItem) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsLayoutItem_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayoutItem_setGeometry
func miqt_exec_callback_QGraphicsLayoutItem_setGeometry(self *C.QGraphicsLayoutItem, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsLayoutItem{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsLayoutItem) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {
	defer runtime.KeepAlive(this)

	C.QGraphicsLayoutItem_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsLayoutItem) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsLayoutItem_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayoutItem_getContentsMargins
func miqt_exec_callback_QGraphicsLayoutItem_getContentsMargins(self *C.QGraphicsLayoutItem, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
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
	defer runtime.KeepAlive(this)

	C.QGraphicsLayoutItem_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsLayoutItem) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsLayoutItem_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayoutItem_updateGeometry
func miqt_exec_callback_QGraphicsLayoutItem_updateGeometry(self *C.QGraphicsLayoutItem, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLayoutItem{h: self}).callVirtualBase_UpdateGeometry)

}
func (this *QGraphicsLayoutItem) OnSizeHint(slot func(which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsLayoutItem_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLayoutItem_sizeHint
func miqt_exec_callback_QGraphicsLayoutItem_sizeHint(self *C.QGraphicsLayoutItem, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := newQSizeF(constraint)

	virtualReturn := gofunc(slotval1, slotval2)
	defer runtime.KeepAlive(virtualReturn)

	return C.QGraphicsLayoutItem_virtualreturncopy_QSizeF(virtualReturn.cPointer())

}

// Delete this object from C++ memory.
func (this *QGraphicsLayoutItem) Delete() {
	C.QGraphicsLayoutItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsLayoutItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsLayoutItem_delete((*C.QGraphicsLayoutItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}
