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
	h *C.QMdiArea
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
func newQMdiArea(h *C.QMdiArea) *QMdiArea {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QMdiArea_virtbase(h, &outptr_QAbstractScrollArea)

	return &QMdiArea{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(outptr_QAbstractScrollArea)}
}

// UnsafeNewQMdiArea constructs the type using only unsafe pointers.
func UnsafeNewQMdiArea(h unsafe.Pointer) *QMdiArea {
	return newQMdiArea((*C.QMdiArea)(h))
}

// NewQMdiArea constructs a new QMdiArea object.
func NewQMdiArea(parent *QWidget) *QMdiArea {

	return newQMdiArea(C.QMdiArea_new(parent.cPointer()))
}

// NewQMdiArea2 constructs a new QMdiArea object.
func NewQMdiArea2() *QMdiArea {

	return newQMdiArea(C.QMdiArea_new2())
}

func (this *QMdiArea) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMdiArea_metaObject(this.h))
}

func (this *QMdiArea) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMdiArea_metacast(this.h, param1_Cstring))
}

func QMdiArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiArea) SizeHint() *QSize {
	_goptr := newQSize(C.QMdiArea_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QMdiArea_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) CurrentSubWindow() *QMdiSubWindow {
	return newQMdiSubWindow(C.QMdiArea_currentSubWindow(this.h))
}

func (this *QMdiArea) ActiveSubWindow() *QMdiSubWindow {
	return newQMdiSubWindow(C.QMdiArea_activeSubWindow(this.h))
}

func (this *QMdiArea) SubWindowList() []*QMdiSubWindow {
	var _ma C.struct_miqt_array = C.QMdiArea_subWindowList(this.h)
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQMdiSubWindow(_outCast[i])
	}
	return _ret
}

func (this *QMdiArea) AddSubWindow(widget *QWidget) *QMdiSubWindow {
	return newQMdiSubWindow(C.QMdiArea_addSubWindow(this.h, widget.cPointer()))
}

func (this *QMdiArea) RemoveSubWindow(widget *QWidget) {
	C.QMdiArea_removeSubWindow(this.h, widget.cPointer())
}

func (this *QMdiArea) Background() *QBrush {
	_goptr := newQBrush(C.QMdiArea_background(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) SetBackground(background *QBrush) {
	C.QMdiArea_setBackground(this.h, background.cPointer())
}

func (this *QMdiArea) ActivationOrder() QMdiArea__WindowOrder {
	return (QMdiArea__WindowOrder)(C.QMdiArea_activationOrder(this.h))
}

func (this *QMdiArea) SetActivationOrder(order QMdiArea__WindowOrder) {
	C.QMdiArea_setActivationOrder(this.h, (C.int)(order))
}

func (this *QMdiArea) SetOption(option QMdiArea__AreaOption) {
	C.QMdiArea_setOption(this.h, (C.int)(option))
}

func (this *QMdiArea) TestOption(opton QMdiArea__AreaOption) bool {
	return (bool)(C.QMdiArea_testOption(this.h, (C.int)(opton)))
}

func (this *QMdiArea) SetViewMode(mode QMdiArea__ViewMode) {
	C.QMdiArea_setViewMode(this.h, (C.int)(mode))
}

func (this *QMdiArea) ViewMode() QMdiArea__ViewMode {
	return (QMdiArea__ViewMode)(C.QMdiArea_viewMode(this.h))
}

func (this *QMdiArea) DocumentMode() bool {
	return (bool)(C.QMdiArea_documentMode(this.h))
}

func (this *QMdiArea) SetDocumentMode(enabled bool) {
	C.QMdiArea_setDocumentMode(this.h, (C.bool)(enabled))
}

func (this *QMdiArea) SetTabsClosable(closable bool) {
	C.QMdiArea_setTabsClosable(this.h, (C.bool)(closable))
}

func (this *QMdiArea) TabsClosable() bool {
	return (bool)(C.QMdiArea_tabsClosable(this.h))
}

func (this *QMdiArea) SetTabsMovable(movable bool) {
	C.QMdiArea_setTabsMovable(this.h, (C.bool)(movable))
}

func (this *QMdiArea) TabsMovable() bool {
	return (bool)(C.QMdiArea_tabsMovable(this.h))
}

func (this *QMdiArea) SetTabShape(shape QTabWidget__TabShape) {
	C.QMdiArea_setTabShape(this.h, (C.int)(shape))
}

func (this *QMdiArea) TabShape() QTabWidget__TabShape {
	return (QTabWidget__TabShape)(C.QMdiArea_tabShape(this.h))
}

func (this *QMdiArea) SetTabPosition(position QTabWidget__TabPosition) {
	C.QMdiArea_setTabPosition(this.h, (C.int)(position))
}

func (this *QMdiArea) TabPosition() QTabWidget__TabPosition {
	return (QTabWidget__TabPosition)(C.QMdiArea_tabPosition(this.h))
}

func (this *QMdiArea) SubWindowActivated(param1 *QMdiSubWindow) {
	C.QMdiArea_subWindowActivated(this.h, param1.cPointer())
}
func (this *QMdiArea) OnSubWindowActivated(slot func(param1 *QMdiSubWindow)) {
	C.QMdiArea_connect_subWindowActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_subWindowActivated
func miqt_exec_callback_QMdiArea_subWindowActivated(cb C.intptr_t, param1 *C.QMdiSubWindow) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QMdiSubWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMdiSubWindow(param1)

	gofunc(slotval1)
}

func (this *QMdiArea) SetActiveSubWindow(window *QMdiSubWindow) {
	C.QMdiArea_setActiveSubWindow(this.h, window.cPointer())
}

func (this *QMdiArea) TileSubWindows() {
	C.QMdiArea_tileSubWindows(this.h)
}

func (this *QMdiArea) CascadeSubWindows() {
	C.QMdiArea_cascadeSubWindows(this.h)
}

func (this *QMdiArea) CloseActiveSubWindow() {
	C.QMdiArea_closeActiveSubWindow(this.h)
}

func (this *QMdiArea) CloseAllSubWindows() {
	C.QMdiArea_closeAllSubWindows(this.h)
}

func (this *QMdiArea) ActivateNextSubWindow() {
	C.QMdiArea_activateNextSubWindow(this.h)
}

func (this *QMdiArea) ActivatePreviousSubWindow() {
	C.QMdiArea_activatePreviousSubWindow(this.h)
}

func QMdiArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiArea) SubWindowList1(order QMdiArea__WindowOrder) []*QMdiSubWindow {
	var _ma C.struct_miqt_array = C.QMdiArea_subWindowList1(this.h, (C.int)(order))
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQMdiSubWindow(_outCast[i])
	}
	return _ret
}

