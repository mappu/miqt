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
	h *C.QAudioInput
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

func newQAudioInput(h *C.QAudioInput) *QAudioInput {
	if h == nil {
		return nil
	}
	return &QAudioInput{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAudioInput(h unsafe.Pointer) *QAudioInput {
	return newQAudioInput((*C.QAudioInput)(h))
}

// NewQAudioInput constructs a new QAudioInput object.
func NewQAudioInput() *QAudioInput {
	ret := C.QAudioInput_new()
	return newQAudioInput(ret)
}

// NewQAudioInput2 constructs a new QAudioInput object.
func NewQAudioInput2(deviceInfo *QAudioDevice) *QAudioInput {
	ret := C.QAudioInput_new2(deviceInfo.cPointer())
	return newQAudioInput(ret)
}

// NewQAudioInput3 constructs a new QAudioInput object.
func NewQAudioInput3(parent *qt6.QObject) *QAudioInput {
	ret := C.QAudioInput_new3((*C.QObject)(parent.UnsafePointer()))
	return newQAudioInput(ret)
}

// NewQAudioInput4 constructs a new QAudioInput object.
func NewQAudioInput4(deviceInfo *QAudioDevice, parent *qt6.QObject) *QAudioInput {
	ret := C.QAudioInput_new4(deviceInfo.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQAudioInput(ret)
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

// Delete this object from C++ memory.
func (this *QAudioInput) Delete() {
	C.QAudioInput_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioInput) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioInput) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
