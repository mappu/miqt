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
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QToolBar_new(title_Cstring, C.ulong(len(title)))
	return newQToolBar(ret)
}

// NewQToolBar2 constructs a new QToolBar object.
func NewQToolBar2() *QToolBar {
	ret := C.QToolBar_new2()
	return newQToolBar(ret)
}

// NewQToolBar3 constructs a new QToolBar object.
func NewQToolBar3(title string, parent *QWidget) *QToolBar {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QToolBar_new3(title_Cstring, C.ulong(len(title)), parent.cPointer())
	return newQToolBar(ret)
}

// NewQToolBar4 constructs a new QToolBar object.
func NewQToolBar4(parent *QWidget) *QToolBar {
	ret := C.QToolBar_new4(parent.cPointer())
	return newQToolBar(ret)
}

func (this *QToolBar) MetaObject() *QMetaObject {
	ret := C.QToolBar_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QToolBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBar_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBar_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QToolBar) SetMovable(movable bool) {
	C.QToolBar_SetMovable(this.h, (C.bool)(movable))
}

func (this *QToolBar) IsMovable() bool {
	ret := C.QToolBar_IsMovable(this.h)
	return (bool)(ret)
}

func (this *QToolBar) SetAllowedAreas(areas int) {
	C.QToolBar_SetAllowedAreas(this.h, (C.int)(areas))
}

func (this *QToolBar) AllowedAreas() int {
	ret := C.QToolBar_AllowedAreas(this.h)
	return (int)(ret)
}

func (this *QToolBar) IsAreaAllowed(area uintptr) bool {
	ret := C.QToolBar_IsAreaAllowed(this.h, (C.uintptr_t)(area))
	return (bool)(ret)
}

func (this *QToolBar) SetOrientation(orientation uintptr) {
	C.QToolBar_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QToolBar) Orientation() uintptr {
	ret := C.QToolBar_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QToolBar) Clear() {
	C.QToolBar_Clear(this.h)
}

func (this *QToolBar) AddAction(text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QToolBar_AddAction(this.h, text_Cstring, C.ulong(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolBar) AddAction2(icon *QIcon, text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QToolBar_AddAction2(this.h, icon.cPointer(), text_Cstring, C.ulong(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolBar) AddSeparator() *QAction {
	ret := C.QToolBar_AddSeparator(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolBar) InsertSeparator(before *QAction) *QAction {
	ret := C.QToolBar_InsertSeparator(this.h, before.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolBar) AddWidget(widget *QWidget) *QAction {
	ret := C.QToolBar_AddWidget(this.h, widget.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolBar) InsertWidget(before *QAction, widget *QWidget) *QAction {
	ret := C.QToolBar_InsertWidget(this.h, before.cPointer(), widget.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolBar) ActionGeometry(action *QAction) *QRect {
	ret := C.QToolBar_ActionGeometry(this.h, action.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QToolBar) ActionAt(p *QPoint) *QAction {
	ret := C.QToolBar_ActionAt(this.h, p.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolBar) ActionAt2(x int, y int) *QAction {
	ret := C.QToolBar_ActionAt2(this.h, (C.int)(x), (C.int)(y))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolBar) ToggleViewAction() *QAction {
	ret := C.QToolBar_ToggleViewAction(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolBar) IconSize() *QSize {
	ret := C.QToolBar_IconSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QToolBar) ToolButtonStyle() uintptr {
	ret := C.QToolBar_ToolButtonStyle(this.h)
	return (uintptr)(ret)
}

func (this *QToolBar) WidgetForAction(action *QAction) *QWidget {
	ret := C.QToolBar_WidgetForAction(this.h, action.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QToolBar) IsFloatable() bool {
	ret := C.QToolBar_IsFloatable(this.h)
	return (bool)(ret)
}

func (this *QToolBar) SetFloatable(floatable bool) {
	C.QToolBar_SetFloatable(this.h, (C.bool)(floatable))
}

func (this *QToolBar) IsFloating() bool {
	ret := C.QToolBar_IsFloating(this.h)
	return (bool)(ret)
}

func (this *QToolBar) SetIconSize(iconSize *QSize) {
	C.QToolBar_SetIconSize(this.h, iconSize.cPointer())
}

func (this *QToolBar) SetToolButtonStyle(toolButtonStyle uintptr) {
	C.QToolBar_SetToolButtonStyle(this.h, (C.uintptr_t)(toolButtonStyle))
}

func (this *QToolBar) ActionTriggered(action *QAction) {
	C.QToolBar_ActionTriggered(this.h, action.cPointer())
}

func (this *QToolBar) OnActionTriggered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolBar_connect_ActionTriggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QToolBar) MovableChanged(movable bool) {
	C.QToolBar_MovableChanged(this.h, (C.bool)(movable))
}

func (this *QToolBar) OnMovableChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolBar_connect_MovableChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QToolBar) AllowedAreasChanged(allowedAreas int) {
	C.QToolBar_AllowedAreasChanged(this.h, (C.int)(allowedAreas))
}

func (this *QToolBar) OnAllowedAreasChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolBar_connect_AllowedAreasChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QToolBar) OrientationChanged(orientation uintptr) {
	C.QToolBar_OrientationChanged(this.h, (C.uintptr_t)(orientation))
}

func (this *QToolBar) OnOrientationChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolBar_connect_OrientationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QToolBar) IconSizeChanged(iconSize *QSize) {
	C.QToolBar_IconSizeChanged(this.h, iconSize.cPointer())
}

func (this *QToolBar) OnIconSizeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolBar_connect_IconSizeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QToolBar) ToolButtonStyleChanged(toolButtonStyle uintptr) {
	C.QToolBar_ToolButtonStyleChanged(this.h, (C.uintptr_t)(toolButtonStyle))
}

func (this *QToolBar) OnToolButtonStyleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolBar_connect_ToolButtonStyleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QToolBar) TopLevelChanged(topLevel bool) {
	C.QToolBar_TopLevelChanged(this.h, (C.bool)(topLevel))
}

func (this *QToolBar) OnTopLevelChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolBar_connect_TopLevelChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QToolBar) VisibilityChanged(visible bool) {
	C.QToolBar_VisibilityChanged(this.h, (C.bool)(visible))
}

func (this *QToolBar) OnVisibilityChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolBar_connect_VisibilityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QToolBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBar_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBar_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBar_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QToolBar) Delete() {
	C.QToolBar_Delete(this.h)
}
