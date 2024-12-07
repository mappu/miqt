package qt

/*

#include "gen_qtoolbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QToolBar struct {
	h          *C.QToolBar
	isSubclass bool
	*QWidget
}

func (this *QToolBar) cPointer() *C.QToolBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QToolBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQToolBar constructs the type using only CGO pointers.
func newQToolBar(h *C.QToolBar, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QToolBar {
	if h == nil {
		return nil
	}
	return &QToolBar{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQToolBar constructs the type using only unsafe pointers.
func UnsafeNewQToolBar(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QToolBar {
	if h == nil {
		return nil
	}

	return &QToolBar{h: (*C.QToolBar)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQToolBar constructs a new QToolBar object.
func NewQToolBar(parent *QWidget) *QToolBar {
	var outptr_QToolBar *C.QToolBar = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QToolBar_new(parent.cPointer(), &outptr_QToolBar, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQToolBar(outptr_QToolBar, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQToolBar2 constructs a new QToolBar object.
func NewQToolBar2(title string) *QToolBar {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	var outptr_QToolBar *C.QToolBar = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QToolBar_new2(title_ms, &outptr_QToolBar, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQToolBar(outptr_QToolBar, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQToolBar3 constructs a new QToolBar object.
func NewQToolBar3() *QToolBar {
	var outptr_QToolBar *C.QToolBar = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QToolBar_new3(&outptr_QToolBar, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQToolBar(outptr_QToolBar, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQToolBar4 constructs a new QToolBar object.
func NewQToolBar4(title string, parent *QWidget) *QToolBar {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	var outptr_QToolBar *C.QToolBar = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QToolBar_new4(title_ms, parent.cPointer(), &outptr_QToolBar, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQToolBar(outptr_QToolBar, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QToolBar) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QToolBar_MetaObject(this.h)))
}

func (this *QToolBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QToolBar_Metacast(this.h, param1_Cstring))
}

func QToolBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBar) SetMovable(movable bool) {
	C.QToolBar_SetMovable(this.h, (C.bool)(movable))
}

func (this *QToolBar) IsMovable() bool {
	return (bool)(C.QToolBar_IsMovable(this.h))
}

func (this *QToolBar) SetAllowedAreas(areas ToolBarArea) {
	C.QToolBar_SetAllowedAreas(this.h, (C.int)(areas))
}

func (this *QToolBar) AllowedAreas() ToolBarArea {
	return (ToolBarArea)(C.QToolBar_AllowedAreas(this.h))
}

func (this *QToolBar) IsAreaAllowed(area ToolBarArea) bool {
	return (bool)(C.QToolBar_IsAreaAllowed(this.h, (C.int)(area)))
}

func (this *QToolBar) SetOrientation(orientation Orientation) {
	C.QToolBar_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QToolBar) Orientation() Orientation {
	return (Orientation)(C.QToolBar_Orientation(this.h))
}

func (this *QToolBar) Clear() {
	C.QToolBar_Clear(this.h)
}

func (this *QToolBar) AddAction(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_AddAction(this.h, text_ms)), nil)
}

func (this *QToolBar) AddAction2(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_AddAction2(this.h, icon.cPointer(), text_ms)), nil)
}

func (this *QToolBar) AddSeparator() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_AddSeparator(this.h)), nil)
}

func (this *QToolBar) InsertSeparator(before *QAction) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_InsertSeparator(this.h, before.cPointer())), nil)
}

func (this *QToolBar) AddWidget(widget *QWidget) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_AddWidget(this.h, widget.cPointer())), nil)
}

func (this *QToolBar) InsertWidget(before *QAction, widget *QWidget) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_InsertWidget(this.h, before.cPointer(), widget.cPointer())), nil)
}

func (this *QToolBar) ActionGeometry(action *QAction) *QRect {
	_ret := C.QToolBar_ActionGeometry(this.h, action.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBar) ActionAt(p *QPoint) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_ActionAt(this.h, p.cPointer())), nil)
}

func (this *QToolBar) ActionAt2(x int, y int) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_ActionAt2(this.h, (C.int)(x), (C.int)(y))), nil)
}

func (this *QToolBar) ToggleViewAction() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_ToggleViewAction(this.h)), nil)
}

func (this *QToolBar) IconSize() *QSize {
	_ret := C.QToolBar_IconSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBar) ToolButtonStyle() ToolButtonStyle {
	return (ToolButtonStyle)(C.QToolBar_ToolButtonStyle(this.h))
}

func (this *QToolBar) WidgetForAction(action *QAction) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QToolBar_WidgetForAction(this.h, action.cPointer())), nil, nil)
}

func (this *QToolBar) IsFloatable() bool {
	return (bool)(C.QToolBar_IsFloatable(this.h))
}

func (this *QToolBar) SetFloatable(floatable bool) {
	C.QToolBar_SetFloatable(this.h, (C.bool)(floatable))
}

func (this *QToolBar) IsFloating() bool {
	return (bool)(C.QToolBar_IsFloating(this.h))
}

func (this *QToolBar) SetIconSize(iconSize *QSize) {
	C.QToolBar_SetIconSize(this.h, iconSize.cPointer())
}

func (this *QToolBar) SetToolButtonStyle(toolButtonStyle ToolButtonStyle) {
	C.QToolBar_SetToolButtonStyle(this.h, (C.int)(toolButtonStyle))
}

func (this *QToolBar) ActionTriggered(action *QAction) {
	C.QToolBar_ActionTriggered(this.h, action.cPointer())
}
func (this *QToolBar) OnActionTriggered(slot func(action *QAction)) {
	C.QToolBar_connect_ActionTriggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_ActionTriggered
func miqt_exec_callback_QToolBar_ActionTriggered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAction(unsafe.Pointer(action), nil)

	gofunc(slotval1)
}

func (this *QToolBar) MovableChanged(movable bool) {
	C.QToolBar_MovableChanged(this.h, (C.bool)(movable))
}
func (this *QToolBar) OnMovableChanged(slot func(movable bool)) {
	C.QToolBar_connect_MovableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_MovableChanged
func miqt_exec_callback_QToolBar_MovableChanged(cb C.intptr_t, movable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(movable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(movable)

	gofunc(slotval1)
}

func (this *QToolBar) AllowedAreasChanged(allowedAreas ToolBarArea) {
	C.QToolBar_AllowedAreasChanged(this.h, (C.int)(allowedAreas))
}
func (this *QToolBar) OnAllowedAreasChanged(slot func(allowedAreas ToolBarArea)) {
	C.QToolBar_connect_AllowedAreasChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_AllowedAreasChanged
func miqt_exec_callback_QToolBar_AllowedAreasChanged(cb C.intptr_t, allowedAreas C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(allowedAreas ToolBarArea))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ToolBarArea)(allowedAreas)

	gofunc(slotval1)
}

func (this *QToolBar) OrientationChanged(orientation Orientation) {
	C.QToolBar_OrientationChanged(this.h, (C.int)(orientation))
}
func (this *QToolBar) OnOrientationChanged(slot func(orientation Orientation)) {
	C.QToolBar_connect_OrientationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_OrientationChanged
func miqt_exec_callback_QToolBar_OrientationChanged(cb C.intptr_t, orientation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(orientation Orientation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (Orientation)(orientation)

	gofunc(slotval1)
}

func (this *QToolBar) IconSizeChanged(iconSize *QSize) {
	C.QToolBar_IconSizeChanged(this.h, iconSize.cPointer())
}
func (this *QToolBar) OnIconSizeChanged(slot func(iconSize *QSize)) {
	C.QToolBar_connect_IconSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_IconSizeChanged
func miqt_exec_callback_QToolBar_IconSizeChanged(cb C.intptr_t, iconSize *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(iconSize *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSize(unsafe.Pointer(iconSize))

	gofunc(slotval1)
}

func (this *QToolBar) ToolButtonStyleChanged(toolButtonStyle ToolButtonStyle) {
	C.QToolBar_ToolButtonStyleChanged(this.h, (C.int)(toolButtonStyle))
}
func (this *QToolBar) OnToolButtonStyleChanged(slot func(toolButtonStyle ToolButtonStyle)) {
	C.QToolBar_connect_ToolButtonStyleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_ToolButtonStyleChanged
func miqt_exec_callback_QToolBar_ToolButtonStyleChanged(cb C.intptr_t, toolButtonStyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(toolButtonStyle ToolButtonStyle))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ToolButtonStyle)(toolButtonStyle)

	gofunc(slotval1)
}

func (this *QToolBar) TopLevelChanged(topLevel bool) {
	C.QToolBar_TopLevelChanged(this.h, (C.bool)(topLevel))
}
func (this *QToolBar) OnTopLevelChanged(slot func(topLevel bool)) {
	C.QToolBar_connect_TopLevelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_TopLevelChanged
func miqt_exec_callback_QToolBar_TopLevelChanged(cb C.intptr_t, topLevel C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(topLevel bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(topLevel)

	gofunc(slotval1)
}

func (this *QToolBar) VisibilityChanged(visible bool) {
	C.QToolBar_VisibilityChanged(this.h, (C.bool)(visible))
}
func (this *QToolBar) OnVisibilityChanged(slot func(visible bool)) {
	C.QToolBar_connect_VisibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_VisibilityChanged
func miqt_exec_callback_QToolBar_VisibilityChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func QToolBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBar) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QToolBar_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_ActionEvent
func miqt_exec_callback_QToolBar_ActionEvent(self *C.QToolBar, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QToolBar_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_ChangeEvent
func miqt_exec_callback_QToolBar_ChangeEvent(self *C.QToolBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QToolBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QToolBar_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_PaintEvent
func miqt_exec_callback_QToolBar_PaintEvent(self *C.QToolBar, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QToolBar_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QToolBar) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_Event
func miqt_exec_callback_QToolBar_Event(self *C.QToolBar, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_DevType() int {

	return (int)(C.QToolBar_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QToolBar) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_DevType
func miqt_exec_callback_QToolBar_DevType(self *C.QToolBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_SetVisible(visible bool) {

	C.QToolBar_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QToolBar) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_SetVisible
func miqt_exec_callback_QToolBar_SetVisible(self *C.QToolBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QToolBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QToolBar) callVirtualBase_SizeHint() *QSize {

	_ret := C.QToolBar_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBar) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_SizeHint
func miqt_exec_callback_QToolBar_SizeHint(self *C.QToolBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QToolBar_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBar) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_MinimumSizeHint
func miqt_exec_callback_QToolBar_MinimumSizeHint(self *C.QToolBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QToolBar_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QToolBar) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_HeightForWidth
func miqt_exec_callback_QToolBar_HeightForWidth(self *C.QToolBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QToolBar_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QToolBar) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_HasHeightForWidth
func miqt_exec_callback_QToolBar_HasHeightForWidth(self *C.QToolBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QToolBar_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QToolBar) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_PaintEngine
func miqt_exec_callback_QToolBar_PaintEngine(self *C.QToolBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QToolBar_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_MousePressEvent
func miqt_exec_callback_QToolBar_MousePressEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QToolBar_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_MouseReleaseEvent
func miqt_exec_callback_QToolBar_MouseReleaseEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QToolBar_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_MouseDoubleClickEvent
func miqt_exec_callback_QToolBar_MouseDoubleClickEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QToolBar_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_MouseMoveEvent
func miqt_exec_callback_QToolBar_MouseMoveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QToolBar_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_WheelEvent
func miqt_exec_callback_QToolBar_WheelEvent(self *C.QToolBar, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QToolBar_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_KeyPressEvent
func miqt_exec_callback_QToolBar_KeyPressEvent(self *C.QToolBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QToolBar_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_KeyReleaseEvent
func miqt_exec_callback_QToolBar_KeyReleaseEvent(self *C.QToolBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QToolBar_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_FocusInEvent
func miqt_exec_callback_QToolBar_FocusInEvent(self *C.QToolBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QToolBar_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_FocusOutEvent
func miqt_exec_callback_QToolBar_FocusOutEvent(self *C.QToolBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_EnterEvent(event *QEvent) {

	C.QToolBar_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_EnterEvent
func miqt_exec_callback_QToolBar_EnterEvent(self *C.QToolBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QToolBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QToolBar_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_LeaveEvent
func miqt_exec_callback_QToolBar_LeaveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QToolBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QToolBar_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_MoveEvent
func miqt_exec_callback_QToolBar_MoveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QToolBar_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_ResizeEvent
func miqt_exec_callback_QToolBar_ResizeEvent(self *C.QToolBar, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QToolBar_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_CloseEvent
func miqt_exec_callback_QToolBar_CloseEvent(self *C.QToolBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QToolBar_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_ContextMenuEvent
func miqt_exec_callback_QToolBar_ContextMenuEvent(self *C.QToolBar, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QToolBar_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_TabletEvent
func miqt_exec_callback_QToolBar_TabletEvent(self *C.QToolBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QToolBar_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_DragEnterEvent
func miqt_exec_callback_QToolBar_DragEnterEvent(self *C.QToolBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QToolBar_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_DragMoveEvent
func miqt_exec_callback_QToolBar_DragMoveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QToolBar_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_DragLeaveEvent
func miqt_exec_callback_QToolBar_DragLeaveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QToolBar_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_DropEvent
func miqt_exec_callback_QToolBar_DropEvent(self *C.QToolBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QToolBar_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_ShowEvent
func miqt_exec_callback_QToolBar_ShowEvent(self *C.QToolBar, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QToolBar_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_HideEvent
func miqt_exec_callback_QToolBar_HideEvent(self *C.QToolBar, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QToolBar_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QToolBar) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_NativeEvent
func miqt_exec_callback_QToolBar_NativeEvent(self *C.QToolBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QToolBar_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QToolBar) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_Metric
func miqt_exec_callback_QToolBar_Metric(self *C.QToolBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_InitPainter(painter *QPainter) {

	C.QToolBar_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QToolBar) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_InitPainter
func miqt_exec_callback_QToolBar_InitPainter(self *C.QToolBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QToolBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QToolBar) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QToolBar_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QToolBar) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_Redirected
func miqt_exec_callback_QToolBar_Redirected(self *C.QToolBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QToolBar_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QToolBar) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_SharedPainter
func miqt_exec_callback_QToolBar_SharedPainter(self *C.QToolBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QToolBar_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolBar) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_InputMethodEvent
func miqt_exec_callback_QToolBar_InputMethodEvent(self *C.QToolBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QToolBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QToolBar_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBar) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_InputMethodQuery
func miqt_exec_callback_QToolBar_InputMethodQuery(self *C.QToolBar, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QToolBar_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QToolBar) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBar_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_FocusNextPrevChild
func miqt_exec_callback_QToolBar_FocusNextPrevChild(self *C.QToolBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QToolBar) Delete() {
	C.QToolBar_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
