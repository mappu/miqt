package charts6

/*

#include "gen_qpielegendmarker.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPieLegendMarker struct {
	h *C.QPieLegendMarker
	*QLegendMarker
}

func (this *QPieLegendMarker) cPointer() *C.QPieLegendMarker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPieLegendMarker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPieLegendMarker constructs the type using only CGO pointers.
func newQPieLegendMarker(h *C.QPieLegendMarker) *QPieLegendMarker {
	if h == nil {
		return nil
	}
	var outptr_QLegendMarker *C.QLegendMarker = nil
	C.QPieLegendMarker_virtbase(h, &outptr_QLegendMarker)

	return &QPieLegendMarker{h: h,
		QLegendMarker: newQLegendMarker(outptr_QLegendMarker)}
}

// UnsafeNewQPieLegendMarker constructs the type using only unsafe pointers.
func UnsafeNewQPieLegendMarker(h unsafe.Pointer) *QPieLegendMarker {
	return newQPieLegendMarker((*C.QPieLegendMarker)(h))
}

// NewQPieLegendMarker constructs a new QPieLegendMarker object.
func NewQPieLegendMarker(series *QPieSeries, slice *QPieSlice, legend *QLegend) *QPieLegendMarker {

	return newQPieLegendMarker(C.QPieLegendMarker_new(series.cPointer(), slice.cPointer(), legend.cPointer()))
}

// NewQPieLegendMarker2 constructs a new QPieLegendMarker object.
func NewQPieLegendMarker2(series *QPieSeries, slice *QPieSlice, legend *QLegend, parent *qt6.QObject) *QPieLegendMarker {

	return newQPieLegendMarker(C.QPieLegendMarker_new2(series.cPointer(), slice.cPointer(), legend.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QPieLegendMarker) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPieLegendMarker_metaObject(this.h)))
}

func (this *QPieLegendMarker) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPieLegendMarker_metacast(this.h, param1_Cstring))
}

func QPieLegendMarker_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPieLegendMarker_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPieLegendMarker) Type() QLegendMarker__LegendMarkerType {
	return (QLegendMarker__LegendMarkerType)(C.QPieLegendMarker_type(this.h))
}

func (this *QPieLegendMarker) Series() *QPieSeries {
	return newQPieSeries(C.QPieLegendMarker_series(this.h))
}

func (this *QPieLegendMarker) Slice() *QPieSlice {
	return newQPieSlice(C.QPieLegendMarker_slice(this.h))
}

func QPieLegendMarker_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPieLegendMarker_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPieLegendMarker_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPieLegendMarker_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QPieLegendMarker that was directly constructed.
func (this *QPieLegendMarker) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPieLegendMarker_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPieLegendMarker that was directly constructed.
func (this *QPieLegendMarker) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPieLegendMarker_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPieLegendMarker that was directly constructed.
func (this *QPieLegendMarker) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPieLegendMarker_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPieLegendMarker that was directly constructed.
func (this *QPieLegendMarker) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPieLegendMarker_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPieLegendMarker) callVirtualBase_Type() QLegendMarker__LegendMarkerType {

	return (QLegendMarker__LegendMarkerType)(C.QPieLegendMarker_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QPieLegendMarker) OnType(slot func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType) {
	ok := C.QPieLegendMarker_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieLegendMarker_type
func miqt_exec_callback_QPieLegendMarker_type(self *C.QPieLegendMarker, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPieLegendMarker{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QPieLegendMarker) callVirtualBase_Series() *QPieSeries {

	return newQPieSeries(C.QPieLegendMarker_virtualbase_series(unsafe.Pointer(this.h)))

}
func (this *QPieLegendMarker) OnSeries(slot func(super func() *QPieSeries) *QPieSeries) {
	ok := C.QPieLegendMarker_override_virtual_series(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieLegendMarker_series
func miqt_exec_callback_QPieLegendMarker_series(self *C.QPieLegendMarker, cb C.intptr_t) *C.QPieSeries {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPieSeries) *QPieSeries)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPieLegendMarker{h: self}).callVirtualBase_Series)

	return virtualReturn.cPointer()

}

func (this *QPieLegendMarker) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPieLegendMarker_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPieLegendMarker) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPieLegendMarker_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieLegendMarker_event
func miqt_exec_callback_QPieLegendMarker_event(self *C.QPieLegendMarker, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPieLegendMarker{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPieLegendMarker) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QPieLegendMarker_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPieLegendMarker) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QPieLegendMarker_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieLegendMarker_eventFilter
func miqt_exec_callback_QPieLegendMarker_eventFilter(self *C.QPieLegendMarker, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPieLegendMarker{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPieLegendMarker) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPieLegendMarker_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPieLegendMarker) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPieLegendMarker_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieLegendMarker_timerEvent
func miqt_exec_callback_QPieLegendMarker_timerEvent(self *C.QPieLegendMarker, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPieLegendMarker{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPieLegendMarker) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPieLegendMarker_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPieLegendMarker) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPieLegendMarker_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieLegendMarker_childEvent
func miqt_exec_callback_QPieLegendMarker_childEvent(self *C.QPieLegendMarker, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPieLegendMarker{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPieLegendMarker) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPieLegendMarker_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPieLegendMarker) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPieLegendMarker_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieLegendMarker_customEvent
func miqt_exec_callback_QPieLegendMarker_customEvent(self *C.QPieLegendMarker, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPieLegendMarker{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPieLegendMarker) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPieLegendMarker_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPieLegendMarker) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPieLegendMarker_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieLegendMarker_connectNotify
func miqt_exec_callback_QPieLegendMarker_connectNotify(self *C.QPieLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPieLegendMarker{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPieLegendMarker) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPieLegendMarker_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPieLegendMarker) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPieLegendMarker_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieLegendMarker_disconnectNotify
func miqt_exec_callback_QPieLegendMarker_disconnectNotify(self *C.QPieLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPieLegendMarker{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPieLegendMarker) Delete() {
	C.QPieLegendMarker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPieLegendMarker) GoGC() {
	runtime.SetFinalizer(this, func(this *QPieLegendMarker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
