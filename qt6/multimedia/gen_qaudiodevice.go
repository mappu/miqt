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
	h  *C.QAudioDevice
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAudioDevice) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQAudioDevice constructs the type using only CGO pointers.
func newQAudioDevice(h *C.QAudioDevice) *QAudioDevice {
	if h == nil {
		return nil
	}

	return &QAudioDevice{h: h}
}

// UnsafeNewQAudioDevice constructs the type using only unsafe pointers.
func UnsafeNewQAudioDevice(h unsafe.Pointer) *QAudioDevice {
	return newQAudioDevice((*C.QAudioDevice)(h))
}

// NewQAudioDevice constructs a new QAudioDevice object.
func NewQAudioDevice() *QAudioDevice {

	return newQAudioDevice(C.QAudioDevice_new())
}

// NewQAudioDevice2 constructs a new QAudioDevice object.
func NewQAudioDevice2(other *QAudioDevice) *QAudioDevice {
	defer runtime.KeepAlive(other)

	return newQAudioDevice(C.QAudioDevice_new2(other.cPointer()))
}

func (this *QAudioDevice) Swap(other *QAudioDevice) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QAudioDevice_swap(this.h, other.cPointer())
}

func (this *QAudioDevice) OperatorAssign(other *QAudioDevice) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QAudioDevice_operatorAssign(this.h, other.cPointer())
}

func (this *QAudioDevice) OperatorEqual(other *QAudioDevice) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QAudioDevice_operatorEqual(this.h, other.cPointer()))
}

func (this *QAudioDevice) OperatorNotEqual(other *QAudioDevice) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QAudioDevice_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QAudioDevice) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAudioDevice_isNull(this.h))
}

func (this *QAudioDevice) Id() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QAudioDevice_id(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QAudioDevice) Description() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAudioDevice_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDevice) IsDefault() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAudioDevice_isDefault(this.h))
}

func (this *QAudioDevice) Mode() QAudioDevice__Mode {
	defer runtime.KeepAlive(this)
	return (QAudioDevice__Mode)(C.QAudioDevice_mode(this.h))
}

func (this *QAudioDevice) IsFormatSupported(format *QAudioFormat) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	return (bool)(C.QAudioDevice_isFormatSupported(this.h, format.cPointer()))
}

func (this *QAudioDevice) PreferredFormat() *QAudioFormat {
	defer runtime.KeepAlive(this)
	_goptr := newQAudioFormat(C.QAudioDevice_preferredFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDevice) MinimumSampleRate() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioDevice_minimumSampleRate(this.h))
}

func (this *QAudioDevice) MaximumSampleRate() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioDevice_maximumSampleRate(this.h))
}

func (this *QAudioDevice) MinimumChannelCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioDevice_minimumChannelCount(this.h))
}

func (this *QAudioDevice) MaximumChannelCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioDevice_maximumChannelCount(this.h))
}

func (this *QAudioDevice) SupportedSampleFormats() []QAudioFormat__SampleFormat {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAudioDevice_supportedSampleFormats(this.h)
	_ret := make([]QAudioFormat__SampleFormat, int(_ma.len))
	_outCast := unsafe.Slice((*C.uint16_t)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QAudioFormat__SampleFormat)(_outCast[i])
	}
	return _ret
}

func (this *QAudioDevice) ChannelConfiguration() QAudioFormat__ChannelConfig {
	defer runtime.KeepAlive(this)
	return (QAudioFormat__ChannelConfig)(C.QAudioDevice_channelConfiguration(this.h))
}

// Delete this object from C++ memory.
func (this *QAudioDevice) Delete() {
	C.QAudioDevice_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAudioDevice) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAudioDevice_delete((*C.QAudioDevice)(gc[0]))
	})
	this.miqtSetGC(gc)
}
