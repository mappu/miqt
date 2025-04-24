package pdf

/*

#include "gen_qpdfpagenavigator.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPdfPageNavigator struct {
	h *C.QPdfPageNavigator
	*qt6.QObject
}

func (this *QPdfPageNavigator) cPointer() *C.QPdfPageNavigator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfPageNavigator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfPageNavigator constructs the type using only CGO pointers.
func newQPdfPageNavigator(h *C.QPdfPageNavigator) *QPdfPageNavigator {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QPdfPageNavigator_virtbase(h, &outptr_QObject)

	return &QPdfPageNavigator{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQPdfPageNavigator constructs the type using only unsafe pointers.
func UnsafeNewQPdfPageNavigator(h unsafe.Pointer) *QPdfPageNavigator {
	return newQPdfPageNavigator((*C.QPdfPageNavigator)(h))
}

// NewQPdfPageNavigator constructs a new QPdfPageNavigator object.
func NewQPdfPageNavigator() *QPdfPageNavigator {

	return newQPdfPageNavigator(C.QPdfPageNavigator_new())
}

// NewQPdfPageNavigator2 constructs a new QPdfPageNavigator object.
func NewQPdfPageNavigator2(parent *qt6.QObject) *QPdfPageNavigator {

	return newQPdfPageNavigator(C.QPdfPageNavigator_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QPdfPageNavigator) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPdfPageNavigator_metaObject(this.h)))
}

func (this *QPdfPageNavigator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPdfPageNavigator_metacast(this.h, param1_Cstring))
}

func QPdfPageNavigator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageNavigator_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfPageNavigator) CurrentPage() int {
	return (int)(C.QPdfPageNavigator_currentPage(this.h))
}

func (this *QPdfPageNavigator) CurrentLocation() *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QPdfPageNavigator_currentLocation(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfPageNavigator) CurrentZoom() float64 {
	return (float64)(C.QPdfPageNavigator_currentZoom(this.h))
}

func (this *QPdfPageNavigator) BackAvailable() bool {
	return (bool)(C.QPdfPageNavigator_backAvailable(this.h))
}

func (this *QPdfPageNavigator) ForwardAvailable() bool {
	return (bool)(C.QPdfPageNavigator_forwardAvailable(this.h))
}

func (this *QPdfPageNavigator) Clear() {
	C.QPdfPageNavigator_clear(this.h)
}

func (this *QPdfPageNavigator) Jump(destination QPdfLink) {
	C.QPdfPageNavigator_jump(this.h, destination.cPointer())
}

func (this *QPdfPageNavigator) Jump2(page int, location *qt6.QPointF) {
	C.QPdfPageNavigator_jump2(this.h, (C.int)(page), (*C.QPointF)(location.UnsafePointer()))
}

func (this *QPdfPageNavigator) Update(page int, location *qt6.QPointF, zoom float64) {
	C.QPdfPageNavigator_update(this.h, (C.int)(page), (*C.QPointF)(location.UnsafePointer()), (C.double)(zoom))
}

func (this *QPdfPageNavigator) Forward() {
	C.QPdfPageNavigator_forward(this.h)
}

func (this *QPdfPageNavigator) Back() {
	C.QPdfPageNavigator_back(this.h)
}

func (this *QPdfPageNavigator) CurrentPageChanged(page int) {
	C.QPdfPageNavigator_currentPageChanged(this.h, (C.int)(page))
}
func (this *QPdfPageNavigator) OnCurrentPageChanged(slot func(page int)) {
	C.QPdfPageNavigator_connect_currentPageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigator_currentPageChanged
func miqt_exec_callback_QPdfPageNavigator_currentPageChanged(cb C.intptr_t, page C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(page int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(page)

	gofunc(slotval1)
}

func (this *QPdfPageNavigator) CurrentLocationChanged(location qt6.QPointF) {
	C.QPdfPageNavigator_currentLocationChanged(this.h, (*C.QPointF)(location.UnsafePointer()))
}
func (this *QPdfPageNavigator) OnCurrentLocationChanged(slot func(location qt6.QPointF)) {
	C.QPdfPageNavigator_connect_currentLocationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigator_currentLocationChanged
func miqt_exec_callback_QPdfPageNavigator_currentLocationChanged(cb C.intptr_t, location *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(location qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	location_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(location))
	location_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *location_goptr

	gofunc(slotval1)
}

func (this *QPdfPageNavigator) CurrentZoomChanged(zoom float64) {
	C.QPdfPageNavigator_currentZoomChanged(this.h, (C.double)(zoom))
}
func (this *QPdfPageNavigator) OnCurrentZoomChanged(slot func(zoom float64)) {
	C.QPdfPageNavigator_connect_currentZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigator_currentZoomChanged
func miqt_exec_callback_QPdfPageNavigator_currentZoomChanged(cb C.intptr_t, zoom C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(zoom float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(zoom)

	gofunc(slotval1)
}

func (this *QPdfPageNavigator) BackAvailableChanged(available bool) {
	C.QPdfPageNavigator_backAvailableChanged(this.h, (C.bool)(available))
}
func (this *QPdfPageNavigator) OnBackAvailableChanged(slot func(available bool)) {
	C.QPdfPageNavigator_connect_backAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigator_backAvailableChanged
func miqt_exec_callback_QPdfPageNavigator_backAvailableChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QPdfPageNavigator) ForwardAvailableChanged(available bool) {
	C.QPdfPageNavigator_forwardAvailableChanged(this.h, (C.bool)(available))
}
func (this *QPdfPageNavigator) OnForwardAvailableChanged(slot func(available bool)) {
	C.QPdfPageNavigator_connect_forwardAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigator_forwardAvailableChanged
func miqt_exec_callback_QPdfPageNavigator_forwardAvailableChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QPdfPageNavigator) Jumped(current QPdfLink) {
	C.QPdfPageNavigator_jumped(this.h, current.cPointer())
}
func (this *QPdfPageNavigator) OnJumped(slot func(current QPdfLink)) {
	C.QPdfPageNavigator_connect_jumped(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigator_jumped
func miqt_exec_callback_QPdfPageNavigator_jumped(cb C.intptr_t, current *C.QPdfLink) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current QPdfLink))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	current_goptr := newQPdfLink(current)
	current_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *current_goptr

	gofunc(slotval1)
}

func QPdfPageNavigator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageNavigator_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfPageNavigator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageNavigator_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfPageNavigator) Jump3(page int, location *qt6.QPointF, zoom float64) {
	C.QPdfPageNavigator_jump3(this.h, (C.int)(page), (*C.QPointF)(location.UnsafePointer()), (C.double)(zoom))
}

// CurrentLink can only be called from a QPdfPageNavigator that was directly constructed.
func (this *QPdfPageNavigator) CurrentLink() QPdfLink {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPdfLink(C.QPdfPageNavigator_protectedbase_currentLink(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QPdfPageNavigator that was directly constructed.
func (this *QPdfPageNavigator) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPdfPageNavigator_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPdfPageNavigator that was directly constructed.
func (this *QPdfPageNavigator) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfPageNavigator_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPdfPageNavigator that was directly constructed.
func (this *QPdfPageNavigator) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfPageNavigator_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPdfPageNavigator that was directly constructed.
func (this *QPdfPageNavigator) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfPageNavigator_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPdfPageNavigator) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPdfPageNavigator_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfPageNavigator) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPdfPageNavigator_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigator_event
func miqt_exec_callback_QPdfPageNavigator_event(self *C.QPdfPageNavigator, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfPageNavigator{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfPageNavigator) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QPdfPageNavigator_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfPageNavigator) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QPdfPageNavigator_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigator_eventFilter
func miqt_exec_callback_QPdfPageNavigator_eventFilter(self *C.QPdfPageNavigator, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfPageNavigator{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPdfPageNavigator) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPdfPageNavigator_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPdfPageNavigator) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPdfPageNavigator_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigator_timerEvent
func miqt_exec_callback_QPdfPageNavigator_timerEvent(self *C.QPdfPageNavigator, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPdfPageNavigator{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPdfPageNavigator) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPdfPageNavigator_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPdfPageNavigator) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPdfPageNavigator_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigator_childEvent
func miqt_exec_callback_QPdfPageNavigator_childEvent(self *C.QPdfPageNavigator, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPdfPageNavigator{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPdfPageNavigator) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPdfPageNavigator_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPdfPageNavigator) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPdfPageNavigator_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigator_customEvent
func miqt_exec_callback_QPdfPageNavigator_customEvent(self *C.QPdfPageNavigator, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPdfPageNavigator{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPdfPageNavigator) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPdfPageNavigator_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfPageNavigator) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPdfPageNavigator_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigator_connectNotify
func miqt_exec_callback_QPdfPageNavigator_connectNotify(self *C.QPdfPageNavigator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfPageNavigator{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPdfPageNavigator) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPdfPageNavigator_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfPageNavigator) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPdfPageNavigator_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigator_disconnectNotify
func miqt_exec_callback_QPdfPageNavigator_disconnectNotify(self *C.QPdfPageNavigator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfPageNavigator{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPdfPageNavigator) Delete() {
	C.QPdfPageNavigator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfPageNavigator) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfPageNavigator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
