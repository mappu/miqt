package qt

/*

#include "gen_qtouchdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTouchDevice__DeviceType int

const (
	QTouchDevice__DeviceType__TouchScreen QTouchDevice__DeviceType = 0
	QTouchDevice__DeviceType__TouchPad    QTouchDevice__DeviceType = 1
)

type QTouchDevice__CapabilityFlag int

const (
	QTouchDevice__CapabilityFlag__Position           QTouchDevice__CapabilityFlag = 1
	QTouchDevice__CapabilityFlag__Area               QTouchDevice__CapabilityFlag = 2
	QTouchDevice__CapabilityFlag__Pressure           QTouchDevice__CapabilityFlag = 4
	QTouchDevice__CapabilityFlag__Velocity           QTouchDevice__CapabilityFlag = 8
	QTouchDevice__CapabilityFlag__RawPositions       QTouchDevice__CapabilityFlag = 16
	QTouchDevice__CapabilityFlag__NormalizedPosition QTouchDevice__CapabilityFlag = 32
	QTouchDevice__CapabilityFlag__MouseEmulation     QTouchDevice__CapabilityFlag = 64
)

type QTouchDevice struct {
	h *C.QTouchDevice
}

func (this *QTouchDevice) cPointer() *C.QTouchDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTouchDevice(h *C.QTouchDevice) *QTouchDevice {
	if h == nil {
		return nil
	}
	return &QTouchDevice{h: h}
}

func newQTouchDevice_U(h unsafe.Pointer) *QTouchDevice {
	return newQTouchDevice((*C.QTouchDevice)(h))
}

// NewQTouchDevice constructs a new QTouchDevice object.
func NewQTouchDevice() *QTouchDevice {
	ret := C.QTouchDevice_new()
	return newQTouchDevice(ret)
}

func QTouchDevice_Devices() []*QTouchDevice {
	var _ma *C.struct_miqt_array = C.QTouchDevice_Devices()
	_ret := make([]*QTouchDevice, int(_ma.len))
	_outCast := (*[0xffff]*C.QTouchDevice)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTouchDevice(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTouchDevice) Name() string {
	var _ms *C.struct_miqt_string = C.QTouchDevice_Name(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTouchDevice) Type() QTouchDevice__DeviceType {
	_ret := C.QTouchDevice_Type(this.h)
	return (QTouchDevice__DeviceType)(_ret)
}

func (this *QTouchDevice) Capabilities() int {
	_ret := C.QTouchDevice_Capabilities(this.h)
	return (int)(_ret)
}

func (this *QTouchDevice) MaximumTouchPoints() int {
	_ret := C.QTouchDevice_MaximumTouchPoints(this.h)
	return (int)(_ret)
}

func (this *QTouchDevice) SetName(name string) {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	C.QTouchDevice_SetName(this.h, (*C.struct_miqt_string)(name_ms))
}

func (this *QTouchDevice) SetType(devType QTouchDevice__DeviceType) {
	C.QTouchDevice_SetType(this.h, (C.uintptr_t)(devType))
}

func (this *QTouchDevice) SetCapabilities(caps int) {
	C.QTouchDevice_SetCapabilities(this.h, (C.int)(caps))
}

func (this *QTouchDevice) SetMaximumTouchPoints(max int) {
	C.QTouchDevice_SetMaximumTouchPoints(this.h, (C.int)(max))
}

// Delete this object from C++ memory.
func (this *QTouchDevice) Delete() {
	C.QTouchDevice_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTouchDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QTouchDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
