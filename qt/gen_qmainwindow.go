package qt

/*

#include "gen_qmainwindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMainWindow__DockOption int

const (
	QMainWindow__AnimatedDocks    QMainWindow__DockOption = 1
	QMainWindow__AllowNestedDocks QMainWindow__DockOption = 2
	QMainWindow__AllowTabbedDocks QMainWindow__DockOption = 4
	QMainWindow__ForceTabbedDocks QMainWindow__DockOption = 8
	QMainWindow__VerticalTabs     QMainWindow__DockOption = 16
	QMainWindow__GroupedDragging  QMainWindow__DockOption = 32
)

type QMainWindow struct {
	h *C.QMainWindow
	*QWidget
}

func (this *QMainWindow) cPointer() *C.QMainWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMainWindow) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMainWindow constructs the type using only CGO pointers.
func newQMainWindow(h *C.QMainWindow) *QMainWindow {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QMainWindow_virtbase(h, &outptr_QWidget)

	return &QMainWindow{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQMainWindow constructs the type using only unsafe pointers.
func UnsafeNewQMainWindow(h unsafe.Pointer) *QMainWindow {
	return newQMainWindow((*C.QMainWindow)(h))
}

// NewQMainWindow constructs a new QMainWindow object.
func NewQMainWindow(parent *QWidget) *QMainWindow {

	return newQMainWindow(C.QMainWindow_new(parent.cPointer()))
}

// NewQMainWindow2 constructs a new QMainWindow object.
func NewQMainWindow2() *QMainWindow {

	return newQMainWindow(C.QMainWindow_new2())
}

// NewQMainWindow3 constructs a new QMainWindow object.
func NewQMainWindow3(parent *QWidget, flags WindowType) *QMainWindow {

	return newQMainWindow(C.QMainWindow_new3(parent.cPointer(), (C.int)(flags)))
}

func (this *QMainWindow) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMainWindow_metaObject(this.h))
}

func (this *QMainWindow) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMainWindow_metacast(this.h, param1_Cstring))
}

func QMainWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMainWindow_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMainWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMainWindow_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMainWindow) IconSize() *QSize {
	_goptr := newQSize(C.QMainWindow_iconSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMainWindow) SetIconSize(iconSize *QSize) {
	C.QMainWindow_setIconSize(this.h, iconSize.cPointer())
}

func (this *QMainWindow) ToolButtonStyle() ToolButtonStyle {
	return (ToolButtonStyle)(C.QMainWindow_toolButtonStyle(this.h))
}

func (this *QMainWindow) SetToolButtonStyle(toolButtonStyle ToolButtonStyle) {
	C.QMainWindow_setToolButtonStyle(this.h, (C.int)(toolButtonStyle))
}

func (this *QMainWindow) IsAnimated() bool {
	return (bool)(C.QMainWindow_isAnimated(this.h))
}

func (this *QMainWindow) IsDockNestingEnabled() bool {
	return (bool)(C.QMainWindow_isDockNestingEnabled(this.h))
}

func (this *QMainWindow) DocumentMode() bool {
	return (bool)(C.QMainWindow_documentMode(this.h))
}

func (this *QMainWindow) SetDocumentMode(enabled bool) {
	C.QMainWindow_setDocumentMode(this.h, (C.bool)(enabled))
}

func (this *QMainWindow) TabShape() QTabWidget__TabShape {
	return (QTabWidget__TabShape)(C.QMainWindow_tabShape(this.h))
}

func (this *QMainWindow) SetTabShape(tabShape QTabWidget__TabShape) {
	C.QMainWindow_setTabShape(this.h, (C.int)(tabShape))
}

func (this *QMainWindow) TabPosition(area DockWidgetArea) QTabWidget__TabPosition {
	return (QTabWidget__TabPosition)(C.QMainWindow_tabPosition(this.h, (C.int)(area)))
}

func (this *QMainWindow) SetTabPosition(areas DockWidgetArea, tabPosition QTabWidget__TabPosition) {
	C.QMainWindow_setTabPosition(this.h, (C.int)(areas), (C.int)(tabPosition))
}

func (this *QMainWindow) SetDockOptions(options QMainWindow__DockOption) {
	C.QMainWindow_setDockOptions(this.h, (C.int)(options))
}

func (this *QMainWindow) DockOptions() QMainWindow__DockOption {
	return (QMainWindow__DockOption)(C.QMainWindow_dockOptions(this.h))
}

func (this *QMainWindow) IsSeparator(pos *QPoint) bool {
	return (bool)(C.QMainWindow_isSeparator(this.h, pos.cPointer()))
}

func (this *QMainWindow) MenuBar() *QMenuBar {
	return newQMenuBar(C.QMainWindow_menuBar(this.h))
}

func (this *QMainWindow) SetMenuBar(menubar *QMenuBar) {
	C.QMainWindow_setMenuBar(this.h, menubar.cPointer())
}

func (this *QMainWindow) MenuWidget() *QWidget {
	return newQWidget(C.QMainWindow_menuWidget(this.h))
}

func (this *QMainWindow) SetMenuWidget(menubar *QWidget) {
	C.QMainWindow_setMenuWidget(this.h, menubar.cPointer())
}

func (this *QMainWindow) StatusBar() *QStatusBar {
	return newQStatusBar(C.QMainWindow_statusBar(this.h))
}

func (this *QMainWindow) SetStatusBar(statusbar *QStatusBar) {
	C.QMainWindow_setStatusBar(this.h, statusbar.cPointer())
}

func (this *QMainWindow) CentralWidget() *QWidget {
	return newQWidget(C.QMainWindow_centralWidget(this.h))
}

func (this *QMainWindow) SetCentralWidget(widget *QWidget) {
	C.QMainWindow_setCentralWidget(this.h, widget.cPointer())
}

func (this *QMainWindow) TakeCentralWidget() *QWidget {
	return newQWidget(C.QMainWindow_takeCentralWidget(this.h))
}

func (this *QMainWindow) SetCorner(corner Corner, area DockWidgetArea) {
	C.QMainWindow_setCorner(this.h, (C.int)(corner), (C.int)(area))
}

func (this *QMainWindow) Corner(corner Corner) DockWidgetArea {
	return (DockWidgetArea)(C.QMainWindow_corner(this.h, (C.int)(corner)))
}

func (this *QMainWindow) AddToolBarBreak() {
	C.QMainWindow_addToolBarBreak(this.h)
}

func (this *QMainWindow) InsertToolBarBreak(before *QToolBar) {
	C.QMainWindow_insertToolBarBreak(this.h, before.cPointer())
}

func (this *QMainWindow) AddToolBar(area ToolBarArea, toolbar *QToolBar) {
	C.QMainWindow_addToolBar(this.h, (C.int)(area), toolbar.cPointer())
}

func (this *QMainWindow) AddToolBarWithToolbar(toolbar *QToolBar) {
	C.QMainWindow_addToolBarWithToolbar(this.h, toolbar.cPointer())
}

func (this *QMainWindow) AddToolBarWithTitle(title string) *QToolBar {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return newQToolBar(C.QMainWindow_addToolBarWithTitle(this.h, title_ms))
}

func (this *QMainWindow) InsertToolBar(before *QToolBar, toolbar *QToolBar) {
	C.QMainWindow_insertToolBar(this.h, before.cPointer(), toolbar.cPointer())
}

func (this *QMainWindow) RemoveToolBar(toolbar *QToolBar) {
	C.QMainWindow_removeToolBar(this.h, toolbar.cPointer())
}

func (this *QMainWindow) RemoveToolBarBreak(before *QToolBar) {
	C.QMainWindow_removeToolBarBreak(this.h, before.cPointer())
}

func (this *QMainWindow) UnifiedTitleAndToolBarOnMac() bool {
	return (bool)(C.QMainWindow_unifiedTitleAndToolBarOnMac(this.h))
}

func (this *QMainWindow) ToolBarArea(toolbar *QToolBar) ToolBarArea {
	return (ToolBarArea)(C.QMainWindow_toolBarArea(this.h, toolbar.cPointer()))
}

func (this *QMainWindow) ToolBarBreak(toolbar *QToolBar) bool {
	return (bool)(C.QMainWindow_toolBarBreak(this.h, toolbar.cPointer()))
}

func (this *QMainWindow) AddDockWidget(area DockWidgetArea, dockwidget *QDockWidget) {
	C.QMainWindow_addDockWidget(this.h, (C.int)(area), dockwidget.cPointer())
}

func (this *QMainWindow) AddDockWidget2(area DockWidgetArea, dockwidget *QDockWidget, orientation Orientation) {
	C.QMainWindow_addDockWidget2(this.h, (C.int)(area), dockwidget.cPointer(), (C.int)(orientation))
}

func (this *QMainWindow) SplitDockWidget(after *QDockWidget, dockwidget *QDockWidget, orientation Orientation) {
	C.QMainWindow_splitDockWidget(this.h, after.cPointer(), dockwidget.cPointer(), (C.int)(orientation))
}

func (this *QMainWindow) TabifyDockWidget(first *QDockWidget, second *QDockWidget) {
	C.QMainWindow_tabifyDockWidget(this.h, first.cPointer(), second.cPointer())
}

func (this *QMainWindow) TabifiedDockWidgets(dockwidget *QDockWidget) []*QDockWidget {
	var _ma C.struct_miqt_array = C.QMainWindow_tabifiedDockWidgets(this.h, dockwidget.cPointer())
	_ret := make([]*QDockWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QDockWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQDockWidget(_outCast[i])
	}
	return _ret
}

func (this *QMainWindow) RemoveDockWidget(dockwidget *QDockWidget) {
	C.QMainWindow_removeDockWidget(this.h, dockwidget.cPointer())
}

func (this *QMainWindow) RestoreDockWidget(dockwidget *QDockWidget) bool {
	return (bool)(C.QMainWindow_restoreDockWidget(this.h, dockwidget.cPointer()))
}

func (this *QMainWindow) DockWidgetArea(dockwidget *QDockWidget) DockWidgetArea {
	return (DockWidgetArea)(C.QMainWindow_dockWidgetArea(this.h, dockwidget.cPointer()))
}

func (this *QMainWindow) ResizeDocks(docks []*QDockWidget, sizes []int, orientation Orientation) {
	docks_CArray := (*[0xffff]*C.QDockWidget)(C.malloc(C.size_t(8 * len(docks))))
	defer C.free(unsafe.Pointer(docks_CArray))
	for i := range docks {
		docks_CArray[i] = docks[i].cPointer()
	}
	docks_ma := C.struct_miqt_array{len: C.size_t(len(docks)), data: unsafe.Pointer(docks_CArray)}
	sizes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(sizes))))
	defer C.free(unsafe.Pointer(sizes_CArray))
	for i := range sizes {
		sizes_CArray[i] = (C.int)(sizes[i])
	}
	sizes_ma := C.struct_miqt_array{len: C.size_t(len(sizes)), data: unsafe.Pointer(sizes_CArray)}
	C.QMainWindow_resizeDocks(this.h, docks_ma, sizes_ma, (C.int)(orientation))
}

func (this *QMainWindow) SaveState() []byte {
	var _bytearray C.struct_miqt_string = C.QMainWindow_saveState(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMainWindow) RestoreState(state []byte) bool {
	state_alias := C.struct_miqt_string{}
	if len(state) > 0 {
		state_alias.data = (*C.char)(unsafe.Pointer(&state[0]))
	} else {
		state_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	state_alias.len = C.size_t(len(state))
	return (bool)(C.QMainWindow_restoreState(this.h, state_alias))
}

func (this *QMainWindow) CreatePopupMenu() *QMenu {
	return newQMenu(C.QMainWindow_createPopupMenu(this.h))
}

func (this *QMainWindow) SetAnimated(enabled bool) {
	C.QMainWindow_setAnimated(this.h, (C.bool)(enabled))
}

func (this *QMainWindow) SetDockNestingEnabled(enabled bool) {
	C.QMainWindow_setDockNestingEnabled(this.h, (C.bool)(enabled))
}

func (this *QMainWindow) SetUnifiedTitleAndToolBarOnMac(set bool) {
	C.QMainWindow_setUnifiedTitleAndToolBarOnMac(this.h, (C.bool)(set))
}

func (this *QMainWindow) IconSizeChanged(iconSize *QSize) {
	C.QMainWindow_iconSizeChanged(this.h, iconSize.cPointer())
}
func (this *QMainWindow) OnIconSizeChanged(slot func(iconSize *QSize)) {
	C.QMainWindow_connect_iconSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMainWindow_iconSizeChanged
func miqt_exec_callback_QMainWindow_iconSizeChanged(cb C.intptr_t, iconSize *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(iconSize *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSize(iconSize)

	gofunc(slotval1)
}

func (this *QMainWindow) ToolButtonStyleChanged(toolButtonStyle ToolButtonStyle) {
	C.QMainWindow_toolButtonStyleChanged(this.h, (C.int)(toolButtonStyle))
}
func (this *QMainWindow) OnToolButtonStyleChanged(slot func(toolButtonStyle ToolButtonStyle)) {
	C.QMainWindow_connect_toolButtonStyleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMainWindow_toolButtonStyleChanged
func miqt_exec_callback_QMainWindow_toolButtonStyleChanged(cb C.intptr_t, toolButtonStyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(toolButtonStyle ToolButtonStyle))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ToolButtonStyle)(toolButtonStyle)

	gofunc(slotval1)
}

func (this *QMainWindow) TabifiedDockWidgetActivated(dockWidget *QDockWidget) {
	C.QMainWindow_tabifiedDockWidgetActivated(this.h, dockWidget.cPointer())
}
func (this *QMainWindow) OnTabifiedDockWidgetActivated(slot func(dockWidget *QDockWidget)) {
	C.QMainWindow_connect_tabifiedDockWidgetActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMainWindow_tabifiedDockWidgetActivated
func miqt_exec_callback_QMainWindow_tabifiedDockWidgetActivated(cb C.intptr_t, dockWidget *C.QDockWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dockWidget *QDockWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDockWidget(dockWidget)

	gofunc(slotval1)
}

func QMainWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMainWindow_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMainWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMainWindow_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMainWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMainWindow_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMainWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMainWindow_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMainWindow) AddToolBarBreakWithArea(area ToolBarArea) {
	C.QMainWindow_addToolBarBreakWithArea(this.h, (C.int)(area))
}

func (this *QMainWindow) SaveStateWithVersion(version int) []byte {
	var _bytearray C.struct_miqt_string = C.QMainWindow_saveStateWithVersion(this.h, (C.int)(version))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMainWindow) RestoreState2(state []byte, version int) bool {
	state_alias := C.struct_miqt_string{}
	if len(state) > 0 {
		state_alias.data = (*C.char)(unsafe.Pointer(&state[0]))
	} else {
		state_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	state_alias.len = C.size_t(len(state))
	return (bool)(C.QMainWindow_restoreState2(this.h, state_alias, (C.int)(version)))
}

// UpdateMicroFocus can only be called from a QMainWindow that was directly constructed.
func (this *QMainWindow) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QMainWindow_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QMainWindow that was directly constructed.
func (this *QMainWindow) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QMainWindow_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QMainWindow that was directly constructed.
func (this *QMainWindow) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QMainWindow_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QMainWindow that was directly constructed.
func (this *QMainWindow) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMainWindow_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QMainWindow that was directly constructed.
func (this *QMainWindow) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMainWindow_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QMainWindow that was directly constructed.
func (this *QMainWindow) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QMainWindow_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QMainWindow that was directly constructed.
func (this *QMainWindow) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMainWindow_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QMainWindow that was directly constructed.
func (this *QMainWindow) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMainWindow_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QMainWindow that was directly constructed.
func (this *QMainWindow) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMainWindow_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QMainWindow) callVirtualBase_CreatePopupMenu() *QMenu {

	return newQMenu(C.QMainWindow_virtualbase_createPopupMenu(unsafe.Pointer(this.h)))

}
func (this *QMainWindow) OnCreatePopupMenu(slot func(super func() *QMenu) *QMenu) {
	ok := C.QMainWindow_override_virtual_createPopupMenu(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_createPopupMenu
func miqt_exec_callback_QMainWindow_createPopupMenu(self *C.QMainWindow, cb C.intptr_t) *C.QMenu {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMenu) *QMenu)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_CreatePopupMenu)

	return virtualReturn.cPointer()

}

func (this *QMainWindow) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QMainWindow_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QMainWindow_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_contextMenuEvent
func miqt_exec_callback_QMainWindow_contextMenuEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QMainWindow_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMainWindow) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QMainWindow_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_event
func miqt_exec_callback_QMainWindow_event(self *C.QMainWindow, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMainWindow) callVirtualBase_DevType() int {

	return (int)(C.QMainWindow_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QMainWindow) OnDevType(slot func(super func() int) int) {
	ok := C.QMainWindow_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_devType
func miqt_exec_callback_QMainWindow_devType(self *C.QMainWindow, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QMainWindow) callVirtualBase_SetVisible(visible bool) {

	C.QMainWindow_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMainWindow) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QMainWindow_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_setVisible
func miqt_exec_callback_QMainWindow_setVisible(self *C.QMainWindow, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMainWindow{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMainWindow) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QMainWindow_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMainWindow) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMainWindow_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_sizeHint
func miqt_exec_callback_QMainWindow_sizeHint(self *C.QMainWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMainWindow) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QMainWindow_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMainWindow) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMainWindow_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_minimumSizeHint
func miqt_exec_callback_QMainWindow_minimumSizeHint(self *C.QMainWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMainWindow) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QMainWindow_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMainWindow) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QMainWindow_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_heightForWidth
func miqt_exec_callback_QMainWindow_heightForWidth(self *C.QMainWindow, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMainWindow) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QMainWindow_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QMainWindow) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QMainWindow_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_hasHeightForWidth
func miqt_exec_callback_QMainWindow_hasHeightForWidth(self *C.QMainWindow, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QMainWindow) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QMainWindow_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QMainWindow) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QMainWindow_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_paintEngine
func miqt_exec_callback_QMainWindow_paintEngine(self *C.QMainWindow, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QMainWindow) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QMainWindow_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QMainWindow_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_mousePressEvent
func miqt_exec_callback_QMainWindow_mousePressEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QMainWindow_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QMainWindow_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_mouseReleaseEvent
func miqt_exec_callback_QMainWindow_mouseReleaseEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QMainWindow_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QMainWindow_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_mouseDoubleClickEvent
func miqt_exec_callback_QMainWindow_mouseDoubleClickEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QMainWindow_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QMainWindow_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_mouseMoveEvent
func miqt_exec_callback_QMainWindow_mouseMoveEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QMainWindow_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QMainWindow_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_wheelEvent
func miqt_exec_callback_QMainWindow_wheelEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QMainWindow_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QMainWindow_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_keyPressEvent
func miqt_exec_callback_QMainWindow_keyPressEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QMainWindow_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QMainWindow_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_keyReleaseEvent
func miqt_exec_callback_QMainWindow_keyReleaseEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QMainWindow_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QMainWindow_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_focusInEvent
func miqt_exec_callback_QMainWindow_focusInEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QMainWindow_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QMainWindow_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_focusOutEvent
func miqt_exec_callback_QMainWindow_focusOutEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_EnterEvent(event *QEvent) {

	C.QMainWindow_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMainWindow_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_enterEvent
func miqt_exec_callback_QMainWindow_enterEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QMainWindow_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMainWindow_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_leaveEvent
func miqt_exec_callback_QMainWindow_leaveEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QMainWindow_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QMainWindow_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_paintEvent
func miqt_exec_callback_QMainWindow_paintEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QMainWindow_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QMainWindow_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_moveEvent
func miqt_exec_callback_QMainWindow_moveEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QMainWindow_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QMainWindow_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_resizeEvent
func miqt_exec_callback_QMainWindow_resizeEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QMainWindow_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QMainWindow_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_closeEvent
func miqt_exec_callback_QMainWindow_closeEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QMainWindow_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QMainWindow_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_tabletEvent
func miqt_exec_callback_QMainWindow_tabletEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QMainWindow_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QMainWindow_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_actionEvent
func miqt_exec_callback_QMainWindow_actionEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QMainWindow_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QMainWindow_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_dragEnterEvent
func miqt_exec_callback_QMainWindow_dragEnterEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QMainWindow_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QMainWindow_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_dragMoveEvent
func miqt_exec_callback_QMainWindow_dragMoveEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QMainWindow_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QMainWindow_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_dragLeaveEvent
func miqt_exec_callback_QMainWindow_dragLeaveEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QMainWindow_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QMainWindow_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_dropEvent
func miqt_exec_callback_QMainWindow_dropEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QMainWindow_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QMainWindow_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_showEvent
func miqt_exec_callback_QMainWindow_showEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QMainWindow_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QMainWindow_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_hideEvent
func miqt_exec_callback_QMainWindow_hideEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QMainWindow_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QMainWindow) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QMainWindow_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_nativeEvent
func miqt_exec_callback_QMainWindow_nativeEvent(self *C.QMainWindow, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QMainWindow) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QMainWindow_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMainWindow) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QMainWindow_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_changeEvent
func miqt_exec_callback_QMainWindow_changeEvent(self *C.QMainWindow, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMainWindow{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QMainWindow_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMainWindow) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QMainWindow_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_metric
func miqt_exec_callback_QMainWindow_metric(self *C.QMainWindow, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMainWindow) callVirtualBase_InitPainter(painter *QPainter) {

	C.QMainWindow_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QMainWindow) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QMainWindow_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_initPainter
func miqt_exec_callback_QMainWindow_initPainter(self *C.QMainWindow, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QMainWindow{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QMainWindow) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QMainWindow_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QMainWindow) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QMainWindow_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_redirected
func miqt_exec_callback_QMainWindow_redirected(self *C.QMainWindow, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMainWindow) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QMainWindow_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QMainWindow) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QMainWindow_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_sharedPainter
func miqt_exec_callback_QMainWindow_sharedPainter(self *C.QMainWindow, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QMainWindow) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QMainWindow_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMainWindow) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QMainWindow_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_inputMethodEvent
func miqt_exec_callback_QMainWindow_inputMethodEvent(self *C.QMainWindow, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QMainWindow{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QMainWindow_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMainWindow) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QMainWindow_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_inputMethodQuery
func miqt_exec_callback_QMainWindow_inputMethodQuery(self *C.QMainWindow, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMainWindow) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QMainWindow_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QMainWindow) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QMainWindow_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_focusNextPrevChild
func miqt_exec_callback_QMainWindow_focusNextPrevChild(self *C.QMainWindow, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMainWindow) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QMainWindow_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QMainWindow) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QMainWindow_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_eventFilter
func miqt_exec_callback_QMainWindow_eventFilter(self *C.QMainWindow, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QMainWindow{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMainWindow) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QMainWindow_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QMainWindow_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_timerEvent
func miqt_exec_callback_QMainWindow_timerEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QMainWindow_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QMainWindow_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_childEvent
func miqt_exec_callback_QMainWindow_childEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_CustomEvent(event *QEvent) {

	C.QMainWindow_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMainWindow) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMainWindow_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_customEvent
func miqt_exec_callback_QMainWindow_customEvent(self *C.QMainWindow, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMainWindow{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMainWindow) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QMainWindow_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMainWindow) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMainWindow_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_connectNotify
func miqt_exec_callback_QMainWindow_connectNotify(self *C.QMainWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMainWindow{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMainWindow) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QMainWindow_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMainWindow) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMainWindow_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMainWindow_disconnectNotify
func miqt_exec_callback_QMainWindow_disconnectNotify(self *C.QMainWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMainWindow{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMainWindow) Delete() {
	C.QMainWindow_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMainWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QMainWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
