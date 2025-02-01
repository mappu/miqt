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
	h *C.QToolBar
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
func newQToolBar(h *C.QToolBar) *QToolBar {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QToolBar_virtbase(h, &outptr_QWidget)

	return &QToolBar{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQToolBar constructs the type using only unsafe pointers.
func UnsafeNewQToolBar(h unsafe.Pointer) *QToolBar {
	return newQToolBar((*C.QToolBar)(h))
}

// NewQToolBar constructs a new QToolBar object.
func NewQToolBar(parent *QWidget) *QToolBar {

	return newQToolBar(C.QToolBar_new(parent.cPointer()))
}

// NewQToolBar2 constructs a new QToolBar object.
func NewQToolBar2(title string) *QToolBar {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQToolBar(C.QToolBar_new2(title_ms))
}

// NewQToolBar3 constructs a new QToolBar object.
func NewQToolBar3() *QToolBar {

	return newQToolBar(C.QToolBar_new3())
}

// NewQToolBar4 constructs a new QToolBar object.
func NewQToolBar4(title string, parent *QWidget) *QToolBar {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQToolBar(C.QToolBar_new4(title_ms, parent.cPointer()))
}

func (this *QToolBar) MetaObject() *QMetaObject {
	return newQMetaObject(C.QToolBar_metaObject(this.h))
}

func (this *QToolBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QToolBar_metacast(this.h, param1_Cstring))
}

func QToolBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBar) SetMovable(movable bool) {
	C.QToolBar_setMovable(this.h, (C.bool)(movable))
}

func (this *QToolBar) IsMovable() bool {
	return (bool)(C.QToolBar_isMovable(this.h))
}

func (this *QToolBar) SetAllowedAreas(areas ToolBarArea) {
	C.QToolBar_setAllowedAreas(this.h, (C.int)(areas))
}

func (this *QToolBar) AllowedAreas() ToolBarArea {
	return (ToolBarArea)(C.QToolBar_allowedAreas(this.h))
}

func (this *QToolBar) IsAreaAllowed(area ToolBarArea) bool {
	return (bool)(C.QToolBar_isAreaAllowed(this.h, (C.int)(area)))
}

func (this *QToolBar) SetOrientation(orientation Orientation) {
	C.QToolBar_setOrientation(this.h, (C.int)(orientation))
}

func (this *QToolBar) Orientation() Orientation {
	return (Orientation)(C.QToolBar_orientation(this.h))
}

func (this *QToolBar) Clear() {
	C.QToolBar_clear(this.h)
}

func (this *QToolBar) AddAction(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QToolBar_addAction(this.h, text_ms))
}

func (this *QToolBar) AddAction2(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QToolBar_addAction2(this.h, icon.cPointer(), text_ms))
}

func (this *QToolBar) AddSeparator() *QAction {
	return newQAction(C.QToolBar_addSeparator(this.h))
}

func (this *QToolBar) InsertSeparator(before *QAction) *QAction {
	return newQAction(C.QToolBar_insertSeparator(this.h, before.cPointer()))
}

func (this *QToolBar) AddWidget(widget *QWidget) *QAction {
	return newQAction(C.QToolBar_addWidget(this.h, widget.cPointer()))
}

func (this *QToolBar) InsertWidget(before *QAction, widget *QWidget) *QAction {
	return newQAction(C.QToolBar_insertWidget(this.h, before.cPointer(), widget.cPointer()))
}

