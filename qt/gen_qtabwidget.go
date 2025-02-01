package qt

/*

#include "gen_qtabwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTabWidget__TabPosition int

const (
	QTabWidget__North QTabWidget__TabPosition = 0
	QTabWidget__South QTabWidget__TabPosition = 1
	QTabWidget__West  QTabWidget__TabPosition = 2
	QTabWidget__East  QTabWidget__TabPosition = 3
)

type QTabWidget__TabShape int

const (
	QTabWidget__Rounded    QTabWidget__TabShape = 0
	QTabWidget__Triangular QTabWidget__TabShape = 1
)

type QTabWidget struct {
	h *C.QTabWidget
	*QWidget
}

func (this *QTabWidget) cPointer() *C.QTabWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTabWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTabWidget constructs the type using only CGO pointers.
func newQTabWidget(h *C.QTabWidget) *QTabWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QTabWidget_virtbase(h, &outptr_QWidget)

	return &QTabWidget{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQTabWidget constructs the type using only unsafe pointers.
func UnsafeNewQTabWidget(h unsafe.Pointer) *QTabWidget {
	return newQTabWidget((*C.QTabWidget)(h))
}

// NewQTabWidget constructs a new QTabWidget object.
func NewQTabWidget(parent *QWidget) *QTabWidget {

	return newQTabWidget(C.QTabWidget_new(parent.cPointer()))
}

// NewQTabWidget2 constructs a new QTabWidget object.
func NewQTabWidget2() *QTabWidget {

	return newQTabWidget(C.QTabWidget_new2())
}

func (this *QTabWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTabWidget_metaObject(this.h))
}

func (this *QTabWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTabWidget_metacast(this.h, param1_Cstring))
}

func QTabWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) AddTab(widget *QWidget, param2 string) int {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	return (int)(C.QTabWidget_addTab(this.h, widget.cPointer(), param2_ms))
}

func (this *QTabWidget) AddTab2(widget *QWidget, icon *QIcon, label string) int {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QTabWidget_addTab2(this.h, widget.cPointer(), icon.cPointer(), label_ms))
}

func (this *QTabWidget) InsertTab(index int, widget *QWidget, param3 string) int {
	param3_ms := C.struct_miqt_string{}
	param3_ms.data = C.CString(param3)
	param3_ms.len = C.size_t(len(param3))
	defer C.free(unsafe.Pointer(param3_ms.data))
	return (int)(C.QTabWidget_insertTab(this.h, (C.int)(index), widget.cPointer(), param3_ms))
}

func (this *QTabWidget) InsertTab2(index int, widget *QWidget, icon *QIcon, label string) int {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QTabWidget_insertTab2(this.h, (C.int)(index), widget.cPointer(), icon.cPointer(), label_ms))
}

func (this *QTabWidget) RemoveTab(index int) {
	C.QTabWidget_removeTab(this.h, (C.int)(index))
}

func (this *QTabWidget) IsTabEnabled(index int) bool {
	return (bool)(C.QTabWidget_isTabEnabled(this.h, (C.int)(index)))
}

func (this *QTabWidget) SetTabEnabled(index int, enabled bool) {
	C.QTabWidget_setTabEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QTabWidget) IsTabVisible(index int) bool {
	return (bool)(C.QTabWidget_isTabVisible(this.h, (C.int)(index)))
}

func (this *QTabWidget) SetTabVisible(index int, visible bool) {
	C.QTabWidget_setTabVisible(this.h, (C.int)(index), (C.bool)(visible))
}

func (this *QTabWidget) TabText(index int) string {
	var _ms C.struct_miqt_string = C.QTabWidget_tabText(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) SetTabText(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTabWidget_setTabText(this.h, (C.int)(index), text_ms)
}

func (this *QTabWidget) TabIcon(index int) *QIcon {
	_goptr := newQIcon(C.QTabWidget_tabIcon(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) SetTabIcon(index int, icon *QIcon) {
	C.QTabWidget_setTabIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QTabWidget) SetTabToolTip(index int, tip string) {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))
	C.QTabWidget_setTabToolTip(this.h, (C.int)(index), tip_ms)
}

func (this *QTabWidget) TabToolTip(index int) string {
	var _ms C.struct_miqt_string = C.QTabWidget_tabToolTip(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) SetTabWhatsThis(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTabWidget_setTabWhatsThis(this.h, (C.int)(index), text_ms)
}

func (this *QTabWidget) TabWhatsThis(index int) string {
	var _ms C.struct_miqt_string = C.QTabWidget_tabWhatsThis(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) CurrentIndex() int {
	return (int)(C.QTabWidget_currentIndex(this.h))
}

func (this *QTabWidget) CurrentWidget() *QWidget {
	return newQWidget(C.QTabWidget_currentWidget(this.h))
}

func (this *QTabWidget) Widget(index int) *QWidget {
	return newQWidget(C.QTabWidget_widget(this.h, (C.int)(index)))
}

func (this *QTabWidget) IndexOf(widget *QWidget) int {
	return (int)(C.QTabWidget_indexOf(this.h, widget.cPointer()))
}

func (this *QTabWidget) Count() int {
	return (int)(C.QTabWidget_count(this.h))
}

func (this *QTabWidget) TabPosition() QTabWidget__TabPosition {
	return (QTabWidget__TabPosition)(C.QTabWidget_tabPosition(this.h))
}

func (this *QTabWidget) SetTabPosition(position QTabWidget__TabPosition) {
	C.QTabWidget_setTabPosition(this.h, (C.int)(position))
}

func (this *QTabWidget) TabsClosable() bool {
	return (bool)(C.QTabWidget_tabsClosable(this.h))
}

func (this *QTabWidget) SetTabsClosable(closeable bool) {
	C.QTabWidget_setTabsClosable(this.h, (C.bool)(closeable))
}

func (this *QTabWidget) IsMovable() bool {
	return (bool)(C.QTabWidget_isMovable(this.h))
}

func (this *QTabWidget) SetMovable(movable bool) {
	C.QTabWidget_setMovable(this.h, (C.bool)(movable))
}

func (this *QTabWidget) TabShape() QTabWidget__TabShape {
	return (QTabWidget__TabShape)(C.QTabWidget_tabShape(this.h))
}

func (this *QTabWidget) SetTabShape(s QTabWidget__TabShape) {
	C.QTabWidget_setTabShape(this.h, (C.int)(s))
}

func (this *QTabWidget) SizeHint() *QSize {
	_goptr := newQSize(C.QTabWidget_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QTabWidget_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) HeightForWidth(width int) int {
	return (int)(C.QTabWidget_heightForWidth(this.h, (C.int)(width)))
}

func (this *QTabWidget) HasHeightForWidth() bool {
	return (bool)(C.QTabWidget_hasHeightForWidth(this.h))
}

func (this *QTabWidget) SetCornerWidget(w *QWidget) {
	C.QTabWidget_setCornerWidget(this.h, w.cPointer())
}

func (this *QTabWidget) CornerWidget() *QWidget {
	return newQWidget(C.QTabWidget_cornerWidget(this.h))
}

func (this *QTabWidget) ElideMode() TextElideMode {
	return (TextElideMode)(C.QTabWidget_elideMode(this.h))
}

func (this *QTabWidget) SetElideMode(mode TextElideMode) {
	C.QTabWidget_setElideMode(this.h, (C.int)(mode))
}

func (this *QTabWidget) IconSize() *QSize {
	_goptr := newQSize(C.QTabWidget_iconSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) SetIconSize(size *QSize) {
	C.QTabWidget_setIconSize(this.h, size.cPointer())
}

func (this *QTabWidget) UsesScrollButtons() bool {
	return (bool)(C.QTabWidget_usesScrollButtons(this.h))
}

func (this *QTabWidget) SetUsesScrollButtons(useButtons bool) {
	C.QTabWidget_setUsesScrollButtons(this.h, (C.bool)(useButtons))
}

func (this *QTabWidget) DocumentMode() bool {
	return (bool)(C.QTabWidget_documentMode(this.h))
}

func (this *QTabWidget) SetDocumentMode(set bool) {
	C.QTabWidget_setDocumentMode(this.h, (C.bool)(set))
}

func (this *QTabWidget) TabBarAutoHide() bool {
	return (bool)(C.QTabWidget_tabBarAutoHide(this.h))
}

func (this *QTabWidget) SetTabBarAutoHide(enabled bool) {
	C.QTabWidget_setTabBarAutoHide(this.h, (C.bool)(enabled))
}

func (this *QTabWidget) Clear() {
	C.QTabWidget_clear(this.h)
}

func (this *QTabWidget) TabBar() *QTabBar {
	return newQTabBar(C.QTabWidget_tabBar(this.h))
}

func (this *QTabWidget) SetCurrentIndex(index int) {
	C.QTabWidget_setCurrentIndex(this.h, (C.int)(index))
}

func (this *QTabWidget) SetCurrentWidget(widget *QWidget) {
	C.QTabWidget_setCurrentWidget(this.h, widget.cPointer())
}

func (this *QTabWidget) CurrentChanged(index int) {
	C.QTabWidget_currentChanged(this.h, (C.int)(index))
}
func (this *QTabWidget) OnCurrentChanged(slot func(index int)) {
	C.QTabWidget_connect_currentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_currentChanged
func miqt_exec_callback_QTabWidget_currentChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabWidget) TabCloseRequested(index int) {
	C.QTabWidget_tabCloseRequested(this.h, (C.int)(index))
}
func (this *QTabWidget) OnTabCloseRequested(slot func(index int)) {
	C.QTabWidget_connect_tabCloseRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_tabCloseRequested
func miqt_exec_callback_QTabWidget_tabCloseRequested(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabWidget) TabBarClicked(index int) {
	C.QTabWidget_tabBarClicked(this.h, (C.int)(index))
}
func (this *QTabWidget) OnTabBarClicked(slot func(index int)) {
	C.QTabWidget_connect_tabBarClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_tabBarClicked
func miqt_exec_callback_QTabWidget_tabBarClicked(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabWidget) TabBarDoubleClicked(index int) {
	C.QTabWidget_tabBarDoubleClicked(this.h, (C.int)(index))
}
func (this *QTabWidget) OnTabBarDoubleClicked(slot func(index int)) {
	C.QTabWidget_connect_tabBarDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_tabBarDoubleClicked
func miqt_exec_callback_QTabWidget_tabBarDoubleClicked(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func QTabWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) SetCornerWidget2(w *QWidget, corner Corner) {
	C.QTabWidget_setCornerWidget2(this.h, w.cPointer(), (C.int)(corner))
}

func (this *QTabWidget) CornerWidget1(corner Corner) *QWidget {
	return newQWidget(C.QTabWidget_cornerWidget1(this.h, (C.int)(corner)))
}

func (this *QTabWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTabWidget_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabWidget) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTabWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_sizeHint
func miqt_exec_callback_QTabWidget_sizeHint(self *C.QTabWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTabWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabWidget) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTabWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_minimumSizeHint
func miqt_exec_callback_QTabWidget_minimumSizeHint(self *C.QTabWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_HeightForWidth(width int) int {

	return (int)(C.QTabWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *QTabWidget) OnheightForWidth(slot func(super func(width int) int, width int) int) {
	ok := C.QTabWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_heightForWidth
func miqt_exec_callback_QTabWidget_heightForWidth(self *C.QTabWidget, cb C.intptr_t, width C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int) int, width int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTabWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTabWidget) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTabWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_hasHeightForWidth
func miqt_exec_callback_QTabWidget_hasHeightForWidth(self *C.QTabWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_TabInserted(index int) {

	C.QTabWidget_virtualbase_tabInserted(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QTabWidget) OntabInserted(slot func(super func(index int), index int)) {
	ok := C.QTabWidget_override_virtual_tabInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_tabInserted
func miqt_exec_callback_QTabWidget_tabInserted(self *C.QTabWidget, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QTabWidget{h: self}).callVirtualBase_TabInserted, slotval1)

}

func (this *QTabWidget) callVirtualBase_TabRemoved(index int) {

	C.QTabWidget_virtualbase_tabRemoved(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QTabWidget) OntabRemoved(slot func(super func(index int), index int)) {
	ok := C.QTabWidget_override_virtual_tabRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_tabRemoved
func miqt_exec_callback_QTabWidget_tabRemoved(self *C.QTabWidget, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QTabWidget{h: self}).callVirtualBase_TabRemoved, slotval1)

}

func (this *QTabWidget) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QTabWidget_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnshowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QTabWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_showEvent
func miqt_exec_callback_QTabWidget_showEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QTabWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnresizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QTabWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_resizeEvent
func miqt_exec_callback_QTabWidget_resizeEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QTabWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnkeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QTabWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_keyPressEvent
func miqt_exec_callback_QTabWidget_keyPressEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QTabWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnpaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QTabWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_paintEvent
func miqt_exec_callback_QTabWidget_paintEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QTabWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QTabWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_changeEvent
func miqt_exec_callback_QTabWidget_changeEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QTabWidget_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QTabWidget) Onevent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QTabWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_event
func miqt_exec_callback_QTabWidget_event(self *C.QTabWidget, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_DevType() int {

	return (int)(C.QTabWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTabWidget) OndevType(slot func(super func() int) int) {
	ok := C.QTabWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_devType
func miqt_exec_callback_QTabWidget_devType(self *C.QTabWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_SetVisible(visible bool) {

	C.QTabWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTabWidget) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTabWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_setVisible
func miqt_exec_callback_QTabWidget_setVisible(self *C.QTabWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTabWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTabWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTabWidget_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QTabWidget) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTabWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_paintEngine
func miqt_exec_callback_QTabWidget_paintEngine(self *C.QTabWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QTabWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTabWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_mousePressEvent
func miqt_exec_callback_QTabWidget_mousePressEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QTabWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTabWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_mouseReleaseEvent
func miqt_exec_callback_QTabWidget_mouseReleaseEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTabWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTabWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_mouseDoubleClickEvent
func miqt_exec_callback_QTabWidget_mouseDoubleClickEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QTabWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTabWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_mouseMoveEvent
func miqt_exec_callback_QTabWidget_mouseMoveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QTabWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QTabWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_wheelEvent
func miqt_exec_callback_QTabWidget_wheelEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTabWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTabWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_keyReleaseEvent
func miqt_exec_callback_QTabWidget_keyReleaseEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTabWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTabWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_focusInEvent
func miqt_exec_callback_QTabWidget_focusInEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTabWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTabWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_focusOutEvent
func miqt_exec_callback_QTabWidget_focusOutEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QTabWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTabWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_enterEvent
func miqt_exec_callback_QTabWidget_enterEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTabWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTabWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_leaveEvent
func miqt_exec_callback_QTabWidget_leaveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTabWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTabWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_moveEvent
func miqt_exec_callback_QTabWidget_moveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTabWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTabWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_closeEvent
func miqt_exec_callback_QTabWidget_closeEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QTabWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QTabWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_contextMenuEvent
func miqt_exec_callback_QTabWidget_contextMenuEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTabWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTabWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_tabletEvent
func miqt_exec_callback_QTabWidget_tabletEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTabWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTabWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_actionEvent
func miqt_exec_callback_QTabWidget_actionEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QTabWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QTabWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_dragEnterEvent
func miqt_exec_callback_QTabWidget_dragEnterEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTabWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QTabWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_dragMoveEvent
func miqt_exec_callback_QTabWidget_dragMoveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTabWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QTabWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_dragLeaveEvent
func miqt_exec_callback_QTabWidget_dragLeaveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTabWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QTabWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_dropEvent
func miqt_exec_callback_QTabWidget_dropEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTabWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTabWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_hideEvent
func miqt_exec_callback_QTabWidget_hideEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTabWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QTabWidget) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QTabWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_nativeEvent
func miqt_exec_callback_QTabWidget_nativeEvent(self *C.QTabWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTabWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTabWidget) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTabWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_metric
func miqt_exec_callback_QTabWidget_metric(self *C.QTabWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QTabWidget_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTabWidget) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTabWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_initPainter
func miqt_exec_callback_QTabWidget_initPainter(self *C.QTabWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTabWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTabWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTabWidget_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTabWidget) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTabWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_redirected
func miqt_exec_callback_QTabWidget_redirected(self *C.QTabWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QTabWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTabWidget) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTabWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_sharedPainter
func miqt_exec_callback_QTabWidget_sharedPainter(self *C.QTabWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTabWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QTabWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_inputMethodEvent
func miqt_exec_callback_QTabWidget_inputMethodEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTabWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabWidget) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QTabWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_inputMethodQuery
func miqt_exec_callback_QTabWidget_inputMethodQuery(self *C.QTabWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTabWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTabWidget) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTabWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_focusNextPrevChild
func miqt_exec_callback_QTabWidget_focusNextPrevChild(self *C.QTabWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTabWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTabWidget) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTabWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_eventFilter
func miqt_exec_callback_QTabWidget_eventFilter(self *C.QTabWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTabWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTabWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_timerEvent
func miqt_exec_callback_QTabWidget_timerEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTabWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTabWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_childEvent
func miqt_exec_callback_QTabWidget_childEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTabWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTabWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_customEvent
func miqt_exec_callback_QTabWidget_customEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTabWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTabWidget) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTabWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_connectNotify
func miqt_exec_callback_QTabWidget_connectNotify(self *C.QTabWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTabWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTabWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTabWidget) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTabWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabWidget_disconnectNotify
func miqt_exec_callback_QTabWidget_disconnectNotify(self *C.QTabWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTabWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTabWidget) Delete() {
	C.QTabWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTabWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QTabWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
