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
	h *C.QSpatialSound
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
func newQSpatialSound(h *C.QSpatialSound) *QSpatialSound {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSpatialSound_virtbase(h, &outptr_QObject)

	return &QSpatialSound{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQSpatialSound constructs the type using only unsafe pointers.
func UnsafeNewQSpatialSound(h unsafe.Pointer) *QSpatialSound {
	return newQSpatialSound((*C.QSpatialSound)(h))
}

// NewQSpatialSound constructs a new QSpatialSound object.
func NewQSpatialSound(engine *QAudioEngine) *QSpatialSound {

	return newQSpatialSound(C.QSpatialSound_new(engine.cPointer()))
}

func (this *QSpatialSound) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSpatialSound_metaObject(this.h)))
}

func (this *QSpatialSound) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSpatialSound_metacast(this.h, param1_Cstring))
}

func QSpatialSound_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSpatialSound_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSpatialSound) SetSource(url *qt6.QUrl) {
	C.QSpatialSound_setSource(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QSpatialSound) Source() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QSpatialSound_source(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpatialSound) Loops() int {
	return (int)(C.QSpatialSound_loops(this.h))
}

func (this *QSpatialSound) SetLoops(loops int) {
	C.QSpatialSound_setLoops(this.h, (C.int)(loops))
}

func (this *QSpatialSound) AutoPlay() bool {
	return (bool)(C.QSpatialSound_autoPlay(this.h))
}

func (this *QSpatialSound) SetAutoPlay(autoPlay bool) {
	C.QSpatialSound_setAutoPlay(this.h, (C.bool)(autoPlay))
}

func (this *QSpatialSound) SetPosition(pos qt6.QVector3D) {
	C.QSpatialSound_setPosition(this.h, (*C.QVector3D)(pos.UnsafePointer()))
}

func (this *QSpatialSound) Position() *qt6.QVector3D {
	_goptr := qt6.UnsafeNewQVector3D(unsafe.Pointer(C.QSpatialSound_position(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpatialSound) SetRotation(q *qt6.QQuaternion) {
	C.QSpatialSound_setRotation(this.h, (*C.QQuaternion)(q.UnsafePointer()))
}

func (this *QSpatialSound) Rotation() *qt6.QQuaternion {
	_goptr := qt6.UnsafeNewQQuaternion(unsafe.Pointer(C.QSpatialSound_rotation(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpatialSound) SetVolume(volume float32) {
	C.QSpatialSound_setVolume(this.h, (C.float)(volume))
}

func (this *QSpatialSound) Volume() float32 {
	return (float32)(C.QSpatialSound_volume(this.h))
}

func (this *QSpatialSound) SetDistanceModel(model QSpatialSound__DistanceModel) {
	C.QSpatialSound_setDistanceModel(this.h, (C.int)(model))
}

func (this *QSpatialSound) DistanceModel() QSpatialSound__DistanceModel {
	return (QSpatialSound__DistanceModel)(C.QSpatialSound_distanceModel(this.h))
}

func (this *QSpatialSound) SetSize(size float32) {
	C.QSpatialSound_setSize(this.h, (C.float)(size))
}

func (this *QSpatialSound) Size() float32 {
	return (float32)(C.QSpatialSound_size(this.h))
}

func (this *QSpatialSound) SetDistanceCutoff(cutoff float32) {
	C.QSpatialSound_setDistanceCutoff(this.h, (C.float)(cutoff))
}

func (this *QSpatialSound) DistanceCutoff() float32 {
	return (float32)(C.QSpatialSound_distanceCutoff(this.h))
}

func (this *QSpatialSound) SetManualAttenuation(attenuation float32) {
	C.QSpatialSound_setManualAttenuation(this.h, (C.float)(attenuation))
}

func (this *QSpatialSound) ManualAttenuation() float32 {
	return (float32)(C.QSpatialSound_manualAttenuation(this.h))
}

func (this *QSpatialSound) SetOcclusionIntensity(occlusion float32) {
	C.QSpatialSound_setOcclusionIntensity(this.h, (C.float)(occlusion))
}

func (this *QSpatialSound) OcclusionIntensity() float32 {
	return (float32)(C.QSpatialSound_occlusionIntensity(this.h))
}

func (this *QSpatialSound) SetDirectivity(alpha float32) {
	C.QSpatialSound_setDirectivity(this.h, (C.float)(alpha))
}

func (this *QSpatialSound) Directivity() float32 {
	return (float32)(C.QSpatialSound_directivity(this.h))
}

func (this *QSpatialSound) SetDirectivityOrder(alpha float32) {
	C.QSpatialSound_setDirectivityOrder(this.h, (C.float)(alpha))
}

func (this *QSpatialSound) DirectivityOrder() float32 {
	return (float32)(C.QSpatialSound_directivityOrder(this.h))
}

func (this *QSpatialSound) SetNearFieldGain(gain float32) {
	C.QSpatialSound_setNearFieldGain(this.h, (C.float)(gain))
}

func (this *QSpatialSound) NearFieldGain() float32 {
	return (float32)(C.QSpatialSound_nearFieldGain(this.h))
}

func (this *QSpatialSound) Engine() *QAudioEngine {
	return newQAudioEngine(C.QSpatialSound_engine(this.h))
}

func (this *QSpatialSound) SourceChanged() {
	C.QSpatialSound_sourceChanged(this.h)
}
func (this *QSpatialSound) OnSourceChanged(slot func()) {
	C.QSpatialSound_connect_sourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_sourceChanged
func miqt_exec_callback_QSpatialSound_sourceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) LoopsChanged() {
	C.QSpatialSound_loopsChanged(this.h)
}
func (this *QSpatialSound) OnLoopsChanged(slot func()) {
	C.QSpatialSound_connect_loopsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_loopsChanged
func miqt_exec_callback_QSpatialSound_loopsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) AutoPlayChanged() {
	C.QSpatialSound_autoPlayChanged(this.h)
}
func (this *QSpatialSound) OnAutoPlayChanged(slot func()) {
	C.QSpatialSound_connect_autoPlayChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_autoPlayChanged
func miqt_exec_callback_QSpatialSound_autoPlayChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) PositionChanged() {
	C.QSpatialSound_positionChanged(this.h)
}
func (this *QSpatialSound) OnPositionChanged(slot func()) {
	C.QSpatialSound_connect_positionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_positionChanged
func miqt_exec_callback_QSpatialSound_positionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) RotationChanged() {
	C.QSpatialSound_rotationChanged(this.h)
}
func (this *QSpatialSound) OnRotationChanged(slot func()) {
	C.QSpatialSound_connect_rotationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_rotationChanged
func miqt_exec_callback_QSpatialSound_rotationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) VolumeChanged() {
	C.QSpatialSound_volumeChanged(this.h)
}
func (this *QSpatialSound) OnVolumeChanged(slot func()) {
	C.QSpatialSound_connect_volumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_volumeChanged
func miqt_exec_callback_QSpatialSound_volumeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) DistanceModelChanged() {
	C.QSpatialSound_distanceModelChanged(this.h)
}
func (this *QSpatialSound) OnDistanceModelChanged(slot func()) {
	C.QSpatialSound_connect_distanceModelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_distanceModelChanged
func miqt_exec_callback_QSpatialSound_distanceModelChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) SizeChanged() {
	C.QSpatialSound_sizeChanged(this.h)
}
func (this *QSpatialSound) OnSizeChanged(slot func()) {
	C.QSpatialSound_connect_sizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_sizeChanged
func miqt_exec_callback_QSpatialSound_sizeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) DistanceCutoffChanged() {
	C.QSpatialSound_distanceCutoffChanged(this.h)
}
func (this *QSpatialSound) OnDistanceCutoffChanged(slot func()) {
	C.QSpatialSound_connect_distanceCutoffChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_distanceCutoffChanged
func miqt_exec_callback_QSpatialSound_distanceCutoffChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) ManualAttenuationChanged() {
	C.QSpatialSound_manualAttenuationChanged(this.h)
}
func (this *QSpatialSound) OnManualAttenuationChanged(slot func()) {
	C.QSpatialSound_connect_manualAttenuationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_manualAttenuationChanged
func miqt_exec_callback_QSpatialSound_manualAttenuationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) OcclusionIntensityChanged() {
	C.QSpatialSound_occlusionIntensityChanged(this.h)
}
func (this *QSpatialSound) OnOcclusionIntensityChanged(slot func()) {
	C.QSpatialSound_connect_occlusionIntensityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_occlusionIntensityChanged
func miqt_exec_callback_QSpatialSound_occlusionIntensityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) DirectivityChanged() {
	C.QSpatialSound_directivityChanged(this.h)
}
func (this *QSpatialSound) OnDirectivityChanged(slot func()) {
	C.QSpatialSound_connect_directivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_directivityChanged
func miqt_exec_callback_QSpatialSound_directivityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) DirectivityOrderChanged() {
	C.QSpatialSound_directivityOrderChanged(this.h)
}
func (this *QSpatialSound) OnDirectivityOrderChanged(slot func()) {
	C.QSpatialSound_connect_directivityOrderChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_directivityOrderChanged
func miqt_exec_callback_QSpatialSound_directivityOrderChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) NearFieldGainChanged() {
	C.QSpatialSound_nearFieldGainChanged(this.h)
}
func (this *QSpatialSound) OnNearFieldGainChanged(slot func()) {
	C.QSpatialSound_connect_nearFieldGainChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSpatialSound_nearFieldGainChanged
func miqt_exec_callback_QSpatialSound_nearFieldGainChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSpatialSound) Play() {
	C.QSpatialSound_play(this.h)
}

func (this *QSpatialSound) Pause() {
	C.QSpatialSound_pause(this.h)
}

func (this *QSpatialSound) Stop() {
	C.QSpatialSound_stop(this.h)
}

func QSpatialSound_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpatialSound_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSpatialSound_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSpatialSound_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QSpatialSound that was directly constructed.
func (this *QSpatialSound) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QSpatialSound_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSpatialSound that was directly constructed.
func (this *QSpatialSound) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSpatialSound_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSpatialSound that was directly constructed.
func (this *QSpatialSound) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSpatialSound_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSpatialSound that was directly constructed.
func (this *QSpatialSound) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSpatialSound_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSpatialSound) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QSpatialSound_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSpatialSound) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QSpatialSound_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpatialSound_event
func miqt_exec_callback_QSpatialSound_event(self *C.QSpatialSound, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QSpatialSound_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSpatialSound) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QSpatialSound_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpatialSound_eventFilter
func miqt_exec_callback_QSpatialSound_eventFilter(self *C.QSpatialSound, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QSpatialSound_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSpatialSound) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QSpatialSound_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpatialSound_timerEvent
func miqt_exec_callback_QSpatialSound_timerEvent(self *C.QSpatialSound, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSpatialSound{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSpatialSound) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QSpatialSound_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSpatialSound) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QSpatialSound_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpatialSound_childEvent
func miqt_exec_callback_QSpatialSound_childEvent(self *C.QSpatialSound, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSpatialSound{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSpatialSound) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QSpatialSound_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSpatialSound) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSpatialSound_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpatialSound_customEvent
func miqt_exec_callback_QSpatialSound_customEvent(self *C.QSpatialSound, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSpatialSound{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSpatialSound) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QSpatialSound_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSpatialSound) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSpatialSound_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpatialSound_connectNotify
func miqt_exec_callback_QSpatialSound_connectNotify(self *C.QSpatialSound, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSpatialSound{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSpatialSound) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QSpatialSound_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSpatialSound) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSpatialSound_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpatialSound_disconnectNotify
func miqt_exec_callback_QSpatialSound_disconnectNotify(self *C.QSpatialSound, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QSpatialSound_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSpatialSound) GoGC() {
	runtime.SetFinalizer(this, func(this *QSpatialSound) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
