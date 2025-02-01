package qt6

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

func (this *QTimeZone) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTimeZone constructs the type using only CGO pointers.
func newQTimeZone(h *C.QTimeZone) *QTimeZone {
	if h == nil {
		return nil
	}

	return &QTimeZone{h: h}
}

// UnsafeNewQTimeZone constructs the type using only unsafe pointers.
func UnsafeNewQTimeZone(h unsafe.Pointer) *QTimeZone {
	return newQTimeZone((*C.QTimeZone)(h))
}

// NewQTimeZone constructs a new QTimeZone object.
func NewQTimeZone() *QTimeZone {

	return newQTimeZone(C.QTimeZone_new())
}

// NewQTimeZone2 constructs a new QTimeZone object.
func NewQTimeZone2(ianaId []byte) *QTimeZone {
	ianaId_alias := C.struct_miqt_string{}
	if len(ianaId) > 0 {
		ianaId_alias.data = (*C.char)(unsafe.Pointer(&ianaId[0]))
	} else {
		ianaId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ianaId_alias.len = C.size_t(len(ianaId))

	return newQTimeZone(C.QTimeZone_new2(ianaId_alias))
}

// NewQTimeZone3 constructs a new QTimeZone object.
func NewQTimeZone3(offsetSeconds int) *QTimeZone {

	return newQTimeZone(C.QTimeZone_new3((C.int)(offsetSeconds)))
}

// NewQTimeZone4 constructs a new QTimeZone object.
func NewQTimeZone4(zoneId []byte, offsetSeconds int, name string, abbreviation string) *QTimeZone {
	zoneId_alias := C.struct_miqt_string{}
	if len(zoneId) > 0 {
		zoneId_alias.data = (*C.char)(unsafe.Pointer(&zoneId[0]))
	} else {
		zoneId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	zoneId_alias.len = C.size_t(len(zoneId))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	abbreviation_ms := C.struct_miqt_string{}
	abbreviation_ms.data = C.CString(abbreviation)
	abbreviation_ms.len = C.size_t(len(abbreviation))
	defer C.free(unsafe.Pointer(abbreviation_ms.data))

	return newQTimeZone(C.QTimeZone_new4(zoneId_alias, (C.int)(offsetSeconds), name_ms, abbreviation_ms))
}

// NewQTimeZone5 constructs a new QTimeZone object.
func NewQTimeZone5(other *QTimeZone) *QTimeZone {

	return newQTimeZone(C.QTimeZone_new5(other.cPointer()))
}

// NewQTimeZone6 constructs a new QTimeZone object.
func NewQTimeZone6(zoneId []byte, offsetSeconds int, name string, abbreviation string, territory QLocale__Country) *QTimeZone {
	zoneId_alias := C.struct_miqt_string{}
	if len(zoneId) > 0 {
		zoneId_alias.data = (*C.char)(unsafe.Pointer(&zoneId[0]))
	} else {
		zoneId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	zoneId_alias.len = C.size_t(len(zoneId))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	abbreviation_ms := C.struct_miqt_string{}
	abbreviation_ms.data = C.CString(abbreviation)
	abbreviation_ms.len = C.size_t(len(abbreviation))
	defer C.free(unsafe.Pointer(abbreviation_ms.data))

	return newQTimeZone(C.QTimeZone_new6(zoneId_alias, (C.int)(offsetSeconds), name_ms, abbreviation_ms, (C.uint16_t)(territory)))
}

// NewQTimeZone7 constructs a new QTimeZone object.
func NewQTimeZone7(zoneId []byte, offsetSeconds int, name string, abbreviation string, territory QLocale__Country, comment string) *QTimeZone {
	zoneId_alias := C.struct_miqt_string{}
	if len(zoneId) > 0 {
		zoneId_alias.data = (*C.char)(unsafe.Pointer(&zoneId[0]))
	} else {
		zoneId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	zoneId_alias.len = C.size_t(len(zoneId))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	abbreviation_ms := C.struct_miqt_string{}
	abbreviation_ms.data = C.CString(abbreviation)
	abbreviation_ms.len = C.size_t(len(abbreviation))
	defer C.free(unsafe.Pointer(abbreviation_ms.data))
	comment_ms := C.struct_miqt_string{}
	comment_ms.data = C.CString(comment)
	comment_ms.len = C.size_t(len(comment))
	defer C.free(unsafe.Pointer(comment_ms.data))

	return newQTimeZone(C.QTimeZone_new7(zoneId_alias, (C.int)(offsetSeconds), name_ms, abbreviation_ms, (C.uint16_t)(territory), comment_ms))
}

func (this *QTimeZone) OperatorAssign(other *QTimeZone) {
	C.QTimeZone_operatorAssign(this.h, other.cPointer())
}

func (this *QTimeZone) Swap(other *QTimeZone) {
	C.QTimeZone_swap(this.h, other.cPointer())
}

func (this *QTimeZone) IsValid() bool {
	return (bool)(C.QTimeZone_isValid(this.h))
}

func (this *QTimeZone) Id() []byte {
	var _bytearray C.struct_miqt_string = C.QTimeZone_id(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QTimeZone) Territory() QLocale__Country {
	return (QLocale__Country)(C.QTimeZone_territory(this.h))
}

func (this *QTimeZone) Country() QLocale__Country {
	return (QLocale__Country)(C.QTimeZone_country(this.h))
}

func (this *QTimeZone) Comment() string {
	var _ms C.struct_miqt_string = C.QTimeZone_comment(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayName(atDateTime *QDateTime) string {
	var _ms C.struct_miqt_string = C.QTimeZone_displayName(this.h, atDateTime.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayNameWithTimeType(timeType QTimeZone__TimeType) string {
	var _ms C.struct_miqt_string = C.QTimeZone_displayNameWithTimeType(this.h, (C.int)(timeType))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) Abbreviation(atDateTime *QDateTime) string {
	var _ms C.struct_miqt_string = C.QTimeZone_abbreviation(this.h, atDateTime.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) OffsetFromUtc(atDateTime *QDateTime) int {
	return (int)(C.QTimeZone_offsetFromUtc(this.h, atDateTime.cPointer()))
}

func (this *QTimeZone) StandardTimeOffset(atDateTime *QDateTime) int {
	return (int)(C.QTimeZone_standardTimeOffset(this.h, atDateTime.cPointer()))
}

func (this *QTimeZone) DaylightTimeOffset(atDateTime *QDateTime) int {
	return (int)(C.QTimeZone_daylightTimeOffset(this.h, atDateTime.cPointer()))
}

func (this *QTimeZone) HasDaylightTime() bool {
	return (bool)(C.QTimeZone_hasDaylightTime(this.h))
}

func (this *QTimeZone) IsDaylightTime(atDateTime *QDateTime) bool {
	return (bool)(C.QTimeZone_isDaylightTime(this.h, atDateTime.cPointer()))
}

func (this *QTimeZone) OffsetData(forDateTime *QDateTime) *QTimeZone__OffsetData {
	_goptr := newQTimeZone__OffsetData(C.QTimeZone_offsetData(this.h, forDateTime.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTimeZone) HasTransitions() bool {
	return (bool)(C.QTimeZone_hasTransitions(this.h))
}

func (this *QTimeZone) NextTransition(afterDateTime *QDateTime) *QTimeZone__OffsetData {
	_goptr := newQTimeZone__OffsetData(C.QTimeZone_nextTransition(this.h, afterDateTime.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTimeZone) PreviousTransition(beforeDateTime *QDateTime) *QTimeZone__OffsetData {
	_goptr := newQTimeZone__OffsetData(C.QTimeZone_previousTransition(this.h, beforeDateTime.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTimeZone) Transitions(fromDateTime *QDateTime, toDateTime *QDateTime) []QTimeZone__OffsetData {
	var _ma C.struct_miqt_array = C.QTimeZone_transitions(this.h, fromDateTime.cPointer(), toDateTime.cPointer())
	_ret := make([]QTimeZone__OffsetData, int(_ma.len))
	_outCast := (*[0xffff]*C.QTimeZone__OffsetData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQTimeZone__OffsetData(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QTimeZone_SystemTimeZoneId() []byte {
	var _bytearray C.struct_miqt_string = C.QTimeZone_systemTimeZoneId()
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QTimeZone_SystemTimeZone() *QTimeZone {
	_goptr := newQTimeZone(C.QTimeZone_systemTimeZone())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTimeZone_Utc() *QTimeZone {
	_goptr := newQTimeZone(C.QTimeZone_utc())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTimeZone_IsTimeZoneIdAvailable(ianaId []byte) bool {
	ianaId_alias := C.struct_miqt_string{}
	if len(ianaId) > 0 {
		ianaId_alias.data = (*C.char)(unsafe.Pointer(&ianaId[0]))
	} else {
		ianaId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ianaId_alias.len = C.size_t(len(ianaId))
	return (bool)(C.QTimeZone_isTimeZoneIdAvailable(ianaId_alias))
}

func QTimeZone_AvailableTimeZoneIds() [][]byte {
	var _ma C.struct_miqt_array = C.QTimeZone_availableTimeZoneIds()
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QTimeZone_AvailableTimeZoneIdsWithTerritory(territory QLocale__Country) [][]byte {
	var _ma C.struct_miqt_array = C.QTimeZone_availableTimeZoneIdsWithTerritory((C.uint16_t)(territory))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(offsetSeconds int) [][]byte {
	var _ma C.struct_miqt_array = C.QTimeZone_availableTimeZoneIdsWithOffsetSeconds((C.int)(offsetSeconds))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QTimeZone_IanaIdToWindowsId(ianaId []byte) []byte {
	ianaId_alias := C.struct_miqt_string{}
	if len(ianaId) > 0 {
		ianaId_alias.data = (*C.char)(unsafe.Pointer(&ianaId[0]))
	} else {
		ianaId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ianaId_alias.len = C.size_t(len(ianaId))
	var _bytearray C.struct_miqt_string = C.QTimeZone_ianaIdToWindowsId(ianaId_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QTimeZone_WindowsIdToDefaultIanaId(windowsId []byte) []byte {
	windowsId_alias := C.struct_miqt_string{}
	if len(windowsId) > 0 {
		windowsId_alias.data = (*C.char)(unsafe.Pointer(&windowsId[0]))
	} else {
		windowsId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	windowsId_alias.len = C.size_t(len(windowsId))
	var _bytearray C.struct_miqt_string = C.QTimeZone_windowsIdToDefaultIanaId(windowsId_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QTimeZone_WindowsIdToDefaultIanaId2(windowsId []byte, territory QLocale__Country) []byte {
	windowsId_alias := C.struct_miqt_string{}
	if len(windowsId) > 0 {
		windowsId_alias.data = (*C.char)(unsafe.Pointer(&windowsId[0]))
	} else {
		windowsId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	windowsId_alias.len = C.size_t(len(windowsId))
	var _bytearray C.struct_miqt_string = C.QTimeZone_windowsIdToDefaultIanaId2(windowsId_alias, (C.uint16_t)(territory))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QTimeZone_WindowsIdToIanaIds(windowsId []byte) [][]byte {
	windowsId_alias := C.struct_miqt_string{}
	if len(windowsId) > 0 {
		windowsId_alias.data = (*C.char)(unsafe.Pointer(&windowsId[0]))
	} else {
		windowsId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	windowsId_alias.len = C.size_t(len(windowsId))
	var _ma C.struct_miqt_array = C.QTimeZone_windowsIdToIanaIds(windowsId_alias)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QTimeZone_WindowsIdToIanaIds2(windowsId []byte, territory QLocale__Country) [][]byte {
	windowsId_alias := C.struct_miqt_string{}
	if len(windowsId) > 0 {
		windowsId_alias.data = (*C.char)(unsafe.Pointer(&windowsId[0]))
	} else {
		windowsId_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	windowsId_alias.len = C.size_t(len(windowsId))
	var _ma C.struct_miqt_array = C.QTimeZone_windowsIdToIanaIds2(windowsId_alias, (C.uint16_t)(territory))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QTimeZone) DisplayName2(atDateTime *QDateTime, nameType QTimeZone__NameType) string {
	var _ms C.struct_miqt_string = C.QTimeZone_displayName2(this.h, atDateTime.cPointer(), (C.int)(nameType))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayName3(atDateTime *QDateTime, nameType QTimeZone__NameType, locale *QLocale) string {
	var _ms C.struct_miqt_string = C.QTimeZone_displayName3(this.h, atDateTime.cPointer(), (C.int)(nameType), locale.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayName22(timeType QTimeZone__TimeType, nameType QTimeZone__NameType) string {
	var _ms C.struct_miqt_string = C.QTimeZone_displayName22(this.h, (C.int)(timeType), (C.int)(nameType))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayName32(timeType QTimeZone__TimeType, nameType QTimeZone__NameType, locale *QLocale) string {
	var _ms C.struct_miqt_string = C.QTimeZone_displayName32(this.h, (C.int)(timeType), (C.int)(nameType), locale.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTimeZone) Delete() {
	C.QTimeZone_delete(this.h)
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

func (this *QTimeZone__OffsetData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTimeZone__OffsetData constructs the type using only CGO pointers.
func newQTimeZone__OffsetData(h *C.QTimeZone__OffsetData) *QTimeZone__OffsetData {
	if h == nil {
		return nil
	}

	return &QTimeZone__OffsetData{h: h}
}

// UnsafeNewQTimeZone__OffsetData constructs the type using only unsafe pointers.
func UnsafeNewQTimeZone__OffsetData(h unsafe.Pointer) *QTimeZone__OffsetData {
	return newQTimeZone__OffsetData((*C.QTimeZone__OffsetData)(h))
}

// NewQTimeZone__OffsetData constructs a new QTimeZone::OffsetData object.
func NewQTimeZone__OffsetData(param1 *QTimeZone__OffsetData) *QTimeZone__OffsetData {

	return newQTimeZone__OffsetData(C.QTimeZone__OffsetData_new(param1.cPointer()))
}

func (this *QTimeZone__OffsetData) OperatorAssign(param1 *QTimeZone__OffsetData) {
	C.QTimeZone__OffsetData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTimeZone__OffsetData) Delete() {
	C.QTimeZone__OffsetData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimeZone__OffsetData) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimeZone__OffsetData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
