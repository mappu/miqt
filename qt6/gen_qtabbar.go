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

// newQTabBar constructs the type using only CGO pointers.
func newQTabBar(h *C.QTabBar) *QTabBar {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QTabBar_virtbase(h, &outptr_QWidget)

	return &QTabBar{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQTabBar constructs the type using only unsafe pointers.
func UnsafeNewQTabBar(h unsafe.Pointer) *QTabBar {
	return newQTabBar((*C.QTabBar)(h))
}

// NewQTabBar constructs a new QTabBar object.
func NewQTabBar(parent *QWidget) *QTabBar {

	return newQTabBar(C.QTabBar_new(parent.cPointer()))
}

// NewQTabBar2 constructs a new QTabBar object.
func NewQTabBar2() *QTabBar {

	return newQTabBar(C.QTabBar_new2())
}

func (this *QTabBar) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTabBar_metaObject(this.h))
}

func (this *QTabBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTabBar_metacast(this.h, param1_Cstring))
}

func QTabBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTabBar_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) Shape() QTabBar__Shape {
	return (QTabBar__Shape)(C.QTabBar_shape(this.h))
}

func (this *QTabBar) SetShape(shape QTabBar__Shape) {
	C.QTabBar_setShape(this.h, (C.int)(shape))
}

func (this *QTabBar) AddTab(text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QTabBar_addTab(this.h, text_ms))
}

func (this *QTabBar) AddTab2(icon *QIcon, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QTabBar_addTab2(this.h, icon.cPointer(), text_ms))
}

func (this *QTabBar) InsertTab(index int, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QTabBar_insertTab(this.h, (C.int)(index), text_ms))
}

func (this *QTabBar) InsertTab2(index int, icon *QIcon, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QTabBar_insertTab2(this.h, (C.int)(index), icon.cPointer(), text_ms))
}

func (this *QTabBar) RemoveTab(index int) {
	C.QTabBar_removeTab(this.h, (C.int)(index))
}

func (this *QTabBar) MoveTab(from int, to int) {
	C.QTabBar_moveTab(this.h, (C.int)(from), (C.int)(to))
}

func (this *QTabBar) IsTabEnabled(index int) bool {
	return (bool)(C.QTabBar_isTabEnabled(this.h, (C.int)(index)))
}

func (this *QTabBar) SetTabEnabled(index int, enabled bool) {
	C.QTabBar_setTabEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QTabBar) IsTabVisible(index int) bool {
	return (bool)(C.QTabBar_isTabVisible(this.h, (C.int)(index)))
}

func (this *QTabBar) SetTabVisible(index int, visible bool) {
	C.QTabBar_setTabVisible(this.h, (C.int)(index), (C.bool)(visible))
}

