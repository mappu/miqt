package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtouchdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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

func (this *QTouchDevice) MaximumTouchPoints() int {
	ret := C.QTouchDevice_MaximumTouchPoints(this.h)
	return (int)(ret)
}

func (this *QTouchDevice) SetName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QTouchDevice_SetName(this.h, name_Cstring, C.ulong(len(name)))
}

func (this *QTouchDevice) SetMaximumTouchPoints(max int) {
	C.QTouchDevice_SetMaximumTouchPoints(this.h, (C.int)(max))
}

func (this *QTouchDevice) Delete() {
	C.QTouchDevice_Delete(this.h)
}
