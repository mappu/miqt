package qt6

/*

#include "gen_qeventpoint.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QEventPoint__State byte

const (
	QEventPoint__Unknown    QEventPoint__State = 0
	QEventPoint__Stationary QEventPoint__State = 4
	QEventPoint__Pressed    QEventPoint__State = 1
	QEventPoint__Updated    QEventPoint__State = 2
	QEventPoint__Released   QEventPoint__State = 8
)

type QEventPoint struct {
	h  *C.QEventPoint
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QEventPoint) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QEventPoint) cPointer() *C.QEventPoint {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEventPoint) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQEventPoint constructs the type using only CGO pointers.
func newQEventPoint(h *C.QEventPoint) *QEventPoint {
	if h == nil {
		return nil
	}

	return &QEventPoint{h: h}
}

// UnsafeNewQEventPoint constructs the type using only unsafe pointers.
func UnsafeNewQEventPoint(h unsafe.Pointer) *QEventPoint {
	return newQEventPoint((*C.QEventPoint)(h))
}

// NewQEventPoint constructs a new QEventPoint object.
func NewQEventPoint() *QEventPoint {

	return newQEventPoint(C.QEventPoint_new())
}

// NewQEventPoint2 constructs a new QEventPoint object.
func NewQEventPoint2(pointId int, state QEventPoint__State, scenePosition *QPointF, globalPosition *QPointF) *QEventPoint {
	defer runtime.KeepAlive(scenePosition)
	defer runtime.KeepAlive(globalPosition)

	return newQEventPoint(C.QEventPoint_new2((C.int)(pointId), (C.uint8_t)(state), scenePosition.cPointer(), globalPosition.cPointer()))
}

// NewQEventPoint3 constructs a new QEventPoint object.
func NewQEventPoint3(other *QEventPoint) *QEventPoint {
	defer runtime.KeepAlive(other)

	return newQEventPoint(C.QEventPoint_new3(other.cPointer()))
}

// NewQEventPoint4 constructs a new QEventPoint object.
func NewQEventPoint4(id int) *QEventPoint {

	return newQEventPoint(C.QEventPoint_new4((C.int)(id)))
}

// NewQEventPoint5 constructs a new QEventPoint object.
func NewQEventPoint5(id int, device *QPointingDevice) *QEventPoint {
	defer runtime.KeepAlive(device)

	return newQEventPoint(C.QEventPoint_new5((C.int)(id), device.cPointer()))
}

func (this *QEventPoint) OperatorAssign(other *QEventPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QEventPoint_operatorAssign(this.h, other.cPointer())
}

func (this *QEventPoint) OperatorEqual(other *QEventPoint) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QEventPoint_operatorEqual(this.h, other.cPointer()))
}

func (this *QEventPoint) OperatorNotEqual(other *QEventPoint) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QEventPoint_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QEventPoint) Swap(other *QEventPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QEventPoint_swap(this.h, other.cPointer())
}

func (this *QEventPoint) Position() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_position(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) PressPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_pressPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GrabPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_grabPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_lastPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) ScenePosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_scenePosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) ScenePressPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_scenePressPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) SceneGrabPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_sceneGrabPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) SceneLastPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_sceneLastPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GlobalPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_globalPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GlobalPressPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_globalPressPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GlobalGrabPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_globalGrabPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GlobalLastPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_globalLastPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) NormalizedPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_normalizedPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) Pos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) StartPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_startPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) ScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) StartScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_startScenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) ScreenPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) StartScreenPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_startScreenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) StartNormalizedPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_startNormalizedPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) NormalizedPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_normalizedPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_lastPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_lastScenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastScreenPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_lastScreenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastNormalizedPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QEventPoint_lastNormalizedPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) Velocity() *QVector2D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector2D(C.QEventPoint_velocity(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) State() QEventPoint__State {
	defer runtime.KeepAlive(this)
	return (QEventPoint__State)(C.QEventPoint_state(this.h))
}

func (this *QEventPoint) Device() *QPointingDevice {
	defer runtime.KeepAlive(this)
	return newQPointingDevice(C.QEventPoint_device(this.h))
}

func (this *QEventPoint) Id() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QEventPoint_id(this.h))
}

func (this *QEventPoint) UniqueId() *QPointingDeviceUniqueId {
	defer runtime.KeepAlive(this)
	_goptr := newQPointingDeviceUniqueId(C.QEventPoint_uniqueId(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) Timestamp() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QEventPoint_timestamp(this.h))
}

func (this *QEventPoint) LastTimestamp() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QEventPoint_lastTimestamp(this.h))
}

func (this *QEventPoint) PressTimestamp() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QEventPoint_pressTimestamp(this.h))
}

func (this *QEventPoint) TimeHeld() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QEventPoint_timeHeld(this.h))
}

func (this *QEventPoint) Pressure() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QEventPoint_pressure(this.h))
}

func (this *QEventPoint) Rotation() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QEventPoint_rotation(this.h))
}

func (this *QEventPoint) EllipseDiameters() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QEventPoint_ellipseDiameters(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) IsAccepted() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QEventPoint_isAccepted(this.h))
}

func (this *QEventPoint) SetAccepted() {
	defer runtime.KeepAlive(this)
	C.QEventPoint_setAccepted(this.h)
}

func (this *QEventPoint) SetAcceptedWithAccepted(accepted bool) {
	defer runtime.KeepAlive(this)
	C.QEventPoint_setAcceptedWithAccepted(this.h, (C.bool)(accepted))
}

// Delete this object from C++ memory.
func (this *QEventPoint) Delete() {
	C.QEventPoint_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QEventPoint) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QEventPoint_delete((*C.QEventPoint)(gc[0]))
	})
	this.miqtSetGC(gc)
}
