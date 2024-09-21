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
	QAction__NoRole                  QAction__MenuRole = 0
	QAction__TextHeuristicRole       QAction__MenuRole = 1
	QAction__ApplicationSpecificRole QAction__MenuRole = 2
	QAction__AboutQtRole             QAction__MenuRole = 3
	QAction__AboutRole               QAction__MenuRole = 4
	QAction__PreferencesRole         QAction__MenuRole = 5
	QAction__QuitRole                QAction__MenuRole = 6
)

type QAction__Priority int

const (
	QAction__LowPriority    QAction__Priority = 0
	QAction__NormalPriority QAction__Priority = 128
	QAction__HighPriority   QAction__Priority = 256
)

type QAction__ActionEvent int

const (
	QAction__Trigger QAction__ActionEvent = 0
	QAction__Hover   QAction__ActionEvent = 1
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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QAction_new2((*C.struct_miqt_string)(text_ms))
	return newQAction(ret)
}

// NewQAction3 constructs a new QAction object.
func NewQAction3(icon *QIcon, text string) *QAction {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QAction_new3(icon.cPointer(), (*C.struct_miqt_string)(text_ms))
	return newQAction(ret)
}

// NewQAction4 constructs a new QAction object.
func NewQAction4(parent *QObject) *QAction {
	ret := C.QAction_new4(parent.cPointer())
	return newQAction(ret)
}

// NewQAction5 constructs a new QAction object.
func NewQAction5(text string, parent *QObject) *QAction {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QAction_new5((*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQAction(ret)
}

// NewQAction6 constructs a new QAction object.
func NewQAction6(icon *QIcon, text string, parent *QObject) *QAction {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QAction_new6(icon.cPointer(), (*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQAction(ret)
}

func (this *QAction) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QAction_MetaObject(this.h)))
}

func (this *QAction) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QAction_Metacast(this.h, param1_Cstring)
}

func QAction_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAction_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAction_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAction_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAction) SetActionGroup(group *QActionGroup) {
	C.QAction_SetActionGroup(this.h, group.cPointer())
}

func (this *QAction) ActionGroup() *QActionGroup {
	return newQActionGroup_U(unsafe.Pointer(C.QAction_ActionGroup(this.h)))
}

func (this *QAction) SetIcon(icon *QIcon) {
	C.QAction_SetIcon(this.h, icon.cPointer())
}

func (this *QAction) Icon() *QIcon {
	_ret := C.QAction_Icon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAction) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QAction_SetText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QAction) Text() string {
	var _ms *C.struct_miqt_string = C.QAction_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAction) SetIconText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QAction_SetIconText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QAction) IconText() string {
	var _ms *C.struct_miqt_string = C.QAction_IconText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAction) SetToolTip(tip string) {
	tip_ms := miqt_strdupg(tip)
	defer C.free(tip_ms)
	C.QAction_SetToolTip(this.h, (*C.struct_miqt_string)(tip_ms))
}

func (this *QAction) ToolTip() string {
	var _ms *C.struct_miqt_string = C.QAction_ToolTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAction) SetStatusTip(statusTip string) {
	statusTip_ms := miqt_strdupg(statusTip)
	defer C.free(statusTip_ms)
	C.QAction_SetStatusTip(this.h, (*C.struct_miqt_string)(statusTip_ms))
}

func (this *QAction) StatusTip() string {
	var _ms *C.struct_miqt_string = C.QAction_StatusTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAction) SetWhatsThis(what string) {
	what_ms := miqt_strdupg(what)
	defer C.free(what_ms)
	C.QAction_SetWhatsThis(this.h, (*C.struct_miqt_string)(what_ms))
}

