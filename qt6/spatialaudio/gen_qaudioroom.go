package spatialaudio

/*

#include "gen_qaudioroom.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioRoom__Material int

const (
	QAudioRoom__Transparent            QAudioRoom__Material = 0
	QAudioRoom__AcousticCeilingTiles   QAudioRoom__Material = 1
	QAudioRoom__BrickBare              QAudioRoom__Material = 2
	QAudioRoom__BrickPainted           QAudioRoom__Material = 3
	QAudioRoom__ConcreteBlockCoarse    QAudioRoom__Material = 4
	QAudioRoom__ConcreteBlockPainted   QAudioRoom__Material = 5
	QAudioRoom__CurtainHeavy           QAudioRoom__Material = 6
	QAudioRoom__FiberGlassInsulation   QAudioRoom__Material = 7
	QAudioRoom__GlassThin              QAudioRoom__Material = 8
	QAudioRoom__GlassThick             QAudioRoom__Material = 9
	QAudioRoom__Grass                  QAudioRoom__Material = 10
	QAudioRoom__LinoleumOnConcrete     QAudioRoom__Material = 11
	QAudioRoom__Marble                 QAudioRoom__Material = 12
	QAudioRoom__Metal                  QAudioRoom__Material = 13
	QAudioRoom__ParquetOnConcrete      QAudioRoom__Material = 14
	QAudioRoom__PlasterRough           QAudioRoom__Material = 15
	QAudioRoom__PlasterSmooth          QAudioRoom__Material = 16
	QAudioRoom__PlywoodPanel           QAudioRoom__Material = 17
	QAudioRoom__PolishedConcreteOrTile QAudioRoom__Material = 18
	QAudioRoom__Sheetrock              QAudioRoom__Material = 19
	QAudioRoom__WaterOrIceSurface      QAudioRoom__Material = 20
	QAudioRoom__WoodCeiling            QAudioRoom__Material = 21
	QAudioRoom__WoodPanel              QAudioRoom__Material = 22
	QAudioRoom__UniformMaterial        QAudioRoom__Material = 23
)

type QAudioRoom__Wall int

const (
	QAudioRoom__LeftWall  QAudioRoom__Wall = 0
	QAudioRoom__RightWall QAudioRoom__Wall = 1
	QAudioRoom__Floor     QAudioRoom__Wall = 2
	QAudioRoom__Ceiling   QAudioRoom__Wall = 3
	QAudioRoom__FrontWall QAudioRoom__Wall = 4
	QAudioRoom__BackWall  QAudioRoom__Wall = 5
)

type QAudioRoom struct {
	h *C.QAudioRoom
	*qt6.QObject
}

func (this *QAudioRoom) cPointer() *C.QAudioRoom {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioRoom) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioRoom constructs the type using only CGO pointers.
func newQAudioRoom(h *C.QAudioRoom) *QAudioRoom {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAudioRoom_virtbase(h, &outptr_QObject)

	return &QAudioRoom{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAudioRoom constructs the type using only unsafe pointers.
func UnsafeNewQAudioRoom(h unsafe.Pointer) *QAudioRoom {
	return newQAudioRoom((*C.QAudioRoom)(h))
}

// NewQAudioRoom constructs a new QAudioRoom object.
func NewQAudioRoom(engine *QAudioEngine) *QAudioRoom {

	return newQAudioRoom(C.QAudioRoom_new(engine.cPointer()))
}

func (this *QAudioRoom) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioRoom_metaObject(this.h)))
}

func (this *QAudioRoom) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioRoom_metacast(this.h, param1_Cstring))
}

func QAudioRoom_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoom_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioRoom) SetPosition(pos qt6.QVector3D) {
	C.QAudioRoom_setPosition(this.h, (*C.QVector3D)(pos.UnsafePointer()))
}

func (this *QAudioRoom) Position() *qt6.QVector3D {
	_goptr := qt6.UnsafeNewQVector3D(unsafe.Pointer(C.QAudioRoom_position(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioRoom) SetDimensions(dim qt6.QVector3D) {
	C.QAudioRoom_setDimensions(this.h, (*C.QVector3D)(dim.UnsafePointer()))
}

func (this *QAudioRoom) Dimensions() *qt6.QVector3D {
	_goptr := qt6.UnsafeNewQVector3D(unsafe.Pointer(C.QAudioRoom_dimensions(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioRoom) SetRotation(q *qt6.QQuaternion) {
	C.QAudioRoom_setRotation(this.h, (*C.QQuaternion)(q.UnsafePointer()))
}

func (this *QAudioRoom) Rotation() *qt6.QQuaternion {
	_goptr := qt6.UnsafeNewQQuaternion(unsafe.Pointer(C.QAudioRoom_rotation(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioRoom) SetWallMaterial(wall QAudioRoom__Wall, material QAudioRoom__Material) {
	C.QAudioRoom_setWallMaterial(this.h, (C.int)(wall), (C.int)(material))
}

func (this *QAudioRoom) WallMaterial(wall QAudioRoom__Wall) QAudioRoom__Material {
	return (QAudioRoom__Material)(C.QAudioRoom_wallMaterial(this.h, (C.int)(wall)))
}

func (this *QAudioRoom) SetReflectionGain(factor float32) {
	C.QAudioRoom_setReflectionGain(this.h, (C.float)(factor))
}

func (this *QAudioRoom) ReflectionGain() float32 {
	return (float32)(C.QAudioRoom_reflectionGain(this.h))
}

func (this *QAudioRoom) SetReverbGain(factor float32) {
	C.QAudioRoom_setReverbGain(this.h, (C.float)(factor))
}

func (this *QAudioRoom) ReverbGain() float32 {
	return (float32)(C.QAudioRoom_reverbGain(this.h))
}

func (this *QAudioRoom) SetReverbTime(factor float32) {
	C.QAudioRoom_setReverbTime(this.h, (C.float)(factor))
}

func (this *QAudioRoom) ReverbTime() float32 {
	return (float32)(C.QAudioRoom_reverbTime(this.h))
}

func (this *QAudioRoom) SetReverbBrightness(factor float32) {
	C.QAudioRoom_setReverbBrightness(this.h, (C.float)(factor))
}

func (this *QAudioRoom) ReverbBrightness() float32 {
	return (float32)(C.QAudioRoom_reverbBrightness(this.h))
}

func (this *QAudioRoom) PositionChanged() {
	C.QAudioRoom_positionChanged(this.h)
}
func (this *QAudioRoom) OnPositionChanged(slot func()) {
	C.QAudioRoom_connect_positionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_positionChanged
func miqt_exec_callback_QAudioRoom_positionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) DimensionsChanged() {
	C.QAudioRoom_dimensionsChanged(this.h)
}
func (this *QAudioRoom) OnDimensionsChanged(slot func()) {
	C.QAudioRoom_connect_dimensionsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_dimensionsChanged
func miqt_exec_callback_QAudioRoom_dimensionsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) RotationChanged() {
	C.QAudioRoom_rotationChanged(this.h)
}
func (this *QAudioRoom) OnRotationChanged(slot func()) {
	C.QAudioRoom_connect_rotationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_rotationChanged
func miqt_exec_callback_QAudioRoom_rotationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) WallsChanged() {
	C.QAudioRoom_wallsChanged(this.h)
}
func (this *QAudioRoom) OnWallsChanged(slot func()) {
	C.QAudioRoom_connect_wallsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_wallsChanged
func miqt_exec_callback_QAudioRoom_wallsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) ReflectionGainChanged() {
	C.QAudioRoom_reflectionGainChanged(this.h)
}
func (this *QAudioRoom) OnReflectionGainChanged(slot func()) {
	C.QAudioRoom_connect_reflectionGainChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_reflectionGainChanged
func miqt_exec_callback_QAudioRoom_reflectionGainChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) ReverbGainChanged() {
	C.QAudioRoom_reverbGainChanged(this.h)
}
func (this *QAudioRoom) OnReverbGainChanged(slot func()) {
	C.QAudioRoom_connect_reverbGainChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_reverbGainChanged
func miqt_exec_callback_QAudioRoom_reverbGainChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) ReverbTimeChanged() {
	C.QAudioRoom_reverbTimeChanged(this.h)
}
func (this *QAudioRoom) OnReverbTimeChanged(slot func()) {
	C.QAudioRoom_connect_reverbTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_reverbTimeChanged
func miqt_exec_callback_QAudioRoom_reverbTimeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) ReverbBrightnessChanged() {
	C.QAudioRoom_reverbBrightnessChanged(this.h)
}
func (this *QAudioRoom) OnReverbBrightnessChanged(slot func()) {
	C.QAudioRoom_connect_reverbBrightnessChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_reverbBrightnessChanged
func miqt_exec_callback_QAudioRoom_reverbBrightnessChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAudioRoom_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoom_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRoom_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoom_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioRoom) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioRoom_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioRoom) Onevent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QAudioRoom_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioRoom_event
func miqt_exec_callback_QAudioRoom_event(self *C.QAudioRoom, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioRoom{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioRoom) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAudioRoom_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioRoom) OneventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QAudioRoom_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioRoom_eventFilter
func miqt_exec_callback_QAudioRoom_eventFilter(self *C.QAudioRoom, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioRoom{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioRoom) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAudioRoom_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioRoom) OntimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAudioRoom_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioRoom_timerEvent
func miqt_exec_callback_QAudioRoom_timerEvent(self *C.QAudioRoom, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioRoom{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioRoom) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioRoom_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioRoom) OnchildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAudioRoom_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioRoom_childEvent
func miqt_exec_callback_QAudioRoom_childEvent(self *C.QAudioRoom, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioRoom{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioRoom) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioRoom_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioRoom) OncustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAudioRoom_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioRoom_customEvent
func miqt_exec_callback_QAudioRoom_customEvent(self *C.QAudioRoom, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioRoom{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioRoom) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioRoom_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioRoom) OnconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioRoom_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioRoom_connectNotify
func miqt_exec_callback_QAudioRoom_connectNotify(self *C.QAudioRoom, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioRoom{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioRoom) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioRoom_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioRoom) OndisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioRoom_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioRoom_disconnectNotify
func miqt_exec_callback_QAudioRoom_disconnectNotify(self *C.QAudioRoom, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioRoom{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioRoom) Delete() {
	C.QAudioRoom_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioRoom) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioRoom) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