func (this *QMdiArea) AddSubWindow2(widget *QWidget, flags WindowType) *QMdiSubWindow {
	return newQMdiSubWindow(C.QMdiArea_addSubWindow2(this.h, widget.cPointer(), (C.int)(flags)))
}

func (this *QMdiArea) SetOption2(option QMdiArea__AreaOption, on bool) {
	C.QMdiArea_setOption2(this.h, (C.int)(option), (C.bool)(on))
}

// SetViewportMargins can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QMdiArea_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QMdiArea_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QMdiArea_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitStyleOption can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) InitStyleOption(option *QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QMdiArea_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QMdiArea_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QMdiArea_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QMdiArea_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMdiArea_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMdiArea_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QMdiArea_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMdiArea_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMdiArea_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QMdiArea that was directly constructed.
func (this *QMdiArea) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMdiArea_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QMdiArea) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QMdiArea_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMdiArea_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_sizeHint
func miqt_exec_callback_QMdiArea_sizeHint(self *C.QMdiArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QMdiArea_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMdiArea_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_minimumSizeHint
func miqt_exec_callback_QMdiArea_minimumSizeHint(self *C.QMdiArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QMdiArea_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QMdiArea) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QMdiArea_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_setupViewport
func miqt_exec_callback_QMdiArea_setupViewport(self *C.QMdiArea, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QMdiArea{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QMdiArea) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QMdiArea_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMdiArea) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QMdiArea_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_event
func miqt_exec_callback_QMdiArea_event(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QMdiArea_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QMdiArea) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QMdiArea_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_eventFilter
func miqt_exec_callback_QMdiArea_eventFilter(self *C.QMdiArea, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_PaintEvent(paintEvent *QPaintEvent) {

	C.QMdiArea_virtualbase_paintEvent(unsafe.Pointer(this.h), paintEvent.cPointer())

}
func (this *QMdiArea) OnPaintEvent(slot func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent)) {
	ok := C.QMdiArea_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_paintEvent
func miqt_exec_callback_QMdiArea_paintEvent(self *C.QMdiArea, cb C.intptr_t, paintEvent *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(paintEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ChildEvent(childEvent *QChildEvent) {

	C.QMdiArea_virtualbase_childEvent(unsafe.Pointer(this.h), childEvent.cPointer())

}
func (this *QMdiArea) OnChildEvent(slot func(super func(childEvent *QChildEvent), childEvent *QChildEvent)) {
	ok := C.QMdiArea_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_childEvent
func miqt_exec_callback_QMdiArea_childEvent(self *C.QMdiArea, cb C.intptr_t, childEvent *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(childEvent *QChildEvent), childEvent *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(childEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ResizeEvent(resizeEvent *QResizeEvent) {

	C.QMdiArea_virtualbase_resizeEvent(unsafe.Pointer(this.h), resizeEvent.cPointer())

}
func (this *QMdiArea) OnResizeEvent(slot func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent)) {
	ok := C.QMdiArea_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_resizeEvent
func miqt_exec_callback_QMdiArea_resizeEvent(self *C.QMdiArea, cb C.intptr_t, resizeEvent *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(resizeEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_TimerEvent(timerEvent *QTimerEvent) {

	C.QMdiArea_virtualbase_timerEvent(unsafe.Pointer(this.h), timerEvent.cPointer())

}
func (this *QMdiArea) OnTimerEvent(slot func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent)) {
	ok := C.QMdiArea_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_timerEvent
func miqt_exec_callback_QMdiArea_timerEvent(self *C.QMdiArea, cb C.intptr_t, timerEvent *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(timerEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ShowEvent(showEvent *QShowEvent) {

	C.QMdiArea_virtualbase_showEvent(unsafe.Pointer(this.h), showEvent.cPointer())

}
func (this *QMdiArea) OnShowEvent(slot func(super func(showEvent *QShowEvent), showEvent *QShowEvent)) {
	ok := C.QMdiArea_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_showEvent
func miqt_exec_callback_QMdiArea_showEvent(self *C.QMdiArea, cb C.intptr_t, showEvent *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(showEvent *QShowEvent), showEvent *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(showEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QMdiArea_virtualbase_viewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMdiArea) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QMdiArea_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_viewportEvent
func miqt_exec_callback_QMdiArea_viewportEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QMdiArea_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QMdiArea) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QMdiArea_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_scrollContentsBy
func miqt_exec_callback_QMdiArea_scrollContentsBy(self *C.QMdiArea, cb C.intptr_t, dx C.int, dy C.int) {
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

	C.QMdiArea_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMdiArea_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_mousePressEvent
func miqt_exec_callback_QMdiArea_mousePressEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMdiArea_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_mouseReleaseEvent
func miqt_exec_callback_QMdiArea_mouseReleaseEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMdiArea_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_mouseDoubleClickEvent
func miqt_exec_callback_QMdiArea_mouseDoubleClickEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMdiArea_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_mouseMoveEvent
func miqt_exec_callback_QMdiArea_mouseMoveEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QMdiArea_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QMdiArea_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_wheelEvent
func miqt_exec_callback_QMdiArea_wheelEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QMdiArea_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QMdiArea_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_contextMenuEvent
func miqt_exec_callback_QMdiArea_contextMenuEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DragEnterEvent(param1 *QDragEnterEvent) {

	C.QMdiArea_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDragEnterEvent(slot func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent)) {
	ok := C.QMdiArea_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_dragEnterEvent
func miqt_exec_callback_QMdiArea_dragEnterEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DragMoveEvent(param1 *QDragMoveEvent) {

	C.QMdiArea_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDragMoveEvent(slot func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent)) {
	ok := C.QMdiArea_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_dragMoveEvent
func miqt_exec_callback_QMdiArea_dragMoveEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DragLeaveEvent(param1 *QDragLeaveEvent) {

	C.QMdiArea_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDragLeaveEvent(slot func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent)) {
	ok := C.QMdiArea_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_dragLeaveEvent
func miqt_exec_callback_QMdiArea_dragLeaveEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DropEvent(param1 *QDropEvent) {

	C.QMdiArea_virtualbase_dropEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDropEvent(slot func(super func(param1 *QDropEvent), param1 *QDropEvent)) {
	ok := C.QMdiArea_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_dropEvent
func miqt_exec_callback_QMdiArea_dropEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDropEvent), param1 *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QMdiArea_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QMdiArea_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_keyPressEvent
func miqt_exec_callback_QMdiArea_keyPressEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QMdiArea_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMdiArea_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_viewportSizeHint
func miqt_exec_callback_QMdiArea_viewportSizeHint(self *C.QMdiArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QMdiArea_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QMdiArea_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_changeEvent
func miqt_exec_callback_QMdiArea_changeEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DevType() int {

	return (int)(C.QMdiArea_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QMdiArea) OnDevType(slot func(super func() int) int) {
	ok := C.QMdiArea_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_devType
func miqt_exec_callback_QMdiArea_devType(self *C.QMdiArea, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_SetVisible(visible bool) {

	C.QMdiArea_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMdiArea) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QMdiArea_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_setVisible
func miqt_exec_callback_QMdiArea_setVisible(self *C.QMdiArea, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMdiArea{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMdiArea) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QMdiArea_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMdiArea) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QMdiArea_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_heightForWidth
func miqt_exec_callback_QMdiArea_heightForWidth(self *C.QMdiArea, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QMdiArea_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QMdiArea) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QMdiArea_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_hasHeightForWidth
func miqt_exec_callback_QMdiArea_hasHeightForWidth(self *C.QMdiArea, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QMdiArea_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QMdiArea) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QMdiArea_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_paintEngine
func miqt_exec_callback_QMdiArea_paintEngine(self *C.QMdiArea, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QMdiArea_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QMdiArea_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_keyReleaseEvent
func miqt_exec_callback_QMdiArea_keyReleaseEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QMdiArea_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QMdiArea_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_focusInEvent
func miqt_exec_callback_QMdiArea_focusInEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QMdiArea_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QMdiArea_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_focusOutEvent
func miqt_exec_callback_QMdiArea_focusOutEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_EnterEvent(event *QEvent) {

	C.QMdiArea_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMdiArea_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_enterEvent
func miqt_exec_callback_QMdiArea_enterEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QMdiArea_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMdiArea_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_leaveEvent
func miqt_exec_callback_QMdiArea_leaveEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QMdiArea_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QMdiArea_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_moveEvent
func miqt_exec_callback_QMdiArea_moveEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QMdiArea_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QMdiArea_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_closeEvent
func miqt_exec_callback_QMdiArea_closeEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QMdiArea_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QMdiArea_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_tabletEvent
func miqt_exec_callback_QMdiArea_tabletEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QMdiArea_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QMdiArea_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_actionEvent
func miqt_exec_callback_QMdiArea_actionEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QMdiArea_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QMdiArea_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_hideEvent
func miqt_exec_callback_QMdiArea_hideEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QMdiArea_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QMdiArea) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QMdiArea_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_nativeEvent
func miqt_exec_callback_QMdiArea_nativeEvent(self *C.QMdiArea, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QMdiArea_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMdiArea) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QMdiArea_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_metric
func miqt_exec_callback_QMdiArea_metric(self *C.QMdiArea, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_InitPainter(painter *QPainter) {

	C.QMdiArea_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QMdiArea) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QMdiArea_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_initPainter
func miqt_exec_callback_QMdiArea_initPainter(self *C.QMdiArea, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QMdiArea{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QMdiArea) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QMdiArea_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QMdiArea) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QMdiArea_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_redirected
func miqt_exec_callback_QMdiArea_redirected(self *C.QMdiArea, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QMdiArea_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QMdiArea) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QMdiArea_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_sharedPainter
func miqt_exec_callback_QMdiArea_sharedPainter(self *C.QMdiArea, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QMdiArea_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QMdiArea_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_inputMethodEvent
func miqt_exec_callback_QMdiArea_inputMethodEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QMdiArea_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QMdiArea_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_inputMethodQuery
func miqt_exec_callback_QMdiArea_inputMethodQuery(self *C.QMdiArea, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QMdiArea_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QMdiArea) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QMdiArea_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_focusNextPrevChild
func miqt_exec_callback_QMdiArea_focusNextPrevChild(self *C.QMdiArea, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_CustomEvent(event *QEvent) {

	C.QMdiArea_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMdiArea_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_customEvent
func miqt_exec_callback_QMdiArea_customEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QMdiArea_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMdiArea) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMdiArea_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_connectNotify
func miqt_exec_callback_QMdiArea_connectNotify(self *C.QMdiArea, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMdiArea) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QMdiArea_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMdiArea) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMdiArea_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_disconnectNotify
func miqt_exec_callback_QMdiArea_disconnectNotify(self *C.QMdiArea, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMdiArea) Delete() {
	C.QMdiArea_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMdiArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QMdiArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
