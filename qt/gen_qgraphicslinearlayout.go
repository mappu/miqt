package qt

/*

#include "gen_qgraphicslinearlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsLinearLayout struct {
	h  *C.QGraphicsLinearLayout
	gc *[1]unsafe.Pointer
	*QGraphicsLayout
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsLinearLayout) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsLayout.miqtSetGC(gc)
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
func newQGraphicsLinearLayout(h *C.QGraphicsLinearLayout) *QGraphicsLinearLayout {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	C.QGraphicsLinearLayout_virtbase(h, &outptr_QGraphicsLayout)

	return &QGraphicsLinearLayout{h: h,
		QGraphicsLayout: newQGraphicsLayout(outptr_QGraphicsLayout)}
}

// UnsafeNewQGraphicsLinearLayout constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsLinearLayout(h unsafe.Pointer) *QGraphicsLinearLayout {
	return newQGraphicsLinearLayout((*C.QGraphicsLinearLayout)(h))
}

// NewQGraphicsLinearLayout constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout() *QGraphicsLinearLayout {

	return newQGraphicsLinearLayout(C.QGraphicsLinearLayout_new())
}

// NewQGraphicsLinearLayout2 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout2(orientation Orientation) *QGraphicsLinearLayout {

	return newQGraphicsLinearLayout(C.QGraphicsLinearLayout_new2((C.int)(orientation)))
}

// NewQGraphicsLinearLayout3 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout3(parent *QGraphicsLayoutItem) *QGraphicsLinearLayout {
	defer runtime.KeepAlive(parent)

	return newQGraphicsLinearLayout(C.QGraphicsLinearLayout_new3(parent.cPointer()))
}

// NewQGraphicsLinearLayout4 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout4(orientation Orientation, parent *QGraphicsLayoutItem) *QGraphicsLinearLayout {
	defer runtime.KeepAlive(parent)

	return newQGraphicsLinearLayout(C.QGraphicsLinearLayout_new4((C.int)(orientation), parent.cPointer()))
}

func (this *QGraphicsLinearLayout) SetOrientation(orientation Orientation) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_setOrientation(this.h, (C.int)(orientation))
}

func (this *QGraphicsLinearLayout) Orientation() Orientation {
	defer runtime.KeepAlive(this)
	return (Orientation)(C.QGraphicsLinearLayout_orientation(this.h))
}

func (this *QGraphicsLinearLayout) AddItem(item *QGraphicsLayoutItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)
	C.QGraphicsLinearLayout_addItem(this.h, item.cPointer())
}

func (this *QGraphicsLinearLayout) AddStretch() {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_addStretch(this.h)
}

func (this *QGraphicsLinearLayout) InsertItem(index int, item *QGraphicsLayoutItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)
	C.QGraphicsLinearLayout_insertItem(this.h, (C.int)(index), item.cPointer())
}

func (this *QGraphicsLinearLayout) InsertStretch(index int) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_insertStretch(this.h, (C.int)(index))
}

func (this *QGraphicsLinearLayout) RemoveItem(item *QGraphicsLayoutItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)
	C.QGraphicsLinearLayout_removeItem(this.h, item.cPointer())
}

func (this *QGraphicsLinearLayout) RemoveAt(index int) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_removeAt(this.h, (C.int)(index))
}

func (this *QGraphicsLinearLayout) SetSpacing(spacing float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_setSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsLinearLayout) Spacing() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsLinearLayout_spacing(this.h))
}

func (this *QGraphicsLinearLayout) SetItemSpacing(index int, spacing float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_setItemSpacing(this.h, (C.int)(index), (C.double)(spacing))
}

func (this *QGraphicsLinearLayout) ItemSpacing(index int) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsLinearLayout_itemSpacing(this.h, (C.int)(index)))
}

func (this *QGraphicsLinearLayout) SetStretchFactor(item *QGraphicsLayoutItem, stretch int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)
	C.QGraphicsLinearLayout_setStretchFactor(this.h, item.cPointer(), (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) StretchFactor(item *QGraphicsLayoutItem) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)
	return (int)(C.QGraphicsLinearLayout_stretchFactor(this.h, item.cPointer()))
}

func (this *QGraphicsLinearLayout) SetAlignment(item *QGraphicsLayoutItem, alignment AlignmentFlag) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)
	C.QGraphicsLinearLayout_setAlignment(this.h, item.cPointer(), (C.int)(alignment))
}

func (this *QGraphicsLinearLayout) Alignment(item *QGraphicsLayoutItem) AlignmentFlag {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)
	return (AlignmentFlag)(C.QGraphicsLinearLayout_alignment(this.h, item.cPointer()))
}

func (this *QGraphicsLinearLayout) SetGeometry(rect QRectF) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_setGeometry(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect))
}

func (this *QGraphicsLinearLayout) Count() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QGraphicsLinearLayout_count(this.h))
}

func (this *QGraphicsLinearLayout) ItemAt(index int) *QGraphicsLayoutItem {
	defer runtime.KeepAlive(this)
	return newQGraphicsLayoutItem(C.QGraphicsLinearLayout_itemAt(this.h, (C.int)(index)))
}

func (this *QGraphicsLinearLayout) Invalidate() {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_invalidate(this.h)
}

func (this *QGraphicsLinearLayout) SizeHint(which SizeHint, constraint QSizeF) QSizeF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QSizeF](C.QGraphicsLinearLayout_sizeHint(this.h, (C.int)(which), libmiqt.ValueCast[C.struct_miqt_qsizef](constraint)))
}

func (this *QGraphicsLinearLayout) Dump() {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_dump(this.h)
}

func (this *QGraphicsLinearLayout) AddStretchWithStretch(stretch int) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_addStretchWithStretch(this.h, (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) InsertStretch2(index int, stretch int) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_insertStretch2(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) DumpWithIndent(indent int) {
	defer runtime.KeepAlive(this)
	C.QGraphicsLinearLayout_dumpWithIndent(this.h, (C.int)(indent))
}

// AddChildLayoutItem can only be called from a QGraphicsLinearLayout that was directly constructed.
func (this *QGraphicsLinearLayout) AddChildLayoutItem(layoutItem *QGraphicsLayoutItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(layoutItem)

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsLinearLayout_protectedbase_addChildLayoutItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), layoutItem.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetGraphicsItem can only be called from a QGraphicsLinearLayout that was directly constructed.
func (this *QGraphicsLinearLayout) SetGraphicsItem(item *QGraphicsItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsLinearLayout_protectedbase_setGraphicsItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), item.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOwnedByLayout can only be called from a QGraphicsLinearLayout that was directly constructed.
func (this *QGraphicsLinearLayout) SetOwnedByLayout(ownedByLayout bool) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsLinearLayout_protectedbase_setOwnedByLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(ownedByLayout))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsLinearLayout) callVirtualBase_RemoveAt(index int) {
	defer runtime.KeepAlive(this)

	C.QGraphicsLinearLayout_virtualbase_removeAt(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QGraphicsLinearLayout) OnRemoveAt(slot func(super func(index int), index int)) {
	ok := C.QGraphicsLinearLayout_override_virtual_removeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLinearLayout_removeAt
func miqt_exec_callback_QGraphicsLinearLayout_removeAt(self *C.QGraphicsLinearLayout, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_RemoveAt, slotval1)

}

func (this *QGraphicsLinearLayout) callVirtualBase_SetGeometry(rect QRectF) {
	defer runtime.KeepAlive(this)

	C.QGraphicsLinearLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qrectf](rect))

}
func (this *QGraphicsLinearLayout) OnSetGeometry(slot func(super func(rect QRectF), rect QRectF)) {
	ok := C.QGraphicsLinearLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLinearLayout_setGeometry
func miqt_exec_callback_QGraphicsLinearLayout_setGeometry(self *C.QGraphicsLinearLayout, cb C.intptr_t, rect C.struct_miqt_qrectf) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect QRectF), rect QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[QRectF](rect)

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsLinearLayout) callVirtualBase_Count() int {
	defer runtime.KeepAlive(this)

	return (int)(C.QGraphicsLinearLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QGraphicsLinearLayout) OnCount(slot func(super func() int) int) {
	ok := C.QGraphicsLinearLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLinearLayout_count
func miqt_exec_callback_QGraphicsLinearLayout_count(self *C.QGraphicsLinearLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsLinearLayout) callVirtualBase_ItemAt(index int) *QGraphicsLayoutItem {
	defer runtime.KeepAlive(this)

	return newQGraphicsLayoutItem(C.QGraphicsLinearLayout_virtualbase_itemAt(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QGraphicsLinearLayout) OnItemAt(slot func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem) {
	ok := C.QGraphicsLinearLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLinearLayout_itemAt
func miqt_exec_callback_QGraphicsLinearLayout_itemAt(self *C.QGraphicsLinearLayout, cb C.intptr_t, index C.int) *C.QGraphicsLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_ItemAt, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLinearLayout) callVirtualBase_Invalidate() {
	defer runtime.KeepAlive(this)

	C.QGraphicsLinearLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QGraphicsLinearLayout) OnInvalidate(slot func(super func())) {
	ok := C.QGraphicsLinearLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLinearLayout_invalidate
func miqt_exec_callback_QGraphicsLinearLayout_invalidate(self *C.QGraphicsLinearLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGraphicsLinearLayout) callVirtualBase_SizeHint(which SizeHint, constraint QSizeF) QSizeF {
	defer runtime.KeepAlive(this)

	return libmiqt.ValueCast[QSizeF](C.QGraphicsLinearLayout_virtualbase_sizeHint(unsafe.Pointer(this.h), (C.int)(which), libmiqt.ValueCast[C.struct_miqt_qsizef](constraint)))

}
func (this *QGraphicsLinearLayout) OnSizeHint(slot func(super func(which SizeHint, constraint QSizeF) QSizeF, which SizeHint, constraint QSizeF) QSizeF) {
	ok := C.QGraphicsLinearLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLinearLayout_sizeHint
func miqt_exec_callback_QGraphicsLinearLayout_sizeHint(self *C.QGraphicsLinearLayout, cb C.intptr_t, which C.int, constraint C.struct_miqt_qsizef) C.struct_miqt_qsizef {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which SizeHint, constraint QSizeF) QSizeF, which SizeHint, constraint QSizeF) QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := libmiqt.ValueCast[QSizeF](constraint)

	virtualReturn := gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return libmiqt.ValueCast[C.struct_miqt_qsizef](virtualReturn)

}

func (this *QGraphicsLinearLayout) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {
	defer runtime.KeepAlive(this)

	C.QGraphicsLinearLayout_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsLinearLayout) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsLinearLayout_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLinearLayout_getContentsMargins
func miqt_exec_callback_QGraphicsLinearLayout_getContentsMargins(self *C.QGraphicsLinearLayout, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
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
	defer runtime.KeepAlive(this)

	C.QGraphicsLinearLayout_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsLinearLayout) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsLinearLayout_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLinearLayout_updateGeometry
func miqt_exec_callback_QGraphicsLinearLayout_updateGeometry(self *C.QGraphicsLinearLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsLinearLayout{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsLinearLayout) callVirtualBase_WidgetEvent(e *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(e)

	C.QGraphicsLinearLayout_virtualbase_widgetEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGraphicsLinearLayout) OnWidgetEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QGraphicsLinearLayout_override_virtual_widgetEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLinearLayout_widgetEvent
func miqt_exec_callback_QGraphicsLinearLayout_widgetEvent(self *C.QGraphicsLinearLayout, cb C.intptr_t, e *C.QEvent) {
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
	C.QGraphicsLinearLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsLinearLayout) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsLinearLayout_delete((*C.QGraphicsLinearLayout)(gc[0]))
	})
	this.miqtSetGC(gc)
}
