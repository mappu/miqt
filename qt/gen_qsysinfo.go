package qt

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

type QSysInfo__WinVersion int

const (
	QSysInfo__WV_None       QSysInfo__WinVersion = 0
	QSysInfo__WV_32s        QSysInfo__WinVersion = 1
	QSysInfo__WV_95         QSysInfo__WinVersion = 2
	QSysInfo__WV_98         QSysInfo__WinVersion = 3
	QSysInfo__WV_Me         QSysInfo__WinVersion = 4
	QSysInfo__WV_DOS_based  QSysInfo__WinVersion = 15
	QSysInfo__WV_NT         QSysInfo__WinVersion = 16
	QSysInfo__WV_2000       QSysInfo__WinVersion = 32
	QSysInfo__WV_XP         QSysInfo__WinVersion = 48
	QSysInfo__WV_2003       QSysInfo__WinVersion = 64
	QSysInfo__WV_VISTA      QSysInfo__WinVersion = 128
	QSysInfo__WV_WINDOWS7   QSysInfo__WinVersion = 144
	QSysInfo__WV_WINDOWS8   QSysInfo__WinVersion = 160
	QSysInfo__WV_WINDOWS8_1 QSysInfo__WinVersion = 176
	QSysInfo__WV_WINDOWS10  QSysInfo__WinVersion = 192
	QSysInfo__WV_NT_based   QSysInfo__WinVersion = 240
	QSysInfo__WV_4_0        QSysInfo__WinVersion = 16
	QSysInfo__WV_5_0        QSysInfo__WinVersion = 32
	QSysInfo__WV_5_1        QSysInfo__WinVersion = 48
	QSysInfo__WV_5_2        QSysInfo__WinVersion = 64
	QSysInfo__WV_6_0        QSysInfo__WinVersion = 128
	QSysInfo__WV_6_1        QSysInfo__WinVersion = 144
	QSysInfo__WV_6_2        QSysInfo__WinVersion = 160
	QSysInfo__WV_6_3        QSysInfo__WinVersion = 176
	QSysInfo__WV_10_0       QSysInfo__WinVersion = 192
	QSysInfo__WV_CE         QSysInfo__WinVersion = 256
	QSysInfo__WV_CENET      QSysInfo__WinVersion = 512
	QSysInfo__WV_CE_5       QSysInfo__WinVersion = 768
	QSysInfo__WV_CE_6       QSysInfo__WinVersion = 1024
	QSysInfo__WV_CE_based   QSysInfo__WinVersion = 3840
)

type QSysInfo__MacVersion int

