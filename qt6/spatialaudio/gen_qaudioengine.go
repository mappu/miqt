package spatialaudio

/*

#include "gen_qaudioengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/multimedia"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioEngine__OutputMode int

const (
	QAudioEngine__Surround  QAudioEngine__OutputMode = 0
	QAudioEngine__Stereo    QAudioEngine__OutputMode = 1
	QAudioEngine__Headphone QAudioEngine__OutputMode = 2
)

type QAudioEngine struct {
	h          *C.QAudioEngine
	isSubclass bool
	*qt6.QObject
}

func (this *QAudioEngine) cPointer() *C.QAudioEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioEngine constructs the type using only CGO pointers.
func newQAudioEngine(h *C.QAudioEngine) *QAudioEngine {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAudioEngine_virtbase(h, &outptr_QObject)

	return &QAudioEngine{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAudioEngine constructs the type using only unsafe pointers.
func UnsafeNewQAudioEngine(h unsafe.Pointer) *QAudioEngine {
	return newQAudioEngine((*C.QAudioEngine)(h))
}

// NewQAudioEngine constructs a new QAudioEngine object.
func NewQAudioEngine() *QAudioEngine {

	ret := newQAudioEngine(C.QAudioEngine_new())
	ret.isSubclass = true
	return ret
}

// NewQAudioEngine2 constructs a new QAudioEngine object.
func NewQAudioEngine2(parent *qt6.QObject) *QAudioEngine {

	ret := newQAudioEngine(C.QAudioEngine_new2((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewQAudioEngine3 constructs a new QAudioEngine object.
func NewQAudioEngine3(sampleRate int) *QAudioEngine {

	ret := newQAudioEngine(C.QAudioEngine_new3((C.int)(sampleRate)))
	ret.isSubclass = true
	return ret
}

// NewQAudioEngine4 constructs a new QAudioEngine object.
func NewQAudioEngine4(sampleRate int, parent *qt6.QObject) *QAudioEngine {

	ret := newQAudioEngine(C.QAudioEngine_new4((C.int)(sampleRate), (*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

func (this *QAudioEngine) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioEngine_MetaObject(this.h)))
}

func (this *QAudioEngine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioEngine_Metacast(this.h, param1_Cstring))
}

func QAudioEngine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioEngine_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioEngine) SetOutputMode(mode QAudioEngine__OutputMode) {
	C.QAudioEngine_SetOutputMode(this.h, (C.int)(mode))
}

func (this *QAudioEngine) OutputMode() QAudioEngine__OutputMode {
	return (QAudioEngine__OutputMode)(C.QAudioEngine_OutputMode(this.h))
}

func (this *QAudioEngine) SampleRate() int {
	return (int)(C.QAudioEngine_SampleRate(this.h))
}

func (this *QAudioEngine) SetOutputDevice(device *multimedia.QAudioDevice) {
	C.QAudioEngine_SetOutputDevice(this.h, (*C.QAudioDevice)(device.UnsafePointer()))
}

func (this *QAudioEngine) OutputDevice() *multimedia.QAudioDevice {
	_goptr := multimedia.UnsafeNewQAudioDevice(unsafe.Pointer(C.QAudioEngine_OutputDevice(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioEngine) SetMasterVolume(volume float32) {
	C.QAudioEngine_SetMasterVolume(this.h, (C.float)(volume))
}

func (this *QAudioEngine) MasterVolume() float32 {
	return (float32)(C.QAudioEngine_MasterVolume(this.h))
}

func (this *QAudioEngine) SetPaused(paused bool) {
	C.QAudioEngine_SetPaused(this.h, (C.bool)(paused))
}

func (this *QAudioEngine) Paused() bool {
	return (bool)(C.QAudioEngine_Paused(this.h))
}

func (this *QAudioEngine) SetRoomEffectsEnabled(enabled bool) {
	C.QAudioEngine_SetRoomEffectsEnabled(this.h, (C.bool)(enabled))
}

func (this *QAudioEngine) RoomEffectsEnabled() bool {
	return (bool)(C.QAudioEngine_RoomEffectsEnabled(this.h))
}

func (this *QAudioEngine) SetDistanceScale(scale float32) {
	C.QAudioEngine_SetDistanceScale(this.h, (C.float)(scale))
}

func (this *QAudioEngine) DistanceScale() float32 {
	return (float32)(C.QAudioEngine_DistanceScale(this.h))
}

func (this *QAudioEngine) OutputModeChanged() {
	C.QAudioEngine_OutputModeChanged(this.h)
}
func (this *QAudioEngine) OnOutputModeChanged(slot func()) {
	C.QAudioEngine_connect_OutputModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_OutputModeChanged
func miqt_exec_callback_QAudioEngine_OutputModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioEngine) OutputDeviceChanged() {
	C.QAudioEngine_OutputDeviceChanged(this.h)
}
func (this *QAudioEngine) OnOutputDeviceChanged(slot func()) {
	C.QAudioEngine_connect_OutputDeviceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_OutputDeviceChanged
func miqt_exec_callback_QAudioEngine_OutputDeviceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioEngine) MasterVolumeChanged() {
	C.QAudioEngine_MasterVolumeChanged(this.h)
}
func (this *QAudioEngine) OnMasterVolumeChanged(slot func()) {
	C.QAudioEngine_connect_MasterVolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_MasterVolumeChanged
func miqt_exec_callback_QAudioEngine_MasterVolumeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioEngine) PausedChanged() {
	C.QAudioEngine_PausedChanged(this.h)
}
func (this *QAudioEngine) OnPausedChanged(slot func()) {
	C.QAudioEngine_connect_PausedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_PausedChanged
func miqt_exec_callback_QAudioEngine_PausedChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioEngine) DistanceScaleChanged() {
	C.QAudioEngine_DistanceScaleChanged(this.h)
}
func (this *QAudioEngine) OnDistanceScaleChanged(slot func()) {
	C.QAudioEngine_connect_DistanceScaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_DistanceScaleChanged
func miqt_exec_callback_QAudioEngine_DistanceScaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioEngine) Start() {
	C.QAudioEngine_Start(this.h)
}

func (this *QAudioEngine) Stop() {
	C.QAudioEngine_Stop(this.h)
}

func (this *QAudioEngine) Pause() {
	C.QAudioEngine_Pause(this.h)
}

func (this *QAudioEngine) Resume() {
	C.QAudioEngine_Resume(this.h)
}

func QAudioEngine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioEngine_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioEngine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioEngine_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioEngine) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioEngine_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioEngine) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioEngine_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_Event
func miqt_exec_callback_QAudioEngine_Event(self *C.QAudioEngine, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioEngine{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioEngine) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAudioEngine_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioEngine) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioEngine_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_EventFilter
func miqt_exec_callback_QAudioEngine_EventFilter(self *C.QAudioEngine, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioEngine{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioEngine) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAudioEngine_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioEngine) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioEngine_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_TimerEvent
func miqt_exec_callback_QAudioEngine_TimerEvent(self *C.QAudioEngine, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioEngine{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioEngine) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioEngine_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioEngine) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioEngine_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_ChildEvent
func miqt_exec_callback_QAudioEngine_ChildEvent(self *C.QAudioEngine, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioEngine{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioEngine) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioEngine_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioEngine) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioEngine_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_CustomEvent
func miqt_exec_callback_QAudioEngine_CustomEvent(self *C.QAudioEngine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioEngine{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioEngine) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioEngine_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioEngine) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioEngine_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_ConnectNotify
func miqt_exec_callback_QAudioEngine_ConnectNotify(self *C.QAudioEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioEngine{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioEngine) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioEngine_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioEngine) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioEngine_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioEngine_DisconnectNotify
func miqt_exec_callback_QAudioEngine_DisconnectNotify(self *C.QAudioEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioEngine{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioEngine) Delete() {
	C.QAudioEngine_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
