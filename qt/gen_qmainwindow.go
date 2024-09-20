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
func NewQMainWindow3(parent *QWidget, flags WindowType) *QMainWindow {
	ret := C.QMainWindow_new3(parent.cPointer(), (C.int)(flags))
	return newQMainWindow(ret)
}

func (this *QMainWindow) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QMainWindow_MetaObject(this.h)))
}

func QMainWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMainWindow_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMainWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMainWindow_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMainWindow) IconSize() *QSize {
	_ret := C.QMainWindow_IconSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMainWindow) SetIconSize(iconSize *QSize) {
	C.QMainWindow_SetIconSize(this.h, iconSize.cPointer())
}

func (this *QMainWindow) ToolButtonStyle() ToolButtonStyle {
	return (ToolButtonStyle)(C.QMainWindow_ToolButtonStyle(this.h))
}

func (this *QMainWindow) SetToolButtonStyle(toolButtonStyle ToolButtonStyle) {
	C.QMainWindow_SetToolButtonStyle(this.h, (C.int)(toolButtonStyle))
}

func (this *QMainWindow) IsAnimated() bool {
	return (bool)(C.QMainWindow_IsAnimated(this.h))
}

func (this *QMainWindow) IsDockNestingEnabled() bool {
	return (bool)(C.QMainWindow_IsDockNestingEnabled(this.h))
}

func (this *QMainWindow) DocumentMode() bool {
	return (bool)(C.QMainWindow_DocumentMode(this.h))
}

func (this *QMainWindow) SetDocumentMode(enabled bool) {
	C.QMainWindow_SetDocumentMode(this.h, (C.bool)(enabled))
}

func (this *QMainWindow) TabShape() QTabWidget__TabShape {
	return (QTabWidget__TabShape)(C.QMainWindow_TabShape(this.h))
}

func (this *QMainWindow) SetTabShape(tabShape QTabWidget__TabShape) {
	C.QMainWindow_SetTabShape(this.h, (C.int)(tabShape))
}

func (this *QMainWindow) TabPosition(area DockWidgetArea) QTabWidget__TabPosition {
	return (QTabWidget__TabPosition)(C.QMainWindow_TabPosition(this.h, (C.int)(area)))
}

func (this *QMainWindow) SetTabPosition(areas DockWidgetArea, tabPosition QTabWidget__TabPosition) {
	C.QMainWindow_SetTabPosition(this.h, (C.int)(areas), (C.int)(tabPosition))
}

func (this *QMainWindow) SetDockOptions(options QMainWindow__DockOption) {
	C.QMainWindow_SetDockOptions(this.h, (C.int)(options))
}

func (this *QMainWindow) DockOptions() QMainWindow__DockOption {
	return (QMainWindow__DockOption)(C.QMainWindow_DockOptions(this.h))
}

func (this *QMainWindow) IsSeparator(pos *QPoint) bool {
	return (bool)(C.QMainWindow_IsSeparator(this.h, pos.cPointer()))
}

func (this *QMainWindow) MenuBar() *QMenuBar {
	return newQMenuBar_U(unsafe.Pointer(C.QMainWindow_MenuBar(this.h)))
}

func (this *QMainWindow) SetMenuBar(menubar *QMenuBar) {
	C.QMainWindow_SetMenuBar(this.h, menubar.cPointer())
}

func (this *QMainWindow) MenuWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QMainWindow_MenuWidget(this.h)))
}

func (this *QMainWindow) SetMenuWidget(menubar *QWidget) {
	C.QMainWindow_SetMenuWidget(this.h, menubar.cPointer())
}

func (this *QMainWindow) StatusBar() *QStatusBar {
	return newQStatusBar_U(unsafe.Pointer(C.QMainWindow_StatusBar(this.h)))
}

func (this *QMainWindow) SetStatusBar(statusbar *QStatusBar) {
	C.QMainWindow_SetStatusBar(this.h, statusbar.cPointer())
}

func (this *QMainWindow) CentralWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QMainWindow_CentralWidget(this.h)))
}

