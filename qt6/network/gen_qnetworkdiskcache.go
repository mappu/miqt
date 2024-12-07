package network

/*

#include "gen_qnetworkdiskcache.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNetworkDiskCache struct {
	h          *C.QNetworkDiskCache
	isSubclass bool
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

// newQNetworkDiskCache constructs the type using only CGO pointers.
func newQNetworkDiskCache(h *C.QNetworkDiskCache, h_QAbstractNetworkCache *C.QAbstractNetworkCache, h_QObject *C.QObject) *QNetworkDiskCache {
	if h == nil {
		return nil
	}
	return &QNetworkDiskCache{h: h,
		QAbstractNetworkCache: newQAbstractNetworkCache(h_QAbstractNetworkCache, h_QObject)}
}

// UnsafeNewQNetworkDiskCache constructs the type using only unsafe pointers.
func UnsafeNewQNetworkDiskCache(h unsafe.Pointer, h_QAbstractNetworkCache unsafe.Pointer, h_QObject unsafe.Pointer) *QNetworkDiskCache {
	if h == nil {
		return nil
	}

	return &QNetworkDiskCache{h: (*C.QNetworkDiskCache)(h),
		QAbstractNetworkCache: UnsafeNewQAbstractNetworkCache(h_QAbstractNetworkCache, h_QObject)}
}

// NewQNetworkDiskCache constructs a new QNetworkDiskCache object.
func NewQNetworkDiskCache() *QNetworkDiskCache {
	var outptr_QNetworkDiskCache *C.QNetworkDiskCache = nil
	var outptr_QAbstractNetworkCache *C.QAbstractNetworkCache = nil
	var outptr_QObject *C.QObject = nil

	C.QNetworkDiskCache_new(&outptr_QNetworkDiskCache, &outptr_QAbstractNetworkCache, &outptr_QObject)
	ret := newQNetworkDiskCache(outptr_QNetworkDiskCache, outptr_QAbstractNetworkCache, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQNetworkDiskCache2 constructs a new QNetworkDiskCache object.
func NewQNetworkDiskCache2(parent *qt6.QObject) *QNetworkDiskCache {
	var outptr_QNetworkDiskCache *C.QNetworkDiskCache = nil
	var outptr_QAbstractNetworkCache *C.QAbstractNetworkCache = nil
	var outptr_QObject *C.QObject = nil

	C.QNetworkDiskCache_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QNetworkDiskCache, &outptr_QAbstractNetworkCache, &outptr_QObject)
	ret := newQNetworkDiskCache(outptr_QNetworkDiskCache, outptr_QAbstractNetworkCache, outptr_QObject)
	ret.isSubclass = true
	return ret
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
	_goptr := newQNetworkCacheMetaData(C.QNetworkDiskCache_MetaData(this.h, (*C.QUrl)(url.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDiskCache) UpdateMetaData(metaData *QNetworkCacheMetaData) {
	C.QNetworkDiskCache_UpdateMetaData(this.h, metaData.cPointer())
}

func (this *QNetworkDiskCache) Data(url *qt6.QUrl) *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_Data(this.h, (*C.QUrl)(url.UnsafePointer()))), nil, nil)
}

func (this *QNetworkDiskCache) Remove(url *qt6.QUrl) bool {
	return (bool)(C.QNetworkDiskCache_Remove(this.h, (*C.QUrl)(url.UnsafePointer())))
}

func (this *QNetworkDiskCache) Prepare(metaData *QNetworkCacheMetaData) *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_Prepare(this.h, metaData.cPointer())), nil, nil)
}

func (this *QNetworkDiskCache) Insert(device *qt6.QIODevice) {
	C.QNetworkDiskCache_Insert(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QNetworkDiskCache) FileMetaData(fileName string) *QNetworkCacheMetaData {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQNetworkCacheMetaData(C.QNetworkDiskCache_FileMetaData(this.h, fileName_ms))
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

func (this *QNetworkDiskCache) callVirtualBase_CacheSize() int64 {

	return (int64)(C.QNetworkDiskCache_virtualbase_CacheSize(unsafe.Pointer(this.h)))

}
func (this *QNetworkDiskCache) OnCacheSize(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkDiskCache_override_virtual_CacheSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkDiskCache_CacheSize
func miqt_exec_callback_QNetworkDiskCache_CacheSize(self *C.QNetworkDiskCache, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_CacheSize)

	return (C.longlong)(virtualReturn)

}

func (this *QNetworkDiskCache) callVirtualBase_MetaData(url *qt6.QUrl) *QNetworkCacheMetaData {

	_goptr := newQNetworkCacheMetaData(C.QNetworkDiskCache_virtualbase_MetaData(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QNetworkDiskCache) OnMetaData(slot func(super func(url *qt6.QUrl) *QNetworkCacheMetaData, url *qt6.QUrl) *QNetworkCacheMetaData) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkDiskCache_override_virtual_MetaData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkDiskCache_MetaData
func miqt_exec_callback_QNetworkDiskCache_MetaData(self *C.QNetworkDiskCache, cb C.intptr_t, url *C.QUrl) *C.QNetworkCacheMetaData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(url *qt6.QUrl) *QNetworkCacheMetaData, url *qt6.QUrl) *QNetworkCacheMetaData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_MetaData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QNetworkDiskCache) callVirtualBase_UpdateMetaData(metaData *QNetworkCacheMetaData) {

	C.QNetworkDiskCache_virtualbase_UpdateMetaData(unsafe.Pointer(this.h), metaData.cPointer())

}
func (this *QNetworkDiskCache) OnUpdateMetaData(slot func(super func(metaData *QNetworkCacheMetaData), metaData *QNetworkCacheMetaData)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkDiskCache_override_virtual_UpdateMetaData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkDiskCache_UpdateMetaData
func miqt_exec_callback_QNetworkDiskCache_UpdateMetaData(self *C.QNetworkDiskCache, cb C.intptr_t, metaData *C.QNetworkCacheMetaData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(metaData *QNetworkCacheMetaData), metaData *QNetworkCacheMetaData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkCacheMetaData(metaData)

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_UpdateMetaData, slotval1)

}

func (this *QNetworkDiskCache) callVirtualBase_Data(url *qt6.QUrl) *qt6.QIODevice {

	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_virtualbase_Data(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer()))), nil, nil)

}
func (this *QNetworkDiskCache) OnData(slot func(super func(url *qt6.QUrl) *qt6.QIODevice, url *qt6.QUrl) *qt6.QIODevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkDiskCache_override_virtual_Data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkDiskCache_Data
func miqt_exec_callback_QNetworkDiskCache_Data(self *C.QNetworkDiskCache, cb C.intptr_t, url *C.QUrl) *C.QIODevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(url *qt6.QUrl) *qt6.QIODevice, url *qt6.QUrl) *qt6.QIODevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Data, slotval1)

	return (*C.QIODevice)(virtualReturn.UnsafePointer())

}

func (this *QNetworkDiskCache) callVirtualBase_Remove(url *qt6.QUrl) bool {

	return (bool)(C.QNetworkDiskCache_virtualbase_Remove(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer())))

}
func (this *QNetworkDiskCache) OnRemove(slot func(super func(url *qt6.QUrl) bool, url *qt6.QUrl) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkDiskCache_override_virtual_Remove(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkDiskCache_Remove
func miqt_exec_callback_QNetworkDiskCache_Remove(self *C.QNetworkDiskCache, cb C.intptr_t, url *C.QUrl) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(url *qt6.QUrl) bool, url *qt6.QUrl) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Remove, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkDiskCache) callVirtualBase_Prepare(metaData *QNetworkCacheMetaData) *qt6.QIODevice {

	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_virtualbase_Prepare(unsafe.Pointer(this.h), metaData.cPointer())), nil, nil)

}
func (this *QNetworkDiskCache) OnPrepare(slot func(super func(metaData *QNetworkCacheMetaData) *qt6.QIODevice, metaData *QNetworkCacheMetaData) *qt6.QIODevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkDiskCache_override_virtual_Prepare(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkDiskCache_Prepare
func miqt_exec_callback_QNetworkDiskCache_Prepare(self *C.QNetworkDiskCache, cb C.intptr_t, metaData *C.QNetworkCacheMetaData) *C.QIODevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(metaData *QNetworkCacheMetaData) *qt6.QIODevice, metaData *QNetworkCacheMetaData) *qt6.QIODevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkCacheMetaData(metaData)

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Prepare, slotval1)

	return (*C.QIODevice)(virtualReturn.UnsafePointer())

}

func (this *QNetworkDiskCache) callVirtualBase_Insert(device *qt6.QIODevice) {

	C.QNetworkDiskCache_virtualbase_Insert(unsafe.Pointer(this.h), (*C.QIODevice)(device.UnsafePointer()))

}
func (this *QNetworkDiskCache) OnInsert(slot func(super func(device *qt6.QIODevice), device *qt6.QIODevice)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkDiskCache_override_virtual_Insert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkDiskCache_Insert
func miqt_exec_callback_QNetworkDiskCache_Insert(self *C.QNetworkDiskCache, cb C.intptr_t, device *C.QIODevice) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(device *qt6.QIODevice), device *qt6.QIODevice))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQIODevice(unsafe.Pointer(device), nil, nil)

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Insert, slotval1)

}

func (this *QNetworkDiskCache) callVirtualBase_Clear() {

	C.QNetworkDiskCache_virtualbase_Clear(unsafe.Pointer(this.h))

}
func (this *QNetworkDiskCache) OnClear(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkDiskCache_override_virtual_Clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkDiskCache_Clear
func miqt_exec_callback_QNetworkDiskCache_Clear(self *C.QNetworkDiskCache, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Clear)

}

func (this *QNetworkDiskCache) callVirtualBase_Expire() int64 {

	return (int64)(C.QNetworkDiskCache_virtualbase_Expire(unsafe.Pointer(this.h)))

}
func (this *QNetworkDiskCache) OnExpire(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkDiskCache_override_virtual_Expire(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkDiskCache_Expire
func miqt_exec_callback_QNetworkDiskCache_Expire(self *C.QNetworkDiskCache, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Expire)

	return (C.longlong)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QNetworkDiskCache) Delete() {
	C.QNetworkDiskCache_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkDiskCache) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkDiskCache) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
