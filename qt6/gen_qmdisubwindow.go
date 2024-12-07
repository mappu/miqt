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
	h          *C.QMdiSubWindow
	isSubclass bool
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
func newQMdiSubWindow(h *C.QMdiSubWindow, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QMdiSubWindow {
	if h == nil {
		return nil
	}
	return &QMdiSubWindow{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQMdiSubWindow constructs the type using only unsafe pointers.
func UnsafeNewQMdiSubWindow(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QMdiSubWindow {
	if h == nil {
		return nil
	}

	return &QMdiSubWindow{h: (*C.QMdiSubWindow)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQMdiSubWindow constructs a new QMdiSubWindow object.
func NewQMdiSubWindow(parent *QWidget) *QMdiSubWindow {
	var outptr_QMdiSubWindow *C.QMdiSubWindow = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QMdiSubWindow_new(parent.cPointer(), &outptr_QMdiSubWindow, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQMdiSubWindow(outptr_QMdiSubWindow, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQMdiSubWindow2 constructs a new QMdiSubWindow object.
func NewQMdiSubWindow2() *QMdiSubWindow {
	var outptr_QMdiSubWindow *C.QMdiSubWindow = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QMdiSubWindow_new2(&outptr_QMdiSubWindow, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQMdiSubWindow(outptr_QMdiSubWindow, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQMdiSubWindow3 constructs a new QMdiSubWindow object.
func NewQMdiSubWindow3(parent *QWidget, flags WindowType) *QMdiSubWindow {
	var outptr_QMdiSubWindow *C.QMdiSubWindow = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QMdiSubWindow_new3(parent.cPointer(), (C.int)(flags), &outptr_QMdiSubWindow, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQMdiSubWindow(outptr_QMdiSubWindow, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QMdiSubWindow) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMdiSubWindow_MetaObject(this.h)))
}

func (this *QMdiSubWindow) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMdiSubWindow_Metacast(this.h, param1_Cstring))
}

func QMdiSubWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMdiSubWindow_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiSubWindow) SizeHint() *QSize {
	_ret := C.QMdiSubWindow_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiSubWindow) MinimumSizeHint() *QSize {
	_ret := C.QMdiSubWindow_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiSubWindow) SetWidget(widget *QWidget) {
	C.QMdiSubWindow_SetWidget(this.h, widget.cPointer())
}

func (this *QMdiSubWindow) Widget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QMdiSubWindow_Widget(this.h)), nil, nil)
}

func (this *QMdiSubWindow) MaximizedButtonsWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QMdiSubWindow_MaximizedButtonsWidget(this.h)), nil, nil)
}

func (this *QMdiSubWindow) MaximizedSystemMenuIconWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QMdiSubWindow_MaximizedSystemMenuIconWidget(this.h)), nil, nil)
}

func (this *QMdiSubWindow) IsShaded() bool {
	return (bool)(C.QMdiSubWindow_IsShaded(this.h))
}

func (this *QMdiSubWindow) SetOption(option QMdiSubWindow__SubWindowOption) {
	C.QMdiSubWindow_SetOption(this.h, (C.int)(option))
}

func (this *QMdiSubWindow) TestOption(param1 QMdiSubWindow__SubWindowOption) bool {
	return (bool)(C.QMdiSubWindow_TestOption(this.h, (C.int)(param1)))
}

func (this *QMdiSubWindow) SetKeyboardSingleStep(step int) {
	C.QMdiSubWindow_SetKeyboardSingleStep(this.h, (C.int)(step))
}

func (this *QMdiSubWindow) KeyboardSingleStep() int {
	return (int)(C.QMdiSubWindow_KeyboardSingleStep(this.h))
}

func (this *QMdiSubWindow) SetKeyboardPageStep(step int) {
	C.QMdiSubWindow_SetKeyboardPageStep(this.h, (C.int)(step))
}

func (this *QMdiSubWindow) KeyboardPageStep() int {
	return (int)(C.QMdiSubWindow_KeyboardPageStep(this.h))
}

