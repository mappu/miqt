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
	h          *C.QMediaObject
	isSubclass bool
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
func newQMediaObject(h *C.QMediaObject, h_QObject *C.QObject) *QMediaObject {
	if h == nil {
		return nil
	}
	return &QMediaObject{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQMediaObject constructs the type using only unsafe pointers.
func UnsafeNewQMediaObject(h unsafe.Pointer, h_QObject unsafe.Pointer) *QMediaObject {
	if h == nil {
		return nil
	}

	return &QMediaObject{h: (*C.QMediaObject)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

func (this *QMediaObject) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaObject_MetaObject(this.h)))
}

func (this *QMediaObject) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaObject_Metacast(this.h, param1_Cstring))
}

func QMediaObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaObject_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaObject) IsAvailable() bool {
	return (bool)(C.QMediaObject_IsAvailable(this.h))
}

func (this *QMediaObject) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QMediaObject_Availability(this.h))
}

func (this *QMediaObject) Service() *QMediaService {
	return UnsafeNewQMediaService(unsafe.Pointer(C.QMediaObject_Service(this.h)), nil)
}

func (this *QMediaObject) NotifyInterval() int {
	return (int)(C.QMediaObject_NotifyInterval(this.h))
}

func (this *QMediaObject) SetNotifyInterval(milliSeconds int) {
	C.QMediaObject_SetNotifyInterval(this.h, (C.int)(milliSeconds))
}

func (this *QMediaObject) Bind(param1 *qt.QObject) bool {
	return (bool)(C.QMediaObject_Bind(this.h, (*C.QObject)(param1.UnsafePointer())))
}

func (this *QMediaObject) Unbind(param1 *qt.QObject) {
	C.QMediaObject_Unbind(this.h, (*C.QObject)(param1.UnsafePointer()))
}

func (this *QMediaObject) IsMetaDataAvailable() bool {
	return (bool)(C.QMediaObject_IsMetaDataAvailable(this.h))
}

func (this *QMediaObject) MetaData(key string) *qt.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QMediaObject_MetaData(this.h, key_ms)
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaObject) AvailableMetaData() []string {
	var _ma C.struct_miqt_array = C.QMediaObject_AvailableMetaData(this.h)
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
	C.QMediaObject_NotifyIntervalChanged(this.h, (C.int)(milliSeconds))
}
func (this *QMediaObject) OnNotifyIntervalChanged(slot func(milliSeconds int)) {
	C.QMediaObject_connect_NotifyIntervalChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_NotifyIntervalChanged
func miqt_exec_callback_QMediaObject_NotifyIntervalChanged(cb C.intptr_t, milliSeconds C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(milliSeconds int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(milliSeconds)

	gofunc(slotval1)
}

func (this *QMediaObject) MetaDataAvailableChanged(available bool) {
	C.QMediaObject_MetaDataAvailableChanged(this.h, (C.bool)(available))
}
func (this *QMediaObject) OnMetaDataAvailableChanged(slot func(available bool)) {
	C.QMediaObject_connect_MetaDataAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_MetaDataAvailableChanged
func miqt_exec_callback_QMediaObject_MetaDataAvailableChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QMediaObject) MetaDataChanged() {
	C.QMediaObject_MetaDataChanged(this.h)
}
func (this *QMediaObject) OnMetaDataChanged(slot func()) {
	C.QMediaObject_connect_MetaDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_MetaDataChanged
func miqt_exec_callback_QMediaObject_MetaDataChanged(cb C.intptr_t) {
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
	C.QMediaObject_MetaDataChanged2(this.h, key_ms, (*C.QVariant)(value.UnsafePointer()))
}
func (this *QMediaObject) OnMetaDataChanged2(slot func(key string, value *qt.QVariant)) {
	C.QMediaObject_connect_MetaDataChanged2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_MetaDataChanged2
func miqt_exec_callback_QMediaObject_MetaDataChanged2(cb C.intptr_t, key C.struct_miqt_string, value *C.QVariant) {
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
	C.QMediaObject_AvailabilityChanged(this.h, (C.bool)(available))
}
func (this *QMediaObject) OnAvailabilityChanged(slot func(available bool)) {
	C.QMediaObject_connect_AvailabilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_AvailabilityChanged
func miqt_exec_callback_QMediaObject_AvailabilityChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QMediaObject) AvailabilityChangedWithAvailability(availability QMultimedia__AvailabilityStatus) {
	C.QMediaObject_AvailabilityChangedWithAvailability(this.h, (C.int)(availability))
}
func (this *QMediaObject) OnAvailabilityChangedWithAvailability(slot func(availability QMultimedia__AvailabilityStatus)) {
	C.QMediaObject_connect_AvailabilityChangedWithAvailability(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaObject_AvailabilityChangedWithAvailability
func miqt_exec_callback_QMediaObject_AvailabilityChangedWithAvailability(cb C.intptr_t, availability C.int) {
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
	var _ms C.struct_miqt_string = C.QMediaObject_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaObject_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaObject_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaObject_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaObject) Delete() {
	C.QMediaObject_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaObject) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaObject) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
