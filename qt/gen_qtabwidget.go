package qt

/*

#include "gen_qtabwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTabWidget__TabPosition int

const (
	QTabWidget__TabPosition__North QTabWidget__TabPosition = 0
	QTabWidget__TabPosition__South QTabWidget__TabPosition = 1
	QTabWidget__TabPosition__West  QTabWidget__TabPosition = 2
	QTabWidget__TabPosition__East  QTabWidget__TabPosition = 3
)

type QTabWidget__TabShape int

const (
	QTabWidget__TabShape__Rounded    QTabWidget__TabShape = 0
	QTabWidget__TabShape__Triangular QTabWidget__TabShape = 1
)

type QTabWidget struct {
	h *C.QTabWidget
	*QWidget
}

func (this *QTabWidget) cPointer() *C.QTabWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTabWidget(h *C.QTabWidget) *QTabWidget {
	if h == nil {
		return nil
	}
	return &QTabWidget{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQTabWidget_U(h unsafe.Pointer) *QTabWidget {
	return newQTabWidget((*C.QTabWidget)(h))
}

// NewQTabWidget constructs a new QTabWidget object.
func NewQTabWidget() *QTabWidget {
	ret := C.QTabWidget_new()
	return newQTabWidget(ret)
}

// NewQTabWidget2 constructs a new QTabWidget object.
func NewQTabWidget2(parent *QWidget) *QTabWidget {
	ret := C.QTabWidget_new2(parent.cPointer())
	return newQTabWidget(ret)
}

func (this *QTabWidget) MetaObject() *QMetaObject {
	ret := C.QTabWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTabWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTabWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabWidget) AddTab(widget *QWidget, param2 string) int {
	param2_Cstring := C.CString(param2)
	defer C.free(unsafe.Pointer(param2_Cstring))
	ret := C.QTabWidget_AddTab(this.h, widget.cPointer(), param2_Cstring, C.size_t(len(param2)))
	return (int)(ret)
}

func (this *QTabWidget) AddTab2(widget *QWidget, icon *QIcon, label string) int {
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QTabWidget_AddTab2(this.h, widget.cPointer(), icon.cPointer(), label_Cstring, C.size_t(len(label)))
	return (int)(ret)
}

func (this *QTabWidget) InsertTab(index int, widget *QWidget, param3 string) int {
	param3_Cstring := C.CString(param3)
	defer C.free(unsafe.Pointer(param3_Cstring))
	ret := C.QTabWidget_InsertTab(this.h, (C.int)(index), widget.cPointer(), param3_Cstring, C.size_t(len(param3)))
	return (int)(ret)
}

func (this *QTabWidget) InsertTab2(index int, widget *QWidget, icon *QIcon, label string) int {
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	ret := C.QTabWidget_InsertTab2(this.h, (C.int)(index), widget.cPointer(), icon.cPointer(), label_Cstring, C.size_t(len(label)))
	return (int)(ret)
}

func (this *QTabWidget) RemoveTab(index int) {
	C.QTabWidget_RemoveTab(this.h, (C.int)(index))
}

func (this *QTabWidget) IsTabEnabled(index int) bool {
	ret := C.QTabWidget_IsTabEnabled(this.h, (C.int)(index))
	return (bool)(ret)
}

func (this *QTabWidget) SetTabEnabled(index int, enabled bool) {
	C.QTabWidget_SetTabEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QTabWidget) IsTabVisible(index int) bool {
	ret := C.QTabWidget_IsTabVisible(this.h, (C.int)(index))
	return (bool)(ret)
}

func (this *QTabWidget) SetTabVisible(index int, visible bool) {
	C.QTabWidget_SetTabVisible(this.h, (C.int)(index), (C.bool)(visible))
}

func (this *QTabWidget) TabText(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabWidget_TabText(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabWidget) SetTabText(index int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTabWidget_SetTabText(this.h, (C.int)(index), text_Cstring, C.size_t(len(text)))
}

func (this *QTabWidget) TabIcon(index int) *QIcon {
	ret := C.QTabWidget_TabIcon(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabWidget) SetTabIcon(index int, icon *QIcon) {
	C.QTabWidget_SetTabIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QTabWidget) SetTabToolTip(index int, tip string) {
	tip_Cstring := C.CString(tip)
	defer C.free(unsafe.Pointer(tip_Cstring))
	C.QTabWidget_SetTabToolTip(this.h, (C.int)(index), tip_Cstring, C.size_t(len(tip)))
}

func (this *QTabWidget) TabToolTip(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabWidget_TabToolTip(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabWidget) SetTabWhatsThis(index int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTabWidget_SetTabWhatsThis(this.h, (C.int)(index), text_Cstring, C.size_t(len(text)))
}

func (this *QTabWidget) TabWhatsThis(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabWidget_TabWhatsThis(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabWidget) CurrentIndex() int {
	ret := C.QTabWidget_CurrentIndex(this.h)
	return (int)(ret)
}

func (this *QTabWidget) CurrentWidget() *QWidget {
	ret := C.QTabWidget_CurrentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QTabWidget) Widget(index int) *QWidget {
	ret := C.QTabWidget_Widget(this.h, (C.int)(index))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QTabWidget) IndexOf(widget *QWidget) int {
	ret := C.QTabWidget_IndexOf(this.h, widget.cPointer())
	return (int)(ret)
}

func (this *QTabWidget) Count() int {
	ret := C.QTabWidget_Count(this.h)
	return (int)(ret)
}

func (this *QTabWidget) TabPosition() QTabWidget__TabPosition {
	ret := C.QTabWidget_TabPosition(this.h)
	return (QTabWidget__TabPosition)(ret)
}

func (this *QTabWidget) SetTabPosition(position QTabWidget__TabPosition) {
	C.QTabWidget_SetTabPosition(this.h, (C.uintptr_t)(position))
}

func (this *QTabWidget) TabsClosable() bool {
	ret := C.QTabWidget_TabsClosable(this.h)
	return (bool)(ret)
}

func (this *QTabWidget) SetTabsClosable(closeable bool) {
	C.QTabWidget_SetTabsClosable(this.h, (C.bool)(closeable))
}

func (this *QTabWidget) IsMovable() bool {
	ret := C.QTabWidget_IsMovable(this.h)
	return (bool)(ret)
}

func (this *QTabWidget) SetMovable(movable bool) {
	C.QTabWidget_SetMovable(this.h, (C.bool)(movable))
}

func (this *QTabWidget) TabShape() QTabWidget__TabShape {
	ret := C.QTabWidget_TabShape(this.h)
	return (QTabWidget__TabShape)(ret)
}

func (this *QTabWidget) SetTabShape(s QTabWidget__TabShape) {
	C.QTabWidget_SetTabShape(this.h, (C.uintptr_t)(s))
}

func (this *QTabWidget) SizeHint() *QSize {
	ret := C.QTabWidget_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabWidget) MinimumSizeHint() *QSize {
	ret := C.QTabWidget_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabWidget) HeightForWidth(width int) int {
	ret := C.QTabWidget_HeightForWidth(this.h, (C.int)(width))
	return (int)(ret)
}

func (this *QTabWidget) HasHeightForWidth() bool {
	ret := C.QTabWidget_HasHeightForWidth(this.h)
	return (bool)(ret)
}

func (this *QTabWidget) SetCornerWidget(w *QWidget) {
	C.QTabWidget_SetCornerWidget(this.h, w.cPointer())
}

func (this *QTabWidget) CornerWidget() *QWidget {
	ret := C.QTabWidget_CornerWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QTabWidget) ElideMode() TextElideMode {
	ret := C.QTabWidget_ElideMode(this.h)
	return (TextElideMode)(ret)
}

func (this *QTabWidget) SetElideMode(mode TextElideMode) {
	C.QTabWidget_SetElideMode(this.h, (C.uintptr_t)(mode))
}

func (this *QTabWidget) IconSize() *QSize {
	ret := C.QTabWidget_IconSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabWidget) SetIconSize(size *QSize) {
	C.QTabWidget_SetIconSize(this.h, size.cPointer())
}

func (this *QTabWidget) UsesScrollButtons() bool {
	ret := C.QTabWidget_UsesScrollButtons(this.h)
	return (bool)(ret)
}

func (this *QTabWidget) SetUsesScrollButtons(useButtons bool) {
	C.QTabWidget_SetUsesScrollButtons(this.h, (C.bool)(useButtons))
}

func (this *QTabWidget) DocumentMode() bool {
	ret := C.QTabWidget_DocumentMode(this.h)
	return (bool)(ret)
}

func (this *QTabWidget) SetDocumentMode(set bool) {
	C.QTabWidget_SetDocumentMode(this.h, (C.bool)(set))
}

func (this *QTabWidget) TabBarAutoHide() bool {
	ret := C.QTabWidget_TabBarAutoHide(this.h)
	return (bool)(ret)
}

func (this *QTabWidget) SetTabBarAutoHide(enabled bool) {
	C.QTabWidget_SetTabBarAutoHide(this.h, (C.bool)(enabled))
}

func (this *QTabWidget) Clear() {
	C.QTabWidget_Clear(this.h)
}

func (this *QTabWidget) TabBar() *QTabBar {
	ret := C.QTabWidget_TabBar(this.h)
	return newQTabBar_U(unsafe.Pointer(ret))
}

func (this *QTabWidget) SetCurrentIndex(index int) {
	C.QTabWidget_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QTabWidget) SetCurrentWidget(widget *QWidget) {
	C.QTabWidget_SetCurrentWidget(this.h, widget.cPointer())
}

func (this *QTabWidget) CurrentChanged(index int) {
	C.QTabWidget_CurrentChanged(this.h, (C.int)(index))
}

func (this *QTabWidget) OnCurrentChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTabWidget_connect_CurrentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTabWidget) TabCloseRequested(index int) {
	C.QTabWidget_TabCloseRequested(this.h, (C.int)(index))
}

func (this *QTabWidget) OnTabCloseRequested(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTabWidget_connect_TabCloseRequested(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTabWidget) TabBarClicked(index int) {
	C.QTabWidget_TabBarClicked(this.h, (C.int)(index))
}

func (this *QTabWidget) OnTabBarClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTabWidget_connect_TabBarClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTabWidget) TabBarDoubleClicked(index int) {
	C.QTabWidget_TabBarDoubleClicked(this.h, (C.int)(index))
}

func (this *QTabWidget) OnTabBarDoubleClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTabWidget_connect_TabBarDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QTabWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTabWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTabWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTabWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTabWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTabWidget) SetCornerWidget2(w *QWidget, corner Corner) {
	C.QTabWidget_SetCornerWidget2(this.h, w.cPointer(), (C.uintptr_t)(corner))
}

func (this *QTabWidget) CornerWidget1(corner Corner) *QWidget {
	ret := C.QTabWidget_CornerWidget1(this.h, (C.uintptr_t)(corner))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QTabWidget) Delete() {
	C.QTabWidget_Delete(this.h)
}