func (this *QMainWindow) SetCentralWidget(widget *QWidget) {
	C.QMainWindow_SetCentralWidget(this.h, widget.cPointer())
}

func (this *QMainWindow) TakeCentralWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QMainWindow_TakeCentralWidget(this.h)))
}

func (this *QMainWindow) SetCorner(corner Corner, area DockWidgetArea) {
	C.QMainWindow_SetCorner(this.h, (C.int)(corner), (C.int)(area))
}

func (this *QMainWindow) Corner(corner Corner) DockWidgetArea {
	return (DockWidgetArea)(C.QMainWindow_Corner(this.h, (C.int)(corner)))
}

func (this *QMainWindow) AddToolBarBreak() {
	C.QMainWindow_AddToolBarBreak(this.h)
}

func (this *QMainWindow) InsertToolBarBreak(before *QToolBar) {
	C.QMainWindow_InsertToolBarBreak(this.h, before.cPointer())
}

func (this *QMainWindow) AddToolBar(area ToolBarArea, toolbar *QToolBar) {
	C.QMainWindow_AddToolBar(this.h, (C.int)(area), toolbar.cPointer())
}

func (this *QMainWindow) AddToolBarWithToolbar(toolbar *QToolBar) {
	C.QMainWindow_AddToolBarWithToolbar(this.h, toolbar.cPointer())
}

func (this *QMainWindow) AddToolBarWithTitle(title string) *QToolBar {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	return newQToolBar_U(unsafe.Pointer(C.QMainWindow_AddToolBarWithTitle(this.h, (*C.struct_miqt_string)(title_ms))))
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
	return (bool)(C.QMainWindow_UnifiedTitleAndToolBarOnMac(this.h))
}

func (this *QMainWindow) ToolBarArea(toolbar *QToolBar) ToolBarArea {
	return (ToolBarArea)(C.QMainWindow_ToolBarArea(this.h, toolbar.cPointer()))
}

func (this *QMainWindow) ToolBarBreak(toolbar *QToolBar) bool {
	return (bool)(C.QMainWindow_ToolBarBreak(this.h, toolbar.cPointer()))
}

func (this *QMainWindow) AddDockWidget(area DockWidgetArea, dockwidget *QDockWidget) {
	C.QMainWindow_AddDockWidget(this.h, (C.int)(area), dockwidget.cPointer())
}

func (this *QMainWindow) AddDockWidget2(area DockWidgetArea, dockwidget *QDockWidget, orientation Orientation) {
	C.QMainWindow_AddDockWidget2(this.h, (C.int)(area), dockwidget.cPointer(), (C.int)(orientation))
}

func (this *QMainWindow) SplitDockWidget(after *QDockWidget, dockwidget *QDockWidget, orientation Orientation) {
	C.QMainWindow_SplitDockWidget(this.h, after.cPointer(), dockwidget.cPointer(), (C.int)(orientation))
}

func (this *QMainWindow) TabifyDockWidget(first *QDockWidget, second *QDockWidget) {
	C.QMainWindow_TabifyDockWidget(this.h, first.cPointer(), second.cPointer())
}

