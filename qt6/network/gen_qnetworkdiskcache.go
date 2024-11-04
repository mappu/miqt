package network

/*

#include "gen_qnetworkdiskcache.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QNetworkDiskCache struct {
	h *C.QNetworkDiskCache
	*QAbstractNetworkCache
}

func (this *QNetworkDiskCache) cPointer() *C.QNetworkDiskCache {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkDiskCache) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQNetworkDiskCache(h *C.QNetworkDiskCache) *QNetworkDiskCache {
	if h == nil {
		return nil
	}
	return &QNetworkDiskCache{h: h, QAbstractNetworkCache: UnsafeNewQAbstractNetworkCache(unsafe.Pointer(h))}
}

func UnsafeNewQNetworkDiskCache(h unsafe.Pointer) *QNetworkDiskCache {
	return newQNetworkDiskCache((*C.QNetworkDiskCache)(h))
}

// NewQNetworkDiskCache constructs a new QNetworkDiskCache object.
func NewQNetworkDiskCache() *QNetworkDiskCache {
	ret := C.QNetworkDiskCache_new()
	return newQNetworkDiskCache(ret)
}

// NewQNetworkDiskCache2 constructs a new QNetworkDiskCache object.
func NewQNetworkDiskCache2(parent *qt6.QObject) *QNetworkDiskCache {
	ret := C.QNetworkDiskCache_new2((*C.QObject)(parent.UnsafePointer()))
	return newQNetworkDiskCache(ret)
}

func (this *QNetworkDiskCache) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkDiskCache_MetaObject(this.h)))
}

func (this *QNetworkDiskCache) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkDiskCache_Metacast(this.h, param1_Cstring))
}

func QNetworkDiskCache_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkDiskCache_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkDiskCache) CacheDirectory() string {
	var _ms C.struct_miqt_string = C.QNetworkDiskCache_CacheDirectory(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkDiskCache) SetCacheDirectory(cacheDir string) {
	cacheDir_ms := C.struct_miqt_string{}
	cacheDir_ms.data = C.CString(cacheDir)
	cacheDir_ms.len = C.size_t(len(cacheDir))
	defer C.free(unsafe.Pointer(cacheDir_ms.data))
	C.QNetworkDiskCache_SetCacheDirectory(this.h, cacheDir_ms)
}

func (this *QNetworkDiskCache) MaximumCacheSize() int64 {
	return (int64)(C.QNetworkDiskCache_MaximumCacheSize(this.h))
}

func (this *QNetworkDiskCache) SetMaximumCacheSize(size int64) {
	C.QNetworkDiskCache_SetMaximumCacheSize(this.h, (C.longlong)(size))
}

func (this *QNetworkDiskCache) CacheSize() int64 {
	return (int64)(C.QNetworkDiskCache_CacheSize(this.h))
}

func (this *QNetworkDiskCache) MetaData(url *qt6.QUrl) *QNetworkCacheMetaData {
	_ret := C.QNetworkDiskCache_MetaData(this.h, (*C.QUrl)(url.UnsafePointer()))
	_goptr := newQNetworkCacheMetaData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDiskCache) UpdateMetaData(metaData *QNetworkCacheMetaData) {
	C.QNetworkDiskCache_UpdateMetaData(this.h, metaData.cPointer())
}

func (this *QNetworkDiskCache) Data(url *qt6.QUrl) *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_Data(this.h, (*C.QUrl)(url.UnsafePointer()))))
}

func (this *QNetworkDiskCache) Remove(url *qt6.QUrl) bool {
	return (bool)(C.QNetworkDiskCache_Remove(this.h, (*C.QUrl)(url.UnsafePointer())))
}

func (this *QNetworkDiskCache) Prepare(metaData *QNetworkCacheMetaData) *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_Prepare(this.h, metaData.cPointer())))
}

func (this *QNetworkDiskCache) Insert(device *qt6.QIODevice) {
	C.QNetworkDiskCache_Insert(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QNetworkDiskCache) FileMetaData(fileName string) *QNetworkCacheMetaData {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_ret := C.QNetworkDiskCache_FileMetaData(this.h, fileName_ms)
	_goptr := newQNetworkCacheMetaData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDiskCache) Clear() {
	C.QNetworkDiskCache_Clear(this.h)
}

func QNetworkDiskCache_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkDiskCache_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkDiskCache_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkDiskCache_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QNetworkDiskCache) Delete() {
	C.QNetworkDiskCache_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkDiskCache) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkDiskCache) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
