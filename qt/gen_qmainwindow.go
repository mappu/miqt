package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmainwindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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
	return &QMainWindow{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQMainWindow_U(h unsafe.Pointer) *QMainWindow {
	return newQMainWindow((*C.QMainWindow)(h))
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

func (this *QMainWindow) InsertToolBarBreak(before *QToolBar) {
	C.QMainWindow_InsertToolBarBreak(this.h, before.cPointer())
}

func (this *QMainWindow) AddToolBar(toolbar *QToolBar) {
	C.QMainWindow_AddToolBar(this.h, toolbar.cPointer())
}

func (this *QMainWindow) AddToolBarWithTitle(title string) *QToolBar {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QMainWindow_AddToolBarWithTitle(this.h, title_Cstring, C.ulong(len(title)))
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

func (this *QMainWindow) ToolBarBreak(toolbar *QToolBar) bool {
	ret := C.QMainWindow_ToolBarBreak(this.h, toolbar.cPointer())
	return (bool)(ret)
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
