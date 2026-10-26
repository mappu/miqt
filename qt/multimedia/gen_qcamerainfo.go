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
	h  *C.QCameraInfo
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QCameraInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(other)

	return newQCameraInfo(C.QCameraInfo_new3(other.cPointer()))
}

// NewQCameraInfo4 constructs a new QCameraInfo object.
func NewQCameraInfo4(name []byte) *QCameraInfo {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))

	return newQCameraInfo(C.QCameraInfo_new4(name_alias))
}

func (this *QCameraInfo) OperatorAssign(other *QCameraInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QCameraInfo_operatorAssign(this.h, other.cPointer())
}

func (this *QCameraInfo) OperatorEqual(other *QCameraInfo) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QCameraInfo_operatorEqual(this.h, other.cPointer()))
}

func (this *QCameraInfo) OperatorNotEqual(other *QCameraInfo) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QCameraInfo_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QCameraInfo) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QCameraInfo_isNull(this.h))
}

func (this *QCameraInfo) DeviceName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QCameraInfo_deviceName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraInfo) Description() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QCameraInfo_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraInfo) Position() QCamera__Position {
	defer runtime.KeepAlive(this)
	return (QCamera__Position)(C.QCameraInfo_position(this.h))
}

func (this *QCameraInfo) Orientation() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QCameraInfo_orientation(this.h))
}

func QCameraInfo_DefaultCamera() *QCameraInfo {
	_goptr := newQCameraInfo(C.QCameraInfo_defaultCamera())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCameraInfo_AvailableCameras() []QCameraInfo {
	var _ma C.struct_miqt_array = C.QCameraInfo_availableCameras()
	_ret := make([]QCameraInfo, int(_ma.len))
	_outCast := unsafe.Slice((**C.QCameraInfo)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QCameraInfo_AvailableCamerasWithPosition(position QCamera__Position) []QCameraInfo {
	var _ma C.struct_miqt_array = C.QCameraInfo_availableCamerasWithPosition((C.int)(position))
	_ret := make([]QCameraInfo, int(_ma.len))
	_outCast := unsafe.Slice((**C.QCameraInfo)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraInfo) Delete() {
	C.QCameraInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QCameraInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QCameraInfo_delete((*C.QCameraInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}
