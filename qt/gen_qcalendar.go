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

func (this *QCalendar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCalendar constructs the type using only CGO pointers.
func newQCalendar(h *C.QCalendar) *QCalendar {
	if h == nil {
		return nil
	}

	return &QCalendar{h: h}
}

// UnsafeNewQCalendar constructs the type using only unsafe pointers.
func UnsafeNewQCalendar(h unsafe.Pointer) *QCalendar {
	return newQCalendar((*C.QCalendar)(h))
}

// NewQCalendar constructs a new QCalendar object.
func NewQCalendar() *QCalendar {

	return newQCalendar(C.QCalendar_new())
}

// NewQCalendar2 constructs a new QCalendar object.
func NewQCalendar2(system QCalendar__System) *QCalendar {

	return newQCalendar(C.QCalendar_new2((C.int)(system)))
}

func (this *QCalendar) IsValid() bool {
	return (bool)(C.QCalendar_isValid(this.h))
}

func (this *QCalendar) DaysInMonth(month int) int {
	return (int)(C.QCalendar_daysInMonth(this.h, (C.int)(month)))
}

func (this *QCalendar) DaysInYear(year int) int {
	return (int)(C.QCalendar_daysInYear(this.h, (C.int)(year)))
}

func (this *QCalendar) MonthsInYear(year int) int {
	return (int)(C.QCalendar_monthsInYear(this.h, (C.int)(year)))
}

func (this *QCalendar) IsDateValid(year int, month int, day int) bool {
	return (bool)(C.QCalendar_isDateValid(this.h, (C.int)(year), (C.int)(month), (C.int)(day)))
}

func (this *QCalendar) IsLeapYear(year int) bool {
	return (bool)(C.QCalendar_isLeapYear(this.h, (C.int)(year)))
}

func (this *QCalendar) IsGregorian() bool {
	return (bool)(C.QCalendar_isGregorian(this.h))
}

func (this *QCalendar) IsLunar() bool {
	return (bool)(C.QCalendar_isLunar(this.h))
}

func (this *QCalendar) IsLuniSolar() bool {
	return (bool)(C.QCalendar_isLuniSolar(this.h))
}

func (this *QCalendar) IsSolar() bool {
	return (bool)(C.QCalendar_isSolar(this.h))
}

func (this *QCalendar) IsProleptic() bool {
	return (bool)(C.QCalendar_isProleptic(this.h))
}

func (this *QCalendar) HasYearZero() bool {
	return (bool)(C.QCalendar_hasYearZero(this.h))
}

func (this *QCalendar) MaximumDaysInMonth() int {
	return (int)(C.QCalendar_maximumDaysInMonth(this.h))
}

func (this *QCalendar) MinimumDaysInMonth() int {
	return (int)(C.QCalendar_minimumDaysInMonth(this.h))
}

func (this *QCalendar) MaximumMonthsInYear() int {
	return (int)(C.QCalendar_maximumMonthsInYear(this.h))
}

func (this *QCalendar) Name() string {
	var _ms C.struct_miqt_string = C.QCalendar_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendar) DateFromParts(year int, month int, day int) *QDate {
	_goptr := newQDate(C.QCalendar_dateFromParts(this.h, (C.int)(year), (C.int)(month), (C.int)(day)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendar) DateFromPartsWithParts(parts *QCalendar__YearMonthDay) *QDate {
	_goptr := newQDate(C.QCalendar_dateFromPartsWithParts(this.h, parts.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendar) PartsFromDate(date QDate) *QCalendar__YearMonthDay {
	_goptr := newQCalendar__YearMonthDay(C.QCalendar_partsFromDate(this.h, date.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendar) DayOfWeek(date QDate) int {
	return (int)(C.QCalendar_dayOfWeek(this.h, date.cPointer()))
}

func (this *QCalendar) MonthName(locale *QLocale, month int) string {
	var _ms C.struct_miqt_string = C.QCalendar_monthName(this.h, locale.cPointer(), (C.int)(month))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendar) StandaloneMonthName(locale *QLocale, month int) string {
	var _ms C.struct_miqt_string = C.QCalendar_standaloneMonthName(this.h, locale.cPointer(), (C.int)(month))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendar) WeekDayName(locale *QLocale, day int) string {
	var _ms C.struct_miqt_string = C.QCalendar_weekDayName(this.h, locale.cPointer(), (C.int)(day))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendar) StandaloneWeekDayName(locale *QLocale, day int) string {
	var _ms C.struct_miqt_string = C.QCalendar_standaloneWeekDayName(this.h, locale.cPointer(), (C.int)(day))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCalendar_AvailableCalendars() []string {
	var _ma C.struct_miqt_array = C.QCalendar_availableCalendars()
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

func (this *QCalendar) DaysInMonth2(month int, year int) int {
	return (int)(C.QCalendar_daysInMonth2(this.h, (C.int)(month), (C.int)(year)))
}

func (this *QCalendar) MonthName2(locale *QLocale, month int, year int) string {
	var _ms C.struct_miqt_string = C.QCalendar_monthName2(this.h, locale.cPointer(), (C.int)(month), (C.int)(year))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendar) MonthName3(locale *QLocale, month int, year int, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QCalendar_monthName3(this.h, locale.cPointer(), (C.int)(month), (C.int)(year), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendar) StandaloneMonthName2(locale *QLocale, month int, year int) string {
	var _ms C.struct_miqt_string = C.QCalendar_standaloneMonthName2(this.h, locale.cPointer(), (C.int)(month), (C.int)(year))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendar) StandaloneMonthName3(locale *QLocale, month int, year int, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QCalendar_standaloneMonthName3(this.h, locale.cPointer(), (C.int)(month), (C.int)(year), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendar) WeekDayName2(locale *QLocale, day int, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QCalendar_weekDayName2(this.h, locale.cPointer(), (C.int)(day), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendar) StandaloneWeekDayName2(locale *QLocale, day int, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QCalendar_standaloneWeekDayName2(this.h, locale.cPointer(), (C.int)(day), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCalendar) Delete() {
	C.QCalendar_delete(this.h)
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

func (this *QCalendar__YearMonthDay) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCalendar__YearMonthDay constructs the type using only CGO pointers.
func newQCalendar__YearMonthDay(h *C.QCalendar__YearMonthDay) *QCalendar__YearMonthDay {
	if h == nil {
		return nil
	}

	return &QCalendar__YearMonthDay{h: h}
}

// UnsafeNewQCalendar__YearMonthDay constructs the type using only unsafe pointers.
func UnsafeNewQCalendar__YearMonthDay(h unsafe.Pointer) *QCalendar__YearMonthDay {
	return newQCalendar__YearMonthDay((*C.QCalendar__YearMonthDay)(h))
}

// NewQCalendar__YearMonthDay constructs a new QCalendar::YearMonthDay object.
func NewQCalendar__YearMonthDay() *QCalendar__YearMonthDay {

	return newQCalendar__YearMonthDay(C.QCalendar__YearMonthDay_new())
}

// NewQCalendar__YearMonthDay2 constructs a new QCalendar::YearMonthDay object.
func NewQCalendar__YearMonthDay2(y int) *QCalendar__YearMonthDay {

	return newQCalendar__YearMonthDay(C.QCalendar__YearMonthDay_new2((C.int)(y)))
}

// NewQCalendar__YearMonthDay3 constructs a new QCalendar::YearMonthDay object.
func NewQCalendar__YearMonthDay3(y int, m int) *QCalendar__YearMonthDay {

	return newQCalendar__YearMonthDay(C.QCalendar__YearMonthDay_new3((C.int)(y), (C.int)(m)))
}

// NewQCalendar__YearMonthDay4 constructs a new QCalendar::YearMonthDay object.
func NewQCalendar__YearMonthDay4(y int, m int, d int) *QCalendar__YearMonthDay {

	return newQCalendar__YearMonthDay(C.QCalendar__YearMonthDay_new4((C.int)(y), (C.int)(m), (C.int)(d)))
}

func (this *QCalendar__YearMonthDay) IsValid() bool {
	return (bool)(C.QCalendar__YearMonthDay_isValid(this.h))
}

// Delete this object from C++ memory.
func (this *QCalendar__YearMonthDay) Delete() {
	C.QCalendar__YearMonthDay_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCalendar__YearMonthDay) GoGC() {
	runtime.SetFinalizer(this, func(this *QCalendar__YearMonthDay) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
