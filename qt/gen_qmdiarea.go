package qt

/*

#include "gen_qmdiarea.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMdiArea__AreaOption int

const (
	QMdiArea__DontMaximizeSubWindowOnActivation QMdiArea__AreaOption = 1
)

type QMdiArea__WindowOrder int

const (
	QMdiArea__CreationOrder          QMdiArea__WindowOrder = 0
	QMdiArea__StackingOrder          QMdiArea__WindowOrder = 1
	QMdiArea__ActivationHistoryOrder QMdiArea__WindowOrder = 2
)

type QMdiArea__ViewMode int

const (
	QMdiArea__SubWindowView QMdiArea__ViewMode = 0
	QMdiArea__TabbedView    QMdiArea__ViewMode = 1
)

type QMdiArea struct {
	h          *C.QMdiArea
	isSubclass bool
	*QAbstractScrollArea
}

func (this *QMdiArea) cPointer() *C.QMdiArea {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMdiArea) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMdiArea constructs the type using only CGO pointers.
func newQMdiArea(h *C.QMdiArea, h_QAbstractScrollArea *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QMdiArea {
	if h == nil {
		return nil
	}
	return &QMdiArea{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQMdiArea constructs the type using only unsafe pointers.
func UnsafeNewQMdiArea(h unsafe.Pointer, h_QAbstractScrollArea unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QMdiArea {
	if h == nil {
		return nil
	}

	return &QMdiArea{h: (*C.QMdiArea)(h),
		QAbstractScrollArea: UnsafeNewQAbstractScrollArea(h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQMdiArea constructs a new QMdiArea object.
func NewQMdiArea(parent *QWidget) *QMdiArea {
	var outptr_QMdiArea *C.QMdiArea = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QMdiArea_new(parent.cPointer(), &outptr_QMdiArea, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQMdiArea(outptr_QMdiArea, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQMdiArea2 constructs a new QMdiArea object.
func NewQMdiArea2() *QMdiArea {
	var outptr_QMdiArea *C.QMdiArea = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QMdiArea_new2(&outptr_QMdiArea, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQMdiArea(outptr_QMdiArea, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QMdiArea) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMdiArea_MetaObject(this.h)))
}

func (this *QMdiArea) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMdiArea_Metacast(this.h, param1_Cstring))
}

func QMdiArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiArea) SizeHint() *QSize {
	_ret := C.QMdiArea_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) MinimumSizeHint() *QSize {
	_ret := C.QMdiArea_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) CurrentSubWindow() *QMdiSubWindow {
	return UnsafeNewQMdiSubWindow(unsafe.Pointer(C.QMdiArea_CurrentSubWindow(this.h)), nil, nil, nil)
}

func (this *QMdiArea) ActiveSubWindow() *QMdiSubWindow {
	return UnsafeNewQMdiSubWindow(unsafe.Pointer(C.QMdiArea_ActiveSubWindow(this.h)), nil, nil, nil)
}

func (this *QMdiArea) SubWindowList() []*QMdiSubWindow {
	var _ma C.struct_miqt_array = C.QMdiArea_SubWindowList(this.h)
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQMdiSubWindow(unsafe.Pointer(_outCast[i]), nil, nil, nil)
	}
	return _ret
}

func (this *QMdiArea) AddSubWindow(widget *QWidget) *QMdiSubWindow {
	return UnsafeNewQMdiSubWindow(unsafe.Pointer(C.QMdiArea_AddSubWindow(this.h, widget.cPointer())), nil, nil, nil)
}

func (this *QMdiArea) RemoveSubWindow(widget *QWidget) {
	C.QMdiArea_RemoveSubWindow(this.h, widget.cPointer())
}

func (this *QMdiArea) Background() *QBrush {
	_ret := C.QMdiArea_Background(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) SetBackground(background *QBrush) {
	C.QMdiArea_SetBackground(this.h, background.cPointer())
}

func (this *QMdiArea) ActivationOrder() QMdiArea__WindowOrder {
	return (QMdiArea__WindowOrder)(C.QMdiArea_ActivationOrder(this.h))
}

func (this *QMdiArea) SetActivationOrder(order QMdiArea__WindowOrder) {
	C.QMdiArea_SetActivationOrder(this.h, (C.int)(order))
}

func (this *QMdiArea) SetOption(option QMdiArea__AreaOption) {
	C.QMdiArea_SetOption(this.h, (C.int)(option))
}

func (this *QMdiArea) TestOption(opton QMdiArea__AreaOption) bool {
	return (bool)(C.QMdiArea_TestOption(this.h, (C.int)(opton)))
}

func (this *QMdiArea) SetViewMode(mode QMdiArea__ViewMode) {
	C.QMdiArea_SetViewMode(this.h, (C.int)(mode))
}

func (this *QMdiArea) ViewMode() QMdiArea__ViewMode {
	return (QMdiArea__ViewMode)(C.QMdiArea_ViewMode(this.h))
}

func (this *QMdiArea) DocumentMode() bool {
	return (bool)(C.QMdiArea_DocumentMode(this.h))
}

func (this *QMdiArea) SetDocumentMode(enabled bool) {
	C.QMdiArea_SetDocumentMode(this.h, (C.bool)(enabled))
}

func (this *QMdiArea) SetTabsClosable(closable bool) {
	C.QMdiArea_SetTabsClosable(this.h, (C.bool)(closable))
}

func (this *QMdiArea) TabsClosable() bool {
	return (bool)(C.QMdiArea_TabsClosable(this.h))
}

func (this *QMdiArea) SetTabsMovable(movable bool) {
	C.QMdiArea_SetTabsMovable(this.h, (C.bool)(movable))
}

func (this *QMdiArea) TabsMovable() bool {
	return (bool)(C.QMdiArea_TabsMovable(this.h))
}

func (this *QMdiArea) SetTabShape(shape QTabWidget__TabShape) {
	C.QMdiArea_SetTabShape(this.h, (C.int)(shape))
}

func (this *QMdiArea) TabShape() QTabWidget__TabShape {
	return (QTabWidget__TabShape)(C.QMdiArea_TabShape(this.h))
}

func (this *QMdiArea) SetTabPosition(position QTabWidget__TabPosition) {
	C.QMdiArea_SetTabPosition(this.h, (C.int)(position))
}

func (this *QMdiArea) TabPosition() QTabWidget__TabPosition {
	return (QTabWidget__TabPosition)(C.QMdiArea_TabPosition(this.h))
}

func (this *QMdiArea) SubWindowActivated(param1 *QMdiSubWindow) {
	C.QMdiArea_SubWindowActivated(this.h, param1.cPointer())
}
func (this *QMdiArea) OnSubWindowActivated(slot func(param1 *QMdiSubWindow)) {
	C.QMdiArea_connect_SubWindowActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_SubWindowActivated
func miqt_exec_callback_QMdiArea_SubWindowActivated(cb C.intptr_t, param1 *C.QMdiSubWindow) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QMdiSubWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMdiSubWindow(unsafe.Pointer(param1), nil, nil, nil)

	gofunc(slotval1)
}

func (this *QMdiArea) SetActiveSubWindow(window *QMdiSubWindow) {
	C.QMdiArea_SetActiveSubWindow(this.h, window.cPointer())
}

func (this *QMdiArea) TileSubWindows() {
	C.QMdiArea_TileSubWindows(this.h)
}

func (this *QMdiArea) CascadeSubWindows() {
	C.QMdiArea_CascadeSubWindows(this.h)
}

func (this *QMdiArea) CloseActiveSubWindow() {
	C.QMdiArea_CloseActiveSubWindow(this.h)
}

func (this *QMdiArea) CloseAllSubWindows() {
	C.QMdiArea_CloseAllSubWindows(this.h)
}

func (this *QMdiArea) ActivateNextSubWindow() {
	C.QMdiArea_ActivateNextSubWindow(this.h)
}

func (this *QMdiArea) ActivatePreviousSubWindow() {
	C.QMdiArea_ActivatePreviousSubWindow(this.h)
}

func QMdiArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiArea) SubWindowList1(order QMdiArea__WindowOrder) []*QMdiSubWindow {
	var _ma C.struct_miqt_array = C.QMdiArea_SubWindowList1(this.h, (C.int)(order))
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQMdiSubWindow(unsafe.Pointer(_outCast[i]), nil, nil, nil)
	}
	return _ret
}

func (this *QMdiArea) AddSubWindow2(widget *QWidget, flags WindowType) *QMdiSubWindow {
	return UnsafeNewQMdiSubWindow(unsafe.Pointer(C.QMdiArea_AddSubWindow2(this.h, widget.cPointer(), (C.int)(flags))), nil, nil, nil)
}

func (this *QMdiArea) SetOption2(option QMdiArea__AreaOption, on bool) {
	C.QMdiArea_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

func (this *QMdiArea) callVirtualBase_SizeHint() *QSize {

	_ret := C.QMdiArea_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_SizeHint
func miqt_exec_callback_QMdiArea_SizeHint(self *C.QMdiArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QMdiArea_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_MinimumSizeHint
func miqt_exec_callback_QMdiArea_MinimumSizeHint(self *C.QMdiArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QMdiArea_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QMdiArea) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_SetupViewport
func miqt_exec_callback_QMdiArea_SetupViewport(self *C.QMdiArea, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(viewport), nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QMdiArea) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QMdiArea_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMdiArea) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_Event
func miqt_exec_callback_QMdiArea_Event(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QMdiArea_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QMdiArea) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_EventFilter
func miqt_exec_callback_QMdiArea_EventFilter(self *C.QMdiArea, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(object))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_PaintEvent(paintEvent *QPaintEvent) {

	C.QMdiArea_virtualbase_PaintEvent(unsafe.Pointer(this.h), paintEvent.cPointer())

}
func (this *QMdiArea) OnPaintEvent(slot func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_PaintEvent
func miqt_exec_callback_QMdiArea_PaintEvent(self *C.QMdiArea, cb C.intptr_t, paintEvent *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(paintEvent), nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ChildEvent(childEvent *QChildEvent) {

	C.QMdiArea_virtualbase_ChildEvent(unsafe.Pointer(this.h), childEvent.cPointer())

}
func (this *QMdiArea) OnChildEvent(slot func(super func(childEvent *QChildEvent), childEvent *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_ChildEvent
func miqt_exec_callback_QMdiArea_ChildEvent(self *C.QMdiArea, cb C.intptr_t, childEvent *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(childEvent *QChildEvent), childEvent *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(childEvent), nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ResizeEvent(resizeEvent *QResizeEvent) {

	C.QMdiArea_virtualbase_ResizeEvent(unsafe.Pointer(this.h), resizeEvent.cPointer())

}
func (this *QMdiArea) OnResizeEvent(slot func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_ResizeEvent
func miqt_exec_callback_QMdiArea_ResizeEvent(self *C.QMdiArea, cb C.intptr_t, resizeEvent *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(resizeEvent), nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_TimerEvent(timerEvent *QTimerEvent) {

	C.QMdiArea_virtualbase_TimerEvent(unsafe.Pointer(this.h), timerEvent.cPointer())

}
func (this *QMdiArea) OnTimerEvent(slot func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_TimerEvent
func miqt_exec_callback_QMdiArea_TimerEvent(self *C.QMdiArea, cb C.intptr_t, timerEvent *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(timerEvent), nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ShowEvent(showEvent *QShowEvent) {

	C.QMdiArea_virtualbase_ShowEvent(unsafe.Pointer(this.h), showEvent.cPointer())

}
func (this *QMdiArea) OnShowEvent(slot func(super func(showEvent *QShowEvent), showEvent *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_ShowEvent
func miqt_exec_callback_QMdiArea_ShowEvent(self *C.QMdiArea, cb C.intptr_t, showEvent *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(showEvent *QShowEvent), showEvent *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(showEvent), nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QMdiArea_virtualbase_ViewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMdiArea) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_ViewportEvent
func miqt_exec_callback_QMdiArea_ViewportEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QMdiArea_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QMdiArea) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_ScrollContentsBy
func miqt_exec_callback_QMdiArea_ScrollContentsBy(self *C.QMdiArea, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QMdiArea) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_MousePressEvent
func miqt_exec_callback_QMdiArea_MousePressEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_MouseReleaseEvent
func miqt_exec_callback_QMdiArea_MouseReleaseEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_MouseDoubleClickEvent
func miqt_exec_callback_QMdiArea_MouseDoubleClickEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_MouseMoveEvent
func miqt_exec_callback_QMdiArea_MouseMoveEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QMdiArea_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_WheelEvent
func miqt_exec_callback_QMdiArea_WheelEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QMdiArea_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_ContextMenuEvent
func miqt_exec_callback_QMdiArea_ContextMenuEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DragEnterEvent(param1 *QDragEnterEvent) {

	C.QMdiArea_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDragEnterEvent(slot func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_DragEnterEvent
func miqt_exec_callback_QMdiArea_DragEnterEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(param1), nil, nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DragMoveEvent(param1 *QDragMoveEvent) {

	C.QMdiArea_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDragMoveEvent(slot func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_DragMoveEvent
func miqt_exec_callback_QMdiArea_DragMoveEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DragLeaveEvent(param1 *QDragLeaveEvent) {

	C.QMdiArea_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDragLeaveEvent(slot func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_DragLeaveEvent
func miqt_exec_callback_QMdiArea_DragLeaveEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DropEvent(param1 *QDropEvent) {

	C.QMdiArea_virtualbase_DropEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDropEvent(slot func(super func(param1 *QDropEvent), param1 *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_DropEvent
func miqt_exec_callback_QMdiArea_DropEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDropEvent), param1 *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(param1), nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QMdiArea_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_KeyPressEvent
func miqt_exec_callback_QMdiArea_KeyPressEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QMdiArea{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ViewportSizeHint() *QSize {

	_ret := C.QMdiArea_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMdiArea_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_ViewportSizeHint
func miqt_exec_callback_QMdiArea_ViewportSizeHint(self *C.QMdiArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QMdiArea) Delete() {
	C.QMdiArea_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMdiArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QMdiArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
