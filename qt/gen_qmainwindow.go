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
	QMainWindow__DockOption__AnimatedDocks    QMainWindow__DockOption = 1
	QMainWindow__DockOption__AllowNestedDocks QMainWindow__DockOption = 2
	QMainWindow__DockOption__AllowTabbedDocks QMainWindow__DockOption = 4
	QMainWindow__DockOption__ForceTabbedDocks QMainWindow__DockOption = 8
	QMainWindow__DockOption__VerticalTabs     QMainWindow__DockOption = 16
	QMainWindow__DockOption__GroupedDragging  QMainWindow__DockOption = 32
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

func newQMainWindow(h *C.QMainWindow) *QMainWindow {
	if h == nil {
		return nil
	}
	return &QMainWindow{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQMainWindow_U(h unsafe.Pointer) *QMainWindow {
	return newQMainWindow((*C.QMainWindow)(h))
}

// NewQMainWindow constructs a new QMainWindow object.
func NewQMainWindow() *QMainWindow {
	ret := C.QMainWindow_new()
	return newQMainWindow(ret)
}

// NewQMainWindow2 constructs a new QMainWindow object.
func NewQMainWindow2(parent *QWidget) *QMainWindow {
	ret := C.QMainWindow_new2(parent.cPointer())
	return newQMainWindow(ret)
}

// NewQMainWindow3 constructs a new QMainWindow object.
func NewQMainWindow3(parent *QWidget, flags int) *QMainWindow {
	ret := C.QMainWindow_new3(parent.cPointer(), (C.int)(flags))
	return newQMainWindow(ret)
}

func (this *QMainWindow) MetaObject() *QMetaObject {
	ret := C.QMainWindow_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMainWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMainWindow_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMainWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMainWindow_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMainWindow) IconSize() *QSize {
	ret := C.QMainWindow_IconSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMainWindow) SetIconSize(iconSize *QSize) {
	C.QMainWindow_SetIconSize(this.h, iconSize.cPointer())
}

func (this *QMainWindow) ToolButtonStyle() ToolButtonStyle {
	ret := C.QMainWindow_ToolButtonStyle(this.h)
	return (ToolButtonStyle)(ret)
}

func (this *QMainWindow) SetToolButtonStyle(toolButtonStyle ToolButtonStyle) {
	C.QMainWindow_SetToolButtonStyle(this.h, (C.uintptr_t)(toolButtonStyle))
}

func (this *QMainWindow) IsAnimated() bool {
	ret := C.QMainWindow_IsAnimated(this.h)
	return (bool)(ret)
}

func (this *QMainWindow) IsDockNestingEnabled() bool {
	ret := C.QMainWindow_IsDockNestingEnabled(this.h)
	return (bool)(ret)
}

func (this *QMainWindow) DocumentMode() bool {
	ret := C.QMainWindow_DocumentMode(this.h)
	return (bool)(ret)
}

func (this *QMainWindow) SetDocumentMode(enabled bool) {
	C.QMainWindow_SetDocumentMode(this.h, (C.bool)(enabled))
}

func (this *QMainWindow) TabShape() QTabWidget__TabShape {
	ret := C.QMainWindow_TabShape(this.h)
	return (QTabWidget__TabShape)(ret)
}

func (this *QMainWindow) SetTabShape(tabShape QTabWidget__TabShape) {
	C.QMainWindow_SetTabShape(this.h, (C.uintptr_t)(tabShape))
}

func (this *QMainWindow) TabPosition(area DockWidgetArea) QTabWidget__TabPosition {
	ret := C.QMainWindow_TabPosition(this.h, (C.uintptr_t)(area))
	return (QTabWidget__TabPosition)(ret)
}

func (this *QMainWindow) SetTabPosition(areas int, tabPosition QTabWidget__TabPosition) {
	C.QMainWindow_SetTabPosition(this.h, (C.int)(areas), (C.uintptr_t)(tabPosition))
}

func (this *QMainWindow) SetDockOptions(options int) {
	C.QMainWindow_SetDockOptions(this.h, (C.int)(options))
}

func (this *QMainWindow) DockOptions() int {
	ret := C.QMainWindow_DockOptions(this.h)
	return (int)(ret)
}

func (this *QMainWindow) IsSeparator(pos *QPoint) bool {
	ret := C.QMainWindow_IsSeparator(this.h, pos.cPointer())
	return (bool)(ret)
}

func (this *QMainWindow) MenuBar() *QMenuBar {
	ret := C.QMainWindow_MenuBar(this.h)
	return newQMenuBar_U(unsafe.Pointer(ret))
}

func (this *QMainWindow) SetMenuBar(menubar *QMenuBar) {
	C.QMainWindow_SetMenuBar(this.h, menubar.cPointer())
}

func (this *QMainWindow) MenuWidget() *QWidget {
	ret := C.QMainWindow_MenuWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QMainWindow) SetMenuWidget(menubar *QWidget) {
	C.QMainWindow_SetMenuWidget(this.h, menubar.cPointer())
}

func (this *QMainWindow) StatusBar() *QStatusBar {
	ret := C.QMainWindow_StatusBar(this.h)
	return newQStatusBar_U(unsafe.Pointer(ret))
}

func (this *QMainWindow) SetStatusBar(statusbar *QStatusBar) {
	C.QMainWindow_SetStatusBar(this.h, statusbar.cPointer())
}

func (this *QMainWindow) CentralWidget() *QWidget {
	ret := C.QMainWindow_CentralWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QMainWindow) SetCentralWidget(widget *QWidget) {
	C.QMainWindow_SetCentralWidget(this.h, widget.cPointer())
}

func (this *QMainWindow) TakeCentralWidget() *QWidget {
	ret := C.QMainWindow_TakeCentralWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QMainWindow) SetCorner(corner Corner, area DockWidgetArea) {
	C.QMainWindow_SetCorner(this.h, (C.uintptr_t)(corner), (C.uintptr_t)(area))
}

func (this *QMainWindow) Corner(corner Corner) DockWidgetArea {
	ret := C.QMainWindow_Corner(this.h, (C.uintptr_t)(corner))
	return (DockWidgetArea)(ret)
}

func (this *QMainWindow) AddToolBarBreak() {
	C.QMainWindow_AddToolBarBreak(this.h)
}

func (this *QMainWindow) InsertToolBarBreak(before *QToolBar) {
	C.QMainWindow_InsertToolBarBreak(this.h, before.cPointer())
}

func (this *QMainWindow) AddToolBar(area ToolBarArea, toolbar *QToolBar) {
	C.QMainWindow_AddToolBar(this.h, (C.uintptr_t)(area), toolbar.cPointer())
}

func (this *QMainWindow) AddToolBarWithToolbar(toolbar *QToolBar) {
	C.QMainWindow_AddToolBarWithToolbar(this.h, toolbar.cPointer())
}

func (this *QMainWindow) AddToolBarWithTitle(title string) *QToolBar {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QMainWindow_AddToolBarWithTitle(this.h, title_Cstring, C.size_t(len(title)))
	return newQToolBar_U(unsafe.Pointer(ret))
}

func (this *QMainWindow) InsertToolBar(before *QToolBar, toolbar *QToolBar) {
	C.QMainWindow_InsertToolBar(this.h, before.cPointer(), toolbar.cPointer())
}

func (this *QMainWindow) RemoveToolBar(toolbar *QToolBar) {
	C.QMainWindow_RemoveToolBar(this.h, toolbar.cPointer())
}

func (this *QMainWindow) RemoveToolBarBreak(before *QToolBar) {
	C.QMainWindow_RemoveToolBarBreak(this.h, before.cPointer())
}

func (this *QMainWindow) UnifiedTitleAndToolBarOnMac() bool {
	ret := C.QMainWindow_UnifiedTitleAndToolBarOnMac(this.h)
	return (bool)(ret)
}

func (this *QMainWindow) ToolBarArea(toolbar *QToolBar) ToolBarArea {
	ret := C.QMainWindow_ToolBarArea(this.h, toolbar.cPointer())
	return (ToolBarArea)(ret)
}

func (this *QMainWindow) ToolBarBreak(toolbar *QToolBar) bool {
	ret := C.QMainWindow_ToolBarBreak(this.h, toolbar.cPointer())
	return (bool)(ret)
}

func (this *QMainWindow) AddDockWidget(area DockWidgetArea, dockwidget *QDockWidget) {
	C.QMainWindow_AddDockWidget(this.h, (C.uintptr_t)(area), dockwidget.cPointer())
}

func (this *QMainWindow) AddDockWidget2(area DockWidgetArea, dockwidget *QDockWidget, orientation Orientation) {
	C.QMainWindow_AddDockWidget2(this.h, (C.uintptr_t)(area), dockwidget.cPointer(), (C.uintptr_t)(orientation))
}

func (this *QMainWindow) SplitDockWidget(after *QDockWidget, dockwidget *QDockWidget, orientation Orientation) {
	C.QMainWindow_SplitDockWidget(this.h, after.cPointer(), dockwidget.cPointer(), (C.uintptr_t)(orientation))
}

func (this *QMainWindow) TabifyDockWidget(first *QDockWidget, second *QDockWidget) {
	C.QMainWindow_TabifyDockWidget(this.h, first.cPointer(), second.cPointer())
}

func (this *QMainWindow) TabifiedDockWidgets(dockwidget *QDockWidget) []*QDockWidget {
	var _out **C.QDockWidget = nil
	var _out_len C.size_t = 0
	C.QMainWindow_TabifiedDockWidgets(this.h, dockwidget.cPointer(), &_out, &_out_len)
	ret := make([]*QDockWidget, int(_out_len))
	_outCast := (*[0xffff]*C.QDockWidget)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQDockWidget(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMainWindow) RemoveDockWidget(dockwidget *QDockWidget) {
	C.QMainWindow_RemoveDockWidget(this.h, dockwidget.cPointer())
}

func (this *QMainWindow) RestoreDockWidget(dockwidget *QDockWidget) bool {
	ret := C.QMainWindow_RestoreDockWidget(this.h, dockwidget.cPointer())
	return (bool)(ret)
}

func (this *QMainWindow) DockWidgetArea(dockwidget *QDockWidget) DockWidgetArea {
	ret := C.QMainWindow_DockWidgetArea(this.h, dockwidget.cPointer())
	return (DockWidgetArea)(ret)
}

func (this *QMainWindow) ResizeDocks(docks []*QDockWidget, sizes []int, orientation Orientation) {
	// For the C ABI, malloc a C array of raw pointers
	docks_CArray := (*[0xffff]*C.QDockWidget)(C.malloc(C.size_t(8 * len(docks))))
	defer C.free(unsafe.Pointer(docks_CArray))
	for i := range docks {
		docks_CArray[i] = docks[i].cPointer()
	}
	// For the C ABI, malloc a C array of raw pointers
	sizes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(sizes))))
	defer C.free(unsafe.Pointer(sizes_CArray))
	for i := range sizes {
		sizes_CArray[i] = (C.int)(sizes[i])
	}
	C.QMainWindow_ResizeDocks(this.h, &docks_CArray[0], C.size_t(len(docks)), &sizes_CArray[0], C.size_t(len(sizes)), (C.uintptr_t)(orientation))
}

