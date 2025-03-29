package charts6

/*

#include "gen_qcandlesticklegendmarker.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCandlestickLegendMarker struct {
	h *C.QCandlestickLegendMarker
	*QLegendMarker
}

func (this *QCandlestickLegendMarker) cPointer() *C.QCandlestickLegendMarker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCandlestickLegendMarker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCandlestickLegendMarker constructs the type using only CGO pointers.
func newQCandlestickLegendMarker(h *C.QCandlestickLegendMarker) *QCandlestickLegendMarker {
	if h == nil {
		return nil
	}
	var outptr_QLegendMarker *C.QLegendMarker = nil
	C.QCandlestickLegendMarker_virtbase(h, &outptr_QLegendMarker)

	return &QCandlestickLegendMarker{h: h,
		QLegendMarker: newQLegendMarker(outptr_QLegendMarker)}
}

// UnsafeNewQCandlestickLegendMarker constructs the type using only unsafe pointers.
func UnsafeNewQCandlestickLegendMarker(h unsafe.Pointer) *QCandlestickLegendMarker {
	return newQCandlestickLegendMarker((*C.QCandlestickLegendMarker)(h))
}

// NewQCandlestickLegendMarker constructs a new QCandlestickLegendMarker object.
func NewQCandlestickLegendMarker(series *QCandlestickSeries, legend *QLegend) *QCandlestickLegendMarker {

	return newQCandlestickLegendMarker(C.QCandlestickLegendMarker_new(series.cPointer(), legend.cPointer()))
}

// NewQCandlestickLegendMarker2 constructs a new QCandlestickLegendMarker object.
func NewQCandlestickLegendMarker2(series *QCandlestickSeries, legend *QLegend, parent *qt6.QObject) *QCandlestickLegendMarker {

	return newQCandlestickLegendMarker(C.QCandlestickLegendMarker_new2(series.cPointer(), legend.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QCandlestickLegendMarker) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QCandlestickLegendMarker_metaObject(this.h)))
}

func (this *QCandlestickLegendMarker) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCandlestickLegendMarker_metacast(this.h, param1_Cstring))
}

func QCandlestickLegendMarker_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickLegendMarker_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCandlestickLegendMarker) Type() QLegendMarker__LegendMarkerType {
	return (QLegendMarker__LegendMarkerType)(C.QCandlestickLegendMarker_type(this.h))
}

func (this *QCandlestickLegendMarker) Series() *QCandlestickSeries {
	return newQCandlestickSeries(C.QCandlestickLegendMarker_series(this.h))
}

func QCandlestickLegendMarker_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickLegendMarker_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCandlestickLegendMarker_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickLegendMarker_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QCandlestickLegendMarker that was directly constructed.
func (this *QCandlestickLegendMarker) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QCandlestickLegendMarker_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QCandlestickLegendMarker that was directly constructed.
func (this *QCandlestickLegendMarker) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickLegendMarker_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QCandlestickLegendMarker that was directly constructed.
func (this *QCandlestickLegendMarker) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickLegendMarker_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QCandlestickLegendMarker that was directly constructed.
func (this *QCandlestickLegendMarker) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCandlestickLegendMarker_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QCandlestickLegendMarker) callVirtualBase_Type() QLegendMarker__LegendMarkerType {

	return (QLegendMarker__LegendMarkerType)(C.QCandlestickLegendMarker_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QCandlestickLegendMarker) OnType(slot func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType) {
	ok := C.QCandlestickLegendMarker_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickLegendMarker_type
func miqt_exec_callback_QCandlestickLegendMarker_type(self *C.QCandlestickLegendMarker, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCandlestickLegendMarker{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QCandlestickLegendMarker) callVirtualBase_Series() *QCandlestickSeries {

	return newQCandlestickSeries(C.QCandlestickLegendMarker_virtualbase_series(unsafe.Pointer(this.h)))

}
func (this *QCandlestickLegendMarker) OnSeries(slot func(super func() *QCandlestickSeries) *QCandlestickSeries) {
	ok := C.QCandlestickLegendMarker_override_virtual_series(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickLegendMarker_series
func miqt_exec_callback_QCandlestickLegendMarker_series(self *C.QCandlestickLegendMarker, cb C.intptr_t) *C.QCandlestickSeries {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QCandlestickSeries) *QCandlestickSeries)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCandlestickLegendMarker{h: self}).callVirtualBase_Series)

	return virtualReturn.cPointer()

}

func (this *QCandlestickLegendMarker) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QCandlestickLegendMarker_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCandlestickLegendMarker) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QCandlestickLegendMarker_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickLegendMarker_event
func miqt_exec_callback_QCandlestickLegendMarker_event(self *C.QCandlestickLegendMarker, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCandlestickLegendMarker{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCandlestickLegendMarker) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QCandlestickLegendMarker_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCandlestickLegendMarker) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QCandlestickLegendMarker_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickLegendMarker_eventFilter
func miqt_exec_callback_QCandlestickLegendMarker_eventFilter(self *C.QCandlestickLegendMarker, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCandlestickLegendMarker{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCandlestickLegendMarker) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QCandlestickLegendMarker_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCandlestickLegendMarker) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QCandlestickLegendMarker_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickLegendMarker_timerEvent
func miqt_exec_callback_QCandlestickLegendMarker_timerEvent(self *C.QCandlestickLegendMarker, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickLegendMarker{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCandlestickLegendMarker) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QCandlestickLegendMarker_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCandlestickLegendMarker) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QCandlestickLegendMarker_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickLegendMarker_childEvent
func miqt_exec_callback_QCandlestickLegendMarker_childEvent(self *C.QCandlestickLegendMarker, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickLegendMarker{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCandlestickLegendMarker) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QCandlestickLegendMarker_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCandlestickLegendMarker) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QCandlestickLegendMarker_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickLegendMarker_customEvent
func miqt_exec_callback_QCandlestickLegendMarker_customEvent(self *C.QCandlestickLegendMarker, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickLegendMarker{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCandlestickLegendMarker) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QCandlestickLegendMarker_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCandlestickLegendMarker) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCandlestickLegendMarker_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickLegendMarker_connectNotify
func miqt_exec_callback_QCandlestickLegendMarker_connectNotify(self *C.QCandlestickLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCandlestickLegendMarker{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCandlestickLegendMarker) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QCandlestickLegendMarker_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCandlestickLegendMarker) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCandlestickLegendMarker_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickLegendMarker_disconnectNotify
func miqt_exec_callback_QCandlestickLegendMarker_disconnectNotify(self *C.QCandlestickLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCandlestickLegendMarker{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCandlestickLegendMarker) Delete() {
	C.QCandlestickLegendMarker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCandlestickLegendMarker) GoGC() {
	runtime.SetFinalizer(this, func(this *QCandlestickLegendMarker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