func (this *QToolBar) ActionGeometry(action *QAction) *QRect {
	_goptr := newQRect(C.QToolBar_actionGeometry(this.h, action.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBar) ActionAt(p *QPoint) *QAction {
	return newQAction(C.QToolBar_actionAt(this.h, p.cPointer()))
}

func (this *QToolBar) ActionAt2(x int, y int) *QAction {
	return newQAction(C.QToolBar_actionAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QToolBar) ToggleViewAction() *QAction {
	return newQAction(C.QToolBar_toggleViewAction(this.h))
}

func (this *QToolBar) IconSize() *QSize {
	_goptr := newQSize(C.QToolBar_iconSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBar) ToolButtonStyle() ToolButtonStyle {
	return (ToolButtonStyle)(C.QToolBar_toolButtonStyle(this.h))
}

func (this *QToolBar) WidgetForAction(action *QAction) *QWidget {
	return newQWidget(C.QToolBar_widgetForAction(this.h, action.cPointer()))
}

func (this *QToolBar) IsFloatable() bool {
	return (bool)(C.QToolBar_isFloatable(this.h))
}

func (this *QToolBar) SetFloatable(floatable bool) {
	C.QToolBar_setFloatable(this.h, (C.bool)(floatable))
}

func (this *QToolBar) IsFloating() bool {
	return (bool)(C.QToolBar_isFloating(this.h))
}

func (this *QToolBar) SetIconSize(iconSize *QSize) {
	C.QToolBar_setIconSize(this.h, iconSize.cPointer())
}

func (this *QToolBar) SetToolButtonStyle(toolButtonStyle ToolButtonStyle) {
	C.QToolBar_setToolButtonStyle(this.h, (C.int)(toolButtonStyle))
}

func (this *QToolBar) ActionTriggered(action *QAction) {
	C.QToolBar_actionTriggered(this.h, action.cPointer())
}
func (this *QToolBar) OnActionTriggered(slot func(action *QAction)) {
	C.QToolBar_connect_actionTriggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_actionTriggered
func miqt_exec_callback_QToolBar_actionTriggered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction(action)

	gofunc(slotval1)
}

func (this *QToolBar) MovableChanged(movable bool) {
	C.QToolBar_movableChanged(this.h, (C.bool)(movable))
}
func (this *QToolBar) OnMovableChanged(slot func(movable bool)) {
	C.QToolBar_connect_movableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_movableChanged
func miqt_exec_callback_QToolBar_movableChanged(cb C.intptr_t, movable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(movable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(movable)

	gofunc(slotval1)
}

func (this *QToolBar) AllowedAreasChanged(allowedAreas ToolBarArea) {
	C.QToolBar_allowedAreasChanged(this.h, (C.int)(allowedAreas))
}
func (this *QToolBar) OnAllowedAreasChanged(slot func(allowedAreas ToolBarArea)) {
	C.QToolBar_connect_allowedAreasChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_allowedAreasChanged
func miqt_exec_callback_QToolBar_allowedAreasChanged(cb C.intptr_t, allowedAreas C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(allowedAreas ToolBarArea))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ToolBarArea)(allowedAreas)

	gofunc(slotval1)
}

func (this *QToolBar) OrientationChanged(orientation Orientation) {
	C.QToolBar_orientationChanged(this.h, (C.int)(orientation))
}
func (this *QToolBar) OnOrientationChanged(slot func(orientation Orientation)) {
	C.QToolBar_connect_orientationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_orientationChanged
func miqt_exec_callback_QToolBar_orientationChanged(cb C.intptr_t, orientation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(orientation Orientation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (Orientation)(orientation)

	gofunc(slotval1)
}

func (this *QToolBar) IconSizeChanged(iconSize *QSize) {
	C.QToolBar_iconSizeChanged(this.h, iconSize.cPointer())
}
func (this *QToolBar) OnIconSizeChanged(slot func(iconSize *QSize)) {
	C.QToolBar_connect_iconSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_iconSizeChanged
func miqt_exec_callback_QToolBar_iconSizeChanged(cb C.intptr_t, iconSize *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(iconSize *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSize(iconSize)

	gofunc(slotval1)
}

func (this *QToolBar) ToolButtonStyleChanged(toolButtonStyle ToolButtonStyle) {
	C.QToolBar_toolButtonStyleChanged(this.h, (C.int)(toolButtonStyle))
}
func (this *QToolBar) OnToolButtonStyleChanged(slot func(toolButtonStyle ToolButtonStyle)) {
	C.QToolBar_connect_toolButtonStyleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_toolButtonStyleChanged
func miqt_exec_callback_QToolBar_toolButtonStyleChanged(cb C.intptr_t, toolButtonStyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(toolButtonStyle ToolButtonStyle))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ToolButtonStyle)(toolButtonStyle)

	gofunc(slotval1)
}

func (this *QToolBar) TopLevelChanged(topLevel bool) {
	C.QToolBar_topLevelChanged(this.h, (C.bool)(topLevel))
}
func (this *QToolBar) OnTopLevelChanged(slot func(topLevel bool)) {
	C.QToolBar_connect_topLevelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_topLevelChanged
func miqt_exec_callback_QToolBar_topLevelChanged(cb C.intptr_t, topLevel C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(topLevel bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(topLevel)

	gofunc(slotval1)
}

func (this *QToolBar) VisibilityChanged(visible bool) {
	C.QToolBar_visibilityChanged(this.h, (C.bool)(visible))
}
func (this *QToolBar) OnVisibilityChanged(slot func(visible bool)) {
	C.QToolBar_connect_visibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBar_visibilityChanged
func miqt_exec_callback_QToolBar_visibilityChanged(cb C.intptr_t, visible C.bool) {
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
	var _ms C.struct_miqt_string = C.QToolBar_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBar_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBar) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QToolBar_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QToolBar_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_actionEvent
func miqt_exec_callback_QToolBar_actionEvent(self *C.QToolBar, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QToolBar_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QToolBar_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_changeEvent
func miqt_exec_callback_QToolBar_changeEvent(self *C.QToolBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QToolBar_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QToolBar_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_paintEvent
func miqt_exec_callback_QToolBar_paintEvent(self *C.QToolBar, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QToolBar_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QToolBar) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QToolBar_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_event
func miqt_exec_callback_QToolBar_event(self *C.QToolBar, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_DevType() int {

	return (int)(C.QToolBar_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QToolBar) OnDevType(slot func(super func() int) int) {
	ok := C.QToolBar_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_devType
func miqt_exec_callback_QToolBar_devType(self *C.QToolBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_SetVisible(visible bool) {

	C.QToolBar_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QToolBar) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QToolBar_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_setVisible
func miqt_exec_callback_QToolBar_setVisible(self *C.QToolBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QToolBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QToolBar) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QToolBar_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBar) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QToolBar_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_sizeHint
func miqt_exec_callback_QToolBar_sizeHint(self *C.QToolBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QToolBar_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBar) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QToolBar_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_minimumSizeHint
func miqt_exec_callback_QToolBar_minimumSizeHint(self *C.QToolBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QToolBar_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QToolBar) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QToolBar_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_heightForWidth
func miqt_exec_callback_QToolBar_heightForWidth(self *C.QToolBar, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QToolBar_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QToolBar) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QToolBar_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_hasHeightForWidth
func miqt_exec_callback_QToolBar_hasHeightForWidth(self *C.QToolBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QToolBar_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QToolBar) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QToolBar_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_paintEngine
func miqt_exec_callback_QToolBar_paintEngine(self *C.QToolBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QToolBar_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QToolBar_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_mousePressEvent
func miqt_exec_callback_QToolBar_mousePressEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QToolBar_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QToolBar_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_mouseReleaseEvent
func miqt_exec_callback_QToolBar_mouseReleaseEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QToolBar_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QToolBar_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_mouseDoubleClickEvent
func miqt_exec_callback_QToolBar_mouseDoubleClickEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QToolBar_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QToolBar_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_mouseMoveEvent
func miqt_exec_callback_QToolBar_mouseMoveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QToolBar_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QToolBar_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_wheelEvent
func miqt_exec_callback_QToolBar_wheelEvent(self *C.QToolBar, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QToolBar_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QToolBar_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_keyPressEvent
func miqt_exec_callback_QToolBar_keyPressEvent(self *C.QToolBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QToolBar_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QToolBar_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_keyReleaseEvent
func miqt_exec_callback_QToolBar_keyReleaseEvent(self *C.QToolBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QToolBar_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QToolBar_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_focusInEvent
func miqt_exec_callback_QToolBar_focusInEvent(self *C.QToolBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QToolBar_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QToolBar_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_focusOutEvent
func miqt_exec_callback_QToolBar_focusOutEvent(self *C.QToolBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_EnterEvent(event *QEvent) {

	C.QToolBar_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QToolBar_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_enterEvent
func miqt_exec_callback_QToolBar_enterEvent(self *C.QToolBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QToolBar_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QToolBar_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_leaveEvent
func miqt_exec_callback_QToolBar_leaveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QToolBar_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QToolBar_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_moveEvent
func miqt_exec_callback_QToolBar_moveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QToolBar_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QToolBar_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_resizeEvent
func miqt_exec_callback_QToolBar_resizeEvent(self *C.QToolBar, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QToolBar_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QToolBar_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_closeEvent
func miqt_exec_callback_QToolBar_closeEvent(self *C.QToolBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QToolBar_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QToolBar_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_contextMenuEvent
func miqt_exec_callback_QToolBar_contextMenuEvent(self *C.QToolBar, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QToolBar_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QToolBar_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_tabletEvent
func miqt_exec_callback_QToolBar_tabletEvent(self *C.QToolBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QToolBar_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QToolBar_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_dragEnterEvent
func miqt_exec_callback_QToolBar_dragEnterEvent(self *C.QToolBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QToolBar_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QToolBar_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_dragMoveEvent
func miqt_exec_callback_QToolBar_dragMoveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QToolBar_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QToolBar_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_dragLeaveEvent
func miqt_exec_callback_QToolBar_dragLeaveEvent(self *C.QToolBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QToolBar_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QToolBar_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_dropEvent
func miqt_exec_callback_QToolBar_dropEvent(self *C.QToolBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QToolBar_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QToolBar_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_showEvent
func miqt_exec_callback_QToolBar_showEvent(self *C.QToolBar, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QToolBar_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QToolBar_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_hideEvent
func miqt_exec_callback_QToolBar_hideEvent(self *C.QToolBar, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QToolBar_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QToolBar) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QToolBar_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_nativeEvent
func miqt_exec_callback_QToolBar_nativeEvent(self *C.QToolBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	return (int)(C.QToolBar_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QToolBar) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QToolBar_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_metric
func miqt_exec_callback_QToolBar_metric(self *C.QToolBar, cb C.intptr_t, param1 C.int) C.int {
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

	C.QToolBar_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QToolBar) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QToolBar_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_initPainter
func miqt_exec_callback_QToolBar_initPainter(self *C.QToolBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QToolBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QToolBar) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QToolBar_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QToolBar) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QToolBar_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_redirected
func miqt_exec_callback_QToolBar_redirected(self *C.QToolBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QToolBar_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QToolBar) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QToolBar_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_sharedPainter
func miqt_exec_callback_QToolBar_sharedPainter(self *C.QToolBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QToolBar) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QToolBar_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolBar) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QToolBar_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_inputMethodEvent
func miqt_exec_callback_QToolBar_inputMethodEvent(self *C.QToolBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QToolBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QToolBar_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBar) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QToolBar_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_inputMethodQuery
func miqt_exec_callback_QToolBar_inputMethodQuery(self *C.QToolBar, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QToolBar_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QToolBar) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QToolBar_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_focusNextPrevChild
func miqt_exec_callback_QToolBar_focusNextPrevChild(self *C.QToolBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QToolBar_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QToolBar) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QToolBar_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_eventFilter
func miqt_exec_callback_QToolBar_eventFilter(self *C.QToolBar, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QToolBar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QToolBar) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QToolBar_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QToolBar_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_timerEvent
func miqt_exec_callback_QToolBar_timerEvent(self *C.QToolBar, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QToolBar_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QToolBar_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_childEvent
func miqt_exec_callback_QToolBar_childEvent(self *C.QToolBar, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_CustomEvent(event *QEvent) {

	C.QToolBar_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBar) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QToolBar_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_customEvent
func miqt_exec_callback_QToolBar_customEvent(self *C.QToolBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QToolBar{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QToolBar) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QToolBar_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QToolBar) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QToolBar_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_connectNotify
func miqt_exec_callback_QToolBar_connectNotify(self *C.QToolBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QToolBar{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QToolBar) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QToolBar_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QToolBar) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QToolBar_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBar_disconnectNotify
func miqt_exec_callback_QToolBar_disconnectNotify(self *C.QToolBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QToolBar{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QToolBar) Delete() {
	C.QToolBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
