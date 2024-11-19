package multimedia

/*

#include "gen_qaudioinput.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioInput struct {
	h          *C.QAudioInput
	isSubclass bool
	*qt6.QObject
}

func (this *QAudioInput) cPointer() *C.QAudioInput {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioInput) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioInput constructs the type using only CGO pointers.
func newQAudioInput(h *C.QAudioInput, h_QObject *C.QObject) *QAudioInput {
	if h == nil {
		return nil
	}
	return &QAudioInput{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQAudioInput constructs the type using only unsafe pointers.
func UnsafeNewQAudioInput(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAudioInput {
	if h == nil {
		return nil
	}

	return &QAudioInput{h: (*C.QAudioInput)(h),
		QObject: qt6.UnsafeNewQObject(h_QObject)}
}

// NewQAudioInput constructs a new QAudioInput object.
func NewQAudioInput() *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new(&outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioInput2 constructs a new QAudioInput object.
func NewQAudioInput2(deviceInfo *QAudioDevice) *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new2(deviceInfo.cPointer(), &outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioInput3 constructs a new QAudioInput object.
func NewQAudioInput3(parent *qt6.QObject) *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new3((*C.QObject)(parent.UnsafePointer()), &outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioInput4 constructs a new QAudioInput object.
func NewQAudioInput4(deviceInfo *QAudioDevice, parent *qt6.QObject) *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new4(deviceInfo.cPointer(), (*C.QObject)(parent.UnsafePointer()), &outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAudioInput) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioInput_MetaObject(this.h)))
}

func (this *QAudioInput) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioInput_Metacast(this.h, param1_Cstring))
}

func QAudioInput_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioInput_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioInput) Device() *QAudioDevice {
	_ret := C.QAudioInput_Device(this.h)
	_goptr := newQAudioDevice(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioInput) Volume() float32 {
	return (float32)(C.QAudioInput_Volume(this.h))
}

func (this *QAudioInput) IsMuted() bool {
	return (bool)(C.QAudioInput_IsMuted(this.h))
}

func (this *QAudioInput) SetDevice(device *QAudioDevice) {
	C.QAudioInput_SetDevice(this.h, device.cPointer())
}

func (this *QAudioInput) SetVolume(volume float32) {
	C.QAudioInput_SetVolume(this.h, (C.float)(volume))
}

func (this *QAudioInput) SetMuted(muted bool) {
	C.QAudioInput_SetMuted(this.h, (C.bool)(muted))
}

func (this *QAudioInput) DeviceChanged() {
	C.QAudioInput_DeviceChanged(this.h)
}
func (this *QAudioInput) OnDeviceChanged(slot func()) {
	C.QAudioInput_connect_DeviceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_DeviceChanged
func miqt_exec_callback_QAudioInput_DeviceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioInput) VolumeChanged(volume float32) {
	C.QAudioInput_VolumeChanged(this.h, (C.float)(volume))
}
func (this *QAudioInput) OnVolumeChanged(slot func(volume float32)) {
	C.QAudioInput_connect_VolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_VolumeChanged
func miqt_exec_callback_QAudioInput_VolumeChanged(cb C.intptr_t, volume C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(volume)

	gofunc(slotval1)
}

func (this *QAudioInput) MutedChanged(muted bool) {
	C.QAudioInput_MutedChanged(this.h, (C.bool)(muted))
}
func (this *QAudioInput) OnMutedChanged(slot func(muted bool)) {
	C.QAudioInput_connect_MutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_MutedChanged
func miqt_exec_callback_QAudioInput_MutedChanged(cb C.intptr_t, muted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(muted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(muted)

	gofunc(slotval1)
}

func QAudioInput_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioInput_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioInput_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioInput_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioInput) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioInput_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioInput) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	C.QAudioInput_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_Event
func miqt_exec_callback_QAudioInput_Event(self *C.QAudioInput, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioInput{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioInput) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAudioInput_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioInput) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	C.QAudioInput_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_EventFilter
func miqt_exec_callback_QAudioInput_EventFilter(self *C.QAudioInput, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioInput{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioInput) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAudioInput_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioInput) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	C.QAudioInput_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_TimerEvent
func miqt_exec_callback_QAudioInput_TimerEvent(self *C.QAudioInput, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioInput{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioInput) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioInput_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioInput) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	C.QAudioInput_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_ChildEvent
func miqt_exec_callback_QAudioInput_ChildEvent(self *C.QAudioInput, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioInput{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioInput) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioInput_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioInput) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	C.QAudioInput_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_CustomEvent
func miqt_exec_callback_QAudioInput_CustomEvent(self *C.QAudioInput, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioInput{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioInput) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioInput_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioInput) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	C.QAudioInput_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_ConnectNotify
func miqt_exec_callback_QAudioInput_ConnectNotify(self *C.QAudioInput, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioInput{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioInput) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioInput_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioInput) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	C.QAudioInput_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_DisconnectNotify
func miqt_exec_callback_QAudioInput_DisconnectNotify(self *C.QAudioInput, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioInput{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioInput) Delete() {
	C.QAudioInput_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioInput) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioInput) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
