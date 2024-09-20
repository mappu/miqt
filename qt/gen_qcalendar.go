package qt

/*

#include "gen_qcalendar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCalendar__ int

const (
	QCalendar__Unspecified QCalendar__ = -2147483648
)

type QCalendar__System int

const (
	QCalendar__Gregorian    QCalendar__System = 0
	QCalendar__Julian       QCalendar__System = 8
	QCalendar__Milankovic   QCalendar__System = 9
	QCalendar__Jalali       QCalendar__System = 10
	QCalendar__IslamicCivil QCalendar__System = 11
	QCalendar__Last         QCalendar__System = 11
	QCalendar__User         QCalendar__System = -1
)

type QCalendar struct {
	h *C.QCalendar
}

func (this *QCalendar) cPointer() *C.QCalendar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCalendar(h *C.QCalendar) *QCalendar {
	if h == nil {
		return nil
	}
	return &QCalendar{h: h}
}

func newQCalendar_U(h unsafe.Pointer) *QCalendar {
	return newQCalendar((*C.QCalendar)(h))
}

// NewQCalendar constructs a new QCalendar object.
func NewQCalendar() *QCalendar {
	ret := C.QCalendar_new()
	return newQCalendar(ret)
}

// NewQCalendar2 constructs a new QCalendar object.
func NewQCalendar2(system QCalendar__System) *QCalendar {
	ret := C.QCalendar_new2((C.int)(system))
	return newQCalendar(ret)
}

func (this *QCalendar) IsValid() bool {
	return (bool)(C.QCalendar_IsValid(this.h))
}

func (this *QCalendar) DaysInMonth(month int) int {
	return (int)(C.QCalendar_DaysInMonth(this.h, (C.int)(month)))
}

func (this *QCalendar) DaysInYear(year int) int {
	return (int)(C.QCalendar_DaysInYear(this.h, (C.int)(year)))
}

func (this *QCalendar) MonthsInYear(year int) int {
	return (int)(C.QCalendar_MonthsInYear(this.h, (C.int)(year)))
}

func (this *QCalendar) IsDateValid(year int, month int, day int) bool {
	return (bool)(C.QCalendar_IsDateValid(this.h, (C.int)(year), (C.int)(month), (C.int)(day)))
}

func (this *QCalendar) IsLeapYear(year int) bool {
	return (bool)(C.QCalendar_IsLeapYear(this.h, (C.int)(year)))
}

func (this *QCalendar) IsGregorian() bool {
	return (bool)(C.QCalendar_IsGregorian(this.h))
}

func (this *QCalendar) IsLunar() bool {
	return (bool)(C.QCalendar_IsLunar(this.h))
}

func (this *QCalendar) IsLuniSolar() bool {
	return (bool)(C.QCalendar_IsLuniSolar(this.h))
}

func (this *QCalendar) IsSolar() bool {
	return (bool)(C.QCalendar_IsSolar(this.h))
}

func (this *QCalendar) IsProleptic() bool {
	return (bool)(C.QCalendar_IsProleptic(this.h))
}

func (this *QCalendar) HasYearZero() bool {
	return (bool)(C.QCalendar_HasYearZero(this.h))
}

func (this *QCalendar) MaximumDaysInMonth() int {
	return (int)(C.QCalendar_MaximumDaysInMonth(this.h))
}

func (this *QCalendar) MinimumDaysInMonth() int {
	return (int)(C.QCalendar_MinimumDaysInMonth(this.h))
}

func (this *QCalendar) MaximumMonthsInYear() int {
	return (int)(C.QCalendar_MaximumMonthsInYear(this.h))
}

func (this *QCalendar) Name() string {
	var _ms *C.struct_miqt_string = C.QCalendar_Name(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) DateFromParts(year int, month int, day int) *QDate {
	_ret := C.QCalendar_DateFromParts(this.h, (C.int)(year), (C.int)(month), (C.int)(day))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendar) DateFromPartsWithParts(parts *QCalendar__YearMonthDay) *QDate {
	_ret := C.QCalendar_DateFromPartsWithParts(this.h, parts.cPointer())
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendar) PartsFromDate(date QDate) *QCalendar__YearMonthDay {
	_ret := C.QCalendar_PartsFromDate(this.h, date.cPointer())
	_goptr := newQCalendar__YearMonthDay(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendar) DayOfWeek(date QDate) int {
	return (int)(C.QCalendar_DayOfWeek(this.h, date.cPointer()))
}

func (this *QCalendar) MonthName(locale *QLocale, month int) string {
	var _ms *C.struct_miqt_string = C.QCalendar_MonthName(this.h, locale.cPointer(), (C.int)(month))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) StandaloneMonthName(locale *QLocale, month int) string {
	var _ms *C.struct_miqt_string = C.QCalendar_StandaloneMonthName(this.h, locale.cPointer(), (C.int)(month))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) WeekDayName(locale *QLocale, day int) string {
	var _ms *C.struct_miqt_string = C.QCalendar_WeekDayName(this.h, locale.cPointer(), (C.int)(day))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) StandaloneWeekDayName(locale *QLocale, day int) string {
	var _ms *C.struct_miqt_string = C.QCalendar_StandaloneWeekDayName(this.h, locale.cPointer(), (C.int)(day))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCalendar_AvailableCalendars() []string {
	var _ma *C.struct_miqt_array = C.QCalendar_AvailableCalendars()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QCalendar) DaysInMonth2(month int, year int) int {
	return (int)(C.QCalendar_DaysInMonth2(this.h, (C.int)(month), (C.int)(year)))
}

func (this *QCalendar) MonthName3(locale *QLocale, month int, year int) string {
	var _ms *C.struct_miqt_string = C.QCalendar_MonthName3(this.h, locale.cPointer(), (C.int)(month), (C.int)(year))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) MonthName4(locale *QLocale, month int, year int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QCalendar_MonthName4(this.h, locale.cPointer(), (C.int)(month), (C.int)(year), (C.int)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) StandaloneMonthName3(locale *QLocale, month int, year int) string {
	var _ms *C.struct_miqt_string = C.QCalendar_StandaloneMonthName3(this.h, locale.cPointer(), (C.int)(month), (C.int)(year))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) StandaloneMonthName4(locale *QLocale, month int, year int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QCalendar_StandaloneMonthName4(this.h, locale.cPointer(), (C.int)(month), (C.int)(year), (C.int)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) WeekDayName3(locale *QLocale, day int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QCalendar_WeekDayName3(this.h, locale.cPointer(), (C.int)(day), (C.int)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) StandaloneWeekDayName3(locale *QLocale, day int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QCalendar_StandaloneWeekDayName3(this.h, locale.cPointer(), (C.int)(day), (C.int)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCalendar) Delete() {
	C.QCalendar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCalendar) GoGC() {
	runtime.SetFinalizer(this, func(this *QCalendar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCalendar__YearMonthDay struct {
	h *C.QCalendar__YearMonthDay
}

func (this *QCalendar__YearMonthDay) cPointer() *C.QCalendar__YearMonthDay {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCalendar__YearMonthDay(h *C.QCalendar__YearMonthDay) *QCalendar__YearMonthDay {
	if h == nil {
		return nil
	}
	return &QCalendar__YearMonthDay{h: h}
}

func newQCalendar__YearMonthDay_U(h unsafe.Pointer) *QCalendar__YearMonthDay {
	return newQCalendar__YearMonthDay((*C.QCalendar__YearMonthDay)(h))
}

// NewQCalendar__YearMonthDay constructs a new QCalendar::YearMonthDay object.
func NewQCalendar__YearMonthDay() *QCalendar__YearMonthDay {
	ret := C.QCalendar__YearMonthDay_new()
	return newQCalendar__YearMonthDay(ret)
}

// NewQCalendar__YearMonthDay2 constructs a new QCalendar::YearMonthDay object.
func NewQCalendar__YearMonthDay2(y int) *QCalendar__YearMonthDay {
	ret := C.QCalendar__YearMonthDay_new2((C.int)(y))
	return newQCalendar__YearMonthDay(ret)
}

// NewQCalendar__YearMonthDay3 constructs a new QCalendar::YearMonthDay object.
func NewQCalendar__YearMonthDay3(y int, m int) *QCalendar__YearMonthDay {
	ret := C.QCalendar__YearMonthDay_new3((C.int)(y), (C.int)(m))
	return newQCalendar__YearMonthDay(ret)
}

// NewQCalendar__YearMonthDay4 constructs a new QCalendar::YearMonthDay object.
func NewQCalendar__YearMonthDay4(y int, m int, d int) *QCalendar__YearMonthDay {
	ret := C.QCalendar__YearMonthDay_new4((C.int)(y), (C.int)(m), (C.int)(d))
	return newQCalendar__YearMonthDay(ret)
}

func (this *QCalendar__YearMonthDay) IsValid() bool {
	return (bool)(C.QCalendar__YearMonthDay_IsValid(this.h))
}

// Delete this object from C++ memory.
func (this *QCalendar__YearMonthDay) Delete() {
	C.QCalendar__YearMonthDay_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCalendar__YearMonthDay) GoGC() {
	runtime.SetFinalizer(this, func(this *QCalendar__YearMonthDay) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
