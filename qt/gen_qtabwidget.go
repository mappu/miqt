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
	h          *C.QTabWidget
	isSubclass bool
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

	ret := newQTabWidget(C.QTabWidget_new(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQTabWidget2 constructs a new QTabWidget object.
func NewQTabWidget2() *QTabWidget {

	ret := newQTabWidget(C.QTabWidget_new2())
	ret.isSubclass = true
	return ret
}

func (this *QTabWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTabWidget_MetaObject(this.h))
}

func (this *QTabWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTabWidget_Metacast(this.h, param1_Cstring))
}

func QTabWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) AddTab(widget *QWidget, param2 string) int {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	return (int)(C.QTabWidget_AddTab(this.h, widget.cPointer(), param2_ms))
}

func (this *QTabWidget) AddTab2(widget *QWidget, icon *QIcon, label string) int {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QTabWidget_AddTab2(this.h, widget.cPointer(), icon.cPointer(), label_ms))
}

func (this *QTabWidget) InsertTab(index int, widget *QWidget, param3 string) int {
	param3_ms := C.struct_miqt_string{}
	param3_ms.data = C.CString(param3)
	param3_ms.len = C.size_t(len(param3))
	defer C.free(unsafe.Pointer(param3_ms.data))
	return (int)(C.QTabWidget_InsertTab(this.h, (C.int)(index), widget.cPointer(), param3_ms))
}

func (this *QTabWidget) InsertTab2(index int, widget *QWidget, icon *QIcon, label string) int {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return (int)(C.QTabWidget_InsertTab2(this.h, (C.int)(index), widget.cPointer(), icon.cPointer(), label_ms))
}

func (this *QTabWidget) RemoveTab(index int) {
	C.QTabWidget_RemoveTab(this.h, (C.int)(index))
}

func (this *QTabWidget) IsTabEnabled(index int) bool {
	return (bool)(C.QTabWidget_IsTabEnabled(this.h, (C.int)(index)))
}

func (this *QTabWidget) SetTabEnabled(index int, enabled bool) {
	C.QTabWidget_SetTabEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QTabWidget) IsTabVisible(index int) bool {
	return (bool)(C.QTabWidget_IsTabVisible(this.h, (C.int)(index)))
}

func (this *QTabWidget) SetTabVisible(index int, visible bool) {
	C.QTabWidget_SetTabVisible(this.h, (C.int)(index), (C.bool)(visible))
}

