package qt

/*

#include "gen_qaction.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAction__MenuRole int

const (
	QAction__MenuRole__NoRole                  QAction__MenuRole = 0
	QAction__MenuRole__TextHeuristicRole       QAction__MenuRole = 1
	QAction__MenuRole__ApplicationSpecificRole QAction__MenuRole = 2
	QAction__MenuRole__AboutQtRole             QAction__MenuRole = 3
	QAction__MenuRole__AboutRole               QAction__MenuRole = 4
	QAction__MenuRole__PreferencesRole         QAction__MenuRole = 5
	QAction__MenuRole__QuitRole                QAction__MenuRole = 6
)

type QAction__Priority int

const (
	QAction__Priority__LowPriority    QAction__Priority = 0
	QAction__Priority__NormalPriority QAction__Priority = 128
	QAction__Priority__HighPriority   QAction__Priority = 256
)

type QAction__ActionEvent int

const (
	QAction__ActionEvent__Trigger QAction__ActionEvent = 0
	QAction__ActionEvent__Hover   QAction__ActionEvent = 1
)

type QAction struct {
	h *C.QAction
	*QObject
}

func (this *QAction) cPointer() *C.QAction {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAction(h *C.QAction) *QAction {
	if h == nil {
		return nil
	}
	return &QAction{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAction_U(h unsafe.Pointer) *QAction {
	return newQAction((*C.QAction)(h))
}

// NewQAction constructs a new QAction object.
func NewQAction() *QAction {
	ret := C.QAction_new()
	return newQAction(ret)
}

// NewQAction2 constructs a new QAction object.
func NewQAction2(text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAction_new2(text_Cstring, C.size_t(len(text)))
	return newQAction(ret)
}

// NewQAction3 constructs a new QAction object.
func NewQAction3(icon *QIcon, text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAction_new3(icon.cPointer(), text_Cstring, C.size_t(len(text)))
	return newQAction(ret)
}

// NewQAction4 constructs a new QAction object.
func NewQAction4(parent *QObject) *QAction {
	ret := C.QAction_new4(parent.cPointer())
	return newQAction(ret)
}

// NewQAction5 constructs a new QAction object.
func NewQAction5(text string, parent *QObject) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAction_new5(text_Cstring, C.size_t(len(text)), parent.cPointer())
	return newQAction(ret)
}

// NewQAction6 constructs a new QAction object.
func NewQAction6(icon *QIcon, text string, parent *QObject) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAction_new6(icon.cPointer(), text_Cstring, C.size_t(len(text)), parent.cPointer())
	return newQAction(ret)
}

func (this *QAction) MetaObject() *QMetaObject {
	ret := C.QAction_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAction_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAction_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) SetActionGroup(group *QActionGroup) {
	C.QAction_SetActionGroup(this.h, group.cPointer())
}

func (this *QAction) ActionGroup() *QActionGroup {
	ret := C.QAction_ActionGroup(this.h)
	return newQActionGroup_U(unsafe.Pointer(ret))
}

func (this *QAction) SetIcon(icon *QIcon) {
	C.QAction_SetIcon(this.h, icon.cPointer())
}

func (this *QAction) Icon() *QIcon {
	ret := C.QAction_Icon(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAction) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QAction_SetText(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QAction) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) SetIconText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QAction_SetIconText(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QAction) IconText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_IconText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) SetToolTip(tip string) {
	tip_Cstring := C.CString(tip)
	defer C.free(unsafe.Pointer(tip_Cstring))
	C.QAction_SetToolTip(this.h, tip_Cstring, C.size_t(len(tip)))
}

func (this *QAction) ToolTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_ToolTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) SetStatusTip(statusTip string) {
	statusTip_Cstring := C.CString(statusTip)
	defer C.free(unsafe.Pointer(statusTip_Cstring))
	C.QAction_SetStatusTip(this.h, statusTip_Cstring, C.size_t(len(statusTip)))
}

func (this *QAction) StatusTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_StatusTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) SetWhatsThis(what string) {
	what_Cstring := C.CString(what)
	defer C.free(unsafe.Pointer(what_Cstring))
	C.QAction_SetWhatsThis(this.h, what_Cstring, C.size_t(len(what)))
}

func (this *QAction) WhatsThis() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_WhatsThis(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) SetPriority(priority QAction__Priority) {
	C.QAction_SetPriority(this.h, (C.uintptr_t)(priority))
}

func (this *QAction) Priority() QAction__Priority {
	ret := C.QAction_Priority(this.h)
	return (QAction__Priority)(ret)
}

func (this *QAction) Menu() *QMenu {
	ret := C.QAction_Menu(this.h)
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QAction) SetMenu(menu *QMenu) {
	C.QAction_SetMenu(this.h, menu.cPointer())
}

func (this *QAction) SetSeparator(b bool) {
	C.QAction_SetSeparator(this.h, (C.bool)(b))
}

func (this *QAction) IsSeparator() bool {
	ret := C.QAction_IsSeparator(this.h)
	return (bool)(ret)
}

func (this *QAction) SetShortcut(shortcut *QKeySequence) {
	C.QAction_SetShortcut(this.h, shortcut.cPointer())
}

func (this *QAction) Shortcut() *QKeySequence {
	ret := C.QAction_Shortcut(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQKeySequence(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QKeySequence) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAction) SetShortcuts(shortcuts []QKeySequence) {
	// For the C ABI, malloc a C array of raw pointers
	shortcuts_CArray := (*[0xffff]*C.QKeySequence)(C.malloc(C.size_t(8 * len(shortcuts))))
	defer C.free(unsafe.Pointer(shortcuts_CArray))
	for i := range shortcuts {
		shortcuts_CArray[i] = shortcuts[i].cPointer()
	}
	C.QAction_SetShortcuts(this.h, &shortcuts_CArray[0], C.size_t(len(shortcuts)))
}

func (this *QAction) SetShortcutsWithShortcuts(shortcuts QKeySequence__StandardKey) {
	C.QAction_SetShortcutsWithShortcuts(this.h, (C.uintptr_t)(shortcuts))
}

func (this *QAction) Shortcuts() []QKeySequence {
	var _out **C.QKeySequence = nil
	var _out_len C.size_t = 0
	C.QAction_Shortcuts(this.h, &_out, &_out_len)
	ret := make([]QKeySequence, int(_out_len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQKeySequence(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) SetShortcutContext(context ShortcutContext) {
	C.QAction_SetShortcutContext(this.h, (C.uintptr_t)(context))
}

func (this *QAction) ShortcutContext() ShortcutContext {
	ret := C.QAction_ShortcutContext(this.h)
	return (ShortcutContext)(ret)
}

func (this *QAction) SetAutoRepeat(autoRepeat bool) {
	C.QAction_SetAutoRepeat(this.h, (C.bool)(autoRepeat))
}

func (this *QAction) AutoRepeat() bool {
	ret := C.QAction_AutoRepeat(this.h)
	return (bool)(ret)
}

func (this *QAction) SetFont(font *QFont) {
	C.QAction_SetFont(this.h, font.cPointer())
}

func (this *QAction) Font() *QFont {
	ret := C.QAction_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAction) SetCheckable(checkable bool) {
	C.QAction_SetCheckable(this.h, (C.bool)(checkable))
}

func (this *QAction) IsCheckable() bool {
	ret := C.QAction_IsCheckable(this.h)
	return (bool)(ret)
}

func (this *QAction) Data() *QVariant {
	ret := C.QAction_Data(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAction) SetData(varVal *QVariant) {
	C.QAction_SetData(this.h, varVal.cPointer())
}

func (this *QAction) IsChecked() bool {
	ret := C.QAction_IsChecked(this.h)
	return (bool)(ret)
}

func (this *QAction) IsEnabled() bool {
	ret := C.QAction_IsEnabled(this.h)
	return (bool)(ret)
}

func (this *QAction) IsVisible() bool {
	ret := C.QAction_IsVisible(this.h)
	return (bool)(ret)
}

func (this *QAction) Activate(event QAction__ActionEvent) {
	C.QAction_Activate(this.h, (C.uintptr_t)(event))
}

func (this *QAction) ShowStatusText() bool {
	ret := C.QAction_ShowStatusText(this.h)
	return (bool)(ret)
}

func (this *QAction) SetMenuRole(menuRole QAction__MenuRole) {
	C.QAction_SetMenuRole(this.h, (C.uintptr_t)(menuRole))
}

func (this *QAction) MenuRole() QAction__MenuRole {
	ret := C.QAction_MenuRole(this.h)
	return (QAction__MenuRole)(ret)
}

func (this *QAction) SetIconVisibleInMenu(visible bool) {
	C.QAction_SetIconVisibleInMenu(this.h, (C.bool)(visible))
}

func (this *QAction) IsIconVisibleInMenu() bool {
	ret := C.QAction_IsIconVisibleInMenu(this.h)
	return (bool)(ret)
}

func (this *QAction) SetShortcutVisibleInContextMenu(show bool) {
	C.QAction_SetShortcutVisibleInContextMenu(this.h, (C.bool)(show))
}

func (this *QAction) IsShortcutVisibleInContextMenu() bool {
	ret := C.QAction_IsShortcutVisibleInContextMenu(this.h)
	return (bool)(ret)
}

func (this *QAction) ParentWidget() *QWidget {
	ret := C.QAction_ParentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QAction) AssociatedWidgets() []*QWidget {
	var _out **C.QWidget = nil
	var _out_len C.size_t = 0
	C.QAction_AssociatedWidgets(this.h, &_out, &_out_len)
	ret := make([]*QWidget, int(_out_len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQWidget(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) AssociatedGraphicsWidgets() []*QGraphicsWidget {
	var _out **C.QGraphicsWidget = nil
	var _out_len C.size_t = 0
	C.QAction_AssociatedGraphicsWidgets(this.h, &_out, &_out_len)
	ret := make([]*QGraphicsWidget, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsWidget)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsWidget(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) Trigger() {
	C.QAction_Trigger(this.h)
}

func (this *QAction) Hover() {
	C.QAction_Hover(this.h)
}

func (this *QAction) SetChecked(checked bool) {
	C.QAction_SetChecked(this.h, (C.bool)(checked))
}

func (this *QAction) Toggle() {
	C.QAction_Toggle(this.h)
}

func (this *QAction) SetEnabled(enabled bool) {
	C.QAction_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QAction) SetDisabled(b bool) {
	C.QAction_SetDisabled(this.h, (C.bool)(b))
}

func (this *QAction) SetVisible(visible bool) {
	C.QAction_SetVisible(this.h, (C.bool)(visible))
}

func (this *QAction) Changed() {
	C.QAction_Changed(this.h)
}

func (this *QAction) OnChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAction_connect_Changed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAction) Triggered() {
	C.QAction_Triggered(this.h)
}

func (this *QAction) Hovered() {
	C.QAction_Hovered(this.h)
}

func (this *QAction) OnHovered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAction_connect_Hovered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAction) Toggled(param1 bool) {
	C.QAction_Toggled(this.h, (C.bool)(param1))
}

func (this *QAction) OnToggled(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAction_connect_Toggled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QAction_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAction_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAction_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAction_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAction_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAction) ShowStatusText1(widget *QWidget) bool {
	ret := C.QAction_ShowStatusText1(this.h, widget.cPointer())
	return (bool)(ret)
}

func (this *QAction) Triggered1(checked bool) {
	C.QAction_Triggered1(this.h, (C.bool)(checked))
}

func (this *QAction) OnTriggered1(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAction_connect_Triggered1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAction) Delete() {
	C.QAction_Delete(this.h)
}
