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
	h          *C.QGraphicsAnchor
	isSubclass bool
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
func newQGraphicsAnchor(h *C.QGraphicsAnchor, h_QObject *C.QObject) *QGraphicsAnchor {
	if h == nil {
		return nil
	}
	return &QGraphicsAnchor{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQGraphicsAnchor constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsAnchor(h unsafe.Pointer, h_QObject unsafe.Pointer) *QGraphicsAnchor {
	if h == nil {
		return nil
	}

	return &QGraphicsAnchor{h: (*C.QGraphicsAnchor)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

func (this *QGraphicsAnchor) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsAnchor_MetaObject(this.h)))
}

func (this *QGraphicsAnchor) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsAnchor_Metacast(this.h, param1_Cstring))
}

func QGraphicsAnchor_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsAnchor_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsAnchor) SetSpacing(spacing float64) {
	C.QGraphicsAnchor_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchor) UnsetSpacing() {
	C.QGraphicsAnchor_UnsetSpacing(this.h)
}

func (this *QGraphicsAnchor) Spacing() float64 {
	return (float64)(C.QGraphicsAnchor_Spacing(this.h))
}

func (this *QGraphicsAnchor) SetSizePolicy(policy QSizePolicy__Policy) {
	C.QGraphicsAnchor_SetSizePolicy(this.h, (C.int)(policy))
}

func (this *QGraphicsAnchor) SizePolicy() QSizePolicy__Policy {
	return (QSizePolicy__Policy)(C.QGraphicsAnchor_SizePolicy(this.h))
}

func QGraphicsAnchor_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsAnchor_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsAnchor_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsAnchor_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsAnchor_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsAnchor) Delete() {
	C.QGraphicsAnchor_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QGraphicsAnchorLayout
	isSubclass bool
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
func newQGraphicsAnchorLayout(h *C.QGraphicsAnchorLayout, h_QGraphicsLayout *C.QGraphicsLayout, h_QGraphicsLayoutItem *C.QGraphicsLayoutItem) *QGraphicsAnchorLayout {
	if h == nil {
		return nil
	}
	return &QGraphicsAnchorLayout{h: h,
		QGraphicsLayout: newQGraphicsLayout(h_QGraphicsLayout, h_QGraphicsLayoutItem)}
}

// UnsafeNewQGraphicsAnchorLayout constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsAnchorLayout(h unsafe.Pointer, h_QGraphicsLayout unsafe.Pointer, h_QGraphicsLayoutItem unsafe.Pointer) *QGraphicsAnchorLayout {
	if h == nil {
		return nil
	}

	return &QGraphicsAnchorLayout{h: (*C.QGraphicsAnchorLayout)(h),
		QGraphicsLayout: UnsafeNewQGraphicsLayout(h_QGraphicsLayout, h_QGraphicsLayoutItem)}
}

