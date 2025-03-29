package charts6

/*

#include "gen_qxylegendmarker.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QXYLegendMarker struct {
	h *C.QXYLegendMarker
	*QLegendMarker
}

func (this *QXYLegendMarker) cPointer() *C.QXYLegendMarker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QXYLegendMarker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXYLegendMarker constructs the type using only CGO pointers.
func newQXYLegendMarker(h *C.QXYLegendMarker) *QXYLegendMarker {
	if h == nil {
		return nil
	}
	var outptr_QLegendMarker *C.QLegendMarker = nil
	C.QXYLegendMarker_virtbase(h, &outptr_QLegendMarker)

	return &QXYLegendMarker{h: h,
		QLegendMarker: newQLegendMarker(outptr_QLegendMarker)}
}

// UnsafeNewQXYLegendMarker constructs the type using only unsafe pointers.
func UnsafeNewQXYLegendMarker(h unsafe.Pointer) *QXYLegendMarker {
	return newQXYLegendMarker((*C.QXYLegendMarker)(h))
}

// NewQXYLegendMarker constructs a new QXYLegendMarker object.
func NewQXYLegendMarker(series *QXYSeries, legend *QLegend) *QXYLegendMarker {

	return newQXYLegendMarker(C.QXYLegendMarker_new(series.cPointer(), legend.cPointer()))
}

// NewQXYLegendMarker2 constructs a new QXYLegendMarker object.
func NewQXYLegendMarker2(series *QXYSeries, legend *QLegend, parent *qt6.QObject) *QXYLegendMarker {

	return newQXYLegendMarker(C.QXYLegendMarker_new2(series.cPointer(), legend.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QXYLegendMarker) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QXYLegendMarker_metaObject(this.h)))
}

func (this *QXYLegendMarker) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QXYLegendMarker_metacast(this.h, param1_Cstring))
}

func QXYLegendMarker_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QXYLegendMarker_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXYLegendMarker) Type() QLegendMarker__LegendMarkerType {
	return (QLegendMarker__LegendMarkerType)(C.QXYLegendMarker_type(this.h))
}

func (this *QXYLegendMarker) Series() *QXYSeries {
	return newQXYSeries(C.QXYLegendMarker_series(this.h))
}

func QXYLegendMarker_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QXYLegendMarker_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QXYLegendMarker_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QXYLegendMarker_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QXYLegendMarker that was directly constructed.
func (this *QXYLegendMarker) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QXYLegendMarker_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QXYLegendMarker that was directly constructed.
func (this *QXYLegendMarker) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QXYLegendMarker_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QXYLegendMarker that was directly constructed.
func (this *QXYLegendMarker) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QXYLegendMarker_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QXYLegendMarker that was directly constructed.
func (this *QXYLegendMarker) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QXYLegendMarker_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QXYLegendMarker) callVirtualBase_Type() QLegendMarker__LegendMarkerType {

	return (QLegendMarker__LegendMarkerType)(C.QXYLegendMarker_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QXYLegendMarker) OnType(slot func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType) {
	ok := C.QXYLegendMarker_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QXYLegendMarker_type
func miqt_exec_callback_QXYLegendMarker_type(self *C.QXYLegendMarker, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QXYLegendMarker{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QXYLegendMarker) callVirtualBase_Series() *QXYSeries {

	return newQXYSeries(C.QXYLegendMarker_virtualbase_series(unsafe.Pointer(this.h)))

}
func (this *QXYLegendMarker) OnSeries(slot func(super func() *QXYSeries) *QXYSeries) {
	ok := C.QXYLegendMarker_override_virtual_series(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QXYLegendMarker_series
func miqt_exec_callback_QXYLegendMarker_series(self *C.QXYLegendMarker, cb C.intptr_t) *C.QXYSeries {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QXYSeries) *QXYSeries)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QXYLegendMarker{h: self}).callVirtualBase_Series)

	return virtualReturn.cPointer()

}

func (this *QXYLegendMarker) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QXYLegendMarker_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QXYLegendMarker) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QXYLegendMarker_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QXYLegendMarker_event
func miqt_exec_callback_QXYLegendMarker_event(self *C.QXYLegendMarker, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QXYLegendMarker{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QXYLegendMarker) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QXYLegendMarker_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QXYLegendMarker) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QXYLegendMarker_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QXYLegendMarker_eventFilter
func miqt_exec_callback_QXYLegendMarker_eventFilter(self *C.QXYLegendMarker, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QXYLegendMarker{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QXYLegendMarker) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QXYLegendMarker_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QXYLegendMarker) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QXYLegendMarker_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QXYLegendMarker_timerEvent
func miqt_exec_callback_QXYLegendMarker_timerEvent(self *C.QXYLegendMarker, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QXYLegendMarker{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QXYLegendMarker) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QXYLegendMarker_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QXYLegendMarker) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QXYLegendMarker_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QXYLegendMarker_childEvent
func miqt_exec_callback_QXYLegendMarker_childEvent(self *C.QXYLegendMarker, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QXYLegendMarker{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QXYLegendMarker) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QXYLegendMarker_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QXYLegendMarker) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QXYLegendMarker_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QXYLegendMarker_customEvent
func miqt_exec_callback_QXYLegendMarker_customEvent(self *C.QXYLegendMarker, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QXYLegendMarker{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QXYLegendMarker) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QXYLegendMarker_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QXYLegendMarker) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QXYLegendMarker_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QXYLegendMarker_connectNotify
func miqt_exec_callback_QXYLegendMarker_connectNotify(self *C.QXYLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QXYLegendMarker{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QXYLegendMarker) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QXYLegendMarker_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QXYLegendMarker) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QXYLegendMarker_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QXYLegendMarker_disconnectNotify
func miqt_exec_callback_QXYLegendMarker_disconnectNotify(self *C.QXYLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QXYLegendMarker{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QXYLegendMarker) Delete() {
	C.QXYLegendMarker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXYLegendMarker) GoGC() {
	runtime.SetFinalizer(this, func(this *QXYLegendMarker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
