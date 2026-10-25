package charts6

/*

#include "gen_qhcandlestickmodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHCandlestickModelMapper struct {
	h  *C.QHCandlestickModelMapper
	gc *[1]unsafe.Pointer
	*QCandlestickModelMapper
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QHCandlestickModelMapper) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QCandlestickModelMapper.miqtSetGC(gc)
}

func (this *QHCandlestickModelMapper) cPointer() *C.QHCandlestickModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHCandlestickModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHCandlestickModelMapper constructs the type using only CGO pointers.
func newQHCandlestickModelMapper(h *C.QHCandlestickModelMapper) *QHCandlestickModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QCandlestickModelMapper *C.QCandlestickModelMapper = nil
	C.QHCandlestickModelMapper_virtbase(h, &outptr_QCandlestickModelMapper)

	return &QHCandlestickModelMapper{h: h,
		QCandlestickModelMapper: newQCandlestickModelMapper(outptr_QCandlestickModelMapper)}
}

// UnsafeNewQHCandlestickModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQHCandlestickModelMapper(h unsafe.Pointer) *QHCandlestickModelMapper {
	return newQHCandlestickModelMapper((*C.QHCandlestickModelMapper)(h))
}

// NewQHCandlestickModelMapper constructs a new QHCandlestickModelMapper object.
func NewQHCandlestickModelMapper() *QHCandlestickModelMapper {

	return newQHCandlestickModelMapper(C.QHCandlestickModelMapper_new())
}

// NewQHCandlestickModelMapper2 constructs a new QHCandlestickModelMapper object.
func NewQHCandlestickModelMapper2(parent *qt6.QObject) *QHCandlestickModelMapper {
	defer runtime.KeepAlive(parent)

	return newQHCandlestickModelMapper(C.QHCandlestickModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QHCandlestickModelMapper) MetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QHCandlestickModelMapper_metaObject(this.h)))
}

func (this *QHCandlestickModelMapper) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHCandlestickModelMapper_metacast(this.h, param1_Cstring))
}

func QHCandlestickModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHCandlestickModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHCandlestickModelMapper) Orientation() qt6.Orientation {
	defer runtime.KeepAlive(this)
	return (qt6.Orientation)(C.QHCandlestickModelMapper_orientation(this.h))
}

func (this *QHCandlestickModelMapper) SetTimestampColumn(timestampColumn int) {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_setTimestampColumn(this.h, (C.int)(timestampColumn))
}

func (this *QHCandlestickModelMapper) TimestampColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHCandlestickModelMapper_timestampColumn(this.h))
}

func (this *QHCandlestickModelMapper) SetOpenColumn(openColumn int) {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_setOpenColumn(this.h, (C.int)(openColumn))
}

func (this *QHCandlestickModelMapper) OpenColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHCandlestickModelMapper_openColumn(this.h))
}

func (this *QHCandlestickModelMapper) SetHighColumn(highColumn int) {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_setHighColumn(this.h, (C.int)(highColumn))
}

func (this *QHCandlestickModelMapper) HighColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHCandlestickModelMapper_highColumn(this.h))
}

func (this *QHCandlestickModelMapper) SetLowColumn(lowColumn int) {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_setLowColumn(this.h, (C.int)(lowColumn))
}

func (this *QHCandlestickModelMapper) LowColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHCandlestickModelMapper_lowColumn(this.h))
}

func (this *QHCandlestickModelMapper) SetCloseColumn(closeColumn int) {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_setCloseColumn(this.h, (C.int)(closeColumn))
}

func (this *QHCandlestickModelMapper) CloseColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHCandlestickModelMapper_closeColumn(this.h))
}

func (this *QHCandlestickModelMapper) SetFirstSetRow(firstSetRow int) {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_setFirstSetRow(this.h, (C.int)(firstSetRow))
}

func (this *QHCandlestickModelMapper) FirstSetRow() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHCandlestickModelMapper_firstSetRow(this.h))
}

func (this *QHCandlestickModelMapper) SetLastSetRow(lastSetRow int) {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_setLastSetRow(this.h, (C.int)(lastSetRow))
}

func (this *QHCandlestickModelMapper) LastSetRow() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHCandlestickModelMapper_lastSetRow(this.h))
}

func (this *QHCandlestickModelMapper) TimestampColumnChanged() {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_timestampColumnChanged(this.h)
}
func (this *QHCandlestickModelMapper) OnTimestampColumnChanged(slot func()) {
	C.QHCandlestickModelMapper_connect_timestampColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHCandlestickModelMapper_timestampColumnChanged
func miqt_exec_callback_QHCandlestickModelMapper_timestampColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHCandlestickModelMapper) OpenColumnChanged() {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_openColumnChanged(this.h)
}
func (this *QHCandlestickModelMapper) OnOpenColumnChanged(slot func()) {
	C.QHCandlestickModelMapper_connect_openColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHCandlestickModelMapper_openColumnChanged
func miqt_exec_callback_QHCandlestickModelMapper_openColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHCandlestickModelMapper) HighColumnChanged() {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_highColumnChanged(this.h)
}
func (this *QHCandlestickModelMapper) OnHighColumnChanged(slot func()) {
	C.QHCandlestickModelMapper_connect_highColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHCandlestickModelMapper_highColumnChanged
func miqt_exec_callback_QHCandlestickModelMapper_highColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHCandlestickModelMapper) LowColumnChanged() {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_lowColumnChanged(this.h)
}
func (this *QHCandlestickModelMapper) OnLowColumnChanged(slot func()) {
	C.QHCandlestickModelMapper_connect_lowColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHCandlestickModelMapper_lowColumnChanged
func miqt_exec_callback_QHCandlestickModelMapper_lowColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHCandlestickModelMapper) CloseColumnChanged() {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_closeColumnChanged(this.h)
}
func (this *QHCandlestickModelMapper) OnCloseColumnChanged(slot func()) {
	C.QHCandlestickModelMapper_connect_closeColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHCandlestickModelMapper_closeColumnChanged
func miqt_exec_callback_QHCandlestickModelMapper_closeColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHCandlestickModelMapper) FirstSetRowChanged() {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_firstSetRowChanged(this.h)
}
func (this *QHCandlestickModelMapper) OnFirstSetRowChanged(slot func()) {
	C.QHCandlestickModelMapper_connect_firstSetRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHCandlestickModelMapper_firstSetRowChanged
func miqt_exec_callback_QHCandlestickModelMapper_firstSetRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHCandlestickModelMapper) LastSetRowChanged() {
	defer runtime.KeepAlive(this)
	C.QHCandlestickModelMapper_lastSetRowChanged(this.h)
}
func (this *QHCandlestickModelMapper) OnLastSetRowChanged(slot func()) {
	C.QHCandlestickModelMapper_connect_lastSetRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHCandlestickModelMapper_lastSetRowChanged
func miqt_exec_callback_QHCandlestickModelMapper_lastSetRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QHCandlestickModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHCandlestickModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHCandlestickModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHCandlestickModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetTimestamp can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) SetTimestamp(timestamp int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHCandlestickModelMapper_protectedbase_setTimestamp(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(timestamp))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Timestamp can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) Timestamp() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHCandlestickModelMapper_protectedbase_timestamp(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOpen can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) SetOpen(open int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHCandlestickModelMapper_protectedbase_setOpen(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(open))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Open can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) Open() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHCandlestickModelMapper_protectedbase_open(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetHigh can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) SetHigh(high int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHCandlestickModelMapper_protectedbase_setHigh(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(high))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// High can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) High() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHCandlestickModelMapper_protectedbase_high(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLow can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) SetLow(low int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHCandlestickModelMapper_protectedbase_setLow(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(low))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Low can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) Low() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHCandlestickModelMapper_protectedbase_low(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetClose can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) SetClose(close int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHCandlestickModelMapper_protectedbase_setClose(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(close))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Close can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) Close() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHCandlestickModelMapper_protectedbase_close(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirstSetSection can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) SetFirstSetSection(firstSetSection int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHCandlestickModelMapper_protectedbase_setFirstSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(firstSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FirstSetSection can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) FirstSetSection() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHCandlestickModelMapper_protectedbase_firstSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLastSetSection can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) SetLastSetSection(lastSetSection int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHCandlestickModelMapper_protectedbase_setLastSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(lastSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LastSetSection can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) LastSetSection() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHCandlestickModelMapper_protectedbase_lastSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) Sender() *qt6.QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QHCandlestickModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHCandlestickModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHCandlestickModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QHCandlestickModelMapper that was directly constructed.
func (this *QHCandlestickModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHCandlestickModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QHCandlestickModelMapper) callVirtualBase_Orientation() qt6.Orientation {
	defer runtime.KeepAlive(this)

	return (qt6.Orientation)(C.QHCandlestickModelMapper_virtualbase_orientation(unsafe.Pointer(this.h)))

}
func (this *QHCandlestickModelMapper) OnOrientation(slot func(super func() qt6.Orientation) qt6.Orientation) {
	ok := C.QHCandlestickModelMapper_override_virtual_orientation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHCandlestickModelMapper_orientation
func miqt_exec_callback_QHCandlestickModelMapper_orientation(self *C.QHCandlestickModelMapper, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt6.Orientation) qt6.Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHCandlestickModelMapper{h: self}).callVirtualBase_Orientation)

	return (C.int)(virtualReturn)

}

func (this *QHCandlestickModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QHCandlestickModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHCandlestickModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QHCandlestickModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHCandlestickModelMapper_event
func miqt_exec_callback_QHCandlestickModelMapper_event(self *C.QHCandlestickModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHCandlestickModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHCandlestickModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QHCandlestickModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHCandlestickModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QHCandlestickModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHCandlestickModelMapper_eventFilter
func miqt_exec_callback_QHCandlestickModelMapper_eventFilter(self *C.QHCandlestickModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHCandlestickModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHCandlestickModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QHCandlestickModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QHCandlestickModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QHCandlestickModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHCandlestickModelMapper_timerEvent
func miqt_exec_callback_QHCandlestickModelMapper_timerEvent(self *C.QHCandlestickModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QHCandlestickModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHCandlestickModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QHCandlestickModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QHCandlestickModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QHCandlestickModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHCandlestickModelMapper_childEvent
func miqt_exec_callback_QHCandlestickModelMapper_childEvent(self *C.QHCandlestickModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QHCandlestickModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHCandlestickModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QHCandlestickModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHCandlestickModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHCandlestickModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHCandlestickModelMapper_customEvent
func miqt_exec_callback_QHCandlestickModelMapper_customEvent(self *C.QHCandlestickModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHCandlestickModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHCandlestickModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QHCandlestickModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHCandlestickModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHCandlestickModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHCandlestickModelMapper_connectNotify
func miqt_exec_callback_QHCandlestickModelMapper_connectNotify(self *C.QHCandlestickModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHCandlestickModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHCandlestickModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QHCandlestickModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHCandlestickModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHCandlestickModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHCandlestickModelMapper_disconnectNotify
func miqt_exec_callback_QHCandlestickModelMapper_disconnectNotify(self *C.QHCandlestickModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHCandlestickModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHCandlestickModelMapper) Delete() {
	C.QHCandlestickModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QHCandlestickModelMapper) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QHCandlestickModelMapper_delete((*C.QHCandlestickModelMapper)(gc[0]))
	})
	this.miqtSetGC(gc)
}