func (this *QMainWindow) TabifiedDockWidgets(dockwidget *QDockWidget) []*QDockWidget {
	var _ma *C.struct_miqt_array = C.QMainWindow_TabifiedDockWidgets(this.h, dockwidget.cPointer())
	_ret := make([]*QDockWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QDockWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQDockWidget_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMainWindow) RemoveDockWidget(dockwidget *QDockWidget) {
	C.QMainWindow_RemoveDockWidget(this.h, dockwidget.cPointer())
}

func (this *QMainWindow) RestoreDockWidget(dockwidget *QDockWidget) bool {
	return (bool)(C.QMainWindow_RestoreDockWidget(this.h, dockwidget.cPointer()))
}

func (this *QMainWindow) DockWidgetArea(dockwidget *QDockWidget) DockWidgetArea {
	return (DockWidgetArea)(C.QMainWindow_DockWidgetArea(this.h, dockwidget.cPointer()))
}

func (this *QMainWindow) ResizeDocks(docks []*QDockWidget, sizes []int, orientation Orientation) {
	// For the C ABI, malloc a C array of raw pointers
	docks_CArray := (*[0xffff]*C.QDockWidget)(C.malloc(C.size_t(8 * len(docks))))
	defer C.free(unsafe.Pointer(docks_CArray))
	for i := range docks {
		docks_CArray[i] = docks[i].cPointer()
	}
	docks_ma := &C.struct_miqt_array{len: C.size_t(len(docks)), data: unsafe.Pointer(docks_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(docks_ma))
	// For the C ABI, malloc a C array of raw pointers
	sizes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(sizes))))
	defer C.free(unsafe.Pointer(sizes_CArray))
	for i := range sizes {
		sizes_CArray[i] = (C.int)(sizes[i])
	}
	sizes_ma := &C.struct_miqt_array{len: C.size_t(len(sizes)), data: unsafe.Pointer(sizes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(sizes_ma))
	C.QMainWindow_ResizeDocks(this.h, docks_ma, sizes_ma, (C.int)(orientation))
}

func (this *QMainWindow) SaveState() *QByteArray {
	_ret := C.QMainWindow_SaveState(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMainWindow) RestoreState(state *QByteArray) bool {
	return (bool)(C.QMainWindow_RestoreState(this.h, state.cPointer()))
}

func (this *QMainWindow) CreatePopupMenu() *QMenu {
	return newQMenu_U(unsafe.Pointer(C.QMainWindow_CreatePopupMenu(this.h)))
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
func (this *QMainWindow) OnIconSizeChanged(slot func(iconSize *QSize)) {
	C.QMainWindow_connect_IconSizeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QMainWindow_IconSizeChanged
func miqt_exec_callback_QMainWindow_IconSizeChanged(cb *C.void, iconSize *C.QSize) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(iconSize *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSize_U(unsafe.Pointer(iconSize))

	gofunc(slotval1)
}

func (this *QMainWindow) ToolButtonStyleChanged(toolButtonStyle ToolButtonStyle) {
	C.QMainWindow_ToolButtonStyleChanged(this.h, (C.int)(toolButtonStyle))
}
func (this *QMainWindow) OnToolButtonStyleChanged(slot func(toolButtonStyle ToolButtonStyle)) {
	C.QMainWindow_connect_ToolButtonStyleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QMainWindow_ToolButtonStyleChanged
func miqt_exec_callback_QMainWindow_ToolButtonStyleChanged(cb *C.void, toolButtonStyle C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(toolButtonStyle ToolButtonStyle))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ToolButtonStyle)(toolButtonStyle)

	gofunc(slotval1)
}

func (this *QMainWindow) TabifiedDockWidgetActivated(dockWidget *QDockWidget) {
	C.QMainWindow_TabifiedDockWidgetActivated(this.h, dockWidget.cPointer())
}
func (this *QMainWindow) OnTabifiedDockWidgetActivated(slot func(dockWidget *QDockWidget)) {
	C.QMainWindow_connect_TabifiedDockWidgetActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QMainWindow_TabifiedDockWidgetActivated
func miqt_exec_callback_QMainWindow_TabifiedDockWidgetActivated(cb *C.void, dockWidget *C.QDockWidget) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(dockWidget *QDockWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDockWidget_U(unsafe.Pointer(dockWidget))

	gofunc(slotval1)
}

func QMainWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMainWindow_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMainWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMainWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMainWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMainWindow_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMainWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMainWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMainWindow) AddToolBarBreak1(area ToolBarArea) {
	C.QMainWindow_AddToolBarBreak1(this.h, (C.int)(area))
}

func (this *QMainWindow) SaveState1(version int) *QByteArray {
	_ret := C.QMainWindow_SaveState1(this.h, (C.int)(version))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMainWindow) RestoreState2(state *QByteArray, version int) bool {
	return (bool)(C.QMainWindow_RestoreState2(this.h, state.cPointer(), (C.int)(version)))
}

// Delete this object from C++ memory.
func (this *QMainWindow) Delete() {
	C.QMainWindow_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMainWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QMainWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
