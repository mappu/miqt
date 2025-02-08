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

// newQNetworkDiskCache constructs the type using only CGO pointers.
func newQNetworkDiskCache(h *C.QNetworkDiskCache) *QNetworkDiskCache {
	if h == nil {
		return nil
	}
	var outptr_QAbstractNetworkCache *C.QAbstractNetworkCache = nil
	C.QNetworkDiskCache_virtbase(h, &outptr_QAbstractNetworkCache)

	return &QNetworkDiskCache{h: h,
		QAbstractNetworkCache: newQAbstractNetworkCache(outptr_QAbstractNetworkCache)}
}

// UnsafeNewQNetworkDiskCache constructs the type using only unsafe pointers.
func UnsafeNewQNetworkDiskCache(h unsafe.Pointer) *QNetworkDiskCache {
	return newQNetworkDiskCache((*C.QNetworkDiskCache)(h))
}

// NewQNetworkDiskCache constructs a new QNetworkDiskCache object.
func NewQNetworkDiskCache() *QNetworkDiskCache {

	return newQNetworkDiskCache(C.QNetworkDiskCache_new())
}

// NewQNetworkDiskCache2 constructs a new QNetworkDiskCache object.
func NewQNetworkDiskCache2(parent *qt6.QObject) *QNetworkDiskCache {

	return newQNetworkDiskCache(C.QNetworkDiskCache_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QNetworkDiskCache) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkDiskCache_metaObject(this.h)))
}

func (this *QNetworkDiskCache) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkDiskCache_metacast(this.h, param1_Cstring))
}

func QNetworkDiskCache_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkDiskCache_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkDiskCache) CacheDirectory() string {
	var _ms C.struct_miqt_string = C.QNetworkDiskCache_cacheDirectory(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkDiskCache) SetCacheDirectory(cacheDir string) {
	cacheDir_ms := C.struct_miqt_string{}
	cacheDir_ms.data = C.CString(cacheDir)
	cacheDir_ms.len = C.size_t(len(cacheDir))
	defer C.free(unsafe.Pointer(cacheDir_ms.data))
	C.QNetworkDiskCache_setCacheDirectory(this.h, cacheDir_ms)
}

func (this *QNetworkDiskCache) MaximumCacheSize() int64 {
	return (int64)(C.QNetworkDiskCache_maximumCacheSize(this.h))
}

func (this *QNetworkDiskCache) SetMaximumCacheSize(size int64) {
	C.QNetworkDiskCache_setMaximumCacheSize(this.h, (C.longlong)(size))
}

func (this *QNetworkDiskCache) CacheSize() int64 {
	return (int64)(C.QNetworkDiskCache_cacheSize(this.h))
}

func (this *QNetworkDiskCache) MetaData(url *qt6.QUrl) *QNetworkCacheMetaData {
	_goptr := newQNetworkCacheMetaData(C.QNetworkDiskCache_metaData(this.h, (*C.QUrl)(url.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDiskCache) UpdateMetaData(metaData *QNetworkCacheMetaData) {
	C.QNetworkDiskCache_updateMetaData(this.h, metaData.cPointer())
}

func (this *QNetworkDiskCache) Data(url *qt6.QUrl) *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_data(this.h, (*C.QUrl)(url.UnsafePointer()))))
}

func (this *QNetworkDiskCache) Remove(url *qt6.QUrl) bool {
	return (bool)(C.QNetworkDiskCache_remove(this.h, (*C.QUrl)(url.UnsafePointer())))
}

func (this *QNetworkDiskCache) Prepare(metaData *QNetworkCacheMetaData) *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_prepare(this.h, metaData.cPointer())))
}

