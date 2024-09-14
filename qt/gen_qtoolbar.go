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

func newQToolBar(h *C.QToolBar) *QToolBar {
	if h == nil {
		return nil
	}
	return &QToolBar{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQToolBar_U(h unsafe.Pointer) *QToolBar {
	return newQToolBar((*C.QToolBar)(h))
}

// NewQToolBar constructs a new QToolBar object.
func NewQToolBar(title string) *QToolBar {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	ret := C.QToolBar_new((*C.struct_miqt_string)(title_ms))
	return newQToolBar(ret)
}

// NewQToolBar2 constructs a new QToolBar object.
func NewQToolBar2() *QToolBar {
	ret := C.QToolBar_new2()
	return newQToolBar(ret)
}

// NewQToolBar3 constructs a new QToolBar object.
func NewQToolBar3(title string, parent *QWidget) *QToolBar {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	ret := C.QToolBar_new3((*C.struct_miqt_string)(title_ms), parent.cPointer())
	return newQToolBar(ret)
}

// NewQToolBar4 constructs a new QToolBar object.
func NewQToolBar4(parent *QWidget) *QToolBar {
	ret := C.QToolBar_new4(parent.cPointer())
	return newQToolBar(ret)
}

func (this *QToolBar) MetaObject() *QMetaObject {
	_ret := C.QToolBar_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QToolBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBar_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBar_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QToolBar) SetMovable(movable bool) {
	C.QToolBar_SetMovable(this.h, (C.bool)(movable))
}

func (this *QToolBar) IsMovable() bool {
	_ret := C.QToolBar_IsMovable(this.h)
	return (bool)(_ret)
}

func (this *QToolBar) SetAllowedAreas(areas int) {
	C.QToolBar_SetAllowedAreas(this.h, (C.int)(areas))
}

func (this *QToolBar) AllowedAreas() int {
	_ret := C.QToolBar_AllowedAreas(this.h)
	return (int)(_ret)
}

func (this *QToolBar) IsAreaAllowed(area ToolBarArea) bool {
	_ret := C.QToolBar_IsAreaAllowed(this.h, (C.uintptr_t)(area))
	return (bool)(_ret)
}

func (this *QToolBar) SetOrientation(orientation Orientation) {
	C.QToolBar_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QToolBar) Orientation() Orientation {
	_ret := C.QToolBar_Orientation(this.h)
	return (Orientation)(_ret)
}

func (this *QToolBar) Clear() {
	C.QToolBar_Clear(this.h)
}

func (this *QToolBar) AddAction(text string) *QAction {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QToolBar_AddAction(this.h, (*C.struct_miqt_string)(text_ms))
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) AddAction2(icon *QIcon, text string) *QAction {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QToolBar_AddAction2(this.h, icon.cPointer(), (*C.struct_miqt_string)(text_ms))
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) AddSeparator() *QAction {
	_ret := C.QToolBar_AddSeparator(this.h)
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) InsertSeparator(before *QAction) *QAction {
	_ret := C.QToolBar_InsertSeparator(this.h, before.cPointer())
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) AddWidget(widget *QWidget) *QAction {
	_ret := C.QToolBar_AddWidget(this.h, widget.cPointer())
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) InsertWidget(before *QAction, widget *QWidget) *QAction {
	_ret := C.QToolBar_InsertWidget(this.h, before.cPointer(), widget.cPointer())
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) ActionGeometry(action *QAction) *QRect {
	_ret := C.QToolBar_ActionGeometry(this.h, action.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBar) ActionAt(p *QPoint) *QAction {
	_ret := C.QToolBar_ActionAt(this.h, p.cPointer())
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) ActionAt2(x int, y int) *QAction {
	_ret := C.QToolBar_ActionAt2(this.h, (C.int)(x), (C.int)(y))
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) ToggleViewAction() *QAction {
	_ret := C.QToolBar_ToggleViewAction(this.h)
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) IconSize() *QSize {
	_ret := C.QToolBar_IconSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBar) ToolButtonStyle() ToolButtonStyle {
	_ret := C.QToolBar_ToolButtonStyle(this.h)
	return (ToolButtonStyle)(_ret)
}

func (this *QToolBar) WidgetForAction(action *QAction) *QWidget {
	_ret := C.QToolBar_WidgetForAction(this.h, action.cPointer())
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QToolBar) IsFloatable() bool {
	_ret := C.QToolBar_IsFloatable(this.h)
	return (bool)(_ret)
}

func (this *QToolBar) SetFloatable(floatable bool) {
	C.QToolBar_SetFloatable(this.h, (C.bool)(floatable))
}

func (this *QToolBar) IsFloating() bool {
	_ret := C.QToolBar_IsFloating(this.h)
	return (bool)(_ret)
}

func (this *QToolBar) SetIconSize(iconSize *QSize) {
	C.QToolBar_SetIconSize(this.h, iconSize.cPointer())
}

func (this *QToolBar) SetToolButtonStyle(toolButtonStyle ToolButtonStyle) {
	C.QToolBar_SetToolButtonStyle(this.h, (C.uintptr_t)(toolButtonStyle))
}

func (this *QToolBar) ActionTriggered(action *QAction) {
	C.QToolBar_ActionTriggered(this.h, action.cPointer())
}
func (this *QToolBar) OnActionTriggered(slot func(action *QAction)) {
	C.QToolBar_connect_ActionTriggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolBar_ActionTriggered
func miqt_exec_callback_QToolBar_ActionTriggered(cb *C.void, action *C.QAction) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	action_ret := action
	slotval1 := newQAction_U(unsafe.Pointer(action_ret))

	gofunc(slotval1)
}

func (this *QToolBar) MovableChanged(movable bool) {
	C.QToolBar_MovableChanged(this.h, (C.bool)(movable))
}
func (this *QToolBar) OnMovableChanged(slot func(movable bool)) {
	C.QToolBar_connect_MovableChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolBar_MovableChanged
func miqt_exec_callback_QToolBar_MovableChanged(cb *C.void, movable C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(movable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	movable_ret := movable
	slotval1 := (bool)(movable_ret)

	gofunc(slotval1)
}

func (this *QToolBar) AllowedAreasChanged(allowedAreas int) {
	C.QToolBar_AllowedAreasChanged(this.h, (C.int)(allowedAreas))
}
func (this *QToolBar) OnAllowedAreasChanged(slot func(allowedAreas int)) {
	C.QToolBar_connect_AllowedAreasChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolBar_AllowedAreasChanged
func miqt_exec_callback_QToolBar_AllowedAreasChanged(cb *C.void, allowedAreas C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(allowedAreas int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	allowedAreas_ret := allowedAreas
	slotval1 := (int)(allowedAreas_ret)

	gofunc(slotval1)
}

func (this *QToolBar) OrientationChanged(orientation Orientation) {
	C.QToolBar_OrientationChanged(this.h, (C.uintptr_t)(orientation))
}
func (this *QToolBar) OnOrientationChanged(slot func(orientation Orientation)) {
	C.QToolBar_connect_OrientationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolBar_OrientationChanged
func miqt_exec_callback_QToolBar_OrientationChanged(cb *C.void, orientation C.uintptr_t) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(orientation Orientation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	orientation_ret := orientation
	slotval1 := (Orientation)(orientation_ret)

	gofunc(slotval1)
}

func (this *QToolBar) IconSizeChanged(iconSize *QSize) {
	C.QToolBar_IconSizeChanged(this.h, iconSize.cPointer())
}
func (this *QToolBar) OnIconSizeChanged(slot func(iconSize *QSize)) {
	C.QToolBar_connect_IconSizeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolBar_IconSizeChanged
func miqt_exec_callback_QToolBar_IconSizeChanged(cb *C.void, iconSize *C.QSize) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(iconSize *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	iconSize_ret := iconSize
	slotval1 := newQSize_U(unsafe.Pointer(iconSize_ret))

	gofunc(slotval1)
}

func (this *QToolBar) ToolButtonStyleChanged(toolButtonStyle ToolButtonStyle) {
	C.QToolBar_ToolButtonStyleChanged(this.h, (C.uintptr_t)(toolButtonStyle))
}
func (this *QToolBar) OnToolButtonStyleChanged(slot func(toolButtonStyle ToolButtonStyle)) {
	C.QToolBar_connect_ToolButtonStyleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolBar_ToolButtonStyleChanged
func miqt_exec_callback_QToolBar_ToolButtonStyleChanged(cb *C.void, toolButtonStyle C.uintptr_t) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(toolButtonStyle ToolButtonStyle))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	toolButtonStyle_ret := toolButtonStyle
	slotval1 := (ToolButtonStyle)(toolButtonStyle_ret)

	gofunc(slotval1)
}

func (this *QToolBar) TopLevelChanged(topLevel bool) {
	C.QToolBar_TopLevelChanged(this.h, (C.bool)(topLevel))
}
func (this *QToolBar) OnTopLevelChanged(slot func(topLevel bool)) {
	C.QToolBar_connect_TopLevelChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolBar_TopLevelChanged
func miqt_exec_callback_QToolBar_TopLevelChanged(cb *C.void, topLevel C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(topLevel bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	topLevel_ret := topLevel
	slotval1 := (bool)(topLevel_ret)

	gofunc(slotval1)
}

func (this *QToolBar) VisibilityChanged(visible bool) {
	C.QToolBar_VisibilityChanged(this.h, (C.bool)(visible))
}
func (this *QToolBar) OnVisibilityChanged(slot func(visible bool)) {
	C.QToolBar_connect_VisibilityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolBar_VisibilityChanged
func miqt_exec_callback_QToolBar_VisibilityChanged(cb *C.void, visible C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	visible_ret := visible
	slotval1 := (bool)(visible_ret)

	gofunc(slotval1)
}

func QToolBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBar_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
