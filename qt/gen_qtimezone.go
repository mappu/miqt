package qt

/*

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
	if h == nil {
		return nil
	}
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
func NewQTimeZone4(zoneId *QByteArray, offsetSeconds int, name string, abbreviation string) *QTimeZone {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	abbreviation_Cstring := C.CString(abbreviation)
	defer C.free(unsafe.Pointer(abbreviation_Cstring))
	ret := C.QTimeZone_new4(zoneId.cPointer(), (C.int)(offsetSeconds), name_Cstring, C.size_t(len(name)), abbreviation_Cstring, C.size_t(len(abbreviation)))
	return newQTimeZone(ret)
}

// NewQTimeZone5 constructs a new QTimeZone object.
func NewQTimeZone5(other *QTimeZone) *QTimeZone {
	ret := C.QTimeZone_new5(other.cPointer())
	return newQTimeZone(ret)
}

// NewQTimeZone6 constructs a new QTimeZone object.
func NewQTimeZone6(zoneId *QByteArray, offsetSeconds int, name string, abbreviation string, country uintptr) *QTimeZone {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	abbreviation_Cstring := C.CString(abbreviation)
	defer C.free(unsafe.Pointer(abbreviation_Cstring))
	ret := C.QTimeZone_new6(zoneId.cPointer(), (C.int)(offsetSeconds), name_Cstring, C.size_t(len(name)), abbreviation_Cstring, C.size_t(len(abbreviation)), (C.uintptr_t)(country))
	return newQTimeZone(ret)
}

// NewQTimeZone7 constructs a new QTimeZone object.
func NewQTimeZone7(zoneId *QByteArray, offsetSeconds int, name string, abbreviation string, country uintptr, comment string) *QTimeZone {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	abbreviation_Cstring := C.CString(abbreviation)
	defer C.free(unsafe.Pointer(abbreviation_Cstring))
	comment_Cstring := C.CString(comment)
	defer C.free(unsafe.Pointer(comment_Cstring))
	ret := C.QTimeZone_new7(zoneId.cPointer(), (C.int)(offsetSeconds), name_Cstring, C.size_t(len(name)), abbreviation_Cstring, C.size_t(len(abbreviation)), (C.uintptr_t)(country), comment_Cstring, C.size_t(len(comment)))
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

func (this *QTimeZone) Country() uintptr {
	ret := C.QTimeZone_Country(this.h)
	return (uintptr)(ret)
}

func (this *QTimeZone) Comment() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeZone_Comment(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) DisplayName(atDateTime *QDateTime) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeZone_DisplayName(this.h, atDateTime.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) DisplayNameWithTimeType(timeType uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeZone_DisplayNameWithTimeType(this.h, (C.uintptr_t)(timeType), &_out, &_out_Strlen)
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

func (this *QTimeZone) OffsetData(forDateTime *QDateTime) *QTimeZone__OffsetData {
	ret := C.QTimeZone_OffsetData(this.h, forDateTime.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTimeZone__OffsetData(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTimeZone__OffsetData) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTimeZone) HasTransitions() bool {
	ret := C.QTimeZone_HasTransitions(this.h)
	return (bool)(ret)
}

func (this *QTimeZone) NextTransition(afterDateTime *QDateTime) *QTimeZone__OffsetData {
	ret := C.QTimeZone_NextTransition(this.h, afterDateTime.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTimeZone__OffsetData(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTimeZone__OffsetData) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTimeZone) PreviousTransition(beforeDateTime *QDateTime) *QTimeZone__OffsetData {
	ret := C.QTimeZone_PreviousTransition(this.h, beforeDateTime.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTimeZone__OffsetData(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTimeZone__OffsetData) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTimeZone) Transitions(fromDateTime *QDateTime, toDateTime *QDateTime) []QTimeZone__OffsetData {
	var _out **C.QTimeZone__OffsetData = nil
	var _out_len C.size_t = 0
	C.QTimeZone_Transitions(this.h, fromDateTime.cPointer(), toDateTime.cPointer(), &_out, &_out_len)
	ret := make([]QTimeZone__OffsetData, int(_out_len))
	_outCast := (*[0xffff]*C.QTimeZone__OffsetData)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTimeZone__OffsetData(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
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

func QTimeZone_AvailableTimeZoneIdsWithCountry(country uintptr) []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QTimeZone_AvailableTimeZoneIdsWithCountry((C.uintptr_t)(country), &_out, &_out_len)
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

func QTimeZone_WindowsIdToDefaultIanaId2(windowsId *QByteArray, country uintptr) *QByteArray {
	ret := C.QTimeZone_WindowsIdToDefaultIanaId2(windowsId.cPointer(), (C.uintptr_t)(country))
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

func QTimeZone_WindowsIdToIanaIds2(windowsId *QByteArray, country uintptr) []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QTimeZone_WindowsIdToIanaIds2(windowsId.cPointer(), (C.uintptr_t)(country), &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) DisplayName2(atDateTime *QDateTime, nameType uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeZone_DisplayName2(this.h, atDateTime.cPointer(), (C.uintptr_t)(nameType), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) DisplayName3(atDateTime *QDateTime, nameType uintptr, locale *QLocale) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeZone_DisplayName3(this.h, atDateTime.cPointer(), (C.uintptr_t)(nameType), locale.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) DisplayName22(timeType uintptr, nameType uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeZone_DisplayName22(this.h, (C.uintptr_t)(timeType), (C.uintptr_t)(nameType), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) DisplayName32(timeType uintptr, nameType uintptr, locale *QLocale) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeZone_DisplayName32(this.h, (C.uintptr_t)(timeType), (C.uintptr_t)(nameType), locale.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeZone) Delete() {
	C.QTimeZone_Delete(this.h)
}

type QTimeZone__OffsetData struct {
	h *C.QTimeZone__OffsetData
}

func (this *QTimeZone__OffsetData) cPointer() *C.QTimeZone__OffsetData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTimeZone__OffsetData(h *C.QTimeZone__OffsetData) *QTimeZone__OffsetData {
	if h == nil {
		return nil
	}
	return &QTimeZone__OffsetData{h: h}
}

func newQTimeZone__OffsetData_U(h unsafe.Pointer) *QTimeZone__OffsetData {
	return newQTimeZone__OffsetData((*C.QTimeZone__OffsetData)(h))
}

// NewQTimeZone__OffsetData constructs a new QTimeZone::OffsetData object.
func NewQTimeZone__OffsetData(param1 *QTimeZone__OffsetData) *QTimeZone__OffsetData {
	ret := C.QTimeZone__OffsetData_new(param1.cPointer())
	return newQTimeZone__OffsetData(ret)
}

func (this *QTimeZone__OffsetData) Delete() {
	C.QTimeZone__OffsetData_Delete(this.h)
}
