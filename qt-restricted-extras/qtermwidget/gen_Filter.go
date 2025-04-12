package qtermwidget

/*

#include "gen_Filter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type Konsole__Filter__HotSpot__Type int

const (
	Konsole__Filter__HotSpot__NotSpecified Konsole__Filter__HotSpot__Type = 0
	Konsole__Filter__HotSpot__Link         Konsole__Filter__HotSpot__Type = 1
	Konsole__Filter__HotSpot__Marker       Konsole__Filter__HotSpot__Type = 2
)

type Konsole__Filter struct {
	h *C.Konsole__Filter
	*qt.QObject
}

func (this *Konsole__Filter) cPointer() *C.Konsole__Filter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__Filter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__Filter constructs the type using only CGO pointers.
func newKonsole__Filter(h *C.Konsole__Filter) *Konsole__Filter {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.Konsole__Filter_virtbase(h, &outptr_QObject)

	return &Konsole__Filter{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewKonsole__Filter constructs the type using only unsafe pointers.
func UnsafeNewKonsole__Filter(h unsafe.Pointer) *Konsole__Filter {
	return newKonsole__Filter((*C.Konsole__Filter)(h))
}

// NewKonsole__Filter constructs a new Konsole::Filter object.
func NewKonsole__Filter() *Konsole__Filter {

	return newKonsole__Filter(C.Konsole__Filter_new())
}

func (this *Konsole__Filter) Process() {
	C.Konsole__Filter_process(this.h)
}

func (this *Konsole__Filter) Reset() {
	C.Konsole__Filter_reset(this.h)
}

func (this *Konsole__Filter) HotSpotAt(line int, column int) *Konsole__Filter__HotSpot {
	return newKonsole__Filter__HotSpot(C.Konsole__Filter_hotSpotAt(this.h, (C.int)(line), (C.int)(column)))
}

func (this *Konsole__Filter) HotSpots() []*Konsole__Filter__HotSpot {
	var _ma C.struct_miqt_array = C.Konsole__Filter_hotSpots(this.h)
	_ret := make([]*Konsole__Filter__HotSpot, int(_ma.len))
	_outCast := (*[0xffff]*C.Konsole__Filter__HotSpot)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newKonsole__Filter__HotSpot(_outCast[i])
	}
	return _ret
}

func (this *Konsole__Filter) HotSpotsAtLine(line int) []*Konsole__Filter__HotSpot {
	var _ma C.struct_miqt_array = C.Konsole__Filter_hotSpotsAtLine(this.h, (C.int)(line))
	_ret := make([]*Konsole__Filter__HotSpot, int(_ma.len))
	_outCast := (*[0xffff]*C.Konsole__Filter__HotSpot)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newKonsole__Filter__HotSpot(_outCast[i])
	}
	return _ret
}

// AddHotSpot can only be called from a Konsole__Filter that was directly constructed.
func (this *Konsole__Filter) AddHotSpot(param1 *Konsole__Filter__HotSpot) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__Filter_protectedbase_addHotSpot(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Buffer can only be called from a Konsole__Filter that was directly constructed.
func (this *Konsole__Filter) Buffer() string {

	var _dynamic_cast_ok C.bool = false
	var _ms C.struct_miqt_string = C.Konsole__Filter_protectedbase_buffer(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	_method_ret := _ret
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// GetLineColumn can only be called from a Konsole__Filter that was directly constructed.
func (this *Konsole__Filter) GetLineColumn(position int, startLine *int, startColumn *int) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__Filter_protectedbase_getLineColumn(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(position), (*C.int)(unsafe.Pointer(startLine)), (*C.int)(unsafe.Pointer(startColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a Konsole__Filter that was directly constructed.
func (this *Konsole__Filter) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.Konsole__Filter_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a Konsole__Filter that was directly constructed.
func (this *Konsole__Filter) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.Konsole__Filter_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a Konsole__Filter that was directly constructed.
func (this *Konsole__Filter) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.Konsole__Filter_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a Konsole__Filter that was directly constructed.
func (this *Konsole__Filter) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.Konsole__Filter_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *Konsole__Filter) OnProcess(slot func()) {
	ok := C.Konsole__Filter_override_virtual_process(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter_process
func miqt_exec_callback_Konsole__Filter_process(self *C.Konsole__Filter, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

func (this *Konsole__Filter) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.Konsole__Filter_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *Konsole__Filter) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.Konsole__Filter_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter_event
func miqt_exec_callback_Konsole__Filter_event(self *C.Konsole__Filter, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&Konsole__Filter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *Konsole__Filter) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.Konsole__Filter_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *Konsole__Filter) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.Konsole__Filter_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter_eventFilter
func miqt_exec_callback_Konsole__Filter_eventFilter(self *C.Konsole__Filter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&Konsole__Filter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *Konsole__Filter) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.Konsole__Filter_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *Konsole__Filter) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.Konsole__Filter_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter_timerEvent
func miqt_exec_callback_Konsole__Filter_timerEvent(self *C.Konsole__Filter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&Konsole__Filter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *Konsole__Filter) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.Konsole__Filter_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *Konsole__Filter) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.Konsole__Filter_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter_childEvent
func miqt_exec_callback_Konsole__Filter_childEvent(self *C.Konsole__Filter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&Konsole__Filter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *Konsole__Filter) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.Konsole__Filter_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *Konsole__Filter) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.Konsole__Filter_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter_customEvent
func miqt_exec_callback_Konsole__Filter_customEvent(self *C.Konsole__Filter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&Konsole__Filter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *Konsole__Filter) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.Konsole__Filter_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *Konsole__Filter) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.Konsole__Filter_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter_connectNotify
func miqt_exec_callback_Konsole__Filter_connectNotify(self *C.Konsole__Filter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&Konsole__Filter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *Konsole__Filter) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.Konsole__Filter_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *Konsole__Filter) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.Konsole__Filter_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter_disconnectNotify
func miqt_exec_callback_Konsole__Filter_disconnectNotify(self *C.Konsole__Filter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&Konsole__Filter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *Konsole__Filter) Delete() {
	C.Konsole__Filter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__Filter) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__Filter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__RegExpFilter struct {
	h *C.Konsole__RegExpFilter
	*Konsole__Filter
}

func (this *Konsole__RegExpFilter) cPointer() *C.Konsole__RegExpFilter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__RegExpFilter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__RegExpFilter constructs the type using only CGO pointers.
func newKonsole__RegExpFilter(h *C.Konsole__RegExpFilter) *Konsole__RegExpFilter {
	if h == nil {
		return nil
	}
	var outptr_Konsole__Filter *C.Konsole__Filter = nil
	C.Konsole__RegExpFilter_virtbase(h, &outptr_Konsole__Filter)

	return &Konsole__RegExpFilter{h: h,
		Konsole__Filter: newKonsole__Filter(outptr_Konsole__Filter)}
}

// UnsafeNewKonsole__RegExpFilter constructs the type using only unsafe pointers.
func UnsafeNewKonsole__RegExpFilter(h unsafe.Pointer) *Konsole__RegExpFilter {
	return newKonsole__RegExpFilter((*C.Konsole__RegExpFilter)(h))
}

// NewKonsole__RegExpFilter constructs a new Konsole::RegExpFilter object.
func NewKonsole__RegExpFilter() *Konsole__RegExpFilter {

	return newKonsole__RegExpFilter(C.Konsole__RegExpFilter_new())
}

func (this *Konsole__RegExpFilter) SetRegExp(text *qt.QRegExp) {
	C.Konsole__RegExpFilter_setRegExp(this.h, (*C.QRegExp)(text.UnsafePointer()))
}

func (this *Konsole__RegExpFilter) RegExp() *qt.QRegExp {
	_goptr := qt.UnsafeNewQRegExp(unsafe.Pointer(C.Konsole__RegExpFilter_regExp(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Konsole__RegExpFilter) Process() {
	C.Konsole__RegExpFilter_process(this.h)
}

// AddHotSpot can only be called from a Konsole__RegExpFilter that was directly constructed.
func (this *Konsole__RegExpFilter) AddHotSpot(param1 *Konsole__Filter__HotSpot) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__RegExpFilter_protectedbase_addHotSpot(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Buffer can only be called from a Konsole__RegExpFilter that was directly constructed.
func (this *Konsole__RegExpFilter) Buffer() string {

	var _dynamic_cast_ok C.bool = false
	var _ms C.struct_miqt_string = C.Konsole__RegExpFilter_protectedbase_buffer(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	_method_ret := _ret
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// GetLineColumn can only be called from a Konsole__RegExpFilter that was directly constructed.
func (this *Konsole__RegExpFilter) GetLineColumn(position int, startLine *int, startColumn *int) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__RegExpFilter_protectedbase_getLineColumn(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(position), (*C.int)(unsafe.Pointer(startLine)), (*C.int)(unsafe.Pointer(startColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a Konsole__RegExpFilter that was directly constructed.
func (this *Konsole__RegExpFilter) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.Konsole__RegExpFilter_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a Konsole__RegExpFilter that was directly constructed.
func (this *Konsole__RegExpFilter) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.Konsole__RegExpFilter_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a Konsole__RegExpFilter that was directly constructed.
func (this *Konsole__RegExpFilter) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.Konsole__RegExpFilter_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a Konsole__RegExpFilter that was directly constructed.
func (this *Konsole__RegExpFilter) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.Konsole__RegExpFilter_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *Konsole__RegExpFilter) callVirtualBase_Process() {

	C.Konsole__RegExpFilter_virtualbase_process(unsafe.Pointer(this.h))

}
func (this *Konsole__RegExpFilter) OnProcess(slot func(super func())) {
	ok := C.Konsole__RegExpFilter_override_virtual_process(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter_process
func miqt_exec_callback_Konsole__RegExpFilter_process(self *C.Konsole__RegExpFilter, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&Konsole__RegExpFilter{h: self}).callVirtualBase_Process)

}

func (this *Konsole__RegExpFilter) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.Konsole__RegExpFilter_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *Konsole__RegExpFilter) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.Konsole__RegExpFilter_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter_event
func miqt_exec_callback_Konsole__RegExpFilter_event(self *C.Konsole__RegExpFilter, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&Konsole__RegExpFilter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *Konsole__RegExpFilter) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.Konsole__RegExpFilter_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *Konsole__RegExpFilter) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.Konsole__RegExpFilter_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter_eventFilter
func miqt_exec_callback_Konsole__RegExpFilter_eventFilter(self *C.Konsole__RegExpFilter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&Konsole__RegExpFilter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *Konsole__RegExpFilter) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.Konsole__RegExpFilter_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *Konsole__RegExpFilter) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.Konsole__RegExpFilter_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter_timerEvent
func miqt_exec_callback_Konsole__RegExpFilter_timerEvent(self *C.Konsole__RegExpFilter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&Konsole__RegExpFilter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *Konsole__RegExpFilter) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.Konsole__RegExpFilter_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *Konsole__RegExpFilter) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.Konsole__RegExpFilter_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter_childEvent
func miqt_exec_callback_Konsole__RegExpFilter_childEvent(self *C.Konsole__RegExpFilter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&Konsole__RegExpFilter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *Konsole__RegExpFilter) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.Konsole__RegExpFilter_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *Konsole__RegExpFilter) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.Konsole__RegExpFilter_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter_customEvent
func miqt_exec_callback_Konsole__RegExpFilter_customEvent(self *C.Konsole__RegExpFilter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&Konsole__RegExpFilter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *Konsole__RegExpFilter) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.Konsole__RegExpFilter_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *Konsole__RegExpFilter) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.Konsole__RegExpFilter_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter_connectNotify
func miqt_exec_callback_Konsole__RegExpFilter_connectNotify(self *C.Konsole__RegExpFilter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&Konsole__RegExpFilter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *Konsole__RegExpFilter) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.Konsole__RegExpFilter_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *Konsole__RegExpFilter) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.Konsole__RegExpFilter_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter_disconnectNotify
func miqt_exec_callback_Konsole__RegExpFilter_disconnectNotify(self *C.Konsole__RegExpFilter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&Konsole__RegExpFilter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *Konsole__RegExpFilter) Delete() {
	C.Konsole__RegExpFilter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__RegExpFilter) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__RegExpFilter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__UrlFilter struct {
	h *C.Konsole__UrlFilter
	*Konsole__RegExpFilter
}

func (this *Konsole__UrlFilter) cPointer() *C.Konsole__UrlFilter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__UrlFilter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__UrlFilter constructs the type using only CGO pointers.
func newKonsole__UrlFilter(h *C.Konsole__UrlFilter) *Konsole__UrlFilter {
	if h == nil {
		return nil
	}
	var outptr_Konsole__RegExpFilter *C.Konsole__RegExpFilter = nil
	C.Konsole__UrlFilter_virtbase(h, &outptr_Konsole__RegExpFilter)

	return &Konsole__UrlFilter{h: h,
		Konsole__RegExpFilter: newKonsole__RegExpFilter(outptr_Konsole__RegExpFilter)}
}

// UnsafeNewKonsole__UrlFilter constructs the type using only unsafe pointers.
func UnsafeNewKonsole__UrlFilter(h unsafe.Pointer) *Konsole__UrlFilter {
	return newKonsole__UrlFilter((*C.Konsole__UrlFilter)(h))
}

// NewKonsole__UrlFilter constructs a new Konsole::UrlFilter object.
func NewKonsole__UrlFilter() *Konsole__UrlFilter {

	return newKonsole__UrlFilter(C.Konsole__UrlFilter_new())
}

func (this *Konsole__UrlFilter) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.Konsole__UrlFilter_metaObject(this.h)))
}

func (this *Konsole__UrlFilter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.Konsole__UrlFilter_metacast(this.h, param1_Cstring))
}

func Konsole__UrlFilter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__UrlFilter_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__UrlFilter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__UrlFilter_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__UrlFilter) Activated(url *qt.QUrl, fromContextMenu bool) {
	C.Konsole__UrlFilter_activated(this.h, (*C.QUrl)(url.UnsafePointer()), (C.bool)(fromContextMenu))
}
func (this *Konsole__UrlFilter) OnActivated(slot func(url *qt.QUrl, fromContextMenu bool)) {
	C.Konsole__UrlFilter_connect_activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__UrlFilter_activated
func miqt_exec_callback_Konsole__UrlFilter_activated(cb C.intptr_t, url *C.QUrl, fromContextMenu C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt.QUrl, fromContextMenu bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	slotval2 := (bool)(fromContextMenu)

	gofunc(slotval1, slotval2)
}

func Konsole__UrlFilter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__UrlFilter_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__UrlFilter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__UrlFilter_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__UrlFilter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__UrlFilter_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__UrlFilter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__UrlFilter_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// AddHotSpot can only be called from a Konsole__UrlFilter that was directly constructed.
func (this *Konsole__UrlFilter) AddHotSpot(param1 *Konsole__Filter__HotSpot) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__UrlFilter_protectedbase_addHotSpot(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Buffer can only be called from a Konsole__UrlFilter that was directly constructed.
func (this *Konsole__UrlFilter) Buffer() string {

	var _dynamic_cast_ok C.bool = false
	var _ms C.struct_miqt_string = C.Konsole__UrlFilter_protectedbase_buffer(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	_method_ret := _ret
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// GetLineColumn can only be called from a Konsole__UrlFilter that was directly constructed.
func (this *Konsole__UrlFilter) GetLineColumn(position int, startLine *int, startColumn *int) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__UrlFilter_protectedbase_getLineColumn(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(position), (*C.int)(unsafe.Pointer(startLine)), (*C.int)(unsafe.Pointer(startColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a Konsole__UrlFilter that was directly constructed.
func (this *Konsole__UrlFilter) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.Konsole__UrlFilter_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a Konsole__UrlFilter that was directly constructed.
func (this *Konsole__UrlFilter) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.Konsole__UrlFilter_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a Konsole__UrlFilter that was directly constructed.
func (this *Konsole__UrlFilter) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.Konsole__UrlFilter_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a Konsole__UrlFilter that was directly constructed.
func (this *Konsole__UrlFilter) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.Konsole__UrlFilter_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *Konsole__UrlFilter) callVirtualBase_Process() {

	C.Konsole__UrlFilter_virtualbase_process(unsafe.Pointer(this.h))

}
func (this *Konsole__UrlFilter) OnProcess(slot func(super func())) {
	ok := C.Konsole__UrlFilter_override_virtual_process(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter_process
func miqt_exec_callback_Konsole__UrlFilter_process(self *C.Konsole__UrlFilter, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&Konsole__UrlFilter{h: self}).callVirtualBase_Process)

}

func (this *Konsole__UrlFilter) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.Konsole__UrlFilter_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *Konsole__UrlFilter) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.Konsole__UrlFilter_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter_event
func miqt_exec_callback_Konsole__UrlFilter_event(self *C.Konsole__UrlFilter, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&Konsole__UrlFilter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *Konsole__UrlFilter) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.Konsole__UrlFilter_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *Konsole__UrlFilter) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.Konsole__UrlFilter_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter_eventFilter
func miqt_exec_callback_Konsole__UrlFilter_eventFilter(self *C.Konsole__UrlFilter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&Konsole__UrlFilter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *Konsole__UrlFilter) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.Konsole__UrlFilter_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *Konsole__UrlFilter) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.Konsole__UrlFilter_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter_timerEvent
func miqt_exec_callback_Konsole__UrlFilter_timerEvent(self *C.Konsole__UrlFilter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&Konsole__UrlFilter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *Konsole__UrlFilter) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.Konsole__UrlFilter_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *Konsole__UrlFilter) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.Konsole__UrlFilter_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter_childEvent
func miqt_exec_callback_Konsole__UrlFilter_childEvent(self *C.Konsole__UrlFilter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&Konsole__UrlFilter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *Konsole__UrlFilter) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.Konsole__UrlFilter_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *Konsole__UrlFilter) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.Konsole__UrlFilter_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter_customEvent
func miqt_exec_callback_Konsole__UrlFilter_customEvent(self *C.Konsole__UrlFilter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&Konsole__UrlFilter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *Konsole__UrlFilter) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.Konsole__UrlFilter_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *Konsole__UrlFilter) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.Konsole__UrlFilter_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter_connectNotify
func miqt_exec_callback_Konsole__UrlFilter_connectNotify(self *C.Konsole__UrlFilter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&Konsole__UrlFilter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *Konsole__UrlFilter) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.Konsole__UrlFilter_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *Konsole__UrlFilter) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.Konsole__UrlFilter_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter_disconnectNotify
func miqt_exec_callback_Konsole__UrlFilter_disconnectNotify(self *C.Konsole__UrlFilter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&Konsole__UrlFilter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *Konsole__UrlFilter) Delete() {
	C.Konsole__UrlFilter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__UrlFilter) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__UrlFilter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__FilterObject struct {
	h *C.Konsole__FilterObject
	*qt.QObject
}

func (this *Konsole__FilterObject) cPointer() *C.Konsole__FilterObject {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__FilterObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__FilterObject constructs the type using only CGO pointers.
func newKonsole__FilterObject(h *C.Konsole__FilterObject) *Konsole__FilterObject {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.Konsole__FilterObject_virtbase(h, &outptr_QObject)

	return &Konsole__FilterObject{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewKonsole__FilterObject constructs the type using only unsafe pointers.
func UnsafeNewKonsole__FilterObject(h unsafe.Pointer) *Konsole__FilterObject {
	return newKonsole__FilterObject((*C.Konsole__FilterObject)(h))
}

func (this *Konsole__FilterObject) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.Konsole__FilterObject_metaObject(this.h)))
}

func (this *Konsole__FilterObject) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.Konsole__FilterObject_metacast(this.h, param1_Cstring))
}

func Konsole__FilterObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__FilterObject_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__FilterObject_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__FilterObject_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__FilterObject) EmitActivated(url *qt.QUrl, fromContextMenu bool) {
	C.Konsole__FilterObject_emitActivated(this.h, (*C.QUrl)(url.UnsafePointer()), (C.bool)(fromContextMenu))
}

func (this *Konsole__FilterObject) Activate() {
	C.Konsole__FilterObject_activate(this.h)
}

func (this *Konsole__FilterObject) Activated(url *qt.QUrl, fromContextMenu bool) {
	C.Konsole__FilterObject_activated(this.h, (*C.QUrl)(url.UnsafePointer()), (C.bool)(fromContextMenu))
}
func (this *Konsole__FilterObject) OnActivated(slot func(url *qt.QUrl, fromContextMenu bool)) {
	C.Konsole__FilterObject_connect_activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__FilterObject_activated
func miqt_exec_callback_Konsole__FilterObject_activated(cb C.intptr_t, url *C.QUrl, fromContextMenu C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt.QUrl, fromContextMenu bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	slotval2 := (bool)(fromContextMenu)

	gofunc(slotval1, slotval2)
}

func Konsole__FilterObject_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__FilterObject_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__FilterObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__FilterObject_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__FilterObject_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__FilterObject_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__FilterObject_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__FilterObject_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *Konsole__FilterObject) Delete() {
	C.Konsole__FilterObject_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__FilterObject) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__FilterObject) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__FilterChain struct {
	h *C.Konsole__FilterChain
}

func (this *Konsole__FilterChain) cPointer() *C.Konsole__FilterChain {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__FilterChain) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__FilterChain constructs the type using only CGO pointers.
func newKonsole__FilterChain(h *C.Konsole__FilterChain) *Konsole__FilterChain {
	if h == nil {
		return nil
	}

	return &Konsole__FilterChain{h: h}
}

// UnsafeNewKonsole__FilterChain constructs the type using only unsafe pointers.
func UnsafeNewKonsole__FilterChain(h unsafe.Pointer) *Konsole__FilterChain {
	return newKonsole__FilterChain((*C.Konsole__FilterChain)(h))
}

// NewKonsole__FilterChain constructs a new Konsole::FilterChain object.
func NewKonsole__FilterChain(param1 *Konsole__FilterChain) *Konsole__FilterChain {

	return newKonsole__FilterChain(C.Konsole__FilterChain_new(param1.cPointer()))
}

func (this *Konsole__FilterChain) AddFilter(filter *Konsole__Filter) {
	C.Konsole__FilterChain_addFilter(this.h, filter.cPointer())
}

func (this *Konsole__FilterChain) RemoveFilter(filter *Konsole__Filter) {
	C.Konsole__FilterChain_removeFilter(this.h, filter.cPointer())
}

func (this *Konsole__FilterChain) ContainsFilter(filter *Konsole__Filter) bool {
	return (bool)(C.Konsole__FilterChain_containsFilter(this.h, filter.cPointer()))
}

func (this *Konsole__FilterChain) Clear() {
	C.Konsole__FilterChain_clear(this.h)
}

func (this *Konsole__FilterChain) Reset() {
	C.Konsole__FilterChain_reset(this.h)
}

func (this *Konsole__FilterChain) Process() {
	C.Konsole__FilterChain_process(this.h)
}

func (this *Konsole__FilterChain) OperatorAssign(param1 *Konsole__FilterChain) {
	C.Konsole__FilterChain_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *Konsole__FilterChain) Delete() {
	C.Konsole__FilterChain_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__FilterChain) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__FilterChain) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__TerminalImageFilterChain struct {
	h *C.Konsole__TerminalImageFilterChain
	*Konsole__FilterChain
}

func (this *Konsole__TerminalImageFilterChain) cPointer() *C.Konsole__TerminalImageFilterChain {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__TerminalImageFilterChain) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__TerminalImageFilterChain constructs the type using only CGO pointers.
func newKonsole__TerminalImageFilterChain(h *C.Konsole__TerminalImageFilterChain) *Konsole__TerminalImageFilterChain {
	if h == nil {
		return nil
	}
	var outptr_Konsole__FilterChain *C.Konsole__FilterChain = nil
	C.Konsole__TerminalImageFilterChain_virtbase(h, &outptr_Konsole__FilterChain)

	return &Konsole__TerminalImageFilterChain{h: h,
		Konsole__FilterChain: newKonsole__FilterChain(outptr_Konsole__FilterChain)}
}

// UnsafeNewKonsole__TerminalImageFilterChain constructs the type using only unsafe pointers.
func UnsafeNewKonsole__TerminalImageFilterChain(h unsafe.Pointer) *Konsole__TerminalImageFilterChain {
	return newKonsole__TerminalImageFilterChain((*C.Konsole__TerminalImageFilterChain)(h))
}

// NewKonsole__TerminalImageFilterChain constructs a new Konsole::TerminalImageFilterChain object.
func NewKonsole__TerminalImageFilterChain() *Konsole__TerminalImageFilterChain {

	return newKonsole__TerminalImageFilterChain(C.Konsole__TerminalImageFilterChain_new())
}

// NewKonsole__TerminalImageFilterChain2 constructs a new Konsole::TerminalImageFilterChain object.
func NewKonsole__TerminalImageFilterChain2(param1 *Konsole__TerminalImageFilterChain) *Konsole__TerminalImageFilterChain {

	return newKonsole__TerminalImageFilterChain(C.Konsole__TerminalImageFilterChain_new2(param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *Konsole__TerminalImageFilterChain) Delete() {
	C.Konsole__TerminalImageFilterChain_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__TerminalImageFilterChain) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__TerminalImageFilterChain) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__Filter__HotSpot struct {
	h *C.Konsole__Filter__HotSpot
}

func (this *Konsole__Filter__HotSpot) cPointer() *C.Konsole__Filter__HotSpot {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__Filter__HotSpot) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__Filter__HotSpot constructs the type using only CGO pointers.
func newKonsole__Filter__HotSpot(h *C.Konsole__Filter__HotSpot) *Konsole__Filter__HotSpot {
	if h == nil {
		return nil
	}

	return &Konsole__Filter__HotSpot{h: h}
}

// UnsafeNewKonsole__Filter__HotSpot constructs the type using only unsafe pointers.
func UnsafeNewKonsole__Filter__HotSpot(h unsafe.Pointer) *Konsole__Filter__HotSpot {
	return newKonsole__Filter__HotSpot((*C.Konsole__Filter__HotSpot)(h))
}

// NewKonsole__Filter__HotSpot constructs a new Konsole::Filter::HotSpot object.
func NewKonsole__Filter__HotSpot(startLine int, startColumn int, endLine int, endColumn int) *Konsole__Filter__HotSpot {

	return newKonsole__Filter__HotSpot(C.Konsole__Filter__HotSpot_new((C.int)(startLine), (C.int)(startColumn), (C.int)(endLine), (C.int)(endColumn)))
}

// NewKonsole__Filter__HotSpot2 constructs a new Konsole::Filter::HotSpot object.
func NewKonsole__Filter__HotSpot2(param1 *Konsole__Filter__HotSpot) *Konsole__Filter__HotSpot {

	return newKonsole__Filter__HotSpot(C.Konsole__Filter__HotSpot_new2(param1.cPointer()))
}

func (this *Konsole__Filter__HotSpot) StartLine() int {
	return (int)(C.Konsole__Filter__HotSpot_startLine(this.h))
}

func (this *Konsole__Filter__HotSpot) EndLine() int {
	return (int)(C.Konsole__Filter__HotSpot_endLine(this.h))
}

func (this *Konsole__Filter__HotSpot) StartColumn() int {
	return (int)(C.Konsole__Filter__HotSpot_startColumn(this.h))
}

func (this *Konsole__Filter__HotSpot) EndColumn() int {
	return (int)(C.Konsole__Filter__HotSpot_endColumn(this.h))
}

func (this *Konsole__Filter__HotSpot) Type() Konsole__Filter__HotSpot__Type {
	return (Konsole__Filter__HotSpot__Type)(C.Konsole__Filter__HotSpot_type(this.h))
}

func (this *Konsole__Filter__HotSpot) Activate(action string) {
	action_ms := C.struct_miqt_string{}
	action_ms.data = C.CString(action)
	action_ms.len = C.size_t(len(action))
	defer C.free(unsafe.Pointer(action_ms.data))
	C.Konsole__Filter__HotSpot_activate(this.h, action_ms)
}

func (this *Konsole__Filter__HotSpot) Actions() []*qt.QAction {
	var _ma C.struct_miqt_array = C.Konsole__Filter__HotSpot_actions(this.h)
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

// SetType can only be called from a Konsole__Filter__HotSpot that was directly constructed.
func (this *Konsole__Filter__HotSpot) SetType(typeVal Konsole__Filter__HotSpot__Type) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__Filter__HotSpot_protectedbase_setType(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(typeVal))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}
func (this *Konsole__Filter__HotSpot) OnActivate(slot func(action string)) {
	ok := C.Konsole__Filter__HotSpot_override_virtual_activate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter__HotSpot_activate
func miqt_exec_callback_Konsole__Filter__HotSpot_activate(self *C.Konsole__Filter__HotSpot, cb C.intptr_t, action C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var action_ms C.struct_miqt_string = action
	action_ret := C.GoStringN(action_ms.data, C.int(int64(action_ms.len)))
	C.free(unsafe.Pointer(action_ms.data))
	slotval1 := action_ret

	gofunc(slotval1)

}

func (this *Konsole__Filter__HotSpot) callVirtualBase_Actions() []*qt.QAction {

	var _ma C.struct_miqt_array = C.Konsole__Filter__HotSpot_virtualbase_actions(unsafe.Pointer(this.h))
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret

}
func (this *Konsole__Filter__HotSpot) OnActions(slot func(super func() []*qt.QAction) []*qt.QAction) {
	ok := C.Konsole__Filter__HotSpot_override_virtual_actions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Filter__HotSpot_actions
func miqt_exec_callback_Konsole__Filter__HotSpot_actions(self *C.Konsole__Filter__HotSpot, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []*qt.QAction) []*qt.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&Konsole__Filter__HotSpot{h: self}).callVirtualBase_Actions)
	virtualReturn_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QAction)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *Konsole__Filter__HotSpot) Delete() {
	C.Konsole__Filter__HotSpot_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__Filter__HotSpot) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__Filter__HotSpot) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__RegExpFilter__HotSpot struct {
	h *C.Konsole__RegExpFilter__HotSpot
	*Konsole__Filter__HotSpot
}

func (this *Konsole__RegExpFilter__HotSpot) cPointer() *C.Konsole__RegExpFilter__HotSpot {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__RegExpFilter__HotSpot) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__RegExpFilter__HotSpot constructs the type using only CGO pointers.
func newKonsole__RegExpFilter__HotSpot(h *C.Konsole__RegExpFilter__HotSpot) *Konsole__RegExpFilter__HotSpot {
	if h == nil {
		return nil
	}
	var outptr_Konsole__Filter__HotSpot *C.Konsole__Filter__HotSpot = nil
	C.Konsole__RegExpFilter__HotSpot_virtbase(h, &outptr_Konsole__Filter__HotSpot)

	return &Konsole__RegExpFilter__HotSpot{h: h,
		Konsole__Filter__HotSpot: newKonsole__Filter__HotSpot(outptr_Konsole__Filter__HotSpot)}
}

// UnsafeNewKonsole__RegExpFilter__HotSpot constructs the type using only unsafe pointers.
func UnsafeNewKonsole__RegExpFilter__HotSpot(h unsafe.Pointer) *Konsole__RegExpFilter__HotSpot {
	return newKonsole__RegExpFilter__HotSpot((*C.Konsole__RegExpFilter__HotSpot)(h))
}

// NewKonsole__RegExpFilter__HotSpot constructs a new Konsole::RegExpFilter::HotSpot object.
func NewKonsole__RegExpFilter__HotSpot(startLine int, startColumn int, endLine int, endColumn int) *Konsole__RegExpFilter__HotSpot {

	return newKonsole__RegExpFilter__HotSpot(C.Konsole__RegExpFilter__HotSpot_new((C.int)(startLine), (C.int)(startColumn), (C.int)(endLine), (C.int)(endColumn)))
}

// NewKonsole__RegExpFilter__HotSpot2 constructs a new Konsole::RegExpFilter::HotSpot object.
func NewKonsole__RegExpFilter__HotSpot2(param1 *Konsole__RegExpFilter__HotSpot) *Konsole__RegExpFilter__HotSpot {

	return newKonsole__RegExpFilter__HotSpot(C.Konsole__RegExpFilter__HotSpot_new2(param1.cPointer()))
}

func (this *Konsole__RegExpFilter__HotSpot) Activate(action string) {
	action_ms := C.struct_miqt_string{}
	action_ms.data = C.CString(action)
	action_ms.len = C.size_t(len(action))
	defer C.free(unsafe.Pointer(action_ms.data))
	C.Konsole__RegExpFilter__HotSpot_activate(this.h, action_ms)
}

func (this *Konsole__RegExpFilter__HotSpot) SetCapturedTexts(texts []string) {
	texts_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(texts))))
	defer C.free(unsafe.Pointer(texts_CArray))
	for i := range texts {
		texts_i_ms := C.struct_miqt_string{}
		texts_i_ms.data = C.CString(texts[i])
		texts_i_ms.len = C.size_t(len(texts[i]))
		defer C.free(unsafe.Pointer(texts_i_ms.data))
		texts_CArray[i] = texts_i_ms
	}
	texts_ma := C.struct_miqt_array{len: C.size_t(len(texts)), data: unsafe.Pointer(texts_CArray)}
	C.Konsole__RegExpFilter__HotSpot_setCapturedTexts(this.h, texts_ma)
}

func (this *Konsole__RegExpFilter__HotSpot) CapturedTexts() []string {
	var _ma C.struct_miqt_array = C.Konsole__RegExpFilter__HotSpot_capturedTexts(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

// SetType can only be called from a Konsole__RegExpFilter__HotSpot that was directly constructed.
func (this *Konsole__RegExpFilter__HotSpot) SetType(typeVal Konsole__Filter__HotSpot__Type) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__RegExpFilter__HotSpot_protectedbase_setType(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(typeVal))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *Konsole__RegExpFilter__HotSpot) callVirtualBase_Activate(action string) {
	action_ms := C.struct_miqt_string{}
	action_ms.data = C.CString(action)
	action_ms.len = C.size_t(len(action))
	defer C.free(unsafe.Pointer(action_ms.data))

	C.Konsole__RegExpFilter__HotSpot_virtualbase_activate(unsafe.Pointer(this.h), action_ms)

}
func (this *Konsole__RegExpFilter__HotSpot) OnActivate(slot func(super func(action string), action string)) {
	ok := C.Konsole__RegExpFilter__HotSpot_override_virtual_activate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter__HotSpot_activate
func miqt_exec_callback_Konsole__RegExpFilter__HotSpot_activate(self *C.Konsole__RegExpFilter__HotSpot, cb C.intptr_t, action C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action string), action string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var action_ms C.struct_miqt_string = action
	action_ret := C.GoStringN(action_ms.data, C.int(int64(action_ms.len)))
	C.free(unsafe.Pointer(action_ms.data))
	slotval1 := action_ret

	gofunc((&Konsole__RegExpFilter__HotSpot{h: self}).callVirtualBase_Activate, slotval1)

}

func (this *Konsole__RegExpFilter__HotSpot) callVirtualBase_Actions() []*qt.QAction {

	var _ma C.struct_miqt_array = C.Konsole__RegExpFilter__HotSpot_virtualbase_actions(unsafe.Pointer(this.h))
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret

}
func (this *Konsole__RegExpFilter__HotSpot) OnActions(slot func(super func() []*qt.QAction) []*qt.QAction) {
	ok := C.Konsole__RegExpFilter__HotSpot_override_virtual_actions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__RegExpFilter__HotSpot_actions
func miqt_exec_callback_Konsole__RegExpFilter__HotSpot_actions(self *C.Konsole__RegExpFilter__HotSpot, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []*qt.QAction) []*qt.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&Konsole__RegExpFilter__HotSpot{h: self}).callVirtualBase_Actions)
	virtualReturn_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QAction)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *Konsole__RegExpFilter__HotSpot) Delete() {
	C.Konsole__RegExpFilter__HotSpot_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__RegExpFilter__HotSpot) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__RegExpFilter__HotSpot) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__UrlFilter__HotSpot struct {
	h *C.Konsole__UrlFilter__HotSpot
	*Konsole__RegExpFilter__HotSpot
}

func (this *Konsole__UrlFilter__HotSpot) cPointer() *C.Konsole__UrlFilter__HotSpot {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__UrlFilter__HotSpot) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__UrlFilter__HotSpot constructs the type using only CGO pointers.
func newKonsole__UrlFilter__HotSpot(h *C.Konsole__UrlFilter__HotSpot) *Konsole__UrlFilter__HotSpot {
	if h == nil {
		return nil
	}
	var outptr_Konsole__RegExpFilter__HotSpot *C.Konsole__RegExpFilter__HotSpot = nil
	C.Konsole__UrlFilter__HotSpot_virtbase(h, &outptr_Konsole__RegExpFilter__HotSpot)

	return &Konsole__UrlFilter__HotSpot{h: h,
		Konsole__RegExpFilter__HotSpot: newKonsole__RegExpFilter__HotSpot(outptr_Konsole__RegExpFilter__HotSpot)}
}

// UnsafeNewKonsole__UrlFilter__HotSpot constructs the type using only unsafe pointers.
func UnsafeNewKonsole__UrlFilter__HotSpot(h unsafe.Pointer) *Konsole__UrlFilter__HotSpot {
	return newKonsole__UrlFilter__HotSpot((*C.Konsole__UrlFilter__HotSpot)(h))
}

// NewKonsole__UrlFilter__HotSpot constructs a new Konsole::UrlFilter::HotSpot object.
func NewKonsole__UrlFilter__HotSpot(startLine int, startColumn int, endLine int, endColumn int) *Konsole__UrlFilter__HotSpot {

	return newKonsole__UrlFilter__HotSpot(C.Konsole__UrlFilter__HotSpot_new((C.int)(startLine), (C.int)(startColumn), (C.int)(endLine), (C.int)(endColumn)))
}

func (this *Konsole__UrlFilter__HotSpot) GetUrlObject() *Konsole__FilterObject {
	return newKonsole__FilterObject(C.Konsole__UrlFilter__HotSpot_getUrlObject(this.h))
}

func (this *Konsole__UrlFilter__HotSpot) Actions() []*qt.QAction {
	var _ma C.struct_miqt_array = C.Konsole__UrlFilter__HotSpot_actions(this.h)
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *Konsole__UrlFilter__HotSpot) Activate(action string) {
	action_ms := C.struct_miqt_string{}
	action_ms.data = C.CString(action)
	action_ms.len = C.size_t(len(action))
	defer C.free(unsafe.Pointer(action_ms.data))
	C.Konsole__UrlFilter__HotSpot_activate(this.h, action_ms)
}

// SetType can only be called from a Konsole__UrlFilter__HotSpot that was directly constructed.
func (this *Konsole__UrlFilter__HotSpot) SetType(typeVal Konsole__Filter__HotSpot__Type) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__UrlFilter__HotSpot_protectedbase_setType(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(typeVal))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *Konsole__UrlFilter__HotSpot) callVirtualBase_Actions() []*qt.QAction {

	var _ma C.struct_miqt_array = C.Konsole__UrlFilter__HotSpot_virtualbase_actions(unsafe.Pointer(this.h))
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret

}
func (this *Konsole__UrlFilter__HotSpot) OnActions(slot func(super func() []*qt.QAction) []*qt.QAction) {
	ok := C.Konsole__UrlFilter__HotSpot_override_virtual_actions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter__HotSpot_actions
func miqt_exec_callback_Konsole__UrlFilter__HotSpot_actions(self *C.Konsole__UrlFilter__HotSpot, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []*qt.QAction) []*qt.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&Konsole__UrlFilter__HotSpot{h: self}).callVirtualBase_Actions)
	virtualReturn_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QAction)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *Konsole__UrlFilter__HotSpot) callVirtualBase_Activate(action string) {
	action_ms := C.struct_miqt_string{}
	action_ms.data = C.CString(action)
	action_ms.len = C.size_t(len(action))
	defer C.free(unsafe.Pointer(action_ms.data))

	C.Konsole__UrlFilter__HotSpot_virtualbase_activate(unsafe.Pointer(this.h), action_ms)

}
func (this *Konsole__UrlFilter__HotSpot) OnActivate(slot func(super func(action string), action string)) {
	ok := C.Konsole__UrlFilter__HotSpot_override_virtual_activate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__UrlFilter__HotSpot_activate
func miqt_exec_callback_Konsole__UrlFilter__HotSpot_activate(self *C.Konsole__UrlFilter__HotSpot, cb C.intptr_t, action C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action string), action string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var action_ms C.struct_miqt_string = action
	action_ret := C.GoStringN(action_ms.data, C.int(int64(action_ms.len)))
	C.free(unsafe.Pointer(action_ms.data))
	slotval1 := action_ret

	gofunc((&Konsole__UrlFilter__HotSpot{h: self}).callVirtualBase_Activate, slotval1)

}

// Delete this object from C++ memory.
func (this *Konsole__UrlFilter__HotSpot) Delete() {
	C.Konsole__UrlFilter__HotSpot_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__UrlFilter__HotSpot) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__UrlFilter__HotSpot) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