const (
	QSysInfo__MV_None         QSysInfo__MacVersion = 65535
	QSysInfo__MV_Unknown      QSysInfo__MacVersion = 0
	QSysInfo__MV_9            QSysInfo__MacVersion = 1
	QSysInfo__MV_10_0         QSysInfo__MacVersion = 2
	QSysInfo__MV_10_1         QSysInfo__MacVersion = 3
	QSysInfo__MV_10_2         QSysInfo__MacVersion = 4
	QSysInfo__MV_10_3         QSysInfo__MacVersion = 5
	QSysInfo__MV_10_4         QSysInfo__MacVersion = 6
	QSysInfo__MV_10_5         QSysInfo__MacVersion = 7
	QSysInfo__MV_10_6         QSysInfo__MacVersion = 8
	QSysInfo__MV_10_7         QSysInfo__MacVersion = 9
	QSysInfo__MV_10_8         QSysInfo__MacVersion = 10
	QSysInfo__MV_10_9         QSysInfo__MacVersion = 11
	QSysInfo__MV_10_10        QSysInfo__MacVersion = 12
	QSysInfo__MV_10_11        QSysInfo__MacVersion = 13
	QSysInfo__MV_10_12        QSysInfo__MacVersion = 14
	QSysInfo__MV_CHEETAH      QSysInfo__MacVersion = 2
	QSysInfo__MV_PUMA         QSysInfo__MacVersion = 3
	QSysInfo__MV_JAGUAR       QSysInfo__MacVersion = 4
	QSysInfo__MV_PANTHER      QSysInfo__MacVersion = 5
	QSysInfo__MV_TIGER        QSysInfo__MacVersion = 6
	QSysInfo__MV_LEOPARD      QSysInfo__MacVersion = 7
	QSysInfo__MV_SNOWLEOPARD  QSysInfo__MacVersion = 8
	QSysInfo__MV_LION         QSysInfo__MacVersion = 9
	QSysInfo__MV_MOUNTAINLION QSysInfo__MacVersion = 10
	QSysInfo__MV_MAVERICKS    QSysInfo__MacVersion = 11
	QSysInfo__MV_YOSEMITE     QSysInfo__MacVersion = 12
	QSysInfo__MV_ELCAPITAN    QSysInfo__MacVersion = 13
	QSysInfo__MV_SIERRA       QSysInfo__MacVersion = 14
	QSysInfo__MV_IOS          QSysInfo__MacVersion = 256
	QSysInfo__MV_IOS_4_3      QSysInfo__MacVersion = 323
	QSysInfo__MV_IOS_5_0      QSysInfo__MacVersion = 336
	QSysInfo__MV_IOS_5_1      QSysInfo__MacVersion = 337
	QSysInfo__MV_IOS_6_0      QSysInfo__MacVersion = 352
	QSysInfo__MV_IOS_6_1      QSysInfo__MacVersion = 353
	QSysInfo__MV_IOS_7_0      QSysInfo__MacVersion = 368
	QSysInfo__MV_IOS_7_1      QSysInfo__MacVersion = 369
	QSysInfo__MV_IOS_8_0      QSysInfo__MacVersion = 384
	QSysInfo__MV_IOS_8_1      QSysInfo__MacVersion = 385
	QSysInfo__MV_IOS_8_2      QSysInfo__MacVersion = 386
	QSysInfo__MV_IOS_8_3      QSysInfo__MacVersion = 387
	QSysInfo__MV_IOS_8_4      QSysInfo__MacVersion = 388
	QSysInfo__MV_IOS_9_0      QSysInfo__MacVersion = 400
	QSysInfo__MV_IOS_9_1      QSysInfo__MacVersion = 401
	QSysInfo__MV_IOS_9_2      QSysInfo__MacVersion = 402
	QSysInfo__MV_IOS_9_3      QSysInfo__MacVersion = 403
	QSysInfo__MV_IOS_10_0     QSysInfo__MacVersion = 416
	QSysInfo__MV_TVOS         QSysInfo__MacVersion = 512
	QSysInfo__MV_TVOS_9_0     QSysInfo__MacVersion = 656
	QSysInfo__MV_TVOS_9_1     QSysInfo__MacVersion = 657
	QSysInfo__MV_TVOS_9_2     QSysInfo__MacVersion = 658
	QSysInfo__MV_TVOS_10_0    QSysInfo__MacVersion = 672
	QSysInfo__MV_WATCHOS      QSysInfo__MacVersion = 1024
	QSysInfo__MV_WATCHOS_2_0  QSysInfo__MacVersion = 1056
	QSysInfo__MV_WATCHOS_2_1  QSysInfo__MacVersion = 1057
	QSysInfo__MV_WATCHOS_2_2  QSysInfo__MacVersion = 1058
	QSysInfo__MV_WATCHOS_3_0  QSysInfo__MacVersion = 1072
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

func QSysInfo_WindowsVersion() QSysInfo__WinVersion {
	return (QSysInfo__WinVersion)(C.QSysInfo_windowsVersion())
}

func QSysInfo_MacVersion() QSysInfo__MacVersion {
	return (QSysInfo__MacVersion)(C.QSysInfo_macVersion())
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
