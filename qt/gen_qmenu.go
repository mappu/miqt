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

func (this *QMenu) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMenu(h *C.QMenu) *QMenu {
	if h == nil {
		return nil
	}
	return &QMenu{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQMenu(h unsafe.Pointer) *QMenu {
	return newQMenu((*C.QMenu)(h))
}

// NewQMenu constructs a new QMenu object.
func NewQMenu(parent *QWidget) *QMenu {
	ret := C.QMenu_new(parent.cPointer())
	return newQMenu(ret)
}

// NewQMenu2 constructs a new QMenu object.
func NewQMenu2() *QMenu {
	ret := C.QMenu_new2()
	return newQMenu(ret)
}

// NewQMenu3 constructs a new QMenu object.
func NewQMenu3(title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	ret := C.QMenu_new3(title_ms)
	return newQMenu(ret)
}

// NewQMenu4 constructs a new QMenu object.
func NewQMenu4(title string, parent *QWidget) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	ret := C.QMenu_new4(title_ms, parent.cPointer())
	return newQMenu(ret)
}

func (this *QMenu) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMenu_MetaObject(this.h)))
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
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_AddAction(this.h, text_ms)))
}

func (this *QMenu) AddAction2(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_AddAction2(this.h, icon.cPointer(), text_ms)))
}

func (this *QMenu) AddMenu(menu *QMenu) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_AddMenu(this.h, menu.cPointer())))
}

func (this *QMenu) AddMenuWithTitle(title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return UnsafeNewQMenu(unsafe.Pointer(C.QMenu_AddMenuWithTitle(this.h, title_ms)))
}

func (this *QMenu) AddMenu2(icon *QIcon, title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return UnsafeNewQMenu(unsafe.Pointer(C.QMenu_AddMenu2(this.h, icon.cPointer(), title_ms)))
}

func (this *QMenu) AddSeparator() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_AddSeparator(this.h)))
}

func (this *QMenu) AddSection(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_AddSection(this.h, text_ms)))
}

func (this *QMenu) AddSection2(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_AddSection2(this.h, icon.cPointer(), text_ms)))
}

func (this *QMenu) InsertMenu(before *QAction, menu *QMenu) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_InsertMenu(this.h, before.cPointer(), menu.cPointer())))
}

func (this *QMenu) InsertSeparator(before *QAction) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_InsertSeparator(this.h, before.cPointer())))
}

func (this *QMenu) InsertSection(before *QAction, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_InsertSection(this.h, before.cPointer(), text_ms)))
}

func (this *QMenu) InsertSection2(before *QAction, icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_InsertSection2(this.h, before.cPointer(), icon.cPointer(), text_ms)))
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
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_DefaultAction(this.h)))
}

func (this *QMenu) SetActiveAction(act *QAction) {
	C.QMenu_SetActiveAction(this.h, act.cPointer())
}

func (this *QMenu) ActiveAction() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_ActiveAction(this.h)))
}

func (this *QMenu) Popup(pos *QPoint) {
	C.QMenu_Popup(this.h, pos.cPointer())
}

func (this *QMenu) Exec() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_Exec(this.h)))
}

func (this *QMenu) ExecWithPos(pos *QPoint) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_ExecWithPos(this.h, pos.cPointer())))
}

func QMenu_Exec2(actions []*QAction, pos *QPoint) *QAction {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_Exec2(actions_ma, pos.cPointer())))
}

func (this *QMenu) SizeHint() *QSize {
	_ret := C.QMenu_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenu) ActionGeometry(param1 *QAction) *QRect {
	_ret := C.QMenu_ActionGeometry(this.h, param1.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenu) ActionAt(param1 *QPoint) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_ActionAt(this.h, param1.cPointer())))
}

func (this *QMenu) MenuAction() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_MenuAction(this.h)))
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
	_ret := C.QMenu_Icon(this.h)
	_goptr := newQIcon(_ret)
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
	slotval1 := UnsafeNewQAction(unsafe.Pointer(action))

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
	slotval1 := UnsafeNewQAction(unsafe.Pointer(action))

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
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_Exec22(this.h, pos.cPointer(), at.cPointer())))
}

func QMenu_Exec3(actions []*QAction, pos *QPoint, at *QAction) *QAction {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_Exec3(actions_ma, pos.cPointer(), at.cPointer())))
}

func QMenu_Exec4(actions []*QAction, pos *QPoint, at *QAction, parent *QWidget) *QAction {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	return UnsafeNewQAction(unsafe.Pointer(C.QMenu_Exec4(actions_ma, pos.cPointer(), at.cPointer(), parent.cPointer())))
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
