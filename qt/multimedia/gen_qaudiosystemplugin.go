package multimedia

/*

#include "gen_qaudiosystemplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QAudioSystemFactoryInterface struct {
	h *C.QAudioSystemFactoryInterface
}

func (this *QAudioSystemFactoryInterface) cPointer() *C.QAudioSystemFactoryInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioSystemFactoryInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAudioSystemFactoryInterface(h *C.QAudioSystemFactoryInterface) *QAudioSystemFactoryInterface {
	if h == nil {
		return nil
	}
	return &QAudioSystemFactoryInterface{h: h}
}

func UnsafeNewQAudioSystemFactoryInterface(h unsafe.Pointer) *QAudioSystemFactoryInterface {
	return newQAudioSystemFactoryInterface((*C.QAudioSystemFactoryInterface)(h))
}

func (this *QAudioSystemFactoryInterface) AvailableDevices(param1 QAudio__Mode) [][]byte {
	var _ma C.struct_miqt_array = C.QAudioSystemFactoryInterface_AvailableDevices(this.h, (C.int)(param1))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QAudioSystemFactoryInterface) CreateInput(device []byte) *QAbstractAudioInput {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioInput(unsafe.Pointer(C.QAudioSystemFactoryInterface_CreateInput(this.h, device_alias)))
}

func (this *QAudioSystemFactoryInterface) CreateOutput(device []byte) *QAbstractAudioOutput {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioOutput(unsafe.Pointer(C.QAudioSystemFactoryInterface_CreateOutput(this.h, device_alias)))
}

func (this *QAudioSystemFactoryInterface) CreateDeviceInfo(device []byte, mode QAudio__Mode) *QAbstractAudioDeviceInfo {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioDeviceInfo(unsafe.Pointer(C.QAudioSystemFactoryInterface_CreateDeviceInfo(this.h, device_alias, (C.int)(mode))))
}

func (this *QAudioSystemFactoryInterface) OperatorAssign(param1 *QAudioSystemFactoryInterface) {
	C.QAudioSystemFactoryInterface_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAudioSystemFactoryInterface) Delete() {
	C.QAudioSystemFactoryInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioSystemFactoryInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioSystemFactoryInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAudioSystemPlugin struct {
	h *C.QAudioSystemPlugin
	*qt.QObject
	*QAudioSystemFactoryInterface
}

func (this *QAudioSystemPlugin) cPointer() *C.QAudioSystemPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioSystemPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAudioSystemPlugin(h *C.QAudioSystemPlugin) *QAudioSystemPlugin {
	if h == nil {
		return nil
	}
	return &QAudioSystemPlugin{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h)), QAudioSystemFactoryInterface: UnsafeNewQAudioSystemFactoryInterface(unsafe.Pointer(h))}
}

func UnsafeNewQAudioSystemPlugin(h unsafe.Pointer) *QAudioSystemPlugin {
	return newQAudioSystemPlugin((*C.QAudioSystemPlugin)(h))
}

func (this *QAudioSystemPlugin) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioSystemPlugin_MetaObject(this.h)))
}

func (this *QAudioSystemPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioSystemPlugin_Metacast(this.h, param1_Cstring))
}

func QAudioSystemPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSystemPlugin) AvailableDevices(param1 QAudio__Mode) [][]byte {
	var _ma C.struct_miqt_array = C.QAudioSystemPlugin_AvailableDevices(this.h, (C.int)(param1))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QAudioSystemPlugin) CreateInput(device []byte) *QAbstractAudioInput {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioInput(unsafe.Pointer(C.QAudioSystemPlugin_CreateInput(this.h, device_alias)))
}

func (this *QAudioSystemPlugin) CreateOutput(device []byte) *QAbstractAudioOutput {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioOutput(unsafe.Pointer(C.QAudioSystemPlugin_CreateOutput(this.h, device_alias)))
}

func (this *QAudioSystemPlugin) CreateDeviceInfo(device []byte, mode QAudio__Mode) *QAbstractAudioDeviceInfo {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioDeviceInfo(unsafe.Pointer(C.QAudioSystemPlugin_CreateDeviceInfo(this.h, device_alias, (C.int)(mode))))
}

func QAudioSystemPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioSystemPlugin) Delete() {
	C.QAudioSystemPlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioSystemPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioSystemPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
