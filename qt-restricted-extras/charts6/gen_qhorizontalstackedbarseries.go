package charts6

/*

#include "gen_qhorizontalstackedbarseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHorizontalStackedBarSeries struct {
	h *C.QHorizontalStackedBarSeries
	*QAbstractBarSeries
}

func (this *QHorizontalStackedBarSeries) cPointer() *C.QHorizontalStackedBarSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHorizontalStackedBarSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHorizontalStackedBarSeries constructs the type using only CGO pointers.
func newQHorizontalStackedBarSeries(h *C.QHorizontalStackedBarSeries) *QHorizontalStackedBarSeries {
	if h == nil {
		return nil
	}
	var outptr_QAbstractBarSeries *C.QAbstractBarSeries = nil
	C.QHorizontalStackedBarSeries_virtbase(h, &outptr_QAbstractBarSeries)

	return &QHorizontalStackedBarSeries{h: h,
		QAbstractBarSeries: newQAbstractBarSeries(outptr_QAbstractBarSeries)}
}

// UnsafeNewQHorizontalStackedBarSeries constructs the type using only unsafe pointers.
func UnsafeNewQHorizontalStackedBarSeries(h unsafe.Pointer) *QHorizontalStackedBarSeries {
	return newQHorizontalStackedBarSeries((*C.QHorizontalStackedBarSeries)(h))
}

// NewQHorizontalStackedBarSeries constructs a new QHorizontalStackedBarSeries object.
func NewQHorizontalStackedBarSeries() *QHorizontalStackedBarSeries {

	return newQHorizontalStackedBarSeries(C.QHorizontalStackedBarSeries_new())
}

// NewQHorizontalStackedBarSeries2 constructs a new QHorizontalStackedBarSeries object.
func NewQHorizontalStackedBarSeries2(parent *qt6.QObject) *QHorizontalStackedBarSeries {

	return newQHorizontalStackedBarSeries(C.QHorizontalStackedBarSeries_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QHorizontalStackedBarSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QHorizontalStackedBarSeries_metaObject(this.h)))
}

func (this *QHorizontalStackedBarSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHorizontalStackedBarSeries_metacast(this.h, param1_Cstring))
}

func QHorizontalStackedBarSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHorizontalStackedBarSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHorizontalStackedBarSeries) Type() QAbstractSeries__SeriesType {
	return (QAbstractSeries__SeriesType)(C.QHorizontalStackedBarSeries_type(this.h))
}

func QHorizontalStackedBarSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHorizontalStackedBarSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHorizontalStackedBarSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHorizontalStackedBarSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QHorizontalStackedBarSeries that was directly constructed.
func (this *QHorizontalStackedBarSeries) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QHorizontalStackedBarSeries_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QHorizontalStackedBarSeries that was directly constructed.
func (this *QHorizontalStackedBarSeries) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHorizontalStackedBarSeries_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QHorizontalStackedBarSeries that was directly constructed.
func (this *QHorizontalStackedBarSeries) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHorizontalStackedBarSeries_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QHorizontalStackedBarSeries that was directly constructed.
func (this *QHorizontalStackedBarSeries) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHorizontalStackedBarSeries_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QHorizontalStackedBarSeries) callVirtualBase_Type() QAbstractSeries__SeriesType {

	return (QAbstractSeries__SeriesType)(C.QHorizontalStackedBarSeries_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QHorizontalStackedBarSeries) OnType(slot func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType) {
	ok := C.QHorizontalStackedBarSeries_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHorizontalStackedBarSeries_type
func miqt_exec_callback_QHorizontalStackedBarSeries_type(self *C.QHorizontalStackedBarSeries, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHorizontalStackedBarSeries{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QHorizontalStackedBarSeries) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QHorizontalStackedBarSeries_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHorizontalStackedBarSeries) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QHorizontalStackedBarSeries_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHorizontalStackedBarSeries_event
func miqt_exec_callback_QHorizontalStackedBarSeries_event(self *C.QHorizontalStackedBarSeries, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHorizontalStackedBarSeries{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHorizontalStackedBarSeries) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QHorizontalStackedBarSeries_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHorizontalStackedBarSeries) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QHorizontalStackedBarSeries_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHorizontalStackedBarSeries_eventFilter
func miqt_exec_callback_QHorizontalStackedBarSeries_eventFilter(self *C.QHorizontalStackedBarSeries, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHorizontalStackedBarSeries{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHorizontalStackedBarSeries) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QHorizontalStackedBarSeries_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QHorizontalStackedBarSeries) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QHorizontalStackedBarSeries_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHorizontalStackedBarSeries_timerEvent
func miqt_exec_callback_QHorizontalStackedBarSeries_timerEvent(self *C.QHorizontalStackedBarSeries, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QHorizontalStackedBarSeries{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHorizontalStackedBarSeries) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QHorizontalStackedBarSeries_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QHorizontalStackedBarSeries) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QHorizontalStackedBarSeries_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHorizontalStackedBarSeries_childEvent
func miqt_exec_callback_QHorizontalStackedBarSeries_childEvent(self *C.QHorizontalStackedBarSeries, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QHorizontalStackedBarSeries{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHorizontalStackedBarSeries) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QHorizontalStackedBarSeries_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHorizontalStackedBarSeries) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHorizontalStackedBarSeries_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHorizontalStackedBarSeries_customEvent
func miqt_exec_callback_QHorizontalStackedBarSeries_customEvent(self *C.QHorizontalStackedBarSeries, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHorizontalStackedBarSeries{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHorizontalStackedBarSeries) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QHorizontalStackedBarSeries_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHorizontalStackedBarSeries) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHorizontalStackedBarSeries_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHorizontalStackedBarSeries_connectNotify
func miqt_exec_callback_QHorizontalStackedBarSeries_connectNotify(self *C.QHorizontalStackedBarSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHorizontalStackedBarSeries{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHorizontalStackedBarSeries) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QHorizontalStackedBarSeries_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHorizontalStackedBarSeries) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHorizontalStackedBarSeries_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHorizontalStackedBarSeries_disconnectNotify
func miqt_exec_callback_QHorizontalStackedBarSeries_disconnectNotify(self *C.QHorizontalStackedBarSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHorizontalStackedBarSeries{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHorizontalStackedBarSeries) Delete() {
	C.QHorizontalStackedBarSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHorizontalStackedBarSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QHorizontalStackedBarSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