func (this *QTabWidget) TabText(index int) string {
	var _ms C.struct_miqt_string = C.QTabWidget_TabText(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) SetTabText(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTabWidget_SetTabText(this.h, (C.int)(index), text_ms)
}

func (this *QTabWidget) TabIcon(index int) *QIcon {
	_goptr := newQIcon(C.QTabWidget_TabIcon(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) SetTabIcon(index int, icon *QIcon) {
	C.QTabWidget_SetTabIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QTabWidget) SetTabToolTip(index int, tip string) {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))
	C.QTabWidget_SetTabToolTip(this.h, (C.int)(index), tip_ms)
}

func (this *QTabWidget) TabToolTip(index int) string {
	var _ms C.struct_miqt_string = C.QTabWidget_TabToolTip(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) SetTabWhatsThis(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTabWidget_SetTabWhatsThis(this.h, (C.int)(index), text_ms)
}

func (this *QTabWidget) TabWhatsThis(index int) string {
	var _ms C.struct_miqt_string = C.QTabWidget_TabWhatsThis(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) CurrentIndex() int {
	return (int)(C.QTabWidget_CurrentIndex(this.h))
}

func (this *QTabWidget) CurrentWidget() *QWidget {
	return newQWidget(C.QTabWidget_CurrentWidget(this.h))
}

func (this *QTabWidget) Widget(index int) *QWidget {
	return newQWidget(C.QTabWidget_Widget(this.h, (C.int)(index)))
}

func (this *QTabWidget) IndexOf(widget *QWidget) int {
	return (int)(C.QTabWidget_IndexOf(this.h, widget.cPointer()))
}

func (this *QTabWidget) Count() int {
	return (int)(C.QTabWidget_Count(this.h))
}

func (this *QTabWidget) TabPosition() QTabWidget__TabPosition {
	return (QTabWidget__TabPosition)(C.QTabWidget_TabPosition(this.h))
}

func (this *QTabWidget) SetTabPosition(position QTabWidget__TabPosition) {
	C.QTabWidget_SetTabPosition(this.h, (C.int)(position))
}

func (this *QTabWidget) TabsClosable() bool {
	return (bool)(C.QTabWidget_TabsClosable(this.h))
}

func (this *QTabWidget) SetTabsClosable(closeable bool) {
	C.QTabWidget_SetTabsClosable(this.h, (C.bool)(closeable))
}

func (this *QTabWidget) IsMovable() bool {
	return (bool)(C.QTabWidget_IsMovable(this.h))
}

func (this *QTabWidget) SetMovable(movable bool) {
	C.QTabWidget_SetMovable(this.h, (C.bool)(movable))
}

func (this *QTabWidget) TabShape() QTabWidget__TabShape {
	return (QTabWidget__TabShape)(C.QTabWidget_TabShape(this.h))
}

func (this *QTabWidget) SetTabShape(s QTabWidget__TabShape) {
	C.QTabWidget_SetTabShape(this.h, (C.int)(s))
}

func (this *QTabWidget) SizeHint() *QSize {
	_goptr := newQSize(C.QTabWidget_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QTabWidget_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) HeightForWidth(width int) int {
	return (int)(C.QTabWidget_HeightForWidth(this.h, (C.int)(width)))
}

func (this *QTabWidget) HasHeightForWidth() bool {
	return (bool)(C.QTabWidget_HasHeightForWidth(this.h))
}

func (this *QTabWidget) SetCornerWidget(w *QWidget) {
	C.QTabWidget_SetCornerWidget(this.h, w.cPointer())
}

func (this *QTabWidget) CornerWidget() *QWidget {
	return newQWidget(C.QTabWidget_CornerWidget(this.h))
}

func (this *QTabWidget) ElideMode() TextElideMode {
	return (TextElideMode)(C.QTabWidget_ElideMode(this.h))
}

func (this *QTabWidget) SetElideMode(mode TextElideMode) {
	C.QTabWidget_SetElideMode(this.h, (C.int)(mode))
}

func (this *QTabWidget) IconSize() *QSize {
	_goptr := newQSize(C.QTabWidget_IconSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) SetIconSize(size *QSize) {
	C.QTabWidget_SetIconSize(this.h, size.cPointer())
}

func (this *QTabWidget) UsesScrollButtons() bool {
	return (bool)(C.QTabWidget_UsesScrollButtons(this.h))
}

func (this *QTabWidget) SetUsesScrollButtons(useButtons bool) {
	C.QTabWidget_SetUsesScrollButtons(this.h, (C.bool)(useButtons))
}

func (this *QTabWidget) DocumentMode() bool {
	return (bool)(C.QTabWidget_DocumentMode(this.h))
}

func (this *QTabWidget) SetDocumentMode(set bool) {
	C.QTabWidget_SetDocumentMode(this.h, (C.bool)(set))
}

func (this *QTabWidget) TabBarAutoHide() bool {
	return (bool)(C.QTabWidget_TabBarAutoHide(this.h))
}

func (this *QTabWidget) SetTabBarAutoHide(enabled bool) {
	C.QTabWidget_SetTabBarAutoHide(this.h, (C.bool)(enabled))
}

func (this *QTabWidget) Clear() {
	C.QTabWidget_Clear(this.h)
}

func (this *QTabWidget) TabBar() *QTabBar {
	return newQTabBar(C.QTabWidget_TabBar(this.h))
}

func (this *QTabWidget) SetCurrentIndex(index int) {
	C.QTabWidget_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QTabWidget) SetCurrentWidget(widget *QWidget) {
	C.QTabWidget_SetCurrentWidget(this.h, widget.cPointer())
}

func (this *QTabWidget) CurrentChanged(index int) {
	C.QTabWidget_CurrentChanged(this.h, (C.int)(index))
}
func (this *QTabWidget) OnCurrentChanged(slot func(index int)) {
	C.QTabWidget_connect_CurrentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_CurrentChanged
func miqt_exec_callback_QTabWidget_CurrentChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabWidget) TabCloseRequested(index int) {
	C.QTabWidget_TabCloseRequested(this.h, (C.int)(index))
}
func (this *QTabWidget) OnTabCloseRequested(slot func(index int)) {
	C.QTabWidget_connect_TabCloseRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_TabCloseRequested
func miqt_exec_callback_QTabWidget_TabCloseRequested(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabWidget) TabBarClicked(index int) {
	C.QTabWidget_TabBarClicked(this.h, (C.int)(index))
}
func (this *QTabWidget) OnTabBarClicked(slot func(index int)) {
	C.QTabWidget_connect_TabBarClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_TabBarClicked
func miqt_exec_callback_QTabWidget_TabBarClicked(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabWidget) TabBarDoubleClicked(index int) {
	C.QTabWidget_TabBarDoubleClicked(this.h, (C.int)(index))
}
func (this *QTabWidget) OnTabBarDoubleClicked(slot func(index int)) {
	C.QTabWidget_connect_TabBarDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_TabBarDoubleClicked
func miqt_exec_callback_QTabWidget_TabBarDoubleClicked(cb C.intptr_t, index C.int) {
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
	var _ms C.struct_miqt_string = C.QTabWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTabWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTabWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTabWidget) SetCornerWidget2(w *QWidget, corner Corner) {
	C.QTabWidget_SetCornerWidget2(this.h, w.cPointer(), (C.int)(corner))
}

func (this *QTabWidget) CornerWidget1(corner Corner) *QWidget {
	return newQWidget(C.QTabWidget_CornerWidget1(this.h, (C.int)(corner)))
}

func (this *QTabWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTabWidget_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_SizeHint
func miqt_exec_callback_QTabWidget_SizeHint(self *C.QTabWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTabWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_MinimumSizeHint
func miqt_exec_callback_QTabWidget_MinimumSizeHint(self *C.QTabWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_HeightForWidth(width int) int {

	return (int)(C.QTabWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *QTabWidget) OnHeightForWidth(slot func(super func(width int) int, width int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_HeightForWidth
func miqt_exec_callback_QTabWidget_HeightForWidth(self *C.QTabWidget, cb C.intptr_t, width C.int) C.int {
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

	return (bool)(C.QTabWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTabWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_HasHeightForWidth
func miqt_exec_callback_QTabWidget_HasHeightForWidth(self *C.QTabWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_TabInserted(index int) {

	C.QTabWidget_virtualbase_TabInserted(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QTabWidget) OnTabInserted(slot func(super func(index int), index int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_TabInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_TabInserted
func miqt_exec_callback_QTabWidget_TabInserted(self *C.QTabWidget, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QTabWidget{h: self}).callVirtualBase_TabInserted, slotval1)

}

func (this *QTabWidget) callVirtualBase_TabRemoved(index int) {

	C.QTabWidget_virtualbase_TabRemoved(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QTabWidget) OnTabRemoved(slot func(super func(index int), index int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_TabRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_TabRemoved
func miqt_exec_callback_QTabWidget_TabRemoved(self *C.QTabWidget, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QTabWidget{h: self}).callVirtualBase_TabRemoved, slotval1)

}

func (this *QTabWidget) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QTabWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_ShowEvent
func miqt_exec_callback_QTabWidget_ShowEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QTabWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_ResizeEvent
func miqt_exec_callback_QTabWidget_ResizeEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QTabWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_KeyPressEvent
func miqt_exec_callback_QTabWidget_KeyPressEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QTabWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_PaintEvent
func miqt_exec_callback_QTabWidget_PaintEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QTabWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_ChangeEvent
func miqt_exec_callback_QTabWidget_ChangeEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QTabWidget_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QTabWidget) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_Event
func miqt_exec_callback_QTabWidget_Event(self *C.QTabWidget, cb C.intptr_t, param1 *C.QEvent) C.bool {
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

	return (int)(C.QTabWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QTabWidget) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_DevType
func miqt_exec_callback_QTabWidget_DevType(self *C.QTabWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTabWidget) callVirtualBase_SetVisible(visible bool) {

	C.QTabWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTabWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_SetVisible
func miqt_exec_callback_QTabWidget_SetVisible(self *C.QTabWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTabWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTabWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTabWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QTabWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_PaintEngine
func miqt_exec_callback_QTabWidget_PaintEngine(self *C.QTabWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QTabWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_MousePressEvent
func miqt_exec_callback_QTabWidget_MousePressEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QTabWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_MouseReleaseEvent
func miqt_exec_callback_QTabWidget_MouseReleaseEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTabWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_MouseDoubleClickEvent
func miqt_exec_callback_QTabWidget_MouseDoubleClickEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QTabWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_MouseMoveEvent
func miqt_exec_callback_QTabWidget_MouseMoveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QTabWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_WheelEvent
func miqt_exec_callback_QTabWidget_WheelEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTabWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_KeyReleaseEvent
func miqt_exec_callback_QTabWidget_KeyReleaseEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTabWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_FocusInEvent
func miqt_exec_callback_QTabWidget_FocusInEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTabWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_FocusOutEvent
func miqt_exec_callback_QTabWidget_FocusOutEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QTabWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_EnterEvent
func miqt_exec_callback_QTabWidget_EnterEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTabWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_LeaveEvent
func miqt_exec_callback_QTabWidget_LeaveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTabWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_MoveEvent
func miqt_exec_callback_QTabWidget_MoveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTabWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_CloseEvent
func miqt_exec_callback_QTabWidget_CloseEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QTabWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_ContextMenuEvent
func miqt_exec_callback_QTabWidget_ContextMenuEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTabWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_TabletEvent
func miqt_exec_callback_QTabWidget_TabletEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTabWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_ActionEvent
func miqt_exec_callback_QTabWidget_ActionEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QTabWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_DragEnterEvent
func miqt_exec_callback_QTabWidget_DragEnterEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTabWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_DragMoveEvent
func miqt_exec_callback_QTabWidget_DragMoveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTabWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_DragLeaveEvent
func miqt_exec_callback_QTabWidget_DragLeaveEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTabWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_DropEvent
func miqt_exec_callback_QTabWidget_DropEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTabWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTabWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTabWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_HideEvent
func miqt_exec_callback_QTabWidget_HideEvent(self *C.QTabWidget, cb C.intptr_t, event *C.QHideEvent) {
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
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTabWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QTabWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_NativeEvent
func miqt_exec_callback_QTabWidget_NativeEvent(self *C.QTabWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	return (int)(C.QTabWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTabWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_Metric
func miqt_exec_callback_QTabWidget_Metric(self *C.QTabWidget, cb C.intptr_t, param1 C.int) C.int {
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

	C.QTabWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTabWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_InitPainter
func miqt_exec_callback_QTabWidget_InitPainter(self *C.QTabWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTabWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTabWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTabWidget_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTabWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_Redirected
func miqt_exec_callback_QTabWidget_Redirected(self *C.QTabWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QTabWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTabWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_SharedPainter
func miqt_exec_callback_QTabWidget_SharedPainter(self *C.QTabWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTabWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTabWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTabWidget) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_InputMethodEvent
func miqt_exec_callback_QTabWidget_InputMethodEvent(self *C.QTabWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QTabWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTabWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTabWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTabWidget) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_InputMethodQuery
func miqt_exec_callback_QTabWidget_InputMethodQuery(self *C.QTabWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QTabWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTabWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTabWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTabWidget_FocusNextPrevChild
func miqt_exec_callback_QTabWidget_FocusNextPrevChild(self *C.QTabWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTabWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QTabWidget) Delete() {
	C.QTabWidget_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTabWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QTabWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