// NewQGraphicsAnchorLayout constructs a new QGraphicsAnchorLayout object.
func NewQGraphicsAnchorLayout() *QGraphicsAnchorLayout {
	var outptr_QGraphicsAnchorLayout *C.QGraphicsAnchorLayout = nil
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsAnchorLayout_new(&outptr_QGraphicsAnchorLayout, &outptr_QGraphicsLayout, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsAnchorLayout(outptr_QGraphicsAnchorLayout, outptr_QGraphicsLayout, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsAnchorLayout2 constructs a new QGraphicsAnchorLayout object.
func NewQGraphicsAnchorLayout2(parent *QGraphicsLayoutItem) *QGraphicsAnchorLayout {
	var outptr_QGraphicsAnchorLayout *C.QGraphicsAnchorLayout = nil
	var outptr_QGraphicsLayout *C.QGraphicsLayout = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsAnchorLayout_new2(parent.cPointer(), &outptr_QGraphicsAnchorLayout, &outptr_QGraphicsLayout, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsAnchorLayout(outptr_QGraphicsAnchorLayout, outptr_QGraphicsLayout, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsAnchorLayout) AddAnchor(firstItem *QGraphicsLayoutItem, firstEdge AnchorPoint, secondItem *QGraphicsLayoutItem, secondEdge AnchorPoint) *QGraphicsAnchor {
	return UnsafeNewQGraphicsAnchor(unsafe.Pointer(C.QGraphicsAnchorLayout_AddAnchor(this.h, firstItem.cPointer(), (C.int)(firstEdge), secondItem.cPointer(), (C.int)(secondEdge))), nil)
}

func (this *QGraphicsAnchorLayout) Anchor(firstItem *QGraphicsLayoutItem, firstEdge AnchorPoint, secondItem *QGraphicsLayoutItem, secondEdge AnchorPoint) *QGraphicsAnchor {
	return UnsafeNewQGraphicsAnchor(unsafe.Pointer(C.QGraphicsAnchorLayout_Anchor(this.h, firstItem.cPointer(), (C.int)(firstEdge), secondItem.cPointer(), (C.int)(secondEdge))), nil)
}

func (this *QGraphicsAnchorLayout) AddCornerAnchors(firstItem *QGraphicsLayoutItem, firstCorner Corner, secondItem *QGraphicsLayoutItem, secondCorner Corner) {
	C.QGraphicsAnchorLayout_AddCornerAnchors(this.h, firstItem.cPointer(), (C.int)(firstCorner), secondItem.cPointer(), (C.int)(secondCorner))
}

func (this *QGraphicsAnchorLayout) AddAnchors(firstItem *QGraphicsLayoutItem, secondItem *QGraphicsLayoutItem) {
	C.QGraphicsAnchorLayout_AddAnchors(this.h, firstItem.cPointer(), secondItem.cPointer())
}

func (this *QGraphicsAnchorLayout) SetHorizontalSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_SetHorizontalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) SetVerticalSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_SetVerticalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) SetSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) HorizontalSpacing() float64 {
	return (float64)(C.QGraphicsAnchorLayout_HorizontalSpacing(this.h))
}

func (this *QGraphicsAnchorLayout) VerticalSpacing() float64 {
	return (float64)(C.QGraphicsAnchorLayout_VerticalSpacing(this.h))
}

func (this *QGraphicsAnchorLayout) RemoveAt(index int) {
	C.QGraphicsAnchorLayout_RemoveAt(this.h, (C.int)(index))
}

func (this *QGraphicsAnchorLayout) SetGeometry(rect *QRectF) {
	C.QGraphicsAnchorLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsAnchorLayout) Count() int {
	return (int)(C.QGraphicsAnchorLayout_Count(this.h))
}

func (this *QGraphicsAnchorLayout) ItemAt(index int) *QGraphicsLayoutItem {
	return UnsafeNewQGraphicsLayoutItem(unsafe.Pointer(C.QGraphicsAnchorLayout_ItemAt(this.h, (C.int)(index))))
}

func (this *QGraphicsAnchorLayout) Invalidate() {
	C.QGraphicsAnchorLayout_Invalidate(this.h)
}

func (this *QGraphicsAnchorLayout) AddAnchors3(firstItem *QGraphicsLayoutItem, secondItem *QGraphicsLayoutItem, orientations Orientation) {
	C.QGraphicsAnchorLayout_AddAnchors3(this.h, firstItem.cPointer(), secondItem.cPointer(), (C.int)(orientations))
}

func (this *QGraphicsAnchorLayout) callVirtualBase_RemoveAt(index int) {

	C.QGraphicsAnchorLayout_virtualbase_RemoveAt(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QGraphicsAnchorLayout) OnRemoveAt(slot func(super func(index int), index int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsAnchorLayout_override_virtual_RemoveAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsAnchorLayout_RemoveAt
func miqt_exec_callback_QGraphicsAnchorLayout_RemoveAt(self *C.QGraphicsAnchorLayout, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_RemoveAt, slotval1)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsAnchorLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsAnchorLayout) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsAnchorLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsAnchorLayout_SetGeometry
func miqt_exec_callback_QGraphicsAnchorLayout_SetGeometry(self *C.QGraphicsAnchorLayout, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_Count() int {

	return (int)(C.QGraphicsAnchorLayout_virtualbase_Count(unsafe.Pointer(this.h)))

}
func (this *QGraphicsAnchorLayout) OnCount(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsAnchorLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsAnchorLayout_Count
func miqt_exec_callback_QGraphicsAnchorLayout_Count(self *C.QGraphicsAnchorLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_ItemAt(index int) *QGraphicsLayoutItem {

	return UnsafeNewQGraphicsLayoutItem(unsafe.Pointer(C.QGraphicsAnchorLayout_virtualbase_ItemAt(unsafe.Pointer(this.h), (C.int)(index))))
}
func (this *QGraphicsAnchorLayout) OnItemAt(slot func(super func(index int) *QGraphicsLayoutItem, index int) *QGraphicsLayoutItem) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsAnchorLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsAnchorLayout_ItemAt
func miqt_exec_callback_QGraphicsAnchorLayout_ItemAt(self *C.QGraphicsAnchorLayout, cb C.intptr_t, index C.int) *C.QGraphicsLayoutItem {
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

	C.QGraphicsAnchorLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QGraphicsAnchorLayout) OnInvalidate(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsAnchorLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsAnchorLayout_Invalidate
func miqt_exec_callback_QGraphicsAnchorLayout_Invalidate(self *C.QGraphicsAnchorLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_ret := C.QGraphicsAnchorLayout_virtualbase_SizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer())
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsAnchorLayout) OnSizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsAnchorLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsAnchorLayout_SizeHint
func miqt_exec_callback_QGraphicsAnchorLayout_SizeHint(self *C.QGraphicsAnchorLayout, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := UnsafeNewQSizeF(unsafe.Pointer(constraint))

	virtualReturn := gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsAnchorLayout) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsAnchorLayout_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsAnchorLayout) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsAnchorLayout_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsAnchorLayout_GetContentsMargins
func miqt_exec_callback_QGraphicsAnchorLayout_GetContentsMargins(self *C.QGraphicsAnchorLayout, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
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

	C.QGraphicsAnchorLayout_virtualbase_UpdateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsAnchorLayout) OnUpdateGeometry(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsAnchorLayout_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsAnchorLayout_UpdateGeometry
func miqt_exec_callback_QGraphicsAnchorLayout_UpdateGeometry(self *C.QGraphicsAnchorLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsAnchorLayout) callVirtualBase_WidgetEvent(e *QEvent) {

	C.QGraphicsAnchorLayout_virtualbase_WidgetEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGraphicsAnchorLayout) OnWidgetEvent(slot func(super func(e *QEvent), e *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsAnchorLayout_override_virtual_WidgetEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsAnchorLayout_WidgetEvent
func miqt_exec_callback_QGraphicsAnchorLayout_WidgetEvent(self *C.QGraphicsAnchorLayout, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&QGraphicsAnchorLayout{h: self}).callVirtualBase_WidgetEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsAnchorLayout) Delete() {
	C.QGraphicsAnchorLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsAnchorLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsAnchorLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