func (this *QNetworkDiskCache) Insert(device *qt6.QIODevice) {
	C.QNetworkDiskCache_insert(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QNetworkDiskCache) FileMetaData(fileName string) *QNetworkCacheMetaData {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQNetworkCacheMetaData(C.QNetworkDiskCache_fileMetaData(this.h, fileName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDiskCache) Clear() {
	C.QNetworkDiskCache_clear(this.h)
}

func QNetworkDiskCache_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkDiskCache_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkDiskCache_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkDiskCache_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QNetworkDiskCache that was directly constructed.
func (this *QNetworkDiskCache) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QNetworkDiskCache_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QNetworkDiskCache that was directly constructed.
func (this *QNetworkDiskCache) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNetworkDiskCache_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QNetworkDiskCache that was directly constructed.
func (this *QNetworkDiskCache) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNetworkDiskCache_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QNetworkDiskCache that was directly constructed.
func (this *QNetworkDiskCache) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QNetworkDiskCache_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QNetworkDiskCache) callVirtualBase_CacheSize() int64 {

	return (int64)(C.QNetworkDiskCache_virtualbase_cacheSize(unsafe.Pointer(this.h)))

}
func (this *QNetworkDiskCache) OnCacheSize(slot func(super func() int64) int64) {
	ok := C.QNetworkDiskCache_override_virtual_cacheSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_cacheSize
func miqt_exec_callback_QNetworkDiskCache_cacheSize(self *C.QNetworkDiskCache, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_CacheSize)

	return (C.longlong)(virtualReturn)

}

func (this *QNetworkDiskCache) callVirtualBase_MetaData(url *qt6.QUrl) *QNetworkCacheMetaData {

	_goptr := newQNetworkCacheMetaData(C.QNetworkDiskCache_virtualbase_metaData(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QNetworkDiskCache) OnMetaData(slot func(super func(url *qt6.QUrl) *QNetworkCacheMetaData, url *qt6.QUrl) *QNetworkCacheMetaData) {
	ok := C.QNetworkDiskCache_override_virtual_metaData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_metaData
func miqt_exec_callback_QNetworkDiskCache_metaData(self *C.QNetworkDiskCache, cb C.intptr_t, url *C.QUrl) *C.QNetworkCacheMetaData {
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

	C.QNetworkDiskCache_virtualbase_updateMetaData(unsafe.Pointer(this.h), metaData.cPointer())

}
func (this *QNetworkDiskCache) OnUpdateMetaData(slot func(super func(metaData *QNetworkCacheMetaData), metaData *QNetworkCacheMetaData)) {
	ok := C.QNetworkDiskCache_override_virtual_updateMetaData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_updateMetaData
func miqt_exec_callback_QNetworkDiskCache_updateMetaData(self *C.QNetworkDiskCache, cb C.intptr_t, metaData *C.QNetworkCacheMetaData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(metaData *QNetworkCacheMetaData), metaData *QNetworkCacheMetaData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkCacheMetaData(metaData)

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_UpdateMetaData, slotval1)

}

func (this *QNetworkDiskCache) callVirtualBase_Data(url *qt6.QUrl) *qt6.QIODevice {

	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_virtualbase_data(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer()))))

}
func (this *QNetworkDiskCache) OnData(slot func(super func(url *qt6.QUrl) *qt6.QIODevice, url *qt6.QUrl) *qt6.QIODevice) {
	ok := C.QNetworkDiskCache_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_data
func miqt_exec_callback_QNetworkDiskCache_data(self *C.QNetworkDiskCache, cb C.intptr_t, url *C.QUrl) *C.QIODevice {
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

	return (bool)(C.QNetworkDiskCache_virtualbase_remove(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer())))

}
func (this *QNetworkDiskCache) OnRemove(slot func(super func(url *qt6.QUrl) bool, url *qt6.QUrl) bool) {
	ok := C.QNetworkDiskCache_override_virtual_remove(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_remove
func miqt_exec_callback_QNetworkDiskCache_remove(self *C.QNetworkDiskCache, cb C.intptr_t, url *C.QUrl) C.bool {
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

	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNetworkDiskCache_virtualbase_prepare(unsafe.Pointer(this.h), metaData.cPointer())))

}
func (this *QNetworkDiskCache) OnPrepare(slot func(super func(metaData *QNetworkCacheMetaData) *qt6.QIODevice, metaData *QNetworkCacheMetaData) *qt6.QIODevice) {
	ok := C.QNetworkDiskCache_override_virtual_prepare(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_prepare
func miqt_exec_callback_QNetworkDiskCache_prepare(self *C.QNetworkDiskCache, cb C.intptr_t, metaData *C.QNetworkCacheMetaData) *C.QIODevice {
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

	C.QNetworkDiskCache_virtualbase_insert(unsafe.Pointer(this.h), (*C.QIODevice)(device.UnsafePointer()))

}
func (this *QNetworkDiskCache) OnInsert(slot func(super func(device *qt6.QIODevice), device *qt6.QIODevice)) {
	ok := C.QNetworkDiskCache_override_virtual_insert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_insert
func miqt_exec_callback_QNetworkDiskCache_insert(self *C.QNetworkDiskCache, cb C.intptr_t, device *C.QIODevice) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(device *qt6.QIODevice), device *qt6.QIODevice))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQIODevice(unsafe.Pointer(device))

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Insert, slotval1)

}

func (this *QNetworkDiskCache) callVirtualBase_Clear() {

	C.QNetworkDiskCache_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QNetworkDiskCache) OnClear(slot func(super func())) {
	ok := C.QNetworkDiskCache_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_clear
func miqt_exec_callback_QNetworkDiskCache_clear(self *C.QNetworkDiskCache, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Clear)

}

func (this *QNetworkDiskCache) callVirtualBase_Expire() int64 {

	return (int64)(C.QNetworkDiskCache_virtualbase_expire(unsafe.Pointer(this.h)))

}
func (this *QNetworkDiskCache) OnExpire(slot func(super func() int64) int64) {
	ok := C.QNetworkDiskCache_override_virtual_expire(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_expire
func miqt_exec_callback_QNetworkDiskCache_expire(self *C.QNetworkDiskCache, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Expire)

	return (C.longlong)(virtualReturn)

}

func (this *QNetworkDiskCache) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QNetworkDiskCache_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkDiskCache) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QNetworkDiskCache_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_event
func miqt_exec_callback_QNetworkDiskCache_event(self *C.QNetworkDiskCache, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkDiskCache) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QNetworkDiskCache_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkDiskCache) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QNetworkDiskCache_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_eventFilter
func miqt_exec_callback_QNetworkDiskCache_eventFilter(self *C.QNetworkDiskCache, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkDiskCache) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QNetworkDiskCache_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QNetworkDiskCache) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QNetworkDiskCache_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_timerEvent
func miqt_exec_callback_QNetworkDiskCache_timerEvent(self *C.QNetworkDiskCache, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QNetworkDiskCache) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QNetworkDiskCache_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QNetworkDiskCache) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QNetworkDiskCache_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_childEvent
func miqt_exec_callback_QNetworkDiskCache_childEvent(self *C.QNetworkDiskCache, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QNetworkDiskCache) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QNetworkDiskCache_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QNetworkDiskCache) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QNetworkDiskCache_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_customEvent
func miqt_exec_callback_QNetworkDiskCache_customEvent(self *C.QNetworkDiskCache, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QNetworkDiskCache) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QNetworkDiskCache_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkDiskCache) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QNetworkDiskCache_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_connectNotify
func miqt_exec_callback_QNetworkDiskCache_connectNotify(self *C.QNetworkDiskCache, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QNetworkDiskCache) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QNetworkDiskCache_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkDiskCache) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QNetworkDiskCache_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkDiskCache_disconnectNotify
func miqt_exec_callback_QNetworkDiskCache_disconnectNotify(self *C.QNetworkDiskCache, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkDiskCache{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QNetworkDiskCache) Delete() {
	C.QNetworkDiskCache_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkDiskCache) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkDiskCache) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
