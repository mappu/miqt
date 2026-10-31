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
	h  *C.QMediaServiceProviderHint
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaServiceProviderHint) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQMediaServiceProviderHint constructs the type using only CGO pointers.
func newQMediaServiceProviderHint(h *C.QMediaServiceProviderHint) *QMediaServiceProviderHint {
	if h == nil {
		return nil
	}

	return &QMediaServiceProviderHint{h: h}
}

// UnsafeNewQMediaServiceProviderHint constructs the type using only unsafe pointers.
func UnsafeNewQMediaServiceProviderHint(h unsafe.Pointer) *QMediaServiceProviderHint {
	return newQMediaServiceProviderHint((*C.QMediaServiceProviderHint)(h))
}

// NewQMediaServiceProviderHint constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint() *QMediaServiceProviderHint {

	return newQMediaServiceProviderHint(C.QMediaServiceProviderHint_new())
}

// NewQMediaServiceProviderHint2 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint2(mimeType string, codecs []string) *QMediaServiceProviderHint {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	codecs_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(codecs))))
	defer C.free(unsafe.Pointer(codecs_CArray_ptr))
	codecs_CArray := unsafe.Slice(codecs_CArray_ptr, len(codecs))
	for i := range codecs {
		codecs_i_ms := C.struct_miqt_string{}
		codecs_i_ms.data = C.CString(codecs[i])
		codecs_i_ms.len = C.size_t(len(codecs[i]))
		defer C.free(unsafe.Pointer(codecs_i_ms.data))
		codecs_CArray[i] = codecs_i_ms
	}
	codecs_ma := C.struct_miqt_array{len: C.size_t(len(codecs)), data: unsafe.Pointer(codecs_CArray_ptr)}

	return newQMediaServiceProviderHint(C.QMediaServiceProviderHint_new2(mimeType_ms, codecs_ma))
}

// NewQMediaServiceProviderHint3 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint3(device []byte) *QMediaServiceProviderHint {
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))

	return newQMediaServiceProviderHint(C.QMediaServiceProviderHint_new3(device_alias))
}

// NewQMediaServiceProviderHint4 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint4(position QCamera__Position) *QMediaServiceProviderHint {

	return newQMediaServiceProviderHint(C.QMediaServiceProviderHint_new4((C.int)(position)))
}

// NewQMediaServiceProviderHint5 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint5(features QMediaServiceProviderHint__Feature) *QMediaServiceProviderHint {

	return newQMediaServiceProviderHint(C.QMediaServiceProviderHint_new5((C.int)(features)))
}

// NewQMediaServiceProviderHint6 constructs a new QMediaServiceProviderHint object.
func NewQMediaServiceProviderHint6(other *QMediaServiceProviderHint) *QMediaServiceProviderHint {
	defer runtime.KeepAlive(other)

	return newQMediaServiceProviderHint(C.QMediaServiceProviderHint_new6(other.cPointer()))
}

func (this *QMediaServiceProviderHint) OperatorAssign(other *QMediaServiceProviderHint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QMediaServiceProviderHint_operatorAssign(this.h, other.cPointer())
}

func (this *QMediaServiceProviderHint) OperatorEqual(other *QMediaServiceProviderHint) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QMediaServiceProviderHint_operatorEqual(this.h, other.cPointer()))
}

func (this *QMediaServiceProviderHint) OperatorNotEqual(other *QMediaServiceProviderHint) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QMediaServiceProviderHint_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QMediaServiceProviderHint) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMediaServiceProviderHint_isNull(this.h))
}

func (this *QMediaServiceProviderHint) Type() QMediaServiceProviderHint__Type {
	defer runtime.KeepAlive(this)
	return (QMediaServiceProviderHint__Type)(C.QMediaServiceProviderHint_type(this.h))
}

func (this *QMediaServiceProviderHint) MimeType() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QMediaServiceProviderHint_mimeType(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaServiceProviderHint) Codecs() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QMediaServiceProviderHint_codecs(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QMediaServiceProviderHint) Device() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QMediaServiceProviderHint_device(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMediaServiceProviderHint) CameraPosition() QCamera__Position {
	defer runtime.KeepAlive(this)
	return (QCamera__Position)(C.QMediaServiceProviderHint_cameraPosition(this.h))
}

func (this *QMediaServiceProviderHint) Features() QMediaServiceProviderHint__Feature {
	defer runtime.KeepAlive(this)
	return (QMediaServiceProviderHint__Feature)(C.QMediaServiceProviderHint_features(this.h))
}

