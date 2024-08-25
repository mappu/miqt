package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtimezone.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTimeZone struct {
	h *C.QTimeZone
}

func (this *QTimeZone) cPointer() *C.QTimeZone {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTimeZone(h *C.QTimeZone) *QTimeZone {
	return &QTimeZone{h: h}
}

func newQTimeZone_U(h unsafe.Pointer) *QTimeZone {
	return newQTimeZone((*C.QTimeZone)(h))
}

// NewQTimeZone constructs a new QTimeZone object.
func NewQTimeZone() *QTimeZone {
	ret := C.QTimeZone_new()
	return newQTimeZone(ret)
}

// NewQTimeZone2 constructs a new QTimeZone object.
func NewQTimeZone2(ianaId *QByteArray) *QTimeZone {
	ret := C.QTimeZone_new2(ianaId.cPointer())
	return newQTimeZone(ret)
}

// NewQTimeZone3 constructs a new QTimeZone object.
func NewQTimeZone3(offsetSeconds int) *QTimeZone {
	ret := C.QTimeZone_new3((C.int)(offsetSeconds))
	return newQTimeZone(ret)
}

// NewQTimeZone4 constructs a new QTimeZone object.
func NewQTimeZone4(other *QTimeZone) *QTimeZone {
	ret := C.QTimeZone_new4(other.cPointer())
	return newQTimeZone(ret)
}

func (this *QTimeZone) OperatorAssign(other *QTimeZone) {
	C.QTimeZone_OperatorAssign(this.h, other.cPointer())
}

func (this *QTimeZone) Swap(other *QTimeZone) {
	C.QTimeZone_Swap(this.h, other.cPointer())
}

func (this *QTimeZone) OperatorEqual(other *QTimeZone) bool {
	ret := C.QTimeZone_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTimeZone) OperatorNotEqual(other *QTimeZone) bool {
	ret := C.QTimeZone_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTimeZone) IsValid() bool {
	ret := C.QTimeZone_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTimeZone) Id() *QByteArray {
	ret := C.QTimeZone_Id(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTimeZone) Comment() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeZone_Comment(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) Abbreviation(atDateTime *QDateTime) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeZone_Abbreviation(this.h, atDateTime.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) OffsetFromUtc(atDateTime *QDateTime) int {
	ret := C.QTimeZone_OffsetFromUtc(this.h, atDateTime.cPointer())
	return (int)(ret)
}

func (this *QTimeZone) StandardTimeOffset(atDateTime *QDateTime) int {
	ret := C.QTimeZone_StandardTimeOffset(this.h, atDateTime.cPointer())
	return (int)(ret)
}

func (this *QTimeZone) DaylightTimeOffset(atDateTime *QDateTime) int {
	ret := C.QTimeZone_DaylightTimeOffset(this.h, atDateTime.cPointer())
	return (int)(ret)
}

func (this *QTimeZone) HasDaylightTime() bool {
	ret := C.QTimeZone_HasDaylightTime(this.h)
	return (bool)(ret)
}

func (this *QTimeZone) IsDaylightTime(atDateTime *QDateTime) bool {
	ret := C.QTimeZone_IsDaylightTime(this.h, atDateTime.cPointer())
	return (bool)(ret)
}

func (this *QTimeZone) HasTransitions() bool {
	ret := C.QTimeZone_HasTransitions(this.h)
	return (bool)(ret)
}

func QTimeZone_SystemTimeZoneId() *QByteArray {
	ret := C.QTimeZone_SystemTimeZoneId()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTimeZone_SystemTimeZone() *QTimeZone {
	ret := C.QTimeZone_SystemTimeZone()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTimeZone(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTimeZone) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTimeZone_Utc() *QTimeZone {
	ret := C.QTimeZone_Utc()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTimeZone(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTimeZone) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTimeZone_IsTimeZoneIdAvailable(ianaId *QByteArray) bool {
	ret := C.QTimeZone_IsTimeZoneIdAvailable(ianaId.cPointer())
	return (bool)(ret)
}

func QTimeZone_AvailableTimeZoneIds() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QTimeZone_AvailableTimeZoneIds(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(offsetSeconds int) []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds((C.int)(offsetSeconds), &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimeZone_IanaIdToWindowsId(ianaId *QByteArray) *QByteArray {
	ret := C.QTimeZone_IanaIdToWindowsId(ianaId.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTimeZone_WindowsIdToDefaultIanaId(windowsId *QByteArray) *QByteArray {
	ret := C.QTimeZone_WindowsIdToDefaultIanaId(windowsId.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTimeZone_WindowsIdToIanaIds(windowsId *QByteArray) []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QTimeZone_WindowsIdToIanaIds(windowsId.cPointer(), &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) Delete() {
	C.QTimeZone_Delete(this.h)
}
