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

	return newQMenu(C.QMenu_new(parent.cPointer()))
}

// NewQMenu2 constructs a new QMenu object.
func NewQMenu2() *QMenu {

	return newQMenu(C.QMenu_new2())
}

// NewQMenu3 constructs a new QMenu object.
func NewQMenu3(title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQMenu(C.QMenu_new3(title_ms))
}

// NewQMenu4 constructs a new QMenu object.
func NewQMenu4(title string, parent *QWidget) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQMenu(C.QMenu_new4(title_ms, parent.cPointer()))
}

func (this *QMenu) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMenu_metaObject(this.h))
}

func (this *QMenu) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMenu_metacast(this.h, param1_Cstring))
}

func QMenu_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenu_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenu) AddAction(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_addAction(this.h, text_ms))
}

func (this *QMenu) AddAction2(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_addAction2(this.h, icon.cPointer(), text_ms))
}

func (this *QMenu) AddMenu(menu *QMenu) *QAction {
	return newQAction(C.QMenu_addMenu(this.h, menu.cPointer()))
}

func (this *QMenu) AddMenuWithTitle(title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return newQMenu(C.QMenu_addMenuWithTitle(this.h, title_ms))
}

func (this *QMenu) AddMenu2(icon *QIcon, title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return newQMenu(C.QMenu_addMenu2(this.h, icon.cPointer(), title_ms))
}

func (this *QMenu) AddSeparator() *QAction {
	return newQAction(C.QMenu_addSeparator(this.h))
}

func (this *QMenu) AddSection(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_addSection(this.h, text_ms))
}

func (this *QMenu) AddSection2(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_addSection2(this.h, icon.cPointer(), text_ms))
}

func (this *QMenu) InsertMenu(before *QAction, menu *QMenu) *QAction {
	return newQAction(C.QMenu_insertMenu(this.h, before.cPointer(), menu.cPointer()))
}

func (this *QMenu) InsertSeparator(before *QAction) *QAction {
	return newQAction(C.QMenu_insertSeparator(this.h, before.cPointer()))
}

func (this *QMenu) InsertSection(before *QAction, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_insertSection(this.h, before.cPointer(), text_ms))
}

func (this *QMenu) InsertSection2(before *QAction, icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenu_insertSection2(this.h, before.cPointer(), icon.cPointer(), text_ms))
}

func (this *QMenu) IsEmpty() bool {
	return (bool)(C.QMenu_isEmpty(this.h))
}

func (this *QMenu) Clear() {
	C.QMenu_clear(this.h)
}

func (this *QMenu) SetTearOffEnabled(tearOffEnabled bool) {
	C.QMenu_setTearOffEnabled(this.h, (C.bool)(tearOffEnabled))
}

func (this *QMenu) IsTearOffEnabled() bool {
	return (bool)(C.QMenu_isTearOffEnabled(this.h))
}

func (this *QMenu) IsTearOffMenuVisible() bool {
	return (bool)(C.QMenu_isTearOffMenuVisible(this.h))
}

func (this *QMenu) ShowTearOffMenu() {
	C.QMenu_showTearOffMenu(this.h)
}

func (this *QMenu) ShowTearOffMenuWithPos(pos *QPoint) {
	C.QMenu_showTearOffMenuWithPos(this.h, pos.cPointer())
}

func (this *QMenu) HideTearOffMenu() {
	C.QMenu_hideTearOffMenu(this.h)
}

func (this *QMenu) SetDefaultAction(defaultAction *QAction) {
	C.QMenu_setDefaultAction(this.h, defaultAction.cPointer())
}

func (this *QMenu) DefaultAction() *QAction {
	return newQAction(C.QMenu_defaultAction(this.h))
}

func (this *QMenu) SetActiveAction(act *QAction) {
	C.QMenu_setActiveAction(this.h, act.cPointer())
}

func (this *QMenu) ActiveAction() *QAction {
	return newQAction(C.QMenu_activeAction(this.h))
}

func (this *QMenu) Popup(pos *QPoint) {
	C.QMenu_popup(this.h, pos.cPointer())
}

func (this *QMenu) Exec() *QAction {
	return newQAction(C.QMenu_exec(this.h))
}

func (this *QMenu) ExecWithPos(pos *QPoint) *QAction {
	return newQAction(C.QMenu_execWithPos(this.h, pos.cPointer()))
}