// Delete this object from C++ memory.
func (this *QMediaServiceProviderHint) Delete() {
	C.QMediaServiceProviderHint_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMediaServiceProviderHint) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaServiceProviderHint_delete((*C.QMediaServiceProviderHint)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMediaServiceProviderFactoryInterface struct {
	h  *C.QMediaServiceProviderFactoryInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaServiceProviderFactoryInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQMediaServiceProviderFactoryInterface constructs the type using only CGO pointers.
func newQMediaServiceProviderFactoryInterface(h *C.QMediaServiceProviderFactoryInterface) *QMediaServiceProviderFactoryInterface {
	if h == nil {
		return nil
	}

	return &QMediaServiceProviderFactoryInterface{h: h}
}

// UnsafeNewQMediaServiceProviderFactoryInterface constructs the type using only unsafe pointers.
func UnsafeNewQMediaServiceProviderFactoryInterface(h unsafe.Pointer) *QMediaServiceProviderFactoryInterface {
	return newQMediaServiceProviderFactoryInterface((*C.QMediaServiceProviderFactoryInterface)(h))
}

func (this *QMediaServiceProviderFactoryInterface) Create(key string) *QMediaService {
	defer runtime.KeepAlive(this)
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return newQMediaService(C.QMediaServiceProviderFactoryInterface_create(this.h, key_ms))
}

func (this *QMediaServiceProviderFactoryInterface) Release(service *QMediaService) {
	defer runtime.KeepAlive(this)
	C.QMediaServiceProviderFactoryInterface_release(this.h, service.cPointer())
}

func (this *QMediaServiceProviderFactoryInterface) OperatorAssign(param1 *QMediaServiceProviderFactoryInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMediaServiceProviderFactoryInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceProviderFactoryInterface) Delete() {
	C.QMediaServiceProviderFactoryInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMediaServiceProviderFactoryInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaServiceProviderFactoryInterface_delete((*C.QMediaServiceProviderFactoryInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMediaServiceSupportedFormatsInterface struct {
	h  *C.QMediaServiceSupportedFormatsInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaServiceSupportedFormatsInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQMediaServiceSupportedFormatsInterface constructs the type using only CGO pointers.
func newQMediaServiceSupportedFormatsInterface(h *C.QMediaServiceSupportedFormatsInterface) *QMediaServiceSupportedFormatsInterface {
	if h == nil {
		return nil
	}

	return &QMediaServiceSupportedFormatsInterface{h: h}
}

// UnsafeNewQMediaServiceSupportedFormatsInterface constructs the type using only unsafe pointers.
func UnsafeNewQMediaServiceSupportedFormatsInterface(h unsafe.Pointer) *QMediaServiceSupportedFormatsInterface {
	return newQMediaServiceSupportedFormatsInterface((*C.QMediaServiceSupportedFormatsInterface)(h))
}

func (this *QMediaServiceSupportedFormatsInterface) HasSupport(mimeType string, codecs []string) QMultimedia__SupportEstimate {
	defer runtime.KeepAlive(this)
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	codecs_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(codecs))))
	defer C.free(unsafe.Pointer(codecs_CArray_ptr))
	codecs_CArray := unsafe.Slice(codecs_CArray_ptr, len(codecs))
	for i := range codecs {
		codecs_i_ms := C.struct_miqt_string{}
		codecs_i_ms.data = C.CString(codecs[i])
		codecs_i_ms.len = C.size_t(len(codecs[i]))
		defer C.free(unsafe.Pointer(codecs_i_ms.data))
		codecs_CArray[i] = codecs_i_ms
	}
	codecs_ma := C.struct_miqt_array{len: C.size_t(len(codecs)), data: unsafe.Pointer(codecs_CArray_ptr)}
	return (QMultimedia__SupportEstimate)(C.QMediaServiceSupportedFormatsInterface_hasSupport(this.h, mimeType_ms, codecs_ma))
}

func (this *QMediaServiceSupportedFormatsInterface) SupportedMimeTypes() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QMediaServiceSupportedFormatsInterface_supportedMimeTypes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QMediaServiceSupportedFormatsInterface) OperatorAssign(param1 *QMediaServiceSupportedFormatsInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMediaServiceSupportedFormatsInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceSupportedFormatsInterface) Delete() {
	C.QMediaServiceSupportedFormatsInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMediaServiceSupportedFormatsInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaServiceSupportedFormatsInterface_delete((*C.QMediaServiceSupportedFormatsInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMediaServiceSupportedDevicesInterface struct {
	h  *C.QMediaServiceSupportedDevicesInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaServiceSupportedDevicesInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQMediaServiceSupportedDevicesInterface constructs the type using only CGO pointers.
func newQMediaServiceSupportedDevicesInterface(h *C.QMediaServiceSupportedDevicesInterface) *QMediaServiceSupportedDevicesInterface {
	if h == nil {
		return nil
	}

	return &QMediaServiceSupportedDevicesInterface{h: h}
}

// UnsafeNewQMediaServiceSupportedDevicesInterface constructs the type using only unsafe pointers.
func UnsafeNewQMediaServiceSupportedDevicesInterface(h unsafe.Pointer) *QMediaServiceSupportedDevicesInterface {
	return newQMediaServiceSupportedDevicesInterface((*C.QMediaServiceSupportedDevicesInterface)(h))
}

func (this *QMediaServiceSupportedDevicesInterface) Devices(service []byte) [][]byte {
	defer runtime.KeepAlive(this)
	service_alias := C.struct_miqt_string{}
	if len(service) > 0 {
		service_alias.data = (*C.char)(unsafe.Pointer(&service[0]))
	} else {
		service_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	service_alias.len = C.size_t(len(service))
	var _ma C.struct_miqt_array = C.QMediaServiceSupportedDevicesInterface_devices(this.h, service_alias)
	_ret := make([][]byte, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QMediaServiceSupportedDevicesInterface) DeviceDescription(service []byte, device []byte) string {
	defer runtime.KeepAlive(this)
	service_alias := C.struct_miqt_string{}
	if len(service) > 0 {
		service_alias.data = (*C.char)(unsafe.Pointer(&service[0]))
	} else {
		service_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	service_alias.len = C.size_t(len(service))
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	var _ms C.struct_miqt_string = C.QMediaServiceSupportedDevicesInterface_deviceDescription(this.h, service_alias, device_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaServiceSupportedDevicesInterface) OperatorAssign(param1 *QMediaServiceSupportedDevicesInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMediaServiceSupportedDevicesInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceSupportedDevicesInterface) Delete() {
	C.QMediaServiceSupportedDevicesInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMediaServiceSupportedDevicesInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaServiceSupportedDevicesInterface_delete((*C.QMediaServiceSupportedDevicesInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMediaServiceDefaultDeviceInterface struct {
	h  *C.QMediaServiceDefaultDeviceInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaServiceDefaultDeviceInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQMediaServiceDefaultDeviceInterface constructs the type using only CGO pointers.
func newQMediaServiceDefaultDeviceInterface(h *C.QMediaServiceDefaultDeviceInterface) *QMediaServiceDefaultDeviceInterface {
	if h == nil {
		return nil
	}

	return &QMediaServiceDefaultDeviceInterface{h: h}
}

// UnsafeNewQMediaServiceDefaultDeviceInterface constructs the type using only unsafe pointers.
func UnsafeNewQMediaServiceDefaultDeviceInterface(h unsafe.Pointer) *QMediaServiceDefaultDeviceInterface {
	return newQMediaServiceDefaultDeviceInterface((*C.QMediaServiceDefaultDeviceInterface)(h))
}

func (this *QMediaServiceDefaultDeviceInterface) DefaultDevice(service []byte) []byte {
	defer runtime.KeepAlive(this)
	service_alias := C.struct_miqt_string{}
	if len(service) > 0 {
		service_alias.data = (*C.char)(unsafe.Pointer(&service[0]))
	} else {
		service_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	service_alias.len = C.size_t(len(service))
	var _bytearray C.struct_miqt_string = C.QMediaServiceDefaultDeviceInterface_defaultDevice(this.h, service_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMediaServiceDefaultDeviceInterface) OperatorAssign(param1 *QMediaServiceDefaultDeviceInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMediaServiceDefaultDeviceInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceDefaultDeviceInterface) Delete() {
	C.QMediaServiceDefaultDeviceInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMediaServiceDefaultDeviceInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaServiceDefaultDeviceInterface_delete((*C.QMediaServiceDefaultDeviceInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMediaServiceCameraInfoInterface struct {
	h  *C.QMediaServiceCameraInfoInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaServiceCameraInfoInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQMediaServiceCameraInfoInterface constructs the type using only CGO pointers.
func newQMediaServiceCameraInfoInterface(h *C.QMediaServiceCameraInfoInterface) *QMediaServiceCameraInfoInterface {
	if h == nil {
		return nil
	}

	return &QMediaServiceCameraInfoInterface{h: h}
}

// UnsafeNewQMediaServiceCameraInfoInterface constructs the type using only unsafe pointers.
func UnsafeNewQMediaServiceCameraInfoInterface(h unsafe.Pointer) *QMediaServiceCameraInfoInterface {
	return newQMediaServiceCameraInfoInterface((*C.QMediaServiceCameraInfoInterface)(h))
}

func (this *QMediaServiceCameraInfoInterface) CameraPosition(device []byte) QCamera__Position {
	defer runtime.KeepAlive(this)
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	return (QCamera__Position)(C.QMediaServiceCameraInfoInterface_cameraPosition(this.h, device_alias))
}

func (this *QMediaServiceCameraInfoInterface) CameraOrientation(device []byte) int {
	defer runtime.KeepAlive(this)
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	return (int)(C.QMediaServiceCameraInfoInterface_cameraOrientation(this.h, device_alias))
}

func (this *QMediaServiceCameraInfoInterface) OperatorAssign(param1 *QMediaServiceCameraInfoInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMediaServiceCameraInfoInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceCameraInfoInterface) Delete() {
	C.QMediaServiceCameraInfoInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMediaServiceCameraInfoInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaServiceCameraInfoInterface_delete((*C.QMediaServiceCameraInfoInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMediaServiceFeaturesInterface struct {
	h  *C.QMediaServiceFeaturesInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaServiceFeaturesInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQMediaServiceFeaturesInterface constructs the type using only CGO pointers.
func newQMediaServiceFeaturesInterface(h *C.QMediaServiceFeaturesInterface) *QMediaServiceFeaturesInterface {
	if h == nil {
		return nil
	}

	return &QMediaServiceFeaturesInterface{h: h}
}

// UnsafeNewQMediaServiceFeaturesInterface constructs the type using only unsafe pointers.
func UnsafeNewQMediaServiceFeaturesInterface(h unsafe.Pointer) *QMediaServiceFeaturesInterface {
	return newQMediaServiceFeaturesInterface((*C.QMediaServiceFeaturesInterface)(h))
}

func (this *QMediaServiceFeaturesInterface) SupportedFeatures(service []byte) QMediaServiceProviderHint__Feature {
	defer runtime.KeepAlive(this)
	service_alias := C.struct_miqt_string{}
	if len(service) > 0 {
		service_alias.data = (*C.char)(unsafe.Pointer(&service[0]))
	} else {
		service_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	service_alias.len = C.size_t(len(service))
	return (QMediaServiceProviderHint__Feature)(C.QMediaServiceFeaturesInterface_supportedFeatures(this.h, service_alias))
}

func (this *QMediaServiceFeaturesInterface) OperatorAssign(param1 *QMediaServiceFeaturesInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMediaServiceFeaturesInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMediaServiceFeaturesInterface) Delete() {
	C.QMediaServiceFeaturesInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMediaServiceFeaturesInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaServiceFeaturesInterface_delete((*C.QMediaServiceFeaturesInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMediaServiceProviderPlugin struct {
	h  *C.QMediaServiceProviderPlugin
	gc *[1]unsafe.Pointer
	*qt.QObject
	*QMediaServiceProviderFactoryInterface
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaServiceProviderPlugin) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QMediaServiceProviderFactoryInterface.miqtSetGC(gc)
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

// newQMediaServiceProviderPlugin constructs the type using only CGO pointers.
func newQMediaServiceProviderPlugin(h *C.QMediaServiceProviderPlugin) *QMediaServiceProviderPlugin {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QMediaServiceProviderFactoryInterface *C.QMediaServiceProviderFactoryInterface = nil
	C.QMediaServiceProviderPlugin_virtbase(h, &outptr_QObject, &outptr_QMediaServiceProviderFactoryInterface)

	return &QMediaServiceProviderPlugin{h: h,
		QObject:                               qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject)),
		QMediaServiceProviderFactoryInterface: newQMediaServiceProviderFactoryInterface(outptr_QMediaServiceProviderFactoryInterface)}
}

// UnsafeNewQMediaServiceProviderPlugin constructs the type using only unsafe pointers.
func UnsafeNewQMediaServiceProviderPlugin(h unsafe.Pointer) *QMediaServiceProviderPlugin {
	return newQMediaServiceProviderPlugin((*C.QMediaServiceProviderPlugin)(h))
}

func (this *QMediaServiceProviderPlugin) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaServiceProviderPlugin_metaObject(this.h)))
}

func (this *QMediaServiceProviderPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaServiceProviderPlugin_metacast(this.h, param1_Cstring))
}

func QMediaServiceProviderPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaServiceProviderPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaServiceProviderPlugin) Create(key string) *QMediaService {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return newQMediaService(C.QMediaServiceProviderPlugin_create(this.h, key_ms))
}

func (this *QMediaServiceProviderPlugin) Release(service *QMediaService) {
	C.QMediaServiceProviderPlugin_release(this.h, service.cPointer())
}

func QMediaServiceProviderPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaServiceProviderPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaServiceProviderPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaServiceProviderPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaServiceProviderPlugin_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaServiceProviderPlugin) Delete() {
	C.QMediaServiceProviderPlugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
// This is a QObject class, so this is unsupported: the bindings do not
// keep it alive during calls into C++, and its parent may delete it.
func (this *QMediaServiceProviderPlugin) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaServiceProviderPlugin_delete((*C.QMediaServiceProviderPlugin)(gc[0]))
	})
	this.miqtSetGC(gc)
}
