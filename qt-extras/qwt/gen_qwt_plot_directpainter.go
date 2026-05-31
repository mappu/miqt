package qwt

/*

#include "gen_qwt_plot_directpainter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlotDirectPainter__Attribute int

const (
	QwtPlotDirectPainter__AtomicPainter    QwtPlotDirectPainter__Attribute = 1
	QwtPlotDirectPainter__FullRepaint      QwtPlotDirectPainter__Attribute = 2
	QwtPlotDirectPainter__CopyBackingStore QwtPlotDirectPainter__Attribute = 4
)

type QwtPlotDirectPainter struct {
	h *C.QwtPlotDirectPainter
	*qt.QObject
}

func (this *QwtPlotDirectPainter) cPointer() *C.QwtPlotDirectPainter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotDirectPainter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotDirectPainter constructs the type using only CGO pointers.
func newQwtPlotDirectPainter(h *C.QwtPlotDirectPainter) *QwtPlotDirectPainter {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QwtPlotDirectPainter_virtbase(h, &outptr_QObject)

	return &QwtPlotDirectPainter{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQwtPlotDirectPainter constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotDirectPainter(h unsafe.Pointer) *QwtPlotDirectPainter {
	return newQwtPlotDirectPainter((*C.QwtPlotDirectPainter)(h))
}

// NewQwtPlotDirectPainter constructs a new QwtPlotDirectPainter object.
func NewQwtPlotDirectPainter() *QwtPlotDirectPainter {

	return newQwtPlotDirectPainter(C.QwtPlotDirectPainter_new())
}

// NewQwtPlotDirectPainter2 constructs a new QwtPlotDirectPainter object.
func NewQwtPlotDirectPainter2(parent *qt.QObject) *QwtPlotDirectPainter {

	return newQwtPlotDirectPainter(C.QwtPlotDirectPainter_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QwtPlotDirectPainter) SetAttribute(param1 QwtPlotDirectPainter__Attribute, on bool) {
	C.QwtPlotDirectPainter_setAttribute(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotDirectPainter) TestAttribute(param1 QwtPlotDirectPainter__Attribute) bool {
	return (bool)(C.QwtPlotDirectPainter_testAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotDirectPainter) SetClipping(clipping bool) {
	C.QwtPlotDirectPainter_setClipping(this.h, (C.bool)(clipping))
}

func (this *QwtPlotDirectPainter) HasClipping() bool {
	return (bool)(C.QwtPlotDirectPainter_hasClipping(this.h))
}

func (this *QwtPlotDirectPainter) SetClipRegion(clipRegion *qt.QRegion) {
	C.QwtPlotDirectPainter_setClipRegion(this.h, (*C.QRegion)(clipRegion.UnsafePointer()))
}

func (this *QwtPlotDirectPainter) ClipRegion() *qt.QRegion {
	_goptr := qt.UnsafeNewQRegion(unsafe.Pointer(C.QwtPlotDirectPainter_clipRegion(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotDirectPainter) DrawSeries(param1 *QwtPlotSeriesItem, from int, to int) {
	C.QwtPlotDirectPainter_drawSeries(this.h, param1.cPointer(), (C.int)(from), (C.int)(to))
}

func (this *QwtPlotDirectPainter) Reset() {
	C.QwtPlotDirectPainter_reset(this.h)
}

func (this *QwtPlotDirectPainter) EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {
	return (bool)(C.QwtPlotDirectPainter_eventFilter(this.h, (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))
}

// Sender can only be called from a QwtPlotDirectPainter that was directly constructed.
func (this *QwtPlotDirectPainter) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPlotDirectPainter_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPlotDirectPainter that was directly constructed.
func (this *QwtPlotDirectPainter) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotDirectPainter_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPlotDirectPainter that was directly constructed.
func (this *QwtPlotDirectPainter) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotDirectPainter_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPlotDirectPainter that was directly constructed.
func (this *QwtPlotDirectPainter) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotDirectPainter_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtPlotDirectPainter) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QwtPlotDirectPainter_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtPlotDirectPainter) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtPlotDirectPainter_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotDirectPainter_eventFilter
func miqt_exec_callback_QwtPlotDirectPainter_eventFilter(self *C.QwtPlotDirectPainter, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlotDirectPainter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotDirectPainter) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtPlotDirectPainter_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPlotDirectPainter) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtPlotDirectPainter_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotDirectPainter_event
func miqt_exec_callback_QwtPlotDirectPainter_event(self *C.QwtPlotDirectPainter, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPlotDirectPainter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotDirectPainter) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtPlotDirectPainter_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPlotDirectPainter) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPlotDirectPainter_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotDirectPainter_timerEvent
func miqt_exec_callback_QwtPlotDirectPainter_timerEvent(self *C.QwtPlotDirectPainter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotDirectPainter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPlotDirectPainter) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtPlotDirectPainter_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPlotDirectPainter) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPlotDirectPainter_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotDirectPainter_childEvent
func miqt_exec_callback_QwtPlotDirectPainter_childEvent(self *C.QwtPlotDirectPainter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotDirectPainter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPlotDirectPainter) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtPlotDirectPainter_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotDirectPainter) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotDirectPainter_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotDirectPainter_customEvent
func miqt_exec_callback_QwtPlotDirectPainter_customEvent(self *C.QwtPlotDirectPainter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotDirectPainter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPlotDirectPainter) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotDirectPainter_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotDirectPainter) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotDirectPainter_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotDirectPainter_connectNotify
func miqt_exec_callback_QwtPlotDirectPainter_connectNotify(self *C.QwtPlotDirectPainter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotDirectPainter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPlotDirectPainter) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotDirectPainter_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotDirectPainter) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotDirectPainter_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotDirectPainter_disconnectNotify
func miqt_exec_callback_QwtPlotDirectPainter_disconnectNotify(self *C.QwtPlotDirectPainter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotDirectPainter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtPlotDirectPainter) Delete() {
	C.QwtPlotDirectPainter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotDirectPainter) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotDirectPainter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
