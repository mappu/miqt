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
	QTouchDevice__TouchScreen QTouchDevice__DeviceType = 0
	QTouchDevice__TouchPad    QTouchDevice__DeviceType = 1
)

type QTouchDevice__CapabilityFlag int

const (
	QTouchDevice__Position           QTouchDevice__CapabilityFlag = 1
	QTouchDevice__Area               QTouchDevice__CapabilityFlag = 2
	QTouchDevice__Pressure           QTouchDevice__CapabilityFlag = 4
	QTouchDevice__Velocity           QTouchDevice__CapabilityFlag = 8
	QTouchDevice__RawPositions       QTouchDevice__CapabilityFlag = 16
	QTouchDevice__NormalizedPosition QTouchDevice__CapabilityFlag = 32
	QTouchDevice__MouseEmulation     QTouchDevice__CapabilityFlag = 64
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

func (this *QTouchDevice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTouchDevice(h *C.QTouchDevice) *QTouchDevice {
	if h == nil {
		return nil
	}
	return &QTouchDevice{h: h}
}

func UnsafeNewQTouchDevice(h unsafe.Pointer) *QTouchDevice {
	return newQTouchDevice((*C.QTouchDevice)(h))
}

// NewQTouchDevice constructs a new QTouchDevice object.
func NewQTouchDevice() *QTouchDevice {
	ret := C.QTouchDevice_new()
	return newQTouchDevice(ret)
}

func QTouchDevice_Devices() []*QTouchDevice {
	var _ma C.struct_miqt_array = C.QTouchDevice_Devices()
	_ret := make([]*QTouchDevice, int(_ma.len))
	_outCast := (*[0xffff]*C.QTouchDevice)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQTouchDevice(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QTouchDevice) Name() string {
	var _ms C.struct_miqt_string = C.QTouchDevice_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTouchDevice) Type() QTouchDevice__DeviceType {
	return (QTouchDevice__DeviceType)(C.QTouchDevice_Type(this.h))
}

func (this *QTouchDevice) Capabilities() QTouchDevice__CapabilityFlag {
	return (QTouchDevice__CapabilityFlag)(C.QTouchDevice_Capabilities(this.h))
}

func (this *QTouchDevice) MaximumTouchPoints() int {
	return (int)(C.QTouchDevice_MaximumTouchPoints(this.h))
}

func (this *QTouchDevice) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTouchDevice_SetName(this.h, name_ms)
}

func (this *QTouchDevice) SetType(devType QTouchDevice__DeviceType) {
	C.QTouchDevice_SetType(this.h, (C.int)(devType))
}

func (this *QTouchDevice) SetCapabilities(caps QTouchDevice__CapabilityFlag) {
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
