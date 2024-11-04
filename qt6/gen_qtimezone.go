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

func newQTimeZone(h *C.QTimeZone) *QTimeZone {
	if h == nil {
		return nil
	}
	return &QTimeZone{h: h}
}

func UnsafeNewQTimeZone(h unsafe.Pointer) *QTimeZone {
	return newQTimeZone((*C.QTimeZone)(h))
}

// NewQTimeZone constructs a new QTimeZone object.
func NewQTimeZone() *QTimeZone {
	ret := C.QTimeZone_new()
	return newQTimeZone(ret)
}

// NewQTimeZone2 constructs a new QTimeZone object.
func NewQTimeZone2(ianaId []byte) *QTimeZone {
	ianaId_alias := C.struct_miqt_string{}
	ianaId_alias.data = (*C.char)(unsafe.Pointer(&ianaId[0]))
	ianaId_alias.len = C.size_t(len(ianaId))
	ret := C.QTimeZone_new2(ianaId_alias)
	return newQTimeZone(ret)
}

// NewQTimeZone3 constructs a new QTimeZone object.
func NewQTimeZone3(offsetSeconds int) *QTimeZone {
	ret := C.QTimeZone_new3((C.int)(offsetSeconds))
	return newQTimeZone(ret)
}

// NewQTimeZone4 constructs a new QTimeZone object.
func NewQTimeZone4(zoneId []byte, offsetSeconds int, name string, abbreviation string) *QTimeZone {
	zoneId_alias := C.struct_miqt_string{}
	zoneId_alias.data = (*C.char)(unsafe.Pointer(&zoneId[0]))
	zoneId_alias.len = C.size_t(len(zoneId))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	abbreviation_ms := C.struct_miqt_string{}
	abbreviation_ms.data = C.CString(abbreviation)
	abbreviation_ms.len = C.size_t(len(abbreviation))
	defer C.free(unsafe.Pointer(abbreviation_ms.data))
	ret := C.QTimeZone_new4(zoneId_alias, (C.int)(offsetSeconds), name_ms, abbreviation_ms)
	return newQTimeZone(ret)
}

// NewQTimeZone5 constructs a new QTimeZone object.
func NewQTimeZone5(other *QTimeZone) *QTimeZone {
	ret := C.QTimeZone_new5(other.cPointer())
	return newQTimeZone(ret)
}

// NewQTimeZone6 constructs a new QTimeZone object.
func NewQTimeZone6(zoneId []byte, offsetSeconds int, name string, abbreviation string, territory QLocale__Country) *QTimeZone {
	zoneId_alias := C.struct_miqt_string{}
	zoneId_alias.data = (*C.char)(unsafe.Pointer(&zoneId[0]))
	zoneId_alias.len = C.size_t(len(zoneId))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	abbreviation_ms := C.struct_miqt_string{}
	abbreviation_ms.data = C.CString(abbreviation)
	abbreviation_ms.len = C.size_t(len(abbreviation))
	defer C.free(unsafe.Pointer(abbreviation_ms.data))
	ret := C.QTimeZone_new6(zoneId_alias, (C.int)(offsetSeconds), name_ms, abbreviation_ms, (C.uint16_t)(territory))
	return newQTimeZone(ret)
}

// NewQTimeZone7 constructs a new QTimeZone object.
func NewQTimeZone7(zoneId []byte, offsetSeconds int, name string, abbreviation string, territory QLocale__Country, comment string) *QTimeZone {
	zoneId_alias := C.struct_miqt_string{}
	zoneId_alias.data = (*C.char)(unsafe.Pointer(&zoneId[0]))
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
	ret := C.QTimeZone_new7(zoneId_alias, (C.int)(offsetSeconds), name_ms, abbreviation_ms, (C.uint16_t)(territory), comment_ms)
	return newQTimeZone(ret)
}

func (this *QTimeZone) OperatorAssign(other *QTimeZone) {
	C.QTimeZone_OperatorAssign(this.h, other.cPointer())
}

func (this *QTimeZone) Swap(other *QTimeZone) {
	C.QTimeZone_Swap(this.h, other.cPointer())
}

func (this *QTimeZone) IsValid() bool {
	return (bool)(C.QTimeZone_IsValid(this.h))
}

