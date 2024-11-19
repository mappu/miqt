package qt6

/*

#include "gen_qstackedlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStackedLayout__StackingMode int

const (
	QStackedLayout__StackOne QStackedLayout__StackingMode = 0
	QStackedLayout__StackAll QStackedLayout__StackingMode = 1
)

type QStackedLayout struct {
	h          *C.QStackedLayout
	isSubclass bool
	*QLayout
}

func (this *QStackedLayout) cPointer() *C.QStackedLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStackedLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStackedLayout constructs the type using only CGO pointers.
func newQStackedLayout(h *C.QStackedLayout, h_QLayout *C.QLayout, h_QObject *C.QObject, h_QLayoutItem *C.QLayoutItem) *QStackedLayout {
	if h == nil {
		return nil
	}
	return &QStackedLayout{h: h,
		QLayout: newQLayout(h_QLayout, h_QObject, h_QLayoutItem)}
}

// UnsafeNewQStackedLayout constructs the type using only unsafe pointers.
func UnsafeNewQStackedLayout(h unsafe.Pointer, h_QLayout unsafe.Pointer, h_QObject unsafe.Pointer, h_QLayoutItem unsafe.Pointer) *QStackedLayout {
	if h == nil {
		return nil
	}

	return &QStackedLayout{h: (*C.QStackedLayout)(h),
		QLayout: UnsafeNewQLayout(h_QLayout, h_QObject, h_QLayoutItem)}
}

// NewQStackedLayout constructs a new QStackedLayout object.
func NewQStackedLayout(parent *QWidget) *QStackedLayout {
	var outptr_QStackedLayout *C.QStackedLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QStackedLayout_new(parent.cPointer(), &outptr_QStackedLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQStackedLayout(outptr_QStackedLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQStackedLayout2 constructs a new QStackedLayout object.
func NewQStackedLayout2() *QStackedLayout {
	var outptr_QStackedLayout *C.QStackedLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QStackedLayout_new2(&outptr_QStackedLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQStackedLayout(outptr_QStackedLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQStackedLayout3 constructs a new QStackedLayout object.
func NewQStackedLayout3(parentLayout *QLayout) *QStackedLayout {
	var outptr_QStackedLayout *C.QStackedLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QStackedLayout_new3(parentLayout.cPointer(), &outptr_QStackedLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQStackedLayout(outptr_QStackedLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QStackedLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QStackedLayout_MetaObject(this.h)))
}

func (this *QStackedLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStackedLayout_Metacast(this.h, param1_Cstring))
}

func QStackedLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStackedLayout) AddWidget(w *QWidget) int {
	return (int)(C.QStackedLayout_AddWidget(this.h, w.cPointer()))
}

func (this *QStackedLayout) InsertWidget(index int, w *QWidget) int {
	return (int)(C.QStackedLayout_InsertWidget(this.h, (C.int)(index), w.cPointer()))
}

func (this *QStackedLayout) CurrentWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QStackedLayout_CurrentWidget(this.h)), nil, nil)
}

func (this *QStackedLayout) CurrentIndex() int {
	return (int)(C.QStackedLayout_CurrentIndex(this.h))
}

func (this *QStackedLayout) Widget(param1 int) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QStackedLayout_Widget(this.h, (C.int)(param1))), nil, nil)
}

func (this *QStackedLayout) Count() int {
	return (int)(C.QStackedLayout_Count(this.h))
}

func (this *QStackedLayout) StackingMode() QStackedLayout__StackingMode {
	return (QStackedLayout__StackingMode)(C.QStackedLayout_StackingMode(this.h))
}

func (this *QStackedLayout) SetStackingMode(stackingMode QStackedLayout__StackingMode) {
	C.QStackedLayout_SetStackingMode(this.h, (C.int)(stackingMode))
}

func (this *QStackedLayout) AddItem(item *QLayoutItem) {
	C.QStackedLayout_AddItem(this.h, item.cPointer())
}

func (this *QStackedLayout) SizeHint() *QSize {
	_ret := C.QStackedLayout_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStackedLayout) MinimumSize() *QSize {
	_ret := C.QStackedLayout_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStackedLayout) ItemAt(param1 int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QStackedLayout_ItemAt(this.h, (C.int)(param1))))
}

func (this *QStackedLayout) TakeAt(param1 int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QStackedLayout_TakeAt(this.h, (C.int)(param1))))
}

func (this *QStackedLayout) SetGeometry(rect *QRect) {
	C.QStackedLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QStackedLayout) HasHeightForWidth() bool {
	return (bool)(C.QStackedLayout_HasHeightForWidth(this.h))
}

func (this *QStackedLayout) HeightForWidth(width int) int {
	return (int)(C.QStackedLayout_HeightForWidth(this.h, (C.int)(width)))
}

func (this *QStackedLayout) WidgetRemoved(index int) {
	C.QStackedLayout_WidgetRemoved(this.h, (C.int)(index))
}
func (this *QStackedLayout) OnWidgetRemoved(slot func(index int)) {
	C.QStackedLayout_connect_WidgetRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_WidgetRemoved
func miqt_exec_callback_QStackedLayout_WidgetRemoved(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QStackedLayout) CurrentChanged(index int) {
	C.QStackedLayout_CurrentChanged(this.h, (C.int)(index))
}
func (this *QStackedLayout) OnCurrentChanged(slot func(index int)) {
	C.QStackedLayout_connect_CurrentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_CurrentChanged
func miqt_exec_callback_QStackedLayout_CurrentChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QStackedLayout) SetCurrentIndex(index int) {
	C.QStackedLayout_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QStackedLayout) SetCurrentWidget(w *QWidget) {
	C.QStackedLayout_SetCurrentWidget(this.h, w.cPointer())
}

func QStackedLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStackedLayout) callVirtualBase_Count() int {

	return (int)(C.QStackedLayout_virtualbase_Count(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnCount(slot func(super func() int) int) {
	C.QStackedLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_Count
func miqt_exec_callback_QStackedLayout_Count(self *C.QStackedLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_AddItem(item *QLayoutItem) {

	C.QStackedLayout_virtualbase_AddItem(unsafe.Pointer(this.h), item.cPointer())

}
func (this *QStackedLayout) OnAddItem(slot func(super func(item *QLayoutItem), item *QLayoutItem)) {
	C.QStackedLayout_override_virtual_AddItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_AddItem
func miqt_exec_callback_QStackedLayout_AddItem(self *C.QStackedLayout, cb C.intptr_t, item *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QLayoutItem), item *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQLayoutItem(unsafe.Pointer(item))

	gofunc((&QStackedLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QStackedLayout) callVirtualBase_SizeHint() *QSize {

	_ret := C.QStackedLayout_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QStackedLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_SizeHint
func miqt_exec_callback_QStackedLayout_SizeHint(self *C.QStackedLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_MinimumSize() *QSize {

	_ret := C.QStackedLayout_virtualbase_MinimumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	C.QStackedLayout_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_MinimumSize
func miqt_exec_callback_QStackedLayout_MinimumSize(self *C.QStackedLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_ItemAt(param1 int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QStackedLayout_virtualbase_ItemAt(unsafe.Pointer(this.h), (C.int)(param1))))
}
func (this *QStackedLayout) OnItemAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	C.QStackedLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_ItemAt
func miqt_exec_callback_QStackedLayout_ItemAt(self *C.QStackedLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_TakeAt(param1 int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QStackedLayout_virtualbase_TakeAt(unsafe.Pointer(this.h), (C.int)(param1))))
}
func (this *QStackedLayout) OnTakeAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	C.QStackedLayout_override_virtual_TakeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_TakeAt
func miqt_exec_callback_QStackedLayout_TakeAt(self *C.QStackedLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_SetGeometry(rect *QRect) {

	C.QStackedLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QStackedLayout) OnSetGeometry(slot func(super func(rect *QRect), rect *QRect)) {
	C.QStackedLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_SetGeometry
func miqt_exec_callback_QStackedLayout_SetGeometry(self *C.QStackedLayout, cb C.intptr_t, rect *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect), rect *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(rect))

	gofunc((&QStackedLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QStackedLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QStackedLayout_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	C.QStackedLayout_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_HasHeightForWidth
func miqt_exec_callback_QStackedLayout_HasHeightForWidth(self *C.QStackedLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_HeightForWidth(width int) int {

	return (int)(C.QStackedLayout_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *QStackedLayout) OnHeightForWidth(slot func(super func(width int) int, width int) int) {
	C.QStackedLayout_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_HeightForWidth
func miqt_exec_callback_QStackedLayout_HeightForWidth(self *C.QStackedLayout, cb C.intptr_t, width C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int) int, width int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_Spacing() int {

	return (int)(C.QStackedLayout_virtualbase_Spacing(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnSpacing(slot func(super func() int) int) {
	C.QStackedLayout_override_virtual_Spacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_Spacing
func miqt_exec_callback_QStackedLayout_Spacing(self *C.QStackedLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Spacing)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_SetSpacing(spacing int) {

	C.QStackedLayout_virtualbase_SetSpacing(unsafe.Pointer(this.h), (C.int)(spacing))

}
func (this *QStackedLayout) OnSetSpacing(slot func(super func(spacing int), spacing int)) {
	C.QStackedLayout_override_virtual_SetSpacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_SetSpacing
func miqt_exec_callback_QStackedLayout_SetSpacing(self *C.QStackedLayout, cb C.intptr_t, spacing C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(spacing int), spacing int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(spacing)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_SetSpacing, slotval1)

}

func (this *QStackedLayout) callVirtualBase_Invalidate() {

	C.QStackedLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QStackedLayout) OnInvalidate(slot func(super func())) {
	C.QStackedLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_Invalidate
func miqt_exec_callback_QStackedLayout_Invalidate(self *C.QStackedLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QStackedLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QStackedLayout) callVirtualBase_Geometry() *QRect {

	_ret := C.QStackedLayout_virtualbase_Geometry(unsafe.Pointer(this.h))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	C.QStackedLayout_override_virtual_Geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_Geometry
func miqt_exec_callback_QStackedLayout_Geometry(self *C.QStackedLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QStackedLayout_virtualbase_ExpandingDirections(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	C.QStackedLayout_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_ExpandingDirections
func miqt_exec_callback_QStackedLayout_ExpandingDirections(self *C.QStackedLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_MaximumSize() *QSize {

	_ret := C.QStackedLayout_virtualbase_MaximumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	C.QStackedLayout_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_MaximumSize
func miqt_exec_callback_QStackedLayout_MaximumSize(self *C.QStackedLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QStackedLayout_virtualbase_IndexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QStackedLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	C.QStackedLayout_override_virtual_IndexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_IndexOf
func miqt_exec_callback_QStackedLayout_IndexOf(self *C.QStackedLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(param1), nil, nil)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QStackedLayout_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnIsEmpty(slot func(super func() bool) bool) {
	C.QStackedLayout_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_IsEmpty
func miqt_exec_callback_QStackedLayout_IsEmpty(self *C.QStackedLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QStackedLayout_virtualbase_ControlTypes(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	C.QStackedLayout_override_virtual_ControlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_ControlTypes
func miqt_exec_callback_QStackedLayout_ControlTypes(self *C.QStackedLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_ReplaceWidget(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QStackedLayout_virtualbase_ReplaceWidget(unsafe.Pointer(this.h), from.cPointer(), to.cPointer(), (C.int)(options))))
}
func (this *QStackedLayout) OnReplaceWidget(slot func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem) {
	C.QStackedLayout_override_virtual_ReplaceWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_ReplaceWidget
func miqt_exec_callback_QStackedLayout_ReplaceWidget(self *C.QStackedLayout, cb C.intptr_t, from *C.QWidget, to *C.QWidget, options C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(from), nil, nil)
	slotval2 := UnsafeNewQWidget(unsafe.Pointer(to), nil, nil)
	slotval3 := (FindChildOption)(options)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_ReplaceWidget, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_Layout() *QLayout {

	return UnsafeNewQLayout(unsafe.Pointer(C.QStackedLayout_virtualbase_Layout(unsafe.Pointer(this.h))), nil, nil)
}
func (this *QStackedLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	C.QStackedLayout_override_virtual_Layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_Layout
func miqt_exec_callback_QStackedLayout_Layout(self *C.QStackedLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QStackedLayout_virtualbase_ChildEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QStackedLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	C.QStackedLayout_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_ChildEvent
func miqt_exec_callback_QStackedLayout_ChildEvent(self *C.QStackedLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(e), nil)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QStackedLayout) Delete() {
	C.QStackedLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStackedLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QStackedLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
