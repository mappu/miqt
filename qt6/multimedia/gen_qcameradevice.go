package multimedia

/*

#include "gen_qcameradevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QCameraDevice__Position int

const (
	QCameraDevice__UnspecifiedPosition QCameraDevice__Position = 0
	QCameraDevice__BackFace            QCameraDevice__Position = 1
	QCameraDevice__FrontFace           QCameraDevice__Position = 2
)

type QCameraFormat struct {
	h  *C.QCameraFormat
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QCameraFormat) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QCameraFormat) cPointer() *C.QCameraFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraFormat constructs the type using only CGO pointers.
func newQCameraFormat(h *C.QCameraFormat) *QCameraFormat {
	if h == nil {
		return nil
	}

	return &QCameraFormat{h: h}
}

// UnsafeNewQCameraFormat constructs the type using only unsafe pointers.
func UnsafeNewQCameraFormat(h unsafe.Pointer) *QCameraFormat {
	return newQCameraFormat((*C.QCameraFormat)(h))
}

// NewQCameraFormat constructs a new QCameraFormat object.
func NewQCameraFormat() *QCameraFormat {

	return newQCameraFormat(C.QCameraFormat_new())
}

// NewQCameraFormat2 constructs a new QCameraFormat object.
func NewQCameraFormat2(other *QCameraFormat) *QCameraFormat {
	defer runtime.KeepAlive(other)

	return newQCameraFormat(C.QCameraFormat_new2(other.cPointer()))
}

func (this *QCameraFormat) OperatorAssign(other *QCameraFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QCameraFormat_operatorAssign(this.h, other.cPointer())
}

func (this *QCameraFormat) PixelFormat() QVideoFrameFormat__PixelFormat {
	defer runtime.KeepAlive(this)
	return (QVideoFrameFormat__PixelFormat)(C.QCameraFormat_pixelFormat(this.h))
}

func (this *QCameraFormat) Resolution() qt6.QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt6.QSize](C.QCameraFormat_resolution(this.h))
}

func (this *QCameraFormat) MinFrameRate() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QCameraFormat_minFrameRate(this.h))
}

func (this *QCameraFormat) MaxFrameRate() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QCameraFormat_maxFrameRate(this.h))
}

func (this *QCameraFormat) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QCameraFormat_isNull(this.h))
}

func (this *QCameraFormat) OperatorEqual(other *QCameraFormat) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QCameraFormat_operatorEqual(this.h, other.cPointer()))
}

func (this *QCameraFormat) OperatorNotEqual(other *QCameraFormat) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QCameraFormat_operatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCameraFormat) Delete() {
	C.QCameraFormat_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QCameraFormat) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QCameraFormat_delete((*C.QCameraFormat)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QCameraDevice struct {
	h  *C.QCameraDevice
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QCameraDevice) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QCameraDevice) cPointer() *C.QCameraDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraDevice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraDevice constructs the type using only CGO pointers.
func newQCameraDevice(h *C.QCameraDevice) *QCameraDevice {
	if h == nil {
		return nil
	}

	return &QCameraDevice{h: h}
}

// UnsafeNewQCameraDevice constructs the type using only unsafe pointers.
func UnsafeNewQCameraDevice(h unsafe.Pointer) *QCameraDevice {
	return newQCameraDevice((*C.QCameraDevice)(h))
}

// NewQCameraDevice constructs a new QCameraDevice object.
func NewQCameraDevice() *QCameraDevice {

	return newQCameraDevice(C.QCameraDevice_new())
}

// NewQCameraDevice2 constructs a new QCameraDevice object.
func NewQCameraDevice2(other *QCameraDevice) *QCameraDevice {
	defer runtime.KeepAlive(other)

	return newQCameraDevice(C.QCameraDevice_new2(other.cPointer()))
}

func (this *QCameraDevice) OperatorAssign(other *QCameraDevice) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QCameraDevice_operatorAssign(this.h, other.cPointer())
}

func (this *QCameraDevice) OperatorEqual(other *QCameraDevice) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QCameraDevice_operatorEqual(this.h, other.cPointer()))
}

func (this *QCameraDevice) OperatorNotEqual(other *QCameraDevice) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QCameraDevice_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QCameraDevice) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QCameraDevice_isNull(this.h))
}

func (this *QCameraDevice) Id() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QCameraDevice_id(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCameraDevice) Description() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QCameraDevice_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraDevice) IsDefault() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QCameraDevice_isDefault(this.h))
}

func (this *QCameraDevice) Position() QCameraDevice__Position {
	defer runtime.KeepAlive(this)
	return (QCameraDevice__Position)(C.QCameraDevice_position(this.h))
}

func (this *QCameraDevice) PhotoResolutions() []qt6.QSize {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QCameraDevice_photoResolutions(this.h)
	_ret := make([]qt6.QSize, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_qsize)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = libmiqt.ValueCast[qt6.QSize](_outCast[i])
	}
	return _ret
}

func (this *QCameraDevice) VideoFormats() []QCameraFormat {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QCameraDevice_videoFormats(this.h)
	_ret := make([]QCameraFormat, int(_ma.len))
	_outCast := unsafe.Slice((**C.QCameraFormat)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraFormat(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraDevice) Delete() {
	C.QCameraDevice_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QCameraDevice) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QCameraDevice_delete((*C.QCameraDevice)(gc[0]))
	})
	this.miqtSetGC(gc)
}
