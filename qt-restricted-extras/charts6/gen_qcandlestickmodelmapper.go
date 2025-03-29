package charts6

/*

#include "gen_qcandlestickmodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCandlestickModelMapper struct {
	h *C.QCandlestickModelMapper
	*qt6.QObject
}

func (this *QCandlestickModelMapper) cPointer() *C.QCandlestickModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCandlestickModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCandlestickModelMapper constructs the type using only CGO pointers.
func newQCandlestickModelMapper(h *C.QCandlestickModelMapper) *QCandlestickModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QCandlestickModelMapper_virtbase(h, &outptr_QObject)

	return &QCandlestickModelMapper{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQCandlestickModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQCandlestickModelMapper(h unsafe.Pointer) *QCandlestickModelMapper {
	return newQCandlestickModelMapper((*C.QCandlestickModelMapper)(h))
}

// NewQCandlestickModelMapper constructs a new QCandlestickModelMapper object.
func NewQCandlestickModelMapper() *QCandlestickModelMapper {

	return newQCandlestickModelMapper(C.QCandlestickModelMapper_new())
}

// NewQCandlestickModelMapper2 constructs a new QCandlestickModelMapper object.
func NewQCandlestickModelMapper2(parent *qt6.QObject) *QCandlestickModelMapper {

	return newQCandlestickModelMapper(C.QCandlestickModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QCandlestickModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QCandlestickModelMapper_metaObject(this.h)))
}

func (this *QCandlestickModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCandlestickModelMapper_metacast(this.h, param1_Cstring))
}

func QCandlestickModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCandlestickModelMapper) SetModel(model *qt6.QAbstractItemModel) {
	C.QCandlestickModelMapper_setModel(this.h, (*C.QAbstractItemModel)(model.UnsafePointer()))
}

func (this *QCandlestickModelMapper) Model() *qt6.QAbstractItemModel {
	return qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QCandlestickModelMapper_model(this.h)))
}

func (this *QCandlestickModelMapper) SetSeries(series *QCandlestickSeries) {
	C.QCandlestickModelMapper_setSeries(this.h, series.cPointer())
}

func (this *QCandlestickModelMapper) Series() *QCandlestickSeries {
	return newQCandlestickSeries(C.QCandlestickModelMapper_series(this.h))
}

func (this *QCandlestickModelMapper) Orientation() qt6.Orientation {
	return (qt6.Orientation)(C.QCandlestickModelMapper_orientation(this.h))
}

func (this *QCandlestickModelMapper) ModelReplaced() {
	C.QCandlestickModelMapper_modelReplaced(this.h)
}
func (this *QCandlestickModelMapper) OnModelReplaced(slot func()) {
	C.QCandlestickModelMapper_connect_modelReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickModelMapper_modelReplaced
func miqt_exec_callback_QCandlestickModelMapper_modelReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickModelMapper) SeriesReplaced() {
	C.QCandlestickModelMapper_seriesReplaced(this.h)
}
func (this *QCandlestickModelMapper) OnSeriesReplaced(slot func()) {
	C.QCandlestickModelMapper_connect_seriesReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickModelMapper_seriesReplaced
func miqt_exec_callback_QCandlestickModelMapper_seriesReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QCandlestickModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCandlestickModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetTimestamp can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) SetTimestamp(timestamp int) {

	var _dynamic_cast_ok C.bool = false
	C.QCandlestickModelMapper_protectedbase_setTimestamp(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(timestamp))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Timestamp can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) Timestamp() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickModelMapper_protectedbase_timestamp(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOpen can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) SetOpen(open int) {

	var _dynamic_cast_ok C.bool = false
	C.QCandlestickModelMapper_protectedbase_setOpen(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(open))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Open can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) Open() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickModelMapper_protectedbase_open(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetHigh can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) SetHigh(high int) {

	var _dynamic_cast_ok C.bool = false
	C.QCandlestickModelMapper_protectedbase_setHigh(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(high))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// High can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) High() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickModelMapper_protectedbase_high(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLow can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) SetLow(low int) {

	var _dynamic_cast_ok C.bool = false
	C.QCandlestickModelMapper_protectedbase_setLow(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(low))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Low can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) Low() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickModelMapper_protectedbase_low(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetClose can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) SetClose(close int) {

	var _dynamic_cast_ok C.bool = false
	C.QCandlestickModelMapper_protectedbase_setClose(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(close))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Close can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) Close() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickModelMapper_protectedbase_close(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirstSetSection can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) SetFirstSetSection(firstSetSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QCandlestickModelMapper_protectedbase_setFirstSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(firstSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FirstSetSection can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) FirstSetSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickModelMapper_protectedbase_firstSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLastSetSection can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) SetLastSetSection(lastSetSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QCandlestickModelMapper_protectedbase_setLastSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(lastSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LastSetSection can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) LastSetSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickModelMapper_protectedbase_lastSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QCandlestickModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QCandlestickModelMapper that was directly constructed.
func (this *QCandlestickModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCandlestickModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QCandlestickModelMapper) OnOrientation(slot func() qt6.Orientation) {
	ok := C.QCandlestickModelMapper_override_virtual_orientation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickModelMapper_orientation
func miqt_exec_callback_QCandlestickModelMapper_orientation(self *C.QCandlestickModelMapper, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() qt6.Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}

func (this *QCandlestickModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QCandlestickModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCandlestickModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QCandlestickModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickModelMapper_event
func miqt_exec_callback_QCandlestickModelMapper_event(self *C.QCandlestickModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCandlestickModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCandlestickModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QCandlestickModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCandlestickModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QCandlestickModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickModelMapper_eventFilter
func miqt_exec_callback_QCandlestickModelMapper_eventFilter(self *C.QCandlestickModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCandlestickModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCandlestickModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QCandlestickModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCandlestickModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QCandlestickModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickModelMapper_timerEvent
func miqt_exec_callback_QCandlestickModelMapper_timerEvent(self *C.QCandlestickModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCandlestickModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QCandlestickModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCandlestickModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QCandlestickModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickModelMapper_childEvent
func miqt_exec_callback_QCandlestickModelMapper_childEvent(self *C.QCandlestickModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCandlestickModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QCandlestickModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCandlestickModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QCandlestickModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickModelMapper_customEvent
func miqt_exec_callback_QCandlestickModelMapper_customEvent(self *C.QCandlestickModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCandlestickModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QCandlestickModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCandlestickModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCandlestickModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickModelMapper_connectNotify
func miqt_exec_callback_QCandlestickModelMapper_connectNotify(self *C.QCandlestickModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCandlestickModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCandlestickModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QCandlestickModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCandlestickModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCandlestickModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickModelMapper_disconnectNotify
func miqt_exec_callback_QCandlestickModelMapper_disconnectNotify(self *C.QCandlestickModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCandlestickModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCandlestickModelMapper) Delete() {
	C.QCandlestickModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCandlestickModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QCandlestickModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
