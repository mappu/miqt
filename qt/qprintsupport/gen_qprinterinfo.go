package qprintsupport

/*

#include "gen_qprinterinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPrinterInfo struct {
	h *C.QPrinterInfo
}

func (this *QPrinterInfo) cPointer() *C.QPrinterInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPrinterInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPrinterInfo(h *C.QPrinterInfo) *QPrinterInfo {
	if h == nil {
		return nil
	}
	return &QPrinterInfo{h: h}
}

func UnsafeNewQPrinterInfo(h unsafe.Pointer) *QPrinterInfo {
	return newQPrinterInfo((*C.QPrinterInfo)(h))
}

// NewQPrinterInfo constructs a new QPrinterInfo object.
func NewQPrinterInfo() *QPrinterInfo {
	ret := C.QPrinterInfo_new()
	return newQPrinterInfo(ret)
}

// NewQPrinterInfo2 constructs a new QPrinterInfo object.
func NewQPrinterInfo2(other *QPrinterInfo) *QPrinterInfo {
	ret := C.QPrinterInfo_new2(other.cPointer())
	return newQPrinterInfo(ret)
}

// NewQPrinterInfo3 constructs a new QPrinterInfo object.
func NewQPrinterInfo3(printer *QPrinter) *QPrinterInfo {
	ret := C.QPrinterInfo_new3(printer.cPointer())
	return newQPrinterInfo(ret)
}

func (this *QPrinterInfo) OperatorAssign(other *QPrinterInfo) {
	C.QPrinterInfo_OperatorAssign(this.h, other.cPointer())
}

func (this *QPrinterInfo) PrinterName() string {
	var _ms *C.struct_miqt_string = C.QPrinterInfo_PrinterName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPrinterInfo) Description() string {
	var _ms *C.struct_miqt_string = C.QPrinterInfo_Description(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPrinterInfo) Location() string {
	var _ms *C.struct_miqt_string = C.QPrinterInfo_Location(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPrinterInfo) MakeAndModel() string {
	var _ms *C.struct_miqt_string = C.QPrinterInfo_MakeAndModel(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPrinterInfo) IsNull() bool {
	return (bool)(C.QPrinterInfo_IsNull(this.h))
}

func (this *QPrinterInfo) IsDefault() bool {
	return (bool)(C.QPrinterInfo_IsDefault(this.h))
}

func (this *QPrinterInfo) IsRemote() bool {
	return (bool)(C.QPrinterInfo_IsRemote(this.h))
}

func (this *QPrinterInfo) State() QPrinter__PrinterState {
	return (QPrinter__PrinterState)(C.QPrinterInfo_State(this.h))
}

func (this *QPrinterInfo) SupportedPageSizes() []qt.QPageSize {
	var _ma *C.struct_miqt_array = C.QPrinterInfo_SupportedPageSizes(this.h)
	_ret := make([]qt.QPageSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QPageSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := qt.UnsafeNewQPageSize(unsafe.Pointer(_lv_ret))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QPrinterInfo) DefaultPageSize() *qt.QPageSize {
	_ret := C.QPrinterInfo_DefaultPageSize(this.h)
	_goptr := qt.UnsafeNewQPageSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinterInfo) SupportsCustomPageSizes() bool {
	return (bool)(C.QPrinterInfo_SupportsCustomPageSizes(this.h))
}

func (this *QPrinterInfo) MinimumPhysicalPageSize() *qt.QPageSize {
	_ret := C.QPrinterInfo_MinimumPhysicalPageSize(this.h)
	_goptr := qt.UnsafeNewQPageSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinterInfo) MaximumPhysicalPageSize() *qt.QPageSize {
	_ret := C.QPrinterInfo_MaximumPhysicalPageSize(this.h)
	_goptr := qt.UnsafeNewQPageSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinterInfo) SupportedPaperSizes() []qt.QPagedPaintDevice__PageSize {
	var _ma *C.struct_miqt_array = C.QPrinterInfo_SupportedPaperSizes(this.h)
	_ret := make([]qt.QPagedPaintDevice__PageSize, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (qt.QPagedPaintDevice__PageSize)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QPrinterInfo) SupportedResolutions() []int {
	var _ma *C.struct_miqt_array = C.QPrinterInfo_SupportedResolutions(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QPrinterInfo) DefaultDuplexMode() QPrinter__DuplexMode {
	return (QPrinter__DuplexMode)(C.QPrinterInfo_DefaultDuplexMode(this.h))
}

func (this *QPrinterInfo) SupportedDuplexModes() []QPrinter__DuplexMode {
	var _ma *C.struct_miqt_array = C.QPrinterInfo_SupportedDuplexModes(this.h)
	_ret := make([]QPrinter__DuplexMode, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QPrinter__DuplexMode)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QPrinterInfo) DefaultColorMode() QPrinter__ColorMode {
	return (QPrinter__ColorMode)(C.QPrinterInfo_DefaultColorMode(this.h))
}

func (this *QPrinterInfo) SupportedColorModes() []QPrinter__ColorMode {
	var _ma *C.struct_miqt_array = C.QPrinterInfo_SupportedColorModes(this.h)
	_ret := make([]QPrinter__ColorMode, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QPrinter__ColorMode)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QPrinterInfo_AvailablePrinterNames() []string {
	var _ma *C.struct_miqt_array = C.QPrinterInfo_AvailablePrinterNames()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QPrinterInfo_AvailablePrinters() []QPrinterInfo {
	var _ma *C.struct_miqt_array = C.QPrinterInfo_AvailablePrinters()
	_ret := make([]QPrinterInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QPrinterInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQPrinterInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QPrinterInfo_DefaultPrinterName() string {
	var _ms *C.struct_miqt_string = C.QPrinterInfo_DefaultPrinterName()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPrinterInfo_DefaultPrinter() *QPrinterInfo {
	_ret := C.QPrinterInfo_DefaultPrinter()
	_goptr := newQPrinterInfo(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPrinterInfo_PrinterInfo(printerName string) *QPrinterInfo {
	printerName_ms := libmiqt.Strdupg(printerName)
	defer C.free(printerName_ms)
	_ret := C.QPrinterInfo_PrinterInfo((*C.struct_miqt_string)(printerName_ms))
	_goptr := newQPrinterInfo(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPrinterInfo) Delete() {
	C.QPrinterInfo_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrinterInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrinterInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
