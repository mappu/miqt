package charts6

/*

#include "gen_qbarlegendmarker.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBarLegendMarker struct {
	h *C.QBarLegendMarker
	*QLegendMarker
}

func (this *QBarLegendMarker) cPointer() *C.QBarLegendMarker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBarLegendMarker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBarLegendMarker constructs the type using only CGO pointers.
func newQBarLegendMarker(h *C.QBarLegendMarker) *QBarLegendMarker {
	if h == nil {
		return nil
	}
	var outptr_QLegendMarker *C.QLegendMarker = nil
	C.QBarLegendMarker_virtbase(h, &outptr_QLegendMarker)

	return &QBarLegendMarker{h: h,
		QLegendMarker: newQLegendMarker(outptr_QLegendMarker)}
}

// UnsafeNewQBarLegendMarker constructs the type using only unsafe pointers.
func UnsafeNewQBarLegendMarker(h unsafe.Pointer) *QBarLegendMarker {
	return newQBarLegendMarker((*C.QBarLegendMarker)(h))
}

// NewQBarLegendMarker constructs a new QBarLegendMarker object.
func NewQBarLegendMarker(series *QAbstractBarSeries, barset *QBarSet, legend *QLegend) *QBarLegendMarker {

	return newQBarLegendMarker(C.QBarLegendMarker_new(series.cPointer(), barset.cPointer(), legend.cPointer()))
}

// NewQBarLegendMarker2 constructs a new QBarLegendMarker object.
func NewQBarLegendMarker2(series *QAbstractBarSeries, barset *QBarSet, legend *QLegend, parent *qt6.QObject) *QBarLegendMarker {

	return newQBarLegendMarker(C.QBarLegendMarker_new2(series.cPointer(), barset.cPointer(), legend.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QBarLegendMarker) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QBarLegendMarker_metaObject(this.h)))
}

func (this *QBarLegendMarker) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBarLegendMarker_metacast(this.h, param1_Cstring))
}

func QBarLegendMarker_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBarLegendMarker_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBarLegendMarker) Type() QLegendMarker__LegendMarkerType {
	return (QLegendMarker__LegendMarkerType)(C.QBarLegendMarker_type(this.h))
}

func (this *QBarLegendMarker) Series() *QAbstractBarSeries {
	return newQAbstractBarSeries(C.QBarLegendMarker_series(this.h))
}

func (this *QBarLegendMarker) Barset() *QBarSet {
	return newQBarSet(C.QBarLegendMarker_barset(this.h))
}

func QBarLegendMarker_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBarLegendMarker_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBarLegendMarker_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBarLegendMarker_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QBarLegendMarker that was directly constructed.
func (this *QBarLegendMarker) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QBarLegendMarker_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QBarLegendMarker that was directly constructed.
func (this *QBarLegendMarker) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBarLegendMarker_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QBarLegendMarker that was directly constructed.
func (this *QBarLegendMarker) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBarLegendMarker_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QBarLegendMarker that was directly constructed.
func (this *QBarLegendMarker) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QBarLegendMarker_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QBarLegendMarker) callVirtualBase_Type() QLegendMarker__LegendMarkerType {

	return (QLegendMarker__LegendMarkerType)(C.QBarLegendMarker_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QBarLegendMarker) OnType(slot func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType) {
	ok := C.QBarLegendMarker_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarLegendMarker_type
func miqt_exec_callback_QBarLegendMarker_type(self *C.QBarLegendMarker, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QLegendMarker__LegendMarkerType) QLegendMarker__LegendMarkerType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBarLegendMarker{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QBarLegendMarker) callVirtualBase_Series() *QAbstractBarSeries {

	return newQAbstractBarSeries(C.QBarLegendMarker_virtualbase_series(unsafe.Pointer(this.h)))

}
func (this *QBarLegendMarker) OnSeries(slot func(super func() *QAbstractBarSeries) *QAbstractBarSeries) {
	ok := C.QBarLegendMarker_override_virtual_series(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarLegendMarker_series
func miqt_exec_callback_QBarLegendMarker_series(self *C.QBarLegendMarker, cb C.intptr_t) *C.QAbstractBarSeries {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAbstractBarSeries) *QAbstractBarSeries)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBarLegendMarker{h: self}).callVirtualBase_Series)

	return virtualReturn.cPointer()

}

func (this *QBarLegendMarker) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QBarLegendMarker_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBarLegendMarker) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QBarLegendMarker_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarLegendMarker_event
func miqt_exec_callback_QBarLegendMarker_event(self *C.QBarLegendMarker, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBarLegendMarker{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBarLegendMarker) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QBarLegendMarker_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBarLegendMarker) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QBarLegendMarker_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarLegendMarker_eventFilter
func miqt_exec_callback_QBarLegendMarker_eventFilter(self *C.QBarLegendMarker, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBarLegendMarker{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QBarLegendMarker) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QBarLegendMarker_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QBarLegendMarker) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QBarLegendMarker_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarLegendMarker_timerEvent
func miqt_exec_callback_QBarLegendMarker_timerEvent(self *C.QBarLegendMarker, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QBarLegendMarker{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QBarLegendMarker) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QBarLegendMarker_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QBarLegendMarker) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QBarLegendMarker_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarLegendMarker_childEvent
func miqt_exec_callback_QBarLegendMarker_childEvent(self *C.QBarLegendMarker, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QBarLegendMarker{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QBarLegendMarker) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QBarLegendMarker_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QBarLegendMarker) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QBarLegendMarker_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarLegendMarker_customEvent
func miqt_exec_callback_QBarLegendMarker_customEvent(self *C.QBarLegendMarker, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QBarLegendMarker{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QBarLegendMarker) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QBarLegendMarker_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBarLegendMarker) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBarLegendMarker_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarLegendMarker_connectNotify
func miqt_exec_callback_QBarLegendMarker_connectNotify(self *C.QBarLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBarLegendMarker{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QBarLegendMarker) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QBarLegendMarker_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBarLegendMarker) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBarLegendMarker_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarLegendMarker_disconnectNotify
func miqt_exec_callback_QBarLegendMarker_disconnectNotify(self *C.QBarLegendMarker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBarLegendMarker{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QBarLegendMarker) Delete() {
	C.QBarLegendMarker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBarLegendMarker) GoGC() {
	runtime.SetFinalizer(this, func(this *QBarLegendMarker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
