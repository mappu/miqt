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

type QTimeZone__ int

const (
	QTimeZone__MinUtcOffsetSecs QTimeZone__ = -50400
	QTimeZone__MaxUtcOffsetSecs QTimeZone__ = 50400
)

type QTimeZone__TimeType int

const (
	QTimeZone__StandardTime QTimeZone__TimeType = 0
	QTimeZone__DaylightTime QTimeZone__TimeType = 1
	QTimeZone__GenericTime  QTimeZone__TimeType = 2
)

type QTimeZone__NameType int

const (
	QTimeZone__DefaultName QTimeZone__NameType = 0
	QTimeZone__LongName    QTimeZone__NameType = 1
	QTimeZone__ShortName   QTimeZone__NameType = 2
	QTimeZone__OffsetName  QTimeZone__NameType = 3
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
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	abbreviation_ms := miqt_strdupg(abbreviation)
	defer C.free(abbreviation_ms)
	ret := C.QTimeZone_new4(zoneId.cPointer(), (C.int)(offsetSeconds), (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(abbreviation_ms))
	return newQTimeZone(ret)
}

// NewQTimeZone5 constructs a new QTimeZone object.
func NewQTimeZone5(other *QTimeZone) *QTimeZone {
	ret := C.QTimeZone_new5(other.cPointer())
	return newQTimeZone(ret)
}

// NewQTimeZone6 constructs a new QTimeZone object.
func NewQTimeZone6(zoneId *QByteArray, offsetSeconds int, name string, abbreviation string, country QLocale__Country) *QTimeZone {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	abbreviation_ms := miqt_strdupg(abbreviation)
	defer C.free(abbreviation_ms)
	ret := C.QTimeZone_new6(zoneId.cPointer(), (C.int)(offsetSeconds), (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(abbreviation_ms), (C.int)(country))
	return newQTimeZone(ret)
}

// NewQTimeZone7 constructs a new QTimeZone object.
func NewQTimeZone7(zoneId *QByteArray, offsetSeconds int, name string, abbreviation string, country QLocale__Country, comment string) *QTimeZone {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	abbreviation_ms := miqt_strdupg(abbreviation)
	defer C.free(abbreviation_ms)
	comment_ms := miqt_strdupg(comment)
	defer C.free(comment_ms)
	ret := C.QTimeZone_new7(zoneId.cPointer(), (C.int)(offsetSeconds), (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(abbreviation_ms), (C.int)(country), (*C.struct_miqt_string)(comment_ms))
	return newQTimeZone(ret)
}

func (this *QTimeZone) OperatorAssign(other *QTimeZone) {
	C.QTimeZone_OperatorAssign(this.h, other.cPointer())
}

func (this *QTimeZone) Swap(other *QTimeZone) {
	C.QTimeZone_Swap(this.h, other.cPointer())
}

func (this *QTimeZone) OperatorEqual(other *QTimeZone) bool {
	return (bool)(C.QTimeZone_OperatorEqual(this.h, other.cPointer()))
}

func (this *QTimeZone) OperatorNotEqual(other *QTimeZone) bool {
	return (bool)(C.QTimeZone_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QTimeZone) IsValid() bool {
	return (bool)(C.QTimeZone_IsValid(this.h))
}

func (this *QTimeZone) Id() *QByteArray {
	_ret := C.QTimeZone_Id(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTimeZone) Country() QLocale__Country {
	return (QLocale__Country)(C.QTimeZone_Country(this.h))
}

func (this *QTimeZone) Comment() string {
	var _ms *C.struct_miqt_string = C.QTimeZone_Comment(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTimeZone) DisplayName(atDateTime *QDateTime) string {
	var _ms *C.struct_miqt_string = C.QTimeZone_DisplayName(this.h, atDateTime.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTimeZone) DisplayNameWithTimeType(timeType QTimeZone__TimeType) string {
	var _ms *C.struct_miqt_string = C.QTimeZone_DisplayNameWithTimeType(this.h, (C.int)(timeType))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTimeZone) Abbreviation(atDateTime *QDateTime) string {
	var _ms *C.struct_miqt_string = C.QTimeZone_Abbreviation(this.h, atDateTime.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTimeZone) OffsetFromUtc(atDateTime *QDateTime) int {
	return (int)(C.QTimeZone_OffsetFromUtc(this.h, atDateTime.cPointer()))
}

func (this *QTimeZone) StandardTimeOffset(atDateTime *QDateTime) int {
	return (int)(C.QTimeZone_StandardTimeOffset(this.h, atDateTime.cPointer()))
}

func (this *QTimeZone) DaylightTimeOffset(atDateTime *QDateTime) int {
	return (int)(C.QTimeZone_DaylightTimeOffset(this.h, atDateTime.cPointer()))
}

func (this *QTimeZone) HasDaylightTime() bool {
	return (bool)(C.QTimeZone_HasDaylightTime(this.h))
}

func (this *QTimeZone) IsDaylightTime(atDateTime *QDateTime) bool {
	return (bool)(C.QTimeZone_IsDaylightTime(this.h, atDateTime.cPointer()))
}

func (this *QTimeZone) OffsetData(forDateTime *QDateTime) *QTimeZone__OffsetData {
	_ret := C.QTimeZone_OffsetData(this.h, forDateTime.cPointer())
	_goptr := newQTimeZone__OffsetData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTimeZone) HasTransitions() bool {
	return (bool)(C.QTimeZone_HasTransitions(this.h))
}

func (this *QTimeZone) NextTransition(afterDateTime *QDateTime) *QTimeZone__OffsetData {
	_ret := C.QTimeZone_NextTransition(this.h, afterDateTime.cPointer())
	_goptr := newQTimeZone__OffsetData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTimeZone) PreviousTransition(beforeDateTime *QDateTime) *QTimeZone__OffsetData {
	_ret := C.QTimeZone_PreviousTransition(this.h, beforeDateTime.cPointer())
	_goptr := newQTimeZone__OffsetData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTimeZone) Transitions(fromDateTime *QDateTime, toDateTime *QDateTime) []QTimeZone__OffsetData {
	var _ma *C.struct_miqt_array = C.QTimeZone_Transitions(this.h, fromDateTime.cPointer(), toDateTime.cPointer())
	_ret := make([]QTimeZone__OffsetData, int(_ma.len))
	_outCast := (*[0xffff]*C.QTimeZone__OffsetData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_ret := _outCast[i]
		_vv_goptr := newQTimeZone__OffsetData(_vv_ret)
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QTimeZone_SystemTimeZoneId() *QByteArray {
	_ret := C.QTimeZone_SystemTimeZoneId()
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTimeZone_SystemTimeZone() *QTimeZone {
	_ret := C.QTimeZone_SystemTimeZone()
	_goptr := newQTimeZone(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTimeZone_Utc() *QTimeZone {
	_ret := C.QTimeZone_Utc()
	_goptr := newQTimeZone(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTimeZone_IsTimeZoneIdAvailable(ianaId *QByteArray) bool {
	return (bool)(C.QTimeZone_IsTimeZoneIdAvailable(ianaId.cPointer()))
}

func QTimeZone_AvailableTimeZoneIds() []QByteArray {
	var _ma *C.struct_miqt_array = C.QTimeZone_AvailableTimeZoneIds()
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QTimeZone_AvailableTimeZoneIdsWithCountry(country QLocale__Country) []QByteArray {
	var _ma *C.struct_miqt_array = C.QTimeZone_AvailableTimeZoneIdsWithCountry((C.int)(country))
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(offsetSeconds int) []QByteArray {
	var _ma *C.struct_miqt_array = C.QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds((C.int)(offsetSeconds))
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QTimeZone_IanaIdToWindowsId(ianaId *QByteArray) *QByteArray {
	_ret := C.QTimeZone_IanaIdToWindowsId(ianaId.cPointer())
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTimeZone_WindowsIdToDefaultIanaId(windowsId *QByteArray) *QByteArray {
	_ret := C.QTimeZone_WindowsIdToDefaultIanaId(windowsId.cPointer())
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTimeZone_WindowsIdToDefaultIanaId2(windowsId *QByteArray, country QLocale__Country) *QByteArray {
	_ret := C.QTimeZone_WindowsIdToDefaultIanaId2(windowsId.cPointer(), (C.int)(country))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTimeZone_WindowsIdToIanaIds(windowsId *QByteArray) []QByteArray {
	var _ma *C.struct_miqt_array = C.QTimeZone_WindowsIdToIanaIds(windowsId.cPointer())
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QTimeZone_WindowsIdToIanaIds2(windowsId *QByteArray, country QLocale__Country) []QByteArray {
	var _ma *C.struct_miqt_array = C.QTimeZone_WindowsIdToIanaIds2(windowsId.cPointer(), (C.int)(country))
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTimeZone) DisplayName2(atDateTime *QDateTime, nameType QTimeZone__NameType) string {
	var _ms *C.struct_miqt_string = C.QTimeZone_DisplayName2(this.h, atDateTime.cPointer(), (C.int)(nameType))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTimeZone) DisplayName3(atDateTime *QDateTime, nameType QTimeZone__NameType, locale *QLocale) string {
	var _ms *C.struct_miqt_string = C.QTimeZone_DisplayName3(this.h, atDateTime.cPointer(), (C.int)(nameType), locale.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTimeZone) DisplayName22(timeType QTimeZone__TimeType, nameType QTimeZone__NameType) string {
	var _ms *C.struct_miqt_string = C.QTimeZone_DisplayName22(this.h, (C.int)(timeType), (C.int)(nameType))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTimeZone) DisplayName32(timeType QTimeZone__TimeType, nameType QTimeZone__NameType, locale *QLocale) string {
	var _ms *C.struct_miqt_string = C.QTimeZone_DisplayName32(this.h, (C.int)(timeType), (C.int)(nameType), locale.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTimeZone) Delete() {
	C.QTimeZone_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimeZone) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimeZone) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QTimeZone__OffsetData) OperatorAssign(param1 *QTimeZone__OffsetData) {
	C.QTimeZone__OffsetData_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTimeZone__OffsetData) Delete() {
	C.QTimeZone__OffsetData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimeZone__OffsetData) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimeZone__OffsetData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
