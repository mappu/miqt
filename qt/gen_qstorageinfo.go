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
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QStorageInfo_new2(path_Cstring, C.ulong(len(path)))
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
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	C.QStorageInfo_SetPath(this.h, path_Cstring, C.ulong(len(path)))
}

func (this *QStorageInfo) RootPath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStorageInfo_RootPath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStorageInfo) Device() *QByteArray {
	ret := C.QStorageInfo_Device(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStorageInfo) Subvolume() *QByteArray {
	ret := C.QStorageInfo_Subvolume(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStorageInfo) FileSystemType() *QByteArray {
	ret := C.QStorageInfo_FileSystemType(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStorageInfo) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStorageInfo_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStorageInfo) DisplayName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStorageInfo_DisplayName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStorageInfo) BytesTotal() int64 {
	ret := C.QStorageInfo_BytesTotal(this.h)
	return (int64)(ret)
}

func (this *QStorageInfo) BytesFree() int64 {
	ret := C.QStorageInfo_BytesFree(this.h)
	return (int64)(ret)
}

func (this *QStorageInfo) BytesAvailable() int64 {
	ret := C.QStorageInfo_BytesAvailable(this.h)
	return (int64)(ret)
}

func (this *QStorageInfo) BlockSize() int {
	ret := C.QStorageInfo_BlockSize(this.h)
	return (int)(ret)
}

func (this *QStorageInfo) IsRoot() bool {
	ret := C.QStorageInfo_IsRoot(this.h)
	return (bool)(ret)
}

func (this *QStorageInfo) IsReadOnly() bool {
	ret := C.QStorageInfo_IsReadOnly(this.h)
	return (bool)(ret)
}

func (this *QStorageInfo) IsReady() bool {
	ret := C.QStorageInfo_IsReady(this.h)
	return (bool)(ret)
}

func (this *QStorageInfo) IsValid() bool {
	ret := C.QStorageInfo_IsValid(this.h)
	return (bool)(ret)
}

func (this *QStorageInfo) Refresh() {
	C.QStorageInfo_Refresh(this.h)
}

func QStorageInfo_MountedVolumes() []QStorageInfo {
	var _out **C.QStorageInfo = nil
	var _out_len C.size_t = 0
	C.QStorageInfo_MountedVolumes(&_out, &_out_len)
	ret := make([]QStorageInfo, int(_out_len))
	_outCast := (*[0xffff]*C.QStorageInfo)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQStorageInfo(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStorageInfo_Root() *QStorageInfo {
	ret := C.QStorageInfo_Root()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQStorageInfo(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QStorageInfo) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStorageInfo) Delete() {
	C.QStorageInfo_Delete(this.h)
}
