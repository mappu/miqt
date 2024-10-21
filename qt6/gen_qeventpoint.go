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
	h *C.QEventPoint
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

func newQEventPoint(h *C.QEventPoint) *QEventPoint {
	if h == nil {
		return nil
	}
	return &QEventPoint{h: h}
}

func UnsafeNewQEventPoint(h unsafe.Pointer) *QEventPoint {
	return newQEventPoint((*C.QEventPoint)(h))
}

// NewQEventPoint constructs a new QEventPoint object.
func NewQEventPoint() *QEventPoint {
	ret := C.QEventPoint_new()
	return newQEventPoint(ret)
}

// NewQEventPoint2 constructs a new QEventPoint object.
func NewQEventPoint2(pointId int, state QEventPoint__State, scenePosition *QPointF, globalPosition *QPointF) *QEventPoint {
	ret := C.QEventPoint_new2((C.int)(pointId), (C.uint8_t)(state), scenePosition.cPointer(), globalPosition.cPointer())
	return newQEventPoint(ret)
}

// NewQEventPoint3 constructs a new QEventPoint object.
func NewQEventPoint3(other *QEventPoint) *QEventPoint {
	ret := C.QEventPoint_new3(other.cPointer())
	return newQEventPoint(ret)
}

// NewQEventPoint4 constructs a new QEventPoint object.
func NewQEventPoint4(id int) *QEventPoint {
	ret := C.QEventPoint_new4((C.int)(id))
	return newQEventPoint(ret)
}

// NewQEventPoint5 constructs a new QEventPoint object.
func NewQEventPoint5(id int, device *QPointingDevice) *QEventPoint {
	ret := C.QEventPoint_new5((C.int)(id), device.cPointer())
	return newQEventPoint(ret)
}

func (this *QEventPoint) OperatorAssign(other *QEventPoint) {
	C.QEventPoint_OperatorAssign(this.h, other.cPointer())
}

func (this *QEventPoint) OperatorEqual(other *QEventPoint) bool {
	return (bool)(C.QEventPoint_OperatorEqual(this.h, other.cPointer()))
}

func (this *QEventPoint) OperatorNotEqual(other *QEventPoint) bool {
	return (bool)(C.QEventPoint_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QEventPoint) Swap(other *QEventPoint) {
	C.QEventPoint_Swap(this.h, other.cPointer())
}

func (this *QEventPoint) Position() *QPointF {
	_ret := C.QEventPoint_Position(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) PressPosition() *QPointF {
	_ret := C.QEventPoint_PressPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GrabPosition() *QPointF {
	_ret := C.QEventPoint_GrabPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastPosition() *QPointF {
	_ret := C.QEventPoint_LastPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) ScenePosition() *QPointF {
	_ret := C.QEventPoint_ScenePosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) ScenePressPosition() *QPointF {
	_ret := C.QEventPoint_ScenePressPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) SceneGrabPosition() *QPointF {
	_ret := C.QEventPoint_SceneGrabPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) SceneLastPosition() *QPointF {
	_ret := C.QEventPoint_SceneLastPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GlobalPosition() *QPointF {
	_ret := C.QEventPoint_GlobalPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GlobalPressPosition() *QPointF {
	_ret := C.QEventPoint_GlobalPressPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GlobalGrabPosition() *QPointF {
	_ret := C.QEventPoint_GlobalGrabPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) GlobalLastPosition() *QPointF {
	_ret := C.QEventPoint_GlobalLastPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) NormalizedPosition() *QPointF {
	_ret := C.QEventPoint_NormalizedPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) Pos() *QPointF {
	_ret := C.QEventPoint_Pos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) StartPos() *QPointF {
	_ret := C.QEventPoint_StartPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) ScenePos() *QPointF {
	_ret := C.QEventPoint_ScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) StartScenePos() *QPointF {
	_ret := C.QEventPoint_StartScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) ScreenPos() *QPointF {
	_ret := C.QEventPoint_ScreenPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) StartScreenPos() *QPointF {
	_ret := C.QEventPoint_StartScreenPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) StartNormalizedPos() *QPointF {
	_ret := C.QEventPoint_StartNormalizedPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) NormalizedPos() *QPointF {
	_ret := C.QEventPoint_NormalizedPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastPos() *QPointF {
	_ret := C.QEventPoint_LastPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastScenePos() *QPointF {
	_ret := C.QEventPoint_LastScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastScreenPos() *QPointF {
	_ret := C.QEventPoint_LastScreenPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) LastNormalizedPos() *QPointF {
	_ret := C.QEventPoint_LastNormalizedPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) Velocity() *QVector2D {
	_ret := C.QEventPoint_Velocity(this.h)
	_goptr := newQVector2D(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) State() QEventPoint__State {
	return (QEventPoint__State)(C.QEventPoint_State(this.h))
}

func (this *QEventPoint) Device() *QPointingDevice {
	return UnsafeNewQPointingDevice(unsafe.Pointer(C.QEventPoint_Device(this.h)))
}

func (this *QEventPoint) Id() int {
	return (int)(C.QEventPoint_Id(this.h))
}

func (this *QEventPoint) UniqueId() *QPointingDeviceUniqueId {
	_ret := C.QEventPoint_UniqueId(this.h)
	_goptr := newQPointingDeviceUniqueId(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) Timestamp() uint64 {
	return (uint64)(C.QEventPoint_Timestamp(this.h))
}

func (this *QEventPoint) LastTimestamp() uint64 {
	return (uint64)(C.QEventPoint_LastTimestamp(this.h))
}

func (this *QEventPoint) PressTimestamp() uint64 {
	return (uint64)(C.QEventPoint_PressTimestamp(this.h))
}

func (this *QEventPoint) TimeHeld() float64 {
	return (float64)(C.QEventPoint_TimeHeld(this.h))
}

func (this *QEventPoint) Pressure() float64 {
	return (float64)(C.QEventPoint_Pressure(this.h))
}

func (this *QEventPoint) Rotation() float64 {
	return (float64)(C.QEventPoint_Rotation(this.h))
}

func (this *QEventPoint) EllipseDiameters() *QSizeF {
	_ret := C.QEventPoint_EllipseDiameters(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEventPoint) IsAccepted() bool {
	return (bool)(C.QEventPoint_IsAccepted(this.h))
}

func (this *QEventPoint) SetAccepted() {
	C.QEventPoint_SetAccepted(this.h)
}

func (this *QEventPoint) SetAccepted1(accepted bool) {
	C.QEventPoint_SetAccepted1(this.h, (C.bool)(accepted))
}

// Delete this object from C++ memory.
func (this *QEventPoint) Delete() {
	C.QEventPoint_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEventPoint) GoGC() {
	runtime.SetFinalizer(this, func(this *QEventPoint) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
