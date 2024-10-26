package qt6

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
	h *C.QTabBar
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

func newQTabBar(h *C.QTabBar) *QTabBar {
	if h == nil {
		return nil
	}
	return &QTabBar{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQTabBar(h unsafe.Pointer) *QTabBar {
	return newQTabBar((*C.QTabBar)(h))
}

// NewQTabBar constructs a new QTabBar object.
func NewQTabBar(parent *QWidget) *QTabBar {
	ret := C.QTabBar_new(parent.cPointer())
	return newQTabBar(ret)
}

// NewQTabBar2 constructs a new QTabBar object.
func NewQTabBar2() *QTabBar {
	ret := C.QTabBar_new2()
	return newQTabBar(ret)
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
	return UnsafeNewQWidget(unsafe.Pointer(C.QTabBar_TabButton(this.h, (C.int)(index), (C.int)(position))))
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

// Delete this object from C++ memory.
func (this *QTabBar) Delete() {
	C.QTabBar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTabBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QTabBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
