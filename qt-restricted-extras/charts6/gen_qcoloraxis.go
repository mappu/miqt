package charts6

/*

#include "gen_qcoloraxis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QColorAxis struct {
	h *C.QColorAxis
	*QAbstractAxis
}

func (this *QColorAxis) cPointer() *C.QColorAxis {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColorAxis) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQColorAxis constructs the type using only CGO pointers.
func newQColorAxis(h *C.QColorAxis) *QColorAxis {
	if h == nil {
		return nil
	}
	var outptr_QAbstractAxis *C.QAbstractAxis = nil
	C.QColorAxis_virtbase(h, &outptr_QAbstractAxis)

	return &QColorAxis{h: h,
		QAbstractAxis: newQAbstractAxis(outptr_QAbstractAxis)}
}

// UnsafeNewQColorAxis constructs the type using only unsafe pointers.
func UnsafeNewQColorAxis(h unsafe.Pointer) *QColorAxis {
	return newQColorAxis((*C.QColorAxis)(h))
}

// NewQColorAxis constructs a new QColorAxis object.
func NewQColorAxis() *QColorAxis {

	return newQColorAxis(C.QColorAxis_new())
}

// NewQColorAxis2 constructs a new QColorAxis object.
func NewQColorAxis2(parent *qt6.QObject) *QColorAxis {

	return newQColorAxis(C.QColorAxis_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QColorAxis) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QColorAxis_metaObject(this.h)))
}

func (this *QColorAxis) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QColorAxis_metacast(this.h, param1_Cstring))
}

func QColorAxis_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QColorAxis_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColorAxis) Type() QAbstractAxis__AxisType {
	return (QAbstractAxis__AxisType)(C.QColorAxis_type(this.h))
}

func (this *QColorAxis) SetMin(min float64) {
	C.QColorAxis_setMin(this.h, (C.double)(min))
}

func (this *QColorAxis) Min() float64 {
	return (float64)(C.QColorAxis_min(this.h))
}

func (this *QColorAxis) SetMax(max float64) {
	C.QColorAxis_setMax(this.h, (C.double)(max))
}

func (this *QColorAxis) Max() float64 {
	return (float64)(C.QColorAxis_max(this.h))
}

func (this *QColorAxis) SetRange(min float64, max float64) {
	C.QColorAxis_setRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QColorAxis) SetTickCount(count int) {
	C.QColorAxis_setTickCount(this.h, (C.int)(count))
}

func (this *QColorAxis) TickCount() int {
	return (int)(C.QColorAxis_tickCount(this.h))
}

func (this *QColorAxis) SetSize(size float64) {
	C.QColorAxis_setSize(this.h, (C.double)(size))
}

func (this *QColorAxis) Size() float64 {
	return (float64)(C.QColorAxis_size(this.h))
}

func (this *QColorAxis) SetGradient(gradient *qt6.QLinearGradient) {
	C.QColorAxis_setGradient(this.h, (*C.QLinearGradient)(gradient.UnsafePointer()))
}

func (this *QColorAxis) Gradient() *qt6.QLinearGradient {
	_goptr := qt6.UnsafeNewQLinearGradient(unsafe.Pointer(C.QColorAxis_gradient(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorAxis) SetAutoRange(autoRange bool) {
	C.QColorAxis_setAutoRange(this.h, (C.bool)(autoRange))
}

func (this *QColorAxis) AutoRange() bool {
	return (bool)(C.QColorAxis_autoRange(this.h))
}

func (this *QColorAxis) MinChanged(min float64) {
	C.QColorAxis_minChanged(this.h, (C.double)(min))
}
func (this *QColorAxis) OnMinChanged(slot func(min float64)) {
	C.QColorAxis_connect_minChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorAxis_minChanged
func miqt_exec_callback_QColorAxis_minChanged(cb C.intptr_t, min C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(min)

	gofunc(slotval1)
}

func (this *QColorAxis) MaxChanged(max float64) {
	C.QColorAxis_maxChanged(this.h, (C.double)(max))
}
func (this *QColorAxis) OnMaxChanged(slot func(max float64)) {
	C.QColorAxis_connect_maxChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorAxis_maxChanged
func miqt_exec_callback_QColorAxis_maxChanged(cb C.intptr_t, max C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(max float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(max)

	gofunc(slotval1)
}

func (this *QColorAxis) RangeChanged(min float64, max float64) {
	C.QColorAxis_rangeChanged(this.h, (C.double)(min), (C.double)(max))
}
func (this *QColorAxis) OnRangeChanged(slot func(min float64, max float64)) {
	C.QColorAxis_connect_rangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorAxis_rangeChanged
func miqt_exec_callback_QColorAxis_rangeChanged(cb C.intptr_t, min C.double, max C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min float64, max float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(min)

	slotval2 := (float64)(max)

	gofunc(slotval1, slotval2)
}

func (this *QColorAxis) TickCountChanged(tickCount int) {
	C.QColorAxis_tickCountChanged(this.h, (C.int)(tickCount))
}
func (this *QColorAxis) OnTickCountChanged(slot func(tickCount int)) {
	C.QColorAxis_connect_tickCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorAxis_tickCountChanged
func miqt_exec_callback_QColorAxis_tickCountChanged(cb C.intptr_t, tickCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(tickCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(tickCount)

	gofunc(slotval1)
}

func (this *QColorAxis) GradientChanged(gradient *qt6.QLinearGradient) {
	C.QColorAxis_gradientChanged(this.h, (*C.QLinearGradient)(gradient.UnsafePointer()))
}
func (this *QColorAxis) OnGradientChanged(slot func(gradient *qt6.QLinearGradient)) {
	C.QColorAxis_connect_gradientChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorAxis_gradientChanged
func miqt_exec_callback_QColorAxis_gradientChanged(cb C.intptr_t, gradient *C.QLinearGradient) {
	gofunc, ok := cgo.Handle(cb).Value().(func(gradient *qt6.QLinearGradient))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQLinearGradient(unsafe.Pointer(gradient))

	gofunc(slotval1)
}

func (this *QColorAxis) SizeChanged(size float64) {
	C.QColorAxis_sizeChanged(this.h, (C.double)(size))
}
func (this *QColorAxis) OnSizeChanged(slot func(size float64)) {
	C.QColorAxis_connect_sizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorAxis_sizeChanged
func miqt_exec_callback_QColorAxis_sizeChanged(cb C.intptr_t, size C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(size)

	gofunc(slotval1)
}

func (this *QColorAxis) AutoRangeChanged(autoRange bool) {
	C.QColorAxis_autoRangeChanged(this.h, (C.bool)(autoRange))
}
func (this *QColorAxis) OnAutoRangeChanged(slot func(autoRange bool)) {
	C.QColorAxis_connect_autoRangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColorAxis_autoRangeChanged
func miqt_exec_callback_QColorAxis_autoRangeChanged(cb C.intptr_t, autoRange C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(autoRange bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(autoRange)

	gofunc(slotval1)
}

func QColorAxis_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColorAxis_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColorAxis_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColorAxis_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QColorAxis that was directly constructed.
func (this *QColorAxis) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QColorAxis_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QColorAxis that was directly constructed.
func (this *QColorAxis) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QColorAxis_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QColorAxis that was directly constructed.
func (this *QColorAxis) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QColorAxis_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QColorAxis that was directly constructed.
func (this *QColorAxis) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QColorAxis_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QColorAxis) callVirtualBase_Type() QAbstractAxis__AxisType {

	return (QAbstractAxis__AxisType)(C.QColorAxis_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QColorAxis) OnType(slot func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType) {
	ok := C.QColorAxis_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorAxis_type
func miqt_exec_callback_QColorAxis_type(self *C.QColorAxis, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColorAxis{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QColorAxis) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QColorAxis_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QColorAxis) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QColorAxis_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorAxis_event
func miqt_exec_callback_QColorAxis_event(self *C.QColorAxis, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QColorAxis{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QColorAxis) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QColorAxis_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QColorAxis) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QColorAxis_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorAxis_eventFilter
func miqt_exec_callback_QColorAxis_eventFilter(self *C.QColorAxis, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QColorAxis{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QColorAxis) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QColorAxis_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QColorAxis) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QColorAxis_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorAxis_timerEvent
func miqt_exec_callback_QColorAxis_timerEvent(self *C.QColorAxis, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QColorAxis{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QColorAxis) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QColorAxis_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QColorAxis) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QColorAxis_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorAxis_childEvent
func miqt_exec_callback_QColorAxis_childEvent(self *C.QColorAxis, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QColorAxis{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QColorAxis) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QColorAxis_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QColorAxis) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QColorAxis_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorAxis_customEvent
func miqt_exec_callback_QColorAxis_customEvent(self *C.QColorAxis, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QColorAxis{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QColorAxis) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QColorAxis_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QColorAxis) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QColorAxis_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorAxis_connectNotify
func miqt_exec_callback_QColorAxis_connectNotify(self *C.QColorAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QColorAxis{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QColorAxis) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QColorAxis_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QColorAxis) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QColorAxis_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColorAxis_disconnectNotify
func miqt_exec_callback_QColorAxis_disconnectNotify(self *C.QColorAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QColorAxis{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QColorAxis) Delete() {
	C.QColorAxis_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColorAxis) GoGC() {
	runtime.SetFinalizer(this, func(this *QColorAxis) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
