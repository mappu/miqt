package charts6

/*

#include "gen_qvalueaxis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QValueAxis__TickType int

const (
	QValueAxis__TicksDynamic QValueAxis__TickType = 0
	QValueAxis__TicksFixed   QValueAxis__TickType = 1
)

type QValueAxis struct {
	h *C.QValueAxis
	*QAbstractAxis
}

func (this *QValueAxis) cPointer() *C.QValueAxis {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QValueAxis) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQValueAxis constructs the type using only CGO pointers.
func newQValueAxis(h *C.QValueAxis) *QValueAxis {
	if h == nil {
		return nil
	}
	var outptr_QAbstractAxis *C.QAbstractAxis = nil
	C.QValueAxis_virtbase(h, &outptr_QAbstractAxis)

	return &QValueAxis{h: h,
		QAbstractAxis: newQAbstractAxis(outptr_QAbstractAxis)}
}

// UnsafeNewQValueAxis constructs the type using only unsafe pointers.
func UnsafeNewQValueAxis(h unsafe.Pointer) *QValueAxis {
	return newQValueAxis((*C.QValueAxis)(h))
}

// NewQValueAxis constructs a new QValueAxis object.
func NewQValueAxis() *QValueAxis {

	return newQValueAxis(C.QValueAxis_new())
}

// NewQValueAxis2 constructs a new QValueAxis object.
func NewQValueAxis2(parent *qt6.QObject) *QValueAxis {

	return newQValueAxis(C.QValueAxis_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QValueAxis) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QValueAxis_metaObject(this.h)))
}

func (this *QValueAxis) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QValueAxis_metacast(this.h, param1_Cstring))
}

func QValueAxis_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QValueAxis_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QValueAxis) Type() QAbstractAxis__AxisType {
	return (QAbstractAxis__AxisType)(C.QValueAxis_type(this.h))
}

func (this *QValueAxis) SetMin(min float64) {
	C.QValueAxis_setMin(this.h, (C.double)(min))
}

func (this *QValueAxis) Min() float64 {
	return (float64)(C.QValueAxis_min(this.h))
}

func (this *QValueAxis) SetMax(max float64) {
	C.QValueAxis_setMax(this.h, (C.double)(max))
}

func (this *QValueAxis) Max() float64 {
	return (float64)(C.QValueAxis_max(this.h))
}

func (this *QValueAxis) SetRange(min float64, max float64) {
	C.QValueAxis_setRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QValueAxis) SetTickCount(count int) {
	C.QValueAxis_setTickCount(this.h, (C.int)(count))
}

func (this *QValueAxis) TickCount() int {
	return (int)(C.QValueAxis_tickCount(this.h))
}

func (this *QValueAxis) SetMinorTickCount(count int) {
	C.QValueAxis_setMinorTickCount(this.h, (C.int)(count))
}

func (this *QValueAxis) MinorTickCount() int {
	return (int)(C.QValueAxis_minorTickCount(this.h))
}

func (this *QValueAxis) SetTickAnchor(anchor float64) {
	C.QValueAxis_setTickAnchor(this.h, (C.double)(anchor))
}

func (this *QValueAxis) TickAnchor() float64 {
	return (float64)(C.QValueAxis_tickAnchor(this.h))
}

func (this *QValueAxis) SetTickInterval(insterval float64) {
	C.QValueAxis_setTickInterval(this.h, (C.double)(insterval))
}

func (this *QValueAxis) TickInterval() float64 {
	return (float64)(C.QValueAxis_tickInterval(this.h))
}

func (this *QValueAxis) SetTickType(typeVal QValueAxis__TickType) {
	C.QValueAxis_setTickType(this.h, (C.int)(typeVal))
}

func (this *QValueAxis) TickType() QValueAxis__TickType {
	return (QValueAxis__TickType)(C.QValueAxis_tickType(this.h))
}

func (this *QValueAxis) SetLabelFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QValueAxis_setLabelFormat(this.h, format_ms)
}

func (this *QValueAxis) LabelFormat() string {
	var _ms C.struct_miqt_string = C.QValueAxis_labelFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QValueAxis) ApplyNiceNumbers() {
	C.QValueAxis_applyNiceNumbers(this.h)
}

func (this *QValueAxis) MinChanged(min float64) {
	C.QValueAxis_minChanged(this.h, (C.double)(min))
}
func (this *QValueAxis) OnMinChanged(slot func(min float64)) {
	C.QValueAxis_connect_minChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValueAxis_minChanged
func miqt_exec_callback_QValueAxis_minChanged(cb C.intptr_t, min C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(min)

	gofunc(slotval1)
}

func (this *QValueAxis) MaxChanged(max float64) {
	C.QValueAxis_maxChanged(this.h, (C.double)(max))
}
func (this *QValueAxis) OnMaxChanged(slot func(max float64)) {
	C.QValueAxis_connect_maxChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValueAxis_maxChanged
func miqt_exec_callback_QValueAxis_maxChanged(cb C.intptr_t, max C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(max float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(max)

	gofunc(slotval1)
}

func (this *QValueAxis) RangeChanged(min float64, max float64) {
	C.QValueAxis_rangeChanged(this.h, (C.double)(min), (C.double)(max))
}
func (this *QValueAxis) OnRangeChanged(slot func(min float64, max float64)) {
	C.QValueAxis_connect_rangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValueAxis_rangeChanged
func miqt_exec_callback_QValueAxis_rangeChanged(cb C.intptr_t, min C.double, max C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min float64, max float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(min)

	slotval2 := (float64)(max)

	gofunc(slotval1, slotval2)
}

func (this *QValueAxis) TickCountChanged(tickCount int) {
	C.QValueAxis_tickCountChanged(this.h, (C.int)(tickCount))
}
func (this *QValueAxis) OnTickCountChanged(slot func(tickCount int)) {
	C.QValueAxis_connect_tickCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValueAxis_tickCountChanged
func miqt_exec_callback_QValueAxis_tickCountChanged(cb C.intptr_t, tickCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(tickCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(tickCount)

	gofunc(slotval1)
}

func (this *QValueAxis) MinorTickCountChanged(tickCount int) {
	C.QValueAxis_minorTickCountChanged(this.h, (C.int)(tickCount))
}
func (this *QValueAxis) OnMinorTickCountChanged(slot func(tickCount int)) {
	C.QValueAxis_connect_minorTickCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValueAxis_minorTickCountChanged
func miqt_exec_callback_QValueAxis_minorTickCountChanged(cb C.intptr_t, tickCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(tickCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(tickCount)

	gofunc(slotval1)
}

func (this *QValueAxis) LabelFormatChanged(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QValueAxis_labelFormatChanged(this.h, format_ms)
}
func (this *QValueAxis) OnLabelFormatChanged(slot func(format string)) {
	C.QValueAxis_connect_labelFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValueAxis_labelFormatChanged
func miqt_exec_callback_QValueAxis_labelFormatChanged(cb C.intptr_t, format C.struct_miqt_string) {
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

func (this *QValueAxis) TickIntervalChanged(interval float64) {
	C.QValueAxis_tickIntervalChanged(this.h, (C.double)(interval))
}
func (this *QValueAxis) OnTickIntervalChanged(slot func(interval float64)) {
	C.QValueAxis_connect_tickIntervalChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValueAxis_tickIntervalChanged
func miqt_exec_callback_QValueAxis_tickIntervalChanged(cb C.intptr_t, interval C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(interval float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(interval)

	gofunc(slotval1)
}

func (this *QValueAxis) TickAnchorChanged(anchor float64) {
	C.QValueAxis_tickAnchorChanged(this.h, (C.double)(anchor))
}
func (this *QValueAxis) OnTickAnchorChanged(slot func(anchor float64)) {
	C.QValueAxis_connect_tickAnchorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValueAxis_tickAnchorChanged
func miqt_exec_callback_QValueAxis_tickAnchorChanged(cb C.intptr_t, anchor C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(anchor float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(anchor)

	gofunc(slotval1)
}

func (this *QValueAxis) TickTypeChanged(typeVal QValueAxis__TickType) {
	C.QValueAxis_tickTypeChanged(this.h, (C.int)(typeVal))
}
func (this *QValueAxis) OnTickTypeChanged(slot func(typeVal QValueAxis__TickType)) {
	C.QValueAxis_connect_tickTypeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValueAxis_tickTypeChanged
func miqt_exec_callback_QValueAxis_tickTypeChanged(cb C.intptr_t, typeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(typeVal QValueAxis__TickType))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QValueAxis__TickType)(typeVal)

	gofunc(slotval1)
}

func QValueAxis_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QValueAxis_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QValueAxis_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QValueAxis_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QValueAxis that was directly constructed.
func (this *QValueAxis) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QValueAxis_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QValueAxis that was directly constructed.
func (this *QValueAxis) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QValueAxis_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QValueAxis that was directly constructed.
func (this *QValueAxis) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QValueAxis_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QValueAxis that was directly constructed.
func (this *QValueAxis) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QValueAxis_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QValueAxis) callVirtualBase_Type() QAbstractAxis__AxisType {

	return (QAbstractAxis__AxisType)(C.QValueAxis_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QValueAxis) OnType(slot func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType) {
	ok := C.QValueAxis_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValueAxis_type
func miqt_exec_callback_QValueAxis_type(self *C.QValueAxis, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QValueAxis{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QValueAxis) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QValueAxis_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QValueAxis) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QValueAxis_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValueAxis_event
func miqt_exec_callback_QValueAxis_event(self *C.QValueAxis, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QValueAxis{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QValueAxis) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QValueAxis_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QValueAxis) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QValueAxis_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValueAxis_eventFilter
func miqt_exec_callback_QValueAxis_eventFilter(self *C.QValueAxis, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QValueAxis{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QValueAxis) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QValueAxis_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QValueAxis) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QValueAxis_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValueAxis_timerEvent
func miqt_exec_callback_QValueAxis_timerEvent(self *C.QValueAxis, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QValueAxis{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QValueAxis) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QValueAxis_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QValueAxis) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QValueAxis_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValueAxis_childEvent
func miqt_exec_callback_QValueAxis_childEvent(self *C.QValueAxis, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QValueAxis{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QValueAxis) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QValueAxis_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QValueAxis) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QValueAxis_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValueAxis_customEvent
func miqt_exec_callback_QValueAxis_customEvent(self *C.QValueAxis, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QValueAxis{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QValueAxis) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QValueAxis_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QValueAxis) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QValueAxis_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValueAxis_connectNotify
func miqt_exec_callback_QValueAxis_connectNotify(self *C.QValueAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QValueAxis{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QValueAxis) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QValueAxis_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QValueAxis) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QValueAxis_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValueAxis_disconnectNotify
func miqt_exec_callback_QValueAxis_disconnectNotify(self *C.QValueAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QValueAxis{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QValueAxis) Delete() {
	C.QValueAxis_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QValueAxis) GoGC() {
	runtime.SetFinalizer(this, func(this *QValueAxis) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
