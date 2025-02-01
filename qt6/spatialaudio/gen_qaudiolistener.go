package spatialaudio

/*

#include "gen_qaudiolistener.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioListener struct {
	h *C.QAudioListener
	*qt6.QObject
}

func (this *QAudioListener) cPointer() *C.QAudioListener {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioListener) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioListener constructs the type using only CGO pointers.
func newQAudioListener(h *C.QAudioListener) *QAudioListener {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAudioListener_virtbase(h, &outptr_QObject)

	return &QAudioListener{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAudioListener constructs the type using only unsafe pointers.
func UnsafeNewQAudioListener(h unsafe.Pointer) *QAudioListener {
	return newQAudioListener((*C.QAudioListener)(h))
}

// NewQAudioListener constructs a new QAudioListener object.
func NewQAudioListener(engine *QAudioEngine) *QAudioListener {

	return newQAudioListener(C.QAudioListener_new(engine.cPointer()))
}

func (this *QAudioListener) SetPosition(pos qt6.QVector3D) {
	C.QAudioListener_setPosition(this.h, (*C.QVector3D)(pos.UnsafePointer()))
}

func (this *QAudioListener) Position() *qt6.QVector3D {
	_goptr := qt6.UnsafeNewQVector3D(unsafe.Pointer(C.QAudioListener_position(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioListener) SetRotation(q *qt6.QQuaternion) {
	C.QAudioListener_setRotation(this.h, (*C.QQuaternion)(q.UnsafePointer()))
}

func (this *QAudioListener) Rotation() *qt6.QQuaternion {
	_goptr := qt6.UnsafeNewQQuaternion(unsafe.Pointer(C.QAudioListener_rotation(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioListener) Engine() *QAudioEngine {
	return newQAudioEngine(C.QAudioListener_engine(this.h))
}

func (this *QAudioListener) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioListener_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioListener) Onevent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QAudioListener_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioListener_event
func miqt_exec_callback_QAudioListener_event(self *C.QAudioListener, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioListener{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioListener) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAudioListener_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioListener) OneventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QAudioListener_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioListener_eventFilter
func miqt_exec_callback_QAudioListener_eventFilter(self *C.QAudioListener, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioListener{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioListener) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAudioListener_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioListener) OntimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAudioListener_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioListener_timerEvent
func miqt_exec_callback_QAudioListener_timerEvent(self *C.QAudioListener, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioListener{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioListener) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioListener_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioListener) OnchildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAudioListener_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioListener_childEvent
func miqt_exec_callback_QAudioListener_childEvent(self *C.QAudioListener, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioListener{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioListener) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioListener_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioListener) OncustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAudioListener_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioListener_customEvent
func miqt_exec_callback_QAudioListener_customEvent(self *C.QAudioListener, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioListener{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioListener) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioListener_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioListener) OnconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioListener_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioListener_connectNotify
func miqt_exec_callback_QAudioListener_connectNotify(self *C.QAudioListener, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioListener{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioListener) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioListener_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioListener) OndisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioListener_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioListener_disconnectNotify
func miqt_exec_callback_QAudioListener_disconnectNotify(self *C.QAudioListener, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioListener{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioListener) Delete() {
	C.QAudioListener_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioListener) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioListener) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
