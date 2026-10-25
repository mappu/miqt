package qt6

/*

#include "gen_qstorageinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStorageInfo struct {
	h  *C.QStorageInfo
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStorageInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QStorageInfo) cPointer() *C.QStorageInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStorageInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStorageInfo constructs the type using only CGO pointers.
func newQStorageInfo(h *C.QStorageInfo) *QStorageInfo {
	if h == nil {
		return nil
	}

	return &QStorageInfo{h: h}
}

// UnsafeNewQStorageInfo constructs the type using only unsafe pointers.
func UnsafeNewQStorageInfo(h unsafe.Pointer) *QStorageInfo {
	return newQStorageInfo((*C.QStorageInfo)(h))
}

// NewQStorageInfo constructs a new QStorageInfo object.
func NewQStorageInfo() *QStorageInfo {

	return newQStorageInfo(C.QStorageInfo_new())
}

// NewQStorageInfo2 constructs a new QStorageInfo object.
func NewQStorageInfo2(path string) *QStorageInfo {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))

	return newQStorageInfo(C.QStorageInfo_new2(path_ms))
}

// NewQStorageInfo3 constructs a new QStorageInfo object.
func NewQStorageInfo3(dir *QDir) *QStorageInfo {
	defer runtime.KeepAlive(dir)

	return newQStorageInfo(C.QStorageInfo_new3(dir.cPointer()))
}

// NewQStorageInfo4 constructs a new QStorageInfo object.
func NewQStorageInfo4(other *QStorageInfo) *QStorageInfo {
	defer runtime.KeepAlive(other)

	return newQStorageInfo(C.QStorageInfo_new4(other.cPointer()))
}

func (this *QStorageInfo) OperatorAssign(other *QStorageInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QStorageInfo_operatorAssign(this.h, other.cPointer())
}

func (this *QStorageInfo) Swap(other *QStorageInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QStorageInfo_swap(this.h, other.cPointer())
}

func (this *QStorageInfo) SetPath(path string) {
	defer runtime.KeepAlive(this)
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QStorageInfo_setPath(this.h, path_ms)
}

func (this *QStorageInfo) RootPath() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QStorageInfo_rootPath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStorageInfo) Device() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QStorageInfo_device(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QStorageInfo) Subvolume() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QStorageInfo_subvolume(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QStorageInfo) FileSystemType() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QStorageInfo_fileSystemType(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QStorageInfo) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QStorageInfo_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStorageInfo) DisplayName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QStorageInfo_displayName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStorageInfo) BytesTotal() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QStorageInfo_bytesTotal(this.h))
}

func (this *QStorageInfo) BytesFree() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QStorageInfo_bytesFree(this.h))
}

func (this *QStorageInfo) BytesAvailable() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QStorageInfo_bytesAvailable(this.h))
}

func (this *QStorageInfo) BlockSize() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStorageInfo_blockSize(this.h))
}

func (this *QStorageInfo) IsRoot() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStorageInfo_isRoot(this.h))
}

func (this *QStorageInfo) IsReadOnly() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStorageInfo_isReadOnly(this.h))
}

func (this *QStorageInfo) IsReady() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStorageInfo_isReady(this.h))
}

func (this *QStorageInfo) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStorageInfo_isValid(this.h))
}

func (this *QStorageInfo) Refresh() {
	defer runtime.KeepAlive(this)
	C.QStorageInfo_refresh(this.h)
}

func QStorageInfo_MountedVolumes() []QStorageInfo {
	var _ma C.struct_miqt_array = C.QStorageInfo_mountedVolumes()
	_ret := make([]QStorageInfo, int(_ma.len))
	_outCast := unsafe.Slice((**C.QStorageInfo)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQStorageInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QStorageInfo_Root() *QStorageInfo {
	_goptr := newQStorageInfo(C.QStorageInfo_root())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStorageInfo) Delete() {
	C.QStorageInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStorageInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStorageInfo_delete((*C.QStorageInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}
