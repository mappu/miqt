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
	h          *C.QAudioListener
	isSubclass bool
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
func newQAudioListener(h *C.QAudioListener, h_QObject *C.QObject) *QAudioListener {
	if h == nil {
		return nil
	}
	return &QAudioListener{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQAudioListener constructs the type using only unsafe pointers.
func UnsafeNewQAudioListener(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAudioListener {
	if h == nil {
		return nil
	}

	return &QAudioListener{h: (*C.QAudioListener)(h),
		QObject: qt6.UnsafeNewQObject(h_QObject)}
}

// NewQAudioListener constructs a new QAudioListener object.
func NewQAudioListener(engine *QAudioEngine) *QAudioListener {
	var outptr_QAudioListener *C.QAudioListener = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioListener_new(engine.cPointer(), &outptr_QAudioListener, &outptr_QObject)
	ret := newQAudioListener(outptr_QAudioListener, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAudioListener) SetPosition(pos qt6.QVector3D) {
	C.QAudioListener_SetPosition(this.h, (*C.QVector3D)(pos.UnsafePointer()))
}

func (this *QAudioListener) Position() *qt6.QVector3D {
	_ret := C.QAudioListener_Position(this.h)
	_goptr := qt6.UnsafeNewQVector3D(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioListener) SetRotation(q *qt6.QQuaternion) {
	C.QAudioListener_SetRotation(this.h, (*C.QQuaternion)(q.UnsafePointer()))
}

func (this *QAudioListener) Rotation() *qt6.QQuaternion {
	_ret := C.QAudioListener_Rotation(this.h)
	_goptr := qt6.UnsafeNewQQuaternion(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioListener) Engine() *QAudioEngine {
	return UnsafeNewQAudioEngine(unsafe.Pointer(C.QAudioListener_Engine(this.h)), nil)
}

func (this *QAudioListener) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioListener_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioListener) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioListener_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioListener_Event
func miqt_exec_callback_QAudioListener_Event(self *C.QAudioListener, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QAudioListener_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioListener) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioListener_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioListener_EventFilter
func miqt_exec_callback_QAudioListener_EventFilter(self *C.QAudioListener, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QAudioListener_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioListener) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioListener_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioListener_TimerEvent
func miqt_exec_callback_QAudioListener_TimerEvent(self *C.QAudioListener, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioListener{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioListener) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioListener_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioListener) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioListener_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioListener_ChildEvent
func miqt_exec_callback_QAudioListener_ChildEvent(self *C.QAudioListener, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioListener{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioListener) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioListener_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioListener) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioListener_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioListener_CustomEvent
func miqt_exec_callback_QAudioListener_CustomEvent(self *C.QAudioListener, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioListener{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioListener) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioListener_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioListener) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioListener_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioListener_ConnectNotify
func miqt_exec_callback_QAudioListener_ConnectNotify(self *C.QAudioListener, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioListener{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioListener) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioListener_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioListener) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioListener_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioListener_DisconnectNotify
func miqt_exec_callback_QAudioListener_DisconnectNotify(self *C.QAudioListener, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QAudioListener_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioListener) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioListener) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
