package qt

/*

#include "gen_qboxlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBoxLayout__Direction int

const (
	QBoxLayout__LeftToRight QBoxLayout__Direction = 0
	QBoxLayout__RightToLeft QBoxLayout__Direction = 1
	QBoxLayout__TopToBottom QBoxLayout__Direction = 2
	QBoxLayout__BottomToTop QBoxLayout__Direction = 3
	QBoxLayout__Down        QBoxLayout__Direction = 2
	QBoxLayout__Up          QBoxLayout__Direction = 3
)

type QBoxLayout struct {
	h          *C.QBoxLayout
	isSubclass bool
	*QLayout
}

func (this *QBoxLayout) cPointer() *C.QBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBoxLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBoxLayout constructs the type using only CGO pointers.
func newQBoxLayout(h *C.QBoxLayout, h_QLayout *C.QLayout, h_QObject *C.QObject, h_QLayoutItem *C.QLayoutItem) *QBoxLayout {
	if h == nil {
		return nil
	}
	return &QBoxLayout{h: h,
		QLayout: newQLayout(h_QLayout, h_QObject, h_QLayoutItem)}
}

// UnsafeNewQBoxLayout constructs the type using only unsafe pointers.
func UnsafeNewQBoxLayout(h unsafe.Pointer, h_QLayout unsafe.Pointer, h_QObject unsafe.Pointer, h_QLayoutItem unsafe.Pointer) *QBoxLayout {
	if h == nil {
		return nil
	}

	return &QBoxLayout{h: (*C.QBoxLayout)(h),
		QLayout: UnsafeNewQLayout(h_QLayout, h_QObject, h_QLayoutItem)}
}

// NewQBoxLayout constructs a new QBoxLayout object.
func NewQBoxLayout(param1 QBoxLayout__Direction) *QBoxLayout {
	var outptr_QBoxLayout *C.QBoxLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QBoxLayout_new((C.int)(param1), &outptr_QBoxLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQBoxLayout(outptr_QBoxLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQBoxLayout2 constructs a new QBoxLayout object.
func NewQBoxLayout2(param1 QBoxLayout__Direction, parent *QWidget) *QBoxLayout {
	var outptr_QBoxLayout *C.QBoxLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QBoxLayout_new2((C.int)(param1), parent.cPointer(), &outptr_QBoxLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQBoxLayout(outptr_QBoxLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QBoxLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QBoxLayout_MetaObject(this.h)))
}

func (this *QBoxLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBoxLayout_Metacast(this.h, param1_Cstring))
}

func QBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxLayout) Direction() QBoxLayout__Direction {
	return (QBoxLayout__Direction)(C.QBoxLayout_Direction(this.h))
}

func (this *QBoxLayout) SetDirection(direction QBoxLayout__Direction) {
	C.QBoxLayout_SetDirection(this.h, (C.int)(direction))
}

func (this *QBoxLayout) AddSpacing(size int) {
	C.QBoxLayout_AddSpacing(this.h, (C.int)(size))
}

func (this *QBoxLayout) AddStretch() {
	C.QBoxLayout_AddStretch(this.h)
}

func (this *QBoxLayout) AddSpacerItem(spacerItem *QSpacerItem) {
	C.QBoxLayout_AddSpacerItem(this.h, spacerItem.cPointer())
}

func (this *QBoxLayout) AddWidget(param1 *QWidget) {
	C.QBoxLayout_AddWidget(this.h, param1.cPointer())
}

func (this *QBoxLayout) AddLayout(layout *QLayout) {
	C.QBoxLayout_AddLayout(this.h, layout.cPointer())
}

func (this *QBoxLayout) AddStrut(param1 int) {
	C.QBoxLayout_AddStrut(this.h, (C.int)(param1))
}

func (this *QBoxLayout) AddItem(param1 *QLayoutItem) {
	C.QBoxLayout_AddItem(this.h, param1.cPointer())
}

func (this *QBoxLayout) InsertSpacing(index int, size int) {
	C.QBoxLayout_InsertSpacing(this.h, (C.int)(index), (C.int)(size))
}

func (this *QBoxLayout) InsertStretch(index int) {
	C.QBoxLayout_InsertStretch(this.h, (C.int)(index))
}

func (this *QBoxLayout) InsertSpacerItem(index int, spacerItem *QSpacerItem) {
	C.QBoxLayout_InsertSpacerItem(this.h, (C.int)(index), spacerItem.cPointer())
}

func (this *QBoxLayout) InsertWidget(index int, widget *QWidget) {
	C.QBoxLayout_InsertWidget(this.h, (C.int)(index), widget.cPointer())
}

func (this *QBoxLayout) InsertLayout(index int, layout *QLayout) {
	C.QBoxLayout_InsertLayout(this.h, (C.int)(index), layout.cPointer())
}

func (this *QBoxLayout) InsertItem(index int, param2 *QLayoutItem) {
	C.QBoxLayout_InsertItem(this.h, (C.int)(index), param2.cPointer())
}

func (this *QBoxLayout) Spacing() int {
	return (int)(C.QBoxLayout_Spacing(this.h))
}

func (this *QBoxLayout) SetSpacing(spacing int) {
	C.QBoxLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QBoxLayout) SetStretchFactor(w *QWidget, stretch int) bool {
	return (bool)(C.QBoxLayout_SetStretchFactor(this.h, w.cPointer(), (C.int)(stretch)))
}

func (this *QBoxLayout) SetStretchFactor2(l *QLayout, stretch int) bool {
	return (bool)(C.QBoxLayout_SetStretchFactor2(this.h, l.cPointer(), (C.int)(stretch)))
}

func (this *QBoxLayout) SetStretch(index int, stretch int) {
	C.QBoxLayout_SetStretch(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QBoxLayout) Stretch(index int) int {
	return (int)(C.QBoxLayout_Stretch(this.h, (C.int)(index)))
}

func (this *QBoxLayout) SizeHint() *QSize {
	_ret := C.QBoxLayout_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxLayout) MinimumSize() *QSize {
	_ret := C.QBoxLayout_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxLayout) MaximumSize() *QSize {
	_ret := C.QBoxLayout_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxLayout) HasHeightForWidth() bool {
	return (bool)(C.QBoxLayout_HasHeightForWidth(this.h))
}

func (this *QBoxLayout) HeightForWidth(param1 int) int {
	return (int)(C.QBoxLayout_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QBoxLayout) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QBoxLayout_MinimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QBoxLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QBoxLayout_ExpandingDirections(this.h))
}

func (this *QBoxLayout) Invalidate() {
	C.QBoxLayout_Invalidate(this.h)
}

func (this *QBoxLayout) ItemAt(param1 int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QBoxLayout_ItemAt(this.h, (C.int)(param1))))
}

func (this *QBoxLayout) TakeAt(param1 int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QBoxLayout_TakeAt(this.h, (C.int)(param1))))
}

func (this *QBoxLayout) Count() int {
	return (int)(C.QBoxLayout_Count(this.h))
}

func (this *QBoxLayout) SetGeometry(geometry *QRect) {
	C.QBoxLayout_SetGeometry(this.h, geometry.cPointer())
}

func QBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxLayout) AddStretch1(stretch int) {
	C.QBoxLayout_AddStretch1(this.h, (C.int)(stretch))
}

func (this *QBoxLayout) AddWidget2(param1 *QWidget, stretch int) {
	C.QBoxLayout_AddWidget2(this.h, param1.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) AddWidget3(param1 *QWidget, stretch int, alignment AlignmentFlag) {
	C.QBoxLayout_AddWidget3(this.h, param1.cPointer(), (C.int)(stretch), (C.int)(alignment))
}

func (this *QBoxLayout) AddLayout2(layout *QLayout, stretch int) {
	C.QBoxLayout_AddLayout2(this.h, layout.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) InsertStretch2(index int, stretch int) {
	C.QBoxLayout_InsertStretch2(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QBoxLayout) InsertWidget3(index int, widget *QWidget, stretch int) {
	C.QBoxLayout_InsertWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) InsertWidget4(index int, widget *QWidget, stretch int, alignment AlignmentFlag) {
	C.QBoxLayout_InsertWidget4(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch), (C.int)(alignment))
}

func (this *QBoxLayout) InsertLayout3(index int, layout *QLayout, stretch int) {
	C.QBoxLayout_InsertLayout3(this.h, (C.int)(index), layout.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) callVirtualBase_AddItem(param1 *QLayoutItem) {

	C.QBoxLayout_virtualbase_AddItem(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QBoxLayout) OnAddItem(slot func(super func(param1 *QLayoutItem), param1 *QLayoutItem)) {
	C.QBoxLayout_override_virtual_AddItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_AddItem
func miqt_exec_callback_QBoxLayout_AddItem(self *C.QBoxLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QLayoutItem), param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQLayoutItem(unsafe.Pointer(param1))

	gofunc((&QBoxLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QBoxLayout) callVirtualBase_SizeHint() *QSize {

	_ret := C.QBoxLayout_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QBoxLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QBoxLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_SizeHint
func miqt_exec_callback_QBoxLayout_SizeHint(self *C.QBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_MinimumSize() *QSize {

	_ret := C.QBoxLayout_virtualbase_MinimumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QBoxLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	C.QBoxLayout_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_MinimumSize
func miqt_exec_callback_QBoxLayout_MinimumSize(self *C.QBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_MaximumSize() *QSize {

	_ret := C.QBoxLayout_virtualbase_MaximumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QBoxLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	C.QBoxLayout_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_MaximumSize
func miqt_exec_callback_QBoxLayout_MaximumSize(self *C.QBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QBoxLayout_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	C.QBoxLayout_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_HasHeightForWidth
func miqt_exec_callback_QBoxLayout_HasHeightForWidth(self *C.QBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QBoxLayout_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QBoxLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QBoxLayout_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_HeightForWidth
func miqt_exec_callback_QBoxLayout_HeightForWidth(self *C.QBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QBoxLayout_virtualbase_MinimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QBoxLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QBoxLayout_override_virtual_MinimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_MinimumHeightForWidth
func miqt_exec_callback_QBoxLayout_MinimumHeightForWidth(self *C.QBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QBoxLayout_virtualbase_ExpandingDirections(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	C.QBoxLayout_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_ExpandingDirections
func miqt_exec_callback_QBoxLayout_ExpandingDirections(self *C.QBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_Invalidate() {

	C.QBoxLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QBoxLayout) OnInvalidate(slot func(super func())) {
	C.QBoxLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_Invalidate
func miqt_exec_callback_QBoxLayout_Invalidate(self *C.QBoxLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QBoxLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QBoxLayout) callVirtualBase_ItemAt(param1 int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QBoxLayout_virtualbase_ItemAt(unsafe.Pointer(this.h), (C.int)(param1))))
}
func (this *QBoxLayout) OnItemAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	C.QBoxLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_ItemAt
func miqt_exec_callback_QBoxLayout_ItemAt(self *C.QBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_TakeAt(param1 int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QBoxLayout_virtualbase_TakeAt(unsafe.Pointer(this.h), (C.int)(param1))))
}
func (this *QBoxLayout) OnTakeAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	C.QBoxLayout_override_virtual_TakeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_TakeAt
func miqt_exec_callback_QBoxLayout_TakeAt(self *C.QBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_Count() int {

	return (int)(C.QBoxLayout_virtualbase_Count(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnCount(slot func(super func() int) int) {
	C.QBoxLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_Count
func miqt_exec_callback_QBoxLayout_Count(self *C.QBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QBoxLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QBoxLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	C.QBoxLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_SetGeometry
func miqt_exec_callback_QBoxLayout_SetGeometry(self *C.QBoxLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(geometry))

	gofunc((&QBoxLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QBoxLayout) callVirtualBase_Geometry() *QRect {

	_ret := C.QBoxLayout_virtualbase_Geometry(unsafe.Pointer(this.h))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QBoxLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	C.QBoxLayout_override_virtual_Geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_Geometry
func miqt_exec_callback_QBoxLayout_Geometry(self *C.QBoxLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QBoxLayout_virtualbase_IndexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QBoxLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	C.QBoxLayout_override_virtual_IndexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_IndexOf
func miqt_exec_callback_QBoxLayout_IndexOf(self *C.QBoxLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(param1), nil, nil)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QBoxLayout_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnIsEmpty(slot func(super func() bool) bool) {
	C.QBoxLayout_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_IsEmpty
func miqt_exec_callback_QBoxLayout_IsEmpty(self *C.QBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QBoxLayout_virtualbase_ControlTypes(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	C.QBoxLayout_override_virtual_ControlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_ControlTypes
func miqt_exec_callback_QBoxLayout_ControlTypes(self *C.QBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_Layout() *QLayout {

	return UnsafeNewQLayout(unsafe.Pointer(C.QBoxLayout_virtualbase_Layout(unsafe.Pointer(this.h))), nil, nil)
}
func (this *QBoxLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	C.QBoxLayout_override_virtual_Layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_Layout
func miqt_exec_callback_QBoxLayout_Layout(self *C.QBoxLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QBoxLayout_virtualbase_ChildEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QBoxLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	C.QBoxLayout_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxLayout_ChildEvent
func miqt_exec_callback_QBoxLayout_ChildEvent(self *C.QBoxLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(e), nil)

	gofunc((&QBoxLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QBoxLayout) Delete() {
	C.QBoxLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBoxLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QBoxLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHBoxLayout struct {
	h          *C.QHBoxLayout
	isSubclass bool
	*QBoxLayout
}

func (this *QHBoxLayout) cPointer() *C.QHBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHBoxLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHBoxLayout constructs the type using only CGO pointers.
func newQHBoxLayout(h *C.QHBoxLayout, h_QBoxLayout *C.QBoxLayout, h_QLayout *C.QLayout, h_QObject *C.QObject, h_QLayoutItem *C.QLayoutItem) *QHBoxLayout {
	if h == nil {
		return nil
	}
	return &QHBoxLayout{h: h,
		QBoxLayout: newQBoxLayout(h_QBoxLayout, h_QLayout, h_QObject, h_QLayoutItem)}
}

// UnsafeNewQHBoxLayout constructs the type using only unsafe pointers.
func UnsafeNewQHBoxLayout(h unsafe.Pointer, h_QBoxLayout unsafe.Pointer, h_QLayout unsafe.Pointer, h_QObject unsafe.Pointer, h_QLayoutItem unsafe.Pointer) *QHBoxLayout {
	if h == nil {
		return nil
	}

	return &QHBoxLayout{h: (*C.QHBoxLayout)(h),
		QBoxLayout: UnsafeNewQBoxLayout(h_QBoxLayout, h_QLayout, h_QObject, h_QLayoutItem)}
}

// NewQHBoxLayout constructs a new QHBoxLayout object.
func NewQHBoxLayout(parent *QWidget) *QHBoxLayout {
	var outptr_QHBoxLayout *C.QHBoxLayout = nil
	var outptr_QBoxLayout *C.QBoxLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QHBoxLayout_new(parent.cPointer(), &outptr_QHBoxLayout, &outptr_QBoxLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQHBoxLayout(outptr_QHBoxLayout, outptr_QBoxLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQHBoxLayout2 constructs a new QHBoxLayout object.
func NewQHBoxLayout2() *QHBoxLayout {
	var outptr_QHBoxLayout *C.QHBoxLayout = nil
	var outptr_QBoxLayout *C.QBoxLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QHBoxLayout_new2(&outptr_QHBoxLayout, &outptr_QBoxLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQHBoxLayout(outptr_QHBoxLayout, outptr_QBoxLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QHBoxLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QHBoxLayout_MetaObject(this.h)))
}

func (this *QHBoxLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHBoxLayout_Metacast(this.h, param1_Cstring))
}

func QHBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHBoxLayout) callVirtualBase_AddItem(param1 *QLayoutItem) {

	C.QHBoxLayout_virtualbase_AddItem(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QHBoxLayout) OnAddItem(slot func(super func(param1 *QLayoutItem), param1 *QLayoutItem)) {
	C.QHBoxLayout_override_virtual_AddItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_AddItem
func miqt_exec_callback_QHBoxLayout_AddItem(self *C.QHBoxLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QLayoutItem), param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQLayoutItem(unsafe.Pointer(param1))

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QHBoxLayout) callVirtualBase_SizeHint() *QSize {

	_ret := C.QHBoxLayout_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHBoxLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QHBoxLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_SizeHint
func miqt_exec_callback_QHBoxLayout_SizeHint(self *C.QHBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_MinimumSize() *QSize {

	_ret := C.QHBoxLayout_virtualbase_MinimumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHBoxLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	C.QHBoxLayout_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_MinimumSize
func miqt_exec_callback_QHBoxLayout_MinimumSize(self *C.QHBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_MaximumSize() *QSize {

	_ret := C.QHBoxLayout_virtualbase_MaximumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHBoxLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	C.QHBoxLayout_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_MaximumSize
func miqt_exec_callback_QHBoxLayout_MaximumSize(self *C.QHBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QHBoxLayout_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	C.QHBoxLayout_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_HasHeightForWidth
func miqt_exec_callback_QHBoxLayout_HasHeightForWidth(self *C.QHBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QHBoxLayout_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHBoxLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QHBoxLayout_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_HeightForWidth
func miqt_exec_callback_QHBoxLayout_HeightForWidth(self *C.QHBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QHBoxLayout_virtualbase_MinimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHBoxLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QHBoxLayout_override_virtual_MinimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_MinimumHeightForWidth
func miqt_exec_callback_QHBoxLayout_MinimumHeightForWidth(self *C.QHBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QHBoxLayout_virtualbase_ExpandingDirections(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	C.QHBoxLayout_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_ExpandingDirections
func miqt_exec_callback_QHBoxLayout_ExpandingDirections(self *C.QHBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_Invalidate() {

	C.QHBoxLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QHBoxLayout) OnInvalidate(slot func(super func())) {
	C.QHBoxLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_Invalidate
func miqt_exec_callback_QHBoxLayout_Invalidate(self *C.QHBoxLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QHBoxLayout) callVirtualBase_ItemAt(param1 int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QHBoxLayout_virtualbase_ItemAt(unsafe.Pointer(this.h), (C.int)(param1))))
}
func (this *QHBoxLayout) OnItemAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	C.QHBoxLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_ItemAt
func miqt_exec_callback_QHBoxLayout_ItemAt(self *C.QHBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_TakeAt(param1 int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QHBoxLayout_virtualbase_TakeAt(unsafe.Pointer(this.h), (C.int)(param1))))
}
func (this *QHBoxLayout) OnTakeAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	C.QHBoxLayout_override_virtual_TakeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_TakeAt
func miqt_exec_callback_QHBoxLayout_TakeAt(self *C.QHBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_Count() int {

	return (int)(C.QHBoxLayout_virtualbase_Count(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnCount(slot func(super func() int) int) {
	C.QHBoxLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_Count
func miqt_exec_callback_QHBoxLayout_Count(self *C.QHBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QHBoxLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QHBoxLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	C.QHBoxLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxLayout_SetGeometry
func miqt_exec_callback_QHBoxLayout_SetGeometry(self *C.QHBoxLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(geometry))

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

// Delete this object from C++ memory.
func (this *QHBoxLayout) Delete() {
	C.QHBoxLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHBoxLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QHBoxLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVBoxLayout struct {
	h          *C.QVBoxLayout
	isSubclass bool
	*QBoxLayout
}

func (this *QVBoxLayout) cPointer() *C.QVBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVBoxLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVBoxLayout constructs the type using only CGO pointers.
func newQVBoxLayout(h *C.QVBoxLayout, h_QBoxLayout *C.QBoxLayout, h_QLayout *C.QLayout, h_QObject *C.QObject, h_QLayoutItem *C.QLayoutItem) *QVBoxLayout {
	if h == nil {
		return nil
	}
	return &QVBoxLayout{h: h,
		QBoxLayout: newQBoxLayout(h_QBoxLayout, h_QLayout, h_QObject, h_QLayoutItem)}
}

// UnsafeNewQVBoxLayout constructs the type using only unsafe pointers.
func UnsafeNewQVBoxLayout(h unsafe.Pointer, h_QBoxLayout unsafe.Pointer, h_QLayout unsafe.Pointer, h_QObject unsafe.Pointer, h_QLayoutItem unsafe.Pointer) *QVBoxLayout {
	if h == nil {
		return nil
	}

	return &QVBoxLayout{h: (*C.QVBoxLayout)(h),
		QBoxLayout: UnsafeNewQBoxLayout(h_QBoxLayout, h_QLayout, h_QObject, h_QLayoutItem)}
}

// NewQVBoxLayout constructs a new QVBoxLayout object.
func NewQVBoxLayout(parent *QWidget) *QVBoxLayout {
	var outptr_QVBoxLayout *C.QVBoxLayout = nil
	var outptr_QBoxLayout *C.QBoxLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QVBoxLayout_new(parent.cPointer(), &outptr_QVBoxLayout, &outptr_QBoxLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQVBoxLayout(outptr_QVBoxLayout, outptr_QBoxLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQVBoxLayout2 constructs a new QVBoxLayout object.
func NewQVBoxLayout2() *QVBoxLayout {
	var outptr_QVBoxLayout *C.QVBoxLayout = nil
	var outptr_QBoxLayout *C.QBoxLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QVBoxLayout_new2(&outptr_QVBoxLayout, &outptr_QBoxLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQVBoxLayout(outptr_QVBoxLayout, outptr_QBoxLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QVBoxLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QVBoxLayout_MetaObject(this.h)))
}

func (this *QVBoxLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVBoxLayout_Metacast(this.h, param1_Cstring))
}

func QVBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVBoxLayout) callVirtualBase_AddItem(param1 *QLayoutItem) {

	C.QVBoxLayout_virtualbase_AddItem(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QVBoxLayout) OnAddItem(slot func(super func(param1 *QLayoutItem), param1 *QLayoutItem)) {
	C.QVBoxLayout_override_virtual_AddItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_AddItem
func miqt_exec_callback_QVBoxLayout_AddItem(self *C.QVBoxLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QLayoutItem), param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQLayoutItem(unsafe.Pointer(param1))

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QVBoxLayout) callVirtualBase_SizeHint() *QSize {

	_ret := C.QVBoxLayout_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVBoxLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QVBoxLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_SizeHint
func miqt_exec_callback_QVBoxLayout_SizeHint(self *C.QVBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_MinimumSize() *QSize {

	_ret := C.QVBoxLayout_virtualbase_MinimumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVBoxLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	C.QVBoxLayout_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_MinimumSize
func miqt_exec_callback_QVBoxLayout_MinimumSize(self *C.QVBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_MaximumSize() *QSize {

	_ret := C.QVBoxLayout_virtualbase_MaximumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVBoxLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	C.QVBoxLayout_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_MaximumSize
func miqt_exec_callback_QVBoxLayout_MaximumSize(self *C.QVBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QVBoxLayout_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	C.QVBoxLayout_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_HasHeightForWidth
func miqt_exec_callback_QVBoxLayout_HasHeightForWidth(self *C.QVBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QVBoxLayout_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QVBoxLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QVBoxLayout_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_HeightForWidth
func miqt_exec_callback_QVBoxLayout_HeightForWidth(self *C.QVBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QVBoxLayout_virtualbase_MinimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QVBoxLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QVBoxLayout_override_virtual_MinimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_MinimumHeightForWidth
func miqt_exec_callback_QVBoxLayout_MinimumHeightForWidth(self *C.QVBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QVBoxLayout_virtualbase_ExpandingDirections(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	C.QVBoxLayout_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_ExpandingDirections
func miqt_exec_callback_QVBoxLayout_ExpandingDirections(self *C.QVBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_Invalidate() {

	C.QVBoxLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QVBoxLayout) OnInvalidate(slot func(super func())) {
	C.QVBoxLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_Invalidate
func miqt_exec_callback_QVBoxLayout_Invalidate(self *C.QVBoxLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QVBoxLayout) callVirtualBase_ItemAt(param1 int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QVBoxLayout_virtualbase_ItemAt(unsafe.Pointer(this.h), (C.int)(param1))))
}
func (this *QVBoxLayout) OnItemAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	C.QVBoxLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_ItemAt
func miqt_exec_callback_QVBoxLayout_ItemAt(self *C.QVBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_TakeAt(param1 int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QVBoxLayout_virtualbase_TakeAt(unsafe.Pointer(this.h), (C.int)(param1))))
}
func (this *QVBoxLayout) OnTakeAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	C.QVBoxLayout_override_virtual_TakeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_TakeAt
func miqt_exec_callback_QVBoxLayout_TakeAt(self *C.QVBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_Count() int {

	return (int)(C.QVBoxLayout_virtualbase_Count(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnCount(slot func(super func() int) int) {
	C.QVBoxLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_Count
func miqt_exec_callback_QVBoxLayout_Count(self *C.QVBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QVBoxLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QVBoxLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	C.QVBoxLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxLayout_SetGeometry
func miqt_exec_callback_QVBoxLayout_SetGeometry(self *C.QVBoxLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(geometry))

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

// Delete this object from C++ memory.
func (this *QVBoxLayout) Delete() {
	C.QVBoxLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVBoxLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QVBoxLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
