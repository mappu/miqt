package qwt

/*

#include "gen_qwt_magnifier.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtMagnifier struct {
	h *C.QwtMagnifier
	*qt.QObject
}

func (this *QwtMagnifier) cPointer() *C.QwtMagnifier {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtMagnifier) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtMagnifier constructs the type using only CGO pointers.
func newQwtMagnifier(h *C.QwtMagnifier) *QwtMagnifier {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QwtMagnifier_virtbase(h, &outptr_QObject)

	return &QwtMagnifier{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQwtMagnifier constructs the type using only unsafe pointers.
func UnsafeNewQwtMagnifier(h unsafe.Pointer) *QwtMagnifier {
	return newQwtMagnifier((*C.QwtMagnifier)(h))
}

// NewQwtMagnifier constructs a new QwtMagnifier object.
func NewQwtMagnifier(param1 *qt.QWidget) *QwtMagnifier {

	return newQwtMagnifier(C.QwtMagnifier_new((*C.QWidget)(param1.UnsafePointer())))
}

func (this *QwtMagnifier) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtMagnifier_metaObject(this.h)))
}

func (this *QwtMagnifier) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtMagnifier_metacast(this.h, param1_Cstring))
}

func QwtMagnifier_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtMagnifier_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtMagnifier_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtMagnifier_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtMagnifier) ParentWidget() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtMagnifier_parentWidget(this.h)))
}

func (this *QwtMagnifier) ParentWidget2() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtMagnifier_parentWidget2(this.h)))
}

func (this *QwtMagnifier) SetEnabled(enabled bool) {
	C.QwtMagnifier_setEnabled(this.h, (C.bool)(enabled))
}

func (this *QwtMagnifier) IsEnabled() bool {
	return (bool)(C.QwtMagnifier_isEnabled(this.h))
}

func (this *QwtMagnifier) SetMouseFactor(mouseFactor float64) {
	C.QwtMagnifier_setMouseFactor(this.h, (C.double)(mouseFactor))
}

func (this *QwtMagnifier) MouseFactor() float64 {
	return (float64)(C.QwtMagnifier_mouseFactor(this.h))
}

func (this *QwtMagnifier) SetMouseButton(param1 qt.MouseButton) {
	C.QwtMagnifier_setMouseButton(this.h, (C.int)(param1))
}

func (this *QwtMagnifier) GetMouseButton(param1 *qt.MouseButton, param2 *qt.KeyboardModifier) {
	C.QwtMagnifier_getMouseButton(this.h, (*C.int)(unsafe.Pointer(param1)), (*C.int)(unsafe.Pointer(param2)))
}

func (this *QwtMagnifier) SetWheelFactor(wheelFactor float64) {
	C.QwtMagnifier_setWheelFactor(this.h, (C.double)(wheelFactor))
}

func (this *QwtMagnifier) WheelFactor() float64 {
	return (float64)(C.QwtMagnifier_wheelFactor(this.h))
}

func (this *QwtMagnifier) SetWheelModifiers(wheelModifiers qt.KeyboardModifier) {
	C.QwtMagnifier_setWheelModifiers(this.h, (C.int)(wheelModifiers))
}

func (this *QwtMagnifier) WheelModifiers() qt.KeyboardModifier {
	return (qt.KeyboardModifier)(C.QwtMagnifier_wheelModifiers(this.h))
}

func (this *QwtMagnifier) SetKeyFactor(keyFactor float64) {
	C.QwtMagnifier_setKeyFactor(this.h, (C.double)(keyFactor))
}

func (this *QwtMagnifier) KeyFactor() float64 {
	return (float64)(C.QwtMagnifier_keyFactor(this.h))
}

func (this *QwtMagnifier) SetZoomInKey(key int) {
	C.QwtMagnifier_setZoomInKey(this.h, (C.int)(key))
}

func (this *QwtMagnifier) GetZoomInKey(key *int, param2 *qt.KeyboardModifier) {
	C.QwtMagnifier_getZoomInKey(this.h, (*C.int)(unsafe.Pointer(key)), (*C.int)(unsafe.Pointer(param2)))
}

func (this *QwtMagnifier) SetZoomOutKey(key int) {
	C.QwtMagnifier_setZoomOutKey(this.h, (C.int)(key))
}

func (this *QwtMagnifier) GetZoomOutKey(key *int, param2 *qt.KeyboardModifier) {
	C.QwtMagnifier_getZoomOutKey(this.h, (*C.int)(unsafe.Pointer(key)), (*C.int)(unsafe.Pointer(param2)))
}

func (this *QwtMagnifier) EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {
	return (bool)(C.QwtMagnifier_eventFilter(this.h, (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))
}

func QwtMagnifier_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtMagnifier_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtMagnifier_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtMagnifier_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtMagnifier_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtMagnifier_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtMagnifier_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtMagnifier_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtMagnifier) SetMouseButton2(param1 qt.MouseButton, param2 qt.KeyboardModifier) {
	C.QwtMagnifier_setMouseButton2(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QwtMagnifier) SetZoomInKey2(key int, param2 qt.KeyboardModifier) {
	C.QwtMagnifier_setZoomInKey2(this.h, (C.int)(key), (C.int)(param2))
}

func (this *QwtMagnifier) SetZoomOutKey2(key int, param2 qt.KeyboardModifier) {
	C.QwtMagnifier_setZoomOutKey2(this.h, (C.int)(key), (C.int)(param2))
}

// Sender can only be called from a QwtMagnifier that was directly constructed.
func (this *QwtMagnifier) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtMagnifier_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtMagnifier that was directly constructed.
func (this *QwtMagnifier) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtMagnifier_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtMagnifier that was directly constructed.
func (this *QwtMagnifier) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtMagnifier_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtMagnifier that was directly constructed.
func (this *QwtMagnifier) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtMagnifier_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtMagnifier) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QwtMagnifier_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtMagnifier) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtMagnifier_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_eventFilter
func miqt_exec_callback_QwtMagnifier_eventFilter(self *C.QwtMagnifier, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtMagnifier{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}
func (this *QwtMagnifier) OnRescale(slot func(factor float64)) {
	ok := C.QwtMagnifier_override_virtual_rescale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_rescale
func miqt_exec_callback_QwtMagnifier_rescale(self *C.QwtMagnifier, cb C.intptr_t, factor C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(factor float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(factor)

	gofunc(slotval1)

}

func (this *QwtMagnifier) callVirtualBase_WidgetMousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtMagnifier_virtualbase_widgetMousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtMagnifier) OnWidgetMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtMagnifier_override_virtual_widgetMousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_widgetMousePressEvent
func miqt_exec_callback_QwtMagnifier_widgetMousePressEvent(self *C.QwtMagnifier, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_WidgetMousePressEvent, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_WidgetMouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtMagnifier_virtualbase_widgetMouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtMagnifier) OnWidgetMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtMagnifier_override_virtual_widgetMouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_widgetMouseReleaseEvent
func miqt_exec_callback_QwtMagnifier_widgetMouseReleaseEvent(self *C.QwtMagnifier, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_WidgetMouseReleaseEvent, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_WidgetMouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtMagnifier_virtualbase_widgetMouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtMagnifier) OnWidgetMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtMagnifier_override_virtual_widgetMouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_widgetMouseMoveEvent
func miqt_exec_callback_QwtMagnifier_widgetMouseMoveEvent(self *C.QwtMagnifier, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_WidgetMouseMoveEvent, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_WidgetWheelEvent(param1 *qt.QWheelEvent) {

	C.QwtMagnifier_virtualbase_widgetWheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtMagnifier) OnWidgetWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtMagnifier_override_virtual_widgetWheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_widgetWheelEvent
func miqt_exec_callback_QwtMagnifier_widgetWheelEvent(self *C.QwtMagnifier, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_WidgetWheelEvent, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_WidgetKeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtMagnifier_virtualbase_widgetKeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtMagnifier) OnWidgetKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtMagnifier_override_virtual_widgetKeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_widgetKeyPressEvent
func miqt_exec_callback_QwtMagnifier_widgetKeyPressEvent(self *C.QwtMagnifier, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_WidgetKeyPressEvent, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_WidgetKeyReleaseEvent(param1 *qt.QKeyEvent) {

	C.QwtMagnifier_virtualbase_widgetKeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtMagnifier) OnWidgetKeyReleaseEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtMagnifier_override_virtual_widgetKeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_widgetKeyReleaseEvent
func miqt_exec_callback_QwtMagnifier_widgetKeyReleaseEvent(self *C.QwtMagnifier, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_WidgetKeyReleaseEvent, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtMagnifier_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtMagnifier) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtMagnifier_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_event
func miqt_exec_callback_QwtMagnifier_event(self *C.QwtMagnifier, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtMagnifier{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtMagnifier) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtMagnifier_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtMagnifier) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtMagnifier_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_timerEvent
func miqt_exec_callback_QwtMagnifier_timerEvent(self *C.QwtMagnifier, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtMagnifier_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtMagnifier) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtMagnifier_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_childEvent
func miqt_exec_callback_QwtMagnifier_childEvent(self *C.QwtMagnifier, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtMagnifier_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtMagnifier) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtMagnifier_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_customEvent
func miqt_exec_callback_QwtMagnifier_customEvent(self *C.QwtMagnifier, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtMagnifier_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtMagnifier) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtMagnifier_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_connectNotify
func miqt_exec_callback_QwtMagnifier_connectNotify(self *C.QwtMagnifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtMagnifier) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtMagnifier_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtMagnifier) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtMagnifier_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtMagnifier_disconnectNotify
func miqt_exec_callback_QwtMagnifier_disconnectNotify(self *C.QwtMagnifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtMagnifier{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtMagnifier) Delete() {
	C.QwtMagnifier_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtMagnifier) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtMagnifier) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
