package qt6

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
	h          *C.QAction
	isSubclass bool
	*QObject
}

func (this *QAction) cPointer() *C.QAction {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAction) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAction constructs the type using only CGO pointers.
func newQAction(h *C.QAction, h_QObject *C.QObject) *QAction {
	if h == nil {
		return nil
	}
	return &QAction{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQAction constructs the type using only unsafe pointers.
func UnsafeNewQAction(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAction {
	if h == nil {
		return nil
	}

	return &QAction{h: (*C.QAction)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQAction constructs a new QAction object.
func NewQAction() *QAction {
	var outptr_QAction *C.QAction = nil
	var outptr_QObject *C.QObject = nil

	C.QAction_new(&outptr_QAction, &outptr_QObject)
	ret := newQAction(outptr_QAction, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAction2 constructs a new QAction object.
func NewQAction2(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QAction *C.QAction = nil
	var outptr_QObject *C.QObject = nil

	C.QAction_new2(text_ms, &outptr_QAction, &outptr_QObject)
	ret := newQAction(outptr_QAction, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAction3 constructs a new QAction object.
func NewQAction3(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QAction *C.QAction = nil
	var outptr_QObject *C.QObject = nil

	C.QAction_new3(icon.cPointer(), text_ms, &outptr_QAction, &outptr_QObject)
	ret := newQAction(outptr_QAction, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAction4 constructs a new QAction object.
func NewQAction4(parent *QObject) *QAction {
	var outptr_QAction *C.QAction = nil
	var outptr_QObject *C.QObject = nil

	C.QAction_new4(parent.cPointer(), &outptr_QAction, &outptr_QObject)
	ret := newQAction(outptr_QAction, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAction5 constructs a new QAction object.
func NewQAction5(text string, parent *QObject) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QAction *C.QAction = nil
	var outptr_QObject *C.QObject = nil

	C.QAction_new5(text_ms, parent.cPointer(), &outptr_QAction, &outptr_QObject)
	ret := newQAction(outptr_QAction, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAction6 constructs a new QAction object.
func NewQAction6(icon *QIcon, text string, parent *QObject) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QAction *C.QAction = nil
	var outptr_QObject *C.QObject = nil

	C.QAction_new6(icon.cPointer(), text_ms, parent.cPointer(), &outptr_QAction, &outptr_QObject)
	ret := newQAction(outptr_QAction, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAction) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAction_MetaObject(this.h)))
}

func (this *QAction) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAction_Metacast(this.h, param1_Cstring))
}

func QAction_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAction_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAction) AssociatedObjects() []*QObject {
	var _ma C.struct_miqt_array = C.QAction_AssociatedObjects(this.h)
	_ret := make([]*QObject, int(_ma.len))
	_outCast := (*[0xffff]*C.QObject)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQObject(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QAction) SetActionGroup(group *QActionGroup) {
	C.QAction_SetActionGroup(this.h, group.cPointer())
}

func (this *QAction) ActionGroup() *QActionGroup {
	return UnsafeNewQActionGroup(unsafe.Pointer(C.QAction_ActionGroup(this.h)), nil)
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
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QAction_SetText(this.h, text_ms)
}

func (this *QAction) Text() string {
	var _ms C.struct_miqt_string = C.QAction_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAction) SetIconText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QAction_SetIconText(this.h, text_ms)
}

func (this *QAction) IconText() string {
	var _ms C.struct_miqt_string = C.QAction_IconText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAction) SetToolTip(tip string) {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))
	C.QAction_SetToolTip(this.h, tip_ms)
}

func (this *QAction) ToolTip() string {
	var _ms C.struct_miqt_string = C.QAction_ToolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAction) SetStatusTip(statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QAction_SetStatusTip(this.h, statusTip_ms)
}

func (this *QAction) StatusTip() string {
	var _ms C.struct_miqt_string = C.QAction_StatusTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAction) SetWhatsThis(what string) {
	what_ms := C.struct_miqt_string{}
	what_ms.data = C.CString(what)
	what_ms.len = C.size_t(len(what))
	defer C.free(unsafe.Pointer(what_ms.data))
	C.QAction_SetWhatsThis(this.h, what_ms)
}

func (this *QAction) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QAction_WhatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAction) SetPriority(priority QAction__Priority) {
	C.QAction_SetPriority(this.h, (C.int)(priority))
}

func (this *QAction) Priority() QAction__Priority {
	return (QAction__Priority)(C.QAction_Priority(this.h))
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
	shortcuts_CArray := (*[0xffff]*C.QKeySequence)(C.malloc(C.size_t(8 * len(shortcuts))))
	defer C.free(unsafe.Pointer(shortcuts_CArray))
	for i := range shortcuts {
		shortcuts_CArray[i] = shortcuts[i].cPointer()
	}
	shortcuts_ma := C.struct_miqt_array{len: C.size_t(len(shortcuts)), data: unsafe.Pointer(shortcuts_CArray)}
	C.QAction_SetShortcuts(this.h, shortcuts_ma)
}

func (this *QAction) SetShortcutsWithShortcuts(shortcuts QKeySequence__StandardKey) {
	C.QAction_SetShortcutsWithShortcuts(this.h, (C.int)(shortcuts))
}

func (this *QAction) Shortcuts() []QKeySequence {
	var _ma C.struct_miqt_array = C.QAction_Shortcuts(this.h)
	_ret := make([]QKeySequence, int(_ma.len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQKeySequence(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
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

func (this *QAction) ShowStatusText() bool {
	return (bool)(C.QAction_ShowStatusText(this.h))
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

func (this *QAction) ResetEnabled() {
	C.QAction_ResetEnabled(this.h)
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
	C.QAction_connect_Changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_Changed
func miqt_exec_callback_QAction_Changed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAction) EnabledChanged(enabled bool) {
	C.QAction_EnabledChanged(this.h, (C.bool)(enabled))
}
func (this *QAction) OnEnabledChanged(slot func(enabled bool)) {
	C.QAction_connect_EnabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_EnabledChanged
func miqt_exec_callback_QAction_EnabledChanged(cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc(slotval1)
}

func (this *QAction) CheckableChanged(checkable bool) {
	C.QAction_CheckableChanged(this.h, (C.bool)(checkable))
}
func (this *QAction) OnCheckableChanged(slot func(checkable bool)) {
	C.QAction_connect_CheckableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_CheckableChanged
func miqt_exec_callback_QAction_CheckableChanged(cb C.intptr_t, checkable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(checkable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checkable)

	gofunc(slotval1)
}

func (this *QAction) VisibleChanged() {
	C.QAction_VisibleChanged(this.h)
}
func (this *QAction) OnVisibleChanged(slot func()) {
	C.QAction_connect_VisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_VisibleChanged
func miqt_exec_callback_QAction_VisibleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAction) Triggered() {
	C.QAction_Triggered(this.h)
}
func (this *QAction) OnTriggered(slot func()) {
	C.QAction_connect_Triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_Triggered
func miqt_exec_callback_QAction_Triggered(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAction) Hovered() {
	C.QAction_Hovered(this.h)
}
func (this *QAction) OnHovered(slot func()) {
	C.QAction_connect_Hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_Hovered
func miqt_exec_callback_QAction_Hovered(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAction) Toggled(param1 bool) {
	C.QAction_Toggled(this.h, (C.bool)(param1))
}
func (this *QAction) OnToggled(slot func(param1 bool)) {
	C.QAction_connect_Toggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_Toggled
func miqt_exec_callback_QAction_Toggled(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
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
	var _ms C.struct_miqt_string = C.QAction_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAction_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAction_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAction) ShowStatusText1(object *QObject) bool {
	return (bool)(C.QAction_ShowStatusText1(this.h, object.cPointer()))
}

func (this *QAction) Triggered1(checked bool) {
	C.QAction_Triggered1(this.h, (C.bool)(checked))
}
func (this *QAction) OnTriggered1(slot func(checked bool)) {
	C.QAction_connect_Triggered1(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_Triggered1
func miqt_exec_callback_QAction_Triggered1(cb C.intptr_t, checked C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checked)

	gofunc(slotval1)
}

func (this *QAction) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QAction_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QAction) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	C.QAction_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_Event
func miqt_exec_callback_QAction_Event(self *C.QAction, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QAction{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAction) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAction_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAction) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QAction_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_EventFilter
func miqt_exec_callback_QAction_EventFilter(self *C.QAction, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAction{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAction) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAction_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAction) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QAction_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_TimerEvent
func miqt_exec_callback_QAction_TimerEvent(self *C.QAction, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAction{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAction) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAction_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAction) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QAction_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_ChildEvent
func miqt_exec_callback_QAction_ChildEvent(self *C.QAction, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAction{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAction) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAction_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAction) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QAction_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_CustomEvent
func miqt_exec_callback_QAction_CustomEvent(self *C.QAction, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAction{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAction) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAction_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAction) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QAction_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_ConnectNotify
func miqt_exec_callback_QAction_ConnectNotify(self *C.QAction, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAction{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAction) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAction_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAction) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QAction_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAction_DisconnectNotify
func miqt_exec_callback_QAction_DisconnectNotify(self *C.QAction, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAction{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAction) Delete() {
	C.QAction_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAction) GoGC() {
	runtime.SetFinalizer(this, func(this *QAction) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
