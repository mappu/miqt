package qt

/*

#include "gen_qtabbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTabBar__Shape int

const (
	QTabBar__RoundedNorth    QTabBar__Shape = 0
	QTabBar__RoundedSouth    QTabBar__Shape = 1
	QTabBar__RoundedWest     QTabBar__Shape = 2
	QTabBar__RoundedEast     QTabBar__Shape = 3
	QTabBar__TriangularNorth QTabBar__Shape = 4
	QTabBar__TriangularSouth QTabBar__Shape = 5
	QTabBar__TriangularWest  QTabBar__Shape = 6
	QTabBar__TriangularEast  QTabBar__Shape = 7
)

type QTabBar__ButtonPosition int

const (
	QTabBar__LeftSide  QTabBar__ButtonPosition = 0
	QTabBar__RightSide QTabBar__ButtonPosition = 1
)

type QTabBar__SelectionBehavior int

const (
	QTabBar__SelectLeftTab     QTabBar__SelectionBehavior = 0
	QTabBar__SelectRightTab    QTabBar__SelectionBehavior = 1
	QTabBar__SelectPreviousTab QTabBar__SelectionBehavior = 2
)

type QTabBar struct {
	h          *C.QTabBar
	isSubclass bool
	*QWidget
}

func (this *QTabBar) cPointer() *C.QTabBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTabBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTabBar constructs the type using only CGO pointers.
func newQTabBar(h *C.QTabBar, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QTabBar {
	if h == nil {
		return nil
	}
	return &QTabBar{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQTabBar constructs the type using only unsafe pointers.
func UnsafeNewQTabBar(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QTabBar {
	if h == nil {
		return nil
	}

	return &QTabBar{h: (*C.QTabBar)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQTabBar constructs a new QTabBar object.
func NewQTabBar(parent *QWidget) *QTabBar {
	var outptr_QTabBar *C.QTabBar = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QTabBar_new(parent.cPointer(), &outptr_QTabBar, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQTabBar(outptr_QTabBar, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQTabBar2 constructs a new QTabBar object.
func NewQTabBar2() *QTabBar {
	var outptr_QTabBar *C.QTabBar = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QTabBar_new2(&outptr_QTabBar, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQTabBar(outptr_QTabBar, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QTabBar) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTabBar_MetaObject(this.h)))
}

func (this *QTabBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTabBar_Metacast(this.h, param1_Cstring))
}

func QTabBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTabBar_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTabBar_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) Shape() QTabBar__Shape {
	return (QTabBar__Shape)(C.QTabBar_Shape(this.h))
}

func (this *QTabBar) SetShape(shape QTabBar__Shape) {
	C.QTabBar_SetShape(this.h, (C.int)(shape))
}

func (this *QTabBar) AddTab(text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QTabBar_AddTab(this.h, text_ms))
}

func (this *QTabBar) AddTab2(icon *QIcon, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QTabBar_AddTab2(this.h, icon.cPointer(), text_ms))
}

func (this *QTabBar) InsertTab(index int, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QTabBar_InsertTab(this.h, (C.int)(index), text_ms))
}

func (this *QTabBar) InsertTab2(index int, icon *QIcon, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QTabBar_InsertTab2(this.h, (C.int)(index), icon.cPointer(), text_ms))
}

func (this *QTabBar) RemoveTab(index int) {
	C.QTabBar_RemoveTab(this.h, (C.int)(index))
}

func (this *QTabBar) MoveTab(from int, to int) {
	C.QTabBar_MoveTab(this.h, (C.int)(from), (C.int)(to))
}

func (this *QTabBar) IsTabEnabled(index int) bool {
	return (bool)(C.QTabBar_IsTabEnabled(this.h, (C.int)(index)))
}

func (this *QTabBar) SetTabEnabled(index int, enabled bool) {
	C.QTabBar_SetTabEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QTabBar) IsTabVisible(index int) bool {
	return (bool)(C.QTabBar_IsTabVisible(this.h, (C.int)(index)))
}

func (this *QTabBar) SetTabVisible(index int, visible bool) {
	C.QTabBar_SetTabVisible(this.h, (C.int)(index), (C.bool)(visible))
}

func (this *QTabBar) TabText(index int) string {
	var _ms C.struct_miqt_string = C.QTabBar_TabText(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) SetTabText(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTabBar_SetTabText(this.h, (C.int)(index), text_ms)
}

func (this *QTabBar) TabTextColor(index int) *QColor {
	_ret := C.QTabBar_TabTextColor(this.h, (C.int)(index))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) SetTabTextColor(index int, color *QColor) {
	C.QTabBar_SetTabTextColor(this.h, (C.int)(index), color.cPointer())
}

func (this *QTabBar) TabIcon(index int) *QIcon {
	_ret := C.QTabBar_TabIcon(this.h, (C.int)(index))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) SetTabIcon(index int, icon *QIcon) {
	C.QTabBar_SetTabIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QTabBar) ElideMode() TextElideMode {
	return (TextElideMode)(C.QTabBar_ElideMode(this.h))
}

func (this *QTabBar) SetElideMode(mode TextElideMode) {
	C.QTabBar_SetElideMode(this.h, (C.int)(mode))
}

func (this *QTabBar) SetTabToolTip(index int, tip string) {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))
	C.QTabBar_SetTabToolTip(this.h, (C.int)(index), tip_ms)
}

func (this *QTabBar) TabToolTip(index int) string {
	var _ms C.struct_miqt_string = C.QTabBar_TabToolTip(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) SetTabWhatsThis(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTabBar_SetTabWhatsThis(this.h, (C.int)(index), text_ms)
}

func (this *QTabBar) TabWhatsThis(index int) string {
	var _ms C.struct_miqt_string = C.QTabBar_TabWhatsThis(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) SetTabData(index int, data *QVariant) {
	C.QTabBar_SetTabData(this.h, (C.int)(index), data.cPointer())
}

func (this *QTabBar) TabData(index int) *QVariant {
	_ret := C.QTabBar_TabData(this.h, (C.int)(index))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) TabRect(index int) *QRect {
	_ret := C.QTabBar_TabRect(this.h, (C.int)(index))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) TabAt(pos *QPoint) int {
	return (int)(C.QTabBar_TabAt(this.h, pos.cPointer()))
}

func (this *QTabBar) CurrentIndex() int {
	return (int)(C.QTabBar_CurrentIndex(this.h))
}

func (this *QTabBar) Count() int {
	return (int)(C.QTabBar_Count(this.h))
}

func (this *QTabBar) SizeHint() *QSize {
	_ret := C.QTabBar_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) MinimumSizeHint() *QSize {
	_ret := C.QTabBar_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) SetDrawBase(drawTheBase bool) {
	C.QTabBar_SetDrawBase(this.h, (C.bool)(drawTheBase))
}

func (this *QTabBar) DrawBase() bool {
	return (bool)(C.QTabBar_DrawBase(this.h))
}

func (this *QTabBar) IconSize() *QSize {
	_ret := C.QTabBar_IconSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) SetIconSize(size *QSize) {
	C.QTabBar_SetIconSize(this.h, size.cPointer())
}

func (this *QTabBar) UsesScrollButtons() bool {
	return (bool)(C.QTabBar_UsesScrollButtons(this.h))
}

func (this *QTabBar) SetUsesScrollButtons(useButtons bool) {
	C.QTabBar_SetUsesScrollButtons(this.h, (C.bool)(useButtons))
}

func (this *QTabBar) TabsClosable() bool {
	return (bool)(C.QTabBar_TabsClosable(this.h))
}

func (this *QTabBar) SetTabsClosable(closable bool) {
	C.QTabBar_SetTabsClosable(this.h, (C.bool)(closable))
}

func (this *QTabBar) SetTabButton(index int, position QTabBar__ButtonPosition, widget *QWidget) {
	C.QTabBar_SetTabButton(this.h, (C.int)(index), (C.int)(position), widget.cPointer())
}

func (this *QTabBar) TabButton(index int, position QTabBar__ButtonPosition) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QTabBar_TabButton(this.h, (C.int)(index), (C.int)(position))), nil, nil)
}

func (this *QTabBar) SelectionBehaviorOnRemove() QTabBar__SelectionBehavior {
	return (QTabBar__SelectionBehavior)(C.QTabBar_SelectionBehaviorOnRemove(this.h))
}

func (this *QTabBar) SetSelectionBehaviorOnRemove(behavior QTabBar__SelectionBehavior) {
	C.QTabBar_SetSelectionBehaviorOnRemove(this.h, (C.int)(behavior))
}

func (this *QTabBar) Expanding() bool {
	return (bool)(C.QTabBar_Expanding(this.h))
}

func (this *QTabBar) SetExpanding(enabled bool) {
	C.QTabBar_SetExpanding(this.h, (C.bool)(enabled))
}

func (this *QTabBar) IsMovable() bool {
	return (bool)(C.QTabBar_IsMovable(this.h))
}

func (this *QTabBar) SetMovable(movable bool) {
	C.QTabBar_SetMovable(this.h, (C.bool)(movable))
}

func (this *QTabBar) DocumentMode() bool {
	return (bool)(C.QTabBar_DocumentMode(this.h))
}

func (this *QTabBar) SetDocumentMode(set bool) {
	C.QTabBar_SetDocumentMode(this.h, (C.bool)(set))
}

func (this *QTabBar) AutoHide() bool {
	return (bool)(C.QTabBar_AutoHide(this.h))
}

func (this *QTabBar) SetAutoHide(hide bool) {
	C.QTabBar_SetAutoHide(this.h, (C.bool)(hide))
}

func (this *QTabBar) ChangeCurrentOnDrag() bool {
	return (bool)(C.QTabBar_ChangeCurrentOnDrag(this.h))
}

func (this *QTabBar) SetChangeCurrentOnDrag(change bool) {
	C.QTabBar_SetChangeCurrentOnDrag(this.h, (C.bool)(change))
}

func (this *QTabBar) AccessibleTabName(index int) string {
	var _ms C.struct_miqt_string = C.QTabBar_AccessibleTabName(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) SetAccessibleTabName(index int, name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTabBar_SetAccessibleTabName(this.h, (C.int)(index), name_ms)
}

func (this *QTabBar) SetCurrentIndex(index int) {
	C.QTabBar_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QTabBar) CurrentChanged(index int) {
	C.QTabBar_CurrentChanged(this.h, (C.int)(index))
}
func (this *QTabBar) OnCurrentChanged(slot func(index int)) {
	C.QTabBar_connect_CurrentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_CurrentChanged
func miqt_exec_callback_QTabBar_CurrentChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabBar) TabCloseRequested(index int) {
	C.QTabBar_TabCloseRequested(this.h, (C.int)(index))
}
func (this *QTabBar) OnTabCloseRequested(slot func(index int)) {
	C.QTabBar_connect_TabCloseRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TabCloseRequested
func miqt_exec_callback_QTabBar_TabCloseRequested(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabBar) TabMoved(from int, to int) {
	C.QTabBar_TabMoved(this.h, (C.int)(from), (C.int)(to))
}
func (this *QTabBar) OnTabMoved(slot func(from int, to int)) {
	C.QTabBar_connect_TabMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TabMoved
func miqt_exec_callback_QTabBar_TabMoved(cb C.intptr_t, from C.int, to C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(from int, to int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(from)

	slotval2 := (int)(to)

	gofunc(slotval1, slotval2)
}

func (this *QTabBar) TabBarClicked(index int) {
	C.QTabBar_TabBarClicked(this.h, (C.int)(index))
}
func (this *QTabBar) OnTabBarClicked(slot func(index int)) {
	C.QTabBar_connect_TabBarClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TabBarClicked
func miqt_exec_callback_QTabBar_TabBarClicked(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabBar) TabBarDoubleClicked(index int) {
	C.QTabBar_TabBarDoubleClicked(this.h, (C.int)(index))
}
func (this *QTabBar) OnTabBarDoubleClicked(slot func(index int)) {
	C.QTabBar_connect_TabBarDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TabBarDoubleClicked
func miqt_exec_callback_QTabBar_TabBarDoubleClicked(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func QTabBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabBar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabBar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabBar_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) callVirtualBase_SizeHint() *QSize {

	_ret := C.QTabBar_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QTabBar_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_SizeHint
func miqt_exec_callback_QTabBar_SizeHint(self *C.QTabBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QTabBar_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	C.QTabBar_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_MinimumSizeHint
func miqt_exec_callback_QTabBar_MinimumSizeHint(self *C.QTabBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_TabSizeHint(index int) *QSize {

	_ret := C.QTabBar_virtualbase_TabSizeHint(unsafe.Pointer(this.h), (C.int)(index))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OnTabSizeHint(slot func(super func(index int) *QSize, index int) *QSize) {
	C.QTabBar_override_virtual_TabSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TabSizeHint
func miqt_exec_callback_QTabBar_TabSizeHint(self *C.QTabBar, cb C.intptr_t, index C.int) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QSize, index int) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_TabSizeHint, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_MinimumTabSizeHint(index int) *QSize {

	_ret := C.QTabBar_virtualbase_MinimumTabSizeHint(unsafe.Pointer(this.h), (C.int)(index))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OnMinimumTabSizeHint(slot func(super func(index int) *QSize, index int) *QSize) {
	C.QTabBar_override_virtual_MinimumTabSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_MinimumTabSizeHint
func miqt_exec_callback_QTabBar_MinimumTabSizeHint(self *C.QTabBar, cb C.intptr_t, index C.int) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QSize, index int) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_MinimumTabSizeHint, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_TabInserted(index int) {

	C.QTabBar_virtualbase_TabInserted(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QTabBar) OnTabInserted(slot func(super func(index int), index int)) {
	C.QTabBar_override_virtual_TabInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TabInserted
func miqt_exec_callback_QTabBar_TabInserted(self *C.QTabBar, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QTabBar{h: self}).callVirtualBase_TabInserted, slotval1)

}

func (this *QTabBar) callVirtualBase_TabRemoved(index int) {

	C.QTabBar_virtualbase_TabRemoved(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QTabBar) OnTabRemoved(slot func(super func(index int), index int)) {
	C.QTabBar_override_virtual_TabRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TabRemoved
func miqt_exec_callback_QTabBar_TabRemoved(self *C.QTabBar, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QTabBar{h: self}).callVirtualBase_TabRemoved, slotval1)

}

func (this *QTabBar) callVirtualBase_TabLayoutChange() {

	C.QTabBar_virtualbase_TabLayoutChange(unsafe.Pointer(this.h))

}
func (this *QTabBar) OnTabLayoutChange(slot func(super func())) {
	C.QTabBar_override_virtual_TabLayoutChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TabLayoutChange
func miqt_exec_callback_QTabBar_TabLayoutChange(self *C.QTabBar, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTabBar{h: self}).callVirtualBase_TabLayoutChange)

}

func (this *QTabBar) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QTabBar_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QTabBar) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	C.QTabBar_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_Event
func miqt_exec_callback_QTabBar_Event(self *C.QTabBar, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QTabBar_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	C.QTabBar_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_ResizeEvent
func miqt_exec_callback_QTabBar_ResizeEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(param1), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QTabBar_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	C.QTabBar_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_ShowEvent
func miqt_exec_callback_QTabBar_ShowEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(param1), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QTabBar_virtualbase_HideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnHideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	C.QTabBar_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_HideEvent
func miqt_exec_callback_QTabBar_HideEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(param1), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QTabBar_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	C.QTabBar_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_PaintEvent
func miqt_exec_callback_QTabBar_PaintEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(param1), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QTabBar_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	C.QTabBar_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_MousePressEvent
func miqt_exec_callback_QTabBar_MousePressEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QTabBar_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	C.QTabBar_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_MouseMoveEvent
func miqt_exec_callback_QTabBar_MouseMoveEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QTabBar_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	C.QTabBar_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_MouseReleaseEvent
func miqt_exec_callback_QTabBar_MouseReleaseEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QTabBar_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	C.QTabBar_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_WheelEvent
func miqt_exec_callback_QTabBar_WheelEvent(self *C.QTabBar, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QTabBar_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	C.QTabBar_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_KeyPressEvent
func miqt_exec_callback_QTabBar_KeyPressEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QTabBar_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	C.QTabBar_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_ChangeEvent
func miqt_exec_callback_QTabBar_ChangeEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QTabBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTabBar_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QTabBar_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TimerEvent
func miqt_exec_callback_QTabBar_TimerEvent(self *C.QTabBar, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_DevType() int {

	return (int)(C.QTabBar_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QTabBar) OnDevType(slot func(super func() int) int) {
	C.QTabBar_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_DevType
func miqt_exec_callback_QTabBar_DevType(self *C.QTabBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_SetVisible(visible bool) {

	C.QTabBar_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTabBar) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	C.QTabBar_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_SetVisible
func miqt_exec_callback_QTabBar_SetVisible(self *C.QTabBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTabBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTabBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTabBar_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTabBar) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QTabBar_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_HeightForWidth
func miqt_exec_callback_QTabBar_HeightForWidth(self *C.QTabBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTabBar_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTabBar) OnHasHeightForWidth(slot func(super func() bool) bool) {
	C.QTabBar_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_HasHeightForWidth
func miqt_exec_callback_QTabBar_HasHeightForWidth(self *C.QTabBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QTabBar_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QTabBar) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	C.QTabBar_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_PaintEngine
func miqt_exec_callback_QTabBar_PaintEngine(self *C.QTabBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTabBar_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QTabBar_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_MouseDoubleClickEvent
func miqt_exec_callback_QTabBar_MouseDoubleClickEvent(self *C.QTabBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTabBar_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QTabBar_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_KeyReleaseEvent
func miqt_exec_callback_QTabBar_KeyReleaseEvent(self *C.QTabBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTabBar_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QTabBar_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_FocusInEvent
func miqt_exec_callback_QTabBar_FocusInEvent(self *C.QTabBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTabBar_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QTabBar_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_FocusOutEvent
func miqt_exec_callback_QTabBar_FocusOutEvent(self *C.QTabBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_EnterEvent(event *QEvent) {

	C.QTabBar_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QTabBar_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_EnterEvent
func miqt_exec_callback_QTabBar_EnterEvent(self *C.QTabBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTabBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTabBar_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QTabBar_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_LeaveEvent
func miqt_exec_callback_QTabBar_LeaveEvent(self *C.QTabBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTabBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTabBar_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	C.QTabBar_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_MoveEvent
func miqt_exec_callback_QTabBar_MoveEvent(self *C.QTabBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTabBar_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	C.QTabBar_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_CloseEvent
func miqt_exec_callback_QTabBar_CloseEvent(self *C.QTabBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QTabBar_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	C.QTabBar_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_ContextMenuEvent
func miqt_exec_callback_QTabBar_ContextMenuEvent(self *C.QTabBar, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTabBar_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	C.QTabBar_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_TabletEvent
func miqt_exec_callback_QTabBar_TabletEvent(self *C.QTabBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTabBar_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	C.QTabBar_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_ActionEvent
func miqt_exec_callback_QTabBar_ActionEvent(self *C.QTabBar, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QTabBar_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	C.QTabBar_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_DragEnterEvent
func miqt_exec_callback_QTabBar_DragEnterEvent(self *C.QTabBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTabBar_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	C.QTabBar_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_DragMoveEvent
func miqt_exec_callback_QTabBar_DragMoveEvent(self *C.QTabBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTabBar_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	C.QTabBar_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_DragLeaveEvent
func miqt_exec_callback_QTabBar_DragLeaveEvent(self *C.QTabBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTabBar_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	C.QTabBar_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_DropEvent
func miqt_exec_callback_QTabBar_DropEvent(self *C.QTabBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTabBar_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QTabBar) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	C.QTabBar_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_NativeEvent
func miqt_exec_callback_QTabBar_NativeEvent(self *C.QTabBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTabBar_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTabBar) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	C.QTabBar_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_Metric
func miqt_exec_callback_QTabBar_Metric(self *C.QTabBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_InitPainter(painter *QPainter) {

	C.QTabBar_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTabBar) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	C.QTabBar_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_InitPainter
func miqt_exec_callback_QTabBar_InitPainter(self *C.QTabBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QTabBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTabBar) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QTabBar_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QTabBar) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	C.QTabBar_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_Redirected
func miqt_exec_callback_QTabBar_Redirected(self *C.QTabBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QTabBar_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QTabBar) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	C.QTabBar_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_SharedPainter
func miqt_exec_callback_QTabBar_SharedPainter(self *C.QTabBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTabBar_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	C.QTabBar_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_InputMethodEvent
func miqt_exec_callback_QTabBar_InputMethodEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QTabBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QTabBar_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	C.QTabBar_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_InputMethodQuery
func miqt_exec_callback_QTabBar_InputMethodQuery(self *C.QTabBar, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTabBar_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTabBar) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	C.QTabBar_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_FocusNextPrevChild
func miqt_exec_callback_QTabBar_FocusNextPrevChild(self *C.QTabBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QTabBar) Delete() {
	C.QTabBar_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTabBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QTabBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
