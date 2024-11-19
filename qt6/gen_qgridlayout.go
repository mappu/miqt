package qt6

/*

#include "gen_qgridlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGridLayout struct {
	h          *C.QGridLayout
	isSubclass bool
	*QLayout
}

func (this *QGridLayout) cPointer() *C.QGridLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGridLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGridLayout constructs the type using only CGO pointers.
func newQGridLayout(h *C.QGridLayout, h_QLayout *C.QLayout, h_QObject *C.QObject, h_QLayoutItem *C.QLayoutItem) *QGridLayout {
	if h == nil {
		return nil
	}
	return &QGridLayout{h: h,
		QLayout: newQLayout(h_QLayout, h_QObject, h_QLayoutItem)}
}

// UnsafeNewQGridLayout constructs the type using only unsafe pointers.
func UnsafeNewQGridLayout(h unsafe.Pointer, h_QLayout unsafe.Pointer, h_QObject unsafe.Pointer, h_QLayoutItem unsafe.Pointer) *QGridLayout {
	if h == nil {
		return nil
	}

	return &QGridLayout{h: (*C.QGridLayout)(h),
		QLayout: UnsafeNewQLayout(h_QLayout, h_QObject, h_QLayoutItem)}
}

// NewQGridLayout constructs a new QGridLayout object.
func NewQGridLayout(parent *QWidget) *QGridLayout {
	var outptr_QGridLayout *C.QGridLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QGridLayout_new(parent.cPointer(), &outptr_QGridLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQGridLayout(outptr_QGridLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGridLayout2 constructs a new QGridLayout object.
func NewQGridLayout2() *QGridLayout {
	var outptr_QGridLayout *C.QGridLayout = nil
	var outptr_QLayout *C.QLayout = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil

	C.QGridLayout_new2(&outptr_QGridLayout, &outptr_QLayout, &outptr_QObject, &outptr_QLayoutItem)
	ret := newQGridLayout(outptr_QGridLayout, outptr_QLayout, outptr_QObject, outptr_QLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QGridLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGridLayout_MetaObject(this.h)))
}

func (this *QGridLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGridLayout_Metacast(this.h, param1_Cstring))
}

func QGridLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGridLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGridLayout) SizeHint() *QSize {
	_ret := C.QGridLayout_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) MinimumSize() *QSize {
	_ret := C.QGridLayout_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) MaximumSize() *QSize {
	_ret := C.QGridLayout_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) SetHorizontalSpacing(spacing int) {
	C.QGridLayout_SetHorizontalSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) HorizontalSpacing() int {
	return (int)(C.QGridLayout_HorizontalSpacing(this.h))
}

func (this *QGridLayout) SetVerticalSpacing(spacing int) {
	C.QGridLayout_SetVerticalSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) VerticalSpacing() int {
	return (int)(C.QGridLayout_VerticalSpacing(this.h))
}

func (this *QGridLayout) SetSpacing(spacing int) {
	C.QGridLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) Spacing() int {
	return (int)(C.QGridLayout_Spacing(this.h))
}

func (this *QGridLayout) SetRowStretch(row int, stretch int) {
	C.QGridLayout_SetRowStretch(this.h, (C.int)(row), (C.int)(stretch))
}

func (this *QGridLayout) SetColumnStretch(column int, stretch int) {
	C.QGridLayout_SetColumnStretch(this.h, (C.int)(column), (C.int)(stretch))
}

func (this *QGridLayout) RowStretch(row int) int {
	return (int)(C.QGridLayout_RowStretch(this.h, (C.int)(row)))
}

func (this *QGridLayout) ColumnStretch(column int) int {
	return (int)(C.QGridLayout_ColumnStretch(this.h, (C.int)(column)))
}

func (this *QGridLayout) SetRowMinimumHeight(row int, minSize int) {
	C.QGridLayout_SetRowMinimumHeight(this.h, (C.int)(row), (C.int)(minSize))
}

func (this *QGridLayout) SetColumnMinimumWidth(column int, minSize int) {
	C.QGridLayout_SetColumnMinimumWidth(this.h, (C.int)(column), (C.int)(minSize))
}

func (this *QGridLayout) RowMinimumHeight(row int) int {
	return (int)(C.QGridLayout_RowMinimumHeight(this.h, (C.int)(row)))
}

func (this *QGridLayout) ColumnMinimumWidth(column int) int {
	return (int)(C.QGridLayout_ColumnMinimumWidth(this.h, (C.int)(column)))
}

func (this *QGridLayout) ColumnCount() int {
	return (int)(C.QGridLayout_ColumnCount(this.h))
}

func (this *QGridLayout) RowCount() int {
	return (int)(C.QGridLayout_RowCount(this.h))
}

func (this *QGridLayout) CellRect(row int, column int) *QRect {
	_ret := C.QGridLayout_CellRect(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) HasHeightForWidth() bool {
	return (bool)(C.QGridLayout_HasHeightForWidth(this.h))
}

func (this *QGridLayout) HeightForWidth(param1 int) int {
	return (int)(C.QGridLayout_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QGridLayout) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QGridLayout_MinimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QGridLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QGridLayout_ExpandingDirections(this.h))
}

func (this *QGridLayout) Invalidate() {
	C.QGridLayout_Invalidate(this.h)
}

func (this *QGridLayout) AddWidget(w *QWidget) {
	C.QGridLayout_AddWidget(this.h, w.cPointer())
}

func (this *QGridLayout) AddWidget2(param1 *QWidget, row int, column int) {
	C.QGridLayout_AddWidget2(this.h, param1.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) AddWidget3(param1 *QWidget, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_AddWidget3(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) AddLayout(param1 *QLayout, row int, column int) {
	C.QGridLayout_AddLayout(this.h, param1.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) AddLayout2(param1 *QLayout, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_AddLayout2(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) SetOriginCorner(originCorner Corner) {
	C.QGridLayout_SetOriginCorner(this.h, (C.int)(originCorner))
}

func (this *QGridLayout) OriginCorner() Corner {
	return (Corner)(C.QGridLayout_OriginCorner(this.h))
}

func (this *QGridLayout) ItemAt(index int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QGridLayout_ItemAt(this.h, (C.int)(index))))
}

func (this *QGridLayout) ItemAtPosition(row int, column int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QGridLayout_ItemAtPosition(this.h, (C.int)(row), (C.int)(column))))
}

func (this *QGridLayout) TakeAt(index int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QGridLayout_TakeAt(this.h, (C.int)(index))))
}

func (this *QGridLayout) Count() int {
	return (int)(C.QGridLayout_Count(this.h))
}

func (this *QGridLayout) SetGeometry(geometry *QRect) {
	C.QGridLayout_SetGeometry(this.h, geometry.cPointer())
}

func (this *QGridLayout) AddItem(item *QLayoutItem, row int, column int) {
	C.QGridLayout_AddItem(this.h, item.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) SetDefaultPositioning(n int, orient Orientation) {
	C.QGridLayout_SetDefaultPositioning(this.h, (C.int)(n), (C.int)(orient))
}

func (this *QGridLayout) GetItemPosition(idx int, row *int, column *int, rowSpan *int, columnSpan *int) {
	C.QGridLayout_GetItemPosition(this.h, (C.int)(idx), (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)), (*C.int)(unsafe.Pointer(rowSpan)), (*C.int)(unsafe.Pointer(columnSpan)))
}

func QGridLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGridLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGridLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGridLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGridLayout) AddWidget4(param1 *QWidget, row int, column int, param4 AlignmentFlag) {
	C.QGridLayout_AddWidget4(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(param4))
}

func (this *QGridLayout) AddWidget6(param1 *QWidget, row int, column int, rowSpan int, columnSpan int, param6 AlignmentFlag) {
	C.QGridLayout_AddWidget6(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) AddLayout4(param1 *QLayout, row int, column int, param4 AlignmentFlag) {
	C.QGridLayout_AddLayout4(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(param4))
}

func (this *QGridLayout) AddLayout6(param1 *QLayout, row int, column int, rowSpan int, columnSpan int, param6 AlignmentFlag) {
	C.QGridLayout_AddLayout6(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) AddItem4(item *QLayoutItem, row int, column int, rowSpan int) {
	C.QGridLayout_AddItem4(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan))
}

func (this *QGridLayout) AddItem5(item *QLayoutItem, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_AddItem5(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) AddItem6(item *QLayoutItem, row int, column int, rowSpan int, columnSpan int, param6 AlignmentFlag) {
	C.QGridLayout_AddItem6(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) callVirtualBase_SizeHint() *QSize {

	_ret := C.QGridLayout_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGridLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QGridLayout_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_SizeHint
func miqt_exec_callback_QGridLayout_SizeHint(self *C.QGridLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_MinimumSize() *QSize {

	_ret := C.QGridLayout_virtualbase_MinimumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGridLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	C.QGridLayout_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_MinimumSize
func miqt_exec_callback_QGridLayout_MinimumSize(self *C.QGridLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_MaximumSize() *QSize {

	_ret := C.QGridLayout_virtualbase_MaximumSize(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGridLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	C.QGridLayout_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_MaximumSize
func miqt_exec_callback_QGridLayout_MaximumSize(self *C.QGridLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_SetSpacing(spacing int) {

	C.QGridLayout_virtualbase_SetSpacing(unsafe.Pointer(this.h), (C.int)(spacing))

}
func (this *QGridLayout) OnSetSpacing(slot func(super func(spacing int), spacing int)) {
	C.QGridLayout_override_virtual_SetSpacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_SetSpacing
func miqt_exec_callback_QGridLayout_SetSpacing(self *C.QGridLayout, cb C.intptr_t, spacing C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(spacing int), spacing int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(spacing)

	gofunc((&QGridLayout{h: self}).callVirtualBase_SetSpacing, slotval1)

}

func (this *QGridLayout) callVirtualBase_Spacing() int {

	return (int)(C.QGridLayout_virtualbase_Spacing(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnSpacing(slot func(super func() int) int) {
	C.QGridLayout_override_virtual_Spacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_Spacing
func miqt_exec_callback_QGridLayout_Spacing(self *C.QGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_Spacing)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QGridLayout_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	C.QGridLayout_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_HasHeightForWidth
func miqt_exec_callback_QGridLayout_HasHeightForWidth(self *C.QGridLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QGridLayout_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGridLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QGridLayout_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_HeightForWidth
func miqt_exec_callback_QGridLayout_HeightForWidth(self *C.QGridLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QGridLayout_virtualbase_MinimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGridLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QGridLayout_override_virtual_MinimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_MinimumHeightForWidth
func miqt_exec_callback_QGridLayout_MinimumHeightForWidth(self *C.QGridLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QGridLayout_virtualbase_ExpandingDirections(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	C.QGridLayout_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_ExpandingDirections
func miqt_exec_callback_QGridLayout_ExpandingDirections(self *C.QGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_Invalidate() {

	C.QGridLayout_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QGridLayout) OnInvalidate(slot func(super func())) {
	C.QGridLayout_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_Invalidate
func miqt_exec_callback_QGridLayout_Invalidate(self *C.QGridLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGridLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGridLayout) callVirtualBase_ItemAt(index int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QGridLayout_virtualbase_ItemAt(unsafe.Pointer(this.h), (C.int)(index))))
}
func (this *QGridLayout) OnItemAt(slot func(super func(index int) *QLayoutItem, index int) *QLayoutItem) {
	C.QGridLayout_override_virtual_ItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_ItemAt
func miqt_exec_callback_QGridLayout_ItemAt(self *C.QGridLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QLayoutItem, index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_TakeAt(index int) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QGridLayout_virtualbase_TakeAt(unsafe.Pointer(this.h), (C.int)(index))))
}
func (this *QGridLayout) OnTakeAt(slot func(super func(index int) *QLayoutItem, index int) *QLayoutItem) {
	C.QGridLayout_override_virtual_TakeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_TakeAt
func miqt_exec_callback_QGridLayout_TakeAt(self *C.QGridLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QLayoutItem, index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_Count() int {

	return (int)(C.QGridLayout_virtualbase_Count(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnCount(slot func(super func() int) int) {
	C.QGridLayout_override_virtual_Count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_Count
func miqt_exec_callback_QGridLayout_Count(self *C.QGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QGridLayout_virtualbase_SetGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QGridLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	C.QGridLayout_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_SetGeometry
func miqt_exec_callback_QGridLayout_SetGeometry(self *C.QGridLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(geometry))

	gofunc((&QGridLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGridLayout) callVirtualBase_AddItemWithQLayoutItem(param1 *QLayoutItem) {

	C.QGridLayout_virtualbase_AddItemWithQLayoutItem(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QGridLayout) OnAddItemWithQLayoutItem(slot func(super func(param1 *QLayoutItem), param1 *QLayoutItem)) {
	C.QGridLayout_override_virtual_AddItemWithQLayoutItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_AddItemWithQLayoutItem
func miqt_exec_callback_QGridLayout_AddItemWithQLayoutItem(self *C.QGridLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QLayoutItem), param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQLayoutItem(unsafe.Pointer(param1))

	gofunc((&QGridLayout{h: self}).callVirtualBase_AddItemWithQLayoutItem, slotval1)

}

func (this *QGridLayout) callVirtualBase_Geometry() *QRect {

	_ret := C.QGridLayout_virtualbase_Geometry(unsafe.Pointer(this.h))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGridLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	C.QGridLayout_override_virtual_Geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_Geometry
func miqt_exec_callback_QGridLayout_Geometry(self *C.QGridLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QGridLayout_virtualbase_IndexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QGridLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	C.QGridLayout_override_virtual_IndexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_IndexOf
func miqt_exec_callback_QGridLayout_IndexOf(self *C.QGridLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(param1), nil, nil)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QGridLayout_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnIsEmpty(slot func(super func() bool) bool) {
	C.QGridLayout_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_IsEmpty
func miqt_exec_callback_QGridLayout_IsEmpty(self *C.QGridLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QGridLayout_virtualbase_ControlTypes(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	C.QGridLayout_override_virtual_ControlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_ControlTypes
func miqt_exec_callback_QGridLayout_ControlTypes(self *C.QGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_ReplaceWidget(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {

	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QGridLayout_virtualbase_ReplaceWidget(unsafe.Pointer(this.h), from.cPointer(), to.cPointer(), (C.int)(options))))
}
func (this *QGridLayout) OnReplaceWidget(slot func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem) {
	C.QGridLayout_override_virtual_ReplaceWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_ReplaceWidget
func miqt_exec_callback_QGridLayout_ReplaceWidget(self *C.QGridLayout, cb C.intptr_t, from *C.QWidget, to *C.QWidget, options C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(from), nil, nil)
	slotval2 := UnsafeNewQWidget(unsafe.Pointer(to), nil, nil)
	slotval3 := (FindChildOption)(options)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_ReplaceWidget, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_Layout() *QLayout {

	return UnsafeNewQLayout(unsafe.Pointer(C.QGridLayout_virtualbase_Layout(unsafe.Pointer(this.h))), nil, nil)
}
func (this *QGridLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	C.QGridLayout_override_virtual_Layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_Layout
func miqt_exec_callback_QGridLayout_Layout(self *C.QGridLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QGridLayout_virtualbase_ChildEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGridLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	C.QGridLayout_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGridLayout_ChildEvent
func miqt_exec_callback_QGridLayout_ChildEvent(self *C.QGridLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(e), nil)

	gofunc((&QGridLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QGridLayout) Delete() {
	C.QGridLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGridLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGridLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
