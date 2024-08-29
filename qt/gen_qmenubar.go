package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmenubar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMenuBar struct {
	h *C.QMenuBar
	*QWidget
}

func (this *QMenuBar) cPointer() *C.QMenuBar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMenuBar(h *C.QMenuBar) *QMenuBar {
	return &QMenuBar{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQMenuBar_U(h unsafe.Pointer) *QMenuBar {
	return newQMenuBar((*C.QMenuBar)(h))
}

// NewQMenuBar constructs a new QMenuBar object.
func NewQMenuBar() *QMenuBar {
	ret := C.QMenuBar_new()
	return newQMenuBar(ret)
}

// NewQMenuBar2 constructs a new QMenuBar object.
func NewQMenuBar2(parent *QWidget) *QMenuBar {
	ret := C.QMenuBar_new2(parent.cPointer())
	return newQMenuBar(ret)
}

func (this *QMenuBar) MetaObject() *QMetaObject {
	ret := C.QMenuBar_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMenuBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenuBar_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMenuBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenuBar_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMenuBar) AddAction(text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMenuBar_AddAction(this.h, text_Cstring, C.ulong(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) AddMenu(menu *QMenu) *QAction {
	ret := C.QMenuBar_AddMenu(this.h, menu.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) AddMenuWithTitle(title string) *QMenu {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QMenuBar_AddMenuWithTitle(this.h, title_Cstring, C.ulong(len(title)))
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) AddMenu2(icon *QIcon, title string) *QMenu {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QMenuBar_AddMenu2(this.h, icon.cPointer(), title_Cstring, C.ulong(len(title)))
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) AddSeparator() *QAction {
	ret := C.QMenuBar_AddSeparator(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) InsertSeparator(before *QAction) *QAction {
	ret := C.QMenuBar_InsertSeparator(this.h, before.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) InsertMenu(before *QAction, menu *QMenu) *QAction {
	ret := C.QMenuBar_InsertMenu(this.h, before.cPointer(), menu.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) Clear() {
	C.QMenuBar_Clear(this.h)
}

func (this *QMenuBar) ActiveAction() *QAction {
	ret := C.QMenuBar_ActiveAction(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) SetActiveAction(action *QAction) {
	C.QMenuBar_SetActiveAction(this.h, action.cPointer())
}

func (this *QMenuBar) SetDefaultUp(defaultUp bool) {
	C.QMenuBar_SetDefaultUp(this.h, (C.bool)(defaultUp))
}

func (this *QMenuBar) IsDefaultUp() bool {
	ret := C.QMenuBar_IsDefaultUp(this.h)
	return (bool)(ret)
}

func (this *QMenuBar) SizeHint() *QSize {
	ret := C.QMenuBar_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMenuBar) MinimumSizeHint() *QSize {
	ret := C.QMenuBar_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMenuBar) HeightForWidth(param1 int) int {
	ret := C.QMenuBar_HeightForWidth(this.h, (C.int)(param1))
	return (int)(ret)
}

func (this *QMenuBar) ActionGeometry(param1 *QAction) *QRect {
	ret := C.QMenuBar_ActionGeometry(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMenuBar) ActionAt(param1 *QPoint) *QAction {
	ret := C.QMenuBar_ActionAt(this.h, param1.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) SetCornerWidget(w *QWidget) {
	C.QMenuBar_SetCornerWidget(this.h, w.cPointer())
}

func (this *QMenuBar) CornerWidget() *QWidget {
	ret := C.QMenuBar_CornerWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) IsNativeMenuBar() bool {
	ret := C.QMenuBar_IsNativeMenuBar(this.h)
	return (bool)(ret)
}

func (this *QMenuBar) SetNativeMenuBar(nativeMenuBar bool) {
	C.QMenuBar_SetNativeMenuBar(this.h, (C.bool)(nativeMenuBar))
}

func (this *QMenuBar) SetVisible(visible bool) {
	C.QMenuBar_SetVisible(this.h, (C.bool)(visible))
}

func (this *QMenuBar) Triggered(action *QAction) {
	C.QMenuBar_Triggered(this.h, action.cPointer())
}

func (this *QMenuBar) OnTriggered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMenuBar_connect_Triggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMenuBar) Hovered(action *QAction) {
	C.QMenuBar_Hovered(this.h, action.cPointer())
}

func (this *QMenuBar) OnHovered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMenuBar_connect_Hovered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QMenuBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenuBar_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMenuBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenuBar_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMenuBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenuBar_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMenuBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMenuBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMenuBar) SetCornerWidget2(w *QWidget, corner uintptr) {
	C.QMenuBar_SetCornerWidget2(this.h, w.cPointer(), (C.uintptr_t)(corner))
}

func (this *QMenuBar) CornerWidget1(corner uintptr) *QWidget {
	ret := C.QMenuBar_CornerWidget1(this.h, (C.uintptr_t)(corner))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QMenuBar) Delete() {
	C.QMenuBar_Delete(this.h)
}
