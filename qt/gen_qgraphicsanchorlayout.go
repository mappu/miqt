package qt

/*

#include "gen_qgraphicsanchorlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsAnchor struct {
	h *C.QGraphicsAnchor
	*QObject
}

func (this *QGraphicsAnchor) cPointer() *C.QGraphicsAnchor {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsAnchor) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsAnchor constructs the type using only CGO pointers.
func newQGraphicsAnchor(h *C.QGraphicsAnchor) *QGraphicsAnchor {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGraphicsAnchor_virtbase(h, &outptr_QObject)

	return &QGraphicsAnchor{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQGraphicsAnchor constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsAnchor(h unsafe.Pointer) *QGraphicsAnchor {
	return newQGraphicsAnchor((*C.QGraphicsAnchor)(h))
}

func (this *QGraphicsAnchor) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsAnchor_metaObject(this.h))
}

func (this *QGraphicsAnchor) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsAnchor_metacast(this.h, param1_Cstring))
}

func QGraphicsAnchor_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsAnchor_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsAnchor) SetSpacing(spacing float64) {
	C.QGraphicsAnchor_setSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchor) UnsetSpacing() {
	C.QGraphicsAnchor_unsetSpacing(this.h)
}

func (this *QGraphicsAnchor) Spacing() float64 {
	return (float64)(C.QGraphicsAnchor_spacing(this.h))
}

func (this *QGraphicsAnchor) SetSizePolicy(policy QSizePolicy__Policy) {
	C.QGraphicsAnchor_setSizePolicy(this.h, (C.int)(policy))
}

func (this *QGraphicsAnchor) SizePolicy() QSizePolicy__Policy {
	return (QSizePolicy__Policy)(C.QGraphicsAnchor_sizePolicy(this.h))
}

func QGraphicsAnchor_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsAnchor_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsAnchor_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsAnchor_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsAnchor) Delete() {
	C.QGraphicsAnchor_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsAnchor) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsAnchor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsAnchorLayout struct {
	h *C.QGraphicsAnchorLayout
	*QGraphicsLayout
}

func (this *QGraphicsAnchorLayout) cPointer() *C.QGraphicsAnchorLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsAnchorLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsAnchorLayout constructs the type using only CGO pointers.
func newQGraphicsAnchorLayout(h *C.QGraphicsAnchorLayout) *QGraphicsAnchorLayout {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	C.QGraphicsAnchorLayout_virtbase(h, &outptr_QGraphicsLayout)

	return &QGraphicsAnchorLayout{h: h,
		QGraphicsLayout: newQGraphicsLayout(outptr_QGraphicsLayout)}
}

// UnsafeNewQGraphicsAnchorLayout constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsAnchorLayout(h unsafe.Pointer) *QGraphicsAnchorLayout {
	return newQGraphicsAnchorLayout((*C.QGraphicsAnchorLayout)(h))
}

// NewQGraphicsAnchorLayout constructs a new QGraphicsAnchorLayout object.
func NewQGraphicsAnchorLayout() *QGraphicsAnchorLayout {

	return newQGraphicsAnchorLayout(C.QGraphicsAnchorLayout_new())
}

// NewQGraphicsAnchorLayout2 constructs a new QGraphicsAnchorLayout object.
func NewQGraphicsAnchorLayout2(parent *QGraphicsLayoutItem) *QGraphicsAnchorLayout {

	return newQGraphicsAnchorLayout(C.QGraphicsAnchorLayout_new2(parent.cPointer()))
}

func (this *QGraphicsAnchorLayout) AddAnchor(firstItem *QGraphicsLayoutItem, firstEdge AnchorPoint, secondItem *QGraphicsLayoutItem, secondEdge AnchorPoint) *QGraphicsAnchor {
	return newQGraphicsAnchor(C.QGraphicsAnchorLayout_addAnchor(this.h, firstItem.cPointer(), (C.int)(firstEdge), secondItem.cPointer(), (C.int)(secondEdge)))
}

func (this *QGraphicsAnchorLayout) Anchor(firstItem *QGraphicsLayoutItem, firstEdge AnchorPoint, secondItem *QGraphicsLayoutItem, secondEdge AnchorPoint) *QGraphicsAnchor {
	return newQGraphicsAnchor(C.QGraphicsAnchorLayout_anchor(this.h, firstItem.cPointer(), (C.int)(firstEdge), secondItem.cPointer(), (C.int)(secondEdge)))
}

func (this *QGraphicsAnchorLayout) AddCornerAnchors(firstItem *QGraphicsLayoutItem, firstCorner Corner, secondItem *QGraphicsLayoutItem, secondCorner Corner) {
	C.QGraphicsAnchorLayout_addCornerAnchors(this.h, firstItem.cPointer(), (C.int)(firstCorner), secondItem.cPointer(), (C.int)(secondCorner))
}

func (this *QGraphicsAnchorLayout) AddAnchors(firstItem *QGraphicsLayoutItem, secondItem *QGraphicsLayoutItem) {
	C.QGraphicsAnchorLayout_addAnchors(this.h, firstItem.cPointer(), secondItem.cPointer())
}

func (this *QGraphicsAnchorLayout) SetHorizontalSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_setHorizontalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) SetVerticalSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_setVerticalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) SetSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_setSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) HorizontalSpacing() float64 {
	return (float64)(C.QGraphicsAnchorLayout_horizontalSpacing(this.h))
}

func (this *QGraphicsAnchorLayout) VerticalSpacing() float64 {
	return (float64)(C.QGraphicsAnchorLayout_verticalSpacing(this.h))
}

func (this *QGraphicsAnchorLayout) RemoveAt(index int) {
	C.QGraphicsAnchorLayout_removeAt(this.h, (C.int)(index))
}

func (this *QGraphicsAnchorLayout) SetGeometry(rect *QRectF) {
	C.QGraphicsAnchorLayout_setGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsAnchorLayout) Count() int {
	return (int)(C.QGraphicsAnchorLayout_count(this.h))
}

func (this *QGraphicsAnchorLayout) ItemAt(index int) *QGraphicsLayoutItem {
	return newQGraphicsLayoutItem(C.QGraphicsAnchorLayout_itemAt(this.h, (C.int)(index)))
}

func (this *QGraphicsAnchorLayout) Invalidate() {
	C.QGraphicsAnchorLayout_invalidate(this.h)
}

func (this *QGraphicsAnchorLayout) AddAnchors2(firstItem *QGraphicsLayoutItem, secondItem *QGraphicsLayoutItem, orientations Orientation) {
	C.QGraphicsAnchorLayout_addAnchors2(this.h, firstItem.cPointer(), secondItem.cPointer(), (C.int)(orientations))
}

// AddChildLayoutItem can only be called from a QGraphicsAnchorLayout that was directly constructed.
func (this *QGraphicsAnchorLayout) AddChildLayoutItem(layoutItem *QGraphicsLayoutItem) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsAnchorLayout_protectedbase_addChildLayoutItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), layoutItem.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetGraphicsItem can only be called from a QGraphicsAnchorLayout that was directly constructed.
func (this *QGraphicsAnchorLayout) SetGraphicsItem(item *QGraphicsItem) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsAnchorLayout_protectedbase_setGraphicsItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), item.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOwnedByLayout can only be called from a QGraphicsAnchorLayout that was directly constructed.
func (this *QGraphicsAnchorLayout) SetOwnedByLayout(ownedByLayout bool) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsAnchorLayout_protectedbase_setOwnedByLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(ownedByLayout))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsAnchorLayout) callVirtualBase_RemoveAt(index int) {

	C.QGraphicsAnchorLayout_virtualbase_removeAt(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QGraphicsAnchorLayout) OnRemoveAt(slot func(super func(index int), index int)) {
	ok := C.QGraphicsAnchorLayout_override_virtual_removeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsAnchorLayout_removeAt
func miqt_exec_callback_QGraphicsAnchorLayout_removeAt(self *C.QGraphicsAnchorLayout, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_RemoveAt, slotval1)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsAnchorLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsAnchorLayout) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsAnchorLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsAnchorLayout_setGeometry
func miqt_exec_callback_QGraphicsAnchorLayout_setGeometry(self *C.QGraphicsAnchorLayout, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_Count() int {

	return (int)(C.QGraphicsAnchorLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QGraphicsAnchorLayout) OnCount(slot func(super func() int) int) {
	ok := C.QGraphicsAnchorLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsAnchorLayout_count
func miqt_exec_callback_QGraphicsAnchorLayout_count(self *C.QGraphicsAnchorLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_ItemAt(index int) *QGraphicsLayoutItem {

	return newQGraphicsLayoutItem(C.QGraphicsAnchorLayout_virtualbase_itemAt(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QGraphicsAnchorLayout) OnItemAt(slot func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem) {
	ok := C.QGraphicsAnchorLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsAnchorLayout_itemAt
func miqt_exec_callback_QGraphicsAnchorLayout_itemAt(self *C.QGraphicsAnchorLayout, cb C.intptr_t, index C.int) *C.QGraphicsLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsAnchorLayout) callVirtualBase_Invalidate() {

	C.QGraphicsAnchorLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QGraphicsAnchorLayout) OnInvalidate(slot func(super func())) {
	ok := C.QGraphicsAnchorLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsAnchorLayout_invalidate
func miqt_exec_callback_QGraphicsAnchorLayout_invalidate(self *C.QGraphicsAnchorLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_goptr := newQSizeF(C.QGraphicsAnchorLayout_virtualbase_sizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsAnchorLayout) OnSizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsAnchorLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsAnchorLayout_sizeHint
func miqt_exec_callback_QGraphicsAnchorLayout_sizeHint(self *C.QGraphicsAnchorLayout, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := newQSizeF(constraint)

	virtualReturn := gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsAnchorLayout) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsAnchorLayout_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsAnchorLayout) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsAnchorLayout_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsAnchorLayout_getContentsMargins
func miqt_exec_callback_QGraphicsAnchorLayout_getContentsMargins(self *C.QGraphicsAnchorLayout, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_UpdateGeometry() {

	C.QGraphicsAnchorLayout_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsAnchorLayout) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsAnchorLayout_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsAnchorLayout_updateGeometry
func miqt_exec_callback_QGraphicsAnchorLayout_updateGeometry(self *C.QGraphicsAnchorLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_WidgetEvent(e *QEvent) {

	C.QGraphicsAnchorLayout_virtualbase_widgetEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGraphicsAnchorLayout) OnWidgetEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QGraphicsAnchorLayout_override_virtual_widgetEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsAnchorLayout_widgetEvent
func miqt_exec_callback_QGraphicsAnchorLayout_widgetEvent(self *C.QGraphicsAnchorLayout, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_WidgetEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsAnchorLayout) Delete() {
	C.QGraphicsAnchorLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsAnchorLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsAnchorLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
