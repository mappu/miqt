package qt6

/*

#include "gen_qlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLayout__SizeConstraint int

const (
	QLayout__SetDefaultConstraint QLayout__SizeConstraint = 0
	QLayout__SetNoConstraint      QLayout__SizeConstraint = 1
	QLayout__SetMinimumSize       QLayout__SizeConstraint = 2
	QLayout__SetFixedSize         QLayout__SizeConstraint = 3
	QLayout__SetMaximumSize       QLayout__SizeConstraint = 4
	QLayout__SetMinAndMaxSize     QLayout__SizeConstraint = 5
)

type QLayout struct {
	h          *C.QLayout
	isSubclass bool
	*QObject
	*QLayoutItem
}

func (this *QLayout) cPointer() *C.QLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLayout constructs the type using only CGO pointers.
func newQLayout(h *C.QLayout, h_QObject *C.QObject, h_QLayoutItem *C.QLayoutItem) *QLayout {
	if h == nil {
		return nil
	}
	return &QLayout{h: h,
		QObject:     newQObject(h_QObject),
		QLayoutItem: newQLayoutItem(h_QLayoutItem)}
}

// UnsafeNewQLayout constructs the type using only unsafe pointers.
func UnsafeNewQLayout(h unsafe.Pointer, h_QObject unsafe.Pointer, h_QLayoutItem unsafe.Pointer) *QLayout {
	if h == nil {
		return nil
	}

	return &QLayout{h: (*C.QLayout)(h),
		QObject:     UnsafeNewQObject(h_QObject),
		QLayoutItem: UnsafeNewQLayoutItem(h_QLayoutItem)}
}

// NewQLayout constructs a new QLayout object.
func NewQLayout(parent *QWidget) *QLayout {
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QLayout_new(parent.cPointer(), &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQLayout(outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQLayout2 constructs a new QLayout object.
func NewQLayout2() *QLayout {
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QLayout_new2(&outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQLayout(outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QLayout_MetaObject(this.h)))
}

func (this *QLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLayout_Metacast(this.h, param1_Cstring))
}

func QLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLayout) Spacing() int {
	return (int)(C.QLayout_Spacing(this.h))
}

func (this *QLayout) SetSpacing(spacing int) {
	C.QLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QLayout) SetContentsMargins(left int, top int, right int, bottom int) {
	C.QLayout_SetContentsMargins(this.h, (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))
}

func (this *QLayout) SetContentsMarginsWithMargins(margins *QMargins) {
	C.QLayout_SetContentsMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QLayout) UnsetContentsMargins() {
	C.QLayout_UnsetContentsMargins(this.h)
}

func (this *QLayout) GetContentsMargins(left *int, top *int, right *int, bottom *int) {
	C.QLayout_GetContentsMargins(this.h, (*C.int)(unsafe.Pointer(left)), (*C.int)(unsafe.Pointer(top)), (*C.int)(unsafe.Pointer(right)), (*C.int)(unsafe.Pointer(bottom)))
}

func (this *QLayout) ContentsMargins() *QMargins {
	_ret := C.QLayout_ContentsMargins(this.h)
	_goptr := newQMargins(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) ContentsRect() *QRect {
	_ret := C.QLayout_ContentsRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) SetAlignment(w *QWidget, alignment AlignmentFlag) bool {
	return (bool)(C.QLayout_SetAlignment(this.h, w.cPointer(), (C.int)(alignment)))
}

func (this *QLayout) SetAlignment2(l *QLayout, alignment AlignmentFlag) bool {
	return (bool)(C.QLayout_SetAlignment2(this.h, l.cPointer(), (C.int)(alignment)))
}

func (this *QLayout) SetSizeConstraint(sizeConstraint QLayout__SizeConstraint) {
	C.QLayout_SetSizeConstraint(this.h, (C.int)(sizeConstraint))
}

func (this *QLayout) SizeConstraint() QLayout__SizeConstraint {
	return (QLayout__SizeConstraint)(C.QLayout_SizeConstraint(this.h))
}

func (this *QLayout) SetMenuBar(w *QWidget) {
	C.QLayout_SetMenuBar(this.h, w.cPointer())
}

func (this *QLayout) MenuBar() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QLayout_MenuBar(this.h)), nil, nil)
}

func (this *QLayout) ParentWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QLayout_ParentWidget(this.h)), nil, nil)
}

func (this *QLayout) Invalidate() {
	C.QLayout_Invalidate(this.h)
}

func (this *QLayout) Geometry() *QRect {
	_ret := C.QLayout_Geometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) Activate() bool {
	return (bool)(C.QLayout_Activate(this.h))
}

func (this *QLayout) Update() {
	C.QLayout_Update(this.h)
}

func (this *QLayout) AddWidget(w *QWidget) {
	C.QLayout_AddWidget(this.h, w.cPointer())
}

func (this *QLayout) AddItem(param1 *QLayoutItem) {
	C.QLayout_AddItem(this.h, param1.cPointer())
}

func (this *QLayout) RemoveWidget(w *QWidget) {
	C.QLayout_RemoveWidget(this.h, w.cPointer())
}

func (this *QLayout) RemoveItem(param1 *QLayoutItem) {
	C.QLayout_RemoveItem(this.h, param1.cPointer())
}

func (this *QLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QLayout_ExpandingDirections(this.h))
}

func (this *QLayout) MinimumSize() *QSize {
	_ret := C.QLayout_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) MaximumSize() *QSize {
	_ret := C.QLayout_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) SetGeometry(geometry *QRect) {
	C.QLayout_SetGeometry(this.h, geometry.cPointer())
}

func (this *QLayout) ItemAt(index int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QLayout_ItemAt(this.h, (C.int)(index))))
}

func (this *QLayout) TakeAt(index int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QLayout_TakeAt(this.h, (C.int)(index))))
}

func (this *QLayout) IndexOf(param1 *QWidget) int {
	return (int)(C.QLayout_IndexOf(this.h, param1.cPointer()))
}

func (this *QLayout) IndexOfWithQLayoutItem(param1 *QLayoutItem) int {
	return (int)(C.QLayout_IndexOfWithQLayoutItem(this.h, param1.cPointer()))
}

func (this *QLayout) Count() int {
	return (int)(C.QLayout_Count(this.h))
}

func (this *QLayout) IsEmpty() bool {
	return (bool)(C.QLayout_IsEmpty(this.h))
}

func (this *QLayout) ControlTypes() QSizePolicy__ControlType {
	return (QSizePolicy__ControlType)(C.QLayout_ControlTypes(this.h))
}

func (this *QLayout) ReplaceWidget(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QLayout_ReplaceWidget(this.h, from.cPointer(), to.cPointer(), (C.int)(options))))
}

func (this *QLayout) TotalMinimumHeightForWidth(w int) int {
	return (int)(C.QLayout_TotalMinimumHeightForWidth(this.h, (C.int)(w)))
}

func (this *QLayout) TotalHeightForWidth(w int) int {
	return (int)(C.QLayout_TotalHeightForWidth(this.h, (C.int)(w)))
}

func (this *QLayout) TotalMinimumSize() *QSize {
	_ret := C.QLayout_TotalMinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) TotalMaximumSize() *QSize {
	_ret := C.QLayout_TotalMaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) TotalSizeHint() *QSize {
	_ret := C.QLayout_TotalSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) Layout() *QLayout {
	return UnsafeNewQLayout(unsafe.Pointer(C.QLayout_Layout(this.h)), nil, nil)
}

func (this *QLayout) SetEnabled(enabled bool) {
	C.QLayout_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QLayout) IsEnabled() bool {
	return (bool)(C.QLayout_IsEnabled(this.h))
}

func QLayout_ClosestAcceptableSize(w *QWidget, s *QSize) *QSize {
	_ret := C.QLayout_ClosestAcceptableSize(w.cPointer(), s.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLayout) callVirtualBase_Spacing() int {

	return (int)(C.QLayout_virtualbase_Spacing(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnSpacing(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_Spacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_Spacing
func miqt_exec_callback_QLayout_Spacing(self *C.QLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_Spacing)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_SetSpacing(spacing int) {

	C.QLayout_virtualbase_SetSpacing(unsafe.Pointer(this.h), (C.int)(spacing))

}
func (this *QLayout) OnSetSpacing(slot func(super func(spacing int), spacing int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_SetSpacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_SetSpacing
func miqt_exec_callback_QLayout_SetSpacing(self *C.QLayout, cb C.intptr_t, spacing C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(spacing int), spacing int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(spacing)

	gofunc((&QLayout{h: self}).callVirtualBase_SetSpacing, slotval1)

}

func (this *QLayout) callVirtualBase_Invalidate() {

	C.QLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QLayout) OnInvalidate(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_Invalidate
func miqt_exec_callback_QLayout_Invalidate(self *C.QLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QLayout) callVirtualBase_Geometry() *QRect {

	_ret := C.QLayout_virtualbase_Geometry(unsafe.Pointer(this.h))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_Geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_Geometry
func miqt_exec_callback_QLayout_Geometry(self *C.QLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}
func (this *QLayout) OnAddItem(slot func(param1 *QLayoutItem)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_AddItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_AddItem
func miqt_exec_callback_QLayout_AddItem(self *C.QLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQLayoutItem(unsafe.Pointer(param1))

	gofunc(slotval1)

}

func (this *QLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QLayout_virtualbase_ExpandingDirections(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_ExpandingDirections
func miqt_exec_callback_QLayout_ExpandingDirections(self *C.QLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_MinimumSize() *QSize {

	_ret := C.QLayout_virtualbase_MinimumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_MinimumSize
func miqt_exec_callback_QLayout_MinimumSize(self *C.QLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_MaximumSize() *QSize {

	_ret := C.QLayout_virtualbase_MaximumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_MaximumSize
func miqt_exec_callback_QLayout_MaximumSize(self *C.QLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_SetGeometry
func miqt_exec_callback_QLayout_SetGeometry(self *C.QLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(geometry))

	gofunc((&QLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}
func (this *QLayout) OnItemAt(slot func(index int) *QLayoutItem) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_ItemAt
func miqt_exec_callback_QLayout_ItemAt(self *C.QLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QLayout) OnTakeAt(slot func(index int) *QLayoutItem) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_TakeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_TakeAt
func miqt_exec_callback_QLayout_TakeAt(self *C.QLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QLayout_virtualbase_IndexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_IndexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_IndexOf
func miqt_exec_callback_QLayout_IndexOf(self *C.QLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(param1), nil, nil)

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_IndexOfWithQLayoutItem(param1 *QLayoutItem) int {

	return (int)(C.QLayout_virtualbase_IndexOfWithQLayoutItem(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QLayout) OnIndexOfWithQLayoutItem(slot func(super func(param1 *QLayoutItem) int, param1 *QLayoutItem) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_IndexOfWithQLayoutItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_IndexOfWithQLayoutItem
func miqt_exec_callback_QLayout_IndexOfWithQLayoutItem(self *C.QLayout, cb C.intptr_t, param1 *C.QLayoutItem) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QLayoutItem) int, param1 *QLayoutItem) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQLayoutItem(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_IndexOfWithQLayoutItem, slotval1)

	return (C.int)(virtualReturn)

}
func (this *QLayout) OnCount(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_Count
func miqt_exec_callback_QLayout_Count(self *C.QLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QLayout_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnIsEmpty(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_IsEmpty
func miqt_exec_callback_QLayout_IsEmpty(self *C.QLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QLayout_virtualbase_ControlTypes(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_ControlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_ControlTypes
func miqt_exec_callback_QLayout_ControlTypes(self *C.QLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_ReplaceWidget(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QLayout_virtualbase_ReplaceWidget(unsafe.Pointer(this.h), from.cPointer(), to.cPointer(), (C.int)(options))))
}
func (this *QLayout) OnReplaceWidget(slot func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_ReplaceWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_ReplaceWidget
func miqt_exec_callback_QLayout_ReplaceWidget(self *C.QLayout, cb C.intptr_t, from *C.QWidget, to *C.QWidget, options C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(from), nil, nil)
	slotval2 := UnsafeNewQWidget(unsafe.Pointer(to), nil, nil)
	slotval3 := (FindChildOption)(options)

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_ReplaceWidget, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_Layout() *QLayout {

	return UnsafeNewQLayout(unsafe.Pointer(C.QLayout_virtualbase_Layout(unsafe.Pointer(this.h))), nil, nil)
}
func (this *QLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_Layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_Layout
func miqt_exec_callback_QLayout_Layout(self *C.QLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QLayout_virtualbase_ChildEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_ChildEvent
func miqt_exec_callback_QLayout_ChildEvent(self *C.QLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(e), nil)

	gofunc((&QLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QLayout_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_Event
func miqt_exec_callback_QLayout_Event(self *C.QLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QLayout_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_EventFilter
func miqt_exec_callback_QLayout_EventFilter(self *C.QLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QLayout_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_TimerEvent
func miqt_exec_callback_QLayout_TimerEvent(self *C.QLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QLayout_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_CustomEvent
func miqt_exec_callback_QLayout_CustomEvent(self *C.QLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QLayout_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_ConnectNotify
func miqt_exec_callback_QLayout_ConnectNotify(self *C.QLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QLayout_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_DisconnectNotify
func miqt_exec_callback_QLayout_DisconnectNotify(self *C.QLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QLayout) OnSizeHint(slot func() *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_SizeHint
func miqt_exec_callback_QLayout_SizeHint(self *C.QLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QLayout_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_HasHeightForWidth
func miqt_exec_callback_QLayout_HasHeightForWidth(self *C.QLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QLayout_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_HeightForWidth
func miqt_exec_callback_QLayout_HeightForWidth(self *C.QLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QLayout_virtualbase_MinimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_MinimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_MinimumHeightForWidth
func miqt_exec_callback_QLayout_MinimumHeightForWidth(self *C.QLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_Widget() *QWidget {

	return UnsafeNewQWidget(unsafe.Pointer(C.QLayout_virtualbase_Widget(unsafe.Pointer(this.h))), nil, nil)
}
func (this *QLayout) OnWidget(slot func(super func() *QWidget) *QWidget) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_Widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_Widget
func miqt_exec_callback_QLayout_Widget(self *C.QLayout, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_SpacerItem() *QSpacerItem {

	return UnsafeNewQSpacerItem(unsafe.Pointer(C.QLayout_virtualbase_SpacerItem(unsafe.Pointer(this.h))), nil)
}
func (this *QLayout) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLayout_override_virtual_SpacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLayout_SpacerItem
func miqt_exec_callback_QLayout_SpacerItem(self *C.QLayout, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QLayout) Delete() {
	C.QLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
