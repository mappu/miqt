package multimedia

/*

#include "gen_qaudiodevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAudioDevice__Mode int

const (
	QAudioDevice__Null   QAudioDevice__Mode = 0
	QAudioDevice__Input  QAudioDevice__Mode = 1
	QAudioDevice__Output QAudioDevice__Mode = 2
)

type QAudioDevice struct {
	h *C.QAudioDevice
}

func (this *QAudioDevice) cPointer() *C.QAudioDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioDevice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAudioDevice(h *C.QAudioDevice) *QAudioDevice {
	if h == nil {
		return nil
	}
	return &QAudioDevice{h: h}
}

func UnsafeNewQAudioDevice(h unsafe.Pointer) *QAudioDevice {
	return newQAudioDevice((*C.QAudioDevice)(h))
}

// NewQAudioDevice constructs a new QAudioDevice object.
func NewQAudioDevice() *QAudioDevice {
	ret := C.QAudioDevice_new()
	return newQAudioDevice(ret)
}

// NewQAudioDevice2 constructs a new QAudioDevice object.
func NewQAudioDevice2(other *QAudioDevice) *QAudioDevice {
	ret := C.QAudioDevice_new2(other.cPointer())
	return newQAudioDevice(ret)
}

func (this *QAudioDevice) Swap(other *QAudioDevice) {
	C.QAudioDevice_Swap(this.h, other.cPointer())
}

func (this *QAudioDevice) OperatorAssign(other *QAudioDevice) {
	C.QAudioDevice_OperatorAssign(this.h, other.cPointer())
}

func (this *QAudioDevice) OperatorEqual(other *QAudioDevice) bool {
	return (bool)(C.QAudioDevice_OperatorEqual(this.h, other.cPointer()))
}

func (this *QAudioDevice) OperatorNotEqual(other *QAudioDevice) bool {
	return (bool)(C.QAudioDevice_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QAudioDevice) IsNull() bool {
	return (bool)(C.QAudioDevice_IsNull(this.h))
}

func (this *QAudioDevice) Id() []byte {
	var _bytearray C.struct_miqt_string = C.QAudioDevice_Id(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QAudioDevice) Description() string {
	var _ms C.struct_miqt_string = C.QAudioDevice_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDevice) IsDefault() bool {
	return (bool)(C.QAudioDevice_IsDefault(this.h))
}

func (this *QAudioDevice) Mode() QAudioDevice__Mode {
	return (QAudioDevice__Mode)(C.QAudioDevice_Mode(this.h))
}

func (this *QAudioDevice) IsFormatSupported(format *QAudioFormat) bool {
	return (bool)(C.QAudioDevice_IsFormatSupported(this.h, format.cPointer()))
}

func (this *QAudioDevice) PreferredFormat() *QAudioFormat {
	_ret := C.QAudioDevice_PreferredFormat(this.h)
	_goptr := newQAudioFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDevice) MinimumSampleRate() int {
	return (int)(C.QAudioDevice_MinimumSampleRate(this.h))
}

func (this *QAudioDevice) MaximumSampleRate() int {
	return (int)(C.QAudioDevice_MaximumSampleRate(this.h))
}

func (this *QAudioDevice) MinimumChannelCount() int {
	return (int)(C.QAudioDevice_MinimumChannelCount(this.h))
}

func (this *QAudioDevice) MaximumChannelCount() int {
	return (int)(C.QAudioDevice_MaximumChannelCount(this.h))
}

func (this *QAudioDevice) SupportedSampleFormats() []QAudioFormat__SampleFormat {
	var _ma C.struct_miqt_array = C.QAudioDevice_SupportedSampleFormats(this.h)
	_ret := make([]QAudioFormat__SampleFormat, int(_ma.len))
	_outCast := (*[0xffff]C.uint16_t)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QAudioFormat__SampleFormat)(_outCast[i])
	}
	return _ret
}

func (this *QAudioDevice) ChannelConfiguration() QAudioFormat__ChannelConfig {
	return (QAudioFormat__ChannelConfig)(C.QAudioDevice_ChannelConfiguration(this.h))
}

// Delete this object from C++ memory.
func (this *QAudioDevice) Delete() {
	C.QAudioDevice_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}