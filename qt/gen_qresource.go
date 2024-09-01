package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qresource.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func newQResource(h *C.QResource) *QResource {
	if h == nil {
		return nil
	}
	return &QResource{h: h}
}

func newQResource_U(h unsafe.Pointer) *QResource {
	return newQResource((*C.QResource)(h))
}

// NewQResource constructs a new QResource object.
func NewQResource() *QResource {
	ret := C.QResource_new()
	return newQResource(ret)
}

// NewQResource2 constructs a new QResource object.
func NewQResource2(file string) *QResource {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	ret := C.QResource_new2(file_Cstring, C.ulong(len(file)))
	return newQResource(ret)
}

// NewQResource3 constructs a new QResource object.
func NewQResource3(file string, locale *QLocale) *QResource {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	ret := C.QResource_new3(file_Cstring, C.ulong(len(file)), locale.cPointer())
	return newQResource(ret)
}

func (this *QResource) SetFileName(file string) {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	C.QResource_SetFileName(this.h, file_Cstring, C.ulong(len(file)))
}

func (this *QResource) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QResource_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QResource) AbsoluteFilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QResource_AbsoluteFilePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QResource) SetLocale(locale *QLocale) {
	C.QResource_SetLocale(this.h, locale.cPointer())
}

func (this *QResource) Locale() *QLocale {
	ret := C.QResource_Locale(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLocale(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLocale) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QResource) IsValid() bool {
	ret := C.QResource_IsValid(this.h)
	return (bool)(ret)
}

func (this *QResource) CompressionAlgorithm() uintptr {
	ret := C.QResource_CompressionAlgorithm(this.h)
	return (uintptr)(ret)
}

func (this *QResource) Size() int64 {
	ret := C.QResource_Size(this.h)
	return (int64)(ret)
}

func (this *QResource) Data() *byte {
	ret := C.QResource_Data(this.h)
	return (*byte)(ret)
}

func (this *QResource) UncompressedSize() int64 {
	ret := C.QResource_UncompressedSize(this.h)
	return (int64)(ret)
}

func (this *QResource) UncompressedData() *QByteArray {
	ret := C.QResource_UncompressedData(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QResource) LastModified() *QDateTime {
	ret := C.QResource_LastModified(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QResource_AddSearchPath(path string) {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	C.QResource_AddSearchPath(path_Cstring, C.ulong(len(path)))
}

func QResource_SearchPaths() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QResource_SearchPaths(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QResource) IsCompressed() bool {
	ret := C.QResource_IsCompressed(this.h)
	return (bool)(ret)
}

func QResource_RegisterResource(rccFilename string) bool {
	rccFilename_Cstring := C.CString(rccFilename)
	defer C.free(unsafe.Pointer(rccFilename_Cstring))
	ret := C.QResource_RegisterResource(rccFilename_Cstring, C.ulong(len(rccFilename)))
	return (bool)(ret)
}

func QResource_UnregisterResource(rccFilename string) bool {
	rccFilename_Cstring := C.CString(rccFilename)
	defer C.free(unsafe.Pointer(rccFilename_Cstring))
	ret := C.QResource_UnregisterResource(rccFilename_Cstring, C.ulong(len(rccFilename)))
	return (bool)(ret)
}

func QResource_RegisterResourceWithRccData(rccData *byte) bool {
	ret := C.QResource_RegisterResourceWithRccData((*C.uchar)(unsafe.Pointer(rccData)))
	return (bool)(ret)
}

func QResource_UnregisterResourceWithRccData(rccData *byte) bool {
	ret := C.QResource_UnregisterResourceWithRccData((*C.uchar)(unsafe.Pointer(rccData)))
	return (bool)(ret)
}

func QResource_RegisterResource2(rccFilename string, resourceRoot string) bool {
	rccFilename_Cstring := C.CString(rccFilename)
	defer C.free(unsafe.Pointer(rccFilename_Cstring))
	resourceRoot_Cstring := C.CString(resourceRoot)
	defer C.free(unsafe.Pointer(resourceRoot_Cstring))
	ret := C.QResource_RegisterResource2(rccFilename_Cstring, C.ulong(len(rccFilename)), resourceRoot_Cstring, C.ulong(len(resourceRoot)))
	return (bool)(ret)
}

func QResource_UnregisterResource2(rccFilename string, resourceRoot string) bool {
	rccFilename_Cstring := C.CString(rccFilename)
	defer C.free(unsafe.Pointer(rccFilename_Cstring))
	resourceRoot_Cstring := C.CString(resourceRoot)
	defer C.free(unsafe.Pointer(resourceRoot_Cstring))
	ret := C.QResource_UnregisterResource2(rccFilename_Cstring, C.ulong(len(rccFilename)), resourceRoot_Cstring, C.ulong(len(resourceRoot)))
	return (bool)(ret)
}

func QResource_RegisterResource22(rccData *byte, resourceRoot string) bool {
	resourceRoot_Cstring := C.CString(resourceRoot)
	defer C.free(unsafe.Pointer(resourceRoot_Cstring))
	ret := C.QResource_RegisterResource22((*C.uchar)(unsafe.Pointer(rccData)), resourceRoot_Cstring, C.ulong(len(resourceRoot)))
	return (bool)(ret)
}

func QResource_UnregisterResource22(rccData *byte, resourceRoot string) bool {
	resourceRoot_Cstring := C.CString(resourceRoot)
	defer C.free(unsafe.Pointer(resourceRoot_Cstring))
	ret := C.QResource_UnregisterResource22((*C.uchar)(unsafe.Pointer(rccData)), resourceRoot_Cstring, C.ulong(len(resourceRoot)))
	return (bool)(ret)
}

func (this *QResource) Delete() {
	C.QResource_Delete(this.h)
}
