package qt

/*

#include "gen_qresource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QResource__Compression int

const (
	QResource__NoCompression   QResource__Compression = 0
	QResource__ZlibCompression QResource__Compression = 1
	QResource__ZstdCompression QResource__Compression = 2
)

type QResource struct {
	h *C.QResource
}

func (this *QResource) cPointer() *C.QResource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QResource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQResource(h *C.QResource) *QResource {
	if h == nil {
		return nil
	}
	return &QResource{h: h}
}

func UnsafeNewQResource(h unsafe.Pointer) *QResource {
	return newQResource((*C.QResource)(h))
}

// NewQResource constructs a new QResource object.
func NewQResource() *QResource {
	ret := C.QResource_new()
	return newQResource(ret)
}

// NewQResource2 constructs a new QResource object.
func NewQResource2(file string) *QResource {
	file_ms := libmiqt.Strdupg(file)
	defer C.free(file_ms)
	ret := C.QResource_new2((*C.struct_miqt_string)(file_ms))
	return newQResource(ret)
}

// NewQResource3 constructs a new QResource object.
func NewQResource3(file string, locale *QLocale) *QResource {
	file_ms := libmiqt.Strdupg(file)
	defer C.free(file_ms)
	ret := C.QResource_new3((*C.struct_miqt_string)(file_ms), locale.cPointer())
	return newQResource(ret)
}

func (this *QResource) SetFileName(file string) {
	file_ms := libmiqt.Strdupg(file)
	defer C.free(file_ms)
	C.QResource_SetFileName(this.h, (*C.struct_miqt_string)(file_ms))
}

func (this *QResource) FileName() string {
	var _ms *C.struct_miqt_string = C.QResource_FileName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QResource) AbsoluteFilePath() string {
	var _ms *C.struct_miqt_string = C.QResource_AbsoluteFilePath(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QResource) SetLocale(locale *QLocale) {
	C.QResource_SetLocale(this.h, locale.cPointer())
}

func (this *QResource) Locale() *QLocale {
	_ret := C.QResource_Locale(this.h)
	_goptr := newQLocale(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QResource) IsValid() bool {
	return (bool)(C.QResource_IsValid(this.h))
}

func (this *QResource) CompressionAlgorithm() QResource__Compression {
	return (QResource__Compression)(C.QResource_CompressionAlgorithm(this.h))
}

func (this *QResource) Size() int64 {
	return (int64)(C.QResource_Size(this.h))
}

func (this *QResource) Data() *byte {
	return (*byte)(C.QResource_Data(this.h))
}

func (this *QResource) UncompressedSize() int64 {
	return (int64)(C.QResource_UncompressedSize(this.h))
}

func (this *QResource) UncompressedData() *QByteArray {
	_ret := C.QResource_UncompressedData(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QResource) LastModified() *QDateTime {
	_ret := C.QResource_LastModified(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QResource_AddSearchPath(path string) {
	path_ms := libmiqt.Strdupg(path)
	defer C.free(path_ms)
	C.QResource_AddSearchPath((*C.struct_miqt_string)(path_ms))
}

func QResource_SearchPaths() []string {
	var _ma *C.struct_miqt_array = C.QResource_SearchPaths()
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

func (this *QResource) IsCompressed() bool {
	return (bool)(C.QResource_IsCompressed(this.h))
}

func QResource_RegisterResource(rccFilename string) bool {
	rccFilename_ms := libmiqt.Strdupg(rccFilename)
	defer C.free(rccFilename_ms)
	return (bool)(C.QResource_RegisterResource((*C.struct_miqt_string)(rccFilename_ms)))
}

func QResource_UnregisterResource(rccFilename string) bool {
	rccFilename_ms := libmiqt.Strdupg(rccFilename)
	defer C.free(rccFilename_ms)
	return (bool)(C.QResource_UnregisterResource((*C.struct_miqt_string)(rccFilename_ms)))
}

func QResource_RegisterResourceWithRccData(rccData *byte) bool {
	return (bool)(C.QResource_RegisterResourceWithRccData((*C.uchar)(unsafe.Pointer(rccData))))
}

func QResource_UnregisterResourceWithRccData(rccData *byte) bool {
	return (bool)(C.QResource_UnregisterResourceWithRccData((*C.uchar)(unsafe.Pointer(rccData))))
}

func QResource_RegisterResource2(rccFilename string, resourceRoot string) bool {
	rccFilename_ms := libmiqt.Strdupg(rccFilename)
	defer C.free(rccFilename_ms)
	resourceRoot_ms := libmiqt.Strdupg(resourceRoot)
	defer C.free(resourceRoot_ms)
	return (bool)(C.QResource_RegisterResource2((*C.struct_miqt_string)(rccFilename_ms), (*C.struct_miqt_string)(resourceRoot_ms)))
}

func QResource_UnregisterResource2(rccFilename string, resourceRoot string) bool {
	rccFilename_ms := libmiqt.Strdupg(rccFilename)
	defer C.free(rccFilename_ms)
	resourceRoot_ms := libmiqt.Strdupg(resourceRoot)
	defer C.free(resourceRoot_ms)
	return (bool)(C.QResource_UnregisterResource2((*C.struct_miqt_string)(rccFilename_ms), (*C.struct_miqt_string)(resourceRoot_ms)))
}

func QResource_RegisterResource22(rccData *byte, resourceRoot string) bool {
	resourceRoot_ms := libmiqt.Strdupg(resourceRoot)
	defer C.free(resourceRoot_ms)
	return (bool)(C.QResource_RegisterResource22((*C.uchar)(unsafe.Pointer(rccData)), (*C.struct_miqt_string)(resourceRoot_ms)))
}

func QResource_UnregisterResource22(rccData *byte, resourceRoot string) bool {
	resourceRoot_ms := libmiqt.Strdupg(resourceRoot)
	defer C.free(resourceRoot_ms)
	return (bool)(C.QResource_UnregisterResource22((*C.uchar)(unsafe.Pointer(rccData)), (*C.struct_miqt_string)(resourceRoot_ms)))
}

// Delete this object from C++ memory.
func (this *QResource) Delete() {
	C.QResource_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QResource) GoGC() {
	runtime.SetFinalizer(this, func(this *QResource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
