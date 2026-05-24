package qwt

/*

#include "gen_qwt_plot_magnifier.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlotMagnifier struct {
	h *C.QwtPlotMagnifier
	*QwtMagnifier
}

func (this *QwtPlotMagnifier) cPointer() *C.QwtPlotMagnifier {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotMagnifier) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotMagnifier constructs the type using only CGO pointers.
func newQwtPlotMagnifier(h *C.QwtPlotMagnifier) *QwtPlotMagnifier {
	if h == nil {
		return nil
	}
	var outptr_QwtMagnifier *C.QwtMagnifier = nil
	C.QwtPlotMagnifier_virtbase(h, &outptr_QwtMagnifier)

	return &QwtPlotMagnifier{h: h,
		QwtMagnifier: newQwtMagnifier(outptr_QwtMagnifier)}
}

// UnsafeNewQwtPlotMagnifier constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotMagnifier(h unsafe.Pointer) *QwtPlotMagnifier {
	return newQwtPlotMagnifier((*C.QwtPlotMagnifier)(h))
}

// NewQwtPlotMagnifier constructs a new QwtPlotMagnifier object.
func NewQwtPlotMagnifier(param1 *qt.QWidget) *QwtPlotMagnifier {

	return newQwtPlotMagnifier(C.QwtPlotMagnifier_new((*C.QWidget)(param1.UnsafePointer())))
}

func (this *QwtPlotMagnifier) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtPlotMagnifier_metaObject(this.h)))
}

func (this *QwtPlotMagnifier) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtPlotMagnifier_metacast(this.h, param1_Cstring))
}

func QwtPlotMagnifier_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotMagnifier_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotMagnifier_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotMagnifier_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlotMagnifier) SetAxisEnabled(axis int, on bool) {
	C.QwtPlotMagnifier_setAxisEnabled(this.h, (C.int)(axis), (C.bool)(on))
}

func (this *QwtPlotMagnifier) IsAxisEnabled(axis int) bool {
	return (bool)(C.QwtPlotMagnifier_isAxisEnabled(this.h, (C.int)(axis)))
}

func (this *QwtPlotMagnifier) Canvas() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPlotMagnifier_canvas(this.h)))
}

func (this *QwtPlotMagnifier) Canvas2() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPlotMagnifier_canvas2(this.h)))
}

func (this *QwtPlotMagnifier) Plot() *QwtPlot {
	return newQwtPlot(C.QwtPlotMagnifier_plot(this.h))
}

func (this *QwtPlotMagnifier) Plot2() *QwtPlot {
	return newQwtPlot(C.QwtPlotMagnifier_plot2(this.h))
}

func QwtPlotMagnifier_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotMagnifier_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotMagnifier_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotMagnifier_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotMagnifier_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotMagnifier_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotMagnifier_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotMagnifier_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QwtPlotMagnifier that was directly constructed.
func (this *QwtPlotMagnifier) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPlotMagnifier_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPlotMagnifier that was directly constructed.
func (this *QwtPlotMagnifier) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotMagnifier_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPlotMagnifier that was directly constructed.
func (this *QwtPlotMagnifier) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotMagnifier_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPlotMagnifier that was directly constructed.
func (this *QwtPlotMagnifier) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotMagnifier_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtPlotMagnifier) callVirtualBase_Rescale(factor float64) {

	C.QwtPlotMagnifier_virtualbase_rescale(unsafe.Pointer(this.h), (C.double)(factor))

}
func (this *QwtPlotMagnifier) OnRescale(slot func(super func(factor float64), factor float64)) {
	ok := C.QwtPlotMagnifier_override_virtual_rescale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_rescale
func miqt_exec_callback_QwtPlotMagnifier_rescale(self *C.QwtPlotMagnifier, cb C.intptr_t, factor C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(factor float64), factor float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(factor)

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_Rescale, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QwtPlotMagnifier_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtPlotMagnifier) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtPlotMagnifier_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_eventFilter
func miqt_exec_callback_QwtPlotMagnifier_eventFilter(self *C.QwtPlotMagnifier, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotMagnifier) callVirtualBase_WidgetMousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtPlotMagnifier_virtualbase_widgetMousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnWidgetMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotMagnifier_override_virtual_widgetMousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_widgetMousePressEvent
func miqt_exec_callback_QwtPlotMagnifier_widgetMousePressEvent(self *C.QwtPlotMagnifier, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_WidgetMousePressEvent, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_WidgetMouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtPlotMagnifier_virtualbase_widgetMouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnWidgetMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotMagnifier_override_virtual_widgetMouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_widgetMouseReleaseEvent
func miqt_exec_callback_QwtPlotMagnifier_widgetMouseReleaseEvent(self *C.QwtPlotMagnifier, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_WidgetMouseReleaseEvent, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_WidgetMouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtPlotMagnifier_virtualbase_widgetMouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnWidgetMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotMagnifier_override_virtual_widgetMouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_widgetMouseMoveEvent
func miqt_exec_callback_QwtPlotMagnifier_widgetMouseMoveEvent(self *C.QwtPlotMagnifier, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_WidgetMouseMoveEvent, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_WidgetWheelEvent(param1 *qt.QWheelEvent) {

	C.QwtPlotMagnifier_virtualbase_widgetWheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnWidgetWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtPlotMagnifier_override_virtual_widgetWheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_widgetWheelEvent
func miqt_exec_callback_QwtPlotMagnifier_widgetWheelEvent(self *C.QwtPlotMagnifier, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_WidgetWheelEvent, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_WidgetKeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtPlotMagnifier_virtualbase_widgetKeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnWidgetKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtPlotMagnifier_override_virtual_widgetKeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_widgetKeyPressEvent
func miqt_exec_callback_QwtPlotMagnifier_widgetKeyPressEvent(self *C.QwtPlotMagnifier, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_WidgetKeyPressEvent, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_WidgetKeyReleaseEvent(param1 *qt.QKeyEvent) {

	C.QwtPlotMagnifier_virtualbase_widgetKeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnWidgetKeyReleaseEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtPlotMagnifier_override_virtual_widgetKeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_widgetKeyReleaseEvent
func miqt_exec_callback_QwtPlotMagnifier_widgetKeyReleaseEvent(self *C.QwtPlotMagnifier, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_WidgetKeyReleaseEvent, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtPlotMagnifier_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPlotMagnifier) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtPlotMagnifier_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_event
func miqt_exec_callback_QwtPlotMagnifier_event(self *C.QwtPlotMagnifier, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotMagnifier) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtPlotMagnifier_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPlotMagnifier_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_timerEvent
func miqt_exec_callback_QwtPlotMagnifier_timerEvent(self *C.QwtPlotMagnifier, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtPlotMagnifier_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPlotMagnifier_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_childEvent
func miqt_exec_callback_QwtPlotMagnifier_childEvent(self *C.QwtPlotMagnifier, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtPlotMagnifier_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotMagnifier_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_customEvent
func miqt_exec_callback_QwtPlotMagnifier_customEvent(self *C.QwtPlotMagnifier, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotMagnifier_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotMagnifier_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_connectNotify
func miqt_exec_callback_QwtPlotMagnifier_connectNotify(self *C.QwtPlotMagnifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPlotMagnifier) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotMagnifier_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotMagnifier) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotMagnifier_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotMagnifier_disconnectNotify
func miqt_exec_callback_QwtPlotMagnifier_disconnectNotify(self *C.QwtPlotMagnifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotMagnifier{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtPlotMagnifier) Delete() {
	C.QwtPlotMagnifier_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotMagnifier) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotMagnifier) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
