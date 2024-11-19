package qt

/*

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
	h          *C.QMenuBar
	isSubclass bool
	*QWidget
}

func (this *QMenuBar) cPointer() *C.QMenuBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMenuBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMenuBar constructs the type using only CGO pointers.
func newQMenuBar(h *C.QMenuBar, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QMenuBar {
	if h == nil {
		return nil
	}
	return &QMenuBar{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQMenuBar constructs the type using only unsafe pointers.
func UnsafeNewQMenuBar(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QMenuBar {
	if h == nil {
		return nil
	}

	return &QMenuBar{h: (*C.QMenuBar)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQMenuBar constructs a new QMenuBar object.
func NewQMenuBar(parent *QWidget) *QMenuBar {
	var outptr_QMenuBar *C.QMenuBar = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QMenuBar_new(parent.cPointer(), &outptr_QMenuBar, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQMenuBar(outptr_QMenuBar, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQMenuBar2 constructs a new QMenuBar object.
func NewQMenuBar2() *QMenuBar {
	var outptr_QMenuBar *C.QMenuBar = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QMenuBar_new2(&outptr_QMenuBar, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQMenuBar(outptr_QMenuBar, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QMenuBar) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMenuBar_MetaObject(this.h)))
}

func (this *QMenuBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMenuBar_Metacast(this.h, param1_Cstring))
}

func QMenuBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenuBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenuBar) AddAction(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_AddAction(this.h, text_ms)), nil)
}

func (this *QMenuBar) AddMenu(menu *QMenu) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_AddMenu(this.h, menu.cPointer())), nil)
}

func (this *QMenuBar) AddMenuWithTitle(title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return UnsafeNewQMenu(unsafe.Pointer(C.QMenuBar_AddMenuWithTitle(this.h, title_ms)), nil, nil, nil)
}

func (this *QMenuBar) AddMenu2(icon *QIcon, title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return UnsafeNewQMenu(unsafe.Pointer(C.QMenuBar_AddMenu2(this.h, icon.cPointer(), title_ms)), nil, nil, nil)
}

func (this *QMenuBar) AddSeparator() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_AddSeparator(this.h)), nil)
}

func (this *QMenuBar) InsertSeparator(before *QAction) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_InsertSeparator(this.h, before.cPointer())), nil)
}

func (this *QMenuBar) InsertMenu(before *QAction, menu *QMenu) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_InsertMenu(this.h, before.cPointer(), menu.cPointer())), nil)
}

func (this *QMenuBar) Clear() {
	C.QMenuBar_Clear(this.h)
}

func (this *QMenuBar) ActiveAction() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_ActiveAction(this.h)), nil)
}

func (this *QMenuBar) SetActiveAction(action *QAction) {
	C.QMenuBar_SetActiveAction(this.h, action.cPointer())
}

func (this *QMenuBar) SetDefaultUp(defaultUp bool) {
	C.QMenuBar_SetDefaultUp(this.h, (C.bool)(defaultUp))
}

func (this *QMenuBar) IsDefaultUp() bool {
	return (bool)(C.QMenuBar_IsDefaultUp(this.h))
}

func (this *QMenuBar) SizeHint() *QSize {
	_ret := C.QMenuBar_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenuBar) MinimumSizeHint() *QSize {
	_ret := C.QMenuBar_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenuBar) HeightForWidth(param1 int) int {
	return (int)(C.QMenuBar_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QMenuBar) ActionGeometry(param1 *QAction) *QRect {
	_ret := C.QMenuBar_ActionGeometry(this.h, param1.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenuBar) ActionAt(param1 *QPoint) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_ActionAt(this.h, param1.cPointer())), nil)
}

func (this *QMenuBar) SetCornerWidget(w *QWidget) {
	C.QMenuBar_SetCornerWidget(this.h, w.cPointer())
}

func (this *QMenuBar) CornerWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QMenuBar_CornerWidget(this.h)), nil, nil)
}

func (this *QMenuBar) IsNativeMenuBar() bool {
	return (bool)(C.QMenuBar_IsNativeMenuBar(this.h))
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
func (this *QMenuBar) OnTriggered(slot func(action *QAction)) {
	C.QMenuBar_connect_Triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_Triggered
func miqt_exec_callback_QMenuBar_Triggered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAction(unsafe.Pointer(action), nil)

	gofunc(slotval1)
}

func (this *QMenuBar) Hovered(action *QAction) {
	C.QMenuBar_Hovered(this.h, action.cPointer())
}
func (this *QMenuBar) OnHovered(slot func(action *QAction)) {
	C.QMenuBar_connect_Hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_Hovered
func miqt_exec_callback_QMenuBar_Hovered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAction(unsafe.Pointer(action), nil)

	gofunc(slotval1)
}

func QMenuBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenuBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenuBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenuBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenuBar) SetCornerWidget2(w *QWidget, corner Corner) {
	C.QMenuBar_SetCornerWidget2(this.h, w.cPointer(), (C.int)(corner))
}

func (this *QMenuBar) CornerWidget1(corner Corner) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QMenuBar_CornerWidget1(this.h, (C.int)(corner))), nil, nil)
}

func (this *QMenuBar) callVirtualBase_SizeHint() *QSize {

	_ret := C.QMenuBar_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenuBar) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QMenuBar_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_SizeHint
func miqt_exec_callback_QMenuBar_SizeHint(self *C.QMenuBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QMenuBar_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenuBar) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	C.QMenuBar_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_MinimumSizeHint
func miqt_exec_callback_QMenuBar_MinimumSizeHint(self *C.QMenuBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QMenuBar_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMenuBar) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QMenuBar_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_HeightForWidth
func miqt_exec_callback_QMenuBar_HeightForWidth(self *C.QMenuBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_SetVisible(visible bool) {

	C.QMenuBar_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMenuBar) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	C.QMenuBar_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_SetVisible
func miqt_exec_callback_QMenuBar_SetVisible(self *C.QMenuBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMenuBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMenuBar) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QMenuBar_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	C.QMenuBar_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_ChangeEvent
func miqt_exec_callback_QMenuBar_ChangeEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QMenuBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QMenuBar_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	C.QMenuBar_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_KeyPressEvent
func miqt_exec_callback_QMenuBar_KeyPressEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QMenuBar_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	C.QMenuBar_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_MouseReleaseEvent
func miqt_exec_callback_QMenuBar_MouseReleaseEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QMenuBar_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	C.QMenuBar_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_MousePressEvent
func miqt_exec_callback_QMenuBar_MousePressEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QMenuBar_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	C.QMenuBar_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_MouseMoveEvent
func miqt_exec_callback_QMenuBar_MouseMoveEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_LeaveEvent(param1 *QEvent) {

	C.QMenuBar_virtualbase_LeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnLeaveEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	C.QMenuBar_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_LeaveEvent
func miqt_exec_callback_QMenuBar_LeaveEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QMenuBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QMenuBar_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	C.QMenuBar_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_PaintEvent
func miqt_exec_callback_QMenuBar_PaintEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QMenuBar_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	C.QMenuBar_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_ResizeEvent
func miqt_exec_callback_QMenuBar_ResizeEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_ActionEvent(param1 *QActionEvent) {

	C.QMenuBar_virtualbase_ActionEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnActionEvent(slot func(super func(param1 *QActionEvent), param1 *QActionEvent)) {
	C.QMenuBar_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_ActionEvent
func miqt_exec_callback_QMenuBar_ActionEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QActionEvent), param1 *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QMenuBar_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	C.QMenuBar_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_FocusOutEvent
func miqt_exec_callback_QMenuBar_FocusOutEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QMenuBar_virtualbase_FocusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	C.QMenuBar_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_FocusInEvent
func miqt_exec_callback_QMenuBar_FocusInEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QMenuBar_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	C.QMenuBar_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_TimerEvent
func miqt_exec_callback_QMenuBar_TimerEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QMenuBar_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QMenuBar) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	C.QMenuBar_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_EventFilter
func miqt_exec_callback_QMenuBar_EventFilter(self *C.QMenuBar, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(param1))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QMenuBar_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QMenuBar) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	C.QMenuBar_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_Event
func miqt_exec_callback_QMenuBar_Event(self *C.QMenuBar, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_DevType() int {

	return (int)(C.QMenuBar_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QMenuBar) OnDevType(slot func(super func() int) int) {
	C.QMenuBar_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_DevType
func miqt_exec_callback_QMenuBar_DevType(self *C.QMenuBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QMenuBar_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QMenuBar) OnHasHeightForWidth(slot func(super func() bool) bool) {
	C.QMenuBar_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_HasHeightForWidth
func miqt_exec_callback_QMenuBar_HasHeightForWidth(self *C.QMenuBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QMenuBar_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QMenuBar) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	C.QMenuBar_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_PaintEngine
func miqt_exec_callback_QMenuBar_PaintEngine(self *C.QMenuBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QMenuBar_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QMenuBar_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_MouseDoubleClickEvent
func miqt_exec_callback_QMenuBar_MouseDoubleClickEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QMenuBar_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	C.QMenuBar_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_WheelEvent
func miqt_exec_callback_QMenuBar_WheelEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QMenuBar_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QMenuBar_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_KeyReleaseEvent
func miqt_exec_callback_QMenuBar_KeyReleaseEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_EnterEvent(event *QEvent) {

	C.QMenuBar_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QMenuBar_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_EnterEvent
func miqt_exec_callback_QMenuBar_EnterEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMenuBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QMenuBar_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	C.QMenuBar_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_MoveEvent
func miqt_exec_callback_QMenuBar_MoveEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QMenuBar_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	C.QMenuBar_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_CloseEvent
func miqt_exec_callback_QMenuBar_CloseEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QMenuBar_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	C.QMenuBar_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_ContextMenuEvent
func miqt_exec_callback_QMenuBar_ContextMenuEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QMenuBar_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	C.QMenuBar_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_TabletEvent
func miqt_exec_callback_QMenuBar_TabletEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QMenuBar_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	C.QMenuBar_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_DragEnterEvent
func miqt_exec_callback_QMenuBar_DragEnterEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QMenuBar_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	C.QMenuBar_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_DragMoveEvent
func miqt_exec_callback_QMenuBar_DragMoveEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QMenuBar_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	C.QMenuBar_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_DragLeaveEvent
func miqt_exec_callback_QMenuBar_DragLeaveEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QMenuBar_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	C.QMenuBar_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_DropEvent
func miqt_exec_callback_QMenuBar_DropEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QMenuBar_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	C.QMenuBar_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_ShowEvent
func miqt_exec_callback_QMenuBar_ShowEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QMenuBar_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	C.QMenuBar_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_HideEvent
func miqt_exec_callback_QMenuBar_HideEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QMenuBar_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QMenuBar) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	C.QMenuBar_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_NativeEvent
func miqt_exec_callback_QMenuBar_NativeEvent(self *C.QMenuBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QMenuBar_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMenuBar) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	C.QMenuBar_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_Metric
func miqt_exec_callback_QMenuBar_Metric(self *C.QMenuBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_InitPainter(painter *QPainter) {

	C.QMenuBar_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QMenuBar) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	C.QMenuBar_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_InitPainter
func miqt_exec_callback_QMenuBar_InitPainter(self *C.QMenuBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QMenuBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QMenuBar) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QMenuBar_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QMenuBar) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	C.QMenuBar_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_Redirected
func miqt_exec_callback_QMenuBar_Redirected(self *C.QMenuBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QMenuBar_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QMenuBar) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	C.QMenuBar_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_SharedPainter
func miqt_exec_callback_QMenuBar_SharedPainter(self *C.QMenuBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QMenuBar_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	C.QMenuBar_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_InputMethodEvent
func miqt_exec_callback_QMenuBar_InputMethodEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMenuBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QMenuBar_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenuBar) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	C.QMenuBar_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_InputMethodQuery
func miqt_exec_callback_QMenuBar_InputMethodQuery(self *C.QMenuBar, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QMenuBar_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QMenuBar) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	C.QMenuBar_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_FocusNextPrevChild
func miqt_exec_callback_QMenuBar_FocusNextPrevChild(self *C.QMenuBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QMenuBar) Delete() {
	C.QMenuBar_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMenuBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QMenuBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
