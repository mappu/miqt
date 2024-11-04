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

func newQAudioRoom(h *C.QAudioRoom) *QAudioRoom {
	if h == nil {
		return nil
	}
	return &QAudioRoom{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAudioRoom(h unsafe.Pointer) *QAudioRoom {
	return newQAudioRoom((*C.QAudioRoom)(h))
}

// NewQAudioRoom constructs a new QAudioRoom object.
func NewQAudioRoom(engine *QAudioEngine) *QAudioRoom {
	ret := C.QAudioRoom_new(engine.cPointer())
	return newQAudioRoom(ret)
}

func (this *QAudioRoom) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioRoom_MetaObject(this.h)))
}

func (this *QAudioRoom) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioRoom_Metacast(this.h, param1_Cstring))
}

func QAudioRoom_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoom_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioRoom) SetPosition(pos qt6.QVector3D) {
	C.QAudioRoom_SetPosition(this.h, (*C.QVector3D)(pos.UnsafePointer()))
}

func (this *QAudioRoom) Position() *qt6.QVector3D {
	_ret := C.QAudioRoom_Position(this.h)
	_goptr := qt6.UnsafeNewQVector3D(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioRoom) SetDimensions(dim qt6.QVector3D) {
	C.QAudioRoom_SetDimensions(this.h, (*C.QVector3D)(dim.UnsafePointer()))
}

func (this *QAudioRoom) Dimensions() *qt6.QVector3D {
	_ret := C.QAudioRoom_Dimensions(this.h)
	_goptr := qt6.UnsafeNewQVector3D(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioRoom) SetRotation(q *qt6.QQuaternion) {
	C.QAudioRoom_SetRotation(this.h, (*C.QQuaternion)(q.UnsafePointer()))
}

func (this *QAudioRoom) Rotation() *qt6.QQuaternion {
	_ret := C.QAudioRoom_Rotation(this.h)
	_goptr := qt6.UnsafeNewQQuaternion(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioRoom) SetWallMaterial(wall QAudioRoom__Wall, material QAudioRoom__Material) {
	C.QAudioRoom_SetWallMaterial(this.h, (C.int)(wall), (C.int)(material))
}

func (this *QAudioRoom) WallMaterial(wall QAudioRoom__Wall) QAudioRoom__Material {
	return (QAudioRoom__Material)(C.QAudioRoom_WallMaterial(this.h, (C.int)(wall)))
}

func (this *QAudioRoom) SetReflectionGain(factor float32) {
	C.QAudioRoom_SetReflectionGain(this.h, (C.float)(factor))
}

func (this *QAudioRoom) ReflectionGain() float32 {
	return (float32)(C.QAudioRoom_ReflectionGain(this.h))
}

func (this *QAudioRoom) SetReverbGain(factor float32) {
	C.QAudioRoom_SetReverbGain(this.h, (C.float)(factor))
}

func (this *QAudioRoom) ReverbGain() float32 {
	return (float32)(C.QAudioRoom_ReverbGain(this.h))
}

func (this *QAudioRoom) SetReverbTime(factor float32) {
	C.QAudioRoom_SetReverbTime(this.h, (C.float)(factor))
}

func (this *QAudioRoom) ReverbTime() float32 {
	return (float32)(C.QAudioRoom_ReverbTime(this.h))
}

func (this *QAudioRoom) SetReverbBrightness(factor float32) {
	C.QAudioRoom_SetReverbBrightness(this.h, (C.float)(factor))
}

func (this *QAudioRoom) ReverbBrightness() float32 {
	return (float32)(C.QAudioRoom_ReverbBrightness(this.h))
}

func (this *QAudioRoom) PositionChanged() {
	C.QAudioRoom_PositionChanged(this.h)
}
func (this *QAudioRoom) OnPositionChanged(slot func()) {
	C.QAudioRoom_connect_PositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_PositionChanged
func miqt_exec_callback_QAudioRoom_PositionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) DimensionsChanged() {
	C.QAudioRoom_DimensionsChanged(this.h)
}
func (this *QAudioRoom) OnDimensionsChanged(slot func()) {
	C.QAudioRoom_connect_DimensionsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_DimensionsChanged
func miqt_exec_callback_QAudioRoom_DimensionsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) RotationChanged() {
	C.QAudioRoom_RotationChanged(this.h)
}
func (this *QAudioRoom) OnRotationChanged(slot func()) {
	C.QAudioRoom_connect_RotationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_RotationChanged
func miqt_exec_callback_QAudioRoom_RotationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) WallsChanged() {
	C.QAudioRoom_WallsChanged(this.h)
}
func (this *QAudioRoom) OnWallsChanged(slot func()) {
	C.QAudioRoom_connect_WallsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_WallsChanged
func miqt_exec_callback_QAudioRoom_WallsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) ReflectionGainChanged() {
	C.QAudioRoom_ReflectionGainChanged(this.h)
}
func (this *QAudioRoom) OnReflectionGainChanged(slot func()) {
	C.QAudioRoom_connect_ReflectionGainChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_ReflectionGainChanged
func miqt_exec_callback_QAudioRoom_ReflectionGainChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) ReverbGainChanged() {
	C.QAudioRoom_ReverbGainChanged(this.h)
}
func (this *QAudioRoom) OnReverbGainChanged(slot func()) {
	C.QAudioRoom_connect_ReverbGainChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_ReverbGainChanged
func miqt_exec_callback_QAudioRoom_ReverbGainChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) ReverbTimeChanged() {
	C.QAudioRoom_ReverbTimeChanged(this.h)
}
func (this *QAudioRoom) OnReverbTimeChanged(slot func()) {
	C.QAudioRoom_connect_ReverbTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_ReverbTimeChanged
func miqt_exec_callback_QAudioRoom_ReverbTimeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioRoom) ReverbBrightnessChanged() {
	C.QAudioRoom_ReverbBrightnessChanged(this.h)
}
func (this *QAudioRoom) OnReverbBrightnessChanged(slot func()) {
	C.QAudioRoom_connect_ReverbBrightnessChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoom_ReverbBrightnessChanged
func miqt_exec_callback_QAudioRoom_ReverbBrightnessChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QAudioRoom_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRoom_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoom_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioRoom) Delete() {
	C.QAudioRoom_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioRoom) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioRoom) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
