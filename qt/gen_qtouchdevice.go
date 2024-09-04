package qt

/*

#include "gen_qtouchdevice.h"
#include <stdlib.h>

*/
import "C"

import (
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
	var _out **C.QTouchDevice = nil
	var _out_len C.size_t = 0
	C.QTouchDevice_Devices(&_out, &_out_len)
	ret := make([]*QTouchDevice, int(_out_len))
	_outCast := (*[0xffff]*C.QTouchDevice)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQTouchDevice(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTouchDevice) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTouchDevice_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTouchDevice) Type() QTouchDevice__DeviceType {
	ret := C.QTouchDevice_Type(this.h)
	return (QTouchDevice__DeviceType)(ret)
}

func (this *QTouchDevice) Capabilities() int {
	ret := C.QTouchDevice_Capabilities(this.h)
	return (int)(ret)
}

func (this *QTouchDevice) MaximumTouchPoints() int {
	ret := C.QTouchDevice_MaximumTouchPoints(this.h)
	return (int)(ret)
}

func (this *QTouchDevice) SetName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QTouchDevice_SetName(this.h, name_Cstring, C.size_t(len(name)))
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

func (this *QTouchDevice) Delete() {
	C.QTouchDevice_Delete(this.h)
}