func (this *QAction) WhatsThis() string {
	var _ms *C.struct_miqt_string = C.QAction_WhatsThis(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAction) SetPriority(priority QAction__Priority) {
	C.QAction_SetPriority(this.h, (C.int)(priority))
}

func (this *QAction) Priority() QAction__Priority {
	return (QAction__Priority)(C.QAction_Priority(this.h))
}

func (this *QAction) Menu() *QMenu {
	return newQMenu_U(unsafe.Pointer(C.QAction_Menu(this.h)))
}

func (this *QAction) SetMenu(menu *QMenu) {
	C.QAction_SetMenu(this.h, menu.cPointer())
}

func (this *QAction) SetSeparator(b bool) {
	C.QAction_SetSeparator(this.h, (C.bool)(b))
}

func (this *QAction) IsSeparator() bool {
	return (bool)(C.QAction_IsSeparator(this.h))
}

func (this *QAction) SetShortcut(shortcut *QKeySequence) {
	C.QAction_SetShortcut(this.h, shortcut.cPointer())
}

func (this *QAction) Shortcut() *QKeySequence {
	_ret := C.QAction_Shortcut(this.h)
	_goptr := newQKeySequence(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAction) SetShortcuts(shortcuts []QKeySequence) {
	// For the C ABI, malloc a C array of raw pointers
	shortcuts_CArray := (*[0xffff]*C.QKeySequence)(C.malloc(C.size_t(8 * len(shortcuts))))
	defer C.free(unsafe.Pointer(shortcuts_CArray))
	for i := range shortcuts {
		shortcuts_CArray[i] = shortcuts[i].cPointer()
	}
	shortcuts_ma := &C.struct_miqt_array{len: C.size_t(len(shortcuts)), data: unsafe.Pointer(shortcuts_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(shortcuts_ma))
	C.QAction_SetShortcuts(this.h, shortcuts_ma)
}

func (this *QAction) SetShortcutsWithShortcuts(shortcuts QKeySequence__StandardKey) {
	C.QAction_SetShortcutsWithShortcuts(this.h, (C.int)(shortcuts))
}

func (this *QAction) Shortcuts() []QKeySequence {
	var _ma *C.struct_miqt_array = C.QAction_Shortcuts(this.h)
	_ret := make([]QKeySequence, int(_ma.len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQKeySequence(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QAction) SetShortcutContext(context ShortcutContext) {
	C.QAction_SetShortcutContext(this.h, (C.int)(context))
}

func (this *QAction) ShortcutContext() ShortcutContext {
	return (ShortcutContext)(C.QAction_ShortcutContext(this.h))
}

func (this *QAction) SetAutoRepeat(autoRepeat bool) {
	C.QAction_SetAutoRepeat(this.h, (C.bool)(autoRepeat))
}

func (this *QAction) AutoRepeat() bool {
	return (bool)(C.QAction_AutoRepeat(this.h))
}

func (this *QAction) SetFont(font *QFont) {
	C.QAction_SetFont(this.h, font.cPointer())
}

func (this *QAction) Font() *QFont {
	_ret := C.QAction_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAction) SetCheckable(checkable bool) {
	C.QAction_SetCheckable(this.h, (C.bool)(checkable))
}

func (this *QAction) IsCheckable() bool {
	return (bool)(C.QAction_IsCheckable(this.h))
}

func (this *QAction) Data() *QVariant {
	_ret := C.QAction_Data(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAction) SetData(varVal *QVariant) {
	C.QAction_SetData(this.h, varVal.cPointer())
}

func (this *QAction) IsChecked() bool {
	return (bool)(C.QAction_IsChecked(this.h))
}

func (this *QAction) IsEnabled() bool {
	return (bool)(C.QAction_IsEnabled(this.h))
}

func (this *QAction) IsVisible() bool {
	return (bool)(C.QAction_IsVisible(this.h))
}

func (this *QAction) Activate(event QAction__ActionEvent) {
	C.QAction_Activate(this.h, (C.int)(event))
}

func (this *QAction) ShowStatusText() bool {
	return (bool)(C.QAction_ShowStatusText(this.h))
}

func (this *QAction) SetMenuRole(menuRole QAction__MenuRole) {
	C.QAction_SetMenuRole(this.h, (C.int)(menuRole))
}

func (this *QAction) MenuRole() QAction__MenuRole {
	return (QAction__MenuRole)(C.QAction_MenuRole(this.h))
}

func (this *QAction) SetIconVisibleInMenu(visible bool) {
	C.QAction_SetIconVisibleInMenu(this.h, (C.bool)(visible))
}

func (this *QAction) IsIconVisibleInMenu() bool {
	return (bool)(C.QAction_IsIconVisibleInMenu(this.h))
}

func (this *QAction) SetShortcutVisibleInContextMenu(show bool) {
	C.QAction_SetShortcutVisibleInContextMenu(this.h, (C.bool)(show))
}

func (this *QAction) IsShortcutVisibleInContextMenu() bool {
	return (bool)(C.QAction_IsShortcutVisibleInContextMenu(this.h))
}

func (this *QAction) ParentWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QAction_ParentWidget(this.h)))
}

func (this *QAction) AssociatedWidgets() []*QWidget {
	var _ma *C.struct_miqt_array = C.QAction_AssociatedWidgets(this.h)
	_ret := make([]*QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWidget_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QAction) AssociatedGraphicsWidgets() []*QGraphicsWidget {
	var _ma *C.struct_miqt_array = C.QAction_AssociatedGraphicsWidgets(this.h)
	_ret := make([]*QGraphicsWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsWidget_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
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
	C.QAction_connect_Changed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAction_Changed
func miqt_exec_callback_QAction_Changed(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAction) Triggered() {
	C.QAction_Triggered(this.h)
}
func (this *QAction) OnTriggered(slot func()) {
	C.QAction_connect_Triggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAction_Triggered
func miqt_exec_callback_QAction_Triggered(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAction) Hovered() {
	C.QAction_Hovered(this.h)
}
func (this *QAction) OnHovered(slot func()) {
	C.QAction_connect_Hovered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAction_Hovered
func miqt_exec_callback_QAction_Hovered(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAction) Toggled(param1 bool) {
	C.QAction_Toggled(this.h, (C.bool)(param1))
}
func (this *QAction) OnToggled(slot func(param1 bool)) {
	C.QAction_connect_Toggled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAction_Toggled
func miqt_exec_callback_QAction_Toggled(cb *C.void, param1 C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func QAction_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAction_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAction_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAction_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAction_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAction_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAction_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAction_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAction) ShowStatusText1(widget *QWidget) bool {
	return (bool)(C.QAction_ShowStatusText1(this.h, widget.cPointer()))
}

func (this *QAction) Triggered1(checked bool) {
	C.QAction_Triggered1(this.h, (C.bool)(checked))
}
func (this *QAction) OnTriggered1(slot func(checked bool)) {
	C.QAction_connect_Triggered1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAction_Triggered1
func miqt_exec_callback_QAction_Triggered1(cb *C.void, checked C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checked)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QAction) Delete() {
	C.QAction_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAction) GoGC() {
	runtime.SetFinalizer(this, func(this *QAction) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