func (this *QMainWindow) SaveState() *QByteArray {
	ret := C.QMainWindow_SaveState(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMainWindow) RestoreState(state *QByteArray) bool {
	ret := C.QMainWindow_RestoreState(this.h, state.cPointer())
	return (bool)(ret)
}

func (this *QMainWindow) CreatePopupMenu() *QMenu {
	ret := C.QMainWindow_CreatePopupMenu(this.h)
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QMainWindow) SetAnimated(enabled bool) {
	C.QMainWindow_SetAnimated(this.h, (C.bool)(enabled))
}

func (this *QMainWindow) SetDockNestingEnabled(enabled bool) {
	C.QMainWindow_SetDockNestingEnabled(this.h, (C.bool)(enabled))
}

func (this *QMainWindow) SetUnifiedTitleAndToolBarOnMac(set bool) {
	C.QMainWindow_SetUnifiedTitleAndToolBarOnMac(this.h, (C.bool)(set))
}

func (this *QMainWindow) IconSizeChanged(iconSize *QSize) {
	C.QMainWindow_IconSizeChanged(this.h, iconSize.cPointer())
}

func (this *QMainWindow) OnIconSizeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMainWindow_connect_IconSizeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMainWindow) ToolButtonStyleChanged(toolButtonStyle ToolButtonStyle) {
	C.QMainWindow_ToolButtonStyleChanged(this.h, (C.uintptr_t)(toolButtonStyle))
}

func (this *QMainWindow) OnToolButtonStyleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMainWindow_connect_ToolButtonStyleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMainWindow) TabifiedDockWidgetActivated(dockWidget *QDockWidget) {
	C.QMainWindow_TabifiedDockWidgetActivated(this.h, dockWidget.cPointer())
}

func (this *QMainWindow) OnTabifiedDockWidgetActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMainWindow_connect_TabifiedDockWidgetActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QMainWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMainWindow_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMainWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMainWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMainWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMainWindow_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMainWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMainWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMainWindow) AddToolBarBreak1(area ToolBarArea) {
	C.QMainWindow_AddToolBarBreak1(this.h, (C.uintptr_t)(area))
}

func (this *QMainWindow) SaveState1(version int) *QByteArray {
	ret := C.QMainWindow_SaveState1(this.h, (C.int)(version))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMainWindow) RestoreState2(state *QByteArray, version int) bool {
	ret := C.QMainWindow_RestoreState2(this.h, state.cPointer(), (C.int)(version))
	return (bool)(ret)
}

func (this *QMainWindow) Delete() {
	C.QMainWindow_Delete(this.h)
}
