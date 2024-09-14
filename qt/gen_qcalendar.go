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
	QCalendar____Unspecified QCalendar__ = -2147483648
)

type QCalendar__System int

const (
	QCalendar__System__Gregorian    QCalendar__System = 0
	QCalendar__System__Julian       QCalendar__System = 8
	QCalendar__System__Milankovic   QCalendar__System = 9
	QCalendar__System__Jalali       QCalendar__System = 10
	QCalendar__System__IslamicCivil QCalendar__System = 11
	QCalendar__System__Last         QCalendar__System = 11
	QCalendar__System__User         QCalendar__System = -1
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
	ret := C.QCalendar_new2((C.uintptr_t)(system))
	return newQCalendar(ret)
}

func (this *QCalendar) IsValid() bool {
	_ret := C.QCalendar_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QCalendar) DaysInMonth(month int) int {
	_ret := C.QCalendar_DaysInMonth(this.h, (C.int)(month))
	return (int)(_ret)
}

func (this *QCalendar) DaysInYear(year int) int {
	_ret := C.QCalendar_DaysInYear(this.h, (C.int)(year))
	return (int)(_ret)
}

func (this *QCalendar) MonthsInYear(year int) int {
	_ret := C.QCalendar_MonthsInYear(this.h, (C.int)(year))
	return (int)(_ret)
}

func (this *QCalendar) IsDateValid(year int, month int, day int) bool {
	_ret := C.QCalendar_IsDateValid(this.h, (C.int)(year), (C.int)(month), (C.int)(day))
	return (bool)(_ret)
}

func (this *QCalendar) IsLeapYear(year int) bool {
	_ret := C.QCalendar_IsLeapYear(this.h, (C.int)(year))
	return (bool)(_ret)
}

func (this *QCalendar) IsGregorian() bool {
	_ret := C.QCalendar_IsGregorian(this.h)
	return (bool)(_ret)
}

func (this *QCalendar) IsLunar() bool {
	_ret := C.QCalendar_IsLunar(this.h)
	return (bool)(_ret)
}

func (this *QCalendar) IsLuniSolar() bool {
	_ret := C.QCalendar_IsLuniSolar(this.h)
	return (bool)(_ret)
}

func (this *QCalendar) IsSolar() bool {
	_ret := C.QCalendar_IsSolar(this.h)
	return (bool)(_ret)
}

func (this *QCalendar) IsProleptic() bool {
	_ret := C.QCalendar_IsProleptic(this.h)
	return (bool)(_ret)
}

func (this *QCalendar) HasYearZero() bool {
	_ret := C.QCalendar_HasYearZero(this.h)
	return (bool)(_ret)
}

func (this *QCalendar) MaximumDaysInMonth() int {
	_ret := C.QCalendar_MaximumDaysInMonth(this.h)
	return (int)(_ret)
}

func (this *QCalendar) MinimumDaysInMonth() int {
	_ret := C.QCalendar_MinimumDaysInMonth(this.h)
	return (int)(_ret)
}

func (this *QCalendar) MaximumMonthsInYear() int {
	_ret := C.QCalendar_MaximumMonthsInYear(this.h)
	return (int)(_ret)
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
	_ret := C.QCalendar_DayOfWeek(this.h, date.cPointer())
	return (int)(_ret)
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
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QCalendar) DaysInMonth2(month int, year int) int {
	_ret := C.QCalendar_DaysInMonth2(this.h, (C.int)(month), (C.int)(year))
	return (int)(_ret)
}

func (this *QCalendar) MonthName3(locale *QLocale, month int, year int) string {
	var _ms *C.struct_miqt_string = C.QCalendar_MonthName3(this.h, locale.cPointer(), (C.int)(month), (C.int)(year))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) MonthName4(locale *QLocale, month int, year int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QCalendar_MonthName4(this.h, locale.cPointer(), (C.int)(month), (C.int)(year), (C.uintptr_t)(format))
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
	var _ms *C.struct_miqt_string = C.QCalendar_StandaloneMonthName4(this.h, locale.cPointer(), (C.int)(month), (C.int)(year), (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) WeekDayName3(locale *QLocale, day int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QCalendar_WeekDayName3(this.h, locale.cPointer(), (C.int)(day), (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCalendar) StandaloneWeekDayName3(locale *QLocale, day int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QCalendar_StandaloneWeekDayName3(this.h, locale.cPointer(), (C.int)(day), (C.uintptr_t)(format))
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
	_ret := C.QCalendar__YearMonthDay_IsValid(this.h)
	return (bool)(_ret)
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
