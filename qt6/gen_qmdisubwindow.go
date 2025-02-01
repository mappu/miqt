package qt6

/*

#include "gen_qmdisubwindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMdiSubWindow__SubWindowOption int

const (
	QMdiSubWindow__AllowOutsideAreaHorizontally QMdiSubWindow__SubWindowOption = 1
	QMdiSubWindow__AllowOutsideAreaVertically   QMdiSubWindow__SubWindowOption = 2
	QMdiSubWindow__RubberBandResize             QMdiSubWindow__SubWindowOption = 4
	QMdiSubWindow__RubberBandMove               QMdiSubWindow__SubWindowOption = 8
)

type QMdiSubWindow struct {
	h *C.QMdiSubWindow
	*QWidget
}

func (this *QMdiSubWindow) cPointer() *C.QMdiSubWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMdiSubWindow) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMdiSubWindow constructs the type using only CGO pointers.
func newQMdiSubWindow(h *C.QMdiSubWindow) *QMdiSubWindow {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QMdiSubWindow_virtbase(h, &outptr_QWidget)

	return &QMdiSubWindow{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQMdiSubWindow constructs the type using only unsafe pointers.
func UnsafeNewQMdiSubWindow(h unsafe.Pointer) *QMdiSubWindow {
	return newQMdiSubWindow((*C.QMdiSubWindow)(h))
}

// NewQMdiSubWindow constructs a new QMdiSubWindow object.
func NewQMdiSubWindow(parent *QWidget) *QMdiSubWindow {

	return newQMdiSubWindow(C.QMdiSubWindow_new(parent.cPointer()))
}

// NewQMdiSubWindow2 constructs a new QMdiSubWindow object.
func NewQMdiSubWindow2() *QMdiSubWindow {

	return newQMdiSubWindow(C.QMdiSubWindow_new2())
}

// NewQMdiSubWindow3 constructs a new QMdiSubWindow object.
func NewQMdiSubWindow3(parent *QWidget, flags WindowType) *QMdiSubWindow {

	return newQMdiSubWindow(C.QMdiSubWindow_new3(parent.cPointer(), (C.int)(flags)))
}

func (this *QMdiSubWindow) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMdiSubWindow_metaObject(this.h))
}

func (this *QMdiSubWindow) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMdiSubWindow_metacast(this.h, param1_Cstring))
}

func QMdiSubWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMdiSubWindow_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiSubWindow) SizeHint() *QSize {
	_goptr := newQSize(C.QMdiSubWindow_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiSubWindow) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QMdiSubWindow_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiSubWindow) SetWidget(widget *QWidget) {
	C.QMdiSubWindow_setWidget(this.h, widget.cPointer())
}

func (this *QMdiSubWindow) Widget() *QWidget {
	return newQWidget(C.QMdiSubWindow_widget(this.h))
}

func (this *QMdiSubWindow) MaximizedButtonsWidget() *QWidget {
	return newQWidget(C.QMdiSubWindow_maximizedButtonsWidget(this.h))
}

func (this *QMdiSubWindow) MaximizedSystemMenuIconWidget() *QWidget {
	return newQWidget(C.QMdiSubWindow_maximizedSystemMenuIconWidget(this.h))
}

func (this *QMdiSubWindow) IsShaded() bool {
	return (bool)(C.QMdiSubWindow_isShaded(this.h))
}

func (this *QMdiSubWindow) SetOption(option QMdiSubWindow__SubWindowOption) {
	C.QMdiSubWindow_setOption(this.h, (C.int)(option))
}

func (this *QMdiSubWindow) TestOption(param1 QMdiSubWindow__SubWindowOption) bool {
	return (bool)(C.QMdiSubWindow_testOption(this.h, (C.int)(param1)))
}

func (this *QMdiSubWindow) SetKeyboardSingleStep(step int) {
	C.QMdiSubWindow_setKeyboardSingleStep(this.h, (C.int)(step))
}

func (this *QMdiSubWindow) KeyboardSingleStep() int {
	return (int)(C.QMdiSubWindow_keyboardSingleStep(this.h))
}

func (this *QMdiSubWindow) SetKeyboardPageStep(step int) {
	C.QMdiSubWindow_setKeyboardPageStep(this.h, (C.int)(step))
}

func (this *QMdiSubWindow) KeyboardPageStep() int {
	return (int)(C.QMdiSubWindow_keyboardPageStep(this.h))
}

func (this *QMdiSubWindow) SetSystemMenu(systemMenu *QMenu) {
	C.QMdiSubWindow_setSystemMenu(this.h, systemMenu.cPointer())
}

func (this *QMdiSubWindow) SystemMenu() *QMenu {
	return newQMenu(C.QMdiSubWindow_systemMenu(this.h))
}

func (this *QMdiSubWindow) MdiArea() *QMdiArea {
	return newQMdiArea(C.QMdiSubWindow_mdiArea(this.h))
}

func (this *QMdiSubWindow) WindowStateChanged(oldState WindowState, newState WindowState) {
	C.QMdiSubWindow_windowStateChanged(this.h, (C.int)(oldState), (C.int)(newState))
}
func (this *QMdiSubWindow) OnWindowStateChanged(slot func(oldState WindowState, newState WindowState)) {
	C.QMdiSubWindow_connect_windowStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_windowStateChanged
func miqt_exec_callback_QMdiSubWindow_windowStateChanged(cb C.intptr_t, oldState C.int, newState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(oldState WindowState, newState WindowState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (WindowState)(oldState)

	slotval2 := (WindowState)(newState)

	gofunc(slotval1, slotval2)
}

func (this *QMdiSubWindow) AboutToActivate() {
	C.QMdiSubWindow_aboutToActivate(this.h)
}
func (this *QMdiSubWindow) OnAboutToActivate(slot func()) {
	C.QMdiSubWindow_connect_aboutToActivate(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_aboutToActivate
func miqt_exec_callback_QMdiSubWindow_aboutToActivate(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMdiSubWindow) ShowSystemMenu() {
	C.QMdiSubWindow_showSystemMenu(this.h)
}

func (this *QMdiSubWindow) ShowShaded() {
	C.QMdiSubWindow_showShaded(this.h)
}

func QMdiSubWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiSubWindow_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiSubWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiSubWindow_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiSubWindow) SetOption2(option QMdiSubWindow__SubWindowOption, on bool) {
	C.QMdiSubWindow_setOption2(this.h, (C.int)(option), (C.bool)(on))
}

func (this *QMdiSubWindow) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QMdiSubWindow_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiSubWindow) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMdiSubWindow_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_sizeHint
func miqt_exec_callback_QMdiSubWindow_sizeHint(self *C.QMdiSubWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QMdiSubWindow_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiSubWindow) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMdiSubWindow_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_minimumSizeHint
func miqt_exec_callback_QMdiSubWindow_minimumSizeHint(self *C.QMdiSubWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QMdiSubWindow_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QMdiSubWindow) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QMdiSubWindow_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_eventFilter
func miqt_exec_callback_QMdiSubWindow_eventFilter(self *C.QMdiSubWindow, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QMdiSubWindow_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMdiSubWindow) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QMdiSubWindow_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_event
func miqt_exec_callback_QMdiSubWindow_event(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_ShowEvent(showEvent *QShowEvent) {

	C.QMdiSubWindow_virtualbase_showEvent(unsafe.Pointer(this.h), showEvent.cPointer())

}
func (this *QMdiSubWindow) OnShowEvent(slot func(super func(showEvent *QShowEvent), showEvent *QShowEvent)) {
	ok := C.QMdiSubWindow_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_showEvent
func miqt_exec_callback_QMdiSubWindow_showEvent(self *C.QMdiSubWindow, cb C.intptr_t, showEvent *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(showEvent *QShowEvent), showEvent *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(showEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_HideEvent(hideEvent *QHideEvent) {

	C.QMdiSubWindow_virtualbase_hideEvent(unsafe.Pointer(this.h), hideEvent.cPointer())

}
func (this *QMdiSubWindow) OnHideEvent(slot func(super func(hideEvent *QHideEvent), hideEvent *QHideEvent)) {
	ok := C.QMdiSubWindow_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_hideEvent
func miqt_exec_callback_QMdiSubWindow_hideEvent(self *C.QMdiSubWindow, cb C.intptr_t, hideEvent *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(hideEvent *QHideEvent), hideEvent *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(hideEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ChangeEvent(changeEvent *QEvent) {

	C.QMdiSubWindow_virtualbase_changeEvent(unsafe.Pointer(this.h), changeEvent.cPointer())

}
func (this *QMdiSubWindow) OnChangeEvent(slot func(super func(changeEvent *QEvent), changeEvent *QEvent)) {
	ok := C.QMdiSubWindow_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_changeEvent
func miqt_exec_callback_QMdiSubWindow_changeEvent(self *C.QMdiSubWindow, cb C.intptr_t, changeEvent *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(changeEvent *QEvent), changeEvent *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(changeEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_CloseEvent(closeEvent *QCloseEvent) {

	C.QMdiSubWindow_virtualbase_closeEvent(unsafe.Pointer(this.h), closeEvent.cPointer())

}
func (this *QMdiSubWindow) OnCloseEvent(slot func(super func(closeEvent *QCloseEvent), closeEvent *QCloseEvent)) {
	ok := C.QMdiSubWindow_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_closeEvent
func miqt_exec_callback_QMdiSubWindow_closeEvent(self *C.QMdiSubWindow, cb C.intptr_t, closeEvent *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(closeEvent *QCloseEvent), closeEvent *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(closeEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_LeaveEvent(leaveEvent *QEvent) {

	C.QMdiSubWindow_virtualbase_leaveEvent(unsafe.Pointer(this.h), leaveEvent.cPointer())

}
func (this *QMdiSubWindow) OnLeaveEvent(slot func(super func(leaveEvent *QEvent), leaveEvent *QEvent)) {
	ok := C.QMdiSubWindow_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_leaveEvent
func miqt_exec_callback_QMdiSubWindow_leaveEvent(self *C.QMdiSubWindow, cb C.intptr_t, leaveEvent *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(leaveEvent *QEvent), leaveEvent *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(leaveEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ResizeEvent(resizeEvent *QResizeEvent) {

	C.QMdiSubWindow_virtualbase_resizeEvent(unsafe.Pointer(this.h), resizeEvent.cPointer())

}
func (this *QMdiSubWindow) OnResizeEvent(slot func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent)) {
	ok := C.QMdiSubWindow_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_resizeEvent
func miqt_exec_callback_QMdiSubWindow_resizeEvent(self *C.QMdiSubWindow, cb C.intptr_t, resizeEvent *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(resizeEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_TimerEvent(timerEvent *QTimerEvent) {

	C.QMdiSubWindow_virtualbase_timerEvent(unsafe.Pointer(this.h), timerEvent.cPointer())

}
func (this *QMdiSubWindow) OnTimerEvent(slot func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent)) {
	ok := C.QMdiSubWindow_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_timerEvent
func miqt_exec_callback_QMdiSubWindow_timerEvent(self *C.QMdiSubWindow, cb C.intptr_t, timerEvent *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(timerEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MoveEvent(moveEvent *QMoveEvent) {

	C.QMdiSubWindow_virtualbase_moveEvent(unsafe.Pointer(this.h), moveEvent.cPointer())

}
func (this *QMdiSubWindow) OnMoveEvent(slot func(super func(moveEvent *QMoveEvent), moveEvent *QMoveEvent)) {
	ok := C.QMdiSubWindow_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_moveEvent
func miqt_exec_callback_QMdiSubWindow_moveEvent(self *C.QMdiSubWindow, cb C.intptr_t, moveEvent *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(moveEvent *QMoveEvent), moveEvent *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(moveEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_PaintEvent(paintEvent *QPaintEvent) {

	C.QMdiSubWindow_virtualbase_paintEvent(unsafe.Pointer(this.h), paintEvent.cPointer())

}
func (this *QMdiSubWindow) OnPaintEvent(slot func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent)) {
	ok := C.QMdiSubWindow_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_paintEvent
func miqt_exec_callback_QMdiSubWindow_paintEvent(self *C.QMdiSubWindow, cb C.intptr_t, paintEvent *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(paintEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MousePressEvent(mouseEvent *QMouseEvent) {

	C.QMdiSubWindow_virtualbase_mousePressEvent(unsafe.Pointer(this.h), mouseEvent.cPointer())

}
func (this *QMdiSubWindow) OnMousePressEvent(slot func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent)) {
	ok := C.QMdiSubWindow_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_mousePressEvent
func miqt_exec_callback_QMdiSubWindow_mousePressEvent(self *C.QMdiSubWindow, cb C.intptr_t, mouseEvent *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(mouseEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MouseDoubleClickEvent(mouseEvent *QMouseEvent) {

	C.QMdiSubWindow_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), mouseEvent.cPointer())

}
func (this *QMdiSubWindow) OnMouseDoubleClickEvent(slot func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent)) {
	ok := C.QMdiSubWindow_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_mouseDoubleClickEvent
func miqt_exec_callback_QMdiSubWindow_mouseDoubleClickEvent(self *C.QMdiSubWindow, cb C.intptr_t, mouseEvent *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(mouseEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MouseReleaseEvent(mouseEvent *QMouseEvent) {

	C.QMdiSubWindow_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), mouseEvent.cPointer())

}
func (this *QMdiSubWindow) OnMouseReleaseEvent(slot func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent)) {
	ok := C.QMdiSubWindow_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_mouseReleaseEvent
func miqt_exec_callback_QMdiSubWindow_mouseReleaseEvent(self *C.QMdiSubWindow, cb C.intptr_t, mouseEvent *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(mouseEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MouseMoveEvent(mouseEvent *QMouseEvent) {

	C.QMdiSubWindow_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), mouseEvent.cPointer())

}
func (this *QMdiSubWindow) OnMouseMoveEvent(slot func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent)) {
	ok := C.QMdiSubWindow_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_mouseMoveEvent
func miqt_exec_callback_QMdiSubWindow_mouseMoveEvent(self *C.QMdiSubWindow, cb C.intptr_t, mouseEvent *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(mouseEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_KeyPressEvent(keyEvent *QKeyEvent) {

	C.QMdiSubWindow_virtualbase_keyPressEvent(unsafe.Pointer(this.h), keyEvent.cPointer())

}
func (this *QMdiSubWindow) OnKeyPressEvent(slot func(super func(keyEvent *QKeyEvent), keyEvent *QKeyEvent)) {
	ok := C.QMdiSubWindow_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_keyPressEvent
func miqt_exec_callback_QMdiSubWindow_keyPressEvent(self *C.QMdiSubWindow, cb C.intptr_t, keyEvent *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(keyEvent *QKeyEvent), keyEvent *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(keyEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ContextMenuEvent(contextMenuEvent *QContextMenuEvent) {

	C.QMdiSubWindow_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), contextMenuEvent.cPointer())

}
func (this *QMdiSubWindow) OnContextMenuEvent(slot func(super func(contextMenuEvent *QContextMenuEvent), contextMenuEvent *QContextMenuEvent)) {
	ok := C.QMdiSubWindow_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_contextMenuEvent
func miqt_exec_callback_QMdiSubWindow_contextMenuEvent(self *C.QMdiSubWindow, cb C.intptr_t, contextMenuEvent *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(contextMenuEvent *QContextMenuEvent), contextMenuEvent *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(contextMenuEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_FocusInEvent(focusInEvent *QFocusEvent) {

	C.QMdiSubWindow_virtualbase_focusInEvent(unsafe.Pointer(this.h), focusInEvent.cPointer())

}
func (this *QMdiSubWindow) OnFocusInEvent(slot func(super func(focusInEvent *QFocusEvent), focusInEvent *QFocusEvent)) {
	ok := C.QMdiSubWindow_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_focusInEvent
func miqt_exec_callback_QMdiSubWindow_focusInEvent(self *C.QMdiSubWindow, cb C.intptr_t, focusInEvent *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(focusInEvent *QFocusEvent), focusInEvent *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(focusInEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_FocusOutEvent(focusOutEvent *QFocusEvent) {

	C.QMdiSubWindow_virtualbase_focusOutEvent(unsafe.Pointer(this.h), focusOutEvent.cPointer())

}
func (this *QMdiSubWindow) OnFocusOutEvent(slot func(super func(focusOutEvent *QFocusEvent), focusOutEvent *QFocusEvent)) {
	ok := C.QMdiSubWindow_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_focusOutEvent
func miqt_exec_callback_QMdiSubWindow_focusOutEvent(self *C.QMdiSubWindow, cb C.intptr_t, focusOutEvent *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(focusOutEvent *QFocusEvent), focusOutEvent *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(focusOutEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ChildEvent(childEvent *QChildEvent) {

	C.QMdiSubWindow_virtualbase_childEvent(unsafe.Pointer(this.h), childEvent.cPointer())

}
func (this *QMdiSubWindow) OnChildEvent(slot func(super func(childEvent *QChildEvent), childEvent *QChildEvent)) {
	ok := C.QMdiSubWindow_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_childEvent
func miqt_exec_callback_QMdiSubWindow_childEvent(self *C.QMdiSubWindow, cb C.intptr_t, childEvent *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(childEvent *QChildEvent), childEvent *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(childEvent)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DevType() int {

	return (int)(C.QMdiSubWindow_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QMdiSubWindow) OnDevType(slot func(super func() int) int) {
	ok := C.QMdiSubWindow_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_devType
func miqt_exec_callback_QMdiSubWindow_devType(self *C.QMdiSubWindow, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_SetVisible(visible bool) {

	C.QMdiSubWindow_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMdiSubWindow) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QMdiSubWindow_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_setVisible
func miqt_exec_callback_QMdiSubWindow_setVisible(self *C.QMdiSubWindow, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QMdiSubWindow_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMdiSubWindow) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QMdiSubWindow_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_heightForWidth
func miqt_exec_callback_QMdiSubWindow_heightForWidth(self *C.QMdiSubWindow, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QMdiSubWindow_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QMdiSubWindow) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QMdiSubWindow_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_hasHeightForWidth
func miqt_exec_callback_QMdiSubWindow_hasHeightForWidth(self *C.QMdiSubWindow, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QMdiSubWindow_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QMdiSubWindow) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QMdiSubWindow_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_paintEngine
func miqt_exec_callback_QMdiSubWindow_paintEngine(self *C.QMdiSubWindow, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QMdiSubWindow_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QMdiSubWindow_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_wheelEvent
func miqt_exec_callback_QMdiSubWindow_wheelEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QMdiSubWindow_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QMdiSubWindow_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_keyReleaseEvent
func miqt_exec_callback_QMdiSubWindow_keyReleaseEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QMdiSubWindow_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QMdiSubWindow_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_enterEvent
func miqt_exec_callback_QMdiSubWindow_enterEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QMdiSubWindow_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QMdiSubWindow_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_tabletEvent
func miqt_exec_callback_QMdiSubWindow_tabletEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QMdiSubWindow_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QMdiSubWindow_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_actionEvent
func miqt_exec_callback_QMdiSubWindow_actionEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QMdiSubWindow_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QMdiSubWindow_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_dragEnterEvent
func miqt_exec_callback_QMdiSubWindow_dragEnterEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QMdiSubWindow_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QMdiSubWindow_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_dragMoveEvent
func miqt_exec_callback_QMdiSubWindow_dragMoveEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QMdiSubWindow_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QMdiSubWindow_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_dragLeaveEvent
func miqt_exec_callback_QMdiSubWindow_dragLeaveEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QMdiSubWindow_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QMdiSubWindow_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_dropEvent
func miqt_exec_callback_QMdiSubWindow_dropEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QMdiSubWindow_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QMdiSubWindow) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QMdiSubWindow_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_nativeEvent
func miqt_exec_callback_QMdiSubWindow_nativeEvent(self *C.QMdiSubWindow, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QMdiSubWindow_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMdiSubWindow) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QMdiSubWindow_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_metric
func miqt_exec_callback_QMdiSubWindow_metric(self *C.QMdiSubWindow, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_InitPainter(painter *QPainter) {

	C.QMdiSubWindow_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QMdiSubWindow) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QMdiSubWindow_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_initPainter
func miqt_exec_callback_QMdiSubWindow_initPainter(self *C.QMdiSubWindow, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QMdiSubWindow_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QMdiSubWindow) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QMdiSubWindow_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_redirected
func miqt_exec_callback_QMdiSubWindow_redirected(self *C.QMdiSubWindow, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QMdiSubWindow_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QMdiSubWindow) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QMdiSubWindow_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_sharedPainter
func miqt_exec_callback_QMdiSubWindow_sharedPainter(self *C.QMdiSubWindow, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QMdiSubWindow_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiSubWindow) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QMdiSubWindow_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_inputMethodEvent
func miqt_exec_callback_QMdiSubWindow_inputMethodEvent(self *C.QMdiSubWindow, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QMdiSubWindow_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiSubWindow) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QMdiSubWindow_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_inputMethodQuery
func miqt_exec_callback_QMdiSubWindow_inputMethodQuery(self *C.QMdiSubWindow, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QMdiSubWindow_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QMdiSubWindow) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QMdiSubWindow_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_focusNextPrevChild
func miqt_exec_callback_QMdiSubWindow_focusNextPrevChild(self *C.QMdiSubWindow, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_CustomEvent(event *QEvent) {

	C.QMdiSubWindow_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMdiSubWindow_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_customEvent
func miqt_exec_callback_QMdiSubWindow_customEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QMdiSubWindow_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMdiSubWindow) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMdiSubWindow_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_connectNotify
func miqt_exec_callback_QMdiSubWindow_connectNotify(self *C.QMdiSubWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QMdiSubWindow_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMdiSubWindow) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMdiSubWindow_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiSubWindow_disconnectNotify
func miqt_exec_callback_QMdiSubWindow_disconnectNotify(self *C.QMdiSubWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMdiSubWindow) Delete() {
	C.QMdiSubWindow_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMdiSubWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QMdiSubWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
