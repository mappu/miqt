package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtabbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTabBar struct {
	h *C.QTabBar
	*QWidget
}

func (this *QTabBar) cPointer() *C.QTabBar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTabBar(h *C.QTabBar) *QTabBar {
	return &QTabBar{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQTabBar_U(h unsafe.Pointer) *QTabBar {
	return newQTabBar((*C.QTabBar)(h))
}

// NewQTabBar constructs a new QTabBar object.
func NewQTabBar() *QTabBar {
	ret := C.QTabBar_new()
	return newQTabBar(ret)
}

// NewQTabBar2 constructs a new QTabBar object.
func NewQTabBar2(parent *QWidget) *QTabBar {
	ret := C.QTabBar_new2(parent.cPointer())
	return newQTabBar(ret)
}

func (this *QTabBar) MetaObject() *QMetaObject {
	ret := C.QTabBar_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTabBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTabBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabBar) AddTab(text string) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTabBar_AddTab(this.h, text_Cstring, C.ulong(len(text)))
	return (int)(ret)
}

func (this *QTabBar) AddTab2(icon *QIcon, text string) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTabBar_AddTab2(this.h, icon.cPointer(), text_Cstring, C.ulong(len(text)))
	return (int)(ret)
}

func (this *QTabBar) InsertTab(index int, text string) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTabBar_InsertTab(this.h, (C.int)(index), text_Cstring, C.ulong(len(text)))
	return (int)(ret)
}

func (this *QTabBar) InsertTab2(index int, icon *QIcon, text string) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTabBar_InsertTab2(this.h, (C.int)(index), icon.cPointer(), text_Cstring, C.ulong(len(text)))
	return (int)(ret)
}

func (this *QTabBar) RemoveTab(index int) {
	C.QTabBar_RemoveTab(this.h, (C.int)(index))
}

func (this *QTabBar) MoveTab(from int, to int) {
	C.QTabBar_MoveTab(this.h, (C.int)(from), (C.int)(to))
}

func (this *QTabBar) IsTabEnabled(index int) bool {
	ret := C.QTabBar_IsTabEnabled(this.h, (C.int)(index))
	return (bool)(ret)
}

func (this *QTabBar) SetTabEnabled(index int, enabled bool) {
	C.QTabBar_SetTabEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QTabBar) IsTabVisible(index int) bool {
	ret := C.QTabBar_IsTabVisible(this.h, (C.int)(index))
	return (bool)(ret)
}

func (this *QTabBar) SetTabVisible(index int, visible bool) {
	C.QTabBar_SetTabVisible(this.h, (C.int)(index), (C.bool)(visible))
}

