package charts6

/*

#include "gen_qvcandlestickmodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVCandlestickModelMapper struct {
	h *C.QVCandlestickModelMapper
	*QCandlestickModelMapper
}

func (this *QVCandlestickModelMapper) cPointer() *C.QVCandlestickModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVCandlestickModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVCandlestickModelMapper constructs the type using only CGO pointers.
func newQVCandlestickModelMapper(h *C.QVCandlestickModelMapper) *QVCandlestickModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QCandlestickModelMapper *C.QCandlestickModelMapper = nil
	C.QVCandlestickModelMapper_virtbase(h, &outptr_QCandlestickModelMapper)

	return &QVCandlestickModelMapper{h: h,
		QCandlestickModelMapper: newQCandlestickModelMapper(outptr_QCandlestickModelMapper)}
}

// UnsafeNewQVCandlestickModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQVCandlestickModelMapper(h unsafe.Pointer) *QVCandlestickModelMapper {
	return newQVCandlestickModelMapper((*C.QVCandlestickModelMapper)(h))
}

// NewQVCandlestickModelMapper constructs a new QVCandlestickModelMapper object.
func NewQVCandlestickModelMapper() *QVCandlestickModelMapper {

	return newQVCandlestickModelMapper(C.QVCandlestickModelMapper_new())
}

// NewQVCandlestickModelMapper2 constructs a new QVCandlestickModelMapper object.
func NewQVCandlestickModelMapper2(parent *qt6.QObject) *QVCandlestickModelMapper {

	return newQVCandlestickModelMapper(C.QVCandlestickModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QVCandlestickModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QVCandlestickModelMapper_metaObject(this.h)))
}

func (this *QVCandlestickModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVCandlestickModelMapper_metacast(this.h, param1_Cstring))
}

func QVCandlestickModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVCandlestickModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVCandlestickModelMapper) Orientation() qt6.Orientation {
	return (qt6.Orientation)(C.QVCandlestickModelMapper_orientation(this.h))
}

func (this *QVCandlestickModelMapper) SetTimestampRow(timestampRow int) {
	C.QVCandlestickModelMapper_setTimestampRow(this.h, (C.int)(timestampRow))
}

func (this *QVCandlestickModelMapper) TimestampRow() int {
	return (int)(C.QVCandlestickModelMapper_timestampRow(this.h))
}

func (this *QVCandlestickModelMapper) SetOpenRow(openRow int) {
	C.QVCandlestickModelMapper_setOpenRow(this.h, (C.int)(openRow))
}

func (this *QVCandlestickModelMapper) OpenRow() int {
	return (int)(C.QVCandlestickModelMapper_openRow(this.h))
}

func (this *QVCandlestickModelMapper) SetHighRow(highRow int) {
	C.QVCandlestickModelMapper_setHighRow(this.h, (C.int)(highRow))
}

func (this *QVCandlestickModelMapper) HighRow() int {
	return (int)(C.QVCandlestickModelMapper_highRow(this.h))
}

func (this *QVCandlestickModelMapper) SetLowRow(lowRow int) {
	C.QVCandlestickModelMapper_setLowRow(this.h, (C.int)(lowRow))
}

func (this *QVCandlestickModelMapper) LowRow() int {
	return (int)(C.QVCandlestickModelMapper_lowRow(this.h))
}

func (this *QVCandlestickModelMapper) SetCloseRow(closeRow int) {
	C.QVCandlestickModelMapper_setCloseRow(this.h, (C.int)(closeRow))
}

func (this *QVCandlestickModelMapper) CloseRow() int {
	return (int)(C.QVCandlestickModelMapper_closeRow(this.h))
}

func (this *QVCandlestickModelMapper) SetFirstSetColumn(firstSetColumn int) {
	C.QVCandlestickModelMapper_setFirstSetColumn(this.h, (C.int)(firstSetColumn))
}

func (this *QVCandlestickModelMapper) FirstSetColumn() int {
	return (int)(C.QVCandlestickModelMapper_firstSetColumn(this.h))
}

func (this *QVCandlestickModelMapper) SetLastSetColumn(lastSetColumn int) {
	C.QVCandlestickModelMapper_setLastSetColumn(this.h, (C.int)(lastSetColumn))
}

func (this *QVCandlestickModelMapper) LastSetColumn() int {
	return (int)(C.QVCandlestickModelMapper_lastSetColumn(this.h))
}

func (this *QVCandlestickModelMapper) TimestampRowChanged() {
	C.QVCandlestickModelMapper_timestampRowChanged(this.h)
}
func (this *QVCandlestickModelMapper) OnTimestampRowChanged(slot func()) {
	C.QVCandlestickModelMapper_connect_timestampRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVCandlestickModelMapper_timestampRowChanged
func miqt_exec_callback_QVCandlestickModelMapper_timestampRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVCandlestickModelMapper) OpenRowChanged() {
	C.QVCandlestickModelMapper_openRowChanged(this.h)
}
func (this *QVCandlestickModelMapper) OnOpenRowChanged(slot func()) {
	C.QVCandlestickModelMapper_connect_openRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVCandlestickModelMapper_openRowChanged
func miqt_exec_callback_QVCandlestickModelMapper_openRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVCandlestickModelMapper) HighRowChanged() {
	C.QVCandlestickModelMapper_highRowChanged(this.h)
}
func (this *QVCandlestickModelMapper) OnHighRowChanged(slot func()) {
	C.QVCandlestickModelMapper_connect_highRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVCandlestickModelMapper_highRowChanged
func miqt_exec_callback_QVCandlestickModelMapper_highRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVCandlestickModelMapper) LowRowChanged() {
	C.QVCandlestickModelMapper_lowRowChanged(this.h)
}
func (this *QVCandlestickModelMapper) OnLowRowChanged(slot func()) {
	C.QVCandlestickModelMapper_connect_lowRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVCandlestickModelMapper_lowRowChanged
func miqt_exec_callback_QVCandlestickModelMapper_lowRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVCandlestickModelMapper) CloseRowChanged() {
	C.QVCandlestickModelMapper_closeRowChanged(this.h)
}
func (this *QVCandlestickModelMapper) OnCloseRowChanged(slot func()) {
	C.QVCandlestickModelMapper_connect_closeRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVCandlestickModelMapper_closeRowChanged
func miqt_exec_callback_QVCandlestickModelMapper_closeRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVCandlestickModelMapper) FirstSetColumnChanged() {
	C.QVCandlestickModelMapper_firstSetColumnChanged(this.h)
}
func (this *QVCandlestickModelMapper) OnFirstSetColumnChanged(slot func()) {
	C.QVCandlestickModelMapper_connect_firstSetColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVCandlestickModelMapper_firstSetColumnChanged
func miqt_exec_callback_QVCandlestickModelMapper_firstSetColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVCandlestickModelMapper) LastSetColumnChanged() {
	C.QVCandlestickModelMapper_lastSetColumnChanged(this.h)
}
func (this *QVCandlestickModelMapper) OnLastSetColumnChanged(slot func()) {
	C.QVCandlestickModelMapper_connect_lastSetColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVCandlestickModelMapper_lastSetColumnChanged
func miqt_exec_callback_QVCandlestickModelMapper_lastSetColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QVCandlestickModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVCandlestickModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVCandlestickModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVCandlestickModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetTimestamp can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) SetTimestamp(timestamp int) {

	var _dynamic_cast_ok C.bool = false
	C.QVCandlestickModelMapper_protectedbase_setTimestamp(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(timestamp))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Timestamp can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) Timestamp() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVCandlestickModelMapper_protectedbase_timestamp(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOpen can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) SetOpen(open int) {

	var _dynamic_cast_ok C.bool = false
	C.QVCandlestickModelMapper_protectedbase_setOpen(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(open))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Open can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) Open() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVCandlestickModelMapper_protectedbase_open(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetHigh can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) SetHigh(high int) {

	var _dynamic_cast_ok C.bool = false
	C.QVCandlestickModelMapper_protectedbase_setHigh(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(high))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// High can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) High() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVCandlestickModelMapper_protectedbase_high(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLow can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) SetLow(low int) {

	var _dynamic_cast_ok C.bool = false
	C.QVCandlestickModelMapper_protectedbase_setLow(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(low))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Low can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) Low() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVCandlestickModelMapper_protectedbase_low(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetClose can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) SetClose(close int) {

	var _dynamic_cast_ok C.bool = false
	C.QVCandlestickModelMapper_protectedbase_setClose(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(close))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Close can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) Close() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVCandlestickModelMapper_protectedbase_close(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirstSetSection can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) SetFirstSetSection(firstSetSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QVCandlestickModelMapper_protectedbase_setFirstSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(firstSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FirstSetSection can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) FirstSetSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVCandlestickModelMapper_protectedbase_firstSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLastSetSection can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) SetLastSetSection(lastSetSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QVCandlestickModelMapper_protectedbase_setLastSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(lastSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LastSetSection can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) LastSetSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVCandlestickModelMapper_protectedbase_lastSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QVCandlestickModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVCandlestickModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVCandlestickModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QVCandlestickModelMapper that was directly constructed.
func (this *QVCandlestickModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QVCandlestickModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QVCandlestickModelMapper) callVirtualBase_Orientation() qt6.Orientation {

	return (qt6.Orientation)(C.QVCandlestickModelMapper_virtualbase_orientation(unsafe.Pointer(this.h)))

}
func (this *QVCandlestickModelMapper) OnOrientation(slot func(super func() qt6.Orientation) qt6.Orientation) {
	ok := C.QVCandlestickModelMapper_override_virtual_orientation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVCandlestickModelMapper_orientation
func miqt_exec_callback_QVCandlestickModelMapper_orientation(self *C.QVCandlestickModelMapper, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt6.Orientation) qt6.Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVCandlestickModelMapper{h: self}).callVirtualBase_Orientation)

	return (C.int)(virtualReturn)

}

func (this *QVCandlestickModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QVCandlestickModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVCandlestickModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QVCandlestickModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVCandlestickModelMapper_event
func miqt_exec_callback_QVCandlestickModelMapper_event(self *C.QVCandlestickModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVCandlestickModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QVCandlestickModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QVCandlestickModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVCandlestickModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QVCandlestickModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVCandlestickModelMapper_eventFilter
func miqt_exec_callback_QVCandlestickModelMapper_eventFilter(self *C.QVCandlestickModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVCandlestickModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QVCandlestickModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QVCandlestickModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QVCandlestickModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QVCandlestickModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVCandlestickModelMapper_timerEvent
func miqt_exec_callback_QVCandlestickModelMapper_timerEvent(self *C.QVCandlestickModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QVCandlestickModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QVCandlestickModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QVCandlestickModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QVCandlestickModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QVCandlestickModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVCandlestickModelMapper_childEvent
func miqt_exec_callback_QVCandlestickModelMapper_childEvent(self *C.QVCandlestickModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QVCandlestickModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QVCandlestickModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QVCandlestickModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QVCandlestickModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QVCandlestickModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVCandlestickModelMapper_customEvent
func miqt_exec_callback_QVCandlestickModelMapper_customEvent(self *C.QVCandlestickModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QVCandlestickModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QVCandlestickModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QVCandlestickModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVCandlestickModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVCandlestickModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVCandlestickModelMapper_connectNotify
func miqt_exec_callback_QVCandlestickModelMapper_connectNotify(self *C.QVCandlestickModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVCandlestickModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QVCandlestickModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QVCandlestickModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVCandlestickModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVCandlestickModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVCandlestickModelMapper_disconnectNotify
func miqt_exec_callback_QVCandlestickModelMapper_disconnectNotify(self *C.QVCandlestickModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVCandlestickModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QVCandlestickModelMapper) Delete() {
	C.QVCandlestickModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVCandlestickModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QVCandlestickModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
