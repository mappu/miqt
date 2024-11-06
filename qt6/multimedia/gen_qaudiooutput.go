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
	h *C.QAudioOutput
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

func newQAudioOutput(h *C.QAudioOutput) *QAudioOutput {
	if h == nil {
		return nil
	}
	return &QAudioOutput{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAudioOutput(h unsafe.Pointer) *QAudioOutput {
	return newQAudioOutput((*C.QAudioOutput)(h))
}

// NewQAudioOutput constructs a new QAudioOutput object.
func NewQAudioOutput() *QAudioOutput {
	ret := C.QAudioOutput_new()
	return newQAudioOutput(ret)
}

// NewQAudioOutput2 constructs a new QAudioOutput object.
func NewQAudioOutput2(device *QAudioDevice) *QAudioOutput {
	ret := C.QAudioOutput_new2(device.cPointer())
	return newQAudioOutput(ret)
}

// NewQAudioOutput3 constructs a new QAudioOutput object.
func NewQAudioOutput3(parent *qt6.QObject) *QAudioOutput {
	ret := C.QAudioOutput_new3((*C.QObject)(parent.UnsafePointer()))
	return newQAudioOutput(ret)
}

// NewQAudioOutput4 constructs a new QAudioOutput object.
func NewQAudioOutput4(device *QAudioDevice, parent *qt6.QObject) *QAudioOutput {
	ret := C.QAudioOutput_new4(device.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQAudioOutput(ret)
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
	_ret := C.QAudioOutput_Device(this.h)
	_goptr := newQAudioDevice(_ret)
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

// Delete this object from C++ memory.
func (this *QAudioOutput) Delete() {
	C.QAudioOutput_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioOutput) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioOutput) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
