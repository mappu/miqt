package charts6

/*

#include "gen_qboxplotlegendmarker.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBoxPlotLegendMarker struct {
	h *C.QBoxPlotLegendMarker
	*QLegendMarker
}

func (this *QBoxPlotLegendMarker) cPointer() *C.QBoxPlotLegendMarker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBoxPlotLegendMarker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBoxPlotLegendMarker constructs the type using only CGO pointers.
func newQBoxPlotLegendMarker(h *C.QBoxPlotLegendMarker) *QBoxPlotLegendMarker {
	if h == nil {
		return nil
	}
	var outptr_QLegendMarker *C.QLegendMarker = nil
	C.QBoxPlotLegendMarker_virtbase(h, &outptr_QLegendMarker)

	return &QBoxPlotLegendMarker{h: h,
		QLegendMarker: newQLegendMarker(outptr_QLegendMarker)}
}

// UnsafeNewQBoxPlotLegendMarker constructs the type using only unsafe pointers.
func UnsafeNewQBoxPlotLegendMarker(h unsafe.Pointer) *QBoxPlotLegendMarker {
	return newQBoxPlotLegendMarker((*C.QBoxPlotLegendMarker)(h))
}

// NewQBoxPlotLegendMarker constructs a new QBoxPlotLegendMarker object.
func NewQBoxPlotLegendMarker(series *QBoxPlotSeries, legend *QLegend) *QBoxPlotLegendMarker {

	return newQBoxPlotLegendMarker(C.QBoxPlotLegendMarker_new(series.cPointer(), legend.cPointer()))
}

// NewQBoxPlotLegendMarker2 constructs a new QBoxPlotLegendMarker object.
func NewQBoxPlotLegendMarker2(series *QBoxPlotSeries, legend *QLegend, parent *qt6.QObject) *QBoxPlotLegendMarker {

	return newQBoxPlotLegendMarker(C.QBoxPlotLegendMarker_new2(series.cPointer(), legend.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QBoxPlotLegendMarker) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QBoxPlotLegendMarker_metaObject(this.h)))
}

func (this *QBoxPlotLegendMarker) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBoxPlotLegendMarker_metacast(this.h, param1_Cstring))
}

func QBoxPlotLegendMarker_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBoxPlotLegendMarker_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxPlotLegendMarker) Type() QLegendMarker__LegendMarkerType {
	return (QLegendMarker__LegendMarkerType)(C.QBoxPlotLegendMarker_type(this.h))
}

func (this *QBoxPlotLegendMarker) Series() *QBoxPlotSeries {
	return newQBoxPlotSeries(C.QBoxPlotLegendMarker_series(this.h))
}

func QBoxPlotLegendMarker_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxPlotLegendMarker_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxPlotLegendMarker_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxPlotLegendMarker_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QBoxPlotLegendMarker that was directly constructed.
func (this *QBoxPlotLegendMarker) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QBoxPlotLegendMarker_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QBoxPlotLegendMarker that was directly constructed.
func (this *QBoxPlotLegendMarker) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBoxPlotLegendMarker_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QBoxPlotLegendMarker that was directly constructed.
func (this *QBoxPlotLegendMarker) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBoxPlotLegendMarker_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QBoxPlotLegendMarker that was directly constructed.
func (this *QBoxPlotLegendMarker) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QBoxPlotLegendMarker_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QBoxPlotLegendMarker) callVirtualBase_Type() QLegendMarker__LegendMarkerType {

	return (QLegendMarker__LegendMarkerType)(C.QBoxPlotLegendMarker_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QBoxPlotLegendMarker) OnType(slot func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType) {
	ok := C.QBoxPlotLegendMarker_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotLegendMarker_type
func miqt_exec_callback_QBoxPlotLegendMarker_type(self *C.QBoxPlotLegendMarker, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxPlotLegendMarker{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QBoxPlotLegendMarker) callVirtualBase_Series() *QBoxPlotSeries {

	return newQBoxPlotSeries(C.QBoxPlotLegendMarker_virtualbase_series(unsafe.Pointer(this.h)))

}
func (this *QBoxPlotLegendMarker) OnSeries(slot func(super func() *QBoxPlotSeries) *QBoxPlotSeries) {
	ok := C.QBoxPlotLegendMarker_override_virtual_series(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotLegendMarker_series
func miqt_exec_callback_QBoxPlotLegendMarker_series(self *C.QBoxPlotLegendMarker, cb C.intptr_t) *C.QBoxPlotSeries {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QBoxPlotSeries) *QBoxPlotSeries)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxPlotLegendMarker{h: self}).callVirtualBase_Series)

	return virtualReturn.cPointer()

}

func (this *QBoxPlotLegendMarker) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QBoxPlotLegendMarker_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBoxPlotLegendMarker) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QBoxPlotLegendMarker_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotLegendMarker_event
func miqt_exec_callback_QBoxPlotLegendMarker_event(self *C.QBoxPlotLegendMarker, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBoxPlotLegendMarker{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBoxPlotLegendMarker) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QBoxPlotLegendMarker_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBoxPlotLegendMarker) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QBoxPlotLegendMarker_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotLegendMarker_eventFilter
func miqt_exec_callback_QBoxPlotLegendMarker_eventFilter(self *C.QBoxPlotLegendMarker, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBoxPlotLegendMarker{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QBoxPlotLegendMarker) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QBoxPlotLegendMarker_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QBoxPlotLegendMarker) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QBoxPlotLegendMarker_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotLegendMarker_timerEvent
func miqt_exec_callback_QBoxPlotLegendMarker_timerEvent(self *C.QBoxPlotLegendMarker, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QBoxPlotLegendMarker{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QBoxPlotLegendMarker) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QBoxPlotLegendMarker_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QBoxPlotLegendMarker) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QBoxPlotLegendMarker_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotLegendMarker_childEvent
func miqt_exec_callback_QBoxPlotLegendMarker_childEvent(self *C.QBoxPlotLegendMarker, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QBoxPlotLegendMarker{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QBoxPlotLegendMarker) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QBoxPlotLegendMarker_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QBoxPlotLegendMarker) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QBoxPlotLegendMarker_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotLegendMarker_customEvent
func miqt_exec_callback_QBoxPlotLegendMarker_customEvent(self *C.QBoxPlotLegendMarker, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QBoxPlotLegendMarker{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QBoxPlotLegendMarker) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QBoxPlotLegendMarker_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBoxPlotLegendMarker) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBoxPlotLegendMarker_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotLegendMarker_connectNotify
func miqt_exec_callback_QBoxPlotLegendMarker_connectNotify(self *C.QBoxPlotLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBoxPlotLegendMarker{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QBoxPlotLegendMarker) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QBoxPlotLegendMarker_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBoxPlotLegendMarker) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBoxPlotLegendMarker_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotLegendMarker_disconnectNotify
func miqt_exec_callback_QBoxPlotLegendMarker_disconnectNotify(self *C.QBoxPlotLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBoxPlotLegendMarker{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QBoxPlotLegendMarker) Delete() {
	C.QBoxPlotLegendMarker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBoxPlotLegendMarker) GoGC() {
	runtime.SetFinalizer(this, func(this *QBoxPlotLegendMarker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
