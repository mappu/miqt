package multimedia

/*

#include "gen_qcamerainfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCameraInfo struct {
	h *C.QCameraInfo
}

func (this *QCameraInfo) cPointer() *C.QCameraInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraInfo constructs the type using only CGO pointers.
func newQCameraInfo(h *C.QCameraInfo) *QCameraInfo {
	if h == nil {
		return nil
	}

	return &QCameraInfo{h: h}
}

// UnsafeNewQCameraInfo constructs the type using only unsafe pointers.
func UnsafeNewQCameraInfo(h unsafe.Pointer) *QCameraInfo {
	return newQCameraInfo((*C.QCameraInfo)(h))
}

// NewQCameraInfo constructs a new QCameraInfo object.
func NewQCameraInfo() *QCameraInfo {

	return newQCameraInfo(C.QCameraInfo_new())
}

// NewQCameraInfo2 constructs a new QCameraInfo object.
func NewQCameraInfo2(camera *QCamera) *QCameraInfo {

	return newQCameraInfo(C.QCameraInfo_new2(camera.cPointer()))
}

// NewQCameraInfo3 constructs a new QCameraInfo object.
func NewQCameraInfo3(other *QCameraInfo) *QCameraInfo {

	return newQCameraInfo(C.QCameraInfo_new3(other.cPointer()))
}

// NewQCameraInfo4 constructs a new QCameraInfo object.
func NewQCameraInfo4(name []byte) *QCameraInfo {
	name_alias := C.struct_miqt_string{}
	name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	name_alias.len = C.size_t(len(name))

	return newQCameraInfo(C.QCameraInfo_new4(name_alias))
}

func (this *QCameraInfo) OperatorAssign(other *QCameraInfo) {
	C.QCameraInfo_OperatorAssign(this.h, other.cPointer())
}

func (this *QCameraInfo) OperatorEqual(other *QCameraInfo) bool {
	return (bool)(C.QCameraInfo_OperatorEqual(this.h, other.cPointer()))
}

func (this *QCameraInfo) OperatorNotEqual(other *QCameraInfo) bool {
	return (bool)(C.QCameraInfo_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QCameraInfo) IsNull() bool {
	return (bool)(C.QCameraInfo_IsNull(this.h))
}

func (this *QCameraInfo) DeviceName() string {
	var _ms C.struct_miqt_string = C.QCameraInfo_DeviceName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraInfo) Description() string {
	var _ms C.struct_miqt_string = C.QCameraInfo_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraInfo) Position() QCamera__Position {
	return (QCamera__Position)(C.QCameraInfo_Position(this.h))
}

func (this *QCameraInfo) Orientation() int {
	return (int)(C.QCameraInfo_Orientation(this.h))
}

func QCameraInfo_DefaultCamera() *QCameraInfo {
	_goptr := newQCameraInfo(C.QCameraInfo_DefaultCamera())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCameraInfo_AvailableCameras() []QCameraInfo {
	var _ma C.struct_miqt_array = C.QCameraInfo_AvailableCameras()
	_ret := make([]QCameraInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QCameraInfo_AvailableCameras1(position QCamera__Position) []QCameraInfo {
	var _ma C.struct_miqt_array = C.QCameraInfo_AvailableCameras1((C.int)(position))
	_ret := make([]QCameraInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraInfo) Delete() {
	C.QCameraInfo_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
