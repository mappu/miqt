package qt

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
	h *C.QStorageInfo
}

func (this *QStorageInfo) cPointer() *C.QStorageInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStorageInfo(h *C.QStorageInfo) *QStorageInfo {
	if h == nil {
		return nil
	}
	return &QStorageInfo{h: h}
}

func newQStorageInfo_U(h unsafe.Pointer) *QStorageInfo {
	return newQStorageInfo((*C.QStorageInfo)(h))
}

// NewQStorageInfo constructs a new QStorageInfo object.
func NewQStorageInfo() *QStorageInfo {
	ret := C.QStorageInfo_new()
	return newQStorageInfo(ret)
}

// NewQStorageInfo2 constructs a new QStorageInfo object.
func NewQStorageInfo2(path string) *QStorageInfo {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	ret := C.QStorageInfo_new2((*C.struct_miqt_string)(path_ms))
	return newQStorageInfo(ret)
}

// NewQStorageInfo3 constructs a new QStorageInfo object.
func NewQStorageInfo3(dir *QDir) *QStorageInfo {
	ret := C.QStorageInfo_new3(dir.cPointer())
	return newQStorageInfo(ret)
}

// NewQStorageInfo4 constructs a new QStorageInfo object.
func NewQStorageInfo4(other *QStorageInfo) *QStorageInfo {
	ret := C.QStorageInfo_new4(other.cPointer())
	return newQStorageInfo(ret)
}

func (this *QStorageInfo) OperatorAssign(other *QStorageInfo) {
	C.QStorageInfo_OperatorAssign(this.h, other.cPointer())
}

func (this *QStorageInfo) Swap(other *QStorageInfo) {
	C.QStorageInfo_Swap(this.h, other.cPointer())
}

func (this *QStorageInfo) SetPath(path string) {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	C.QStorageInfo_SetPath(this.h, (*C.struct_miqt_string)(path_ms))
}

func (this *QStorageInfo) RootPath() string {
	var _ms *C.struct_miqt_string = C.QStorageInfo_RootPath(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStorageInfo) Device() *QByteArray {
	_ret := C.QStorageInfo_Device(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStorageInfo) Subvolume() *QByteArray {
	_ret := C.QStorageInfo_Subvolume(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStorageInfo) FileSystemType() *QByteArray {
	_ret := C.QStorageInfo_FileSystemType(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStorageInfo) Name() string {
	var _ms *C.struct_miqt_string = C.QStorageInfo_Name(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStorageInfo) DisplayName() string {
	var _ms *C.struct_miqt_string = C.QStorageInfo_DisplayName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStorageInfo) BytesTotal() int64 {
	return (int64)(C.QStorageInfo_BytesTotal(this.h))
}

func (this *QStorageInfo) BytesFree() int64 {
	return (int64)(C.QStorageInfo_BytesFree(this.h))
}

func (this *QStorageInfo) BytesAvailable() int64 {
	return (int64)(C.QStorageInfo_BytesAvailable(this.h))
}

func (this *QStorageInfo) BlockSize() int {
	return (int)(C.QStorageInfo_BlockSize(this.h))
}

func (this *QStorageInfo) IsRoot() bool {
	return (bool)(C.QStorageInfo_IsRoot(this.h))
}

func (this *QStorageInfo) IsReadOnly() bool {
	return (bool)(C.QStorageInfo_IsReadOnly(this.h))
}

func (this *QStorageInfo) IsReady() bool {
	return (bool)(C.QStorageInfo_IsReady(this.h))
}

func (this *QStorageInfo) IsValid() bool {
	return (bool)(C.QStorageInfo_IsValid(this.h))
}

func (this *QStorageInfo) Refresh() {
	C.QStorageInfo_Refresh(this.h)
}

func QStorageInfo_MountedVolumes() []QStorageInfo {
	var _ma *C.struct_miqt_array = C.QStorageInfo_MountedVolumes()
	_ret := make([]QStorageInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QStorageInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQStorageInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QStorageInfo_Root() *QStorageInfo {
	_ret := C.QStorageInfo_Root()
	_goptr := newQStorageInfo(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStorageInfo) Delete() {
	C.QStorageInfo_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStorageInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QStorageInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