func QMenu_Exec2(actions []*QAction, pos *QPoint) *QAction {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	return newQAction(C.QMenu_exec2(actions_ma, pos.cPointer()))
}

func (this *QMenu) SizeHint() *QSize {
	_goptr := newQSize(C.QMenu_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenu) ActionGeometry(param1 *QAction) *QRect {
	_goptr := newQRect(C.QMenu_actionGeometry(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenu) ActionAt(param1 *QPoint) *QAction {
	return newQAction(C.QMenu_actionAt(this.h, param1.cPointer()))
}

func (this *QMenu) MenuAction() *QAction {
	return newQAction(C.QMenu_menuAction(this.h))
}

func (this *QMenu) Title() string {
	var _ms C.struct_miqt_string = C.QMenu_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenu) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QMenu_setTitle(this.h, title_ms)
}

func (this *QMenu) Icon() *QIcon {
	_goptr := newQIcon(C.QMenu_icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenu) SetIcon(icon *QIcon) {
	C.QMenu_setIcon(this.h, icon.cPointer())
}

func (this *QMenu) SetNoReplayFor(widget *QWidget) {
	C.QMenu_setNoReplayFor(this.h, widget.cPointer())
}

func (this *QMenu) SeparatorsCollapsible() bool {
	return (bool)(C.QMenu_separatorsCollapsible(this.h))
}

func (this *QMenu) SetSeparatorsCollapsible(collapse bool) {
	C.QMenu_setSeparatorsCollapsible(this.h, (C.bool)(collapse))
}

func (this *QMenu) ToolTipsVisible() bool {
	return (bool)(C.QMenu_toolTipsVisible(this.h))
}

func (this *QMenu) SetToolTipsVisible(visible bool) {
	C.QMenu_setToolTipsVisible(this.h, (C.bool)(visible))
}

func (this *QMenu) AboutToShow() {
	C.QMenu_aboutToShow(this.h)
}
func (this *QMenu) OnAboutToShow(slot func()) {
	C.QMenu_connect_aboutToShow(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_aboutToShow
func miqt_exec_callback_QMenu_aboutToShow(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMenu) AboutToHide() {
	C.QMenu_aboutToHide(this.h)
}
func (this *QMenu) OnAboutToHide(slot func()) {
	C.QMenu_connect_aboutToHide(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_aboutToHide
func miqt_exec_callback_QMenu_aboutToHide(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMenu) Triggered(action *QAction) {
	C.QMenu_triggered(this.h, action.cPointer())
}
func (this *QMenu) OnTriggered(slot func(action *QAction)) {
	C.QMenu_connect_triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_triggered
func miqt_exec_callback_QMenu_triggered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction(action)

	gofunc(slotval1)
}

func (this *QMenu) Hovered(action *QAction) {
	C.QMenu_hovered(this.h, action.cPointer())
}
func (this *QMenu) OnHovered(slot func(action *QAction)) {
	C.QMenu_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenu_hovered
func miqt_exec_callback_QMenu_hovered(cb C.intptr_t, action *C.QAction) {
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
	var _ms C.struct_miqt_string = C.QMenu_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenu_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenu_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenu_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenu_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenu) Popup2(pos *QPoint, at *QAction) {
	C.QMenu_popup2(this.h, pos.cPointer(), at.cPointer())
}

func (this *QMenu) Exec3(pos *QPoint, at *QAction) *QAction {
	return newQAction(C.QMenu_exec3(this.h, pos.cPointer(), at.cPointer()))
}

func QMenu_Exec4(actions []*QAction, pos *QPoint, at *QAction) *QAction {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	return newQAction(C.QMenu_exec4(actions_ma, pos.cPointer(), at.cPointer()))
}

func QMenu_Exec5(actions []*QAction, pos *QPoint, at *QAction, parent *QWidget) *QAction {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	return newQAction(C.QMenu_exec5(actions_ma, pos.cPointer(), at.cPointer(), parent.cPointer()))
}

// ColumnCount can only be called from a QMenu that was directly constructed.
func (this *QMenu) ColumnCount() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMenu_protectedbase_columnCount(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// InitStyleOption can only be called from a QMenu that was directly constructed.
func (this *QMenu) InitStyleOption(option *QStyleOptionMenuItem, action *QAction) {

	var _dynamic_cast_ok C.bool = false
	C.QMenu_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer(), action.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QMenu that was directly constructed.
func (this *QMenu) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QMenu_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QMenu that was directly constructed.
func (this *QMenu) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QMenu_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QMenu that was directly constructed.
func (this *QMenu) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QMenu_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QMenu that was directly constructed.
func (this *QMenu) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMenu_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QMenu that was directly constructed.
func (this *QMenu) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMenu_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QMenu that was directly constructed.
func (this *QMenu) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QMenu_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QMenu that was directly constructed.
func (this *QMenu) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMenu_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QMenu that was directly constructed.
func (this *QMenu) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMenu_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QMenu that was directly constructed.
func (this *QMenu) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMenu_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QMenu) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QMenu_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenu) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMenu_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_sizeHint
func miqt_exec_callback_QMenu_sizeHint(self *C.QMenu, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QMenu_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QMenu_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_changeEvent
func miqt_exec_callback_QMenu_changeEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMenu) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QMenu_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QMenu_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_keyPressEvent
func miqt_exec_callback_QMenu_keyPressEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMenu) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QMenu_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMenu_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_mouseReleaseEvent
func miqt_exec_callback_QMenu_mouseReleaseEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMenu) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QMenu_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMenu_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_mousePressEvent
func miqt_exec_callback_QMenu_mousePressEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMenu) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QMenu_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMenu_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_mouseMoveEvent
func miqt_exec_callback_QMenu_mouseMoveEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QMenu_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QMenu_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_wheelEvent
func miqt_exec_callback_QMenu_wheelEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMenu) callVirtualBase_EnterEvent(param1 *QEvent) {

	C.QMenu_virtualbase_enterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnEnterEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QMenu_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_enterEvent
func miqt_exec_callback_QMenu_enterEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QMenu) callVirtualBase_LeaveEvent(param1 *QEvent) {

	C.QMenu_virtualbase_leaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnLeaveEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QMenu_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_leaveEvent
func miqt_exec_callback_QMenu_leaveEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QMenu_virtualbase_hideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnHideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	ok := C.QMenu_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_hideEvent
func miqt_exec_callback_QMenu_hideEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QMenu) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QMenu_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QMenu_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_paintEvent
func miqt_exec_callback_QMenu_paintEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMenu) callVirtualBase_ActionEvent(param1 *QActionEvent) {

	C.QMenu_virtualbase_actionEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnActionEvent(slot func(super func(param1 *QActionEvent), param1 *QActionEvent)) {
	ok := C.QMenu_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_actionEvent
func miqt_exec_callback_QMenu_actionEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QActionEvent), param1 *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QMenu) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QMenu_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QMenu_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_timerEvent
func miqt_exec_callback_QMenu_timerEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMenu) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QMenu_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QMenu) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QMenu_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_event
func miqt_exec_callback_QMenu_event(self *C.QMenu, cb C.intptr_t, param1 *C.QEvent) C.bool {
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

	return (bool)(C.QMenu_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QMenu) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QMenu_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_focusNextPrevChild
func miqt_exec_callback_QMenu_focusNextPrevChild(self *C.QMenu, cb C.intptr_t, next C.bool) C.bool {
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

	return (int)(C.QMenu_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QMenu) OnDevType(slot func(super func() int) int) {
	ok := C.QMenu_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_devType
func miqt_exec_callback_QMenu_devType(self *C.QMenu, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QMenu) callVirtualBase_SetVisible(visible bool) {

	C.QMenu_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMenu) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QMenu_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_setVisible
func miqt_exec_callback_QMenu_setVisible(self *C.QMenu, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMenu{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMenu) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QMenu_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenu) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMenu_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_minimumSizeHint
func miqt_exec_callback_QMenu_minimumSizeHint(self *C.QMenu, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QMenu_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMenu) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QMenu_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_heightForWidth
func miqt_exec_callback_QMenu_heightForWidth(self *C.QMenu, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QMenu_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QMenu) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QMenu_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_hasHeightForWidth
func miqt_exec_callback_QMenu_hasHeightForWidth(self *C.QMenu, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QMenu) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QMenu_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QMenu) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QMenu_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_paintEngine
func miqt_exec_callback_QMenu_paintEngine(self *C.QMenu, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QMenu_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QMenu_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_mouseDoubleClickEvent
func miqt_exec_callback_QMenu_mouseDoubleClickEvent(self *C.QMenu, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMenu) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QMenu_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QMenu_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_keyReleaseEvent
func miqt_exec_callback_QMenu_keyReleaseEvent(self *C.QMenu, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QMenu) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QMenu_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QMenu_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_focusInEvent
func miqt_exec_callback_QMenu_focusInEvent(self *C.QMenu, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QMenu) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QMenu_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QMenu_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_focusOutEvent
func miqt_exec_callback_QMenu_focusOutEvent(self *C.QMenu, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QMenu) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QMenu_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QMenu_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_moveEvent
func miqt_exec_callback_QMenu_moveEvent(self *C.QMenu, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QMenu_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QMenu_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_resizeEvent
func miqt_exec_callback_QMenu_resizeEvent(self *C.QMenu, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMenu) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QMenu_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QMenu_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_closeEvent
func miqt_exec_callback_QMenu_closeEvent(self *C.QMenu, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMenu) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QMenu_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QMenu_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_contextMenuEvent
func miqt_exec_callback_QMenu_contextMenuEvent(self *C.QMenu, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMenu) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QMenu_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QMenu_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_tabletEvent
func miqt_exec_callback_QMenu_tabletEvent(self *C.QMenu, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QMenu) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QMenu_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QMenu_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_dragEnterEvent
func miqt_exec_callback_QMenu_dragEnterEvent(self *C.QMenu, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMenu) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QMenu_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QMenu_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_dragMoveEvent
func miqt_exec_callback_QMenu_dragMoveEvent(self *C.QMenu, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QMenu_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QMenu_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_dragLeaveEvent
func miqt_exec_callback_QMenu_dragLeaveEvent(self *C.QMenu, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMenu) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QMenu_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QMenu_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_dropEvent
func miqt_exec_callback_QMenu_dropEvent(self *C.QMenu, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMenu) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QMenu_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QMenu_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_showEvent
func miqt_exec_callback_QMenu_showEvent(self *C.QMenu, cb C.intptr_t, event *C.QShowEvent) {
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
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QMenu_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QMenu) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QMenu_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_nativeEvent
func miqt_exec_callback_QMenu_nativeEvent(self *C.QMenu, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	return (int)(C.QMenu_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMenu) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QMenu_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_metric
func miqt_exec_callback_QMenu_metric(self *C.QMenu, cb C.intptr_t, param1 C.int) C.int {
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

	C.QMenu_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QMenu) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QMenu_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_initPainter
func miqt_exec_callback_QMenu_initPainter(self *C.QMenu, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QMenu{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QMenu) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QMenu_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QMenu) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QMenu_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_redirected
func miqt_exec_callback_QMenu_redirected(self *C.QMenu, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QMenu_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QMenu) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QMenu_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_sharedPainter
func miqt_exec_callback_QMenu_sharedPainter(self *C.QMenu, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QMenu_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenu) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QMenu_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_inputMethodEvent
func miqt_exec_callback_QMenu_inputMethodEvent(self *C.QMenu, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QMenu{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QMenu) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QMenu_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenu) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QMenu_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_inputMethodQuery
func miqt_exec_callback_QMenu_inputMethodQuery(self *C.QMenu, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMenu) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QMenu_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QMenu) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QMenu_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_eventFilter
func miqt_exec_callback_QMenu_eventFilter(self *C.QMenu, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QMenu{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMenu) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QMenu_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QMenu_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_childEvent
func miqt_exec_callback_QMenu_childEvent(self *C.QMenu, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMenu) callVirtualBase_CustomEvent(event *QEvent) {

	C.QMenu_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenu) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMenu_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_customEvent
func miqt_exec_callback_QMenu_customEvent(self *C.QMenu, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMenu{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMenu) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QMenu_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMenu) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMenu_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_connectNotify
func miqt_exec_callback_QMenu_connectNotify(self *C.QMenu, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMenu{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMenu) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QMenu_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMenu) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMenu_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenu_disconnectNotify
func miqt_exec_callback_QMenu_disconnectNotify(self *C.QMenu, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMenu{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMenu) Delete() {
	C.QMenu_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMenu) GoGC() {
	runtime.SetFinalizer(this, func(this *QMenu) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
