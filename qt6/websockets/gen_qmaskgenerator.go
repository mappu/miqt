package websockets

/*

#include "gen_qmaskgenerator.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMaskGenerator struct {
	h *C.QMaskGenerator
	*qt6.QObject
}

func (this *QMaskGenerator) cPointer() *C.QMaskGenerator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMaskGenerator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMaskGenerator constructs the type using only CGO pointers.
func newQMaskGenerator(h *C.QMaskGenerator) *QMaskGenerator {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QMaskGenerator_virtbase(h, &outptr_QObject)

	return &QMaskGenerator{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQMaskGenerator constructs the type using only unsafe pointers.
func UnsafeNewQMaskGenerator(h unsafe.Pointer) *QMaskGenerator {
	return newQMaskGenerator((*C.QMaskGenerator)(h))
}

// NewQMaskGenerator constructs a new QMaskGenerator object.
func NewQMaskGenerator() *QMaskGenerator {

	return newQMaskGenerator(C.QMaskGenerator_new())
}

// NewQMaskGenerator2 constructs a new QMaskGenerator object.
func NewQMaskGenerator2(parent *qt6.QObject) *QMaskGenerator {

	return newQMaskGenerator(C.QMaskGenerator_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QMaskGenerator) Seed() bool {
	return (bool)(C.QMaskGenerator_seed(this.h))
}

func (this *QMaskGenerator) NextMask() uint {
	return (uint)(C.QMaskGenerator_nextMask(this.h))
}

// Sender can only be called from a QMaskGenerator that was directly constructed.
func (this *QMaskGenerator) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QMaskGenerator_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QMaskGenerator that was directly constructed.
func (this *QMaskGenerator) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMaskGenerator_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QMaskGenerator that was directly constructed.
func (this *QMaskGenerator) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMaskGenerator_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QMaskGenerator that was directly constructed.
func (this *QMaskGenerator) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMaskGenerator_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QMaskGenerator) OnSeed(slot func() bool) {
	ok := C.QMaskGenerator_override_virtual_seed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMaskGenerator_seed
func miqt_exec_callback_QMaskGenerator_seed(self *C.QMaskGenerator, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QMaskGenerator) OnNextMask(slot func() uint) {
	ok := C.QMaskGenerator_override_virtual_nextMask(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMaskGenerator_nextMask
func miqt_exec_callback_QMaskGenerator_nextMask(self *C.QMaskGenerator, cb C.intptr_t) C.uint {
	gofunc, ok := cgo.Handle(cb).Value().(func() uint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.uint)(virtualReturn)

}

func (this *QMaskGenerator) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QMaskGenerator_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMaskGenerator) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QMaskGenerator_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMaskGenerator_event
func miqt_exec_callback_QMaskGenerator_event(self *C.QMaskGenerator, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMaskGenerator{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMaskGenerator) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QMaskGenerator_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMaskGenerator) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QMaskGenerator_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMaskGenerator_eventFilter
func miqt_exec_callback_QMaskGenerator_eventFilter(self *C.QMaskGenerator, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMaskGenerator{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMaskGenerator) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QMaskGenerator_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QMaskGenerator) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QMaskGenerator_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMaskGenerator_timerEvent
func miqt_exec_callback_QMaskGenerator_timerEvent(self *C.QMaskGenerator, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QMaskGenerator{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMaskGenerator) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QMaskGenerator_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QMaskGenerator) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QMaskGenerator_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMaskGenerator_childEvent
func miqt_exec_callback_QMaskGenerator_childEvent(self *C.QMaskGenerator, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QMaskGenerator{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMaskGenerator) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QMaskGenerator_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QMaskGenerator) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QMaskGenerator_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMaskGenerator_customEvent
func miqt_exec_callback_QMaskGenerator_customEvent(self *C.QMaskGenerator, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMaskGenerator{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMaskGenerator) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QMaskGenerator_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMaskGenerator) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMaskGenerator_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMaskGenerator_connectNotify
func miqt_exec_callback_QMaskGenerator_connectNotify(self *C.QMaskGenerator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMaskGenerator{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMaskGenerator) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QMaskGenerator_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMaskGenerator) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMaskGenerator_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMaskGenerator_disconnectNotify
func miqt_exec_callback_QMaskGenerator_disconnectNotify(self *C.QMaskGenerator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMaskGenerator{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMaskGenerator) Delete() {
	C.QMaskGenerator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMaskGenerator) GoGC() {
	runtime.SetFinalizer(this, func(this *QMaskGenerator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
