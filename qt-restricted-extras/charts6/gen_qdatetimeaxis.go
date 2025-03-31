package charts6

/*

#include "gen_qdatetimeaxis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDateTimeAxis struct {
	h *C.QDateTimeAxis
	*QAbstractAxis
}

func (this *QDateTimeAxis) cPointer() *C.QDateTimeAxis {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDateTimeAxis) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDateTimeAxis constructs the type using only CGO pointers.
func newQDateTimeAxis(h *C.QDateTimeAxis) *QDateTimeAxis {
	if h == nil {
		return nil
	}
	var outptr_QAbstractAxis *C.QAbstractAxis = nil
	C.QDateTimeAxis_virtbase(h, &outptr_QAbstractAxis)

	return &QDateTimeAxis{h: h,
		QAbstractAxis: newQAbstractAxis(outptr_QAbstractAxis)}
}

// UnsafeNewQDateTimeAxis constructs the type using only unsafe pointers.
func UnsafeNewQDateTimeAxis(h unsafe.Pointer) *QDateTimeAxis {
	return newQDateTimeAxis((*C.QDateTimeAxis)(h))
}

// NewQDateTimeAxis constructs a new QDateTimeAxis object.
func NewQDateTimeAxis() *QDateTimeAxis {

	return newQDateTimeAxis(C.QDateTimeAxis_new())
}

// NewQDateTimeAxis2 constructs a new QDateTimeAxis object.
func NewQDateTimeAxis2(parent *qt6.QObject) *QDateTimeAxis {

	return newQDateTimeAxis(C.QDateTimeAxis_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDateTimeAxis) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDateTimeAxis_metaObject(this.h)))
}

func (this *QDateTimeAxis) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDateTimeAxis_metacast(this.h, param1_Cstring))
}

func QDateTimeAxis_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDateTimeAxis_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTimeAxis) Type() QAbstractAxis__AxisType {
	return (QAbstractAxis__AxisType)(C.QDateTimeAxis_type(this.h))
}

func (this *QDateTimeAxis) SetMin(min qt6.QDateTime) {
	C.QDateTimeAxis_setMin(this.h, (*C.QDateTime)(min.UnsafePointer()))
}

func (this *QDateTimeAxis) Min() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QDateTimeAxis_min(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeAxis) SetMax(max qt6.QDateTime) {
	C.QDateTimeAxis_setMax(this.h, (*C.QDateTime)(max.UnsafePointer()))
}

func (this *QDateTimeAxis) Max() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QDateTimeAxis_max(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeAxis) SetRange(min qt6.QDateTime, max qt6.QDateTime) {
	C.QDateTimeAxis_setRange(this.h, (*C.QDateTime)(min.UnsafePointer()), (*C.QDateTime)(max.UnsafePointer()))
}

func (this *QDateTimeAxis) SetFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QDateTimeAxis_setFormat(this.h, format_ms)
}

func (this *QDateTimeAxis) Format() string {
	var _ms C.struct_miqt_string = C.QDateTimeAxis_format(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTimeAxis) SetTickCount(count int) {
	C.QDateTimeAxis_setTickCount(this.h, (C.int)(count))
}

func (this *QDateTimeAxis) TickCount() int {
	return (int)(C.QDateTimeAxis_tickCount(this.h))
}

func (this *QDateTimeAxis) MinChanged(min qt6.QDateTime) {
	C.QDateTimeAxis_minChanged(this.h, (*C.QDateTime)(min.UnsafePointer()))
}
func (this *QDateTimeAxis) OnMinChanged(slot func(min qt6.QDateTime)) {
	C.QDateTimeAxis_connect_minChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeAxis_minChanged
func miqt_exec_callback_QDateTimeAxis_minChanged(cb C.intptr_t, min *C.QDateTime) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min qt6.QDateTime))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	min_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(min))
	min_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *min_goptr

	gofunc(slotval1)
}

func (this *QDateTimeAxis) MaxChanged(max qt6.QDateTime) {
	C.QDateTimeAxis_maxChanged(this.h, (*C.QDateTime)(max.UnsafePointer()))
}
func (this *QDateTimeAxis) OnMaxChanged(slot func(max qt6.QDateTime)) {
	C.QDateTimeAxis_connect_maxChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeAxis_maxChanged
func miqt_exec_callback_QDateTimeAxis_maxChanged(cb C.intptr_t, max *C.QDateTime) {
	gofunc, ok := cgo.Handle(cb).Value().(func(max qt6.QDateTime))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	max_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(max))
	max_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *max_goptr

	gofunc(slotval1)
}

func (this *QDateTimeAxis) RangeChanged(min qt6.QDateTime, max qt6.QDateTime) {
	C.QDateTimeAxis_rangeChanged(this.h, (*C.QDateTime)(min.UnsafePointer()), (*C.QDateTime)(max.UnsafePointer()))
}
func (this *QDateTimeAxis) OnRangeChanged(slot func(min qt6.QDateTime, max qt6.QDateTime)) {
	C.QDateTimeAxis_connect_rangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeAxis_rangeChanged
func miqt_exec_callback_QDateTimeAxis_rangeChanged(cb C.intptr_t, min *C.QDateTime, max *C.QDateTime) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min qt6.QDateTime, max qt6.QDateTime))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	min_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(min))
	min_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *min_goptr

	max_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(max))
	max_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *max_goptr

	gofunc(slotval1, slotval2)
}

func (this *QDateTimeAxis) FormatChanged(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QDateTimeAxis_formatChanged(this.h, format_ms)
}
func (this *QDateTimeAxis) OnFormatChanged(slot func(format string)) {
	C.QDateTimeAxis_connect_formatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeAxis_formatChanged
func miqt_exec_callback_QDateTimeAxis_formatChanged(cb C.intptr_t, format C.struct_miqt_string) {
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

func (this *QDateTimeAxis) TickCountChanged(tick int) {
	C.QDateTimeAxis_tickCountChanged(this.h, (C.int)(tick))
}
func (this *QDateTimeAxis) OnTickCountChanged(slot func(tick int)) {
	C.QDateTimeAxis_connect_tickCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeAxis_tickCountChanged
func miqt_exec_callback_QDateTimeAxis_tickCountChanged(cb C.intptr_t, tick C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(tick int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(tick)

	gofunc(slotval1)
}

func QDateTimeAxis_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateTimeAxis_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDateTimeAxis_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateTimeAxis_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDateTimeAxis that was directly constructed.
func (this *QDateTimeAxis) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDateTimeAxis_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDateTimeAxis that was directly constructed.
func (this *QDateTimeAxis) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDateTimeAxis_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDateTimeAxis that was directly constructed.
func (this *QDateTimeAxis) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDateTimeAxis_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDateTimeAxis that was directly constructed.
func (this *QDateTimeAxis) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDateTimeAxis_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDateTimeAxis) callVirtualBase_Type() QAbstractAxis__AxisType {

	return (QAbstractAxis__AxisType)(C.QDateTimeAxis_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QDateTimeAxis) OnType(slot func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType) {
	ok := C.QDateTimeAxis_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeAxis_type
func miqt_exec_callback_QDateTimeAxis_type(self *C.QDateTimeAxis, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateTimeAxis{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QDateTimeAxis) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDateTimeAxis_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDateTimeAxis) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDateTimeAxis_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeAxis_event
func miqt_exec_callback_QDateTimeAxis_event(self *C.QDateTimeAxis, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDateTimeAxis{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDateTimeAxis) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDateTimeAxis_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDateTimeAxis) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDateTimeAxis_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeAxis_eventFilter
func miqt_exec_callback_QDateTimeAxis_eventFilter(self *C.QDateTimeAxis, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDateTimeAxis{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDateTimeAxis) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDateTimeAxis_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDateTimeAxis) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDateTimeAxis_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeAxis_timerEvent
func miqt_exec_callback_QDateTimeAxis_timerEvent(self *C.QDateTimeAxis, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDateTimeAxis{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDateTimeAxis) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDateTimeAxis_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDateTimeAxis) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDateTimeAxis_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeAxis_childEvent
func miqt_exec_callback_QDateTimeAxis_childEvent(self *C.QDateTimeAxis, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDateTimeAxis{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDateTimeAxis) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDateTimeAxis_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDateTimeAxis) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDateTimeAxis_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeAxis_customEvent
func miqt_exec_callback_QDateTimeAxis_customEvent(self *C.QDateTimeAxis, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDateTimeAxis{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDateTimeAxis) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDateTimeAxis_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDateTimeAxis) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDateTimeAxis_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeAxis_connectNotify
func miqt_exec_callback_QDateTimeAxis_connectNotify(self *C.QDateTimeAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDateTimeAxis{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDateTimeAxis) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDateTimeAxis_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDateTimeAxis) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDateTimeAxis_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeAxis_disconnectNotify
func miqt_exec_callback_QDateTimeAxis_disconnectNotify(self *C.QDateTimeAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDateTimeAxis{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDateTimeAxis) Delete() {
	C.QDateTimeAxis_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDateTimeAxis) GoGC() {
	runtime.SetFinalizer(this, func(this *QDateTimeAxis) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
