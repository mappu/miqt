package spatialaudio

/*

#include "gen_qspatialsound.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSpatialSound__Loops int

const (
	QSpatialSound__Infinite QSpatialSound__Loops = -1
	QSpatialSound__Once     QSpatialSound__Loops = 1
)

type QSpatialSound__DistanceModel int

const (
	QSpatialSound__Logarithmic       QSpatialSound__DistanceModel = 0
	QSpatialSound__Linear            QSpatialSound__DistanceModel = 1
	QSpatialSound__ManualAttenuation QSpatialSound__DistanceModel = 2
)

type QSpatialSound struct {
	h          *C.QSpatialSound
	isSubclass bool
	*qt6.QObject
}

func (this *QSpatialSound) cPointer() *C.QSpatialSound {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSpatialSound) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSpatialSound constructs the type using only CGO pointers.
func newQSpatialSound(h *C.QSpatialSound, h_QObject *C.QObject) *QSpatialSound {
	if h == nil {
		return nil
	}
	return &QSpatialSound{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQSpatialSound constructs the type using only unsafe pointers.
func UnsafeNewQSpatialSound(h unsafe.Pointer, h_QObject unsafe.Pointer) *QSpatialSound {
	if h == nil {
		return nil
	}

	return &QSpatialSound{h: (*C.QSpatialSound)(h),
		QObject: qt6.UnsafeNewQObject(h_QObject)}
}

// NewQSpatialSound constructs a new QSpatialSound object.
func NewQSpatialSound(engine *QAudioEngine) *QSpatialSound {
	var outptr_QSpatialSound *C.QSpatialSound = nil
	var outptr_QObject *C.QObject = nil

	C.QSpatialSound_new(engine.cPointer(), &outptr_QSpatialSound, &outptr_QObject)
	ret := newQSpatialSound(outptr_QSpatialSound, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QSpatialSound) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSpatialSound_MetaObject(this.h)))
}

func (this *QSpatialSound) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSpatialSound_Metacast(this.h, param1_Cstring))
}

func QSpatialSound_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSpatialSound_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpatialSound) SetSource(url *qt6.QUrl) {
	C.QSpatialSound_SetSource(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QSpatialSound) Source() *qt6.QUrl {
	_ret := C.QSpatialSound_Source(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpatialSound) Loops() int {
	return (int)(C.QSpatialSound_Loops(this.h))
}

func (this *QSpatialSound) SetLoops(loops int) {
	C.QSpatialSound_SetLoops(this.h, (C.int)(loops))
}

func (this *QSpatialSound) AutoPlay() bool {
	return (bool)(C.QSpatialSound_AutoPlay(this.h))
}

func (this *QSpatialSound) SetAutoPlay(autoPlay bool) {
	C.QSpatialSound_SetAutoPlay(this.h, (C.bool)(autoPlay))
}

func (this *QSpatialSound) SetPosition(pos qt6.QVector3D) {
	C.QSpatialSound_SetPosition(this.h, (*C.QVector3D)(pos.UnsafePointer()))
}

func (this *QSpatialSound) Position() *qt6.QVector3D {
	_ret := C.QSpatialSound_Position(this.h)
	_goptr := qt6.UnsafeNewQVector3D(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpatialSound) SetRotation(q *qt6.QQuaternion) {
	C.QSpatialSound_SetRotation(this.h, (*C.QQuaternion)(q.UnsafePointer()))
}

func (this *QSpatialSound) Rotation() *qt6.QQuaternion {
	_ret := C.QSpatialSound_Rotation(this.h)
	_goptr := qt6.UnsafeNewQQuaternion(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpatialSound) SetVolume(volume float32) {
	C.QSpatialSound_SetVolume(this.h, (C.float)(volume))
}

func (this *QSpatialSound) Volume() float32 {
	return (float32)(C.QSpatialSound_Volume(this.h))
}

func (this *QSpatialSound) SetDistanceModel(model QSpatialSound__DistanceModel) {
	C.QSpatialSound_SetDistanceModel(this.h, (C.int)(model))
}

func (this *QSpatialSound) DistanceModel() QSpatialSound__DistanceModel {
	return (QSpatialSound__DistanceModel)(C.QSpatialSound_DistanceModel(this.h))
}

func (this *QSpatialSound) SetSize(size float32) {
	C.QSpatialSound_SetSize(this.h, (C.float)(size))
}

func (this *QSpatialSound) Size() float32 {
	return (float32)(C.QSpatialSound_Size(this.h))
}

func (this *QSpatialSound) SetDistanceCutoff(cutoff float32) {
	C.QSpatialSound_SetDistanceCutoff(this.h, (C.float)(cutoff))
}

func (this *QSpatialSound) DistanceCutoff() float32 {
	return (float32)(C.QSpatialSound_DistanceCutoff(this.h))
}

func (this *QSpatialSound) SetManualAttenuation(attenuation float32) {
	C.QSpatialSound_SetManualAttenuation(this.h, (C.float)(attenuation))
}

func (this *QSpatialSound) ManualAttenuation() float32 {
	return (float32)(C.QSpatialSound_ManualAttenuation(this.h))
}

func (this *QSpatialSound) SetOcclusionIntensity(occlusion float32) {
	C.QSpatialSound_SetOcclusionIntensity(this.h, (C.float)(occlusion))
}

func (this *QSpatialSound) OcclusionIntensity() float32 {
	return (float32)(C.QSpatialSound_OcclusionIntensity(this.h))
}

func (this *QSpatialSound) SetDirectivity(alpha float32) {
	C.QSpatialSound_SetDirectivity(this.h, (C.float)(alpha))
}

func (this *QSpatialSound) Directivity() float32 {
	return (float32)(C.QSpatialSound_Directivity(this.h))
}

func (this *QSpatialSound) SetDirectivityOrder(alpha float32) {
	C.QSpatialSound_SetDirectivityOrder(this.h, (C.float)(alpha))
}

func (this *QSpatialSound) DirectivityOrder() float32 {
	return (float32)(C.QSpatialSound_DirectivityOrder(this.h))
}

func (this *QSpatialSound) SetNearFieldGain(gain float32) {
	C.QSpatialSound_SetNearFieldGain(this.h, (C.float)(gain))
}

func (this *QSpatialSound) NearFieldGain() float32 {
	return (float32)(C.QSpatialSound_NearFieldGain(this.h))
}

func (this *QSpatialSound) Engine() *QAudioEngine {
	return UnsafeNewQAudioEngine(unsafe.Pointer(C.QSpatialSound_Engine(this.h)), nil)
}

func (this *QSpatialSound) SourceChanged() {
	C.QSpatialSound_SourceChanged(this.h)
}
func (this *QSpatialSound) OnSourceChanged(slot func()) {
	C.QSpatialSound_connect_SourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_SourceChanged
func miqt_exec_callback_QSpatialSound_SourceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) LoopsChanged() {
	C.QSpatialSound_LoopsChanged(this.h)
}
func (this *QSpatialSound) OnLoopsChanged(slot func()) {
	C.QSpatialSound_connect_LoopsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_LoopsChanged
func miqt_exec_callback_QSpatialSound_LoopsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) AutoPlayChanged() {
	C.QSpatialSound_AutoPlayChanged(this.h)
}
func (this *QSpatialSound) OnAutoPlayChanged(slot func()) {
	C.QSpatialSound_connect_AutoPlayChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_AutoPlayChanged
func miqt_exec_callback_QSpatialSound_AutoPlayChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) PositionChanged() {
	C.QSpatialSound_PositionChanged(this.h)
}
func (this *QSpatialSound) OnPositionChanged(slot func()) {
	C.QSpatialSound_connect_PositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_PositionChanged
func miqt_exec_callback_QSpatialSound_PositionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) RotationChanged() {
	C.QSpatialSound_RotationChanged(this.h)
}
func (this *QSpatialSound) OnRotationChanged(slot func()) {
	C.QSpatialSound_connect_RotationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_RotationChanged
func miqt_exec_callback_QSpatialSound_RotationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) VolumeChanged() {
	C.QSpatialSound_VolumeChanged(this.h)
}
func (this *QSpatialSound) OnVolumeChanged(slot func()) {
	C.QSpatialSound_connect_VolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_VolumeChanged
func miqt_exec_callback_QSpatialSound_VolumeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) DistanceModelChanged() {
	C.QSpatialSound_DistanceModelChanged(this.h)
}
func (this *QSpatialSound) OnDistanceModelChanged(slot func()) {
	C.QSpatialSound_connect_DistanceModelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_DistanceModelChanged
func miqt_exec_callback_QSpatialSound_DistanceModelChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) SizeChanged() {
	C.QSpatialSound_SizeChanged(this.h)
}
func (this *QSpatialSound) OnSizeChanged(slot func()) {
	C.QSpatialSound_connect_SizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_SizeChanged
func miqt_exec_callback_QSpatialSound_SizeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) DistanceCutoffChanged() {
	C.QSpatialSound_DistanceCutoffChanged(this.h)
}
func (this *QSpatialSound) OnDistanceCutoffChanged(slot func()) {
	C.QSpatialSound_connect_DistanceCutoffChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_DistanceCutoffChanged
func miqt_exec_callback_QSpatialSound_DistanceCutoffChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) ManualAttenuationChanged() {
	C.QSpatialSound_ManualAttenuationChanged(this.h)
}
func (this *QSpatialSound) OnManualAttenuationChanged(slot func()) {
	C.QSpatialSound_connect_ManualAttenuationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_ManualAttenuationChanged
func miqt_exec_callback_QSpatialSound_ManualAttenuationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) OcclusionIntensityChanged() {
	C.QSpatialSound_OcclusionIntensityChanged(this.h)
}
func (this *QSpatialSound) OnOcclusionIntensityChanged(slot func()) {
	C.QSpatialSound_connect_OcclusionIntensityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_OcclusionIntensityChanged
func miqt_exec_callback_QSpatialSound_OcclusionIntensityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) DirectivityChanged() {
	C.QSpatialSound_DirectivityChanged(this.h)
}
func (this *QSpatialSound) OnDirectivityChanged(slot func()) {
	C.QSpatialSound_connect_DirectivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_DirectivityChanged
func miqt_exec_callback_QSpatialSound_DirectivityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) DirectivityOrderChanged() {
	C.QSpatialSound_DirectivityOrderChanged(this.h)
}
func (this *QSpatialSound) OnDirectivityOrderChanged(slot func()) {
	C.QSpatialSound_connect_DirectivityOrderChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_DirectivityOrderChanged
func miqt_exec_callback_QSpatialSound_DirectivityOrderChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) NearFieldGainChanged() {
	C.QSpatialSound_NearFieldGainChanged(this.h)
}
func (this *QSpatialSound) OnNearFieldGainChanged(slot func()) {
	C.QSpatialSound_connect_NearFieldGainChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_NearFieldGainChanged
func miqt_exec_callback_QSpatialSound_NearFieldGainChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) Play() {
	C.QSpatialSound_Play(this.h)
}

func (this *QSpatialSound) Pause() {
	C.QSpatialSound_Pause(this.h)
}

func (this *QSpatialSound) Stop() {
	C.QSpatialSound_Stop(this.h)
}

func QSpatialSound_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpatialSound_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpatialSound_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpatialSound_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpatialSound) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QSpatialSound_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSpatialSound) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpatialSound_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_Event
func miqt_exec_callback_QSpatialSound_Event(self *C.QSpatialSound, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSpatialSound{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSpatialSound) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QSpatialSound_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSpatialSound) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpatialSound_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_EventFilter
func miqt_exec_callback_QSpatialSound_EventFilter(self *C.QSpatialSound, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSpatialSound{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSpatialSound) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QSpatialSound_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSpatialSound) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpatialSound_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_TimerEvent
func miqt_exec_callback_QSpatialSound_TimerEvent(self *C.QSpatialSound, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpatialSound{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSpatialSound) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QSpatialSound_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSpatialSound) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpatialSound_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_ChildEvent
func miqt_exec_callback_QSpatialSound_ChildEvent(self *C.QSpatialSound, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QSpatialSound{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSpatialSound) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QSpatialSound_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSpatialSound) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpatialSound_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_CustomEvent
func miqt_exec_callback_QSpatialSound_CustomEvent(self *C.QSpatialSound, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSpatialSound{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSpatialSound) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QSpatialSound_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSpatialSound) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpatialSound_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_ConnectNotify
func miqt_exec_callback_QSpatialSound_ConnectNotify(self *C.QSpatialSound, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSpatialSound{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSpatialSound) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QSpatialSound_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSpatialSound) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSpatialSound_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_DisconnectNotify
func miqt_exec_callback_QSpatialSound_DisconnectNotify(self *C.QSpatialSound, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSpatialSound{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSpatialSound) Delete() {
	C.QSpatialSound_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSpatialSound) GoGC() {
	runtime.SetFinalizer(this, func(this *QSpatialSound) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
