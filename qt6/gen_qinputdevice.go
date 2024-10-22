package qt6

/*

#include "gen_qinputdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QInputDevice__DeviceType int

const (
	QInputDevice__Unknown     QInputDevice__DeviceType = 0
	QInputDevice__Mouse       QInputDevice__DeviceType = 1
	QInputDevice__TouchScreen QInputDevice__DeviceType = 2
	QInputDevice__TouchPad    QInputDevice__DeviceType = 4
	QInputDevice__Puck        QInputDevice__DeviceType = 8
	QInputDevice__Stylus      QInputDevice__DeviceType = 16
	QInputDevice__Airbrush    QInputDevice__DeviceType = 32
	QInputDevice__Keyboard    QInputDevice__DeviceType = 4096
	QInputDevice__AllDevices  QInputDevice__DeviceType = 2147483647
)

type QInputDevice__Capability int

const (
	QInputDevice__None               QInputDevice__Capability = 0
	QInputDevice__Position           QInputDevice__Capability = 1
	QInputDevice__Area               QInputDevice__Capability = 2
	QInputDevice__Pressure           QInputDevice__Capability = 4
	QInputDevice__Velocity           QInputDevice__Capability = 8
	QInputDevice__NormalizedPosition QInputDevice__Capability = 32
	QInputDevice__MouseEmulation     QInputDevice__Capability = 64
	QInputDevice__PixelScroll        QInputDevice__Capability = 128
	QInputDevice__Scroll             QInputDevice__Capability = 256
	QInputDevice__Hover              QInputDevice__Capability = 512
	QInputDevice__Rotation           QInputDevice__Capability = 1024
	QInputDevice__XTilt              QInputDevice__Capability = 2048
	QInputDevice__YTilt              QInputDevice__Capability = 4096
	QInputDevice__TangentialPressure QInputDevice__Capability = 8192
	QInputDevice__ZPosition          QInputDevice__Capability = 16384
	QInputDevice__All                QInputDevice__Capability = 2147483647
)

type QInputDevice struct {
	h *C.QInputDevice
	*QObject
}

func (this *QInputDevice) cPointer() *C.QInputDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputDevice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQInputDevice(h *C.QInputDevice) *QInputDevice {
	if h == nil {
		return nil
	}
	return &QInputDevice{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQInputDevice(h unsafe.Pointer) *QInputDevice {
	return newQInputDevice((*C.QInputDevice)(h))
}

// NewQInputDevice constructs a new QInputDevice object.
func NewQInputDevice() *QInputDevice {
	ret := C.QInputDevice_new()
	return newQInputDevice(ret)
}

// NewQInputDevice2 constructs a new QInputDevice object.
func NewQInputDevice2(name string, systemId int64, typeVal QInputDevice__DeviceType) *QInputDevice {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	ret := C.QInputDevice_new2(name_ms, (C.longlong)(systemId), (C.int)(typeVal))
	return newQInputDevice(ret)
}

// NewQInputDevice3 constructs a new QInputDevice object.
func NewQInputDevice3(parent *QObject) *QInputDevice {
	ret := C.QInputDevice_new3(parent.cPointer())
	return newQInputDevice(ret)
}

// NewQInputDevice4 constructs a new QInputDevice object.
func NewQInputDevice4(name string, systemId int64, typeVal QInputDevice__DeviceType, seatName string) *QInputDevice {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	seatName_ms := C.struct_miqt_string{}
	seatName_ms.data = C.CString(seatName)
	seatName_ms.len = C.size_t(len(seatName))
	defer C.free(unsafe.Pointer(seatName_ms.data))
	ret := C.QInputDevice_new4(name_ms, (C.longlong)(systemId), (C.int)(typeVal), seatName_ms)
	return newQInputDevice(ret)
}

// NewQInputDevice5 constructs a new QInputDevice object.
func NewQInputDevice5(name string, systemId int64, typeVal QInputDevice__DeviceType, seatName string, parent *QObject) *QInputDevice {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	seatName_ms := C.struct_miqt_string{}
	seatName_ms.data = C.CString(seatName)
	seatName_ms.len = C.size_t(len(seatName))
	defer C.free(unsafe.Pointer(seatName_ms.data))
	ret := C.QInputDevice_new5(name_ms, (C.longlong)(systemId), (C.int)(typeVal), seatName_ms, parent.cPointer())
	return newQInputDevice(ret)
}

func (this *QInputDevice) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QInputDevice_MetaObject(this.h)))
}

func (this *QInputDevice) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QInputDevice_Metacast(this.h, param1_Cstring))
}

func QInputDevice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QInputDevice_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDevice) Name() string {
	var _ms C.struct_miqt_string = C.QInputDevice_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDevice) Type() QInputDevice__DeviceType {
	return (QInputDevice__DeviceType)(C.QInputDevice_Type(this.h))
}

func (this *QInputDevice) Capabilities() QInputDevice__Capability {
	return (QInputDevice__Capability)(C.QInputDevice_Capabilities(this.h))
}

func (this *QInputDevice) HasCapability(cap QInputDevice__Capability) bool {
	return (bool)(C.QInputDevice_HasCapability(this.h, (C.int)(cap)))
}

func (this *QInputDevice) SystemId() int64 {
	return (int64)(C.QInputDevice_SystemId(this.h))
}

func (this *QInputDevice) SeatName() string {
	var _ms C.struct_miqt_string = C.QInputDevice_SeatName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputDevice) AvailableVirtualGeometry() *QRect {
	_ret := C.QInputDevice_AvailableVirtualGeometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QInputDevice_SeatNames() []string {
	var _ma *C.struct_miqt_array = C.QInputDevice_SeatNames()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QInputDevice_Devices() []*QInputDevice {
	var _ma *C.struct_miqt_array = C.QInputDevice_Devices()
	_ret := make([]*QInputDevice, int(_ma.len))
	_outCast := (*[0xffff]*C.QInputDevice)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQInputDevice(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QInputDevice_PrimaryKeyboard() *QInputDevice {
	return UnsafeNewQInputDevice(unsafe.Pointer(C.QInputDevice_PrimaryKeyboard()))
}

func (this *QInputDevice) OperatorEqual(other *QInputDevice) bool {
	return (bool)(C.QInputDevice_OperatorEqual(this.h, other.cPointer()))
}

func (this *QInputDevice) AvailableVirtualGeometryChanged(area QRect) {
	C.QInputDevice_AvailableVirtualGeometryChanged(this.h, area.cPointer())
}
func (this *QInputDevice) OnAvailableVirtualGeometryChanged(slot func(area QRect)) {
	C.QInputDevice_connect_AvailableVirtualGeometryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputDevice_AvailableVirtualGeometryChanged
func miqt_exec_callback_QInputDevice_AvailableVirtualGeometryChanged(cb C.intptr_t, area *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(area QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	area_ret := area
	area_goptr := newQRect(area_ret)
	area_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *area_goptr

	gofunc(slotval1)
}

func QInputDevice_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDevice_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDevice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputDevice_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputDevice_PrimaryKeyboard1(seatName string) *QInputDevice {
	seatName_ms := C.struct_miqt_string{}
	seatName_ms.data = C.CString(seatName)
	seatName_ms.len = C.size_t(len(seatName))
	defer C.free(unsafe.Pointer(seatName_ms.data))
	return UnsafeNewQInputDevice(unsafe.Pointer(C.QInputDevice_PrimaryKeyboard1(seatName_ms)))
}

// Delete this object from C++ memory.
func (this *QInputDevice) Delete() {
	C.QInputDevice_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
