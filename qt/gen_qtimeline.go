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
	h          *C.QTimeLine
	isSubclass bool
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
func newQTimeLine(h *C.QTimeLine, h_QObject *C.QObject) *QTimeLine {
	if h == nil {
		return nil
	}
	return &QTimeLine{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQTimeLine constructs the type using only unsafe pointers.
func UnsafeNewQTimeLine(h unsafe.Pointer, h_QObject unsafe.Pointer) *QTimeLine {
	if h == nil {
		return nil
	}

	return &QTimeLine{h: (*C.QTimeLine)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQTimeLine constructs a new QTimeLine object.
func NewQTimeLine() *QTimeLine {
	var outptr_QTimeLine *C.QTimeLine = nil
	var outptr_QObject *C.QObject = nil

	C.QTimeLine_new(&outptr_QTimeLine, &outptr_QObject)
	ret := newQTimeLine(outptr_QTimeLine, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQTimeLine2 constructs a new QTimeLine object.
func NewQTimeLine2(duration int) *QTimeLine {
	var outptr_QTimeLine *C.QTimeLine = nil
	var outptr_QObject *C.QObject = nil

	C.QTimeLine_new2((C.int)(duration), &outptr_QTimeLine, &outptr_QObject)
	ret := newQTimeLine(outptr_QTimeLine, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQTimeLine3 constructs a new QTimeLine object.
func NewQTimeLine3(duration int, parent *QObject) *QTimeLine {
	var outptr_QTimeLine *C.QTimeLine = nil
	var outptr_QObject *C.QObject = nil

	C.QTimeLine_new3((C.int)(duration), parent.cPointer(), &outptr_QTimeLine, &outptr_QObject)
	ret := newQTimeLine(outptr_QTimeLine, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QTimeLine) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTimeLine_MetaObject(this.h)))
}

func (this *QTimeLine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTimeLine_Metacast(this.h, param1_Cstring))
}

func QTimeLine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeLine_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeLine) State() QTimeLine__State {
	return (QTimeLine__State)(C.QTimeLine_State(this.h))
}

func (this *QTimeLine) LoopCount() int {
	return (int)(C.QTimeLine_LoopCount(this.h))
}

func (this *QTimeLine) SetLoopCount(count int) {
	C.QTimeLine_SetLoopCount(this.h, (C.int)(count))
}

func (this *QTimeLine) Direction() QTimeLine__Direction {
	return (QTimeLine__Direction)(C.QTimeLine_Direction(this.h))
}

func (this *QTimeLine) SetDirection(direction QTimeLine__Direction) {
	C.QTimeLine_SetDirection(this.h, (C.int)(direction))
}

func (this *QTimeLine) Duration() int {
	return (int)(C.QTimeLine_Duration(this.h))
}

func (this *QTimeLine) SetDuration(duration int) {
	C.QTimeLine_SetDuration(this.h, (C.int)(duration))
}

func (this *QTimeLine) StartFrame() int {
	return (int)(C.QTimeLine_StartFrame(this.h))
}

func (this *QTimeLine) SetStartFrame(frame int) {
	C.QTimeLine_SetStartFrame(this.h, (C.int)(frame))
}

func (this *QTimeLine) EndFrame() int {
	return (int)(C.QTimeLine_EndFrame(this.h))
}

func (this *QTimeLine) SetEndFrame(frame int) {
	C.QTimeLine_SetEndFrame(this.h, (C.int)(frame))
}

func (this *QTimeLine) SetFrameRange(startFrame int, endFrame int) {
	C.QTimeLine_SetFrameRange(this.h, (C.int)(startFrame), (C.int)(endFrame))
}

func (this *QTimeLine) UpdateInterval() int {
	return (int)(C.QTimeLine_UpdateInterval(this.h))
}

func (this *QTimeLine) SetUpdateInterval(interval int) {
	C.QTimeLine_SetUpdateInterval(this.h, (C.int)(interval))
}

func (this *QTimeLine) CurveShape() QTimeLine__CurveShape {
	return (QTimeLine__CurveShape)(C.QTimeLine_CurveShape(this.h))
}

func (this *QTimeLine) SetCurveShape(shape QTimeLine__CurveShape) {
	C.QTimeLine_SetCurveShape(this.h, (C.int)(shape))
}

func (this *QTimeLine) EasingCurve() *QEasingCurve {
	_ret := C.QTimeLine_EasingCurve(this.h)
	_goptr := newQEasingCurve(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTimeLine) SetEasingCurve(curve *QEasingCurve) {
	C.QTimeLine_SetEasingCurve(this.h, curve.cPointer())
}

func (this *QTimeLine) CurrentTime() int {
	return (int)(C.QTimeLine_CurrentTime(this.h))
}

func (this *QTimeLine) CurrentFrame() int {
	return (int)(C.QTimeLine_CurrentFrame(this.h))
}

func (this *QTimeLine) CurrentValue() float64 {
	return (float64)(C.QTimeLine_CurrentValue(this.h))
}

func (this *QTimeLine) FrameForTime(msec int) int {
	return (int)(C.QTimeLine_FrameForTime(this.h, (C.int)(msec)))
}

func (this *QTimeLine) ValueForTime(msec int) float64 {
	return (float64)(C.QTimeLine_ValueForTime(this.h, (C.int)(msec)))
}

func (this *QTimeLine) Start() {
	C.QTimeLine_Start(this.h)
}

func (this *QTimeLine) Resume() {
	C.QTimeLine_Resume(this.h)
}

func (this *QTimeLine) Stop() {
	C.QTimeLine_Stop(this.h)
}

func (this *QTimeLine) SetPaused(paused bool) {
	C.QTimeLine_SetPaused(this.h, (C.bool)(paused))
}

func (this *QTimeLine) SetCurrentTime(msec int) {
	C.QTimeLine_SetCurrentTime(this.h, (C.int)(msec))
}

func (this *QTimeLine) ToggleDirection() {
	C.QTimeLine_ToggleDirection(this.h)
}

func QTimeLine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeLine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeLine_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeLine_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeLine_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeLine) callVirtualBase_ValueForTime(msec int) float64 {

	return (float64)(C.QTimeLine_virtualbase_ValueForTime(unsafe.Pointer(this.h), (C.int)(msec)))

}
func (this *QTimeLine) OnValueForTime(slot func(super func(msec int) float64, msec int) float64) {
	C.QTimeLine_override_virtual_ValueForTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeLine_ValueForTime
func miqt_exec_callback_QTimeLine_ValueForTime(self *C.QTimeLine, cb C.intptr_t, msec C.int) C.double {
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

	C.QTimeLine_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeLine) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QTimeLine_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeLine_TimerEvent
func miqt_exec_callback_QTimeLine_TimerEvent(self *C.QTimeLine, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QTimeLine{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTimeLine) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTimeLine_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTimeLine) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QTimeLine_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeLine_Event
func miqt_exec_callback_QTimeLine_Event(self *C.QTimeLine, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTimeLine{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTimeLine) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTimeLine_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTimeLine) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QTimeLine_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeLine_EventFilter
func miqt_exec_callback_QTimeLine_EventFilter(self *C.QTimeLine, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTimeLine{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTimeLine) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTimeLine_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeLine) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QTimeLine_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeLine_ChildEvent
func miqt_exec_callback_QTimeLine_ChildEvent(self *C.QTimeLine, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QTimeLine{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTimeLine) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTimeLine_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeLine) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QTimeLine_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeLine_CustomEvent
func miqt_exec_callback_QTimeLine_CustomEvent(self *C.QTimeLine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTimeLine{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTimeLine) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTimeLine_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimeLine) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QTimeLine_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeLine_ConnectNotify
func miqt_exec_callback_QTimeLine_ConnectNotify(self *C.QTimeLine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTimeLine{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTimeLine) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTimeLine_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimeLine) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QTimeLine_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeLine_DisconnectNotify
func miqt_exec_callback_QTimeLine_DisconnectNotify(self *C.QTimeLine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTimeLine{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTimeLine) Delete() {
	C.QTimeLine_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimeLine) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimeLine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
