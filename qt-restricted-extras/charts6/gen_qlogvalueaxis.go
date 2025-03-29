package charts6

/*

#include "gen_qlogvalueaxis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLogValueAxis struct {
	h *C.QLogValueAxis
	*QAbstractAxis
}

func (this *QLogValueAxis) cPointer() *C.QLogValueAxis {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLogValueAxis) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLogValueAxis constructs the type using only CGO pointers.
func newQLogValueAxis(h *C.QLogValueAxis) *QLogValueAxis {
	if h == nil {
		return nil
	}
	var outptr_QAbstractAxis *C.QAbstractAxis = nil
	C.QLogValueAxis_virtbase(h, &outptr_QAbstractAxis)

	return &QLogValueAxis{h: h,
		QAbstractAxis: newQAbstractAxis(outptr_QAbstractAxis)}
}

// UnsafeNewQLogValueAxis constructs the type using only unsafe pointers.
func UnsafeNewQLogValueAxis(h unsafe.Pointer) *QLogValueAxis {
	return newQLogValueAxis((*C.QLogValueAxis)(h))
}

// NewQLogValueAxis constructs a new QLogValueAxis object.
func NewQLogValueAxis() *QLogValueAxis {

	return newQLogValueAxis(C.QLogValueAxis_new())
}

// NewQLogValueAxis2 constructs a new QLogValueAxis object.
func NewQLogValueAxis2(parent *qt6.QObject) *QLogValueAxis {

	return newQLogValueAxis(C.QLogValueAxis_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QLogValueAxis) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QLogValueAxis_metaObject(this.h)))
}

func (this *QLogValueAxis) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLogValueAxis_metacast(this.h, param1_Cstring))
}

func QLogValueAxis_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLogValueAxis_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLogValueAxis) Type() QAbstractAxis__AxisType {
	return (QAbstractAxis__AxisType)(C.QLogValueAxis_type(this.h))
}

func (this *QLogValueAxis) SetMin(min float64) {
	C.QLogValueAxis_setMin(this.h, (C.double)(min))
}

func (this *QLogValueAxis) Min() float64 {
	return (float64)(C.QLogValueAxis_min(this.h))
}

func (this *QLogValueAxis) SetMax(max float64) {
	C.QLogValueAxis_setMax(this.h, (C.double)(max))
}

func (this *QLogValueAxis) Max() float64 {
	return (float64)(C.QLogValueAxis_max(this.h))
}

func (this *QLogValueAxis) SetRange(min float64, max float64) {
	C.QLogValueAxis_setRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QLogValueAxis) SetLabelFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QLogValueAxis_setLabelFormat(this.h, format_ms)
}

func (this *QLogValueAxis) LabelFormat() string {
	var _ms C.struct_miqt_string = C.QLogValueAxis_labelFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLogValueAxis) SetBase(base float64) {
	C.QLogValueAxis_setBase(this.h, (C.double)(base))
}

func (this *QLogValueAxis) Base() float64 {
	return (float64)(C.QLogValueAxis_base(this.h))
}

func (this *QLogValueAxis) TickCount() int {
	return (int)(C.QLogValueAxis_tickCount(this.h))
}

func (this *QLogValueAxis) SetMinorTickCount(minorTickCount int) {
	C.QLogValueAxis_setMinorTickCount(this.h, (C.int)(minorTickCount))
}

func (this *QLogValueAxis) MinorTickCount() int {
	return (int)(C.QLogValueAxis_minorTickCount(this.h))
}

func (this *QLogValueAxis) MinChanged(min float64) {
	C.QLogValueAxis_minChanged(this.h, (C.double)(min))
}
func (this *QLogValueAxis) OnMinChanged(slot func(min float64)) {
	C.QLogValueAxis_connect_minChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLogValueAxis_minChanged
func miqt_exec_callback_QLogValueAxis_minChanged(cb C.intptr_t, min C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(min)

	gofunc(slotval1)
}

func (this *QLogValueAxis) MaxChanged(max float64) {
	C.QLogValueAxis_maxChanged(this.h, (C.double)(max))
}
func (this *QLogValueAxis) OnMaxChanged(slot func(max float64)) {
	C.QLogValueAxis_connect_maxChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLogValueAxis_maxChanged
func miqt_exec_callback_QLogValueAxis_maxChanged(cb C.intptr_t, max C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(max float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(max)

	gofunc(slotval1)
}

func (this *QLogValueAxis) RangeChanged(min float64, max float64) {
	C.QLogValueAxis_rangeChanged(this.h, (C.double)(min), (C.double)(max))
}
func (this *QLogValueAxis) OnRangeChanged(slot func(min float64, max float64)) {
	C.QLogValueAxis_connect_rangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLogValueAxis_rangeChanged
func miqt_exec_callback_QLogValueAxis_rangeChanged(cb C.intptr_t, min C.double, max C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min float64, max float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(min)

	slotval2 := (float64)(max)

	gofunc(slotval1, slotval2)
}

func (this *QLogValueAxis) LabelFormatChanged(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QLogValueAxis_labelFormatChanged(this.h, format_ms)
}
func (this *QLogValueAxis) OnLabelFormatChanged(slot func(format string)) {
	C.QLogValueAxis_connect_labelFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLogValueAxis_labelFormatChanged
func miqt_exec_callback_QLogValueAxis_labelFormatChanged(cb C.intptr_t, format C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var format_ms C.struct_miqt_string = format
	format_ret := C.GoStringN(format_ms.data, C.int(int64(format_ms.len)))
	C.free(unsafe.Pointer(format_ms.data))
	slotval1 := format_ret

	gofunc(slotval1)
}

func (this *QLogValueAxis) BaseChanged(base float64) {
	C.QLogValueAxis_baseChanged(this.h, (C.double)(base))
}
func (this *QLogValueAxis) OnBaseChanged(slot func(base float64)) {
	C.QLogValueAxis_connect_baseChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLogValueAxis_baseChanged
func miqt_exec_callback_QLogValueAxis_baseChanged(cb C.intptr_t, base C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(base float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(base)

	gofunc(slotval1)
}

func (this *QLogValueAxis) TickCountChanged(tickCount int) {
	C.QLogValueAxis_tickCountChanged(this.h, (C.int)(tickCount))
}
func (this *QLogValueAxis) OnTickCountChanged(slot func(tickCount int)) {
	C.QLogValueAxis_connect_tickCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLogValueAxis_tickCountChanged
func miqt_exec_callback_QLogValueAxis_tickCountChanged(cb C.intptr_t, tickCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(tickCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(tickCount)

	gofunc(slotval1)
}

func (this *QLogValueAxis) MinorTickCountChanged(minorTickCount int) {
	C.QLogValueAxis_minorTickCountChanged(this.h, (C.int)(minorTickCount))
}
func (this *QLogValueAxis) OnMinorTickCountChanged(slot func(minorTickCount int)) {
	C.QLogValueAxis_connect_minorTickCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLogValueAxis_minorTickCountChanged
func miqt_exec_callback_QLogValueAxis_minorTickCountChanged(cb C.intptr_t, minorTickCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(minorTickCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(minorTickCount)

	gofunc(slotval1)
}

func QLogValueAxis_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLogValueAxis_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLogValueAxis_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLogValueAxis_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QLogValueAxis that was directly constructed.
func (this *QLogValueAxis) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QLogValueAxis_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QLogValueAxis that was directly constructed.
func (this *QLogValueAxis) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLogValueAxis_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QLogValueAxis that was directly constructed.
func (this *QLogValueAxis) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLogValueAxis_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QLogValueAxis that was directly constructed.
func (this *QLogValueAxis) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QLogValueAxis_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QLogValueAxis) callVirtualBase_Type() QAbstractAxis__AxisType {

	return (QAbstractAxis__AxisType)(C.QLogValueAxis_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QLogValueAxis) OnType(slot func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType) {
	ok := C.QLogValueAxis_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLogValueAxis_type
func miqt_exec_callback_QLogValueAxis_type(self *C.QLogValueAxis, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLogValueAxis{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QLogValueAxis) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QLogValueAxis_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLogValueAxis) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QLogValueAxis_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLogValueAxis_event
func miqt_exec_callback_QLogValueAxis_event(self *C.QLogValueAxis, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLogValueAxis{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLogValueAxis) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QLogValueAxis_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLogValueAxis) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QLogValueAxis_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLogValueAxis_eventFilter
func miqt_exec_callback_QLogValueAxis_eventFilter(self *C.QLogValueAxis, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLogValueAxis{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLogValueAxis) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QLogValueAxis_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QLogValueAxis) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QLogValueAxis_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLogValueAxis_timerEvent
func miqt_exec_callback_QLogValueAxis_timerEvent(self *C.QLogValueAxis, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QLogValueAxis{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLogValueAxis) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QLogValueAxis_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QLogValueAxis) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QLogValueAxis_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLogValueAxis_childEvent
func miqt_exec_callback_QLogValueAxis_childEvent(self *C.QLogValueAxis, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QLogValueAxis{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLogValueAxis) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QLogValueAxis_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QLogValueAxis) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QLogValueAxis_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLogValueAxis_customEvent
func miqt_exec_callback_QLogValueAxis_customEvent(self *C.QLogValueAxis, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QLogValueAxis{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLogValueAxis) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QLogValueAxis_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLogValueAxis) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QLogValueAxis_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLogValueAxis_connectNotify
func miqt_exec_callback_QLogValueAxis_connectNotify(self *C.QLogValueAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLogValueAxis{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLogValueAxis) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QLogValueAxis_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLogValueAxis) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QLogValueAxis_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLogValueAxis_disconnectNotify
func miqt_exec_callback_QLogValueAxis_disconnectNotify(self *C.QLogValueAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLogValueAxis{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLogValueAxis) Delete() {
	C.QLogValueAxis_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLogValueAxis) GoGC() {
	runtime.SetFinalizer(this, func(this *QLogValueAxis) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
