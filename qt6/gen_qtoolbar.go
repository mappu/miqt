package qt6

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

func newQToolBar(h *C.QToolBar) *QToolBar {
	if h == nil {
		return nil
	}
	return &QToolBar{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQToolBar(h unsafe.Pointer) *QToolBar {
	return newQToolBar((*C.QToolBar)(h))
}

// NewQToolBar constructs a new QToolBar object.
func NewQToolBar(title string) *QToolBar {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	ret := C.QToolBar_new(title_ms)
	return newQToolBar(ret)
}

// NewQToolBar2 constructs a new QToolBar object.
func NewQToolBar2() *QToolBar {
	ret := C.QToolBar_new2()
	return newQToolBar(ret)
}

// NewQToolBar3 constructs a new QToolBar object.
func NewQToolBar3(title string, parent *QWidget) *QToolBar {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	ret := C.QToolBar_new3(title_ms, parent.cPointer())
	return newQToolBar(ret)
}

// NewQToolBar4 constructs a new QToolBar object.
func NewQToolBar4(parent *QWidget) *QToolBar {
	ret := C.QToolBar_new4(parent.cPointer())
	return newQToolBar(ret)
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

func (this *QToolBar) AddSeparator() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_AddSeparator(this.h)))
}

func (this *QToolBar) InsertSeparator(before *QAction) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_InsertSeparator(this.h, before.cPointer())))
}

func (this *QToolBar) AddWidget(widget *QWidget) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_AddWidget(this.h, widget.cPointer())))
}

func (this *QToolBar) InsertWidget(before *QAction, widget *QWidget) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_InsertWidget(this.h, before.cPointer(), widget.cPointer())))
}

func (this *QToolBar) ActionGeometry(action *QAction) *QRect {
	_ret := C.QToolBar_ActionGeometry(this.h, action.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBar) ActionAt(p *QPoint) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_ActionAt(this.h, p.cPointer())))
}

func (this *QToolBar) ActionAt2(x int, y int) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_ActionAt2(this.h, (C.int)(x), (C.int)(y))))
}

func (this *QToolBar) ToggleViewAction() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolBar_ToggleViewAction(this.h)))
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
	return UnsafeNewQWidget(unsafe.Pointer(C.QToolBar_WidgetForAction(this.h, action.cPointer())))
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
	slotval1 := UnsafeNewQAction(unsafe.Pointer(action))

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

// Delete this object from C++ memory.
func (this *QToolBar) Delete() {
	C.QToolBar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
