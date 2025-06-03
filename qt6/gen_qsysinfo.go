package qt6

/*

#include "gen_qsysinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSysInfo__Sizes int

const (
	QSysInfo__WordSize QSysInfo__Sizes = 64
)

type QSysInfo__Endian int

const (
	QSysInfo__BigEndian    QSysInfo__Endian = 0
	QSysInfo__LittleEndian QSysInfo__Endian = 1
	QSysInfo__ByteOrder    QSysInfo__Endian = 1
)

type QSysInfo struct {
	h *C.QSysInfo
}

func (this *QSysInfo) cPointer() *C.QSysInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSysInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSysInfo constructs the type using only CGO pointers.
func newQSysInfo(h *C.QSysInfo) *QSysInfo {
	if h == nil {
		return nil
	}

	return &QSysInfo{h: h}
}

// UnsafeNewQSysInfo constructs the type using only unsafe pointers.
func UnsafeNewQSysInfo(h unsafe.Pointer) *QSysInfo {
	return newQSysInfo((*C.QSysInfo)(h))
}

func QSysInfo_BuildCpuArchitecture() string {
	var _ms C.struct_miqt_string = C.QSysInfo_buildCpuArchitecture()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSysInfo_CurrentCpuArchitecture() string {
	var _ms C.struct_miqt_string = C.QSysInfo_currentCpuArchitecture()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSysInfo_BuildAbi() string {
	var _ms C.struct_miqt_string = C.QSysInfo_buildAbi()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSysInfo_KernelType() string {
	var _ms C.struct_miqt_string = C.QSysInfo_kernelType()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSysInfo_KernelVersion() string {
	var _ms C.struct_miqt_string = C.QSysInfo_kernelVersion()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSysInfo_ProductType() string {
	var _ms C.struct_miqt_string = C.QSysInfo_productType()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSysInfo_ProductVersion() string {
	var _ms C.struct_miqt_string = C.QSysInfo_productVersion()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSysInfo_PrettyProductName() string {
	var _ms C.struct_miqt_string = C.QSysInfo_prettyProductName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSysInfo_MachineHostName() string {
	var _ms C.struct_miqt_string = C.QSysInfo_machineHostName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSysInfo_MachineUniqueId() []byte {
	var _bytearray C.struct_miqt_string = C.QSysInfo_machineUniqueId()
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QSysInfo_BootUniqueId() []byte {
	var _bytearray C.struct_miqt_string = C.QSysInfo_bootUniqueId()
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSysInfo) Delete() {
	C.QSysInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSysInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QSysInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
