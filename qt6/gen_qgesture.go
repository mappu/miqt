package qt6

/*

#include "gen_qgesture.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGesture__GestureCancelPolicy int

const (
	QGesture__CancelNone         QGesture__GestureCancelPolicy = 0
	QGesture__CancelAllInContext QGesture__GestureCancelPolicy = 1
)

type QPinchGesture__ChangeFlag int

const (
	QPinchGesture__ScaleFactorChanged   QPinchGesture__ChangeFlag = 1
	QPinchGesture__RotationAngleChanged QPinchGesture__ChangeFlag = 2
	QPinchGesture__CenterPointChanged   QPinchGesture__ChangeFlag = 4
)

type QSwipeGesture__SwipeDirection int

const (
	QSwipeGesture__NoDirection QSwipeGesture__SwipeDirection = 0
	QSwipeGesture__Left        QSwipeGesture__SwipeDirection = 1
	QSwipeGesture__Right       QSwipeGesture__SwipeDirection = 2
	QSwipeGesture__Up          QSwipeGesture__SwipeDirection = 3
	QSwipeGesture__Down        QSwipeGesture__SwipeDirection = 4
)

type QGesture struct {
	h *C.QGesture
	*QObject
}

func (this *QGesture) cPointer() *C.QGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGesture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGesture constructs the type using only CGO pointers.
func newQGesture(h *C.QGesture) *QGesture {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGesture_virtbase(h, &outptr_QObject)

	return &QGesture{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQGesture constructs the type using only unsafe pointers.
func UnsafeNewQGesture(h unsafe.Pointer) *QGesture {
	return newQGesture((*C.QGesture)(h))
}

// NewQGesture constructs a new QGesture object.
func NewQGesture() *QGesture {

	return newQGesture(C.QGesture_new())
}

// NewQGesture2 constructs a new QGesture object.
func NewQGesture2(parent *QObject) *QGesture {

	return newQGesture(C.QGesture_new2(parent.cPointer()))
}

func (this *QGesture) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGesture_metaObject(this.h))
}

func (this *QGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGesture_metacast(this.h, param1_Cstring))
}

func QGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGesture_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGesture) GestureType() GestureType {
	return (GestureType)(C.QGesture_gestureType(this.h))
}

func (this *QGesture) State() GestureState {
	return (GestureState)(C.QGesture_state(this.h))
}

func (this *QGesture) HotSpot() *QPointF {
	_goptr := newQPointF(C.QGesture_hotSpot(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGesture) SetHotSpot(value *QPointF) {
	C.QGesture_setHotSpot(this.h, value.cPointer())
}

func (this *QGesture) HasHotSpot() bool {
	return (bool)(C.QGesture_hasHotSpot(this.h))
}

func (this *QGesture) UnsetHotSpot() {
	C.QGesture_unsetHotSpot(this.h)
}

func (this *QGesture) SetGestureCancelPolicy(policy QGesture__GestureCancelPolicy) {
	C.QGesture_setGestureCancelPolicy(this.h, (C.int)(policy))
}

func (this *QGesture) GestureCancelPolicy() QGesture__GestureCancelPolicy {
	return (QGesture__GestureCancelPolicy)(C.QGesture_gestureCancelPolicy(this.h))
}

func QGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGesture_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGesture_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGesture) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGesture_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGesture) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGesture_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGesture_event
func miqt_exec_callback_QGesture_event(self *C.QGesture, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGesture{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGesture) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGesture_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGesture) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGesture_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGesture_eventFilter
func miqt_exec_callback_QGesture_eventFilter(self *C.QGesture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGesture{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGesture) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGesture_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGesture) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGesture_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGesture_timerEvent
func miqt_exec_callback_QGesture_timerEvent(self *C.QGesture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGesture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGesture) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGesture_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGesture) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGesture_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGesture_childEvent
func miqt_exec_callback_QGesture_childEvent(self *C.QGesture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGesture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGesture) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGesture_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGesture) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGesture_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGesture_customEvent
func miqt_exec_callback_QGesture_customEvent(self *C.QGesture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGesture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGesture) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGesture_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGesture) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGesture_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGesture_connectNotify
func miqt_exec_callback_QGesture_connectNotify(self *C.QGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGesture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGesture) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGesture_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGesture) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGesture_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGesture_disconnectNotify
func miqt_exec_callback_QGesture_disconnectNotify(self *C.QGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGesture{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGesture) Delete() {
	C.QGesture_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPanGesture struct {
	h *C.QPanGesture
	*QGesture
}

func (this *QPanGesture) cPointer() *C.QPanGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPanGesture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPanGesture constructs the type using only CGO pointers.
func newQPanGesture(h *C.QPanGesture) *QPanGesture {
	if h == nil {
		return nil
	}
	var outptr_QGesture *C.QGesture = nil
	C.QPanGesture_virtbase(h, &outptr_QGesture)

	return &QPanGesture{h: h,
		QGesture: newQGesture(outptr_QGesture)}
}

// UnsafeNewQPanGesture constructs the type using only unsafe pointers.
func UnsafeNewQPanGesture(h unsafe.Pointer) *QPanGesture {
	return newQPanGesture((*C.QPanGesture)(h))
}

// NewQPanGesture constructs a new QPanGesture object.
func NewQPanGesture() *QPanGesture {

	return newQPanGesture(C.QPanGesture_new())
}

// NewQPanGesture2 constructs a new QPanGesture object.
func NewQPanGesture2(parent *QObject) *QPanGesture {

	return newQPanGesture(C.QPanGesture_new2(parent.cPointer()))
}

func (this *QPanGesture) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPanGesture_metaObject(this.h))
}

func (this *QPanGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPanGesture_metacast(this.h, param1_Cstring))
}

func QPanGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPanGesture_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPanGesture) LastOffset() *QPointF {
	_goptr := newQPointF(C.QPanGesture_lastOffset(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPanGesture) Offset() *QPointF {
	_goptr := newQPointF(C.QPanGesture_offset(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPanGesture) Delta() *QPointF {
	_goptr := newQPointF(C.QPanGesture_delta(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPanGesture) Acceleration() float64 {
	return (float64)(C.QPanGesture_acceleration(this.h))
}

func (this *QPanGesture) SetLastOffset(value *QPointF) {
	C.QPanGesture_setLastOffset(this.h, value.cPointer())
}

func (this *QPanGesture) SetOffset(value *QPointF) {
	C.QPanGesture_setOffset(this.h, value.cPointer())
}

func (this *QPanGesture) SetAcceleration(value float64) {
	C.QPanGesture_setAcceleration(this.h, (C.double)(value))
}

func QPanGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPanGesture_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPanGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPanGesture_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPanGesture) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QPanGesture_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPanGesture) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QPanGesture_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPanGesture_event
func miqt_exec_callback_QPanGesture_event(self *C.QPanGesture, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QPanGesture{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPanGesture) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPanGesture_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPanGesture) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPanGesture_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPanGesture_eventFilter
func miqt_exec_callback_QPanGesture_eventFilter(self *C.QPanGesture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPanGesture{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPanGesture) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPanGesture_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPanGesture) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QPanGesture_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPanGesture_timerEvent
func miqt_exec_callback_QPanGesture_timerEvent(self *C.QPanGesture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPanGesture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPanGesture) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPanGesture_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPanGesture) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPanGesture_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPanGesture_childEvent
func miqt_exec_callback_QPanGesture_childEvent(self *C.QPanGesture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPanGesture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPanGesture) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPanGesture_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPanGesture) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPanGesture_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPanGesture_customEvent
func miqt_exec_callback_QPanGesture_customEvent(self *C.QPanGesture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPanGesture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPanGesture) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPanGesture_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPanGesture) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPanGesture_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPanGesture_connectNotify
func miqt_exec_callback_QPanGesture_connectNotify(self *C.QPanGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPanGesture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPanGesture) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPanGesture_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPanGesture) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPanGesture_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPanGesture_disconnectNotify
func miqt_exec_callback_QPanGesture_disconnectNotify(self *C.QPanGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPanGesture{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPanGesture) Delete() {
	C.QPanGesture_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPanGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QPanGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPinchGesture struct {
	h *C.QPinchGesture
	*QGesture
}

func (this *QPinchGesture) cPointer() *C.QPinchGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPinchGesture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPinchGesture constructs the type using only CGO pointers.
func newQPinchGesture(h *C.QPinchGesture) *QPinchGesture {
	if h == nil {
		return nil
	}
	var outptr_QGesture *C.QGesture = nil
	C.QPinchGesture_virtbase(h, &outptr_QGesture)

	return &QPinchGesture{h: h,
		QGesture: newQGesture(outptr_QGesture)}
}

// UnsafeNewQPinchGesture constructs the type using only unsafe pointers.
func UnsafeNewQPinchGesture(h unsafe.Pointer) *QPinchGesture {
	return newQPinchGesture((*C.QPinchGesture)(h))
}

// NewQPinchGesture constructs a new QPinchGesture object.
func NewQPinchGesture() *QPinchGesture {

	return newQPinchGesture(C.QPinchGesture_new())
}

// NewQPinchGesture2 constructs a new QPinchGesture object.
func NewQPinchGesture2(parent *QObject) *QPinchGesture {

	return newQPinchGesture(C.QPinchGesture_new2(parent.cPointer()))
}

func (this *QPinchGesture) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPinchGesture_metaObject(this.h))
}

func (this *QPinchGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPinchGesture_metacast(this.h, param1_Cstring))
}

func QPinchGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPinchGesture_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPinchGesture) TotalChangeFlags() QPinchGesture__ChangeFlag {
	return (QPinchGesture__ChangeFlag)(C.QPinchGesture_totalChangeFlags(this.h))
}

func (this *QPinchGesture) SetTotalChangeFlags(value QPinchGesture__ChangeFlag) {
	C.QPinchGesture_setTotalChangeFlags(this.h, (C.int)(value))
}

func (this *QPinchGesture) ChangeFlags() QPinchGesture__ChangeFlag {
	return (QPinchGesture__ChangeFlag)(C.QPinchGesture_changeFlags(this.h))
}

func (this *QPinchGesture) SetChangeFlags(value QPinchGesture__ChangeFlag) {
	C.QPinchGesture_setChangeFlags(this.h, (C.int)(value))
}

func (this *QPinchGesture) StartCenterPoint() *QPointF {
	_goptr := newQPointF(C.QPinchGesture_startCenterPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPinchGesture) LastCenterPoint() *QPointF {
	_goptr := newQPointF(C.QPinchGesture_lastCenterPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPinchGesture) CenterPoint() *QPointF {
	_goptr := newQPointF(C.QPinchGesture_centerPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPinchGesture) SetStartCenterPoint(value *QPointF) {
	C.QPinchGesture_setStartCenterPoint(this.h, value.cPointer())
}

func (this *QPinchGesture) SetLastCenterPoint(value *QPointF) {
	C.QPinchGesture_setLastCenterPoint(this.h, value.cPointer())
}

func (this *QPinchGesture) SetCenterPoint(value *QPointF) {
	C.QPinchGesture_setCenterPoint(this.h, value.cPointer())
}

func (this *QPinchGesture) TotalScaleFactor() float64 {
	return (float64)(C.QPinchGesture_totalScaleFactor(this.h))
}

func (this *QPinchGesture) LastScaleFactor() float64 {
	return (float64)(C.QPinchGesture_lastScaleFactor(this.h))
}

func (this *QPinchGesture) ScaleFactor() float64 {
	return (float64)(C.QPinchGesture_scaleFactor(this.h))
}

func (this *QPinchGesture) SetTotalScaleFactor(value float64) {
	C.QPinchGesture_setTotalScaleFactor(this.h, (C.double)(value))
}

func (this *QPinchGesture) SetLastScaleFactor(value float64) {
	C.QPinchGesture_setLastScaleFactor(this.h, (C.double)(value))
}

func (this *QPinchGesture) SetScaleFactor(value float64) {
	C.QPinchGesture_setScaleFactor(this.h, (C.double)(value))
}

func (this *QPinchGesture) TotalRotationAngle() float64 {
	return (float64)(C.QPinchGesture_totalRotationAngle(this.h))
}

func (this *QPinchGesture) LastRotationAngle() float64 {
	return (float64)(C.QPinchGesture_lastRotationAngle(this.h))
}

func (this *QPinchGesture) RotationAngle() float64 {
	return (float64)(C.QPinchGesture_rotationAngle(this.h))
}

func (this *QPinchGesture) SetTotalRotationAngle(value float64) {
	C.QPinchGesture_setTotalRotationAngle(this.h, (C.double)(value))
}

func (this *QPinchGesture) SetLastRotationAngle(value float64) {
	C.QPinchGesture_setLastRotationAngle(this.h, (C.double)(value))
}

func (this *QPinchGesture) SetRotationAngle(value float64) {
	C.QPinchGesture_setRotationAngle(this.h, (C.double)(value))
}

func QPinchGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPinchGesture_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPinchGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPinchGesture_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPinchGesture) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QPinchGesture_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPinchGesture) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QPinchGesture_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPinchGesture_event
func miqt_exec_callback_QPinchGesture_event(self *C.QPinchGesture, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QPinchGesture{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPinchGesture) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPinchGesture_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPinchGesture) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPinchGesture_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPinchGesture_eventFilter
func miqt_exec_callback_QPinchGesture_eventFilter(self *C.QPinchGesture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPinchGesture{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPinchGesture) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPinchGesture_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPinchGesture) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QPinchGesture_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPinchGesture_timerEvent
func miqt_exec_callback_QPinchGesture_timerEvent(self *C.QPinchGesture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPinchGesture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPinchGesture) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPinchGesture_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPinchGesture) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPinchGesture_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPinchGesture_childEvent
func miqt_exec_callback_QPinchGesture_childEvent(self *C.QPinchGesture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPinchGesture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPinchGesture) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPinchGesture_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPinchGesture) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPinchGesture_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPinchGesture_customEvent
func miqt_exec_callback_QPinchGesture_customEvent(self *C.QPinchGesture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPinchGesture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPinchGesture) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPinchGesture_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPinchGesture) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPinchGesture_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPinchGesture_connectNotify
func miqt_exec_callback_QPinchGesture_connectNotify(self *C.QPinchGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPinchGesture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPinchGesture) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPinchGesture_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPinchGesture) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPinchGesture_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPinchGesture_disconnectNotify
func miqt_exec_callback_QPinchGesture_disconnectNotify(self *C.QPinchGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPinchGesture{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPinchGesture) Delete() {
	C.QPinchGesture_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPinchGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QPinchGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSwipeGesture struct {
	h *C.QSwipeGesture
	*QGesture
}

func (this *QSwipeGesture) cPointer() *C.QSwipeGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSwipeGesture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSwipeGesture constructs the type using only CGO pointers.
func newQSwipeGesture(h *C.QSwipeGesture) *QSwipeGesture {
	if h == nil {
		return nil
	}
	var outptr_QGesture *C.QGesture = nil
	C.QSwipeGesture_virtbase(h, &outptr_QGesture)

	return &QSwipeGesture{h: h,
		QGesture: newQGesture(outptr_QGesture)}
}

// UnsafeNewQSwipeGesture constructs the type using only unsafe pointers.
func UnsafeNewQSwipeGesture(h unsafe.Pointer) *QSwipeGesture {
	return newQSwipeGesture((*C.QSwipeGesture)(h))
}

// NewQSwipeGesture constructs a new QSwipeGesture object.
func NewQSwipeGesture() *QSwipeGesture {

	return newQSwipeGesture(C.QSwipeGesture_new())
}

// NewQSwipeGesture2 constructs a new QSwipeGesture object.
func NewQSwipeGesture2(parent *QObject) *QSwipeGesture {

	return newQSwipeGesture(C.QSwipeGesture_new2(parent.cPointer()))
}

func (this *QSwipeGesture) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSwipeGesture_metaObject(this.h))
}

func (this *QSwipeGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSwipeGesture_metacast(this.h, param1_Cstring))
}

func QSwipeGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSwipeGesture_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSwipeGesture) HorizontalDirection() QSwipeGesture__SwipeDirection {
	return (QSwipeGesture__SwipeDirection)(C.QSwipeGesture_horizontalDirection(this.h))
}

func (this *QSwipeGesture) VerticalDirection() QSwipeGesture__SwipeDirection {
	return (QSwipeGesture__SwipeDirection)(C.QSwipeGesture_verticalDirection(this.h))
}

func (this *QSwipeGesture) SwipeAngle() float64 {
	return (float64)(C.QSwipeGesture_swipeAngle(this.h))
}

func (this *QSwipeGesture) SetSwipeAngle(value float64) {
	C.QSwipeGesture_setSwipeAngle(this.h, (C.double)(value))
}

func QSwipeGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSwipeGesture_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSwipeGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSwipeGesture_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSwipeGesture) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSwipeGesture_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSwipeGesture) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSwipeGesture_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSwipeGesture_event
func miqt_exec_callback_QSwipeGesture_event(self *C.QSwipeGesture, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSwipeGesture{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSwipeGesture) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSwipeGesture_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSwipeGesture) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSwipeGesture_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSwipeGesture_eventFilter
func miqt_exec_callback_QSwipeGesture_eventFilter(self *C.QSwipeGesture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSwipeGesture{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSwipeGesture) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSwipeGesture_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSwipeGesture) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSwipeGesture_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSwipeGesture_timerEvent
func miqt_exec_callback_QSwipeGesture_timerEvent(self *C.QSwipeGesture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSwipeGesture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSwipeGesture) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSwipeGesture_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSwipeGesture) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSwipeGesture_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSwipeGesture_childEvent
func miqt_exec_callback_QSwipeGesture_childEvent(self *C.QSwipeGesture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSwipeGesture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSwipeGesture) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSwipeGesture_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSwipeGesture) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSwipeGesture_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSwipeGesture_customEvent
func miqt_exec_callback_QSwipeGesture_customEvent(self *C.QSwipeGesture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSwipeGesture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSwipeGesture) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSwipeGesture_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSwipeGesture) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSwipeGesture_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSwipeGesture_connectNotify
func miqt_exec_callback_QSwipeGesture_connectNotify(self *C.QSwipeGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSwipeGesture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSwipeGesture) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSwipeGesture_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSwipeGesture) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSwipeGesture_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSwipeGesture_disconnectNotify
func miqt_exec_callback_QSwipeGesture_disconnectNotify(self *C.QSwipeGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSwipeGesture{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSwipeGesture) Delete() {
	C.QSwipeGesture_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSwipeGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QSwipeGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTapGesture struct {
	h *C.QTapGesture
	*QGesture
}

func (this *QTapGesture) cPointer() *C.QTapGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTapGesture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTapGesture constructs the type using only CGO pointers.
func newQTapGesture(h *C.QTapGesture) *QTapGesture {
	if h == nil {
		return nil
	}
	var outptr_QGesture *C.QGesture = nil
	C.QTapGesture_virtbase(h, &outptr_QGesture)

	return &QTapGesture{h: h,
		QGesture: newQGesture(outptr_QGesture)}
}

// UnsafeNewQTapGesture constructs the type using only unsafe pointers.
func UnsafeNewQTapGesture(h unsafe.Pointer) *QTapGesture {
	return newQTapGesture((*C.QTapGesture)(h))
}

// NewQTapGesture constructs a new QTapGesture object.
func NewQTapGesture() *QTapGesture {

	return newQTapGesture(C.QTapGesture_new())
}

// NewQTapGesture2 constructs a new QTapGesture object.
func NewQTapGesture2(parent *QObject) *QTapGesture {

	return newQTapGesture(C.QTapGesture_new2(parent.cPointer()))
}

func (this *QTapGesture) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTapGesture_metaObject(this.h))
}

func (this *QTapGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTapGesture_metacast(this.h, param1_Cstring))
}

func QTapGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTapGesture_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTapGesture) Position() *QPointF {
	_goptr := newQPointF(C.QTapGesture_position(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTapGesture) SetPosition(pos *QPointF) {
	C.QTapGesture_setPosition(this.h, pos.cPointer())
}

func QTapGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTapGesture_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTapGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTapGesture_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTapGesture) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTapGesture_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTapGesture) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTapGesture_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapGesture_event
func miqt_exec_callback_QTapGesture_event(self *C.QTapGesture, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTapGesture{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTapGesture) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTapGesture_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTapGesture) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTapGesture_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapGesture_eventFilter
func miqt_exec_callback_QTapGesture_eventFilter(self *C.QTapGesture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTapGesture{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTapGesture) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTapGesture_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTapGesture) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTapGesture_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapGesture_timerEvent
func miqt_exec_callback_QTapGesture_timerEvent(self *C.QTapGesture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTapGesture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTapGesture) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTapGesture_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTapGesture) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTapGesture_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapGesture_childEvent
func miqt_exec_callback_QTapGesture_childEvent(self *C.QTapGesture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTapGesture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTapGesture) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTapGesture_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTapGesture) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTapGesture_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapGesture_customEvent
func miqt_exec_callback_QTapGesture_customEvent(self *C.QTapGesture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTapGesture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTapGesture) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTapGesture_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTapGesture) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTapGesture_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapGesture_connectNotify
func miqt_exec_callback_QTapGesture_connectNotify(self *C.QTapGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTapGesture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTapGesture) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTapGesture_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTapGesture) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTapGesture_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapGesture_disconnectNotify
func miqt_exec_callback_QTapGesture_disconnectNotify(self *C.QTapGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTapGesture{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTapGesture) Delete() {
	C.QTapGesture_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTapGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QTapGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTapAndHoldGesture struct {
	h *C.QTapAndHoldGesture
	*QGesture
}

func (this *QTapAndHoldGesture) cPointer() *C.QTapAndHoldGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTapAndHoldGesture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTapAndHoldGesture constructs the type using only CGO pointers.
func newQTapAndHoldGesture(h *C.QTapAndHoldGesture) *QTapAndHoldGesture {
	if h == nil {
		return nil
	}
	var outptr_QGesture *C.QGesture = nil
	C.QTapAndHoldGesture_virtbase(h, &outptr_QGesture)

	return &QTapAndHoldGesture{h: h,
		QGesture: newQGesture(outptr_QGesture)}
}

// UnsafeNewQTapAndHoldGesture constructs the type using only unsafe pointers.
func UnsafeNewQTapAndHoldGesture(h unsafe.Pointer) *QTapAndHoldGesture {
	return newQTapAndHoldGesture((*C.QTapAndHoldGesture)(h))
}

// NewQTapAndHoldGesture constructs a new QTapAndHoldGesture object.
func NewQTapAndHoldGesture() *QTapAndHoldGesture {

	return newQTapAndHoldGesture(C.QTapAndHoldGesture_new())
}

// NewQTapAndHoldGesture2 constructs a new QTapAndHoldGesture object.
func NewQTapAndHoldGesture2(parent *QObject) *QTapAndHoldGesture {

	return newQTapAndHoldGesture(C.QTapAndHoldGesture_new2(parent.cPointer()))
}

func (this *QTapAndHoldGesture) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTapAndHoldGesture_metaObject(this.h))
}

func (this *QTapAndHoldGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTapAndHoldGesture_metacast(this.h, param1_Cstring))
}

func QTapAndHoldGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTapAndHoldGesture_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTapAndHoldGesture) Position() *QPointF {
	_goptr := newQPointF(C.QTapAndHoldGesture_position(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTapAndHoldGesture) SetPosition(pos *QPointF) {
	C.QTapAndHoldGesture_setPosition(this.h, pos.cPointer())
}

func QTapAndHoldGesture_SetTimeout(msecs int) {
	C.QTapAndHoldGesture_setTimeout((C.int)(msecs))
}

func QTapAndHoldGesture_Timeout() int {
	return (int)(C.QTapAndHoldGesture_timeout())
}

func QTapAndHoldGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTapAndHoldGesture_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTapAndHoldGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTapAndHoldGesture_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTapAndHoldGesture) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTapAndHoldGesture_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTapAndHoldGesture) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTapAndHoldGesture_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapAndHoldGesture_event
func miqt_exec_callback_QTapAndHoldGesture_event(self *C.QTapAndHoldGesture, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTapAndHoldGesture{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTapAndHoldGesture) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTapAndHoldGesture_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTapAndHoldGesture) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTapAndHoldGesture_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapAndHoldGesture_eventFilter
func miqt_exec_callback_QTapAndHoldGesture_eventFilter(self *C.QTapAndHoldGesture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTapAndHoldGesture{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTapAndHoldGesture) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTapAndHoldGesture_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTapAndHoldGesture) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTapAndHoldGesture_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapAndHoldGesture_timerEvent
func miqt_exec_callback_QTapAndHoldGesture_timerEvent(self *C.QTapAndHoldGesture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTapAndHoldGesture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTapAndHoldGesture) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTapAndHoldGesture_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTapAndHoldGesture) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTapAndHoldGesture_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapAndHoldGesture_childEvent
func miqt_exec_callback_QTapAndHoldGesture_childEvent(self *C.QTapAndHoldGesture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTapAndHoldGesture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTapAndHoldGesture) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTapAndHoldGesture_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTapAndHoldGesture) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTapAndHoldGesture_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapAndHoldGesture_customEvent
func miqt_exec_callback_QTapAndHoldGesture_customEvent(self *C.QTapAndHoldGesture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTapAndHoldGesture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTapAndHoldGesture) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTapAndHoldGesture_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTapAndHoldGesture) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTapAndHoldGesture_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapAndHoldGesture_connectNotify
func miqt_exec_callback_QTapAndHoldGesture_connectNotify(self *C.QTapAndHoldGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTapAndHoldGesture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTapAndHoldGesture) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTapAndHoldGesture_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTapAndHoldGesture) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTapAndHoldGesture_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTapAndHoldGesture_disconnectNotify
func miqt_exec_callback_QTapAndHoldGesture_disconnectNotify(self *C.QTapAndHoldGesture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTapAndHoldGesture{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTapAndHoldGesture) Delete() {
	C.QTapAndHoldGesture_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTapAndHoldGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QTapAndHoldGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGestureEvent struct {
	h *C.QGestureEvent
	*QEvent
}

func (this *QGestureEvent) cPointer() *C.QGestureEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGestureEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGestureEvent constructs the type using only CGO pointers.
func newQGestureEvent(h *C.QGestureEvent) *QGestureEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QGestureEvent_virtbase(h, &outptr_QEvent)

	return &QGestureEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQGestureEvent constructs the type using only unsafe pointers.
func UnsafeNewQGestureEvent(h unsafe.Pointer) *QGestureEvent {
	return newQGestureEvent((*C.QGestureEvent)(h))
}

// NewQGestureEvent constructs a new QGestureEvent object.
func NewQGestureEvent(gestures []*QGesture) *QGestureEvent {
	gestures_CArray := (*[0xffff]*C.QGesture)(C.malloc(C.size_t(8 * len(gestures))))
	defer C.free(unsafe.Pointer(gestures_CArray))
	for i := range gestures {
		gestures_CArray[i] = gestures[i].cPointer()
	}
	gestures_ma := C.struct_miqt_array{len: C.size_t(len(gestures)), data: unsafe.Pointer(gestures_CArray)}

	return newQGestureEvent(C.QGestureEvent_new(gestures_ma))
}

// NewQGestureEvent2 constructs a new QGestureEvent object.
func NewQGestureEvent2(param1 *QGestureEvent) *QGestureEvent {

	return newQGestureEvent(C.QGestureEvent_new2(param1.cPointer()))
}

func (this *QGestureEvent) Gestures() []*QGesture {
	var _ma C.struct_miqt_array = C.QGestureEvent_gestures(this.h)
	_ret := make([]*QGesture, int(_ma.len))
	_outCast := (*[0xffff]*C.QGesture)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGesture(_outCast[i])
	}
	return _ret
}

func (this *QGestureEvent) Gesture(typeVal GestureType) *QGesture {
	return newQGesture(C.QGestureEvent_gesture(this.h, (C.int)(typeVal)))
}

func (this *QGestureEvent) ActiveGestures() []*QGesture {
	var _ma C.struct_miqt_array = C.QGestureEvent_activeGestures(this.h)
	_ret := make([]*QGesture, int(_ma.len))
	_outCast := (*[0xffff]*C.QGesture)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGesture(_outCast[i])
	}
	return _ret
}

func (this *QGestureEvent) CanceledGestures() []*QGesture {
	var _ma C.struct_miqt_array = C.QGestureEvent_canceledGestures(this.h)
	_ret := make([]*QGesture, int(_ma.len))
	_outCast := (*[0xffff]*C.QGesture)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGesture(_outCast[i])
	}
	return _ret
}

func (this *QGestureEvent) SetAccepted(param1 *QGesture, param2 bool) {
	C.QGestureEvent_setAccepted(this.h, param1.cPointer(), (C.bool)(param2))
}

func (this *QGestureEvent) Accept(param1 *QGesture) {
	C.QGestureEvent_accept(this.h, param1.cPointer())
}

func (this *QGestureEvent) Ignore(param1 *QGesture) {
	C.QGestureEvent_ignore(this.h, param1.cPointer())
}

func (this *QGestureEvent) IsAccepted(param1 *QGesture) bool {
	return (bool)(C.QGestureEvent_isAccepted(this.h, param1.cPointer()))
}

func (this *QGestureEvent) SetAccepted2(param1 GestureType, param2 bool) {
	C.QGestureEvent_setAccepted2(this.h, (C.int)(param1), (C.bool)(param2))
}

func (this *QGestureEvent) AcceptWithQtGestureType(param1 GestureType) {
	C.QGestureEvent_acceptWithQtGestureType(this.h, (C.int)(param1))
}

func (this *QGestureEvent) IgnoreWithQtGestureType(param1 GestureType) {
	C.QGestureEvent_ignoreWithQtGestureType(this.h, (C.int)(param1))
}

func (this *QGestureEvent) IsAcceptedWithQtGestureType(param1 GestureType) bool {
	return (bool)(C.QGestureEvent_isAcceptedWithQtGestureType(this.h, (C.int)(param1)))
}

func (this *QGestureEvent) SetWidget(widget *QWidget) {
	C.QGestureEvent_setWidget(this.h, widget.cPointer())
}

func (this *QGestureEvent) Widget() *QWidget {
	return newQWidget(C.QGestureEvent_widget(this.h))
}

func (this *QGestureEvent) MapToGraphicsScene(gesturePoint *QPointF) *QPointF {
	_goptr := newQPointF(C.QGestureEvent_mapToGraphicsScene(this.h, gesturePoint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGestureEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QGestureEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QGestureEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QGestureEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGestureEvent_setAccepted
func miqt_exec_callback_QGestureEvent_setAccepted(self *C.QGestureEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QGestureEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

func (this *QGestureEvent) callVirtualBase_Clone() *QEvent {

	return newQEvent(C.QGestureEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QGestureEvent) OnClone(slot func(super func() *QEvent) *QEvent) {
	ok := C.QGestureEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGestureEvent_clone
func miqt_exec_callback_QGestureEvent_clone(self *C.QGestureEvent, cb C.intptr_t) *C.QEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QEvent) *QEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGestureEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGestureEvent) Delete() {
	C.QGestureEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGestureEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGestureEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
