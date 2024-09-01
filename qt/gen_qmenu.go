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
	h *C.QMenu
	*QWidget
}

func (this *QMenu) cPointer() *C.QMenu {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMenu(h *C.QMenu) *QMenu {
	if h == nil {
		return nil
	}
	return &QMenu{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQMenu_U(h unsafe.Pointer) *QMenu {
	return newQMenu((*C.QMenu)(h))
}

// NewQMenu constructs a new QMenu object.
func NewQMenu() *QMenu {
	ret := C.QMenu_new()
	return newQMenu(ret)
}

// NewQMenu2 constructs a new QMenu object.
func NewQMenu2(title string) *QMenu {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QMenu_new2(title_Cstring, C.ulong(len(title)))
	return newQMenu(ret)
}

// NewQMenu3 constructs a new QMenu object.
func NewQMenu3(parent *QWidget) *QMenu {
	ret := C.QMenu_new3(parent.cPointer())
	return newQMenu(ret)
}

// NewQMenu4 constructs a new QMenu object.
func NewQMenu4(title string, parent *QWidget) *QMenu {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QMenu_new4(title_Cstring, C.ulong(len(title)), parent.cPointer())
	return newQMenu(ret)
}

func (this *QMenu) MetaObject() *QMetaObject {
	ret := C.QMenu_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMenu_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenu_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMenu_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenu_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMenu) AddAction(text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMenu_AddAction(this.h, text_Cstring, C.ulong(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) AddAction2(icon *QIcon, text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMenu_AddAction2(this.h, icon.cPointer(), text_Cstring, C.ulong(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) AddMenu(menu *QMenu) *QAction {
	ret := C.QMenu_AddMenu(this.h, menu.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) AddMenuWithTitle(title string) *QMenu {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QMenu_AddMenuWithTitle(this.h, title_Cstring, C.ulong(len(title)))
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QMenu) AddMenu2(icon *QIcon, title string) *QMenu {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QMenu_AddMenu2(this.h, icon.cPointer(), title_Cstring, C.ulong(len(title)))
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QMenu) AddSeparator() *QAction {
	ret := C.QMenu_AddSeparator(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) AddSection(text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMenu_AddSection(this.h, text_Cstring, C.ulong(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) AddSection2(icon *QIcon, text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMenu_AddSection2(this.h, icon.cPointer(), text_Cstring, C.ulong(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) InsertMenu(before *QAction, menu *QMenu) *QAction {
	ret := C.QMenu_InsertMenu(this.h, before.cPointer(), menu.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) InsertSeparator(before *QAction) *QAction {
	ret := C.QMenu_InsertSeparator(this.h, before.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) InsertSection(before *QAction, text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMenu_InsertSection(this.h, before.cPointer(), text_Cstring, C.ulong(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) InsertSection2(before *QAction, icon *QIcon, text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMenu_InsertSection2(this.h, before.cPointer(), icon.cPointer(), text_Cstring, C.ulong(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) IsEmpty() bool {
	ret := C.QMenu_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QMenu) Clear() {
	C.QMenu_Clear(this.h)
}

func (this *QMenu) SetTearOffEnabled(tearOffEnabled bool) {
	C.QMenu_SetTearOffEnabled(this.h, (C.bool)(tearOffEnabled))
}

func (this *QMenu) IsTearOffEnabled() bool {
	ret := C.QMenu_IsTearOffEnabled(this.h)
	return (bool)(ret)
}

func (this *QMenu) IsTearOffMenuVisible() bool {
	ret := C.QMenu_IsTearOffMenuVisible(this.h)
	return (bool)(ret)
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
	ret := C.QMenu_DefaultAction(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) SetActiveAction(act *QAction) {
	C.QMenu_SetActiveAction(this.h, act.cPointer())
}

func (this *QMenu) ActiveAction() *QAction {
	ret := C.QMenu_ActiveAction(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) Popup(pos *QPoint) {
	C.QMenu_Popup(this.h, pos.cPointer())
}

func (this *QMenu) Exec() *QAction {
	ret := C.QMenu_Exec(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) ExecWithPos(pos *QPoint) *QAction {
	ret := C.QMenu_ExecWithPos(this.h, pos.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func QMenu_Exec2(actions []*QAction, pos *QPoint) *QAction {
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	ret := C.QMenu_Exec2(&actions_CArray[0], C.ulong(len(actions)), pos.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) SizeHint() *QSize {
	ret := C.QMenu_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMenu) ActionGeometry(param1 *QAction) *QRect {
	ret := C.QMenu_ActionGeometry(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMenu) ActionAt(param1 *QPoint) *QAction {
	ret := C.QMenu_ActionAt(this.h, param1.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) MenuAction() *QAction {
	ret := C.QMenu_MenuAction(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) Title() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenu_Title(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMenu) SetTitle(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QMenu_SetTitle(this.h, title_Cstring, C.ulong(len(title)))
}

func (this *QMenu) Icon() *QIcon {
	ret := C.QMenu_Icon(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMenu) SetIcon(icon *QIcon) {
	C.QMenu_SetIcon(this.h, icon.cPointer())
}

func (this *QMenu) SetNoReplayFor(widget *QWidget) {
	C.QMenu_SetNoReplayFor(this.h, widget.cPointer())
}

func (this *QMenu) SeparatorsCollapsible() bool {
	ret := C.QMenu_SeparatorsCollapsible(this.h)
	return (bool)(ret)
}

func (this *QMenu) SetSeparatorsCollapsible(collapse bool) {
	C.QMenu_SetSeparatorsCollapsible(this.h, (C.bool)(collapse))
}

func (this *QMenu) ToolTipsVisible() bool {
	ret := C.QMenu_ToolTipsVisible(this.h)
	return (bool)(ret)
}

func (this *QMenu) SetToolTipsVisible(visible bool) {
	C.QMenu_SetToolTipsVisible(this.h, (C.bool)(visible))
}

func (this *QMenu) AboutToShow() {
	C.QMenu_AboutToShow(this.h)
}

func (this *QMenu) OnAboutToShow(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMenu_connect_AboutToShow(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMenu) AboutToHide() {
	C.QMenu_AboutToHide(this.h)
}

func (this *QMenu) OnAboutToHide(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMenu_connect_AboutToHide(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMenu) Triggered(action *QAction) {
	C.QMenu_Triggered(this.h, action.cPointer())
}

func (this *QMenu) OnTriggered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMenu_connect_Triggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMenu) Hovered(action *QAction) {
	C.QMenu_Hovered(this.h, action.cPointer())
}

func (this *QMenu) OnHovered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMenu_connect_Hovered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QMenu_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenu_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMenu_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenu_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMenu_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenu_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMenu_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenu_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMenu) Popup2(pos *QPoint, at *QAction) {
	C.QMenu_Popup2(this.h, pos.cPointer(), at.cPointer())
}

func (this *QMenu) Exec22(pos *QPoint, at *QAction) *QAction {
	ret := C.QMenu_Exec22(this.h, pos.cPointer(), at.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func QMenu_Exec3(actions []*QAction, pos *QPoint, at *QAction) *QAction {
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	ret := C.QMenu_Exec3(&actions_CArray[0], C.ulong(len(actions)), pos.cPointer(), at.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func QMenu_Exec4(actions []*QAction, pos *QPoint, at *QAction, parent *QWidget) *QAction {
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	ret := C.QMenu_Exec4(&actions_CArray[0], C.ulong(len(actions)), pos.cPointer(), at.cPointer(), parent.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenu) Delete() {
	C.QMenu_Delete(this.h)
}
