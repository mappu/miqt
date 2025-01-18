package qt

/*

#include "gen_qmenu.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMenu struct {
	h          *C.QMenu
	isSubclass bool
	*QWidget
}

func (this *QMenu) cPointer() *C.QMenu {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMenu) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMenu constructs the type using only CGO pointers.
func newQMenu(h *C.QMenu) *QMenu {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QMenu_virtbase(h, &outptr_QWidget)

	return &QMenu{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQMenu constructs the type using only unsafe pointers.
func UnsafeNewQMenu(h unsafe.Pointer) *QMenu {
	return newQMenu((*C.QMenu)(h))
}

// NewQMenu constructs a new QMenu object.
func NewQMenu(parent *QWidget) *QMenu {

	ret := newQMenu(C.QMenu_new(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQMenu2 constructs a new QMenu object.
func NewQMenu2() *QMenu {

	ret := newQMenu(C.QMenu_new2())
	ret.isSubclass = true
	return ret
}

// NewQMenu3 constructs a new QMenu object.
func NewQMenu3(title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	ret := newQMenu(C.QMenu_new3(title_ms))
	ret.isSubclass = true
	return ret
}

// NewQMenu4 constructs a new QMenu object.
func NewQMenu4(title string, parent *QWidget) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	ret := newQMenu(C.QMenu_new4(title_ms, parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QMenu) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMenu_MetaObject(this.h))
}

func (this *QMenu) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMenu_Metacast(this.h, param1_Cstring))
}

func QMenu_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenu_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenu) AddAction(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_AddAction(this.h, text_ms))
}

func (this *QMenu) AddAction2(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_AddAction2(this.h, icon.cPointer(), text_ms))
}

func (this *QMenu) AddMenu(menu *QMenu) *QAction {
	return newQAction(C.QMenu_AddMenu(this.h, menu.cPointer()))
}

func (this *QMenu) AddMenuWithTitle(title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return newQMenu(C.QMenu_AddMenuWithTitle(this.h, title_ms))
}

func (this *QMenu) AddMenu2(icon *QIcon, title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return newQMenu(C.QMenu_AddMenu2(this.h, icon.cPointer(), title_ms))
}

func (this *QMenu) AddSeparator() *QAction {
	return newQAction(C.QMenu_AddSeparator(this.h))
}

func (this *QMenu) AddSection(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_AddSection(this.h, text_ms))
}

func (this *QMenu) AddSection2(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_AddSection2(this.h, icon.cPointer(), text_ms))
}

func (this *QMenu) InsertMenu(before *QAction, menu *QMenu) *QAction {
	return newQAction(C.QMenu_InsertMenu(this.h, before.cPointer(), menu.cPointer()))
}

func (this *QMenu) InsertSeparator(before *QAction) *QAction {
	return newQAction(C.QMenu_InsertSeparator(this.h, before.cPointer()))
}

func (this *QMenu) InsertSection(before *QAction, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_InsertSection(this.h, before.cPointer(), text_ms))
}

func (this *QMenu) InsertSection2(before *QAction, icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_InsertSection2(this.h, before.cPointer(), icon.cPointer(), text_ms))
}

func (this *QMenu) IsEmpty() bool {
	return (bool)(C.QMenu_IsEmpty(this.h))
}

func (this *QMenu) Clear() {
	C.QMenu_Clear(this.h)
}

func (this *QMenu) SetTearOffEnabled(tearOffEnabled bool) {
	C.QMenu_SetTearOffEnabled(this.h, (C.bool)(tearOffEnabled))
}

func (this *QMenu) IsTearOffEnabled() bool {
	return (bool)(C.QMenu_IsTearOffEnabled(this.h))
}

func (this *QMenu) IsTearOffMenuVisible() bool {
	return (bool)(C.QMenu_IsTearOffMenuVisible(this.h))
}

func (this *QMenu) ShowTearOffMenu() {
	C.QMenu_ShowTearOffMenu(this.h)
}

func (this *QMenu) ShowTearOffMenuWithPos(pos *QPoint) {
	C.QMenu_ShowTearOffMenuWithPos(this.h, pos.cPointer())
}

func (this *QMenu) HideTearOffMenu() {
	C.QMenu_HideTearOffMenu(this.h)
}

func (this *QMenu) SetDefaultAction(defaultAction *QAction) {
	C.QMenu_SetDefaultAction(this.h, defaultAction.cPointer())
}

func (this *QMenu) DefaultAction() *QAction {
	return newQAction(C.QMenu_DefaultAction(this.h))
}

func (this *QMenu) SetActiveAction(act *QAction) {
	C.QMenu_SetActiveAction(this.h, act.cPointer())
}

func (this *QMenu) ActiveAction() *QAction {
	return newQAction(C.QMenu_ActiveAction(this.h))
}

func (this *QMenu) Popup(pos *QPoint) {
	C.QMenu_Popup(this.h, pos.cPointer())
}

func (this *QMenu) Exec() *QAction {
	return newQAction(C.QMenu_Exec(this.h))
}

func (this *QMenu) ExecWithPos(pos *QPoint) *QAction {
	return newQAction(C.QMenu_ExecWithPos(this.h, pos.cPointer()))
}

func QMenu_Exec2(actions []*QAction, pos *QPoint) *QAction {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	return newQAction(C.QMenu_Exec2(actions_ma, pos.cPointer()))
}

func (this *QMenu) SizeHint() *QSize {
	_goptr := newQSize(C.QMenu_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenu) ActionGeometry(param1 *QAction) *QRect {
	_goptr := newQRect(C.QMenu_ActionGeometry(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenu) ActionAt(param1 *QPoint) *QAction {
	return newQAction(C.QMenu_ActionAt(this.h, param1.cPointer()))
}

func (this *QMenu) MenuAction() *QAction {
	return newQAction(C.QMenu_MenuAction(this.h))
}

func (this *QMenu) Title() string {
	var _ms C.struct_miqt_string = C.QMenu_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenu) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QMenu_SetTitle(this.h, title_ms)
}

func (this *QMenu) Icon() *QIcon {
	_goptr := newQIcon(C.QMenu_Icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenu) SetIcon(icon *QIcon) {
	C.QMenu_SetIcon(this.h, icon.cPointer())
}

func (this *QMenu) SetNoReplayFor(widget *QWidget) {
	C.QMenu_SetNoReplayFor(this.h, widget.cPointer())
}

func (this *QMenu) SeparatorsCollapsible() bool {
	return (bool)(C.QMenu_SeparatorsCollapsible(this.h))
}

func (this *QMenu) SetSeparatorsCollapsible(collapse bool) {
	C.QMenu_SetSeparatorsCollapsible(this.h, (C.bool)(collapse))
}

func (this *QMenu) ToolTipsVisible() bool {
	return (bool)(C.QMenu_ToolTipsVisible(this.h))
}

func (this *QMenu) SetToolTipsVisible(visible bool) {
	C.QMenu_SetToolTipsVisible(this.h, (C.bool)(visible))
}

func (this *QMenu) AboutToShow() {
	C.QMenu_AboutToShow(this.h)
}
func (this *QMenu) OnAboutToShow(slot func()) {
	C.QMenu_connect_AboutToShow(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_AboutToShow
func miqt_exec_callback_QMenu_AboutToShow(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMenu) AboutToHide() {
	C.QMenu_AboutToHide(this.h)
}
func (this *QMenu) OnAboutToHide(slot func()) {
	C.QMenu_connect_AboutToHide(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_AboutToHide
func miqt_exec_callback_QMenu_AboutToHide(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMenu) Triggered(action *QAction) {
	C.QMenu_Triggered(this.h, action.cPointer())
}
func (this *QMenu) OnTriggered(slot func(action *QAction)) {
	C.QMenu_connect_Triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_Triggered
func miqt_exec_callback_QMenu_Triggered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction(action)

	gofunc(slotval1)
}

func (this *QMenu) Hovered(action *QAction) {
	C.QMenu_Hovered(this.h, action.cPointer())
}
func (this *QMenu) OnHovered(slot func(action *QAction)) {
	C.QMenu_connect_Hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_Hovered
func miqt_exec_callback_QMenu_Hovered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction(action)

	gofunc(slotval1)
}

func QMenu_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenu_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenu_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenu_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenu) Popup2(pos *QPoint, at *QAction) {
	C.QMenu_Popup2(this.h, pos.cPointer(), at.cPointer())
}

func (this *QMenu) Exec22(pos *QPoint, at *QAction) *QAction {
	return newQAction(C.QMenu_Exec22(this.h, pos.cPointer(), at.cPointer()))
}

func QMenu_Exec3(actions []*QAction, pos *QPoint, at *QAction) *QAction {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	return newQAction(C.QMenu_Exec3(actions_ma, pos.cPointer(), at.cPointer()))
}

func QMenu_Exec4(actions []*QAction, pos *QPoint, at *QAction, parent *QWidget) *QAction {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	return newQAction(C.QMenu_Exec4(actions_ma, pos.cPointer(), at.cPointer(), parent.cPointer()))
}

func (this *QMenu) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QMenu_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenu) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_SizeHint
func miqt_exec_callback_QMenu_SizeHint(self *C.QMenu, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QMenu_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_ChangeEvent
func miqt_exec_callback_QMenu_ChangeEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMenu) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QMenu_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_KeyPressEvent
func miqt_exec_callback_QMenu_KeyPressEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMenu) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QMenu_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_MouseReleaseEvent
func miqt_exec_callback_QMenu_MouseReleaseEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMenu) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QMenu_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_MousePressEvent
func miqt_exec_callback_QMenu_MousePressEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMenu) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QMenu_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_MouseMoveEvent
func miqt_exec_callback_QMenu_MouseMoveEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QMenu_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_WheelEvent
func miqt_exec_callback_QMenu_WheelEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMenu) callVirtualBase_EnterEvent(param1 *QEvent) {

	C.QMenu_virtualbase_EnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnEnterEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_EnterEvent
func miqt_exec_callback_QMenu_EnterEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QMenu) callVirtualBase_LeaveEvent(param1 *QEvent) {

	C.QMenu_virtualbase_LeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnLeaveEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_LeaveEvent
func miqt_exec_callback_QMenu_LeaveEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QMenu_virtualbase_HideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnHideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_HideEvent
func miqt_exec_callback_QMenu_HideEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QMenu) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QMenu_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_PaintEvent
func miqt_exec_callback_QMenu_PaintEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMenu) callVirtualBase_ActionEvent(param1 *QActionEvent) {

	C.QMenu_virtualbase_ActionEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnActionEvent(slot func(super func(param1 *QActionEvent), param1 *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_ActionEvent
func miqt_exec_callback_QMenu_ActionEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QActionEvent), param1 *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QMenu) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QMenu_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_TimerEvent
func miqt_exec_callback_QMenu_TimerEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMenu) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QMenu_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QMenu) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_Event
func miqt_exec_callback_QMenu_Event(self *C.QMenu, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMenu) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QMenu_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QMenu) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_FocusNextPrevChild
func miqt_exec_callback_QMenu_FocusNextPrevChild(self *C.QMenu, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMenu) callVirtualBase_DevType() int {

	return (int)(C.QMenu_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QMenu) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_DevType
func miqt_exec_callback_QMenu_DevType(self *C.QMenu, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QMenu) callVirtualBase_SetVisible(visible bool) {

	C.QMenu_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMenu) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_SetVisible
func miqt_exec_callback_QMenu_SetVisible(self *C.QMenu, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMenu{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMenu) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QMenu_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenu) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_MinimumSizeHint
func miqt_exec_callback_QMenu_MinimumSizeHint(self *C.QMenu, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QMenu_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMenu) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_HeightForWidth
func miqt_exec_callback_QMenu_HeightForWidth(self *C.QMenu, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMenu) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QMenu_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QMenu) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_HasHeightForWidth
func miqt_exec_callback_QMenu_HasHeightForWidth(self *C.QMenu, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QMenu) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QMenu_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QMenu) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_PaintEngine
func miqt_exec_callback_QMenu_PaintEngine(self *C.QMenu, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QMenu_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_MouseDoubleClickEvent
func miqt_exec_callback_QMenu_MouseDoubleClickEvent(self *C.QMenu, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMenu) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QMenu_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_KeyReleaseEvent
func miqt_exec_callback_QMenu_KeyReleaseEvent(self *C.QMenu, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QMenu) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QMenu_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_FocusInEvent
func miqt_exec_callback_QMenu_FocusInEvent(self *C.QMenu, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QMenu) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QMenu_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_FocusOutEvent
func miqt_exec_callback_QMenu_FocusOutEvent(self *C.QMenu, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QMenu) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QMenu_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_MoveEvent
func miqt_exec_callback_QMenu_MoveEvent(self *C.QMenu, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QMenu_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_ResizeEvent
func miqt_exec_callback_QMenu_ResizeEvent(self *C.QMenu, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMenu) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QMenu_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_CloseEvent
func miqt_exec_callback_QMenu_CloseEvent(self *C.QMenu, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMenu) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QMenu_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_ContextMenuEvent
func miqt_exec_callback_QMenu_ContextMenuEvent(self *C.QMenu, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMenu) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QMenu_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_TabletEvent
func miqt_exec_callback_QMenu_TabletEvent(self *C.QMenu, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QMenu) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QMenu_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_DragEnterEvent
func miqt_exec_callback_QMenu_DragEnterEvent(self *C.QMenu, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMenu) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QMenu_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_DragMoveEvent
func miqt_exec_callback_QMenu_DragMoveEvent(self *C.QMenu, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QMenu_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_DragLeaveEvent
func miqt_exec_callback_QMenu_DragLeaveEvent(self *C.QMenu, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QMenu_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_DropEvent
func miqt_exec_callback_QMenu_DropEvent(self *C.QMenu, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMenu) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QMenu_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_ShowEvent
func miqt_exec_callback_QMenu_ShowEvent(self *C.QMenu, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMenu) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QMenu_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QMenu) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_NativeEvent
func miqt_exec_callback_QMenu_NativeEvent(self *C.QMenu, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QMenu) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QMenu_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMenu) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_Metric
func miqt_exec_callback_QMenu_Metric(self *C.QMenu, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMenu) callVirtualBase_InitPainter(painter *QPainter) {

	C.QMenu_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QMenu) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_InitPainter
func miqt_exec_callback_QMenu_InitPainter(self *C.QMenu, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QMenu{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QMenu) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QMenu_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QMenu) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_Redirected
func miqt_exec_callback_QMenu_Redirected(self *C.QMenu, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QMenu_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QMenu) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_SharedPainter
func miqt_exec_callback_QMenu_SharedPainter(self *C.QMenu, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QMenu_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_InputMethodEvent
func miqt_exec_callback_QMenu_InputMethodEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QMenu) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QMenu_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenu) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMenu_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_InputMethodQuery
func miqt_exec_callback_QMenu_InputMethodQuery(self *C.QMenu, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QMenu) Delete() {
	C.QMenu_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMenu) GoGC() {
	runtime.SetFinalizer(this, func(this *QMenu) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
