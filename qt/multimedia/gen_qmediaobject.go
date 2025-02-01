package multimedia

/*

#include "gen_qmediaobject.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaObject struct {
	h *C.QMediaObject
	*qt.QObject
}

func (this *QMediaObject) cPointer() *C.QMediaObject {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaObject constructs the type using only CGO pointers.
func newQMediaObject(h *C.QMediaObject) *QMediaObject {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QMediaObject_virtbase(h, &outptr_QObject)

	return &QMediaObject{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQMediaObject constructs the type using only unsafe pointers.
func UnsafeNewQMediaObject(h unsafe.Pointer) *QMediaObject {
	return newQMediaObject((*C.QMediaObject)(h))
}

func (this *QMediaObject) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaObject_metaObject(this.h)))
}

func (this *QMediaObject) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaObject_metacast(this.h, param1_Cstring))
}

func QMediaObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaObject_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaObject) IsAvailable() bool {
	return (bool)(C.QMediaObject_isAvailable(this.h))
}

func (this *QMediaObject) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QMediaObject_availability(this.h))
}

func (this *QMediaObject) Service() *QMediaService {
	return newQMediaService(C.QMediaObject_service(this.h))
}

func (this *QMediaObject) NotifyInterval() int {
	return (int)(C.QMediaObject_notifyInterval(this.h))
}

func (this *QMediaObject) SetNotifyInterval(milliSeconds int) {
	C.QMediaObject_setNotifyInterval(this.h, (C.int)(milliSeconds))
}

func (this *QMediaObject) Bind(param1 *qt.QObject) bool {
	return (bool)(C.QMediaObject_bind(this.h, (*C.QObject)(param1.UnsafePointer())))
}

func (this *QMediaObject) Unbind(param1 *qt.QObject) {
	C.QMediaObject_unbind(this.h, (*C.QObject)(param1.UnsafePointer()))
}

func (this *QMediaObject) IsMetaDataAvailable() bool {
	return (bool)(C.QMediaObject_isMetaDataAvailable(this.h))
}

func (this *QMediaObject) MetaData(key string) *qt.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QMediaObject_metaData(this.h, key_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaObject) AvailableMetaData() []string {
	var _ma C.struct_miqt_array = C.QMediaObject_availableMetaData(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QMediaObject) NotifyIntervalChanged(milliSeconds int) {
	C.QMediaObject_notifyIntervalChanged(this.h, (C.int)(milliSeconds))
}
func (this *QMediaObject) OnNotifyIntervalChanged(slot func(milliSeconds int)) {
	C.QMediaObject_connect_notifyIntervalChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_notifyIntervalChanged
func miqt_exec_callback_QMediaObject_notifyIntervalChanged(cb C.intptr_t, milliSeconds C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(milliSeconds int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(milliSeconds)

	gofunc(slotval1)
}

func (this *QMediaObject) MetaDataAvailableChanged(available bool) {
	C.QMediaObject_metaDataAvailableChanged(this.h, (C.bool)(available))
}
func (this *QMediaObject) OnMetaDataAvailableChanged(slot func(available bool)) {
	C.QMediaObject_connect_metaDataAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_metaDataAvailableChanged
func miqt_exec_callback_QMediaObject_metaDataAvailableChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QMediaObject) MetaDataChanged() {
	C.QMediaObject_metaDataChanged(this.h)
}
func (this *QMediaObject) OnMetaDataChanged(slot func()) {
	C.QMediaObject_connect_metaDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_metaDataChanged
func miqt_exec_callback_QMediaObject_metaDataChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaObject) MetaDataChanged2(key string, value *qt.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QMediaObject_metaDataChanged2(this.h, key_ms, (*C.QVariant)(value.UnsafePointer()))
}
func (this *QMediaObject) OnMetaDataChanged2(slot func(key string, value *qt.QVariant)) {
	C.QMediaObject_connect_metaDataChanged2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_metaDataChanged2
func miqt_exec_callback_QMediaObject_metaDataChanged2(cb C.intptr_t, key C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret
	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2)
}

func (this *QMediaObject) AvailabilityChanged(available bool) {
	C.QMediaObject_availabilityChanged(this.h, (C.bool)(available))
}
func (this *QMediaObject) OnAvailabilityChanged(slot func(available bool)) {
	C.QMediaObject_connect_availabilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_availabilityChanged
func miqt_exec_callback_QMediaObject_availabilityChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QMediaObject) AvailabilityChangedWithAvailability(availability QMultimedia__AvailabilityStatus) {
	C.QMediaObject_availabilityChangedWithAvailability(this.h, (C.int)(availability))
}
func (this *QMediaObject) OnAvailabilityChangedWithAvailability(slot func(availability QMultimedia__AvailabilityStatus)) {
	C.QMediaObject_connect_availabilityChangedWithAvailability(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_availabilityChangedWithAvailability
func miqt_exec_callback_QMediaObject_availabilityChangedWithAvailability(cb C.intptr_t, availability C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(availability QMultimedia__AvailabilityStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMultimedia__AvailabilityStatus)(availability)

	gofunc(slotval1)
}

func QMediaObject_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaObject_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaObject_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaObject) Delete() {
	C.QMediaObject_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaObject) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaObject) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
