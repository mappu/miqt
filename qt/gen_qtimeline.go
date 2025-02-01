package qt

/*

#include "gen_qtimeline.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTimeLine__State int

const (
	QTimeLine__NotRunning QTimeLine__State = 0
	QTimeLine__Paused     QTimeLine__State = 1
	QTimeLine__Running    QTimeLine__State = 2
)

type QTimeLine__Direction int

const (
	QTimeLine__Forward  QTimeLine__Direction = 0
	QTimeLine__Backward QTimeLine__Direction = 1
)

type QTimeLine__CurveShape int

const (
	QTimeLine__EaseInCurve    QTimeLine__CurveShape = 0
	QTimeLine__EaseOutCurve   QTimeLine__CurveShape = 1
	QTimeLine__EaseInOutCurve QTimeLine__CurveShape = 2
	QTimeLine__LinearCurve    QTimeLine__CurveShape = 3
	QTimeLine__SineCurve      QTimeLine__CurveShape = 4
	QTimeLine__CosineCurve    QTimeLine__CurveShape = 5
)

type QTimeLine struct {
	h *C.QTimeLine
	*QObject
}

func (this *QTimeLine) cPointer() *C.QTimeLine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTimeLine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTimeLine constructs the type using only CGO pointers.
func newQTimeLine(h *C.QTimeLine) *QTimeLine {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QTimeLine_virtbase(h, &outptr_QObject)

	return &QTimeLine{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQTimeLine constructs the type using only unsafe pointers.
func UnsafeNewQTimeLine(h unsafe.Pointer) *QTimeLine {
	return newQTimeLine((*C.QTimeLine)(h))
}

// NewQTimeLine constructs a new QTimeLine object.
func NewQTimeLine() *QTimeLine {

	return newQTimeLine(C.QTimeLine_new())
}

// NewQTimeLine2 constructs a new QTimeLine object.
func NewQTimeLine2(duration int) *QTimeLine {

	return newQTimeLine(C.QTimeLine_new2((C.int)(duration)))
}

// NewQTimeLine3 constructs a new QTimeLine object.
func NewQTimeLine3(duration int, parent *QObject) *QTimeLine {

	return newQTimeLine(C.QTimeLine_new3((C.int)(duration), parent.cPointer()))
}

func (this *QTimeLine) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTimeLine_metaObject(this.h))
}

func (this *QTimeLine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTimeLine_metacast(this.h, param1_Cstring))
}

func QTimeLine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeLine_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeLine) State() QTimeLine__State {
	return (QTimeLine__State)(C.QTimeLine_state(this.h))
}

func (this *QTimeLine) LoopCount() int {
	return (int)(C.QTimeLine_loopCount(this.h))
}

func (this *QTimeLine) SetLoopCount(count int) {
	C.QTimeLine_setLoopCount(this.h, (C.int)(count))
}

func (this *QTimeLine) Direction() QTimeLine__Direction {
	return (QTimeLine__Direction)(C.QTimeLine_direction(this.h))
}

func (this *QTimeLine) SetDirection(direction QTimeLine__Direction) {
	C.QTimeLine_setDirection(this.h, (C.int)(direction))
}

func (this *QTimeLine) Duration() int {
	return (int)(C.QTimeLine_duration(this.h))
}

func (this *QTimeLine) SetDuration(duration int) {
	C.QTimeLine_setDuration(this.h, (C.int)(duration))
}

func (this *QTimeLine) StartFrame() int {
	return (int)(C.QTimeLine_startFrame(this.h))
}

func (this *QTimeLine) SetStartFrame(frame int) {
	C.QTimeLine_setStartFrame(this.h, (C.int)(frame))
}

func (this *QTimeLine) EndFrame() int {
	return (int)(C.QTimeLine_endFrame(this.h))
}

func (this *QTimeLine) SetEndFrame(frame int) {
	C.QTimeLine_setEndFrame(this.h, (C.int)(frame))
}

func (this *QTimeLine) SetFrameRange(startFrame int, endFrame int) {
	C.QTimeLine_setFrameRange(this.h, (C.int)(startFrame), (C.int)(endFrame))
}

func (this *QTimeLine) UpdateInterval() int {
	return (int)(C.QTimeLine_updateInterval(this.h))
}

func (this *QTimeLine) SetUpdateInterval(interval int) {
	C.QTimeLine_setUpdateInterval(this.h, (C.int)(interval))
}

func (this *QTimeLine) CurveShape() QTimeLine__CurveShape {
	return (QTimeLine__CurveShape)(C.QTimeLine_curveShape(this.h))
}

func (this *QTimeLine) SetCurveShape(shape QTimeLine__CurveShape) {
	C.QTimeLine_setCurveShape(this.h, (C.int)(shape))
}

func (this *QTimeLine) EasingCurve() *QEasingCurve {
	_goptr := newQEasingCurve(C.QTimeLine_easingCurve(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTimeLine) SetEasingCurve(curve *QEasingCurve) {
	C.QTimeLine_setEasingCurve(this.h, curve.cPointer())
}

func (this *QTimeLine) CurrentTime() int {
	return (int)(C.QTimeLine_currentTime(this.h))
}

func (this *QTimeLine) CurrentFrame() int {
	return (int)(C.QTimeLine_currentFrame(this.h))
}

func (this *QTimeLine) CurrentValue() float64 {
	return (float64)(C.QTimeLine_currentValue(this.h))
}

func (this *QTimeLine) FrameForTime(msec int) int {
	return (int)(C.QTimeLine_frameForTime(this.h, (C.int)(msec)))
}

func (this *QTimeLine) ValueForTime(msec int) float64 {
	return (float64)(C.QTimeLine_valueForTime(this.h, (C.int)(msec)))
}

func (this *QTimeLine) Start() {
	C.QTimeLine_start(this.h)
}

func (this *QTimeLine) Resume() {
	C.QTimeLine_resume(this.h)
}

func (this *QTimeLine) Stop() {
	C.QTimeLine_stop(this.h)
}

func (this *QTimeLine) SetPaused(paused bool) {
	C.QTimeLine_setPaused(this.h, (C.bool)(paused))
}

func (this *QTimeLine) SetCurrentTime(msec int) {
	C.QTimeLine_setCurrentTime(this.h, (C.int)(msec))
}

func (this *QTimeLine) ToggleDirection() {
	C.QTimeLine_toggleDirection(this.h)
}

func QTimeLine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeLine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeLine_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeLine_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeLine) callVirtualBase_ValueForTime(msec int) float64 {

	return (float64)(C.QTimeLine_virtualbase_valueForTime(unsafe.Pointer(this.h), (C.int)(msec)))

}
func (this *QTimeLine) OnValueForTime(slot func(super func(msec int) float64, msec int) float64) {
	ok := C.QTimeLine_override_virtual_valueForTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeLine_valueForTime
func miqt_exec_callback_QTimeLine_valueForTime(self *C.QTimeLine, cb C.intptr_t, msec C.int) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msec int) float64, msec int) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msec)

	virtualReturn := gofunc((&QTimeLine{h: self}).callVirtualBase_ValueForTime, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QTimeLine) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTimeLine_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeLine) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTimeLine_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeLine_timerEvent
func miqt_exec_callback_QTimeLine_timerEvent(self *C.QTimeLine, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTimeLine{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTimeLine) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTimeLine_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTimeLine) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTimeLine_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeLine_event
func miqt_exec_callback_QTimeLine_event(self *C.QTimeLine, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTimeLine{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTimeLine) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTimeLine_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTimeLine) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTimeLine_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeLine_eventFilter
func miqt_exec_callback_QTimeLine_eventFilter(self *C.QTimeLine, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTimeLine{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTimeLine) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTimeLine_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeLine) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTimeLine_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeLine_childEvent
func miqt_exec_callback_QTimeLine_childEvent(self *C.QTimeLine, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTimeLine{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTimeLine) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTimeLine_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeLine) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTimeLine_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeLine_customEvent
func miqt_exec_callback_QTimeLine_customEvent(self *C.QTimeLine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTimeLine{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTimeLine) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTimeLine_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimeLine) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTimeLine_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeLine_connectNotify
func miqt_exec_callback_QTimeLine_connectNotify(self *C.QTimeLine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTimeLine{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTimeLine) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTimeLine_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimeLine) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTimeLine_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeLine_disconnectNotify
func miqt_exec_callback_QTimeLine_disconnectNotify(self *C.QTimeLine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTimeLine{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTimeLine) Delete() {
	C.QTimeLine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimeLine) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimeLine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
