package qt6

/*

#include "gen_qevent.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWheelEvent__ int

const (
	QWheelEvent__DefaultDeltasPerStep QWheelEvent__ = 120
)

type QPlatformSurfaceEvent__SurfaceEventType int

const (
	QPlatformSurfaceEvent__SurfaceCreated            QPlatformSurfaceEvent__SurfaceEventType = 0
	QPlatformSurfaceEvent__SurfaceAboutToBeDestroyed QPlatformSurfaceEvent__SurfaceEventType = 1
)

type QContextMenuEvent__Reason int

const (
	QContextMenuEvent__Mouse    QContextMenuEvent__Reason = 0
	QContextMenuEvent__Keyboard QContextMenuEvent__Reason = 1
	QContextMenuEvent__Other    QContextMenuEvent__Reason = 2
)

type QInputMethodEvent__AttributeType int

const (
	QInputMethodEvent__TextFormat QInputMethodEvent__AttributeType = 0
	QInputMethodEvent__Cursor     QInputMethodEvent__AttributeType = 1
	QInputMethodEvent__Language   QInputMethodEvent__AttributeType = 2
	QInputMethodEvent__Ruby       QInputMethodEvent__AttributeType = 3
	QInputMethodEvent__Selection  QInputMethodEvent__AttributeType = 4
)

type QScrollEvent__ScrollState int

const (
	QScrollEvent__ScrollStarted  QScrollEvent__ScrollState = 0
	QScrollEvent__ScrollUpdated  QScrollEvent__ScrollState = 1
	QScrollEvent__ScrollFinished QScrollEvent__ScrollState = 2
)

type QInputEvent struct {
	h *C.QInputEvent
	*QEvent
}

func (this *QInputEvent) cPointer() *C.QInputEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputEvent constructs the type using only CGO pointers.
func newQInputEvent(h *C.QInputEvent) *QInputEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QInputEvent_virtbase(h, &outptr_QEvent)

	return &QInputEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQInputEvent constructs the type using only unsafe pointers.
func UnsafeNewQInputEvent(h unsafe.Pointer) *QInputEvent {
	return newQInputEvent((*C.QInputEvent)(h))
}

// NewQInputEvent constructs a new QInputEvent object.
func NewQInputEvent(typeVal QEvent__Type, m_dev *QInputDevice) *QInputEvent {

	return newQInputEvent(C.QInputEvent_new((C.int)(typeVal), m_dev.cPointer()))
}

// NewQInputEvent2 constructs a new QInputEvent object.
func NewQInputEvent2(typeVal QEvent__Type, m_dev *QInputDevice, modifiers KeyboardModifier) *QInputEvent {

	return newQInputEvent(C.QInputEvent_new2((C.int)(typeVal), m_dev.cPointer(), (C.int)(modifiers)))
}

func (this *QInputEvent) Clone() *QInputEvent {
	return newQInputEvent(C.QInputEvent_clone(this.h))
}

func (this *QInputEvent) Device() *QInputDevice {
	return newQInputDevice(C.QInputEvent_device(this.h))
}

func (this *QInputEvent) DeviceType() QInputDevice__DeviceType {
	return (QInputDevice__DeviceType)(C.QInputEvent_deviceType(this.h))
}

func (this *QInputEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QInputEvent_modifiers(this.h))
}

func (this *QInputEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QInputEvent_setModifiers(this.h, (C.int)(modifiers))
}

func (this *QInputEvent) Timestamp() uint64 {
	return (uint64)(C.QInputEvent_timestamp(this.h))
}

func (this *QInputEvent) SetTimestamp(timestamp uint64) {
	C.QInputEvent_setTimestamp(this.h, (C.ulonglong)(timestamp))
}

func (this *QInputEvent) callVirtualBase_Clone() *QInputEvent {

	return newQInputEvent(C.QInputEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QInputEvent) OnClone(slot func(super func() *QInputEvent) *QInputEvent) {
	ok := C.QInputEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputEvent_clone
func miqt_exec_callback_QInputEvent_clone(self *C.QInputEvent, cb C.intptr_t) *C.QInputEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QInputEvent) *QInputEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QInputEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QInputEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QInputEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QInputEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputEvent_setTimestamp
func miqt_exec_callback_QInputEvent_setTimestamp(self *C.QInputEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QInputEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QInputEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QInputEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QInputEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QInputEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputEvent_setAccepted
func miqt_exec_callback_QInputEvent_setAccepted(self *C.QInputEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QInputEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QInputEvent) Delete() {
	C.QInputEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPointerEvent struct {
	h *C.QPointerEvent
	*QInputEvent
}

func (this *QPointerEvent) cPointer() *C.QPointerEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPointerEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPointerEvent constructs the type using only CGO pointers.
func newQPointerEvent(h *C.QPointerEvent) *QPointerEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QPointerEvent_virtbase(h, &outptr_QInputEvent)

	return &QPointerEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQPointerEvent constructs the type using only unsafe pointers.
func UnsafeNewQPointerEvent(h unsafe.Pointer) *QPointerEvent {
	return newQPointerEvent((*C.QPointerEvent)(h))
}

// NewQPointerEvent constructs a new QPointerEvent object.
func NewQPointerEvent(typeVal QEvent__Type, dev *QPointingDevice) *QPointerEvent {

	return newQPointerEvent(C.QPointerEvent_new((C.int)(typeVal), dev.cPointer()))
}

// NewQPointerEvent2 constructs a new QPointerEvent object.
func NewQPointerEvent2(typeVal QEvent__Type, dev *QPointingDevice, modifiers KeyboardModifier) *QPointerEvent {

	return newQPointerEvent(C.QPointerEvent_new2((C.int)(typeVal), dev.cPointer(), (C.int)(modifiers)))
}

// NewQPointerEvent3 constructs a new QPointerEvent object.
func NewQPointerEvent3(typeVal QEvent__Type, dev *QPointingDevice, modifiers KeyboardModifier, points []QEventPoint) *QPointerEvent {
	points_CArray := (*[0xffff]*C.QEventPoint)(C.malloc(C.size_t(8 * len(points))))
	defer C.free(unsafe.Pointer(points_CArray))
	for i := range points {
		points_CArray[i] = points[i].cPointer()
	}
	points_ma := C.struct_miqt_array{len: C.size_t(len(points)), data: unsafe.Pointer(points_CArray)}

	return newQPointerEvent(C.QPointerEvent_new3((C.int)(typeVal), dev.cPointer(), (C.int)(modifiers), points_ma))
}

func (this *QPointerEvent) Clone() *QPointerEvent {
	return newQPointerEvent(C.QPointerEvent_clone(this.h))
}

func (this *QPointerEvent) PointingDevice() *QPointingDevice {
	return newQPointingDevice(C.QPointerEvent_pointingDevice(this.h))
}

func (this *QPointerEvent) PointerType() QPointingDevice__PointerType {
	return (QPointingDevice__PointerType)(C.QPointerEvent_pointerType(this.h))
}

func (this *QPointerEvent) SetTimestamp(timestamp uint64) {
	C.QPointerEvent_setTimestamp(this.h, (C.ulonglong)(timestamp))
}

func (this *QPointerEvent) PointCount() int64 {
	return (int64)(C.QPointerEvent_pointCount(this.h))
}

func (this *QPointerEvent) Point(i int64) *QEventPoint {
	return newQEventPoint(C.QPointerEvent_point(this.h, (C.ptrdiff_t)(i)))
}

func (this *QPointerEvent) Points() []QEventPoint {
	var _ma C.struct_miqt_array = C.QPointerEvent_points(this.h)
	_ret := make([]QEventPoint, int(_ma.len))
	_outCast := (*[0xffff]*C.QEventPoint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQEventPoint(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QPointerEvent) PointById(id int) *QEventPoint {
	return newQEventPoint(C.QPointerEvent_pointById(this.h, (C.int)(id)))
}

func (this *QPointerEvent) AllPointsGrabbed() bool {
	return (bool)(C.QPointerEvent_allPointsGrabbed(this.h))
}

func (this *QPointerEvent) IsBeginEvent() bool {
	return (bool)(C.QPointerEvent_isBeginEvent(this.h))
}

func (this *QPointerEvent) IsUpdateEvent() bool {
	return (bool)(C.QPointerEvent_isUpdateEvent(this.h))
}

func (this *QPointerEvent) IsEndEvent() bool {
	return (bool)(C.QPointerEvent_isEndEvent(this.h))
}

func (this *QPointerEvent) AllPointsAccepted() bool {
	return (bool)(C.QPointerEvent_allPointsAccepted(this.h))
}

func (this *QPointerEvent) SetAccepted(accepted bool) {
	C.QPointerEvent_setAccepted(this.h, (C.bool)(accepted))
}

func (this *QPointerEvent) ExclusiveGrabber(point *QEventPoint) *QObject {
	return newQObject(C.QPointerEvent_exclusiveGrabber(this.h, point.cPointer()))
}

func (this *QPointerEvent) SetExclusiveGrabber(point *QEventPoint, exclusiveGrabber *QObject) {
	C.QPointerEvent_setExclusiveGrabber(this.h, point.cPointer(), exclusiveGrabber.cPointer())
}

func (this *QPointerEvent) ClearPassiveGrabbers(point *QEventPoint) {
	C.QPointerEvent_clearPassiveGrabbers(this.h, point.cPointer())
}

func (this *QPointerEvent) AddPassiveGrabber(point *QEventPoint, grabber *QObject) bool {
	return (bool)(C.QPointerEvent_addPassiveGrabber(this.h, point.cPointer(), grabber.cPointer()))
}

func (this *QPointerEvent) RemovePassiveGrabber(point *QEventPoint, grabber *QObject) bool {
	return (bool)(C.QPointerEvent_removePassiveGrabber(this.h, point.cPointer(), grabber.cPointer()))
}

func (this *QPointerEvent) callVirtualBase_Clone() *QPointerEvent {

	return newQPointerEvent(C.QPointerEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QPointerEvent) OnClone(slot func(super func() *QPointerEvent) *QPointerEvent) {
	ok := C.QPointerEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointerEvent_clone
func miqt_exec_callback_QPointerEvent_clone(self *C.QPointerEvent, cb C.intptr_t) *C.QPointerEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPointerEvent) *QPointerEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPointerEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QPointerEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QPointerEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QPointerEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QPointerEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointerEvent_setTimestamp
func miqt_exec_callback_QPointerEvent_setTimestamp(self *C.QPointerEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QPointerEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QPointerEvent) callVirtualBase_IsBeginEvent() bool {

	return (bool)(C.QPointerEvent_virtualbase_isBeginEvent(unsafe.Pointer(this.h)))

}
func (this *QPointerEvent) OnIsBeginEvent(slot func(super func() bool) bool) {
	ok := C.QPointerEvent_override_virtual_isBeginEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointerEvent_isBeginEvent
func miqt_exec_callback_QPointerEvent_isBeginEvent(self *C.QPointerEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPointerEvent{h: self}).callVirtualBase_IsBeginEvent)

	return (C.bool)(virtualReturn)

}

func (this *QPointerEvent) callVirtualBase_IsUpdateEvent() bool {

	return (bool)(C.QPointerEvent_virtualbase_isUpdateEvent(unsafe.Pointer(this.h)))

}
func (this *QPointerEvent) OnIsUpdateEvent(slot func(super func() bool) bool) {
	ok := C.QPointerEvent_override_virtual_isUpdateEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointerEvent_isUpdateEvent
func miqt_exec_callback_QPointerEvent_isUpdateEvent(self *C.QPointerEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPointerEvent{h: self}).callVirtualBase_IsUpdateEvent)

	return (C.bool)(virtualReturn)

}

func (this *QPointerEvent) callVirtualBase_IsEndEvent() bool {

	return (bool)(C.QPointerEvent_virtualbase_isEndEvent(unsafe.Pointer(this.h)))

}
func (this *QPointerEvent) OnIsEndEvent(slot func(super func() bool) bool) {
	ok := C.QPointerEvent_override_virtual_isEndEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointerEvent_isEndEvent
func miqt_exec_callback_QPointerEvent_isEndEvent(self *C.QPointerEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPointerEvent{h: self}).callVirtualBase_IsEndEvent)

	return (C.bool)(virtualReturn)

}

func (this *QPointerEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QPointerEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QPointerEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QPointerEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointerEvent_setAccepted
func miqt_exec_callback_QPointerEvent_setAccepted(self *C.QPointerEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QPointerEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QPointerEvent) Delete() {
	C.QPointerEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPointerEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QPointerEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSinglePointEvent struct {
	h *C.QSinglePointEvent
	*QPointerEvent
}

func (this *QSinglePointEvent) cPointer() *C.QSinglePointEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSinglePointEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSinglePointEvent constructs the type using only CGO pointers.
func newQSinglePointEvent(h *C.QSinglePointEvent) *QSinglePointEvent {
	if h == nil {
		return nil
	}
	var outptr_QPointerEvent *C.QPointerEvent = nil
	C.QSinglePointEvent_virtbase(h, &outptr_QPointerEvent)

	return &QSinglePointEvent{h: h,
		QPointerEvent: newQPointerEvent(outptr_QPointerEvent)}
}

// UnsafeNewQSinglePointEvent constructs the type using only unsafe pointers.
func UnsafeNewQSinglePointEvent(h unsafe.Pointer) *QSinglePointEvent {
	return newQSinglePointEvent((*C.QSinglePointEvent)(h))
}

func (this *QSinglePointEvent) Clone() *QSinglePointEvent {
	return newQSinglePointEvent(C.QSinglePointEvent_clone(this.h))
}

func (this *QSinglePointEvent) Button() MouseButton {
	return (MouseButton)(C.QSinglePointEvent_button(this.h))
}

func (this *QSinglePointEvent) Buttons() MouseButton {
	return (MouseButton)(C.QSinglePointEvent_buttons(this.h))
}

func (this *QSinglePointEvent) Position() *QPointF {
	_goptr := newQPointF(C.QSinglePointEvent_position(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSinglePointEvent) ScenePosition() *QPointF {
	_goptr := newQPointF(C.QSinglePointEvent_scenePosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSinglePointEvent) GlobalPosition() *QPointF {
	_goptr := newQPointF(C.QSinglePointEvent_globalPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSinglePointEvent) IsBeginEvent() bool {
	return (bool)(C.QSinglePointEvent_isBeginEvent(this.h))
}

func (this *QSinglePointEvent) IsUpdateEvent() bool {
	return (bool)(C.QSinglePointEvent_isUpdateEvent(this.h))
}

func (this *QSinglePointEvent) IsEndEvent() bool {
	return (bool)(C.QSinglePointEvent_isEndEvent(this.h))
}

func (this *QSinglePointEvent) ExclusivePointGrabber() *QObject {
	return newQObject(C.QSinglePointEvent_exclusivePointGrabber(this.h))
}

func (this *QSinglePointEvent) SetExclusivePointGrabber(exclusiveGrabber *QObject) {
	C.QSinglePointEvent_setExclusivePointGrabber(this.h, exclusiveGrabber.cPointer())
}

// Delete this object from C++ memory.
func (this *QSinglePointEvent) Delete() {
	C.QSinglePointEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSinglePointEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QSinglePointEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QEnterEvent struct {
	h *C.QEnterEvent
	*QSinglePointEvent
}

func (this *QEnterEvent) cPointer() *C.QEnterEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEnterEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQEnterEvent constructs the type using only CGO pointers.
func newQEnterEvent(h *C.QEnterEvent) *QEnterEvent {
	if h == nil {
		return nil
	}
	var outptr_QSinglePointEvent *C.QSinglePointEvent = nil
	C.QEnterEvent_virtbase(h, &outptr_QSinglePointEvent)

	return &QEnterEvent{h: h,
		QSinglePointEvent: newQSinglePointEvent(outptr_QSinglePointEvent)}
}

// UnsafeNewQEnterEvent constructs the type using only unsafe pointers.
func UnsafeNewQEnterEvent(h unsafe.Pointer) *QEnterEvent {
	return newQEnterEvent((*C.QEnterEvent)(h))
}

// NewQEnterEvent constructs a new QEnterEvent object.
func NewQEnterEvent(localPos *QPointF, scenePos *QPointF, globalPos *QPointF) *QEnterEvent {

	return newQEnterEvent(C.QEnterEvent_new(localPos.cPointer(), scenePos.cPointer(), globalPos.cPointer()))
}

// NewQEnterEvent2 constructs a new QEnterEvent object.
func NewQEnterEvent2(localPos *QPointF, scenePos *QPointF, globalPos *QPointF, device *QPointingDevice) *QEnterEvent {

	return newQEnterEvent(C.QEnterEvent_new2(localPos.cPointer(), scenePos.cPointer(), globalPos.cPointer(), device.cPointer()))
}

func (this *QEnterEvent) Clone() *QEnterEvent {
	return newQEnterEvent(C.QEnterEvent_clone(this.h))
}

func (this *QEnterEvent) Pos() *QPoint {
	_goptr := newQPoint(C.QEnterEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEnterEvent) GlobalPos() *QPoint {
	_goptr := newQPoint(C.QEnterEvent_globalPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEnterEvent) X() int {
	return (int)(C.QEnterEvent_x(this.h))
}

func (this *QEnterEvent) Y() int {
	return (int)(C.QEnterEvent_y(this.h))
}

func (this *QEnterEvent) GlobalX() int {
	return (int)(C.QEnterEvent_globalX(this.h))
}

func (this *QEnterEvent) GlobalY() int {
	return (int)(C.QEnterEvent_globalY(this.h))
}

func (this *QEnterEvent) LocalPos() *QPointF {
	_goptr := newQPointF(C.QEnterEvent_localPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEnterEvent) WindowPos() *QPointF {
	_goptr := newQPointF(C.QEnterEvent_windowPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEnterEvent) ScreenPos() *QPointF {
	_goptr := newQPointF(C.QEnterEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEnterEvent) callVirtualBase_Clone() *QEnterEvent {

	return newQEnterEvent(C.QEnterEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QEnterEvent) OnClone(slot func(super func() *QEnterEvent) *QEnterEvent) {
	ok := C.QEnterEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEnterEvent_clone
func miqt_exec_callback_QEnterEvent_clone(self *C.QEnterEvent, cb C.intptr_t) *C.QEnterEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QEnterEvent) *QEnterEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QEnterEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QEnterEvent) callVirtualBase_IsBeginEvent() bool {

	return (bool)(C.QEnterEvent_virtualbase_isBeginEvent(unsafe.Pointer(this.h)))

}
func (this *QEnterEvent) OnIsBeginEvent(slot func(super func() bool) bool) {
	ok := C.QEnterEvent_override_virtual_isBeginEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEnterEvent_isBeginEvent
func miqt_exec_callback_QEnterEvent_isBeginEvent(self *C.QEnterEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QEnterEvent{h: self}).callVirtualBase_IsBeginEvent)

	return (C.bool)(virtualReturn)

}

func (this *QEnterEvent) callVirtualBase_IsUpdateEvent() bool {

	return (bool)(C.QEnterEvent_virtualbase_isUpdateEvent(unsafe.Pointer(this.h)))

}
func (this *QEnterEvent) OnIsUpdateEvent(slot func(super func() bool) bool) {
	ok := C.QEnterEvent_override_virtual_isUpdateEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEnterEvent_isUpdateEvent
func miqt_exec_callback_QEnterEvent_isUpdateEvent(self *C.QEnterEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QEnterEvent{h: self}).callVirtualBase_IsUpdateEvent)

	return (C.bool)(virtualReturn)

}

func (this *QEnterEvent) callVirtualBase_IsEndEvent() bool {

	return (bool)(C.QEnterEvent_virtualbase_isEndEvent(unsafe.Pointer(this.h)))

}
func (this *QEnterEvent) OnIsEndEvent(slot func(super func() bool) bool) {
	ok := C.QEnterEvent_override_virtual_isEndEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEnterEvent_isEndEvent
func miqt_exec_callback_QEnterEvent_isEndEvent(self *C.QEnterEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QEnterEvent{h: self}).callVirtualBase_IsEndEvent)

	return (C.bool)(virtualReturn)

}

func (this *QEnterEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QEnterEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QEnterEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QEnterEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEnterEvent_setTimestamp
func miqt_exec_callback_QEnterEvent_setTimestamp(self *C.QEnterEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QEnterEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QEnterEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QEnterEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QEnterEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QEnterEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEnterEvent_setAccepted
func miqt_exec_callback_QEnterEvent_setAccepted(self *C.QEnterEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QEnterEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QEnterEvent) Delete() {
	C.QEnterEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEnterEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QEnterEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMouseEvent struct {
	h *C.QMouseEvent
	*QSinglePointEvent
}

func (this *QMouseEvent) cPointer() *C.QMouseEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMouseEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMouseEvent constructs the type using only CGO pointers.
func newQMouseEvent(h *C.QMouseEvent) *QMouseEvent {
	if h == nil {
		return nil
	}
	var outptr_QSinglePointEvent *C.QSinglePointEvent = nil
	C.QMouseEvent_virtbase(h, &outptr_QSinglePointEvent)

	return &QMouseEvent{h: h,
		QSinglePointEvent: newQSinglePointEvent(outptr_QSinglePointEvent)}
}

// UnsafeNewQMouseEvent constructs the type using only unsafe pointers.
func UnsafeNewQMouseEvent(h unsafe.Pointer) *QMouseEvent {
	return newQMouseEvent((*C.QMouseEvent)(h))
}

// NewQMouseEvent constructs a new QMouseEvent object.
func NewQMouseEvent(typeVal QEvent__Type, localPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {

	return newQMouseEvent(C.QMouseEvent_new((C.int)(typeVal), localPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQMouseEvent2 constructs a new QMouseEvent object.
func NewQMouseEvent2(typeVal QEvent__Type, localPos *QPointF, globalPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {

	return newQMouseEvent(C.QMouseEvent_new2((C.int)(typeVal), localPos.cPointer(), globalPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQMouseEvent3 constructs a new QMouseEvent object.
func NewQMouseEvent3(typeVal QEvent__Type, localPos *QPointF, scenePos *QPointF, globalPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {

	return newQMouseEvent(C.QMouseEvent_new3((C.int)(typeVal), localPos.cPointer(), scenePos.cPointer(), globalPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQMouseEvent4 constructs a new QMouseEvent object.
func NewQMouseEvent4(typeVal QEvent__Type, localPos *QPointF, scenePos *QPointF, globalPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier, source MouseEventSource) *QMouseEvent {

	return newQMouseEvent(C.QMouseEvent_new4((C.int)(typeVal), localPos.cPointer(), scenePos.cPointer(), globalPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), (C.int)(source)))
}

// NewQMouseEvent5 constructs a new QMouseEvent object.
func NewQMouseEvent5(typeVal QEvent__Type, localPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier, device *QPointingDevice) *QMouseEvent {

	return newQMouseEvent(C.QMouseEvent_new5((C.int)(typeVal), localPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), device.cPointer()))
}

// NewQMouseEvent6 constructs a new QMouseEvent object.
func NewQMouseEvent6(typeVal QEvent__Type, localPos *QPointF, globalPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier, device *QPointingDevice) *QMouseEvent {

	return newQMouseEvent(C.QMouseEvent_new6((C.int)(typeVal), localPos.cPointer(), globalPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), device.cPointer()))
}

// NewQMouseEvent7 constructs a new QMouseEvent object.
func NewQMouseEvent7(typeVal QEvent__Type, localPos *QPointF, scenePos *QPointF, globalPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier, device *QPointingDevice) *QMouseEvent {

	return newQMouseEvent(C.QMouseEvent_new7((C.int)(typeVal), localPos.cPointer(), scenePos.cPointer(), globalPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), device.cPointer()))
}

// NewQMouseEvent8 constructs a new QMouseEvent object.
func NewQMouseEvent8(typeVal QEvent__Type, localPos *QPointF, scenePos *QPointF, globalPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier, source MouseEventSource, device *QPointingDevice) *QMouseEvent {

	return newQMouseEvent(C.QMouseEvent_new8((C.int)(typeVal), localPos.cPointer(), scenePos.cPointer(), globalPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), (C.int)(source), device.cPointer()))
}

func (this *QMouseEvent) Clone() *QMouseEvent {
	return newQMouseEvent(C.QMouseEvent_clone(this.h))
}

func (this *QMouseEvent) Pos() *QPoint {
	_goptr := newQPoint(C.QMouseEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEvent) GlobalPos() *QPoint {
	_goptr := newQPoint(C.QMouseEvent_globalPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEvent) X() int {
	return (int)(C.QMouseEvent_x(this.h))
}

func (this *QMouseEvent) Y() int {
	return (int)(C.QMouseEvent_y(this.h))
}

func (this *QMouseEvent) GlobalX() int {
	return (int)(C.QMouseEvent_globalX(this.h))
}

func (this *QMouseEvent) GlobalY() int {
	return (int)(C.QMouseEvent_globalY(this.h))
}

func (this *QMouseEvent) LocalPos() *QPointF {
	_goptr := newQPointF(C.QMouseEvent_localPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEvent) WindowPos() *QPointF {
	_goptr := newQPointF(C.QMouseEvent_windowPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEvent) ScreenPos() *QPointF {
	_goptr := newQPointF(C.QMouseEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEvent) Source() MouseEventSource {
	return (MouseEventSource)(C.QMouseEvent_source(this.h))
}

func (this *QMouseEvent) Flags() MouseEventFlag {
	return (MouseEventFlag)(C.QMouseEvent_flags(this.h))
}

func (this *QMouseEvent) callVirtualBase_Clone() *QMouseEvent {

	return newQMouseEvent(C.QMouseEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QMouseEvent) OnClone(slot func(super func() *QMouseEvent) *QMouseEvent) {
	ok := C.QMouseEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEvent_clone
func miqt_exec_callback_QMouseEvent_clone(self *C.QMouseEvent, cb C.intptr_t) *C.QMouseEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMouseEvent) *QMouseEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMouseEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QMouseEvent) callVirtualBase_IsBeginEvent() bool {

	return (bool)(C.QMouseEvent_virtualbase_isBeginEvent(unsafe.Pointer(this.h)))

}
func (this *QMouseEvent) OnIsBeginEvent(slot func(super func() bool) bool) {
	ok := C.QMouseEvent_override_virtual_isBeginEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEvent_isBeginEvent
func miqt_exec_callback_QMouseEvent_isBeginEvent(self *C.QMouseEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMouseEvent{h: self}).callVirtualBase_IsBeginEvent)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEvent) callVirtualBase_IsUpdateEvent() bool {

	return (bool)(C.QMouseEvent_virtualbase_isUpdateEvent(unsafe.Pointer(this.h)))

}
func (this *QMouseEvent) OnIsUpdateEvent(slot func(super func() bool) bool) {
	ok := C.QMouseEvent_override_virtual_isUpdateEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEvent_isUpdateEvent
func miqt_exec_callback_QMouseEvent_isUpdateEvent(self *C.QMouseEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMouseEvent{h: self}).callVirtualBase_IsUpdateEvent)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEvent) callVirtualBase_IsEndEvent() bool {

	return (bool)(C.QMouseEvent_virtualbase_isEndEvent(unsafe.Pointer(this.h)))

}
func (this *QMouseEvent) OnIsEndEvent(slot func(super func() bool) bool) {
	ok := C.QMouseEvent_override_virtual_isEndEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEvent_isEndEvent
func miqt_exec_callback_QMouseEvent_isEndEvent(self *C.QMouseEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMouseEvent{h: self}).callVirtualBase_IsEndEvent)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QMouseEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QMouseEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QMouseEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEvent_setTimestamp
func miqt_exec_callback_QMouseEvent_setTimestamp(self *C.QMouseEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QMouseEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QMouseEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QMouseEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QMouseEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QMouseEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEvent_setAccepted
func miqt_exec_callback_QMouseEvent_setAccepted(self *C.QMouseEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QMouseEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QMouseEvent) Delete() {
	C.QMouseEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMouseEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QMouseEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHoverEvent struct {
	h *C.QHoverEvent
	*QSinglePointEvent
}

func (this *QHoverEvent) cPointer() *C.QHoverEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHoverEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHoverEvent constructs the type using only CGO pointers.
func newQHoverEvent(h *C.QHoverEvent) *QHoverEvent {
	if h == nil {
		return nil
	}
	var outptr_QSinglePointEvent *C.QSinglePointEvent = nil
	C.QHoverEvent_virtbase(h, &outptr_QSinglePointEvent)

	return &QHoverEvent{h: h,
		QSinglePointEvent: newQSinglePointEvent(outptr_QSinglePointEvent)}
}

// UnsafeNewQHoverEvent constructs the type using only unsafe pointers.
func UnsafeNewQHoverEvent(h unsafe.Pointer) *QHoverEvent {
	return newQHoverEvent((*C.QHoverEvent)(h))
}

// NewQHoverEvent constructs a new QHoverEvent object.
func NewQHoverEvent(typeVal QEvent__Type, scenePos *QPointF, globalPos *QPointF, oldPos *QPointF) *QHoverEvent {

	return newQHoverEvent(C.QHoverEvent_new((C.int)(typeVal), scenePos.cPointer(), globalPos.cPointer(), oldPos.cPointer()))
}

// NewQHoverEvent2 constructs a new QHoverEvent object.
func NewQHoverEvent2(typeVal QEvent__Type, pos *QPointF, oldPos *QPointF) *QHoverEvent {

	return newQHoverEvent(C.QHoverEvent_new2((C.int)(typeVal), pos.cPointer(), oldPos.cPointer()))
}

// NewQHoverEvent3 constructs a new QHoverEvent object.
func NewQHoverEvent3(typeVal QEvent__Type, scenePos *QPointF, globalPos *QPointF, oldPos *QPointF, modifiers KeyboardModifier) *QHoverEvent {

	return newQHoverEvent(C.QHoverEvent_new3((C.int)(typeVal), scenePos.cPointer(), globalPos.cPointer(), oldPos.cPointer(), (C.int)(modifiers)))
}

// NewQHoverEvent4 constructs a new QHoverEvent object.
func NewQHoverEvent4(typeVal QEvent__Type, scenePos *QPointF, globalPos *QPointF, oldPos *QPointF, modifiers KeyboardModifier, device *QPointingDevice) *QHoverEvent {

	return newQHoverEvent(C.QHoverEvent_new4((C.int)(typeVal), scenePos.cPointer(), globalPos.cPointer(), oldPos.cPointer(), (C.int)(modifiers), device.cPointer()))
}

// NewQHoverEvent5 constructs a new QHoverEvent object.
func NewQHoverEvent5(typeVal QEvent__Type, pos *QPointF, oldPos *QPointF, modifiers KeyboardModifier) *QHoverEvent {

	return newQHoverEvent(C.QHoverEvent_new5((C.int)(typeVal), pos.cPointer(), oldPos.cPointer(), (C.int)(modifiers)))
}

// NewQHoverEvent6 constructs a new QHoverEvent object.
func NewQHoverEvent6(typeVal QEvent__Type, pos *QPointF, oldPos *QPointF, modifiers KeyboardModifier, device *QPointingDevice) *QHoverEvent {

	return newQHoverEvent(C.QHoverEvent_new6((C.int)(typeVal), pos.cPointer(), oldPos.cPointer(), (C.int)(modifiers), device.cPointer()))
}

func (this *QHoverEvent) Clone() *QHoverEvent {
	return newQHoverEvent(C.QHoverEvent_clone(this.h))
}

func (this *QHoverEvent) Pos() *QPoint {
	_goptr := newQPoint(C.QHoverEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHoverEvent) PosF() *QPointF {
	_goptr := newQPointF(C.QHoverEvent_posF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHoverEvent) IsUpdateEvent() bool {
	return (bool)(C.QHoverEvent_isUpdateEvent(this.h))
}

func (this *QHoverEvent) OldPos() *QPoint {
	_goptr := newQPoint(C.QHoverEvent_oldPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHoverEvent) OldPosF() *QPointF {
	_goptr := newQPointF(C.QHoverEvent_oldPosF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHoverEvent) callVirtualBase_Clone() *QHoverEvent {

	return newQHoverEvent(C.QHoverEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QHoverEvent) OnClone(slot func(super func() *QHoverEvent) *QHoverEvent) {
	ok := C.QHoverEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHoverEvent_clone
func miqt_exec_callback_QHoverEvent_clone(self *C.QHoverEvent, cb C.intptr_t) *C.QHoverEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QHoverEvent) *QHoverEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHoverEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QHoverEvent) callVirtualBase_IsUpdateEvent() bool {

	return (bool)(C.QHoverEvent_virtualbase_isUpdateEvent(unsafe.Pointer(this.h)))

}
func (this *QHoverEvent) OnIsUpdateEvent(slot func(super func() bool) bool) {
	ok := C.QHoverEvent_override_virtual_isUpdateEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHoverEvent_isUpdateEvent
func miqt_exec_callback_QHoverEvent_isUpdateEvent(self *C.QHoverEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHoverEvent{h: self}).callVirtualBase_IsUpdateEvent)

	return (C.bool)(virtualReturn)

}

func (this *QHoverEvent) callVirtualBase_IsBeginEvent() bool {

	return (bool)(C.QHoverEvent_virtualbase_isBeginEvent(unsafe.Pointer(this.h)))

}
func (this *QHoverEvent) OnIsBeginEvent(slot func(super func() bool) bool) {
	ok := C.QHoverEvent_override_virtual_isBeginEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHoverEvent_isBeginEvent
func miqt_exec_callback_QHoverEvent_isBeginEvent(self *C.QHoverEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHoverEvent{h: self}).callVirtualBase_IsBeginEvent)

	return (C.bool)(virtualReturn)

}

func (this *QHoverEvent) callVirtualBase_IsEndEvent() bool {

	return (bool)(C.QHoverEvent_virtualbase_isEndEvent(unsafe.Pointer(this.h)))

}
func (this *QHoverEvent) OnIsEndEvent(slot func(super func() bool) bool) {
	ok := C.QHoverEvent_override_virtual_isEndEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHoverEvent_isEndEvent
func miqt_exec_callback_QHoverEvent_isEndEvent(self *C.QHoverEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHoverEvent{h: self}).callVirtualBase_IsEndEvent)

	return (C.bool)(virtualReturn)

}

func (this *QHoverEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QHoverEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QHoverEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QHoverEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHoverEvent_setTimestamp
func miqt_exec_callback_QHoverEvent_setTimestamp(self *C.QHoverEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QHoverEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QHoverEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QHoverEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QHoverEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QHoverEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHoverEvent_setAccepted
func miqt_exec_callback_QHoverEvent_setAccepted(self *C.QHoverEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QHoverEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QHoverEvent) Delete() {
	C.QHoverEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHoverEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QHoverEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWheelEvent struct {
	h *C.QWheelEvent
	*QSinglePointEvent
}

func (this *QWheelEvent) cPointer() *C.QWheelEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWheelEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWheelEvent constructs the type using only CGO pointers.
func newQWheelEvent(h *C.QWheelEvent) *QWheelEvent {
	if h == nil {
		return nil
	}
	var outptr_QSinglePointEvent *C.QSinglePointEvent = nil
	C.QWheelEvent_virtbase(h, &outptr_QSinglePointEvent)

	return &QWheelEvent{h: h,
		QSinglePointEvent: newQSinglePointEvent(outptr_QSinglePointEvent)}
}

// UnsafeNewQWheelEvent constructs the type using only unsafe pointers.
func UnsafeNewQWheelEvent(h unsafe.Pointer) *QWheelEvent {
	return newQWheelEvent((*C.QWheelEvent)(h))
}

// NewQWheelEvent constructs a new QWheelEvent object.
func NewQWheelEvent(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, inverted bool) *QWheelEvent {

	return newQWheelEvent(C.QWheelEvent_new(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.bool)(inverted)))
}

// NewQWheelEvent2 constructs a new QWheelEvent object.
func NewQWheelEvent2(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, inverted bool, source MouseEventSource) *QWheelEvent {

	return newQWheelEvent(C.QWheelEvent_new2(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.bool)(inverted), (C.int)(source)))
}

// NewQWheelEvent3 constructs a new QWheelEvent object.
func NewQWheelEvent3(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, inverted bool, source MouseEventSource, device *QPointingDevice) *QWheelEvent {

	return newQWheelEvent(C.QWheelEvent_new3(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.bool)(inverted), (C.int)(source), device.cPointer()))
}

func (this *QWheelEvent) Clone() *QWheelEvent {
	return newQWheelEvent(C.QWheelEvent_clone(this.h))
}

func (this *QWheelEvent) PixelDelta() *QPoint {
	_goptr := newQPoint(C.QWheelEvent_pixelDelta(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) AngleDelta() *QPoint {
	_goptr := newQPoint(C.QWheelEvent_angleDelta(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) Phase() ScrollPhase {
	return (ScrollPhase)(C.QWheelEvent_phase(this.h))
}

func (this *QWheelEvent) Inverted() bool {
	return (bool)(C.QWheelEvent_inverted(this.h))
}

func (this *QWheelEvent) IsInverted() bool {
	return (bool)(C.QWheelEvent_isInverted(this.h))
}

func (this *QWheelEvent) HasPixelDelta() bool {
	return (bool)(C.QWheelEvent_hasPixelDelta(this.h))
}

func (this *QWheelEvent) IsBeginEvent() bool {
	return (bool)(C.QWheelEvent_isBeginEvent(this.h))
}

func (this *QWheelEvent) IsUpdateEvent() bool {
	return (bool)(C.QWheelEvent_isUpdateEvent(this.h))
}

func (this *QWheelEvent) IsEndEvent() bool {
	return (bool)(C.QWheelEvent_isEndEvent(this.h))
}

func (this *QWheelEvent) Source() MouseEventSource {
	return (MouseEventSource)(C.QWheelEvent_source(this.h))
}

func (this *QWheelEvent) callVirtualBase_Clone() *QWheelEvent {

	return newQWheelEvent(C.QWheelEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QWheelEvent) OnClone(slot func(super func() *QWheelEvent) *QWheelEvent) {
	ok := C.QWheelEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWheelEvent_clone
func miqt_exec_callback_QWheelEvent_clone(self *C.QWheelEvent, cb C.intptr_t) *C.QWheelEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWheelEvent) *QWheelEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWheelEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QWheelEvent) callVirtualBase_IsBeginEvent() bool {

	return (bool)(C.QWheelEvent_virtualbase_isBeginEvent(unsafe.Pointer(this.h)))

}
func (this *QWheelEvent) OnIsBeginEvent(slot func(super func() bool) bool) {
	ok := C.QWheelEvent_override_virtual_isBeginEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWheelEvent_isBeginEvent
func miqt_exec_callback_QWheelEvent_isBeginEvent(self *C.QWheelEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWheelEvent{h: self}).callVirtualBase_IsBeginEvent)

	return (C.bool)(virtualReturn)

}

func (this *QWheelEvent) callVirtualBase_IsUpdateEvent() bool {

	return (bool)(C.QWheelEvent_virtualbase_isUpdateEvent(unsafe.Pointer(this.h)))

}
func (this *QWheelEvent) OnIsUpdateEvent(slot func(super func() bool) bool) {
	ok := C.QWheelEvent_override_virtual_isUpdateEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWheelEvent_isUpdateEvent
func miqt_exec_callback_QWheelEvent_isUpdateEvent(self *C.QWheelEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWheelEvent{h: self}).callVirtualBase_IsUpdateEvent)

	return (C.bool)(virtualReturn)

}

func (this *QWheelEvent) callVirtualBase_IsEndEvent() bool {

	return (bool)(C.QWheelEvent_virtualbase_isEndEvent(unsafe.Pointer(this.h)))

}
func (this *QWheelEvent) OnIsEndEvent(slot func(super func() bool) bool) {
	ok := C.QWheelEvent_override_virtual_isEndEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWheelEvent_isEndEvent
func miqt_exec_callback_QWheelEvent_isEndEvent(self *C.QWheelEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWheelEvent{h: self}).callVirtualBase_IsEndEvent)

	return (C.bool)(virtualReturn)

}

func (this *QWheelEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QWheelEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QWheelEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QWheelEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWheelEvent_setTimestamp
func miqt_exec_callback_QWheelEvent_setTimestamp(self *C.QWheelEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QWheelEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QWheelEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QWheelEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QWheelEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QWheelEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWheelEvent_setAccepted
func miqt_exec_callback_QWheelEvent_setAccepted(self *C.QWheelEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QWheelEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QWheelEvent) Delete() {
	C.QWheelEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWheelEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QWheelEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTabletEvent struct {
	h *C.QTabletEvent
	*QSinglePointEvent
}

func (this *QTabletEvent) cPointer() *C.QTabletEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTabletEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTabletEvent constructs the type using only CGO pointers.
func newQTabletEvent(h *C.QTabletEvent) *QTabletEvent {
	if h == nil {
		return nil
	}
	var outptr_QSinglePointEvent *C.QSinglePointEvent = nil
	C.QTabletEvent_virtbase(h, &outptr_QSinglePointEvent)

	return &QTabletEvent{h: h,
		QSinglePointEvent: newQSinglePointEvent(outptr_QSinglePointEvent)}
}

// UnsafeNewQTabletEvent constructs the type using only unsafe pointers.
func UnsafeNewQTabletEvent(h unsafe.Pointer) *QTabletEvent {
	return newQTabletEvent((*C.QTabletEvent)(h))
}

// NewQTabletEvent constructs a new QTabletEvent object.
func NewQTabletEvent(t QEvent__Type, device *QPointingDevice, pos *QPointF, globalPos *QPointF, pressure float64, xTilt float32, yTilt float32, tangentialPressure float32, rotation float64, z float32, keyState KeyboardModifier, button MouseButton, buttons MouseButton) *QTabletEvent {

	return newQTabletEvent(C.QTabletEvent_new((C.int)(t), device.cPointer(), pos.cPointer(), globalPos.cPointer(), (C.double)(pressure), (C.float)(xTilt), (C.float)(yTilt), (C.float)(tangentialPressure), (C.double)(rotation), (C.float)(z), (C.int)(keyState), (C.int)(button), (C.int)(buttons)))
}

func (this *QTabletEvent) Clone() *QTabletEvent {
	return newQTabletEvent(C.QTabletEvent_clone(this.h))
}

func (this *QTabletEvent) Pos() *QPoint {
	_goptr := newQPoint(C.QTabletEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabletEvent) GlobalPos() *QPoint {
	_goptr := newQPoint(C.QTabletEvent_globalPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabletEvent) PosF() *QPointF {
	_goptr := newQPointF(C.QTabletEvent_posF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabletEvent) GlobalPosF() *QPointF {
	_goptr := newQPointF(C.QTabletEvent_globalPosF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabletEvent) X() int {
	return (int)(C.QTabletEvent_x(this.h))
}

func (this *QTabletEvent) Y() int {
	return (int)(C.QTabletEvent_y(this.h))
}

func (this *QTabletEvent) GlobalX() int {
	return (int)(C.QTabletEvent_globalX(this.h))
}

func (this *QTabletEvent) GlobalY() int {
	return (int)(C.QTabletEvent_globalY(this.h))
}

func (this *QTabletEvent) HiResGlobalX() float64 {
	return (float64)(C.QTabletEvent_hiResGlobalX(this.h))
}

func (this *QTabletEvent) HiResGlobalY() float64 {
	return (float64)(C.QTabletEvent_hiResGlobalY(this.h))
}

func (this *QTabletEvent) UniqueId() int64 {
	return (int64)(C.QTabletEvent_uniqueId(this.h))
}

func (this *QTabletEvent) Pressure() float64 {
	return (float64)(C.QTabletEvent_pressure(this.h))
}

func (this *QTabletEvent) Rotation() float64 {
	return (float64)(C.QTabletEvent_rotation(this.h))
}

func (this *QTabletEvent) Z() float64 {
	return (float64)(C.QTabletEvent_z(this.h))
}

func (this *QTabletEvent) TangentialPressure() float64 {
	return (float64)(C.QTabletEvent_tangentialPressure(this.h))
}

func (this *QTabletEvent) XTilt() float64 {
	return (float64)(C.QTabletEvent_xTilt(this.h))
}

func (this *QTabletEvent) YTilt() float64 {
	return (float64)(C.QTabletEvent_yTilt(this.h))
}

func (this *QTabletEvent) callVirtualBase_Clone() *QTabletEvent {

	return newQTabletEvent(C.QTabletEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QTabletEvent) OnClone(slot func(super func() *QTabletEvent) *QTabletEvent) {
	ok := C.QTabletEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabletEvent_clone
func miqt_exec_callback_QTabletEvent_clone(self *C.QTabletEvent, cb C.intptr_t) *C.QTabletEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTabletEvent) *QTabletEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabletEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QTabletEvent) callVirtualBase_IsBeginEvent() bool {

	return (bool)(C.QTabletEvent_virtualbase_isBeginEvent(unsafe.Pointer(this.h)))

}
func (this *QTabletEvent) OnIsBeginEvent(slot func(super func() bool) bool) {
	ok := C.QTabletEvent_override_virtual_isBeginEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabletEvent_isBeginEvent
func miqt_exec_callback_QTabletEvent_isBeginEvent(self *C.QTabletEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabletEvent{h: self}).callVirtualBase_IsBeginEvent)

	return (C.bool)(virtualReturn)

}

func (this *QTabletEvent) callVirtualBase_IsUpdateEvent() bool {

	return (bool)(C.QTabletEvent_virtualbase_isUpdateEvent(unsafe.Pointer(this.h)))

}
func (this *QTabletEvent) OnIsUpdateEvent(slot func(super func() bool) bool) {
	ok := C.QTabletEvent_override_virtual_isUpdateEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabletEvent_isUpdateEvent
func miqt_exec_callback_QTabletEvent_isUpdateEvent(self *C.QTabletEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabletEvent{h: self}).callVirtualBase_IsUpdateEvent)

	return (C.bool)(virtualReturn)

}

func (this *QTabletEvent) callVirtualBase_IsEndEvent() bool {

	return (bool)(C.QTabletEvent_virtualbase_isEndEvent(unsafe.Pointer(this.h)))

}
func (this *QTabletEvent) OnIsEndEvent(slot func(super func() bool) bool) {
	ok := C.QTabletEvent_override_virtual_isEndEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabletEvent_isEndEvent
func miqt_exec_callback_QTabletEvent_isEndEvent(self *C.QTabletEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTabletEvent{h: self}).callVirtualBase_IsEndEvent)

	return (C.bool)(virtualReturn)

}

func (this *QTabletEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QTabletEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QTabletEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QTabletEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabletEvent_setTimestamp
func miqt_exec_callback_QTabletEvent_setTimestamp(self *C.QTabletEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QTabletEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QTabletEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QTabletEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QTabletEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QTabletEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTabletEvent_setAccepted
func miqt_exec_callback_QTabletEvent_setAccepted(self *C.QTabletEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QTabletEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QTabletEvent) Delete() {
	C.QTabletEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTabletEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QTabletEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QNativeGestureEvent struct {
	h *C.QNativeGestureEvent
	*QSinglePointEvent
}

func (this *QNativeGestureEvent) cPointer() *C.QNativeGestureEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNativeGestureEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNativeGestureEvent constructs the type using only CGO pointers.
func newQNativeGestureEvent(h *C.QNativeGestureEvent) *QNativeGestureEvent {
	if h == nil {
		return nil
	}
	var outptr_QSinglePointEvent *C.QSinglePointEvent = nil
	C.QNativeGestureEvent_virtbase(h, &outptr_QSinglePointEvent)

	return &QNativeGestureEvent{h: h,
		QSinglePointEvent: newQSinglePointEvent(outptr_QSinglePointEvent)}
}

// UnsafeNewQNativeGestureEvent constructs the type using only unsafe pointers.
func UnsafeNewQNativeGestureEvent(h unsafe.Pointer) *QNativeGestureEvent {
	return newQNativeGestureEvent((*C.QNativeGestureEvent)(h))
}

// NewQNativeGestureEvent constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent(typeVal NativeGestureType, dev *QPointingDevice, localPos *QPointF, scenePos *QPointF, globalPos *QPointF, value float64, sequenceId uint64, intArgument uint64) *QNativeGestureEvent {

	return newQNativeGestureEvent(C.QNativeGestureEvent_new((C.int)(typeVal), dev.cPointer(), localPos.cPointer(), scenePos.cPointer(), globalPos.cPointer(), (C.double)(value), (C.ulonglong)(sequenceId), (C.ulonglong)(intArgument)))
}

// NewQNativeGestureEvent2 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent2(typeVal NativeGestureType, dev *QPointingDevice, fingerCount int, localPos *QPointF, scenePos *QPointF, globalPos *QPointF, value float64, delta *QPointF) *QNativeGestureEvent {

	return newQNativeGestureEvent(C.QNativeGestureEvent_new2((C.int)(typeVal), dev.cPointer(), (C.int)(fingerCount), localPos.cPointer(), scenePos.cPointer(), globalPos.cPointer(), (C.double)(value), delta.cPointer()))
}

// NewQNativeGestureEvent3 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent3(typeVal NativeGestureType, dev *QPointingDevice, fingerCount int, localPos *QPointF, scenePos *QPointF, globalPos *QPointF, value float64, delta *QPointF, sequenceId uint64) *QNativeGestureEvent {

	return newQNativeGestureEvent(C.QNativeGestureEvent_new3((C.int)(typeVal), dev.cPointer(), (C.int)(fingerCount), localPos.cPointer(), scenePos.cPointer(), globalPos.cPointer(), (C.double)(value), delta.cPointer(), (C.ulonglong)(sequenceId)))
}

func (this *QNativeGestureEvent) Clone() *QNativeGestureEvent {
	return newQNativeGestureEvent(C.QNativeGestureEvent_clone(this.h))
}

func (this *QNativeGestureEvent) GestureType() NativeGestureType {
	return (NativeGestureType)(C.QNativeGestureEvent_gestureType(this.h))
}

func (this *QNativeGestureEvent) FingerCount() int {
	return (int)(C.QNativeGestureEvent_fingerCount(this.h))
}

func (this *QNativeGestureEvent) Value() float64 {
	return (float64)(C.QNativeGestureEvent_value(this.h))
}

func (this *QNativeGestureEvent) Delta() *QPointF {
	_goptr := newQPointF(C.QNativeGestureEvent_delta(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) Pos() *QPoint {
	_goptr := newQPoint(C.QNativeGestureEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) GlobalPos() *QPoint {
	_goptr := newQPoint(C.QNativeGestureEvent_globalPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) LocalPos() *QPointF {
	_goptr := newQPointF(C.QNativeGestureEvent_localPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) WindowPos() *QPointF {
	_goptr := newQPointF(C.QNativeGestureEvent_windowPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) ScreenPos() *QPointF {
	_goptr := newQPointF(C.QNativeGestureEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) callVirtualBase_Clone() *QNativeGestureEvent {

	return newQNativeGestureEvent(C.QNativeGestureEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QNativeGestureEvent) OnClone(slot func(super func() *QNativeGestureEvent) *QNativeGestureEvent) {
	ok := C.QNativeGestureEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNativeGestureEvent_clone
func miqt_exec_callback_QNativeGestureEvent_clone(self *C.QNativeGestureEvent, cb C.intptr_t) *C.QNativeGestureEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QNativeGestureEvent) *QNativeGestureEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNativeGestureEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QNativeGestureEvent) callVirtualBase_IsBeginEvent() bool {

	return (bool)(C.QNativeGestureEvent_virtualbase_isBeginEvent(unsafe.Pointer(this.h)))

}
func (this *QNativeGestureEvent) OnIsBeginEvent(slot func(super func() bool) bool) {
	ok := C.QNativeGestureEvent_override_virtual_isBeginEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNativeGestureEvent_isBeginEvent
func miqt_exec_callback_QNativeGestureEvent_isBeginEvent(self *C.QNativeGestureEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNativeGestureEvent{h: self}).callVirtualBase_IsBeginEvent)

	return (C.bool)(virtualReturn)

}

func (this *QNativeGestureEvent) callVirtualBase_IsUpdateEvent() bool {

	return (bool)(C.QNativeGestureEvent_virtualbase_isUpdateEvent(unsafe.Pointer(this.h)))

}
func (this *QNativeGestureEvent) OnIsUpdateEvent(slot func(super func() bool) bool) {
	ok := C.QNativeGestureEvent_override_virtual_isUpdateEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNativeGestureEvent_isUpdateEvent
func miqt_exec_callback_QNativeGestureEvent_isUpdateEvent(self *C.QNativeGestureEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNativeGestureEvent{h: self}).callVirtualBase_IsUpdateEvent)

	return (C.bool)(virtualReturn)

}

func (this *QNativeGestureEvent) callVirtualBase_IsEndEvent() bool {

	return (bool)(C.QNativeGestureEvent_virtualbase_isEndEvent(unsafe.Pointer(this.h)))

}
func (this *QNativeGestureEvent) OnIsEndEvent(slot func(super func() bool) bool) {
	ok := C.QNativeGestureEvent_override_virtual_isEndEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNativeGestureEvent_isEndEvent
func miqt_exec_callback_QNativeGestureEvent_isEndEvent(self *C.QNativeGestureEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNativeGestureEvent{h: self}).callVirtualBase_IsEndEvent)

	return (C.bool)(virtualReturn)

}

func (this *QNativeGestureEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QNativeGestureEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QNativeGestureEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QNativeGestureEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNativeGestureEvent_setTimestamp
func miqt_exec_callback_QNativeGestureEvent_setTimestamp(self *C.QNativeGestureEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QNativeGestureEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QNativeGestureEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QNativeGestureEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QNativeGestureEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QNativeGestureEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNativeGestureEvent_setAccepted
func miqt_exec_callback_QNativeGestureEvent_setAccepted(self *C.QNativeGestureEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QNativeGestureEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QNativeGestureEvent) Delete() {
	C.QNativeGestureEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNativeGestureEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QNativeGestureEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QKeyEvent struct {
	h *C.QKeyEvent
	*QInputEvent
}

func (this *QKeyEvent) cPointer() *C.QKeyEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QKeyEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQKeyEvent constructs the type using only CGO pointers.
func newQKeyEvent(h *C.QKeyEvent) *QKeyEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QKeyEvent_virtbase(h, &outptr_QInputEvent)

	return &QKeyEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQKeyEvent constructs the type using only unsafe pointers.
func UnsafeNewQKeyEvent(h unsafe.Pointer) *QKeyEvent {
	return newQKeyEvent((*C.QKeyEvent)(h))
}

// NewQKeyEvent constructs a new QKeyEvent object.
func NewQKeyEvent(typeVal QEvent__Type, key int, modifiers KeyboardModifier) *QKeyEvent {

	return newQKeyEvent(C.QKeyEvent_new((C.int)(typeVal), (C.int)(key), (C.int)(modifiers)))
}

// NewQKeyEvent2 constructs a new QKeyEvent object.
func NewQKeyEvent2(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint) *QKeyEvent {

	return newQKeyEvent(C.QKeyEvent_new2((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers)))
}

// NewQKeyEvent3 constructs a new QKeyEvent object.
func NewQKeyEvent3(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new3((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), text_ms))
}

// NewQKeyEvent4 constructs a new QKeyEvent object.
func NewQKeyEvent4(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string, autorep bool) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new4((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), text_ms, (C.bool)(autorep)))
}

// NewQKeyEvent5 constructs a new QKeyEvent object.
func NewQKeyEvent5(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string, autorep bool, count uint16) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new5((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), text_ms, (C.bool)(autorep), (C.ushort)(count)))
}

// NewQKeyEvent6 constructs a new QKeyEvent object.
func NewQKeyEvent6(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new6((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms))
}

// NewQKeyEvent7 constructs a new QKeyEvent object.
func NewQKeyEvent7(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new7((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms, (C.bool)(autorep)))
}

// NewQKeyEvent8 constructs a new QKeyEvent object.
func NewQKeyEvent8(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool, count uint16) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new8((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms, (C.bool)(autorep), (C.ushort)(count)))
}

// NewQKeyEvent9 constructs a new QKeyEvent object.
func NewQKeyEvent9(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool, count uint16, device *QInputDevice) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new9((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms, (C.bool)(autorep), (C.ushort)(count), device.cPointer()))
}

func (this *QKeyEvent) Clone() *QKeyEvent {
	return newQKeyEvent(C.QKeyEvent_clone(this.h))
}

func (this *QKeyEvent) Key() int {
	return (int)(C.QKeyEvent_key(this.h))
}

func (this *QKeyEvent) Matches(key QKeySequence__StandardKey) bool {
	return (bool)(C.QKeyEvent_matches(this.h, (C.int)(key)))
}

func (this *QKeyEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QKeyEvent_modifiers(this.h))
}

func (this *QKeyEvent) KeyCombination() *QKeyCombination {
	_goptr := newQKeyCombination(C.QKeyEvent_keyCombination(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QKeyEvent) Text() string {
	var _ms C.struct_miqt_string = C.QKeyEvent_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeyEvent) IsAutoRepeat() bool {
	return (bool)(C.QKeyEvent_isAutoRepeat(this.h))
}

func (this *QKeyEvent) Count() int {
	return (int)(C.QKeyEvent_count(this.h))
}

func (this *QKeyEvent) NativeScanCode() uint {
	return (uint)(C.QKeyEvent_nativeScanCode(this.h))
}

func (this *QKeyEvent) NativeVirtualKey() uint {
	return (uint)(C.QKeyEvent_nativeVirtualKey(this.h))
}

func (this *QKeyEvent) NativeModifiers() uint {
	return (uint)(C.QKeyEvent_nativeModifiers(this.h))
}

func (this *QKeyEvent) callVirtualBase_Clone() *QKeyEvent {

	return newQKeyEvent(C.QKeyEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QKeyEvent) OnClone(slot func(super func() *QKeyEvent) *QKeyEvent) {
	ok := C.QKeyEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEvent_clone
func miqt_exec_callback_QKeyEvent_clone(self *C.QKeyEvent, cb C.intptr_t) *C.QKeyEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QKeyEvent) *QKeyEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeyEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QKeyEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QKeyEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QKeyEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QKeyEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEvent_setTimestamp
func miqt_exec_callback_QKeyEvent_setTimestamp(self *C.QKeyEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QKeyEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QKeyEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QKeyEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QKeyEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QKeyEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEvent_setAccepted
func miqt_exec_callback_QKeyEvent_setAccepted(self *C.QKeyEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QKeyEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QKeyEvent) Delete() {
	C.QKeyEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeyEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeyEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QFocusEvent struct {
	h *C.QFocusEvent
	*QEvent
}

func (this *QFocusEvent) cPointer() *C.QFocusEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFocusEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFocusEvent constructs the type using only CGO pointers.
func newQFocusEvent(h *C.QFocusEvent) *QFocusEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QFocusEvent_virtbase(h, &outptr_QEvent)

	return &QFocusEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQFocusEvent constructs the type using only unsafe pointers.
func UnsafeNewQFocusEvent(h unsafe.Pointer) *QFocusEvent {
	return newQFocusEvent((*C.QFocusEvent)(h))
}

// NewQFocusEvent constructs a new QFocusEvent object.
func NewQFocusEvent(typeVal QEvent__Type) *QFocusEvent {

	return newQFocusEvent(C.QFocusEvent_new((C.int)(typeVal)))
}

// NewQFocusEvent2 constructs a new QFocusEvent object.
func NewQFocusEvent2(typeVal QEvent__Type, reason FocusReason) *QFocusEvent {

	return newQFocusEvent(C.QFocusEvent_new2((C.int)(typeVal), (C.int)(reason)))
}

func (this *QFocusEvent) Clone() *QFocusEvent {
	return newQFocusEvent(C.QFocusEvent_clone(this.h))
}

func (this *QFocusEvent) GotFocus() bool {
	return (bool)(C.QFocusEvent_gotFocus(this.h))
}

func (this *QFocusEvent) LostFocus() bool {
	return (bool)(C.QFocusEvent_lostFocus(this.h))
}

func (this *QFocusEvent) Reason() FocusReason {
	return (FocusReason)(C.QFocusEvent_reason(this.h))
}

func (this *QFocusEvent) callVirtualBase_Clone() *QFocusEvent {

	return newQFocusEvent(C.QFocusEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QFocusEvent) OnClone(slot func(super func() *QFocusEvent) *QFocusEvent) {
	ok := C.QFocusEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusEvent_clone
func miqt_exec_callback_QFocusEvent_clone(self *C.QFocusEvent, cb C.intptr_t) *C.QFocusEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QFocusEvent) *QFocusEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QFocusEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QFocusEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QFocusEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QFocusEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusEvent_setAccepted
func miqt_exec_callback_QFocusEvent_setAccepted(self *C.QFocusEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QFocusEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QFocusEvent) Delete() {
	C.QFocusEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFocusEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QFocusEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPaintEvent struct {
	h *C.QPaintEvent
	*QEvent
}

func (this *QPaintEvent) cPointer() *C.QPaintEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPaintEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPaintEvent constructs the type using only CGO pointers.
func newQPaintEvent(h *C.QPaintEvent) *QPaintEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QPaintEvent_virtbase(h, &outptr_QEvent)

	return &QPaintEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQPaintEvent constructs the type using only unsafe pointers.
func UnsafeNewQPaintEvent(h unsafe.Pointer) *QPaintEvent {
	return newQPaintEvent((*C.QPaintEvent)(h))
}

// NewQPaintEvent constructs a new QPaintEvent object.
func NewQPaintEvent(paintRegion *QRegion) *QPaintEvent {

	return newQPaintEvent(C.QPaintEvent_new(paintRegion.cPointer()))
}

// NewQPaintEvent2 constructs a new QPaintEvent object.
func NewQPaintEvent2(paintRect *QRect) *QPaintEvent {

	return newQPaintEvent(C.QPaintEvent_new2(paintRect.cPointer()))
}

func (this *QPaintEvent) Clone() *QPaintEvent {
	return newQPaintEvent(C.QPaintEvent_clone(this.h))
}

func (this *QPaintEvent) Rect() *QRect {
	return newQRect(C.QPaintEvent_rect(this.h))
}

func (this *QPaintEvent) Region() *QRegion {
	return newQRegion(C.QPaintEvent_region(this.h))
}

func (this *QPaintEvent) callVirtualBase_Clone() *QPaintEvent {

	return newQPaintEvent(C.QPaintEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QPaintEvent) OnClone(slot func(super func() *QPaintEvent) *QPaintEvent) {
	ok := C.QPaintEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEvent_clone
func miqt_exec_callback_QPaintEvent_clone(self *C.QPaintEvent, cb C.intptr_t) *C.QPaintEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEvent) *QPaintEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPaintEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QPaintEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QPaintEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QPaintEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QPaintEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPaintEvent_setAccepted
func miqt_exec_callback_QPaintEvent_setAccepted(self *C.QPaintEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QPaintEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QPaintEvent) Delete() {
	C.QPaintEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPaintEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QPaintEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMoveEvent struct {
	h *C.QMoveEvent
	*QEvent
}

func (this *QMoveEvent) cPointer() *C.QMoveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMoveEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMoveEvent constructs the type using only CGO pointers.
func newQMoveEvent(h *C.QMoveEvent) *QMoveEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QMoveEvent_virtbase(h, &outptr_QEvent)

	return &QMoveEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQMoveEvent constructs the type using only unsafe pointers.
func UnsafeNewQMoveEvent(h unsafe.Pointer) *QMoveEvent {
	return newQMoveEvent((*C.QMoveEvent)(h))
}

// NewQMoveEvent constructs a new QMoveEvent object.
func NewQMoveEvent(pos *QPoint, oldPos *QPoint) *QMoveEvent {

	return newQMoveEvent(C.QMoveEvent_new(pos.cPointer(), oldPos.cPointer()))
}

func (this *QMoveEvent) Clone() *QMoveEvent {
	return newQMoveEvent(C.QMoveEvent_clone(this.h))
}

func (this *QMoveEvent) Pos() *QPoint {
	return newQPoint(C.QMoveEvent_pos(this.h))
}

func (this *QMoveEvent) OldPos() *QPoint {
	return newQPoint(C.QMoveEvent_oldPos(this.h))
}

func (this *QMoveEvent) callVirtualBase_Clone() *QMoveEvent {

	return newQMoveEvent(C.QMoveEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QMoveEvent) OnClone(slot func(super func() *QMoveEvent) *QMoveEvent) {
	ok := C.QMoveEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMoveEvent_clone
func miqt_exec_callback_QMoveEvent_clone(self *C.QMoveEvent, cb C.intptr_t) *C.QMoveEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMoveEvent) *QMoveEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMoveEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QMoveEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QMoveEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QMoveEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QMoveEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMoveEvent_setAccepted
func miqt_exec_callback_QMoveEvent_setAccepted(self *C.QMoveEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QMoveEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QMoveEvent) Delete() {
	C.QMoveEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMoveEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QMoveEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QExposeEvent struct {
	h *C.QExposeEvent
	*QEvent
}

func (this *QExposeEvent) cPointer() *C.QExposeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QExposeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQExposeEvent constructs the type using only CGO pointers.
func newQExposeEvent(h *C.QExposeEvent) *QExposeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QExposeEvent_virtbase(h, &outptr_QEvent)

	return &QExposeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQExposeEvent constructs the type using only unsafe pointers.
func UnsafeNewQExposeEvent(h unsafe.Pointer) *QExposeEvent {
	return newQExposeEvent((*C.QExposeEvent)(h))
}

// NewQExposeEvent constructs a new QExposeEvent object.
func NewQExposeEvent(m_region *QRegion) *QExposeEvent {

	return newQExposeEvent(C.QExposeEvent_new(m_region.cPointer()))
}

func (this *QExposeEvent) Clone() *QExposeEvent {
	return newQExposeEvent(C.QExposeEvent_clone(this.h))
}

func (this *QExposeEvent) Region() *QRegion {
	return newQRegion(C.QExposeEvent_region(this.h))
}

func (this *QExposeEvent) callVirtualBase_Clone() *QExposeEvent {

	return newQExposeEvent(C.QExposeEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QExposeEvent) OnClone(slot func(super func() *QExposeEvent) *QExposeEvent) {
	ok := C.QExposeEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExposeEvent_clone
func miqt_exec_callback_QExposeEvent_clone(self *C.QExposeEvent, cb C.intptr_t) *C.QExposeEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QExposeEvent) *QExposeEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QExposeEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QExposeEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QExposeEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QExposeEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QExposeEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExposeEvent_setAccepted
func miqt_exec_callback_QExposeEvent_setAccepted(self *C.QExposeEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QExposeEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QExposeEvent) Delete() {
	C.QExposeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QExposeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QExposeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPlatformSurfaceEvent struct {
	h *C.QPlatformSurfaceEvent
	*QEvent
}

func (this *QPlatformSurfaceEvent) cPointer() *C.QPlatformSurfaceEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPlatformSurfaceEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPlatformSurfaceEvent constructs the type using only CGO pointers.
func newQPlatformSurfaceEvent(h *C.QPlatformSurfaceEvent) *QPlatformSurfaceEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QPlatformSurfaceEvent_virtbase(h, &outptr_QEvent)

	return &QPlatformSurfaceEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQPlatformSurfaceEvent constructs the type using only unsafe pointers.
func UnsafeNewQPlatformSurfaceEvent(h unsafe.Pointer) *QPlatformSurfaceEvent {
	return newQPlatformSurfaceEvent((*C.QPlatformSurfaceEvent)(h))
}

// NewQPlatformSurfaceEvent constructs a new QPlatformSurfaceEvent object.
func NewQPlatformSurfaceEvent(surfaceEventType QPlatformSurfaceEvent__SurfaceEventType) *QPlatformSurfaceEvent {

	return newQPlatformSurfaceEvent(C.QPlatformSurfaceEvent_new((C.int)(surfaceEventType)))
}

func (this *QPlatformSurfaceEvent) Clone() *QPlatformSurfaceEvent {
	return newQPlatformSurfaceEvent(C.QPlatformSurfaceEvent_clone(this.h))
}

func (this *QPlatformSurfaceEvent) SurfaceEventType() QPlatformSurfaceEvent__SurfaceEventType {
	return (QPlatformSurfaceEvent__SurfaceEventType)(C.QPlatformSurfaceEvent_surfaceEventType(this.h))
}

func (this *QPlatformSurfaceEvent) callVirtualBase_Clone() *QPlatformSurfaceEvent {

	return newQPlatformSurfaceEvent(C.QPlatformSurfaceEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QPlatformSurfaceEvent) OnClone(slot func(super func() *QPlatformSurfaceEvent) *QPlatformSurfaceEvent) {
	ok := C.QPlatformSurfaceEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlatformSurfaceEvent_clone
func miqt_exec_callback_QPlatformSurfaceEvent_clone(self *C.QPlatformSurfaceEvent, cb C.intptr_t) *C.QPlatformSurfaceEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPlatformSurfaceEvent) *QPlatformSurfaceEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlatformSurfaceEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QPlatformSurfaceEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QPlatformSurfaceEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QPlatformSurfaceEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QPlatformSurfaceEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlatformSurfaceEvent_setAccepted
func miqt_exec_callback_QPlatformSurfaceEvent_setAccepted(self *C.QPlatformSurfaceEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QPlatformSurfaceEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QPlatformSurfaceEvent) Delete() {
	C.QPlatformSurfaceEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPlatformSurfaceEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QPlatformSurfaceEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QResizeEvent struct {
	h *C.QResizeEvent
	*QEvent
}

func (this *QResizeEvent) cPointer() *C.QResizeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QResizeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQResizeEvent constructs the type using only CGO pointers.
func newQResizeEvent(h *C.QResizeEvent) *QResizeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QResizeEvent_virtbase(h, &outptr_QEvent)

	return &QResizeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQResizeEvent constructs the type using only unsafe pointers.
func UnsafeNewQResizeEvent(h unsafe.Pointer) *QResizeEvent {
	return newQResizeEvent((*C.QResizeEvent)(h))
}

// NewQResizeEvent constructs a new QResizeEvent object.
func NewQResizeEvent(size *QSize, oldSize *QSize) *QResizeEvent {

	return newQResizeEvent(C.QResizeEvent_new(size.cPointer(), oldSize.cPointer()))
}

func (this *QResizeEvent) Clone() *QResizeEvent {
	return newQResizeEvent(C.QResizeEvent_clone(this.h))
}

func (this *QResizeEvent) Size() *QSize {
	return newQSize(C.QResizeEvent_size(this.h))
}

func (this *QResizeEvent) OldSize() *QSize {
	return newQSize(C.QResizeEvent_oldSize(this.h))
}

func (this *QResizeEvent) callVirtualBase_Clone() *QResizeEvent {

	return newQResizeEvent(C.QResizeEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QResizeEvent) OnClone(slot func(super func() *QResizeEvent) *QResizeEvent) {
	ok := C.QResizeEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QResizeEvent_clone
func miqt_exec_callback_QResizeEvent_clone(self *C.QResizeEvent, cb C.intptr_t) *C.QResizeEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QResizeEvent) *QResizeEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QResizeEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QResizeEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QResizeEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QResizeEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QResizeEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QResizeEvent_setAccepted
func miqt_exec_callback_QResizeEvent_setAccepted(self *C.QResizeEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QResizeEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QResizeEvent) Delete() {
	C.QResizeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QResizeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QResizeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCloseEvent struct {
	h *C.QCloseEvent
	*QEvent
}

func (this *QCloseEvent) cPointer() *C.QCloseEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCloseEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCloseEvent constructs the type using only CGO pointers.
func newQCloseEvent(h *C.QCloseEvent) *QCloseEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QCloseEvent_virtbase(h, &outptr_QEvent)

	return &QCloseEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQCloseEvent constructs the type using only unsafe pointers.
func UnsafeNewQCloseEvent(h unsafe.Pointer) *QCloseEvent {
	return newQCloseEvent((*C.QCloseEvent)(h))
}

// NewQCloseEvent constructs a new QCloseEvent object.
func NewQCloseEvent() *QCloseEvent {

	return newQCloseEvent(C.QCloseEvent_new())
}

func (this *QCloseEvent) Clone() *QCloseEvent {
	return newQCloseEvent(C.QCloseEvent_clone(this.h))
}

func (this *QCloseEvent) callVirtualBase_Clone() *QCloseEvent {

	return newQCloseEvent(C.QCloseEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QCloseEvent) OnClone(slot func(super func() *QCloseEvent) *QCloseEvent) {
	ok := C.QCloseEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCloseEvent_clone
func miqt_exec_callback_QCloseEvent_clone(self *C.QCloseEvent, cb C.intptr_t) *C.QCloseEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QCloseEvent) *QCloseEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCloseEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QCloseEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QCloseEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QCloseEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QCloseEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCloseEvent_setAccepted
func miqt_exec_callback_QCloseEvent_setAccepted(self *C.QCloseEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QCloseEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QCloseEvent) Delete() {
	C.QCloseEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCloseEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QCloseEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QIconDragEvent struct {
	h *C.QIconDragEvent
	*QEvent
}

func (this *QIconDragEvent) cPointer() *C.QIconDragEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIconDragEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIconDragEvent constructs the type using only CGO pointers.
func newQIconDragEvent(h *C.QIconDragEvent) *QIconDragEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QIconDragEvent_virtbase(h, &outptr_QEvent)

	return &QIconDragEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQIconDragEvent constructs the type using only unsafe pointers.
func UnsafeNewQIconDragEvent(h unsafe.Pointer) *QIconDragEvent {
	return newQIconDragEvent((*C.QIconDragEvent)(h))
}

// NewQIconDragEvent constructs a new QIconDragEvent object.
func NewQIconDragEvent() *QIconDragEvent {

	return newQIconDragEvent(C.QIconDragEvent_new())
}

func (this *QIconDragEvent) Clone() *QIconDragEvent {
	return newQIconDragEvent(C.QIconDragEvent_clone(this.h))
}

func (this *QIconDragEvent) callVirtualBase_Clone() *QIconDragEvent {

	return newQIconDragEvent(C.QIconDragEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QIconDragEvent) OnClone(slot func(super func() *QIconDragEvent) *QIconDragEvent) {
	ok := C.QIconDragEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIconDragEvent_clone
func miqt_exec_callback_QIconDragEvent_clone(self *C.QIconDragEvent, cb C.intptr_t) *C.QIconDragEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QIconDragEvent) *QIconDragEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIconDragEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QIconDragEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QIconDragEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QIconDragEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QIconDragEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIconDragEvent_setAccepted
func miqt_exec_callback_QIconDragEvent_setAccepted(self *C.QIconDragEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QIconDragEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QIconDragEvent) Delete() {
	C.QIconDragEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIconDragEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QIconDragEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QShowEvent struct {
	h *C.QShowEvent
	*QEvent
}

func (this *QShowEvent) cPointer() *C.QShowEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QShowEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQShowEvent constructs the type using only CGO pointers.
func newQShowEvent(h *C.QShowEvent) *QShowEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QShowEvent_virtbase(h, &outptr_QEvent)

	return &QShowEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQShowEvent constructs the type using only unsafe pointers.
func UnsafeNewQShowEvent(h unsafe.Pointer) *QShowEvent {
	return newQShowEvent((*C.QShowEvent)(h))
}

// NewQShowEvent constructs a new QShowEvent object.
func NewQShowEvent() *QShowEvent {

	return newQShowEvent(C.QShowEvent_new())
}

func (this *QShowEvent) Clone() *QShowEvent {
	return newQShowEvent(C.QShowEvent_clone(this.h))
}

func (this *QShowEvent) callVirtualBase_Clone() *QShowEvent {

	return newQShowEvent(C.QShowEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QShowEvent) OnClone(slot func(super func() *QShowEvent) *QShowEvent) {
	ok := C.QShowEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShowEvent_clone
func miqt_exec_callback_QShowEvent_clone(self *C.QShowEvent, cb C.intptr_t) *C.QShowEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QShowEvent) *QShowEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QShowEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QShowEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QShowEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QShowEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QShowEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShowEvent_setAccepted
func miqt_exec_callback_QShowEvent_setAccepted(self *C.QShowEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QShowEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QShowEvent) Delete() {
	C.QShowEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QShowEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QShowEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHideEvent struct {
	h *C.QHideEvent
	*QEvent
}

func (this *QHideEvent) cPointer() *C.QHideEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHideEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHideEvent constructs the type using only CGO pointers.
func newQHideEvent(h *C.QHideEvent) *QHideEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QHideEvent_virtbase(h, &outptr_QEvent)

	return &QHideEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQHideEvent constructs the type using only unsafe pointers.
func UnsafeNewQHideEvent(h unsafe.Pointer) *QHideEvent {
	return newQHideEvent((*C.QHideEvent)(h))
}

// NewQHideEvent constructs a new QHideEvent object.
func NewQHideEvent() *QHideEvent {

	return newQHideEvent(C.QHideEvent_new())
}

func (this *QHideEvent) Clone() *QHideEvent {
	return newQHideEvent(C.QHideEvent_clone(this.h))
}

func (this *QHideEvent) callVirtualBase_Clone() *QHideEvent {

	return newQHideEvent(C.QHideEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QHideEvent) OnClone(slot func(super func() *QHideEvent) *QHideEvent) {
	ok := C.QHideEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHideEvent_clone
func miqt_exec_callback_QHideEvent_clone(self *C.QHideEvent, cb C.intptr_t) *C.QHideEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QHideEvent) *QHideEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHideEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QHideEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QHideEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QHideEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QHideEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHideEvent_setAccepted
func miqt_exec_callback_QHideEvent_setAccepted(self *C.QHideEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QHideEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QHideEvent) Delete() {
	C.QHideEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHideEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QHideEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QContextMenuEvent struct {
	h *C.QContextMenuEvent
	*QInputEvent
}

func (this *QContextMenuEvent) cPointer() *C.QContextMenuEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QContextMenuEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQContextMenuEvent constructs the type using only CGO pointers.
func newQContextMenuEvent(h *C.QContextMenuEvent) *QContextMenuEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QContextMenuEvent_virtbase(h, &outptr_QInputEvent)

	return &QContextMenuEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQContextMenuEvent constructs the type using only unsafe pointers.
func UnsafeNewQContextMenuEvent(h unsafe.Pointer) *QContextMenuEvent {
	return newQContextMenuEvent((*C.QContextMenuEvent)(h))
}

// NewQContextMenuEvent constructs a new QContextMenuEvent object.
func NewQContextMenuEvent(reason QContextMenuEvent__Reason, pos *QPoint, globalPos *QPoint) *QContextMenuEvent {

	return newQContextMenuEvent(C.QContextMenuEvent_new((C.int)(reason), pos.cPointer(), globalPos.cPointer()))
}

// NewQContextMenuEvent2 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent2(reason QContextMenuEvent__Reason, pos *QPoint) *QContextMenuEvent {

	return newQContextMenuEvent(C.QContextMenuEvent_new2((C.int)(reason), pos.cPointer()))
}

// NewQContextMenuEvent3 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent3(reason QContextMenuEvent__Reason, pos *QPoint, globalPos *QPoint, modifiers KeyboardModifier) *QContextMenuEvent {

	return newQContextMenuEvent(C.QContextMenuEvent_new3((C.int)(reason), pos.cPointer(), globalPos.cPointer(), (C.int)(modifiers)))
}

func (this *QContextMenuEvent) Clone() *QContextMenuEvent {
	return newQContextMenuEvent(C.QContextMenuEvent_clone(this.h))
}

func (this *QContextMenuEvent) X() int {
	return (int)(C.QContextMenuEvent_x(this.h))
}

func (this *QContextMenuEvent) Y() int {
	return (int)(C.QContextMenuEvent_y(this.h))
}

func (this *QContextMenuEvent) GlobalX() int {
	return (int)(C.QContextMenuEvent_globalX(this.h))
}

func (this *QContextMenuEvent) GlobalY() int {
	return (int)(C.QContextMenuEvent_globalY(this.h))
}

func (this *QContextMenuEvent) Pos() *QPoint {
	return newQPoint(C.QContextMenuEvent_pos(this.h))
}

func (this *QContextMenuEvent) GlobalPos() *QPoint {
	return newQPoint(C.QContextMenuEvent_globalPos(this.h))
}

func (this *QContextMenuEvent) Reason() QContextMenuEvent__Reason {
	return (QContextMenuEvent__Reason)(C.QContextMenuEvent_reason(this.h))
}

func (this *QContextMenuEvent) callVirtualBase_Clone() *QContextMenuEvent {

	return newQContextMenuEvent(C.QContextMenuEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QContextMenuEvent) OnClone(slot func(super func() *QContextMenuEvent) *QContextMenuEvent) {
	ok := C.QContextMenuEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QContextMenuEvent_clone
func miqt_exec_callback_QContextMenuEvent_clone(self *C.QContextMenuEvent, cb C.intptr_t) *C.QContextMenuEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QContextMenuEvent) *QContextMenuEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QContextMenuEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QContextMenuEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QContextMenuEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QContextMenuEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QContextMenuEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QContextMenuEvent_setTimestamp
func miqt_exec_callback_QContextMenuEvent_setTimestamp(self *C.QContextMenuEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QContextMenuEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QContextMenuEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QContextMenuEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QContextMenuEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QContextMenuEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QContextMenuEvent_setAccepted
func miqt_exec_callback_QContextMenuEvent_setAccepted(self *C.QContextMenuEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QContextMenuEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QContextMenuEvent) Delete() {
	C.QContextMenuEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QContextMenuEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QContextMenuEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QInputMethodEvent struct {
	h *C.QInputMethodEvent
	*QEvent
}

func (this *QInputMethodEvent) cPointer() *C.QInputMethodEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputMethodEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputMethodEvent constructs the type using only CGO pointers.
func newQInputMethodEvent(h *C.QInputMethodEvent) *QInputMethodEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QInputMethodEvent_virtbase(h, &outptr_QEvent)

	return &QInputMethodEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQInputMethodEvent constructs the type using only unsafe pointers.
func UnsafeNewQInputMethodEvent(h unsafe.Pointer) *QInputMethodEvent {
	return newQInputMethodEvent((*C.QInputMethodEvent)(h))
}

// NewQInputMethodEvent constructs a new QInputMethodEvent object.
func NewQInputMethodEvent() *QInputMethodEvent {

	return newQInputMethodEvent(C.QInputMethodEvent_new())
}

// NewQInputMethodEvent2 constructs a new QInputMethodEvent object.
func NewQInputMethodEvent2(preeditText string, attributes []QInputMethodEvent__Attribute) *QInputMethodEvent {
	preeditText_ms := C.struct_miqt_string{}
	preeditText_ms.data = C.CString(preeditText)
	preeditText_ms.len = C.size_t(len(preeditText))
	defer C.free(unsafe.Pointer(preeditText_ms.data))
	attributes_CArray := (*[0xffff]*C.QInputMethodEvent__Attribute)(C.malloc(C.size_t(8 * len(attributes))))
	defer C.free(unsafe.Pointer(attributes_CArray))
	for i := range attributes {
		attributes_CArray[i] = attributes[i].cPointer()
	}
	attributes_ma := C.struct_miqt_array{len: C.size_t(len(attributes)), data: unsafe.Pointer(attributes_CArray)}

	return newQInputMethodEvent(C.QInputMethodEvent_new2(preeditText_ms, attributes_ma))
}

func (this *QInputMethodEvent) Clone() *QInputMethodEvent {
	return newQInputMethodEvent(C.QInputMethodEvent_clone(this.h))
}

func (this *QInputMethodEvent) SetCommitString(commitString string) {
	commitString_ms := C.struct_miqt_string{}
	commitString_ms.data = C.CString(commitString)
	commitString_ms.len = C.size_t(len(commitString))
	defer C.free(unsafe.Pointer(commitString_ms.data))
	C.QInputMethodEvent_setCommitString(this.h, commitString_ms)
}

func (this *QInputMethodEvent) Attributes() []QInputMethodEvent__Attribute {
	var _ma C.struct_miqt_array = C.QInputMethodEvent_attributes(this.h)
	_ret := make([]QInputMethodEvent__Attribute, int(_ma.len))
	_outCast := (*[0xffff]*C.QInputMethodEvent__Attribute)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQInputMethodEvent__Attribute(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QInputMethodEvent) PreeditString() string {
	var _ms C.struct_miqt_string = C.QInputMethodEvent_preeditString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputMethodEvent) CommitString() string {
	var _ms C.struct_miqt_string = C.QInputMethodEvent_commitString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputMethodEvent) ReplacementStart() int {
	return (int)(C.QInputMethodEvent_replacementStart(this.h))
}

func (this *QInputMethodEvent) ReplacementLength() int {
	return (int)(C.QInputMethodEvent_replacementLength(this.h))
}

func (this *QInputMethodEvent) SetCommitString2(commitString string, replaceFrom int) {
	commitString_ms := C.struct_miqt_string{}
	commitString_ms.data = C.CString(commitString)
	commitString_ms.len = C.size_t(len(commitString))
	defer C.free(unsafe.Pointer(commitString_ms.data))
	C.QInputMethodEvent_setCommitString2(this.h, commitString_ms, (C.int)(replaceFrom))
}

func (this *QInputMethodEvent) SetCommitString3(commitString string, replaceFrom int, replaceLength int) {
	commitString_ms := C.struct_miqt_string{}
	commitString_ms.data = C.CString(commitString)
	commitString_ms.len = C.size_t(len(commitString))
	defer C.free(unsafe.Pointer(commitString_ms.data))
	C.QInputMethodEvent_setCommitString3(this.h, commitString_ms, (C.int)(replaceFrom), (C.int)(replaceLength))
}

func (this *QInputMethodEvent) callVirtualBase_Clone() *QInputMethodEvent {

	return newQInputMethodEvent(C.QInputMethodEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QInputMethodEvent) OnClone(slot func(super func() *QInputMethodEvent) *QInputMethodEvent) {
	ok := C.QInputMethodEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputMethodEvent_clone
func miqt_exec_callback_QInputMethodEvent_clone(self *C.QInputMethodEvent, cb C.intptr_t) *C.QInputMethodEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QInputMethodEvent) *QInputMethodEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputMethodEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QInputMethodEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QInputMethodEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QInputMethodEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QInputMethodEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputMethodEvent_setAccepted
func miqt_exec_callback_QInputMethodEvent_setAccepted(self *C.QInputMethodEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QInputMethodEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QInputMethodEvent) Delete() {
	C.QInputMethodEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputMethodEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputMethodEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QInputMethodQueryEvent struct {
	h *C.QInputMethodQueryEvent
	*QEvent
}

func (this *QInputMethodQueryEvent) cPointer() *C.QInputMethodQueryEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputMethodQueryEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputMethodQueryEvent constructs the type using only CGO pointers.
func newQInputMethodQueryEvent(h *C.QInputMethodQueryEvent) *QInputMethodQueryEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QInputMethodQueryEvent_virtbase(h, &outptr_QEvent)

	return &QInputMethodQueryEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQInputMethodQueryEvent constructs the type using only unsafe pointers.
func UnsafeNewQInputMethodQueryEvent(h unsafe.Pointer) *QInputMethodQueryEvent {
	return newQInputMethodQueryEvent((*C.QInputMethodQueryEvent)(h))
}

// NewQInputMethodQueryEvent constructs a new QInputMethodQueryEvent object.
func NewQInputMethodQueryEvent(queries InputMethodQuery) *QInputMethodQueryEvent {

	return newQInputMethodQueryEvent(C.QInputMethodQueryEvent_new((C.int)(queries)))
}

func (this *QInputMethodQueryEvent) Clone() *QInputMethodQueryEvent {
	return newQInputMethodQueryEvent(C.QInputMethodQueryEvent_clone(this.h))
}

func (this *QInputMethodQueryEvent) Queries() InputMethodQuery {
	return (InputMethodQuery)(C.QInputMethodQueryEvent_queries(this.h))
}

func (this *QInputMethodQueryEvent) SetValue(query InputMethodQuery, value *QVariant) {
	C.QInputMethodQueryEvent_setValue(this.h, (C.int)(query), value.cPointer())
}

func (this *QInputMethodQueryEvent) Value(query InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QInputMethodQueryEvent_value(this.h, (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethodQueryEvent) callVirtualBase_Clone() *QInputMethodQueryEvent {

	return newQInputMethodQueryEvent(C.QInputMethodQueryEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QInputMethodQueryEvent) OnClone(slot func(super func() *QInputMethodQueryEvent) *QInputMethodQueryEvent) {
	ok := C.QInputMethodQueryEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputMethodQueryEvent_clone
func miqt_exec_callback_QInputMethodQueryEvent_clone(self *C.QInputMethodQueryEvent, cb C.intptr_t) *C.QInputMethodQueryEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QInputMethodQueryEvent) *QInputMethodQueryEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QInputMethodQueryEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QInputMethodQueryEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QInputMethodQueryEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QInputMethodQueryEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QInputMethodQueryEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QInputMethodQueryEvent_setAccepted
func miqt_exec_callback_QInputMethodQueryEvent_setAccepted(self *C.QInputMethodQueryEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QInputMethodQueryEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QInputMethodQueryEvent) Delete() {
	C.QInputMethodQueryEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputMethodQueryEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputMethodQueryEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDropEvent struct {
	h *C.QDropEvent
	*QEvent
}

func (this *QDropEvent) cPointer() *C.QDropEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDropEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDropEvent constructs the type using only CGO pointers.
func newQDropEvent(h *C.QDropEvent) *QDropEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QDropEvent_virtbase(h, &outptr_QEvent)

	return &QDropEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQDropEvent constructs the type using only unsafe pointers.
func UnsafeNewQDropEvent(h unsafe.Pointer) *QDropEvent {
	return newQDropEvent((*C.QDropEvent)(h))
}

// NewQDropEvent constructs a new QDropEvent object.
func NewQDropEvent(pos *QPointF, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDropEvent {

	return newQDropEvent(C.QDropEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQDropEvent2 constructs a new QDropEvent object.
func NewQDropEvent2(pos *QPointF, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier, typeVal QEvent__Type) *QDropEvent {

	return newQDropEvent(C.QDropEvent_new2(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(typeVal)))
}

func (this *QDropEvent) Clone() *QDropEvent {
	return newQDropEvent(C.QDropEvent_clone(this.h))
}

func (this *QDropEvent) Pos() *QPoint {
	_goptr := newQPoint(C.QDropEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDropEvent) PosF() *QPointF {
	_goptr := newQPointF(C.QDropEvent_posF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDropEvent) MouseButtons() MouseButton {
	return (MouseButton)(C.QDropEvent_mouseButtons(this.h))
}

func (this *QDropEvent) KeyboardModifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QDropEvent_keyboardModifiers(this.h))
}

func (this *QDropEvent) Position() *QPointF {
	_goptr := newQPointF(C.QDropEvent_position(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDropEvent) Buttons() MouseButton {
	return (MouseButton)(C.QDropEvent_buttons(this.h))
}

func (this *QDropEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QDropEvent_modifiers(this.h))
}

func (this *QDropEvent) PossibleActions() DropAction {
	return (DropAction)(C.QDropEvent_possibleActions(this.h))
}

func (this *QDropEvent) ProposedAction() DropAction {
	return (DropAction)(C.QDropEvent_proposedAction(this.h))
}

func (this *QDropEvent) AcceptProposedAction() {
	C.QDropEvent_acceptProposedAction(this.h)
}

func (this *QDropEvent) DropAction() DropAction {
	return (DropAction)(C.QDropEvent_dropAction(this.h))
}

func (this *QDropEvent) SetDropAction(action DropAction) {
	C.QDropEvent_setDropAction(this.h, (C.int)(action))
}

func (this *QDropEvent) Source() *QObject {
	return newQObject(C.QDropEvent_source(this.h))
}

func (this *QDropEvent) MimeData() *QMimeData {
	return newQMimeData(C.QDropEvent_mimeData(this.h))
}

func (this *QDropEvent) callVirtualBase_Clone() *QDropEvent {

	return newQDropEvent(C.QDropEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QDropEvent) OnClone(slot func(super func() *QDropEvent) *QDropEvent) {
	ok := C.QDropEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDropEvent_clone
func miqt_exec_callback_QDropEvent_clone(self *C.QDropEvent, cb C.intptr_t) *C.QDropEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QDropEvent) *QDropEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDropEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QDropEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QDropEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QDropEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QDropEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDropEvent_setAccepted
func miqt_exec_callback_QDropEvent_setAccepted(self *C.QDropEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QDropEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QDropEvent) Delete() {
	C.QDropEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDropEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QDropEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDragMoveEvent struct {
	h *C.QDragMoveEvent
	*QDropEvent
}

func (this *QDragMoveEvent) cPointer() *C.QDragMoveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDragMoveEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDragMoveEvent constructs the type using only CGO pointers.
func newQDragMoveEvent(h *C.QDragMoveEvent) *QDragMoveEvent {
	if h == nil {
		return nil
	}
	var outptr_QDropEvent *C.QDropEvent = nil
	C.QDragMoveEvent_virtbase(h, &outptr_QDropEvent)

	return &QDragMoveEvent{h: h,
		QDropEvent: newQDropEvent(outptr_QDropEvent)}
}

// UnsafeNewQDragMoveEvent constructs the type using only unsafe pointers.
func UnsafeNewQDragMoveEvent(h unsafe.Pointer) *QDragMoveEvent {
	return newQDragMoveEvent((*C.QDragMoveEvent)(h))
}

// NewQDragMoveEvent constructs a new QDragMoveEvent object.
func NewQDragMoveEvent(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDragMoveEvent {

	return newQDragMoveEvent(C.QDragMoveEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQDragMoveEvent2 constructs a new QDragMoveEvent object.
func NewQDragMoveEvent2(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier, typeVal QEvent__Type) *QDragMoveEvent {

	return newQDragMoveEvent(C.QDragMoveEvent_new2(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(typeVal)))
}

func (this *QDragMoveEvent) Clone() *QDragMoveEvent {
	return newQDragMoveEvent(C.QDragMoveEvent_clone(this.h))
}

func (this *QDragMoveEvent) AnswerRect() *QRect {
	_goptr := newQRect(C.QDragMoveEvent_answerRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDragMoveEvent) Accept() {
	C.QDragMoveEvent_accept(this.h)
}

func (this *QDragMoveEvent) Ignore() {
	C.QDragMoveEvent_ignore(this.h)
}

func (this *QDragMoveEvent) AcceptWithQRect(r *QRect) {
	C.QDragMoveEvent_acceptWithQRect(this.h, r.cPointer())
}

func (this *QDragMoveEvent) IgnoreWithQRect(r *QRect) {
	C.QDragMoveEvent_ignoreWithQRect(this.h, r.cPointer())
}

func (this *QDragMoveEvent) callVirtualBase_Clone() *QDragMoveEvent {

	return newQDragMoveEvent(C.QDragMoveEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QDragMoveEvent) OnClone(slot func(super func() *QDragMoveEvent) *QDragMoveEvent) {
	ok := C.QDragMoveEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDragMoveEvent_clone
func miqt_exec_callback_QDragMoveEvent_clone(self *C.QDragMoveEvent, cb C.intptr_t) *C.QDragMoveEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QDragMoveEvent) *QDragMoveEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDragMoveEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QDragMoveEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QDragMoveEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QDragMoveEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QDragMoveEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDragMoveEvent_setAccepted
func miqt_exec_callback_QDragMoveEvent_setAccepted(self *C.QDragMoveEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QDragMoveEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QDragMoveEvent) Delete() {
	C.QDragMoveEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDragMoveEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QDragMoveEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDragEnterEvent struct {
	h *C.QDragEnterEvent
	*QDragMoveEvent
}

func (this *QDragEnterEvent) cPointer() *C.QDragEnterEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDragEnterEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDragEnterEvent constructs the type using only CGO pointers.
func newQDragEnterEvent(h *C.QDragEnterEvent) *QDragEnterEvent {
	if h == nil {
		return nil
	}
	var outptr_QDragMoveEvent *C.QDragMoveEvent = nil
	C.QDragEnterEvent_virtbase(h, &outptr_QDragMoveEvent)

	return &QDragEnterEvent{h: h,
		QDragMoveEvent: newQDragMoveEvent(outptr_QDragMoveEvent)}
}

// UnsafeNewQDragEnterEvent constructs the type using only unsafe pointers.
func UnsafeNewQDragEnterEvent(h unsafe.Pointer) *QDragEnterEvent {
	return newQDragEnterEvent((*C.QDragEnterEvent)(h))
}

// NewQDragEnterEvent constructs a new QDragEnterEvent object.
func NewQDragEnterEvent(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDragEnterEvent {

	return newQDragEnterEvent(C.QDragEnterEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers)))
}

func (this *QDragEnterEvent) Clone() *QDragEnterEvent {
	return newQDragEnterEvent(C.QDragEnterEvent_clone(this.h))
}

func (this *QDragEnterEvent) callVirtualBase_Clone() *QDragEnterEvent {

	return newQDragEnterEvent(C.QDragEnterEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QDragEnterEvent) OnClone(slot func(super func() *QDragEnterEvent) *QDragEnterEvent) {
	ok := C.QDragEnterEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDragEnterEvent_clone
func miqt_exec_callback_QDragEnterEvent_clone(self *C.QDragEnterEvent, cb C.intptr_t) *C.QDragEnterEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QDragEnterEvent) *QDragEnterEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDragEnterEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QDragEnterEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QDragEnterEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QDragEnterEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QDragEnterEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDragEnterEvent_setAccepted
func miqt_exec_callback_QDragEnterEvent_setAccepted(self *C.QDragEnterEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QDragEnterEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QDragEnterEvent) Delete() {
	C.QDragEnterEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDragEnterEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QDragEnterEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDragLeaveEvent struct {
	h *C.QDragLeaveEvent
	*QEvent
}

func (this *QDragLeaveEvent) cPointer() *C.QDragLeaveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDragLeaveEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDragLeaveEvent constructs the type using only CGO pointers.
func newQDragLeaveEvent(h *C.QDragLeaveEvent) *QDragLeaveEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QDragLeaveEvent_virtbase(h, &outptr_QEvent)

	return &QDragLeaveEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQDragLeaveEvent constructs the type using only unsafe pointers.
func UnsafeNewQDragLeaveEvent(h unsafe.Pointer) *QDragLeaveEvent {
	return newQDragLeaveEvent((*C.QDragLeaveEvent)(h))
}

// NewQDragLeaveEvent constructs a new QDragLeaveEvent object.
func NewQDragLeaveEvent() *QDragLeaveEvent {

	return newQDragLeaveEvent(C.QDragLeaveEvent_new())
}

func (this *QDragLeaveEvent) Clone() *QDragLeaveEvent {
	return newQDragLeaveEvent(C.QDragLeaveEvent_clone(this.h))
}

func (this *QDragLeaveEvent) callVirtualBase_Clone() *QDragLeaveEvent {

	return newQDragLeaveEvent(C.QDragLeaveEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QDragLeaveEvent) OnClone(slot func(super func() *QDragLeaveEvent) *QDragLeaveEvent) {
	ok := C.QDragLeaveEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDragLeaveEvent_clone
func miqt_exec_callback_QDragLeaveEvent_clone(self *C.QDragLeaveEvent, cb C.intptr_t) *C.QDragLeaveEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QDragLeaveEvent) *QDragLeaveEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDragLeaveEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QDragLeaveEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QDragLeaveEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QDragLeaveEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QDragLeaveEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDragLeaveEvent_setAccepted
func miqt_exec_callback_QDragLeaveEvent_setAccepted(self *C.QDragLeaveEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QDragLeaveEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QDragLeaveEvent) Delete() {
	C.QDragLeaveEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDragLeaveEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QDragLeaveEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHelpEvent struct {
	h *C.QHelpEvent
	*QEvent
}

func (this *QHelpEvent) cPointer() *C.QHelpEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHelpEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHelpEvent constructs the type using only CGO pointers.
func newQHelpEvent(h *C.QHelpEvent) *QHelpEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QHelpEvent_virtbase(h, &outptr_QEvent)

	return &QHelpEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQHelpEvent constructs the type using only unsafe pointers.
func UnsafeNewQHelpEvent(h unsafe.Pointer) *QHelpEvent {
	return newQHelpEvent((*C.QHelpEvent)(h))
}

// NewQHelpEvent constructs a new QHelpEvent object.
func NewQHelpEvent(typeVal QEvent__Type, pos *QPoint, globalPos *QPoint) *QHelpEvent {

	return newQHelpEvent(C.QHelpEvent_new((C.int)(typeVal), pos.cPointer(), globalPos.cPointer()))
}

func (this *QHelpEvent) Clone() *QHelpEvent {
	return newQHelpEvent(C.QHelpEvent_clone(this.h))
}

func (this *QHelpEvent) X() int {
	return (int)(C.QHelpEvent_x(this.h))
}

func (this *QHelpEvent) Y() int {
	return (int)(C.QHelpEvent_y(this.h))
}

func (this *QHelpEvent) GlobalX() int {
	return (int)(C.QHelpEvent_globalX(this.h))
}

func (this *QHelpEvent) GlobalY() int {
	return (int)(C.QHelpEvent_globalY(this.h))
}

func (this *QHelpEvent) Pos() *QPoint {
	return newQPoint(C.QHelpEvent_pos(this.h))
}

func (this *QHelpEvent) GlobalPos() *QPoint {
	return newQPoint(C.QHelpEvent_globalPos(this.h))
}

func (this *QHelpEvent) callVirtualBase_Clone() *QHelpEvent {

	return newQHelpEvent(C.QHelpEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QHelpEvent) OnClone(slot func(super func() *QHelpEvent) *QHelpEvent) {
	ok := C.QHelpEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHelpEvent_clone
func miqt_exec_callback_QHelpEvent_clone(self *C.QHelpEvent, cb C.intptr_t) *C.QHelpEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QHelpEvent) *QHelpEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHelpEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QHelpEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QHelpEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QHelpEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QHelpEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHelpEvent_setAccepted
func miqt_exec_callback_QHelpEvent_setAccepted(self *C.QHelpEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QHelpEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QHelpEvent) Delete() {
	C.QHelpEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHelpEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QHelpEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStatusTipEvent struct {
	h *C.QStatusTipEvent
	*QEvent
}

func (this *QStatusTipEvent) cPointer() *C.QStatusTipEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStatusTipEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStatusTipEvent constructs the type using only CGO pointers.
func newQStatusTipEvent(h *C.QStatusTipEvent) *QStatusTipEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QStatusTipEvent_virtbase(h, &outptr_QEvent)

	return &QStatusTipEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQStatusTipEvent constructs the type using only unsafe pointers.
func UnsafeNewQStatusTipEvent(h unsafe.Pointer) *QStatusTipEvent {
	return newQStatusTipEvent((*C.QStatusTipEvent)(h))
}

// NewQStatusTipEvent constructs a new QStatusTipEvent object.
func NewQStatusTipEvent(tip string) *QStatusTipEvent {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))

	return newQStatusTipEvent(C.QStatusTipEvent_new(tip_ms))
}

func (this *QStatusTipEvent) Clone() *QStatusTipEvent {
	return newQStatusTipEvent(C.QStatusTipEvent_clone(this.h))
}

func (this *QStatusTipEvent) Tip() string {
	var _ms C.struct_miqt_string = C.QStatusTipEvent_tip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStatusTipEvent) callVirtualBase_Clone() *QStatusTipEvent {

	return newQStatusTipEvent(C.QStatusTipEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QStatusTipEvent) OnClone(slot func(super func() *QStatusTipEvent) *QStatusTipEvent) {
	ok := C.QStatusTipEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusTipEvent_clone
func miqt_exec_callback_QStatusTipEvent_clone(self *C.QStatusTipEvent, cb C.intptr_t) *C.QStatusTipEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStatusTipEvent) *QStatusTipEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStatusTipEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QStatusTipEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QStatusTipEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QStatusTipEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QStatusTipEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusTipEvent_setAccepted
func miqt_exec_callback_QStatusTipEvent_setAccepted(self *C.QStatusTipEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QStatusTipEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QStatusTipEvent) Delete() {
	C.QStatusTipEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStatusTipEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QStatusTipEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWhatsThisClickedEvent struct {
	h *C.QWhatsThisClickedEvent
	*QEvent
}

func (this *QWhatsThisClickedEvent) cPointer() *C.QWhatsThisClickedEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWhatsThisClickedEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWhatsThisClickedEvent constructs the type using only CGO pointers.
func newQWhatsThisClickedEvent(h *C.QWhatsThisClickedEvent) *QWhatsThisClickedEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QWhatsThisClickedEvent_virtbase(h, &outptr_QEvent)

	return &QWhatsThisClickedEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQWhatsThisClickedEvent constructs the type using only unsafe pointers.
func UnsafeNewQWhatsThisClickedEvent(h unsafe.Pointer) *QWhatsThisClickedEvent {
	return newQWhatsThisClickedEvent((*C.QWhatsThisClickedEvent)(h))
}

// NewQWhatsThisClickedEvent constructs a new QWhatsThisClickedEvent object.
func NewQWhatsThisClickedEvent(href string) *QWhatsThisClickedEvent {
	href_ms := C.struct_miqt_string{}
	href_ms.data = C.CString(href)
	href_ms.len = C.size_t(len(href))
	defer C.free(unsafe.Pointer(href_ms.data))

	return newQWhatsThisClickedEvent(C.QWhatsThisClickedEvent_new(href_ms))
}

func (this *QWhatsThisClickedEvent) Clone() *QWhatsThisClickedEvent {
	return newQWhatsThisClickedEvent(C.QWhatsThisClickedEvent_clone(this.h))
}

func (this *QWhatsThisClickedEvent) Href() string {
	var _ms C.struct_miqt_string = C.QWhatsThisClickedEvent_href(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWhatsThisClickedEvent) callVirtualBase_Clone() *QWhatsThisClickedEvent {

	return newQWhatsThisClickedEvent(C.QWhatsThisClickedEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QWhatsThisClickedEvent) OnClone(slot func(super func() *QWhatsThisClickedEvent) *QWhatsThisClickedEvent) {
	ok := C.QWhatsThisClickedEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWhatsThisClickedEvent_clone
func miqt_exec_callback_QWhatsThisClickedEvent_clone(self *C.QWhatsThisClickedEvent, cb C.intptr_t) *C.QWhatsThisClickedEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWhatsThisClickedEvent) *QWhatsThisClickedEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWhatsThisClickedEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QWhatsThisClickedEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QWhatsThisClickedEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QWhatsThisClickedEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QWhatsThisClickedEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWhatsThisClickedEvent_setAccepted
func miqt_exec_callback_QWhatsThisClickedEvent_setAccepted(self *C.QWhatsThisClickedEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QWhatsThisClickedEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QWhatsThisClickedEvent) Delete() {
	C.QWhatsThisClickedEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWhatsThisClickedEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QWhatsThisClickedEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QActionEvent struct {
	h *C.QActionEvent
	*QEvent
}

func (this *QActionEvent) cPointer() *C.QActionEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QActionEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQActionEvent constructs the type using only CGO pointers.
func newQActionEvent(h *C.QActionEvent) *QActionEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QActionEvent_virtbase(h, &outptr_QEvent)

	return &QActionEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQActionEvent constructs the type using only unsafe pointers.
func UnsafeNewQActionEvent(h unsafe.Pointer) *QActionEvent {
	return newQActionEvent((*C.QActionEvent)(h))
}

// NewQActionEvent constructs a new QActionEvent object.
func NewQActionEvent(typeVal int, action *QAction) *QActionEvent {

	return newQActionEvent(C.QActionEvent_new((C.int)(typeVal), action.cPointer()))
}

// NewQActionEvent2 constructs a new QActionEvent object.
func NewQActionEvent2(typeVal int, action *QAction, before *QAction) *QActionEvent {

	return newQActionEvent(C.QActionEvent_new2((C.int)(typeVal), action.cPointer(), before.cPointer()))
}

func (this *QActionEvent) Clone() *QActionEvent {
	return newQActionEvent(C.QActionEvent_clone(this.h))
}

func (this *QActionEvent) Action() *QAction {
	return newQAction(C.QActionEvent_action(this.h))
}

func (this *QActionEvent) Before() *QAction {
	return newQAction(C.QActionEvent_before(this.h))
}

func (this *QActionEvent) callVirtualBase_Clone() *QActionEvent {

	return newQActionEvent(C.QActionEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QActionEvent) OnClone(slot func(super func() *QActionEvent) *QActionEvent) {
	ok := C.QActionEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QActionEvent_clone
func miqt_exec_callback_QActionEvent_clone(self *C.QActionEvent, cb C.intptr_t) *C.QActionEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QActionEvent) *QActionEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QActionEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QActionEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QActionEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QActionEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QActionEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QActionEvent_setAccepted
func miqt_exec_callback_QActionEvent_setAccepted(self *C.QActionEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QActionEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QActionEvent) Delete() {
	C.QActionEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QActionEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QActionEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QFileOpenEvent struct {
	h *C.QFileOpenEvent
	*QEvent
}

func (this *QFileOpenEvent) cPointer() *C.QFileOpenEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFileOpenEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFileOpenEvent constructs the type using only CGO pointers.
func newQFileOpenEvent(h *C.QFileOpenEvent) *QFileOpenEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QFileOpenEvent_virtbase(h, &outptr_QEvent)

	return &QFileOpenEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQFileOpenEvent constructs the type using only unsafe pointers.
func UnsafeNewQFileOpenEvent(h unsafe.Pointer) *QFileOpenEvent {
	return newQFileOpenEvent((*C.QFileOpenEvent)(h))
}

// NewQFileOpenEvent constructs a new QFileOpenEvent object.
func NewQFileOpenEvent(file string) *QFileOpenEvent {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))

	return newQFileOpenEvent(C.QFileOpenEvent_new(file_ms))
}

// NewQFileOpenEvent2 constructs a new QFileOpenEvent object.
func NewQFileOpenEvent2(url *QUrl) *QFileOpenEvent {

	return newQFileOpenEvent(C.QFileOpenEvent_new2(url.cPointer()))
}

func (this *QFileOpenEvent) Clone() *QFileOpenEvent {
	return newQFileOpenEvent(C.QFileOpenEvent_clone(this.h))
}

func (this *QFileOpenEvent) File() string {
	var _ms C.struct_miqt_string = C.QFileOpenEvent_file(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileOpenEvent) Url() *QUrl {
	_goptr := newQUrl(C.QFileOpenEvent_url(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileOpenEvent) OpenFile(file *QFile, flags QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QFileOpenEvent_openFile(this.h, file.cPointer(), (C.int)(flags)))
}

func (this *QFileOpenEvent) callVirtualBase_Clone() *QFileOpenEvent {

	return newQFileOpenEvent(C.QFileOpenEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QFileOpenEvent) OnClone(slot func(super func() *QFileOpenEvent) *QFileOpenEvent) {
	ok := C.QFileOpenEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileOpenEvent_clone
func miqt_exec_callback_QFileOpenEvent_clone(self *C.QFileOpenEvent, cb C.intptr_t) *C.QFileOpenEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QFileOpenEvent) *QFileOpenEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileOpenEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QFileOpenEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QFileOpenEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QFileOpenEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QFileOpenEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileOpenEvent_setAccepted
func miqt_exec_callback_QFileOpenEvent_setAccepted(self *C.QFileOpenEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QFileOpenEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QFileOpenEvent) Delete() {
	C.QFileOpenEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileOpenEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileOpenEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QToolBarChangeEvent struct {
	h *C.QToolBarChangeEvent
	*QEvent
}

func (this *QToolBarChangeEvent) cPointer() *C.QToolBarChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QToolBarChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQToolBarChangeEvent constructs the type using only CGO pointers.
func newQToolBarChangeEvent(h *C.QToolBarChangeEvent) *QToolBarChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QToolBarChangeEvent_virtbase(h, &outptr_QEvent)

	return &QToolBarChangeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQToolBarChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQToolBarChangeEvent(h unsafe.Pointer) *QToolBarChangeEvent {
	return newQToolBarChangeEvent((*C.QToolBarChangeEvent)(h))
}

// NewQToolBarChangeEvent constructs a new QToolBarChangeEvent object.
func NewQToolBarChangeEvent(t bool) *QToolBarChangeEvent {

	return newQToolBarChangeEvent(C.QToolBarChangeEvent_new((C.bool)(t)))
}

func (this *QToolBarChangeEvent) Clone() *QToolBarChangeEvent {
	return newQToolBarChangeEvent(C.QToolBarChangeEvent_clone(this.h))
}

func (this *QToolBarChangeEvent) Toggle() bool {
	return (bool)(C.QToolBarChangeEvent_toggle(this.h))
}

func (this *QToolBarChangeEvent) callVirtualBase_Clone() *QToolBarChangeEvent {

	return newQToolBarChangeEvent(C.QToolBarChangeEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QToolBarChangeEvent) OnClone(slot func(super func() *QToolBarChangeEvent) *QToolBarChangeEvent) {
	ok := C.QToolBarChangeEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBarChangeEvent_clone
func miqt_exec_callback_QToolBarChangeEvent_clone(self *C.QToolBarChangeEvent, cb C.intptr_t) *C.QToolBarChangeEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QToolBarChangeEvent) *QToolBarChangeEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBarChangeEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QToolBarChangeEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QToolBarChangeEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QToolBarChangeEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QToolBarChangeEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBarChangeEvent_setAccepted
func miqt_exec_callback_QToolBarChangeEvent_setAccepted(self *C.QToolBarChangeEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QToolBarChangeEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QToolBarChangeEvent) Delete() {
	C.QToolBarChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolBarChangeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolBarChangeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QShortcutEvent struct {
	h *C.QShortcutEvent
	*QEvent
}

func (this *QShortcutEvent) cPointer() *C.QShortcutEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QShortcutEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQShortcutEvent constructs the type using only CGO pointers.
func newQShortcutEvent(h *C.QShortcutEvent) *QShortcutEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QShortcutEvent_virtbase(h, &outptr_QEvent)

	return &QShortcutEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQShortcutEvent constructs the type using only unsafe pointers.
func UnsafeNewQShortcutEvent(h unsafe.Pointer) *QShortcutEvent {
	return newQShortcutEvent((*C.QShortcutEvent)(h))
}

// NewQShortcutEvent constructs a new QShortcutEvent object.
func NewQShortcutEvent(key *QKeySequence, id int) *QShortcutEvent {

	return newQShortcutEvent(C.QShortcutEvent_new(key.cPointer(), (C.int)(id)))
}

// NewQShortcutEvent2 constructs a new QShortcutEvent object.
func NewQShortcutEvent2(key *QKeySequence, id int, ambiguous bool) *QShortcutEvent {

	return newQShortcutEvent(C.QShortcutEvent_new2(key.cPointer(), (C.int)(id), (C.bool)(ambiguous)))
}

func (this *QShortcutEvent) Clone() *QShortcutEvent {
	return newQShortcutEvent(C.QShortcutEvent_clone(this.h))
}

func (this *QShortcutEvent) Key() *QKeySequence {
	return newQKeySequence(C.QShortcutEvent_key(this.h))
}

func (this *QShortcutEvent) ShortcutId() int {
	return (int)(C.QShortcutEvent_shortcutId(this.h))
}

func (this *QShortcutEvent) IsAmbiguous() bool {
	return (bool)(C.QShortcutEvent_isAmbiguous(this.h))
}

func (this *QShortcutEvent) callVirtualBase_Clone() *QShortcutEvent {

	return newQShortcutEvent(C.QShortcutEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QShortcutEvent) OnClone(slot func(super func() *QShortcutEvent) *QShortcutEvent) {
	ok := C.QShortcutEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShortcutEvent_clone
func miqt_exec_callback_QShortcutEvent_clone(self *C.QShortcutEvent, cb C.intptr_t) *C.QShortcutEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QShortcutEvent) *QShortcutEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QShortcutEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QShortcutEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QShortcutEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QShortcutEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QShortcutEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShortcutEvent_setAccepted
func miqt_exec_callback_QShortcutEvent_setAccepted(self *C.QShortcutEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QShortcutEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QShortcutEvent) Delete() {
	C.QShortcutEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QShortcutEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QShortcutEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWindowStateChangeEvent struct {
	h *C.QWindowStateChangeEvent
	*QEvent
}

func (this *QWindowStateChangeEvent) cPointer() *C.QWindowStateChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWindowStateChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWindowStateChangeEvent constructs the type using only CGO pointers.
func newQWindowStateChangeEvent(h *C.QWindowStateChangeEvent) *QWindowStateChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QWindowStateChangeEvent_virtbase(h, &outptr_QEvent)

	return &QWindowStateChangeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQWindowStateChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQWindowStateChangeEvent(h unsafe.Pointer) *QWindowStateChangeEvent {
	return newQWindowStateChangeEvent((*C.QWindowStateChangeEvent)(h))
}

// NewQWindowStateChangeEvent constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent(oldState WindowState) *QWindowStateChangeEvent {

	return newQWindowStateChangeEvent(C.QWindowStateChangeEvent_new((C.int)(oldState)))
}

// NewQWindowStateChangeEvent2 constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent2(oldState WindowState, isOverride bool) *QWindowStateChangeEvent {

	return newQWindowStateChangeEvent(C.QWindowStateChangeEvent_new2((C.int)(oldState), (C.bool)(isOverride)))
}

func (this *QWindowStateChangeEvent) Clone() *QWindowStateChangeEvent {
	return newQWindowStateChangeEvent(C.QWindowStateChangeEvent_clone(this.h))
}

func (this *QWindowStateChangeEvent) OldState() WindowState {
	return (WindowState)(C.QWindowStateChangeEvent_oldState(this.h))
}

func (this *QWindowStateChangeEvent) IsOverride() bool {
	return (bool)(C.QWindowStateChangeEvent_isOverride(this.h))
}

func (this *QWindowStateChangeEvent) callVirtualBase_Clone() *QWindowStateChangeEvent {

	return newQWindowStateChangeEvent(C.QWindowStateChangeEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QWindowStateChangeEvent) OnClone(slot func(super func() *QWindowStateChangeEvent) *QWindowStateChangeEvent) {
	ok := C.QWindowStateChangeEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindowStateChangeEvent_clone
func miqt_exec_callback_QWindowStateChangeEvent_clone(self *C.QWindowStateChangeEvent, cb C.intptr_t) *C.QWindowStateChangeEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWindowStateChangeEvent) *QWindowStateChangeEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindowStateChangeEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QWindowStateChangeEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QWindowStateChangeEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QWindowStateChangeEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QWindowStateChangeEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindowStateChangeEvent_setAccepted
func miqt_exec_callback_QWindowStateChangeEvent_setAccepted(self *C.QWindowStateChangeEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QWindowStateChangeEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QWindowStateChangeEvent) Delete() {
	C.QWindowStateChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWindowStateChangeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QWindowStateChangeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTouchEvent struct {
	h *C.QTouchEvent
	*QPointerEvent
}

func (this *QTouchEvent) cPointer() *C.QTouchEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTouchEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTouchEvent constructs the type using only CGO pointers.
func newQTouchEvent(h *C.QTouchEvent) *QTouchEvent {
	if h == nil {
		return nil
	}
	var outptr_QPointerEvent *C.QPointerEvent = nil
	C.QTouchEvent_virtbase(h, &outptr_QPointerEvent)

	return &QTouchEvent{h: h,
		QPointerEvent: newQPointerEvent(outptr_QPointerEvent)}
}

// UnsafeNewQTouchEvent constructs the type using only unsafe pointers.
func UnsafeNewQTouchEvent(h unsafe.Pointer) *QTouchEvent {
	return newQTouchEvent((*C.QTouchEvent)(h))
}

// NewQTouchEvent constructs a new QTouchEvent object.
func NewQTouchEvent(eventType QEvent__Type) *QTouchEvent {

	return newQTouchEvent(C.QTouchEvent_new((C.int)(eventType)))
}

// NewQTouchEvent2 constructs a new QTouchEvent object.
func NewQTouchEvent2(eventType QEvent__Type, device *QPointingDevice, modifiers KeyboardModifier, touchPointStates QEventPoint__State) *QTouchEvent {

	return newQTouchEvent(C.QTouchEvent_new2((C.int)(eventType), device.cPointer(), (C.int)(modifiers), (C.uint8_t)(touchPointStates)))
}

// NewQTouchEvent3 constructs a new QTouchEvent object.
func NewQTouchEvent3(eventType QEvent__Type, device *QPointingDevice) *QTouchEvent {

	return newQTouchEvent(C.QTouchEvent_new3((C.int)(eventType), device.cPointer()))
}

// NewQTouchEvent4 constructs a new QTouchEvent object.
func NewQTouchEvent4(eventType QEvent__Type, device *QPointingDevice, modifiers KeyboardModifier) *QTouchEvent {

	return newQTouchEvent(C.QTouchEvent_new4((C.int)(eventType), device.cPointer(), (C.int)(modifiers)))
}

// NewQTouchEvent5 constructs a new QTouchEvent object.
func NewQTouchEvent5(eventType QEvent__Type, device *QPointingDevice, modifiers KeyboardModifier, touchPoints []QEventPoint) *QTouchEvent {
	touchPoints_CArray := (*[0xffff]*C.QEventPoint)(C.malloc(C.size_t(8 * len(touchPoints))))
	defer C.free(unsafe.Pointer(touchPoints_CArray))
	for i := range touchPoints {
		touchPoints_CArray[i] = touchPoints[i].cPointer()
	}
	touchPoints_ma := C.struct_miqt_array{len: C.size_t(len(touchPoints)), data: unsafe.Pointer(touchPoints_CArray)}

	return newQTouchEvent(C.QTouchEvent_new5((C.int)(eventType), device.cPointer(), (C.int)(modifiers), touchPoints_ma))
}

// NewQTouchEvent6 constructs a new QTouchEvent object.
func NewQTouchEvent6(eventType QEvent__Type, device *QPointingDevice, modifiers KeyboardModifier, touchPointStates QEventPoint__State, touchPoints []QEventPoint) *QTouchEvent {
	touchPoints_CArray := (*[0xffff]*C.QEventPoint)(C.malloc(C.size_t(8 * len(touchPoints))))
	defer C.free(unsafe.Pointer(touchPoints_CArray))
	for i := range touchPoints {
		touchPoints_CArray[i] = touchPoints[i].cPointer()
	}
	touchPoints_ma := C.struct_miqt_array{len: C.size_t(len(touchPoints)), data: unsafe.Pointer(touchPoints_CArray)}

	return newQTouchEvent(C.QTouchEvent_new6((C.int)(eventType), device.cPointer(), (C.int)(modifiers), (C.uint8_t)(touchPointStates), touchPoints_ma))
}

func (this *QTouchEvent) Clone() *QTouchEvent {
	return newQTouchEvent(C.QTouchEvent_clone(this.h))
}

func (this *QTouchEvent) Target() *QObject {
	return newQObject(C.QTouchEvent_target(this.h))
}

func (this *QTouchEvent) TouchPointStates() QEventPoint__State {
	return (QEventPoint__State)(C.QTouchEvent_touchPointStates(this.h))
}

func (this *QTouchEvent) TouchPoints() []QEventPoint {
	var _ma C.struct_miqt_array = C.QTouchEvent_touchPoints(this.h)
	_ret := make([]QEventPoint, int(_ma.len))
	_outCast := (*[0xffff]*C.QEventPoint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQEventPoint(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTouchEvent) IsBeginEvent() bool {
	return (bool)(C.QTouchEvent_isBeginEvent(this.h))
}

func (this *QTouchEvent) IsUpdateEvent() bool {
	return (bool)(C.QTouchEvent_isUpdateEvent(this.h))
}

func (this *QTouchEvent) IsEndEvent() bool {
	return (bool)(C.QTouchEvent_isEndEvent(this.h))
}

func (this *QTouchEvent) callVirtualBase_Clone() *QTouchEvent {

	return newQTouchEvent(C.QTouchEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QTouchEvent) OnClone(slot func(super func() *QTouchEvent) *QTouchEvent) {
	ok := C.QTouchEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTouchEvent_clone
func miqt_exec_callback_QTouchEvent_clone(self *C.QTouchEvent, cb C.intptr_t) *C.QTouchEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTouchEvent) *QTouchEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTouchEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QTouchEvent) callVirtualBase_IsBeginEvent() bool {

	return (bool)(C.QTouchEvent_virtualbase_isBeginEvent(unsafe.Pointer(this.h)))

}
func (this *QTouchEvent) OnIsBeginEvent(slot func(super func() bool) bool) {
	ok := C.QTouchEvent_override_virtual_isBeginEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTouchEvent_isBeginEvent
func miqt_exec_callback_QTouchEvent_isBeginEvent(self *C.QTouchEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTouchEvent{h: self}).callVirtualBase_IsBeginEvent)

	return (C.bool)(virtualReturn)

}

func (this *QTouchEvent) callVirtualBase_IsUpdateEvent() bool {

	return (bool)(C.QTouchEvent_virtualbase_isUpdateEvent(unsafe.Pointer(this.h)))

}
func (this *QTouchEvent) OnIsUpdateEvent(slot func(super func() bool) bool) {
	ok := C.QTouchEvent_override_virtual_isUpdateEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTouchEvent_isUpdateEvent
func miqt_exec_callback_QTouchEvent_isUpdateEvent(self *C.QTouchEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTouchEvent{h: self}).callVirtualBase_IsUpdateEvent)

	return (C.bool)(virtualReturn)

}

func (this *QTouchEvent) callVirtualBase_IsEndEvent() bool {

	return (bool)(C.QTouchEvent_virtualbase_isEndEvent(unsafe.Pointer(this.h)))

}
func (this *QTouchEvent) OnIsEndEvent(slot func(super func() bool) bool) {
	ok := C.QTouchEvent_override_virtual_isEndEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTouchEvent_isEndEvent
func miqt_exec_callback_QTouchEvent_isEndEvent(self *C.QTouchEvent, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTouchEvent{h: self}).callVirtualBase_IsEndEvent)

	return (C.bool)(virtualReturn)

}

func (this *QTouchEvent) callVirtualBase_SetTimestamp(timestamp uint64) {

	C.QTouchEvent_virtualbase_setTimestamp(unsafe.Pointer(this.h), (C.ulonglong)(timestamp))

}
func (this *QTouchEvent) OnSetTimestamp(slot func(super func(timestamp uint64), timestamp uint64)) {
	ok := C.QTouchEvent_override_virtual_setTimestamp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTouchEvent_setTimestamp
func miqt_exec_callback_QTouchEvent_setTimestamp(self *C.QTouchEvent, cb C.intptr_t, timestamp C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timestamp uint64), timestamp uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(timestamp)

	gofunc((&QTouchEvent{h: self}).callVirtualBase_SetTimestamp, slotval1)

}

func (this *QTouchEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QTouchEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QTouchEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QTouchEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTouchEvent_setAccepted
func miqt_exec_callback_QTouchEvent_setAccepted(self *C.QTouchEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QTouchEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QTouchEvent) Delete() {
	C.QTouchEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTouchEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QTouchEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScrollPrepareEvent struct {
	h *C.QScrollPrepareEvent
	*QEvent
}

func (this *QScrollPrepareEvent) cPointer() *C.QScrollPrepareEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScrollPrepareEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScrollPrepareEvent constructs the type using only CGO pointers.
func newQScrollPrepareEvent(h *C.QScrollPrepareEvent) *QScrollPrepareEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QScrollPrepareEvent_virtbase(h, &outptr_QEvent)

	return &QScrollPrepareEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQScrollPrepareEvent constructs the type using only unsafe pointers.
func UnsafeNewQScrollPrepareEvent(h unsafe.Pointer) *QScrollPrepareEvent {
	return newQScrollPrepareEvent((*C.QScrollPrepareEvent)(h))
}

// NewQScrollPrepareEvent constructs a new QScrollPrepareEvent object.
func NewQScrollPrepareEvent(startPos *QPointF) *QScrollPrepareEvent {

	return newQScrollPrepareEvent(C.QScrollPrepareEvent_new(startPos.cPointer()))
}

func (this *QScrollPrepareEvent) Clone() *QScrollPrepareEvent {
	return newQScrollPrepareEvent(C.QScrollPrepareEvent_clone(this.h))
}

func (this *QScrollPrepareEvent) StartPos() *QPointF {
	_goptr := newQPointF(C.QScrollPrepareEvent_startPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) ViewportSize() *QSizeF {
	_goptr := newQSizeF(C.QScrollPrepareEvent_viewportSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) ContentPosRange() *QRectF {
	_goptr := newQRectF(C.QScrollPrepareEvent_contentPosRange(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) ContentPos() *QPointF {
	_goptr := newQPointF(C.QScrollPrepareEvent_contentPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) SetViewportSize(size *QSizeF) {
	C.QScrollPrepareEvent_setViewportSize(this.h, size.cPointer())
}

func (this *QScrollPrepareEvent) SetContentPosRange(rect *QRectF) {
	C.QScrollPrepareEvent_setContentPosRange(this.h, rect.cPointer())
}

func (this *QScrollPrepareEvent) SetContentPos(pos *QPointF) {
	C.QScrollPrepareEvent_setContentPos(this.h, pos.cPointer())
}

func (this *QScrollPrepareEvent) callVirtualBase_Clone() *QScrollPrepareEvent {

	return newQScrollPrepareEvent(C.QScrollPrepareEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QScrollPrepareEvent) OnClone(slot func(super func() *QScrollPrepareEvent) *QScrollPrepareEvent) {
	ok := C.QScrollPrepareEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollPrepareEvent_clone
func miqt_exec_callback_QScrollPrepareEvent_clone(self *C.QScrollPrepareEvent, cb C.intptr_t) *C.QScrollPrepareEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QScrollPrepareEvent) *QScrollPrepareEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollPrepareEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QScrollPrepareEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QScrollPrepareEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QScrollPrepareEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QScrollPrepareEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollPrepareEvent_setAccepted
func miqt_exec_callback_QScrollPrepareEvent_setAccepted(self *C.QScrollPrepareEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QScrollPrepareEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QScrollPrepareEvent) Delete() {
	C.QScrollPrepareEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollPrepareEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollPrepareEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScrollEvent struct {
	h *C.QScrollEvent
	*QEvent
}

func (this *QScrollEvent) cPointer() *C.QScrollEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScrollEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScrollEvent constructs the type using only CGO pointers.
func newQScrollEvent(h *C.QScrollEvent) *QScrollEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QScrollEvent_virtbase(h, &outptr_QEvent)

	return &QScrollEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQScrollEvent constructs the type using only unsafe pointers.
func UnsafeNewQScrollEvent(h unsafe.Pointer) *QScrollEvent {
	return newQScrollEvent((*C.QScrollEvent)(h))
}

// NewQScrollEvent constructs a new QScrollEvent object.
func NewQScrollEvent(contentPos *QPointF, overshoot *QPointF, scrollState QScrollEvent__ScrollState) *QScrollEvent {

	return newQScrollEvent(C.QScrollEvent_new(contentPos.cPointer(), overshoot.cPointer(), (C.int)(scrollState)))
}

func (this *QScrollEvent) Clone() *QScrollEvent {
	return newQScrollEvent(C.QScrollEvent_clone(this.h))
}

func (this *QScrollEvent) ContentPos() *QPointF {
	_goptr := newQPointF(C.QScrollEvent_contentPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollEvent) OvershootDistance() *QPointF {
	_goptr := newQPointF(C.QScrollEvent_overshootDistance(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollEvent) ScrollState() QScrollEvent__ScrollState {
	return (QScrollEvent__ScrollState)(C.QScrollEvent_scrollState(this.h))
}

func (this *QScrollEvent) callVirtualBase_Clone() *QScrollEvent {

	return newQScrollEvent(C.QScrollEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QScrollEvent) OnClone(slot func(super func() *QScrollEvent) *QScrollEvent) {
	ok := C.QScrollEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollEvent_clone
func miqt_exec_callback_QScrollEvent_clone(self *C.QScrollEvent, cb C.intptr_t) *C.QScrollEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QScrollEvent) *QScrollEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QScrollEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QScrollEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QScrollEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QScrollEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollEvent_setAccepted
func miqt_exec_callback_QScrollEvent_setAccepted(self *C.QScrollEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QScrollEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QScrollEvent) Delete() {
	C.QScrollEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScreenOrientationChangeEvent struct {
	h *C.QScreenOrientationChangeEvent
	*QEvent
}

func (this *QScreenOrientationChangeEvent) cPointer() *C.QScreenOrientationChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScreenOrientationChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScreenOrientationChangeEvent constructs the type using only CGO pointers.
func newQScreenOrientationChangeEvent(h *C.QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QScreenOrientationChangeEvent_virtbase(h, &outptr_QEvent)

	return &QScreenOrientationChangeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQScreenOrientationChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQScreenOrientationChangeEvent(h unsafe.Pointer) *QScreenOrientationChangeEvent {
	return newQScreenOrientationChangeEvent((*C.QScreenOrientationChangeEvent)(h))
}

// NewQScreenOrientationChangeEvent constructs a new QScreenOrientationChangeEvent object.
func NewQScreenOrientationChangeEvent(screen *QScreen, orientation ScreenOrientation) *QScreenOrientationChangeEvent {

	return newQScreenOrientationChangeEvent(C.QScreenOrientationChangeEvent_new(screen.cPointer(), (C.int)(orientation)))
}

func (this *QScreenOrientationChangeEvent) Clone() *QScreenOrientationChangeEvent {
	return newQScreenOrientationChangeEvent(C.QScreenOrientationChangeEvent_clone(this.h))
}

func (this *QScreenOrientationChangeEvent) Screen() *QScreen {
	return newQScreen(C.QScreenOrientationChangeEvent_screen(this.h))
}

func (this *QScreenOrientationChangeEvent) Orientation() ScreenOrientation {
	return (ScreenOrientation)(C.QScreenOrientationChangeEvent_orientation(this.h))
}

func (this *QScreenOrientationChangeEvent) callVirtualBase_Clone() *QScreenOrientationChangeEvent {

	return newQScreenOrientationChangeEvent(C.QScreenOrientationChangeEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QScreenOrientationChangeEvent) OnClone(slot func(super func() *QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent) {
	ok := C.QScreenOrientationChangeEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScreenOrientationChangeEvent_clone
func miqt_exec_callback_QScreenOrientationChangeEvent_clone(self *C.QScreenOrientationChangeEvent, cb C.intptr_t) *C.QScreenOrientationChangeEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScreenOrientationChangeEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QScreenOrientationChangeEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QScreenOrientationChangeEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QScreenOrientationChangeEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QScreenOrientationChangeEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScreenOrientationChangeEvent_setAccepted
func miqt_exec_callback_QScreenOrientationChangeEvent_setAccepted(self *C.QScreenOrientationChangeEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QScreenOrientationChangeEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QScreenOrientationChangeEvent) Delete() {
	C.QScreenOrientationChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScreenOrientationChangeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QScreenOrientationChangeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QApplicationStateChangeEvent struct {
	h *C.QApplicationStateChangeEvent
	*QEvent
}

func (this *QApplicationStateChangeEvent) cPointer() *C.QApplicationStateChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QApplicationStateChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQApplicationStateChangeEvent constructs the type using only CGO pointers.
func newQApplicationStateChangeEvent(h *C.QApplicationStateChangeEvent) *QApplicationStateChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QApplicationStateChangeEvent_virtbase(h, &outptr_QEvent)

	return &QApplicationStateChangeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQApplicationStateChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQApplicationStateChangeEvent(h unsafe.Pointer) *QApplicationStateChangeEvent {
	return newQApplicationStateChangeEvent((*C.QApplicationStateChangeEvent)(h))
}

// NewQApplicationStateChangeEvent constructs a new QApplicationStateChangeEvent object.
func NewQApplicationStateChangeEvent(state ApplicationState) *QApplicationStateChangeEvent {

	return newQApplicationStateChangeEvent(C.QApplicationStateChangeEvent_new((C.int)(state)))
}

func (this *QApplicationStateChangeEvent) Clone() *QApplicationStateChangeEvent {
	return newQApplicationStateChangeEvent(C.QApplicationStateChangeEvent_clone(this.h))
}

func (this *QApplicationStateChangeEvent) ApplicationState() ApplicationState {
	return (ApplicationState)(C.QApplicationStateChangeEvent_applicationState(this.h))
}

func (this *QApplicationStateChangeEvent) callVirtualBase_Clone() *QApplicationStateChangeEvent {

	return newQApplicationStateChangeEvent(C.QApplicationStateChangeEvent_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QApplicationStateChangeEvent) OnClone(slot func(super func() *QApplicationStateChangeEvent) *QApplicationStateChangeEvent) {
	ok := C.QApplicationStateChangeEvent_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplicationStateChangeEvent_clone
func miqt_exec_callback_QApplicationStateChangeEvent_clone(self *C.QApplicationStateChangeEvent, cb C.intptr_t) *C.QApplicationStateChangeEvent {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QApplicationStateChangeEvent) *QApplicationStateChangeEvent)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QApplicationStateChangeEvent{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QApplicationStateChangeEvent) callVirtualBase_SetAccepted(accepted bool) {

	C.QApplicationStateChangeEvent_virtualbase_setAccepted(unsafe.Pointer(this.h), (C.bool)(accepted))

}
func (this *QApplicationStateChangeEvent) OnSetAccepted(slot func(super func(accepted bool), accepted bool)) {
	ok := C.QApplicationStateChangeEvent_override_virtual_setAccepted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplicationStateChangeEvent_setAccepted
func miqt_exec_callback_QApplicationStateChangeEvent_setAccepted(self *C.QApplicationStateChangeEvent, cb C.intptr_t, accepted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(accepted bool), accepted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(accepted)

	gofunc((&QApplicationStateChangeEvent{h: self}).callVirtualBase_SetAccepted, slotval1)

}

// Delete this object from C++ memory.
func (this *QApplicationStateChangeEvent) Delete() {
	C.QApplicationStateChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QApplicationStateChangeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QApplicationStateChangeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QInputMethodEvent__Attribute struct {
	h *C.QInputMethodEvent__Attribute
}

func (this *QInputMethodEvent__Attribute) cPointer() *C.QInputMethodEvent__Attribute {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputMethodEvent__Attribute) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputMethodEvent__Attribute constructs the type using only CGO pointers.
func newQInputMethodEvent__Attribute(h *C.QInputMethodEvent__Attribute) *QInputMethodEvent__Attribute {
	if h == nil {
		return nil
	}

	return &QInputMethodEvent__Attribute{h: h}
}

// UnsafeNewQInputMethodEvent__Attribute constructs the type using only unsafe pointers.
func UnsafeNewQInputMethodEvent__Attribute(h unsafe.Pointer) *QInputMethodEvent__Attribute {
	return newQInputMethodEvent__Attribute((*C.QInputMethodEvent__Attribute)(h))
}

// NewQInputMethodEvent__Attribute constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute(typ QInputMethodEvent__AttributeType, s int, l int, val QVariant) *QInputMethodEvent__Attribute {

	return newQInputMethodEvent__Attribute(C.QInputMethodEvent__Attribute_new((C.int)(typ), (C.int)(s), (C.int)(l), val.cPointer()))
}

// NewQInputMethodEvent__Attribute2 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute2(typ QInputMethodEvent__AttributeType, s int, l int) *QInputMethodEvent__Attribute {

	return newQInputMethodEvent__Attribute(C.QInputMethodEvent__Attribute_new2((C.int)(typ), (C.int)(s), (C.int)(l)))
}

// NewQInputMethodEvent__Attribute3 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute3(param1 *QInputMethodEvent__Attribute) *QInputMethodEvent__Attribute {

	return newQInputMethodEvent__Attribute(C.QInputMethodEvent__Attribute_new3(param1.cPointer()))
}

func (this *QInputMethodEvent__Attribute) OperatorAssign(param1 *QInputMethodEvent__Attribute) {
	C.QInputMethodEvent__Attribute_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QInputMethodEvent__Attribute) Delete() {
	C.QInputMethodEvent__Attribute_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputMethodEvent__Attribute) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputMethodEvent__Attribute) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
