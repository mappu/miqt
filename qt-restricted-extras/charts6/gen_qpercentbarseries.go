package charts6

/*

#include "gen_qpercentbarseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPercentBarSeries struct {
	h *C.QPercentBarSeries
	*QAbstractBarSeries
}

func (this *QPercentBarSeries) cPointer() *C.QPercentBarSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPercentBarSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPercentBarSeries constructs the type using only CGO pointers.
func newQPercentBarSeries(h *C.QPercentBarSeries) *QPercentBarSeries {
	if h == nil {
		return nil
	}
	var outptr_QAbstractBarSeries *C.QAbstractBarSeries = nil
	C.QPercentBarSeries_virtbase(h, &outptr_QAbstractBarSeries)

	return &QPercentBarSeries{h: h,
		QAbstractBarSeries: newQAbstractBarSeries(outptr_QAbstractBarSeries)}
}

// UnsafeNewQPercentBarSeries constructs the type using only unsafe pointers.
func UnsafeNewQPercentBarSeries(h unsafe.Pointer) *QPercentBarSeries {
	return newQPercentBarSeries((*C.QPercentBarSeries)(h))
}

// NewQPercentBarSeries constructs a new QPercentBarSeries object.
func NewQPercentBarSeries() *QPercentBarSeries {

	return newQPercentBarSeries(C.QPercentBarSeries_new())
}

// NewQPercentBarSeries2 constructs a new QPercentBarSeries object.
func NewQPercentBarSeries2(parent *qt6.QObject) *QPercentBarSeries {

	return newQPercentBarSeries(C.QPercentBarSeries_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QPercentBarSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPercentBarSeries_metaObject(this.h)))
}

func (this *QPercentBarSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPercentBarSeries_metacast(this.h, param1_Cstring))
}

func QPercentBarSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPercentBarSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPercentBarSeries) Type() QAbstractSeries__SeriesType {
	return (QAbstractSeries__SeriesType)(C.QPercentBarSeries_type(this.h))
}

func QPercentBarSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPercentBarSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPercentBarSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPercentBarSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QPercentBarSeries that was directly constructed.
func (this *QPercentBarSeries) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPercentBarSeries_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPercentBarSeries that was directly constructed.
func (this *QPercentBarSeries) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPercentBarSeries_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPercentBarSeries that was directly constructed.
func (this *QPercentBarSeries) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPercentBarSeries_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPercentBarSeries that was directly constructed.
func (this *QPercentBarSeries) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPercentBarSeries_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPercentBarSeries) callVirtualBase_Type() QAbstractSeries__SeriesType {

	return (QAbstractSeries__SeriesType)(C.QPercentBarSeries_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QPercentBarSeries) OnType(slot func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType) {
	ok := C.QPercentBarSeries_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPercentBarSeries_type
func miqt_exec_callback_QPercentBarSeries_type(self *C.QPercentBarSeries, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPercentBarSeries{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QPercentBarSeries) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPercentBarSeries_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPercentBarSeries) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPercentBarSeries_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPercentBarSeries_event
func miqt_exec_callback_QPercentBarSeries_event(self *C.QPercentBarSeries, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPercentBarSeries{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPercentBarSeries) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QPercentBarSeries_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPercentBarSeries) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QPercentBarSeries_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPercentBarSeries_eventFilter
func miqt_exec_callback_QPercentBarSeries_eventFilter(self *C.QPercentBarSeries, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPercentBarSeries{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPercentBarSeries) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPercentBarSeries_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPercentBarSeries) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPercentBarSeries_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPercentBarSeries_timerEvent
func miqt_exec_callback_QPercentBarSeries_timerEvent(self *C.QPercentBarSeries, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPercentBarSeries{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPercentBarSeries) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPercentBarSeries_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPercentBarSeries) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPercentBarSeries_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPercentBarSeries_childEvent
func miqt_exec_callback_QPercentBarSeries_childEvent(self *C.QPercentBarSeries, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPercentBarSeries{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPercentBarSeries) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPercentBarSeries_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPercentBarSeries) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPercentBarSeries_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPercentBarSeries_customEvent
func miqt_exec_callback_QPercentBarSeries_customEvent(self *C.QPercentBarSeries, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPercentBarSeries{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPercentBarSeries) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPercentBarSeries_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPercentBarSeries) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPercentBarSeries_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPercentBarSeries_connectNotify
func miqt_exec_callback_QPercentBarSeries_connectNotify(self *C.QPercentBarSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPercentBarSeries{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPercentBarSeries) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPercentBarSeries_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPercentBarSeries) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPercentBarSeries_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPercentBarSeries_disconnectNotify
func miqt_exec_callback_QPercentBarSeries_disconnectNotify(self *C.QPercentBarSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPercentBarSeries{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPercentBarSeries) Delete() {
	C.QPercentBarSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPercentBarSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QPercentBarSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
