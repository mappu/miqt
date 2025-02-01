package qt6

/*

#include "gen_qsizegrip.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSizeGrip struct {
	h *C.QSizeGrip
	*QWidget
}

func (this *QSizeGrip) cPointer() *C.QSizeGrip {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSizeGrip) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSizeGrip constructs the type using only CGO pointers.
func newQSizeGrip(h *C.QSizeGrip) *QSizeGrip {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QSizeGrip_virtbase(h, &outptr_QWidget)

	return &QSizeGrip{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQSizeGrip constructs the type using only unsafe pointers.
func UnsafeNewQSizeGrip(h unsafe.Pointer) *QSizeGrip {
	return newQSizeGrip((*C.QSizeGrip)(h))
}

// NewQSizeGrip constructs a new QSizeGrip object.
func NewQSizeGrip(parent *QWidget) *QSizeGrip {

	return newQSizeGrip(C.QSizeGrip_new(parent.cPointer()))
}

func (this *QSizeGrip) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSizeGrip_metaObject(this.h))
}

func (this *QSizeGrip) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSizeGrip_metacast(this.h, param1_Cstring))
}

func QSizeGrip_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSizeGrip_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSizeGrip) SizeHint() *QSize {
	_goptr := newQSize(C.QSizeGrip_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSizeGrip) SetVisible(visible bool) {
	C.QSizeGrip_setVisible(this.h, (C.bool)(visible))
}

func QSizeGrip_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSizeGrip_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSizeGrip_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSizeGrip_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSizeGrip) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSizeGrip_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSizeGrip) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSizeGrip_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_sizeHint
func miqt_exec_callback_QSizeGrip_sizeHint(self *C.QSizeGrip, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSizeGrip) callVirtualBase_SetVisible(visible bool) {

	C.QSizeGrip_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSizeGrip) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSizeGrip_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_setVisible
func miqt_exec_callback_QSizeGrip_setVisible(self *C.QSizeGrip, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSizeGrip) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QSizeGrip_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSizeGrip) OnpaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QSizeGrip_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_paintEvent
func miqt_exec_callback_QSizeGrip_paintEvent(self *C.QSizeGrip, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QSizeGrip_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSizeGrip) OnmousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QSizeGrip_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_mousePressEvent
func miqt_exec_callback_QSizeGrip_mousePressEvent(self *C.QSizeGrip, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QSizeGrip_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSizeGrip) OnmouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QSizeGrip_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_mouseMoveEvent
func miqt_exec_callback_QSizeGrip_mouseMoveEvent(self *C.QSizeGrip, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_MouseReleaseEvent(mouseEvent *QMouseEvent) {

	C.QSizeGrip_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), mouseEvent.cPointer())

}
func (this *QSizeGrip) OnmouseReleaseEvent(slot func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent)) {
	ok := C.QSizeGrip_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_mouseReleaseEvent
func miqt_exec_callback_QSizeGrip_mouseReleaseEvent(self *C.QSizeGrip, cb C.intptr_t, mouseEvent *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mouseEvent *QMouseEvent), mouseEvent *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(mouseEvent)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_MoveEvent(moveEvent *QMoveEvent) {

	C.QSizeGrip_virtualbase_moveEvent(unsafe.Pointer(this.h), moveEvent.cPointer())

}
func (this *QSizeGrip) OnmoveEvent(slot func(super func(moveEvent *QMoveEvent), moveEvent *QMoveEvent)) {
	ok := C.QSizeGrip_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_moveEvent
func miqt_exec_callback_QSizeGrip_moveEvent(self *C.QSizeGrip, cb C.intptr_t, moveEvent *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(moveEvent *QMoveEvent), moveEvent *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(moveEvent)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_ShowEvent(showEvent *QShowEvent) {

	C.QSizeGrip_virtualbase_showEvent(unsafe.Pointer(this.h), showEvent.cPointer())

}
func (this *QSizeGrip) OnshowEvent(slot func(super func(showEvent *QShowEvent), showEvent *QShowEvent)) {
	ok := C.QSizeGrip_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_showEvent
func miqt_exec_callback_QSizeGrip_showEvent(self *C.QSizeGrip, cb C.intptr_t, showEvent *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(showEvent *QShowEvent), showEvent *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(showEvent)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_HideEvent(hideEvent *QHideEvent) {

	C.QSizeGrip_virtualbase_hideEvent(unsafe.Pointer(this.h), hideEvent.cPointer())

}
func (this *QSizeGrip) OnhideEvent(slot func(super func(hideEvent *QHideEvent), hideEvent *QHideEvent)) {
	ok := C.QSizeGrip_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_hideEvent
func miqt_exec_callback_QSizeGrip_hideEvent(self *C.QSizeGrip, cb C.intptr_t, hideEvent *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(hideEvent *QHideEvent), hideEvent *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(hideEvent)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QSizeGrip_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QSizeGrip) OneventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QSizeGrip_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_eventFilter
func miqt_exec_callback_QSizeGrip_eventFilter(self *C.QSizeGrip, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSizeGrip) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QSizeGrip_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QSizeGrip) Onevent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QSizeGrip_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_event
func miqt_exec_callback_QSizeGrip_event(self *C.QSizeGrip, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSizeGrip) callVirtualBase_DevType() int {

	return (int)(C.QSizeGrip_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QSizeGrip) OndevType(slot func(super func() int) int) {
	ok := C.QSizeGrip_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_devType
func miqt_exec_callback_QSizeGrip_devType(self *C.QSizeGrip, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSizeGrip) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QSizeGrip_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSizeGrip) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSizeGrip_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_minimumSizeHint
func miqt_exec_callback_QSizeGrip_minimumSizeHint(self *C.QSizeGrip, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSizeGrip) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSizeGrip_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSizeGrip) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSizeGrip_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_heightForWidth
func miqt_exec_callback_QSizeGrip_heightForWidth(self *C.QSizeGrip, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSizeGrip) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSizeGrip_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSizeGrip) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSizeGrip_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_hasHeightForWidth
func miqt_exec_callback_QSizeGrip_hasHeightForWidth(self *C.QSizeGrip, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSizeGrip) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSizeGrip_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QSizeGrip) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSizeGrip_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_paintEngine
func miqt_exec_callback_QSizeGrip_paintEngine(self *C.QSizeGrip, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSizeGrip) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSizeGrip_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSizeGrip_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_mouseDoubleClickEvent
func miqt_exec_callback_QSizeGrip_mouseDoubleClickEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSizeGrip_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QSizeGrip_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_wheelEvent
func miqt_exec_callback_QSizeGrip_wheelEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSizeGrip_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSizeGrip_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_keyPressEvent
func miqt_exec_callback_QSizeGrip_keyPressEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSizeGrip_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSizeGrip_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_keyReleaseEvent
func miqt_exec_callback_QSizeGrip_keyReleaseEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSizeGrip_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSizeGrip_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_focusInEvent
func miqt_exec_callback_QSizeGrip_focusInEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSizeGrip_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSizeGrip_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_focusOutEvent
func miqt_exec_callback_QSizeGrip_focusOutEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QSizeGrip_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QSizeGrip_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_enterEvent
func miqt_exec_callback_QSizeGrip_enterEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSizeGrip_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSizeGrip_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_leaveEvent
func miqt_exec_callback_QSizeGrip_leaveEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QSizeGrip_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QSizeGrip_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_resizeEvent
func miqt_exec_callback_QSizeGrip_resizeEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSizeGrip_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSizeGrip_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_closeEvent
func miqt_exec_callback_QSizeGrip_closeEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSizeGrip_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSizeGrip_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_contextMenuEvent
func miqt_exec_callback_QSizeGrip_contextMenuEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSizeGrip_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSizeGrip_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_tabletEvent
func miqt_exec_callback_QSizeGrip_tabletEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSizeGrip_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSizeGrip_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_actionEvent
func miqt_exec_callback_QSizeGrip_actionEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSizeGrip_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSizeGrip_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_dragEnterEvent
func miqt_exec_callback_QSizeGrip_dragEnterEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSizeGrip_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSizeGrip_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_dragMoveEvent
func miqt_exec_callback_QSizeGrip_dragMoveEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSizeGrip_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSizeGrip_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_dragLeaveEvent
func miqt_exec_callback_QSizeGrip_dragLeaveEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSizeGrip_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSizeGrip_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_dropEvent
func miqt_exec_callback_QSizeGrip_dropEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSizeGrip_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QSizeGrip) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QSizeGrip_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_nativeEvent
func miqt_exec_callback_QSizeGrip_nativeEvent(self *C.QSizeGrip, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSizeGrip) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QSizeGrip_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSizeGrip) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QSizeGrip_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_changeEvent
func miqt_exec_callback_QSizeGrip_changeEvent(self *C.QSizeGrip, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSizeGrip_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSizeGrip) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSizeGrip_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_metric
func miqt_exec_callback_QSizeGrip_metric(self *C.QSizeGrip, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSizeGrip) callVirtualBase_InitPainter(painter *QPainter) {

	C.QSizeGrip_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSizeGrip) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSizeGrip_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_initPainter
func miqt_exec_callback_QSizeGrip_initPainter(self *C.QSizeGrip, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSizeGrip) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSizeGrip_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSizeGrip) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSizeGrip_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_redirected
func miqt_exec_callback_QSizeGrip_redirected(self *C.QSizeGrip, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSizeGrip) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QSizeGrip_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSizeGrip) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSizeGrip_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_sharedPainter
func miqt_exec_callback_QSizeGrip_sharedPainter(self *C.QSizeGrip, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSizeGrip) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSizeGrip_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSizeGrip) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSizeGrip_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_inputMethodEvent
func miqt_exec_callback_QSizeGrip_inputMethodEvent(self *C.QSizeGrip, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QSizeGrip_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSizeGrip) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSizeGrip_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_inputMethodQuery
func miqt_exec_callback_QSizeGrip_inputMethodQuery(self *C.QSizeGrip, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSizeGrip) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSizeGrip_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSizeGrip) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSizeGrip_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_focusNextPrevChild
func miqt_exec_callback_QSizeGrip_focusNextPrevChild(self *C.QSizeGrip, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSizeGrip{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSizeGrip) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSizeGrip_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSizeGrip_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_timerEvent
func miqt_exec_callback_QSizeGrip_timerEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSizeGrip_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSizeGrip_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_childEvent
func miqt_exec_callback_QSizeGrip_childEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSizeGrip_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSizeGrip) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSizeGrip_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_customEvent
func miqt_exec_callback_QSizeGrip_customEvent(self *C.QSizeGrip, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSizeGrip) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSizeGrip_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSizeGrip) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSizeGrip_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_connectNotify
func miqt_exec_callback_QSizeGrip_connectNotify(self *C.QSizeGrip, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSizeGrip) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSizeGrip_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSizeGrip) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSizeGrip_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSizeGrip_disconnectNotify
func miqt_exec_callback_QSizeGrip_disconnectNotify(self *C.QSizeGrip, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSizeGrip{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSizeGrip) Delete() {
	C.QSizeGrip_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSizeGrip) GoGC() {
	runtime.SetFinalizer(this, func(this *QSizeGrip) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