func (this *QTabBar) TabText(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_TabText(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabBar) SetTabText(index int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTabBar_SetTabText(this.h, (C.int)(index), text_Cstring, C.ulong(len(text)))
}

func (this *QTabBar) TabTextColor(index int) *QColor {
	ret := C.QTabBar_TabTextColor(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabBar) SetTabTextColor(index int, color *QColor) {
	C.QTabBar_SetTabTextColor(this.h, (C.int)(index), color.cPointer())
}

func (this *QTabBar) TabIcon(index int) *QIcon {
	ret := C.QTabBar_TabIcon(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabBar) SetTabIcon(index int, icon *QIcon) {
	C.QTabBar_SetTabIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QTabBar) SetTabToolTip(index int, tip string) {
	tip_Cstring := C.CString(tip)
	defer C.free(unsafe.Pointer(tip_Cstring))
	C.QTabBar_SetTabToolTip(this.h, (C.int)(index), tip_Cstring, C.ulong(len(tip)))
}

func (this *QTabBar) TabToolTip(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_TabToolTip(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabBar) SetTabWhatsThis(index int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTabBar_SetTabWhatsThis(this.h, (C.int)(index), text_Cstring, C.ulong(len(text)))
}

func (this *QTabBar) TabWhatsThis(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_TabWhatsThis(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabBar) SetTabData(index int, data *QVariant) {
	C.QTabBar_SetTabData(this.h, (C.int)(index), data.cPointer())
}

func (this *QTabBar) TabData(index int) *QVariant {
	ret := C.QTabBar_TabData(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabBar) TabRect(index int) *QRect {
	ret := C.QTabBar_TabRect(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabBar) TabAt(pos *QPoint) int {
	ret := C.QTabBar_TabAt(this.h, pos.cPointer())
	return (int)(ret)
}

func (this *QTabBar) CurrentIndex() int {
	ret := C.QTabBar_CurrentIndex(this.h)
	return (int)(ret)
}

func (this *QTabBar) Count() int {
	ret := C.QTabBar_Count(this.h)
	return (int)(ret)
}

func (this *QTabBar) SizeHint() *QSize {
	ret := C.QTabBar_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabBar) MinimumSizeHint() *QSize {
	ret := C.QTabBar_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabBar) SetDrawBase(drawTheBase bool) {
	C.QTabBar_SetDrawBase(this.h, (C.bool)(drawTheBase))
}

func (this *QTabBar) DrawBase() bool {
	ret := C.QTabBar_DrawBase(this.h)
	return (bool)(ret)
}

func (this *QTabBar) IconSize() *QSize {
	ret := C.QTabBar_IconSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabBar) SetIconSize(size *QSize) {
	C.QTabBar_SetIconSize(this.h, size.cPointer())
}

func (this *QTabBar) UsesScrollButtons() bool {
	ret := C.QTabBar_UsesScrollButtons(this.h)
	return (bool)(ret)
}

func (this *QTabBar) SetUsesScrollButtons(useButtons bool) {
	C.QTabBar_SetUsesScrollButtons(this.h, (C.bool)(useButtons))
}

func (this *QTabBar) TabsClosable() bool {
	ret := C.QTabBar_TabsClosable(this.h)
	return (bool)(ret)
}

func (this *QTabBar) SetTabsClosable(closable bool) {
	C.QTabBar_SetTabsClosable(this.h, (C.bool)(closable))
}

func (this *QTabBar) Expanding() bool {
	ret := C.QTabBar_Expanding(this.h)
	return (bool)(ret)
}

func (this *QTabBar) SetExpanding(enabled bool) {
	C.QTabBar_SetExpanding(this.h, (C.bool)(enabled))
}

func (this *QTabBar) IsMovable() bool {
	ret := C.QTabBar_IsMovable(this.h)
	return (bool)(ret)
}

func (this *QTabBar) SetMovable(movable bool) {
	C.QTabBar_SetMovable(this.h, (C.bool)(movable))
}

func (this *QTabBar) DocumentMode() bool {
	ret := C.QTabBar_DocumentMode(this.h)
	return (bool)(ret)
}

func (this *QTabBar) SetDocumentMode(set bool) {
	C.QTabBar_SetDocumentMode(this.h, (C.bool)(set))
}

func (this *QTabBar) AutoHide() bool {
	ret := C.QTabBar_AutoHide(this.h)
	return (bool)(ret)
}

func (this *QTabBar) SetAutoHide(hide bool) {
	C.QTabBar_SetAutoHide(this.h, (C.bool)(hide))
}

func (this *QTabBar) ChangeCurrentOnDrag() bool {
	ret := C.QTabBar_ChangeCurrentOnDrag(this.h)
	return (bool)(ret)
}

func (this *QTabBar) SetChangeCurrentOnDrag(change bool) {
	C.QTabBar_SetChangeCurrentOnDrag(this.h, (C.bool)(change))
}

func (this *QTabBar) AccessibleTabName(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_AccessibleTabName(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabBar) SetAccessibleTabName(index int, name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QTabBar_SetAccessibleTabName(this.h, (C.int)(index), name_Cstring, C.ulong(len(name)))
}

func (this *QTabBar) SetCurrentIndex(index int) {
	C.QTabBar_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QTabBar) CurrentChanged(index int) {
	C.QTabBar_CurrentChanged(this.h, (C.int)(index))
}

func (this *QTabBar) OnCurrentChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTabBar_connect_CurrentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTabBar) TabCloseRequested(index int) {
	C.QTabBar_TabCloseRequested(this.h, (C.int)(index))
}

func (this *QTabBar) OnTabCloseRequested(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTabBar_connect_TabCloseRequested(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTabBar) TabMoved(from int, to int) {
	C.QTabBar_TabMoved(this.h, (C.int)(from), (C.int)(to))
}

func (this *QTabBar) OnTabMoved(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTabBar_connect_TabMoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTabBar) TabBarClicked(index int) {
	C.QTabBar_TabBarClicked(this.h, (C.int)(index))
}

func (this *QTabBar) OnTabBarClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTabBar_connect_TabBarClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTabBar) TabBarDoubleClicked(index int) {
	C.QTabBar_TabBarDoubleClicked(this.h, (C.int)(index))
}

func (this *QTabBar) OnTabBarDoubleClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTabBar_connect_TabBarDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QTabBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTabBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTabBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTabBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabBar) Delete() {
	C.QTabBar_Delete(this.h)
}