func (this *QTimeZone) Id() []byte {
	var _bytearray C.struct_miqt_string = C.QTimeZone_Id(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QTimeZone) Territory() QLocale__Country {
	return (QLocale__Country)(C.QTimeZone_Territory(this.h))
}

func (this *QTimeZone) Country() QLocale__Country {
	return (QLocale__Country)(C.QTimeZone_Country(this.h))
}

func (this *QTimeZone) Comment() string {
	var _ms C.struct_miqt_string = C.QTimeZone_Comment(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayName(atDateTime *QDateTime) string {
	var _ms C.struct_miqt_string = C.QTimeZone_DisplayName(this.h, atDateTime.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayNameWithTimeType(timeType QTimeZone__TimeType) string {
	var _ms C.struct_miqt_string = C.QTimeZone_DisplayNameWithTimeType(this.h, (C.int)(timeType))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) Abbreviation(atDateTime *QDateTime) string {
	var _ms C.struct_miqt_string = C.QTimeZone_Abbreviation(this.h, atDateTime.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	var _ma C.struct_miqt_array = C.QTimeZone_Transitions(this.h, fromDateTime.cPointer(), toDateTime.cPointer())
	_ret := make([]QTimeZone__OffsetData, int(_ma.len))
	_outCast := (*[0xffff]*C.QTimeZone__OffsetData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQTimeZone__OffsetData(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QTimeZone_SystemTimeZoneId() []byte {
	var _bytearray C.struct_miqt_string = C.QTimeZone_SystemTimeZoneId()
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
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

func QTimeZone_IsTimeZoneIdAvailable(ianaId []byte) bool {
	ianaId_alias := C.struct_miqt_string{}
	ianaId_alias.data = (*C.char)(unsafe.Pointer(&ianaId[0]))
	ianaId_alias.len = C.size_t(len(ianaId))
	return (bool)(C.QTimeZone_IsTimeZoneIdAvailable(ianaId_alias))
}

func QTimeZone_AvailableTimeZoneIds() [][]byte {
	var _ma C.struct_miqt_array = C.QTimeZone_AvailableTimeZoneIds()
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
	var _ma C.struct_miqt_array = C.QTimeZone_AvailableTimeZoneIdsWithTerritory((C.uint16_t)(territory))
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
	var _ma C.struct_miqt_array = C.QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds((C.int)(offsetSeconds))
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
	ianaId_alias.data = (*C.char)(unsafe.Pointer(&ianaId[0]))
	ianaId_alias.len = C.size_t(len(ianaId))
	var _bytearray C.struct_miqt_string = C.QTimeZone_IanaIdToWindowsId(ianaId_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QTimeZone_WindowsIdToDefaultIanaId(windowsId []byte) []byte {
	windowsId_alias := C.struct_miqt_string{}
	windowsId_alias.data = (*C.char)(unsafe.Pointer(&windowsId[0]))
	windowsId_alias.len = C.size_t(len(windowsId))
	var _bytearray C.struct_miqt_string = C.QTimeZone_WindowsIdToDefaultIanaId(windowsId_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QTimeZone_WindowsIdToDefaultIanaId2(windowsId []byte, territory QLocale__Country) []byte {
	windowsId_alias := C.struct_miqt_string{}
	windowsId_alias.data = (*C.char)(unsafe.Pointer(&windowsId[0]))
	windowsId_alias.len = C.size_t(len(windowsId))
	var _bytearray C.struct_miqt_string = C.QTimeZone_WindowsIdToDefaultIanaId2(windowsId_alias, (C.uint16_t)(territory))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QTimeZone_WindowsIdToIanaIds(windowsId []byte) [][]byte {
	windowsId_alias := C.struct_miqt_string{}
	windowsId_alias.data = (*C.char)(unsafe.Pointer(&windowsId[0]))
	windowsId_alias.len = C.size_t(len(windowsId))
	var _ma C.struct_miqt_array = C.QTimeZone_WindowsIdToIanaIds(windowsId_alias)
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
	windowsId_alias.data = (*C.char)(unsafe.Pointer(&windowsId[0]))
	windowsId_alias.len = C.size_t(len(windowsId))
	var _ma C.struct_miqt_array = C.QTimeZone_WindowsIdToIanaIds2(windowsId_alias, (C.uint16_t)(territory))
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
	var _ms C.struct_miqt_string = C.QTimeZone_DisplayName2(this.h, atDateTime.cPointer(), (C.int)(nameType))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayName3(atDateTime *QDateTime, nameType QTimeZone__NameType, locale *QLocale) string {
	var _ms C.struct_miqt_string = C.QTimeZone_DisplayName3(this.h, atDateTime.cPointer(), (C.int)(nameType), locale.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayName22(timeType QTimeZone__TimeType, nameType QTimeZone__NameType) string {
	var _ms C.struct_miqt_string = C.QTimeZone_DisplayName22(this.h, (C.int)(timeType), (C.int)(nameType))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeZone) DisplayName32(timeType QTimeZone__TimeType, nameType QTimeZone__NameType, locale *QLocale) string {
	var _ms C.struct_miqt_string = C.QTimeZone_DisplayName32(this.h, (C.int)(timeType), (C.int)(nameType), locale.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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

func (this *QTimeZone__OffsetData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTimeZone__OffsetData(h *C.QTimeZone__OffsetData) *QTimeZone__OffsetData {
	if h == nil {
		return nil
	}
	return &QTimeZone__OffsetData{h: h}
}

func UnsafeNewQTimeZone__OffsetData(h unsafe.Pointer) *QTimeZone__OffsetData {
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
