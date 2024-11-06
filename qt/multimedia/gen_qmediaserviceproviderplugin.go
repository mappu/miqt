package multimedia

/*

#include "gen_qmediaserviceproviderplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QMediaServiceProviderHint__Type int

const (
	QMediaServiceProviderHint__Null              QMediaServiceProviderHint__Type = 0
	QMediaServiceProviderHint__ContentType       QMediaServiceProviderHint__Type = 1
	QMediaServiceProviderHint__Device            QMediaServiceProviderHint__Type = 2
	QMediaServiceProviderHint__SupportedFeatures QMediaServiceProviderHint__Type = 3
	QMediaServiceProviderHint__CameraPosition    QMediaServiceProviderHint__Type = 4
)

type QMediaServiceProviderHint__Feature int

const (
	QMediaServiceProviderHint__LowLatencyPlayback QMediaServiceProviderHint__Feature = 1
	QMediaServiceProviderHint__RecordingSupport   QMediaServiceProviderHint__Feature = 2
	QMediaServiceProviderHint__StreamPlayback     QMediaServiceProviderHint__Feature = 4
	QMediaServiceProviderHint__VideoSurface       QMediaServiceProviderHint__Feature = 8
)

type QMediaServiceProviderHint struct {
	h *C.QMediaServiceProviderHint
}

func (this *QMediaServiceProviderHint) cPointer() *C.QMediaServiceProviderHint {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaServiceProviderHint) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaServiceProviderHint(h *C.QMediaServiceProviderHint) *QMediaServiceProviderHint {
	if h == nil {
		return nil
	}
	return &QMediaServiceProviderHint{h: h}
}

func UnsafeNewQMediaServiceProviderHint(h unsafe.Pointer) *QMediaServiceProviderHint {
	return newQMediaServiceProviderHint((*C.QMediaServiceProviderHint)(h))
}

// NewQMediaServiceProviderHint constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint() *QMediaServiceProviderHint {
	ret := C.QMediaServiceProviderHint_new()
	return newQMediaServiceProviderHint(ret)
}

// NewQMediaServiceProviderHint2 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint2(mimeType string, codecs []string) *QMediaServiceProviderHint {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	codecs_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(codecs))))
	defer C.free(unsafe.Pointer(codecs_CArray))
	for i := range codecs {
		codecs_i_ms := C.struct_miqt_string{}
		codecs_i_ms.data = C.CString(codecs[i])
		codecs_i_ms.len = C.size_t(len(codecs[i]))
		defer C.free(unsafe.Pointer(codecs_i_ms.data))
		codecs_CArray[i] = codecs_i_ms
	}
	codecs_ma := C.struct_miqt_array{len: C.size_t(len(codecs)), data: unsafe.Pointer(codecs_CArray)}
	ret := C.QMediaServiceProviderHint_new2(mimeType_ms, codecs_ma)
	return newQMediaServiceProviderHint(ret)
}

// NewQMediaServiceProviderHint3 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint3(device []byte) *QMediaServiceProviderHint {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	ret := C.QMediaServiceProviderHint_new3(device_alias)
	return newQMediaServiceProviderHint(ret)
}

// NewQMediaServiceProviderHint4 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint4(position QCamera__Position) *QMediaServiceProviderHint {
	ret := C.QMediaServiceProviderHint_new4((C.int)(position))
	return newQMediaServiceProviderHint(ret)
}

// NewQMediaServiceProviderHint5 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint5(features QMediaServiceProviderHint__Feature) *QMediaServiceProviderHint {
	ret := C.QMediaServiceProviderHint_new5((C.int)(features))
	return newQMediaServiceProviderHint(ret)
}

// NewQMediaServiceProviderHint6 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint6(other *QMediaServiceProviderHint) *QMediaServiceProviderHint {
	ret := C.QMediaServiceProviderHint_new6(other.cPointer())
	return newQMediaServiceProviderHint(ret)
}

func (this *QMediaServiceProviderHint) OperatorAssign(other *QMediaServiceProviderHint) {
	C.QMediaServiceProviderHint_OperatorAssign(this.h, other.cPointer())
}

func (this *QMediaServiceProviderHint) OperatorEqual(other *QMediaServiceProviderHint) bool {
	return (bool)(C.QMediaServiceProviderHint_OperatorEqual(this.h, other.cPointer()))
}

func (this *QMediaServiceProviderHint) OperatorNotEqual(other *QMediaServiceProviderHint) bool {
	return (bool)(C.QMediaServiceProviderHint_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QMediaServiceProviderHint) IsNull() bool {
	return (bool)(C.QMediaServiceProviderHint_IsNull(this.h))
}

func (this *QMediaServiceProviderHint) Type() QMediaServiceProviderHint__Type {
	return (QMediaServiceProviderHint__Type)(C.QMediaServiceProviderHint_Type(this.h))
}

func (this *QMediaServiceProviderHint) MimeType() string {
	var _ms C.struct_miqt_string = C.QMediaServiceProviderHint_MimeType(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaServiceProviderHint) Codecs() []string {
	var _ma C.struct_miqt_array = C.QMediaServiceProviderHint_Codecs(this.h)
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

func (this *QMediaServiceProviderHint) Device() []byte {
	var _bytearray C.struct_miqt_string = C.QMediaServiceProviderHint_Device(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMediaServiceProviderHint) CameraPosition() QCamera__Position {
	return (QCamera__Position)(C.QMediaServiceProviderHint_CameraPosition(this.h))
}

func (this *QMediaServiceProviderHint) Features() QMediaServiceProviderHint__Feature {
	return (QMediaServiceProviderHint__Feature)(C.QMediaServiceProviderHint_Features(this.h))
}

// Delete this object from C++ memory.
func (this *QMediaServiceProviderHint) Delete() {
	C.QMediaServiceProviderHint_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaServiceProviderHint) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaServiceProviderHint) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMediaServiceProviderFactoryInterface struct {
	h *C.QMediaServiceProviderFactoryInterface
}

func (this *QMediaServiceProviderFactoryInterface) cPointer() *C.QMediaServiceProviderFactoryInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaServiceProviderFactoryInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaServiceProviderFactoryInterface(h *C.QMediaServiceProviderFactoryInterface) *QMediaServiceProviderFactoryInterface {
	if h == nil {
		return nil
	}
	return &QMediaServiceProviderFactoryInterface{h: h}
}

func UnsafeNewQMediaServiceProviderFactoryInterface(h unsafe.Pointer) *QMediaServiceProviderFactoryInterface {
	return newQMediaServiceProviderFactoryInterface((*C.QMediaServiceProviderFactoryInterface)(h))
}

func (this *QMediaServiceProviderFactoryInterface) Create(key string) *QMediaService {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return UnsafeNewQMediaService(unsafe.Pointer(C.QMediaServiceProviderFactoryInterface_Create(this.h, key_ms)))
}

func (this *QMediaServiceProviderFactoryInterface) Release(service *QMediaService) {
	C.QMediaServiceProviderFactoryInterface_Release(this.h, service.cPointer())
}

func (this *QMediaServiceProviderFactoryInterface) OperatorAssign(param1 *QMediaServiceProviderFactoryInterface) {
	C.QMediaServiceProviderFactoryInterface_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceProviderFactoryInterface) Delete() {
	C.QMediaServiceProviderFactoryInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaServiceProviderFactoryInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaServiceProviderFactoryInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMediaServiceSupportedFormatsInterface struct {
	h *C.QMediaServiceSupportedFormatsInterface
}

func (this *QMediaServiceSupportedFormatsInterface) cPointer() *C.QMediaServiceSupportedFormatsInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaServiceSupportedFormatsInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaServiceSupportedFormatsInterface(h *C.QMediaServiceSupportedFormatsInterface) *QMediaServiceSupportedFormatsInterface {
	if h == nil {
		return nil
	}
	return &QMediaServiceSupportedFormatsInterface{h: h}
}

func UnsafeNewQMediaServiceSupportedFormatsInterface(h unsafe.Pointer) *QMediaServiceSupportedFormatsInterface {
	return newQMediaServiceSupportedFormatsInterface((*C.QMediaServiceSupportedFormatsInterface)(h))
}

func (this *QMediaServiceSupportedFormatsInterface) HasSupport(mimeType string, codecs []string) QMultimedia__SupportEstimate {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	codecs_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(codecs))))
	defer C.free(unsafe.Pointer(codecs_CArray))
	for i := range codecs {
		codecs_i_ms := C.struct_miqt_string{}
		codecs_i_ms.data = C.CString(codecs[i])
		codecs_i_ms.len = C.size_t(len(codecs[i]))
		defer C.free(unsafe.Pointer(codecs_i_ms.data))
		codecs_CArray[i] = codecs_i_ms
	}
	codecs_ma := C.struct_miqt_array{len: C.size_t(len(codecs)), data: unsafe.Pointer(codecs_CArray)}
	return (QMultimedia__SupportEstimate)(C.QMediaServiceSupportedFormatsInterface_HasSupport(this.h, mimeType_ms, codecs_ma))
}

func (this *QMediaServiceSupportedFormatsInterface) SupportedMimeTypes() []string {
	var _ma C.struct_miqt_array = C.QMediaServiceSupportedFormatsInterface_SupportedMimeTypes(this.h)
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

func (this *QMediaServiceSupportedFormatsInterface) OperatorAssign(param1 *QMediaServiceSupportedFormatsInterface) {
	C.QMediaServiceSupportedFormatsInterface_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceSupportedFormatsInterface) Delete() {
	C.QMediaServiceSupportedFormatsInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaServiceSupportedFormatsInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaServiceSupportedFormatsInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMediaServiceSupportedDevicesInterface struct {
	h *C.QMediaServiceSupportedDevicesInterface
}

func (this *QMediaServiceSupportedDevicesInterface) cPointer() *C.QMediaServiceSupportedDevicesInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaServiceSupportedDevicesInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaServiceSupportedDevicesInterface(h *C.QMediaServiceSupportedDevicesInterface) *QMediaServiceSupportedDevicesInterface {
	if h == nil {
		return nil
	}
	return &QMediaServiceSupportedDevicesInterface{h: h}
}

func UnsafeNewQMediaServiceSupportedDevicesInterface(h unsafe.Pointer) *QMediaServiceSupportedDevicesInterface {
	return newQMediaServiceSupportedDevicesInterface((*C.QMediaServiceSupportedDevicesInterface)(h))
}

func (this *QMediaServiceSupportedDevicesInterface) Devices(service []byte) [][]byte {
	service_alias := C.struct_miqt_string{}
	service_alias.data = (*C.char)(unsafe.Pointer(&service[0]))
	service_alias.len = C.size_t(len(service))
	var _ma C.struct_miqt_array = C.QMediaServiceSupportedDevicesInterface_Devices(this.h, service_alias)
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

func (this *QMediaServiceSupportedDevicesInterface) DeviceDescription(service []byte, device []byte) string {
	service_alias := C.struct_miqt_string{}
	service_alias.data = (*C.char)(unsafe.Pointer(&service[0]))
	service_alias.len = C.size_t(len(service))
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	var _ms C.struct_miqt_string = C.QMediaServiceSupportedDevicesInterface_DeviceDescription(this.h, service_alias, device_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaServiceSupportedDevicesInterface) OperatorAssign(param1 *QMediaServiceSupportedDevicesInterface) {
	C.QMediaServiceSupportedDevicesInterface_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceSupportedDevicesInterface) Delete() {
	C.QMediaServiceSupportedDevicesInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaServiceSupportedDevicesInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaServiceSupportedDevicesInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMediaServiceDefaultDeviceInterface struct {
	h *C.QMediaServiceDefaultDeviceInterface
}

func (this *QMediaServiceDefaultDeviceInterface) cPointer() *C.QMediaServiceDefaultDeviceInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaServiceDefaultDeviceInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaServiceDefaultDeviceInterface(h *C.QMediaServiceDefaultDeviceInterface) *QMediaServiceDefaultDeviceInterface {
	if h == nil {
		return nil
	}
	return &QMediaServiceDefaultDeviceInterface{h: h}
}

func UnsafeNewQMediaServiceDefaultDeviceInterface(h unsafe.Pointer) *QMediaServiceDefaultDeviceInterface {
	return newQMediaServiceDefaultDeviceInterface((*C.QMediaServiceDefaultDeviceInterface)(h))
}

func (this *QMediaServiceDefaultDeviceInterface) DefaultDevice(service []byte) []byte {
	service_alias := C.struct_miqt_string{}
	service_alias.data = (*C.char)(unsafe.Pointer(&service[0]))
	service_alias.len = C.size_t(len(service))
	var _bytearray C.struct_miqt_string = C.QMediaServiceDefaultDeviceInterface_DefaultDevice(this.h, service_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMediaServiceDefaultDeviceInterface) OperatorAssign(param1 *QMediaServiceDefaultDeviceInterface) {
	C.QMediaServiceDefaultDeviceInterface_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceDefaultDeviceInterface) Delete() {
	C.QMediaServiceDefaultDeviceInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaServiceDefaultDeviceInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaServiceDefaultDeviceInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMediaServiceCameraInfoInterface struct {
	h *C.QMediaServiceCameraInfoInterface
}

func (this *QMediaServiceCameraInfoInterface) cPointer() *C.QMediaServiceCameraInfoInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaServiceCameraInfoInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaServiceCameraInfoInterface(h *C.QMediaServiceCameraInfoInterface) *QMediaServiceCameraInfoInterface {
	if h == nil {
		return nil
	}
	return &QMediaServiceCameraInfoInterface{h: h}
}

func UnsafeNewQMediaServiceCameraInfoInterface(h unsafe.Pointer) *QMediaServiceCameraInfoInterface {
	return newQMediaServiceCameraInfoInterface((*C.QMediaServiceCameraInfoInterface)(h))
}

func (this *QMediaServiceCameraInfoInterface) CameraPosition(device []byte) QCamera__Position {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return (QCamera__Position)(C.QMediaServiceCameraInfoInterface_CameraPosition(this.h, device_alias))
}

func (this *QMediaServiceCameraInfoInterface) CameraOrientation(device []byte) int {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return (int)(C.QMediaServiceCameraInfoInterface_CameraOrientation(this.h, device_alias))
}

func (this *QMediaServiceCameraInfoInterface) OperatorAssign(param1 *QMediaServiceCameraInfoInterface) {
	C.QMediaServiceCameraInfoInterface_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceCameraInfoInterface) Delete() {
	C.QMediaServiceCameraInfoInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaServiceCameraInfoInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaServiceCameraInfoInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMediaServiceFeaturesInterface struct {
	h *C.QMediaServiceFeaturesInterface
}

func (this *QMediaServiceFeaturesInterface) cPointer() *C.QMediaServiceFeaturesInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaServiceFeaturesInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaServiceFeaturesInterface(h *C.QMediaServiceFeaturesInterface) *QMediaServiceFeaturesInterface {
	if h == nil {
		return nil
	}
	return &QMediaServiceFeaturesInterface{h: h}
}

func UnsafeNewQMediaServiceFeaturesInterface(h unsafe.Pointer) *QMediaServiceFeaturesInterface {
	return newQMediaServiceFeaturesInterface((*C.QMediaServiceFeaturesInterface)(h))
}

func (this *QMediaServiceFeaturesInterface) SupportedFeatures(service []byte) QMediaServiceProviderHint__Feature {
	service_alias := C.struct_miqt_string{}
	service_alias.data = (*C.char)(unsafe.Pointer(&service[0]))
	service_alias.len = C.size_t(len(service))
	return (QMediaServiceProviderHint__Feature)(C.QMediaServiceFeaturesInterface_SupportedFeatures(this.h, service_alias))
}

func (this *QMediaServiceFeaturesInterface) OperatorAssign(param1 *QMediaServiceFeaturesInterface) {
	C.QMediaServiceFeaturesInterface_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceFeaturesInterface) Delete() {
	C.QMediaServiceFeaturesInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaServiceFeaturesInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaServiceFeaturesInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMediaServiceProviderPlugin struct {
	h *C.QMediaServiceProviderPlugin
	*qt.QObject
	*QMediaServiceProviderFactoryInterface
}

func (this *QMediaServiceProviderPlugin) cPointer() *C.QMediaServiceProviderPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaServiceProviderPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaServiceProviderPlugin(h *C.QMediaServiceProviderPlugin) *QMediaServiceProviderPlugin {
	if h == nil {
		return nil
	}
	return &QMediaServiceProviderPlugin{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h)), QMediaServiceProviderFactoryInterface: UnsafeNewQMediaServiceProviderFactoryInterface(unsafe.Pointer(h))}
}

func UnsafeNewQMediaServiceProviderPlugin(h unsafe.Pointer) *QMediaServiceProviderPlugin {
	return newQMediaServiceProviderPlugin((*C.QMediaServiceProviderPlugin)(h))
}

func (this *QMediaServiceProviderPlugin) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaServiceProviderPlugin_MetaObject(this.h)))
}

func (this *QMediaServiceProviderPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaServiceProviderPlugin_Metacast(this.h, param1_Cstring))
}

func QMediaServiceProviderPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaServiceProviderPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaServiceProviderPlugin) Create(key string) *QMediaService {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return UnsafeNewQMediaService(unsafe.Pointer(C.QMediaServiceProviderPlugin_Create(this.h, key_ms)))
}

func (this *QMediaServiceProviderPlugin) Release(service *QMediaService) {
	C.QMediaServiceProviderPlugin_Release(this.h, service.cPointer())
}

func QMediaServiceProviderPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaServiceProviderPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaServiceProviderPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaServiceProviderPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaServiceProviderPlugin) Delete() {
	C.QMediaServiceProviderPlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaServiceProviderPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaServiceProviderPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
