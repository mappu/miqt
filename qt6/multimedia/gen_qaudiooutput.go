package multimedia

/*

#include "gen_qaudiooutput.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioOutput struct {
	h          *C.QAudioOutput
	isSubclass bool
	*qt6.QObject
}

func (this *QAudioOutput) cPointer() *C.QAudioOutput {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioOutput) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioOutput constructs the type using only CGO pointers.
func newQAudioOutput(h *C.QAudioOutput, h_QObject *C.QObject) *QAudioOutput {
	if h == nil {
		return nil
	}
	return &QAudioOutput{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQAudioOutput constructs the type using only unsafe pointers.
func UnsafeNewQAudioOutput(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAudioOutput {
	if h == nil {
		return nil
	}

	return &QAudioOutput{h: (*C.QAudioOutput)(h),
		QObject: qt6.UnsafeNewQObject(h_QObject)}
}

// NewQAudioOutput constructs a new QAudioOutput object.
func NewQAudioOutput() *QAudioOutput {
	var outptr_QAudioOutput *C.QAudioOutput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioOutput_new(&outptr_QAudioOutput, &outptr_QObject)
	ret := newQAudioOutput(outptr_QAudioOutput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioOutput2 constructs a new QAudioOutput object.
func NewQAudioOutput2(device *QAudioDevice) *QAudioOutput {
	var outptr_QAudioOutput *C.QAudioOutput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioOutput_new2(device.cPointer(), &outptr_QAudioOutput, &outptr_QObject)
	ret := newQAudioOutput(outptr_QAudioOutput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioOutput3 constructs a new QAudioOutput object.
func NewQAudioOutput3(parent *qt6.QObject) *QAudioOutput {
	var outptr_QAudioOutput *C.QAudioOutput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioOutput_new3((*C.QObject)(parent.UnsafePointer()), &outptr_QAudioOutput, &outptr_QObject)
	ret := newQAudioOutput(outptr_QAudioOutput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioOutput4 constructs a new QAudioOutput object.
func NewQAudioOutput4(device *QAudioDevice, parent *qt6.QObject) *QAudioOutput {
	var outptr_QAudioOutput *C.QAudioOutput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioOutput_new4(device.cPointer(), (*C.QObject)(parent.UnsafePointer()), &outptr_QAudioOutput, &outptr_QObject)
	ret := newQAudioOutput(outptr_QAudioOutput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAudioOutput) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioOutput_MetaObject(this.h)))
}

func (this *QAudioOutput) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioOutput_Metacast(this.h, param1_Cstring))
}

func QAudioOutput_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutput_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioOutput) Device() *QAudioDevice {
	_goptr := newQAudioDevice(C.QAudioOutput_Device(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioOutput) Volume() float32 {
	return (float32)(C.QAudioOutput_Volume(this.h))
}

func (this *QAudioOutput) IsMuted() bool {
	return (bool)(C.QAudioOutput_IsMuted(this.h))
}

func (this *QAudioOutput) SetDevice(device *QAudioDevice) {
	C.QAudioOutput_SetDevice(this.h, device.cPointer())
}

func (this *QAudioOutput) SetVolume(volume float32) {
	C.QAudioOutput_SetVolume(this.h, (C.float)(volume))
}

func (this *QAudioOutput) SetMuted(muted bool) {
	C.QAudioOutput_SetMuted(this.h, (C.bool)(muted))
}

func (this *QAudioOutput) DeviceChanged() {
	C.QAudioOutput_DeviceChanged(this.h)
}
func (this *QAudioOutput) OnDeviceChanged(slot func()) {
	C.QAudioOutput_connect_DeviceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_DeviceChanged
func miqt_exec_callback_QAudioOutput_DeviceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioOutput) VolumeChanged(volume float32) {
	C.QAudioOutput_VolumeChanged(this.h, (C.float)(volume))
}
func (this *QAudioOutput) OnVolumeChanged(slot func(volume float32)) {
	C.QAudioOutput_connect_VolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_VolumeChanged
func miqt_exec_callback_QAudioOutput_VolumeChanged(cb C.intptr_t, volume C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(volume)

	gofunc(slotval1)
}

func (this *QAudioOutput) MutedChanged(muted bool) {
	C.QAudioOutput_MutedChanged(this.h, (C.bool)(muted))
}
func (this *QAudioOutput) OnMutedChanged(slot func(muted bool)) {
	C.QAudioOutput_connect_MutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_MutedChanged
func miqt_exec_callback_QAudioOutput_MutedChanged(cb C.intptr_t, muted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(muted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(muted)

	gofunc(slotval1)
}

func QAudioOutput_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutput_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioOutput_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutput_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioOutput) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioOutput_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioOutput) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioOutput_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_Event
func miqt_exec_callback_QAudioOutput_Event(self *C.QAudioOutput, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioOutput{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioOutput) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAudioOutput_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioOutput) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioOutput_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_EventFilter
func miqt_exec_callback_QAudioOutput_EventFilter(self *C.QAudioOutput, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioOutput{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioOutput) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAudioOutput_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioOutput) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioOutput_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_TimerEvent
func miqt_exec_callback_QAudioOutput_TimerEvent(self *C.QAudioOutput, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioOutput{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioOutput) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioOutput_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioOutput) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioOutput_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_ChildEvent
func miqt_exec_callback_QAudioOutput_ChildEvent(self *C.QAudioOutput, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioOutput{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioOutput) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioOutput_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioOutput) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioOutput_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_CustomEvent
func miqt_exec_callback_QAudioOutput_CustomEvent(self *C.QAudioOutput, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioOutput{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioOutput) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioOutput_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioOutput) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioOutput_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_ConnectNotify
func miqt_exec_callback_QAudioOutput_ConnectNotify(self *C.QAudioOutput, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioOutput{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioOutput) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioOutput_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioOutput) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioOutput_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_DisconnectNotify
func miqt_exec_callback_QAudioOutput_DisconnectNotify(self *C.QAudioOutput, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioOutput{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioOutput) Delete() {
	C.QAudioOutput_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioOutput) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioOutput) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
