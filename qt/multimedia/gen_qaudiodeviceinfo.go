package multimedia

/*

#include "gen_qaudiodeviceinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAudioDeviceInfo struct {
	h *C.QAudioDeviceInfo
}

func (this *QAudioDeviceInfo) cPointer() *C.QAudioDeviceInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioDeviceInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioDeviceInfo constructs the type using only CGO pointers.
func newQAudioDeviceInfo(h *C.QAudioDeviceInfo) *QAudioDeviceInfo {
	if h == nil {
		return nil
	}

	return &QAudioDeviceInfo{h: h}
}

// UnsafeNewQAudioDeviceInfo constructs the type using only unsafe pointers.
func UnsafeNewQAudioDeviceInfo(h unsafe.Pointer) *QAudioDeviceInfo {
	return newQAudioDeviceInfo((*C.QAudioDeviceInfo)(h))
}

// NewQAudioDeviceInfo constructs a new QAudioDeviceInfo object.
func NewQAudioDeviceInfo() *QAudioDeviceInfo {

	return newQAudioDeviceInfo(C.QAudioDeviceInfo_new())
}

// NewQAudioDeviceInfo2 constructs a new QAudioDeviceInfo object.
func NewQAudioDeviceInfo2(other *QAudioDeviceInfo) *QAudioDeviceInfo {

	return newQAudioDeviceInfo(C.QAudioDeviceInfo_new2(other.cPointer()))
}

func (this *QAudioDeviceInfo) OperatorAssign(other *QAudioDeviceInfo) {
	C.QAudioDeviceInfo_operatorAssign(this.h, other.cPointer())
}

func (this *QAudioDeviceInfo) OperatorEqual(other *QAudioDeviceInfo) bool {
	return (bool)(C.QAudioDeviceInfo_operatorEqual(this.h, other.cPointer()))
}

func (this *QAudioDeviceInfo) OperatorNotEqual(other *QAudioDeviceInfo) bool {
	return (bool)(C.QAudioDeviceInfo_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QAudioDeviceInfo) IsNull() bool {
	return (bool)(C.QAudioDeviceInfo_isNull(this.h))
}

func (this *QAudioDeviceInfo) DeviceName() string {
	var _ms C.struct_miqt_string = C.QAudioDeviceInfo_deviceName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDeviceInfo) IsFormatSupported(format *QAudioFormat) bool {
	return (bool)(C.QAudioDeviceInfo_isFormatSupported(this.h, format.cPointer()))
}

func (this *QAudioDeviceInfo) PreferredFormat() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioDeviceInfo_preferredFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDeviceInfo) NearestFormat(format *QAudioFormat) *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioDeviceInfo_nearestFormat(this.h, format.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDeviceInfo) SupportedCodecs() []string {
	var _ma C.struct_miqt_array = C.QAudioDeviceInfo_supportedCodecs(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QAudioDeviceInfo) SupportedSampleRates() []int {
	var _ma C.struct_miqt_array = C.QAudioDeviceInfo_supportedSampleRates(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QAudioDeviceInfo) SupportedChannelCounts() []int {
	var _ma C.struct_miqt_array = C.QAudioDeviceInfo_supportedChannelCounts(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QAudioDeviceInfo) SupportedSampleSizes() []int {
	var _ma C.struct_miqt_array = C.QAudioDeviceInfo_supportedSampleSizes(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QAudioDeviceInfo) SupportedByteOrders() []QAudioFormat__Endian {
	var _ma C.struct_miqt_array = C.QAudioDeviceInfo_supportedByteOrders(this.h)
	_ret := make([]QAudioFormat__Endian, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QAudioFormat__Endian)(_outCast[i])
	}
	return _ret
}

func (this *QAudioDeviceInfo) SupportedSampleTypes() []QAudioFormat__SampleType {
	var _ma C.struct_miqt_array = C.QAudioDeviceInfo_supportedSampleTypes(this.h)
	_ret := make([]QAudioFormat__SampleType, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QAudioFormat__SampleType)(_outCast[i])
	}
	return _ret
}

func (this *QAudioDeviceInfo) Realm() string {
	var _ms C.struct_miqt_string = C.QAudioDeviceInfo_realm(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDeviceInfo_DefaultInputDevice() *QAudioDeviceInfo {
	_goptr := newQAudioDeviceInfo(C.QAudioDeviceInfo_defaultInputDevice())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QAudioDeviceInfo_DefaultOutputDevice() *QAudioDeviceInfo {
	_goptr := newQAudioDeviceInfo(C.QAudioDeviceInfo_defaultOutputDevice())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QAudioDeviceInfo_AvailableDevices(mode QAudio__Mode) []QAudioDeviceInfo {
	var _ma C.struct_miqt_array = C.QAudioDeviceInfo_availableDevices((C.int)(mode))
	_ret := make([]QAudioDeviceInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QAudioDeviceInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQAudioDeviceInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioDeviceInfo) Delete() {
	C.QAudioDeviceInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioDeviceInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioDeviceInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