func (this *QMdiSubWindow) SetSystemMenu(systemMenu *QMenu) {
	C.QMdiSubWindow_SetSystemMenu(this.h, systemMenu.cPointer())
}

func (this *QMdiSubWindow) SystemMenu() *QMenu {
	return UnsafeNewQMenu(unsafe.Pointer(C.QMdiSubWindow_SystemMenu(this.h)), nil, nil, nil)
}

func (this *QMdiSubWindow) MdiArea() *QMdiArea {
	return UnsafeNewQMdiArea(unsafe.Pointer(C.QMdiSubWindow_MdiArea(this.h)), nil, nil, nil, nil, nil)
}

func (this *QMdiSubWindow) WindowStateChanged(oldState WindowState, newState WindowState) {
	C.QMdiSubWindow_WindowStateChanged(this.h, (C.int)(oldState), (C.int)(newState))
}
func (this *QMdiSubWindow) OnWindowStateChanged(slot func(oldState WindowState, newState WindowState)) {
	C.QMdiSubWindow_connect_WindowStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_WindowStateChanged
func miqt_exec_callback_QMdiSubWindow_WindowStateChanged(cb C.intptr_t, oldState C.int, newState C.int) {
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
	C.QMdiSubWindow_AboutToActivate(this.h)
}
func (this *QMdiSubWindow) OnAboutToActivate(slot func()) {
	C.QMdiSubWindow_connect_AboutToActivate(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_AboutToActivate
func miqt_exec_callback_QMdiSubWindow_AboutToActivate(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMdiSubWindow) ShowSystemMenu() {
	C.QMdiSubWindow_ShowSystemMenu(this.h)
}

func (this *QMdiSubWindow) ShowShaded() {
	C.QMdiSubWindow_ShowShaded(this.h)
}

func QMdiSubWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiSubWindow_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiSubWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiSubWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiSubWindow) SetOption2(option QMdiSubWindow__SubWindowOption, on bool) {
	C.QMdiSubWindow_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

func (this *QMdiSubWindow) callVirtualBase_SizeHint() *QSize {

	_ret := C.QMdiSubWindow_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiSubWindow) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_SizeHint
func miqt_exec_callback_QMdiSubWindow_SizeHint(self *C.QMdiSubWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QMdiSubWindow_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiSubWindow) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_MinimumSizeHint
func miqt_exec_callback_QMdiSubWindow_MinimumSizeHint(self *C.QMdiSubWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QMdiSubWindow_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QMdiSubWindow) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_EventFilter
func miqt_exec_callback_QMdiSubWindow_EventFilter(self *C.QMdiSubWindow, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(object))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QMdiSubWindow_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMdiSubWindow) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_Event
func miqt_exec_callback_QMdiSubWindow_Event(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_ShowEvent(showEvent *QShowEvent) {

	C.QMdiSubWindow_virtualbase_ShowEvent(unsafe.Pointer(this.h), showEvent.cPointer())

}
func (this *QMdiSubWindow) OnShowEvent(slot func(super func(showEvent *QShowEvent), showEvent *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_ShowEvent
func miqt_exec_callback_QMdiSubWindow_ShowEvent(self *C.QMdiSubWindow, cb C.intptr_t, showEvent *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(showEvent *QShowEvent), showEvent *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(showEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_HideEvent(hideEvent *QHideEvent) {

	C.QMdiSubWindow_virtualbase_HideEvent(unsafe.Pointer(this.h), hideEvent.cPointer())

}
func (this *QMdiSubWindow) OnHideEvent(slot func(super func(hideEvent *QHideEvent), hideEvent *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_HideEvent
func miqt_exec_callback_QMdiSubWindow_HideEvent(self *C.QMdiSubWindow, cb C.intptr_t, hideEvent *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(hideEvent *QHideEvent), hideEvent *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(hideEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ChangeEvent(changeEvent *QEvent) {

	C.QMdiSubWindow_virtualbase_ChangeEvent(unsafe.Pointer(this.h), changeEvent.cPointer())

}
func (this *QMdiSubWindow) OnChangeEvent(slot func(super func(changeEvent *QEvent), changeEvent *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_ChangeEvent
func miqt_exec_callback_QMdiSubWindow_ChangeEvent(self *C.QMdiSubWindow, cb C.intptr_t, changeEvent *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(changeEvent *QEvent), changeEvent *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(changeEvent))

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_CloseEvent(closeEvent *QCloseEvent) {

	C.QMdiSubWindow_virtualbase_CloseEvent(unsafe.Pointer(this.h), closeEvent.cPointer())

}
func (this *QMdiSubWindow) OnCloseEvent(slot func(super func(closeEvent *QCloseEvent), closeEvent *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_CloseEvent
func miqt_exec_callback_QMdiSubWindow_CloseEvent(self *C.QMdiSubWindow, cb C.intptr_t, closeEvent *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(closeEvent *QCloseEvent), closeEvent *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(closeEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_LeaveEvent(leaveEvent *QEvent) {

	C.QMdiSubWindow_virtualbase_LeaveEvent(unsafe.Pointer(this.h), leaveEvent.cPointer())

}
func (this *QMdiSubWindow) OnLeaveEvent(slot func(super func(leaveEvent *QEvent), leaveEvent *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_LeaveEvent
func miqt_exec_callback_QMdiSubWindow_LeaveEvent(self *C.QMdiSubWindow, cb C.intptr_t, leaveEvent *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(leaveEvent *QEvent), leaveEvent *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(leaveEvent))

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ResizeEvent(resizeEvent *QResizeEvent) {

	C.QMdiSubWindow_virtualbase_ResizeEvent(unsafe.Pointer(this.h), resizeEvent.cPointer())

}
func (this *QMdiSubWindow) OnResizeEvent(slot func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_ResizeEvent
func miqt_exec_callback_QMdiSubWindow_ResizeEvent(self *C.QMdiSubWindow, cb C.intptr_t, resizeEvent *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(resizeEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_TimerEvent(timerEvent *QTimerEvent) {

	C.QMdiSubWindow_virtualbase_TimerEvent(unsafe.Pointer(this.h), timerEvent.cPointer())

}
func (this *QMdiSubWindow) OnTimerEvent(slot func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_TimerEvent
func miqt_exec_callback_QMdiSubWindow_TimerEvent(self *C.QMdiSubWindow, cb C.intptr_t, timerEvent *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(timerEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MoveEvent(moveEvent *QMoveEvent) {

	C.QMdiSubWindow_virtualbase_MoveEvent(unsafe.Pointer(this.h), moveEvent.cPointer())

}
func (this *QMdiSubWindow) OnMoveEvent(slot func(super func(moveEvent *QMoveEvent), moveEvent *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_MoveEvent
func miqt_exec_callback_QMdiSubWindow_MoveEvent(self *C.QMdiSubWindow, cb C.intptr_t, moveEvent *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(moveEvent *QMoveEvent), moveEvent *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(moveEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_PaintEvent(paintEvent *QPaintEvent) {

	C.QMdiSubWindow_virtualbase_PaintEvent(unsafe.Pointer(this.h), paintEvent.cPointer())

}
func (this *QMdiSubWindow) OnPaintEvent(slot func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_PaintEvent
func miqt_exec_callback_QMdiSubWindow_PaintEvent(self *C.QMdiSubWindow, cb C.intptr_t, paintEvent *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(paintEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MousePressEvent(mouseEvent *QMouseEvent) {

	C.QMdiSubWindow_virtualbase_MousePressEvent(unsafe.Pointer(this.h), mouseEvent.cPointer())

}
func (this *QMdiSubWindow) OnMousePressEvent(slot func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_MousePressEvent
func miqt_exec_callback_QMdiSubWindow_MousePressEvent(self *C.QMdiSubWindow, cb C.intptr_t, mouseEvent *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(mouseEvent), nil, nil, nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MouseDoubleClickEvent(mouseEvent *QMouseEvent) {

	C.QMdiSubWindow_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), mouseEvent.cPointer())

}
func (this *QMdiSubWindow) OnMouseDoubleClickEvent(slot func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_MouseDoubleClickEvent
func miqt_exec_callback_QMdiSubWindow_MouseDoubleClickEvent(self *C.QMdiSubWindow, cb C.intptr_t, mouseEvent *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(mouseEvent), nil, nil, nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MouseReleaseEvent(mouseEvent *QMouseEvent) {

	C.QMdiSubWindow_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), mouseEvent.cPointer())

}
func (this *QMdiSubWindow) OnMouseReleaseEvent(slot func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_MouseReleaseEvent
func miqt_exec_callback_QMdiSubWindow_MouseReleaseEvent(self *C.QMdiSubWindow, cb C.intptr_t, mouseEvent *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(mouseEvent), nil, nil, nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_MouseMoveEvent(mouseEvent *QMouseEvent) {

	C.QMdiSubWindow_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), mouseEvent.cPointer())

}
func (this *QMdiSubWindow) OnMouseMoveEvent(slot func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_MouseMoveEvent
func miqt_exec_callback_QMdiSubWindow_MouseMoveEvent(self *C.QMdiSubWindow, cb C.intptr_t, mouseEvent *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(mouseEvent), nil, nil, nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_KeyPressEvent(keyEvent *QKeyEvent) {

	C.QMdiSubWindow_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), keyEvent.cPointer())

}
func (this *QMdiSubWindow) OnKeyPressEvent(slot func(super func(keyEvent *QKeyEvent), keyEvent *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_KeyPressEvent
func miqt_exec_callback_QMdiSubWindow_KeyPressEvent(self *C.QMdiSubWindow, cb C.intptr_t, keyEvent *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(keyEvent *QKeyEvent), keyEvent *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(keyEvent), nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ContextMenuEvent(contextMenuEvent *QContextMenuEvent) {

	C.QMdiSubWindow_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), contextMenuEvent.cPointer())

}
func (this *QMdiSubWindow) OnContextMenuEvent(slot func(super func(contextMenuEvent *QContextMenuEvent), contextMenuEvent *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_ContextMenuEvent
func miqt_exec_callback_QMdiSubWindow_ContextMenuEvent(self *C.QMdiSubWindow, cb C.intptr_t, contextMenuEvent *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(contextMenuEvent *QContextMenuEvent), contextMenuEvent *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(contextMenuEvent), nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_FocusInEvent(focusInEvent *QFocusEvent) {

	C.QMdiSubWindow_virtualbase_FocusInEvent(unsafe.Pointer(this.h), focusInEvent.cPointer())

}
func (this *QMdiSubWindow) OnFocusInEvent(slot func(super func(focusInEvent *QFocusEvent), focusInEvent *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_FocusInEvent
func miqt_exec_callback_QMdiSubWindow_FocusInEvent(self *C.QMdiSubWindow, cb C.intptr_t, focusInEvent *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(focusInEvent *QFocusEvent), focusInEvent *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(focusInEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_FocusOutEvent(focusOutEvent *QFocusEvent) {

	C.QMdiSubWindow_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), focusOutEvent.cPointer())

}
func (this *QMdiSubWindow) OnFocusOutEvent(slot func(super func(focusOutEvent *QFocusEvent), focusOutEvent *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_FocusOutEvent
func miqt_exec_callback_QMdiSubWindow_FocusOutEvent(self *C.QMdiSubWindow, cb C.intptr_t, focusOutEvent *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(focusOutEvent *QFocusEvent), focusOutEvent *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(focusOutEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ChildEvent(childEvent *QChildEvent) {

	C.QMdiSubWindow_virtualbase_ChildEvent(unsafe.Pointer(this.h), childEvent.cPointer())

}
func (this *QMdiSubWindow) OnChildEvent(slot func(super func(childEvent *QChildEvent), childEvent *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_ChildEvent
func miqt_exec_callback_QMdiSubWindow_ChildEvent(self *C.QMdiSubWindow, cb C.intptr_t, childEvent *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(childEvent *QChildEvent), childEvent *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(childEvent), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DevType() int {

	return (int)(C.QMdiSubWindow_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QMdiSubWindow) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_DevType
func miqt_exec_callback_QMdiSubWindow_DevType(self *C.QMdiSubWindow, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_SetVisible(visible bool) {

	C.QMdiSubWindow_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMdiSubWindow) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_SetVisible
func miqt_exec_callback_QMdiSubWindow_SetVisible(self *C.QMdiSubWindow, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QMdiSubWindow_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMdiSubWindow) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_HeightForWidth
func miqt_exec_callback_QMdiSubWindow_HeightForWidth(self *C.QMdiSubWindow, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QMdiSubWindow_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QMdiSubWindow) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_HasHeightForWidth
func miqt_exec_callback_QMdiSubWindow_HasHeightForWidth(self *C.QMdiSubWindow, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QMdiSubWindow) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QMdiSubWindow_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QMdiSubWindow) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_PaintEngine
func miqt_exec_callback_QMdiSubWindow_PaintEngine(self *C.QMdiSubWindow, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QMdiSubWindow_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_WheelEvent
func miqt_exec_callback_QMdiSubWindow_WheelEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QMdiSubWindow_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_KeyReleaseEvent
func miqt_exec_callback_QMdiSubWindow_KeyReleaseEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QMdiSubWindow_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_EnterEvent
func miqt_exec_callback_QMdiSubWindow_EnterEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEnterEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QMdiSubWindow_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_TabletEvent
func miqt_exec_callback_QMdiSubWindow_TabletEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QMdiSubWindow_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_ActionEvent
func miqt_exec_callback_QMdiSubWindow_ActionEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QMdiSubWindow_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_DragEnterEvent
func miqt_exec_callback_QMdiSubWindow_DragEnterEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QMdiSubWindow_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_DragMoveEvent
func miqt_exec_callback_QMdiSubWindow_DragMoveEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QMdiSubWindow_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_DragLeaveEvent
func miqt_exec_callback_QMdiSubWindow_DragLeaveEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QMdiSubWindow_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiSubWindow) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_DropEvent
func miqt_exec_callback_QMdiSubWindow_DropEvent(self *C.QMdiSubWindow, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QMdiSubWindow_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QMdiSubWindow) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_NativeEvent
func miqt_exec_callback_QMdiSubWindow_NativeEvent(self *C.QMdiSubWindow, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	return (int)(C.QMdiSubWindow_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMdiSubWindow) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_Metric
func miqt_exec_callback_QMdiSubWindow_Metric(self *C.QMdiSubWindow, cb C.intptr_t, param1 C.int) C.int {
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

	C.QMdiSubWindow_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QMdiSubWindow) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_InitPainter
func miqt_exec_callback_QMdiSubWindow_InitPainter(self *C.QMdiSubWindow, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QMdiSubWindow_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QMdiSubWindow) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_Redirected
func miqt_exec_callback_QMdiSubWindow_Redirected(self *C.QMdiSubWindow, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QMdiSubWindow_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QMdiSubWindow) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_SharedPainter
func miqt_exec_callback_QMdiSubWindow_SharedPainter(self *C.QMdiSubWindow, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QMdiSubWindow) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QMdiSubWindow_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiSubWindow) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_InputMethodEvent
func miqt_exec_callback_QMdiSubWindow_InputMethodEvent(self *C.QMdiSubWindow, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMdiSubWindow{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QMdiSubWindow) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QMdiSubWindow_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiSubWindow) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_InputMethodQuery
func miqt_exec_callback_QMdiSubWindow_InputMethodQuery(self *C.QMdiSubWindow, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QMdiSubWindow_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QMdiSubWindow) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiSubWindow_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiSubWindow_FocusNextPrevChild
func miqt_exec_callback_QMdiSubWindow_FocusNextPrevChild(self *C.QMdiSubWindow, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QMdiSubWindow{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QMdiSubWindow) Delete() {
	C.QMdiSubWindow_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMdiSubWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QMdiSubWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