func (this *QTabBar) TabText(index int) string {
	var _ms C.struct_miqt_string = C.QTabBar_tabText(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) SetTabText(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTabBar_setTabText(this.h, (C.int)(index), text_ms)
}

func (this *QTabBar) TabTextColor(index int) *QColor {
	_goptr := newQColor(C.QTabBar_tabTextColor(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) SetTabTextColor(index int, color *QColor) {
	C.QTabBar_setTabTextColor(this.h, (C.int)(index), color.cPointer())
}

func (this *QTabBar) TabIcon(index int) *QIcon {
	_goptr := newQIcon(C.QTabBar_tabIcon(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) SetTabIcon(index int, icon *QIcon) {
	C.QTabBar_setTabIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QTabBar) ElideMode() TextElideMode {
	return (TextElideMode)(C.QTabBar_elideMode(this.h))
}

func (this *QTabBar) SetElideMode(mode TextElideMode) {
	C.QTabBar_setElideMode(this.h, (C.int)(mode))
}

func (this *QTabBar) SetTabToolTip(index int, tip string) {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))
	C.QTabBar_setTabToolTip(this.h, (C.int)(index), tip_ms)
}

func (this *QTabBar) TabToolTip(index int) string {
	var _ms C.struct_miqt_string = C.QTabBar_tabToolTip(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) SetTabWhatsThis(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTabBar_setTabWhatsThis(this.h, (C.int)(index), text_ms)
}

func (this *QTabBar) TabWhatsThis(index int) string {
	var _ms C.struct_miqt_string = C.QTabBar_tabWhatsThis(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) SetTabData(index int, data *QVariant) {
	C.QTabBar_setTabData(this.h, (C.int)(index), data.cPointer())
}

func (this *QTabBar) TabData(index int) *QVariant {
	_goptr := newQVariant(C.QTabBar_tabData(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) TabRect(index int) *QRect {
	_goptr := newQRect(C.QTabBar_tabRect(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) TabAt(pos *QPoint) int {
	return (int)(C.QTabBar_tabAt(this.h, pos.cPointer()))
}

func (this *QTabBar) CurrentIndex() int {
	return (int)(C.QTabBar_currentIndex(this.h))
}

func (this *QTabBar) Count() int {
	return (int)(C.QTabBar_count(this.h))
}

func (this *QTabBar) SizeHint() *QSize {
	_goptr := newQSize(C.QTabBar_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QTabBar_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) SetDrawBase(drawTheBase bool) {
	C.QTabBar_setDrawBase(this.h, (C.bool)(drawTheBase))
}

func (this *QTabBar) DrawBase() bool {
	return (bool)(C.QTabBar_drawBase(this.h))
}

func (this *QTabBar) IconSize() *QSize {
	_goptr := newQSize(C.QTabBar_iconSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabBar) SetIconSize(size *QSize) {
	C.QTabBar_setIconSize(this.h, size.cPointer())
}

func (this *QTabBar) UsesScrollButtons() bool {
	return (bool)(C.QTabBar_usesScrollButtons(this.h))
}

func (this *QTabBar) SetUsesScrollButtons(useButtons bool) {
	C.QTabBar_setUsesScrollButtons(this.h, (C.bool)(useButtons))
}

func (this *QTabBar) TabsClosable() bool {
	return (bool)(C.QTabBar_tabsClosable(this.h))
}

func (this *QTabBar) SetTabsClosable(closable bool) {
	C.QTabBar_setTabsClosable(this.h, (C.bool)(closable))
}

func (this *QTabBar) SetTabButton(index int, position QTabBar__ButtonPosition, widget *QWidget) {
	C.QTabBar_setTabButton(this.h, (C.int)(index), (C.int)(position), widget.cPointer())
}

func (this *QTabBar) TabButton(index int, position QTabBar__ButtonPosition) *QWidget {
	return newQWidget(C.QTabBar_tabButton(this.h, (C.int)(index), (C.int)(position)))
}

func (this *QTabBar) SelectionBehaviorOnRemove() QTabBar__SelectionBehavior {
	return (QTabBar__SelectionBehavior)(C.QTabBar_selectionBehaviorOnRemove(this.h))
}

func (this *QTabBar) SetSelectionBehaviorOnRemove(behavior QTabBar__SelectionBehavior) {
	C.QTabBar_setSelectionBehaviorOnRemove(this.h, (C.int)(behavior))
}

func (this *QTabBar) Expanding() bool {
	return (bool)(C.QTabBar_expanding(this.h))
}

func (this *QTabBar) SetExpanding(enabled bool) {
	C.QTabBar_setExpanding(this.h, (C.bool)(enabled))
}

func (this *QTabBar) IsMovable() bool {
	return (bool)(C.QTabBar_isMovable(this.h))
}

func (this *QTabBar) SetMovable(movable bool) {
	C.QTabBar_setMovable(this.h, (C.bool)(movable))
}

func (this *QTabBar) DocumentMode() bool {
	return (bool)(C.QTabBar_documentMode(this.h))
}

func (this *QTabBar) SetDocumentMode(set bool) {
	C.QTabBar_setDocumentMode(this.h, (C.bool)(set))
}

func (this *QTabBar) AutoHide() bool {
	return (bool)(C.QTabBar_autoHide(this.h))
}

func (this *QTabBar) SetAutoHide(hide bool) {
	C.QTabBar_setAutoHide(this.h, (C.bool)(hide))
}

func (this *QTabBar) ChangeCurrentOnDrag() bool {
	return (bool)(C.QTabBar_changeCurrentOnDrag(this.h))
}

func (this *QTabBar) SetChangeCurrentOnDrag(change bool) {
	C.QTabBar_setChangeCurrentOnDrag(this.h, (C.bool)(change))
}

func (this *QTabBar) AccessibleTabName(index int) string {
	var _ms C.struct_miqt_string = C.QTabBar_accessibleTabName(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) SetAccessibleTabName(index int, name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTabBar_setAccessibleTabName(this.h, (C.int)(index), name_ms)
}

func (this *QTabBar) SetCurrentIndex(index int) {
	C.QTabBar_setCurrentIndex(this.h, (C.int)(index))
}

func (this *QTabBar) CurrentChanged(index int) {
	C.QTabBar_currentChanged(this.h, (C.int)(index))
}
func (this *QTabBar) OnCurrentChanged(slot func(index int)) {
	C.QTabBar_connect_currentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_currentChanged
func miqt_exec_callback_QTabBar_currentChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabBar) TabCloseRequested(index int) {
	C.QTabBar_tabCloseRequested(this.h, (C.int)(index))
}
func (this *QTabBar) OnTabCloseRequested(slot func(index int)) {
	C.QTabBar_connect_tabCloseRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_tabCloseRequested
func miqt_exec_callback_QTabBar_tabCloseRequested(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabBar) TabMoved(from int, to int) {
	C.QTabBar_tabMoved(this.h, (C.int)(from), (C.int)(to))
}
func (this *QTabBar) OnTabMoved(slot func(from int, to int)) {
	C.QTabBar_connect_tabMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_tabMoved
func miqt_exec_callback_QTabBar_tabMoved(cb C.intptr_t, from C.int, to C.int) {
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
	C.QTabBar_tabBarClicked(this.h, (C.int)(index))
}
func (this *QTabBar) OnTabBarClicked(slot func(index int)) {
	C.QTabBar_connect_tabBarClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_tabBarClicked
func miqt_exec_callback_QTabBar_tabBarClicked(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabBar) TabBarDoubleClicked(index int) {
	C.QTabBar_tabBarDoubleClicked(this.h, (C.int)(index))
}
func (this *QTabBar) OnTabBarDoubleClicked(slot func(index int)) {
	C.QTabBar_connect_tabBarDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabBar_tabBarDoubleClicked
func miqt_exec_callback_QTabBar_tabBarDoubleClicked(cb C.intptr_t, index C.int) {
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
	var _ms C.struct_miqt_string = C.QTabBar_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabBar_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabBar) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTabBar_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTabBar_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_sizeHint
func miqt_exec_callback_QTabBar_sizeHint(self *C.QTabBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTabBar_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTabBar_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_minimumSizeHint
func miqt_exec_callback_QTabBar_minimumSizeHint(self *C.QTabBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_TabSizeHint(index int) *QSize {

	_goptr := newQSize(C.QTabBar_virtualbase_tabSizeHint(unsafe.Pointer(this.h), (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OntabSizeHint(slot func(super func(index int) *QSize, index int) *QSize) {
	ok := C.QTabBar_override_virtual_tabSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_tabSizeHint
func miqt_exec_callback_QTabBar_tabSizeHint(self *C.QTabBar, cb C.intptr_t, index C.int) *C.QSize {
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

	_goptr := newQSize(C.QTabBar_virtualbase_minimumTabSizeHint(unsafe.Pointer(this.h), (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OnminimumTabSizeHint(slot func(super func(index int) *QSize, index int) *QSize) {
	ok := C.QTabBar_override_virtual_minimumTabSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_minimumTabSizeHint
func miqt_exec_callback_QTabBar_minimumTabSizeHint(self *C.QTabBar, cb C.intptr_t, index C.int) *C.QSize {
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

	C.QTabBar_virtualbase_tabInserted(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QTabBar) OntabInserted(slot func(super func(index int), index int)) {
	ok := C.QTabBar_override_virtual_tabInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_tabInserted
func miqt_exec_callback_QTabBar_tabInserted(self *C.QTabBar, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QTabBar{h: self}).callVirtualBase_TabInserted, slotval1)

}

func (this *QTabBar) callVirtualBase_TabRemoved(index int) {

	C.QTabBar_virtualbase_tabRemoved(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QTabBar) OntabRemoved(slot func(super func(index int), index int)) {
	ok := C.QTabBar_override_virtual_tabRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_tabRemoved
func miqt_exec_callback_QTabBar_tabRemoved(self *C.QTabBar, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QTabBar{h: self}).callVirtualBase_TabRemoved, slotval1)

}

func (this *QTabBar) callVirtualBase_TabLayoutChange() {

	C.QTabBar_virtualbase_tabLayoutChange(unsafe.Pointer(this.h))

}
func (this *QTabBar) OntabLayoutChange(slot func(super func())) {
	ok := C.QTabBar_override_virtual_tabLayoutChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_tabLayoutChange
func miqt_exec_callback_QTabBar_tabLayoutChange(self *C.QTabBar, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTabBar{h: self}).callVirtualBase_TabLayoutChange)

}

func (this *QTabBar) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QTabBar_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QTabBar) Onevent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QTabBar_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_event
func miqt_exec_callback_QTabBar_event(self *C.QTabBar, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QTabBar_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnresizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QTabBar_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_resizeEvent
func miqt_exec_callback_QTabBar_resizeEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QTabBar_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnshowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QTabBar_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_showEvent
func miqt_exec_callback_QTabBar_showEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QTabBar_virtualbase_hideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnhideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	ok := C.QTabBar_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_hideEvent
func miqt_exec_callback_QTabBar_hideEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QTabBar_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnpaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QTabBar_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_paintEvent
func miqt_exec_callback_QTabBar_paintEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QTabBar_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnmousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QTabBar_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_mousePressEvent
func miqt_exec_callback_QTabBar_mousePressEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QTabBar_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnmouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QTabBar_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_mouseMoveEvent
func miqt_exec_callback_QTabBar_mouseMoveEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QTabBar_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnmouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QTabBar_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_mouseReleaseEvent
func miqt_exec_callback_QTabBar_mouseReleaseEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QTabBar_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnmouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QTabBar_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_mouseDoubleClickEvent
func miqt_exec_callback_QTabBar_mouseDoubleClickEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QTabBar_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QTabBar_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_wheelEvent
func miqt_exec_callback_QTabBar_wheelEvent(self *C.QTabBar, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QTabBar_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnkeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QTabBar_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_keyPressEvent
func miqt_exec_callback_QTabBar_keyPressEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QTabBar_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QTabBar_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_changeEvent
func miqt_exec_callback_QTabBar_changeEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTabBar_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTabBar_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_timerEvent
func miqt_exec_callback_QTabBar_timerEvent(self *C.QTabBar, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_InitStyleOption(option *QStyleOptionTab, tabIndex int) {

	C.QTabBar_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer(), (C.int)(tabIndex))

}
func (this *QTabBar) OninitStyleOption(slot func(super func(option *QStyleOptionTab, tabIndex int), option *QStyleOptionTab, tabIndex int)) {
	ok := C.QTabBar_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_initStyleOption
func miqt_exec_callback_QTabBar_initStyleOption(self *C.QTabBar, cb C.intptr_t, option *C.QStyleOptionTab, tabIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionTab, tabIndex int), option *QStyleOptionTab, tabIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionTab(option)

	slotval2 := (int)(tabIndex)

	gofunc((&QTabBar{h: self}).callVirtualBase_InitStyleOption, slotval1, slotval2)

}

func (this *QTabBar) callVirtualBase_DevType() int {

	return (int)(C.QTabBar_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTabBar) OndevType(slot func(super func() int) int) {
	ok := C.QTabBar_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_devType
func miqt_exec_callback_QTabBar_devType(self *C.QTabBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_SetVisible(visible bool) {

	C.QTabBar_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTabBar) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTabBar_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_setVisible
func miqt_exec_callback_QTabBar_setVisible(self *C.QTabBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTabBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTabBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTabBar_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTabBar) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTabBar_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_heightForWidth
func miqt_exec_callback_QTabBar_heightForWidth(self *C.QTabBar, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QTabBar_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTabBar) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTabBar_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_hasHeightForWidth
func miqt_exec_callback_QTabBar_hasHeightForWidth(self *C.QTabBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTabBar_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QTabBar) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTabBar_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_paintEngine
func miqt_exec_callback_QTabBar_paintEngine(self *C.QTabBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTabBar_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTabBar_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_keyReleaseEvent
func miqt_exec_callback_QTabBar_keyReleaseEvent(self *C.QTabBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTabBar_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTabBar_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_focusInEvent
func miqt_exec_callback_QTabBar_focusInEvent(self *C.QTabBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTabBar_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTabBar_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_focusOutEvent
func miqt_exec_callback_QTabBar_focusOutEvent(self *C.QTabBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QTabBar_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QTabBar_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_enterEvent
func miqt_exec_callback_QTabBar_enterEvent(self *C.QTabBar, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTabBar_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTabBar_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_leaveEvent
func miqt_exec_callback_QTabBar_leaveEvent(self *C.QTabBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTabBar_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTabBar_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_moveEvent
func miqt_exec_callback_QTabBar_moveEvent(self *C.QTabBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTabBar_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTabBar_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_closeEvent
func miqt_exec_callback_QTabBar_closeEvent(self *C.QTabBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QTabBar_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QTabBar_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_contextMenuEvent
func miqt_exec_callback_QTabBar_contextMenuEvent(self *C.QTabBar, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTabBar_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTabBar_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_tabletEvent
func miqt_exec_callback_QTabBar_tabletEvent(self *C.QTabBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTabBar_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTabBar_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_actionEvent
func miqt_exec_callback_QTabBar_actionEvent(self *C.QTabBar, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QTabBar_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QTabBar_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_dragEnterEvent
func miqt_exec_callback_QTabBar_dragEnterEvent(self *C.QTabBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTabBar_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QTabBar_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_dragMoveEvent
func miqt_exec_callback_QTabBar_dragMoveEvent(self *C.QTabBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTabBar_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QTabBar_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_dragLeaveEvent
func miqt_exec_callback_QTabBar_dragLeaveEvent(self *C.QTabBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTabBar_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QTabBar_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_dropEvent
func miqt_exec_callback_QTabBar_dropEvent(self *C.QTabBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTabBar_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QTabBar) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QTabBar_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_nativeEvent
func miqt_exec_callback_QTabBar_nativeEvent(self *C.QTabBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTabBar_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTabBar) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTabBar_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_metric
func miqt_exec_callback_QTabBar_metric(self *C.QTabBar, cb C.intptr_t, param1 C.int) C.int {
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

	C.QTabBar_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTabBar) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTabBar_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_initPainter
func miqt_exec_callback_QTabBar_initPainter(self *C.QTabBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTabBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTabBar) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTabBar_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTabBar) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTabBar_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_redirected
func miqt_exec_callback_QTabBar_redirected(self *C.QTabBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QTabBar_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTabBar) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTabBar_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_sharedPainter
func miqt_exec_callback_QTabBar_sharedPainter(self *C.QTabBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTabBar) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTabBar_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabBar) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QTabBar_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_inputMethodEvent
func miqt_exec_callback_QTabBar_inputMethodEvent(self *C.QTabBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QTabBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTabBar_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabBar) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QTabBar_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_inputMethodQuery
func miqt_exec_callback_QTabBar_inputMethodQuery(self *C.QTabBar, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QTabBar_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTabBar) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTabBar_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_focusNextPrevChild
func miqt_exec_callback_QTabBar_focusNextPrevChild(self *C.QTabBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTabBar_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTabBar) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTabBar_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_eventFilter
func miqt_exec_callback_QTabBar_eventFilter(self *C.QTabBar, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTabBar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTabBar) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTabBar_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTabBar_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_childEvent
func miqt_exec_callback_QTabBar_childEvent(self *C.QTabBar, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTabBar_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabBar) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTabBar_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_customEvent
func miqt_exec_callback_QTabBar_customEvent(self *C.QTabBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTabBar{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTabBar) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTabBar_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTabBar) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTabBar_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_connectNotify
func miqt_exec_callback_QTabBar_connectNotify(self *C.QTabBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTabBar{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTabBar) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTabBar_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTabBar) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTabBar_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabBar_disconnectNotify
func miqt_exec_callback_QTabBar_disconnectNotify(self *C.QTabBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTabBar{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTabBar) Delete() {
	C.QTabBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTabBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QTabBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
