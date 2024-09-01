package qt

/*

#include "gen_qdatetime.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDate struct {
	h *C.QDate
}

func (this *QDate) cPointer() *C.QDate {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDate(h *C.QDate) *QDate {
	if h == nil {
		return nil
	}
	return &QDate{h: h}
}

func newQDate_U(h unsafe.Pointer) *QDate {
	return newQDate((*C.QDate)(h))
}

// NewQDate constructs a new QDate object.
func NewQDate() *QDate {
	ret := C.QDate_new()
	return newQDate(ret)
}

// NewQDate2 constructs a new QDate object.
func NewQDate2(y int, m int, d int) *QDate {
	ret := C.QDate_new2((C.int)(y), (C.int)(m), (C.int)(d))
	return newQDate(ret)
}

// NewQDate3 constructs a new QDate object.
func NewQDate3(y int, m int, d int, cal QCalendar) *QDate {
	ret := C.QDate_new3((C.int)(y), (C.int)(m), (C.int)(d), cal.cPointer())
	return newQDate(ret)
}

// NewQDate4 constructs a new QDate object.
func NewQDate4(param1 *QDate) *QDate {
	ret := C.QDate_new4(param1.cPointer())
	return newQDate(ret)
}

func (this *QDate) IsNull() bool {
	ret := C.QDate_IsNull(this.h)
	return (bool)(ret)
}

func (this *QDate) IsValid() bool {
	ret := C.QDate_IsValid(this.h)
	return (bool)(ret)
}

func (this *QDate) Year() int {
	ret := C.QDate_Year(this.h)
	return (int)(ret)
}

func (this *QDate) Month() int {
	ret := C.QDate_Month(this.h)
	return (int)(ret)
}

func (this *QDate) Day() int {
	ret := C.QDate_Day(this.h)
	return (int)(ret)
}

func (this *QDate) DayOfWeek() int {
	ret := C.QDate_DayOfWeek(this.h)
	return (int)(ret)
}

func (this *QDate) DayOfYear() int {
	ret := C.QDate_DayOfYear(this.h)
	return (int)(ret)
}

func (this *QDate) DaysInMonth() int {
	ret := C.QDate_DaysInMonth(this.h)
	return (int)(ret)
}

func (this *QDate) DaysInYear() int {
	ret := C.QDate_DaysInYear(this.h)
	return (int)(ret)
}

func (this *QDate) WeekNumber() int {
	ret := C.QDate_WeekNumber(this.h)
	return (int)(ret)
}

func (this *QDate) YearWithCal(cal QCalendar) int {
	ret := C.QDate_YearWithCal(this.h, cal.cPointer())
	return (int)(ret)
}

func (this *QDate) MonthWithCal(cal QCalendar) int {
	ret := C.QDate_MonthWithCal(this.h, cal.cPointer())
	return (int)(ret)
}

func (this *QDate) DayWithCal(cal QCalendar) int {
	ret := C.QDate_DayWithCal(this.h, cal.cPointer())
	return (int)(ret)
}

func (this *QDate) DayOfWeekWithCal(cal QCalendar) int {
	ret := C.QDate_DayOfWeekWithCal(this.h, cal.cPointer())
	return (int)(ret)
}

func (this *QDate) DayOfYearWithCal(cal QCalendar) int {
	ret := C.QDate_DayOfYearWithCal(this.h, cal.cPointer())
	return (int)(ret)
}

func (this *QDate) DaysInMonthWithCal(cal QCalendar) int {
	ret := C.QDate_DaysInMonthWithCal(this.h, cal.cPointer())
	return (int)(ret)
}

func (this *QDate) DaysInYearWithCal(cal QCalendar) int {
	ret := C.QDate_DaysInYearWithCal(this.h, cal.cPointer())
	return (int)(ret)
}

func (this *QDate) StartOfDay() *QDateTime {
	ret := C.QDate_StartOfDay(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) EndOfDay() *QDateTime {
	ret := C.QDate_EndOfDay(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) StartOfDayWithZone(zone *QTimeZone) *QDateTime {
	ret := C.QDate_StartOfDayWithZone(this.h, zone.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) EndOfDayWithZone(zone *QTimeZone) *QDateTime {
	ret := C.QDate_EndOfDayWithZone(this.h, zone.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDate_ShortMonthName(month int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_ShortMonthName((C.int)(month), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDate_ShortDayName(weekday int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_ShortDayName((C.int)(weekday), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDate_LongMonthName(month int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_LongMonthName((C.int)(month), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDate_LongDayName(weekday int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_LongDayName((C.int)(weekday), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDate) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDate) ToString2(format uintptr, cal QCalendar) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_ToString2(this.h, (C.uintptr_t)(format), cal.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDate) ToStringWithFormat(format string) string {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_ToStringWithFormat(this.h, format_Cstring, C.ulong(len(format)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDate) ToString3(format string, cal QCalendar) string {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_ToString3(this.h, format_Cstring, C.ulong(len(format)), cal.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDate) SetDate(year int, month int, day int) bool {
	ret := C.QDate_SetDate(this.h, (C.int)(year), (C.int)(month), (C.int)(day))
	return (bool)(ret)
}

func (this *QDate) SetDate2(year int, month int, day int, cal QCalendar) bool {
	ret := C.QDate_SetDate2(this.h, (C.int)(year), (C.int)(month), (C.int)(day), cal.cPointer())
	return (bool)(ret)
}

func (this *QDate) GetDate(year *int, month *int, day *int) {
	C.QDate_GetDate(this.h, (*C.int)(unsafe.Pointer(year)), (*C.int)(unsafe.Pointer(month)), (*C.int)(unsafe.Pointer(day)))
}

func (this *QDate) GetDate2(year *int, month *int, day *int) {
	C.QDate_GetDate2(this.h, (*C.int)(unsafe.Pointer(year)), (*C.int)(unsafe.Pointer(month)), (*C.int)(unsafe.Pointer(day)))
}

func (this *QDate) AddDays(days int64) *QDate {
	ret := C.QDate_AddDays(this.h, (C.longlong)(days))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) AddMonths(months int) *QDate {
	ret := C.QDate_AddMonths(this.h, (C.int)(months))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) AddYears(years int) *QDate {
	ret := C.QDate_AddYears(this.h, (C.int)(years))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) AddMonths2(months int, cal QCalendar) *QDate {
	ret := C.QDate_AddMonths2(this.h, (C.int)(months), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) AddYears2(years int, cal QCalendar) *QDate {
	ret := C.QDate_AddYears2(this.h, (C.int)(years), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) DaysTo(param1 *QDate) int64 {
	ret := C.QDate_DaysTo(this.h, param1.cPointer())
	return (int64)(ret)
}

func (this *QDate) OperatorEqual(other *QDate) bool {
	ret := C.QDate_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDate) OperatorNotEqual(other *QDate) bool {
	ret := C.QDate_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDate) OperatorLesser(other *QDate) bool {
	ret := C.QDate_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDate) OperatorLesserOrEqual(other *QDate) bool {
	ret := C.QDate_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDate) OperatorGreater(other *QDate) bool {
	ret := C.QDate_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDate) OperatorGreaterOrEqual(other *QDate) bool {
	ret := C.QDate_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func QDate_CurrentDate() *QDate {
	ret := C.QDate_CurrentDate()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDate_FromString(s string) *QDate {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QDate_FromString(s_Cstring, C.ulong(len(s)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDate_FromString2(s string, format string) *QDate {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QDate_FromString2(s_Cstring, C.ulong(len(s)), format_Cstring, C.ulong(len(format)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDate_FromString3(s string, format string, cal QCalendar) *QDate {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QDate_FromString3(s_Cstring, C.ulong(len(s)), format_Cstring, C.ulong(len(format)), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDate_IsValid2(y int, m int, d int) bool {
	ret := C.QDate_IsValid2((C.int)(y), (C.int)(m), (C.int)(d))
	return (bool)(ret)
}

func QDate_IsLeapYear(year int) bool {
	ret := C.QDate_IsLeapYear((C.int)(year))
	return (bool)(ret)
}

func QDate_FromJulianDay(jd_ int64) *QDate {
	ret := C.QDate_FromJulianDay((C.longlong)(jd_))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) ToJulianDay() int64 {
	ret := C.QDate_ToJulianDay(this.h)
	return (int64)(ret)
}

func (this *QDate) WeekNumber1(yearNum *int) int {
	ret := C.QDate_WeekNumber1(this.h, (*C.int)(unsafe.Pointer(yearNum)))
	return (int)(ret)
}

func (this *QDate) StartOfDay1(spec uintptr) *QDateTime {
	ret := C.QDate_StartOfDay1(this.h, (C.uintptr_t)(spec))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) StartOfDay2(spec uintptr, offsetSeconds int) *QDateTime {
	ret := C.QDate_StartOfDay2(this.h, (C.uintptr_t)(spec), (C.int)(offsetSeconds))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) EndOfDay1(spec uintptr) *QDateTime {
	ret := C.QDate_EndOfDay1(this.h, (C.uintptr_t)(spec))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) EndOfDay2(spec uintptr, offsetSeconds int) *QDateTime {
	ret := C.QDate_EndOfDay2(this.h, (C.uintptr_t)(spec), (C.int)(offsetSeconds))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDate_ShortMonthName2(month int, typeVal uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_ShortMonthName2((C.int)(month), (C.uintptr_t)(typeVal), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDate_ShortDayName2(weekday int, typeVal uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_ShortDayName2((C.int)(weekday), (C.uintptr_t)(typeVal), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDate_LongMonthName2(month int, typeVal uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_LongMonthName2((C.int)(month), (C.uintptr_t)(typeVal), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDate_LongDayName2(weekday int, typeVal uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_LongDayName2((C.int)(weekday), (C.uintptr_t)(typeVal), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDate) ToString1(format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDate_ToString1(this.h, (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDate_FromString22(s string, f uintptr) *QDate {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QDate_FromString22(s_Cstring, C.ulong(len(s)), (C.uintptr_t)(f))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDate) Delete() {
	C.QDate_Delete(this.h)
}

type QTime struct {
	h *C.QTime
}

func (this *QTime) cPointer() *C.QTime {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTime(h *C.QTime) *QTime {
	if h == nil {
		return nil
	}
	return &QTime{h: h}
}

func newQTime_U(h unsafe.Pointer) *QTime {
	return newQTime((*C.QTime)(h))
}

// NewQTime constructs a new QTime object.
func NewQTime() *QTime {
	ret := C.QTime_new()
	return newQTime(ret)
}

// NewQTime2 constructs a new QTime object.
func NewQTime2(h int, m int) *QTime {
	ret := C.QTime_new2((C.int)(h), (C.int)(m))
	return newQTime(ret)
}

// NewQTime3 constructs a new QTime object.
func NewQTime3(param1 *QTime) *QTime {
	ret := C.QTime_new3(param1.cPointer())
	return newQTime(ret)
}

// NewQTime4 constructs a new QTime object.
func NewQTime4(h int, m int, s int) *QTime {
	ret := C.QTime_new4((C.int)(h), (C.int)(m), (C.int)(s))
	return newQTime(ret)
}

// NewQTime5 constructs a new QTime object.
func NewQTime5(h int, m int, s int, ms int) *QTime {
	ret := C.QTime_new5((C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms))
	return newQTime(ret)
}

func (this *QTime) IsNull() bool {
	ret := C.QTime_IsNull(this.h)
	return (bool)(ret)
}

func (this *QTime) IsValid() bool {
	ret := C.QTime_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTime) Hour() int {
	ret := C.QTime_Hour(this.h)
	return (int)(ret)
}

func (this *QTime) Minute() int {
	ret := C.QTime_Minute(this.h)
	return (int)(ret)
}

func (this *QTime) Second() int {
	ret := C.QTime_Second(this.h)
	return (int)(ret)
}

func (this *QTime) Msec() int {
	ret := C.QTime_Msec(this.h)
	return (int)(ret)
}

func (this *QTime) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTime_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTime) ToStringWithFormat(format string) string {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTime_ToStringWithFormat(this.h, format_Cstring, C.ulong(len(format)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTime) SetHMS(h int, m int, s int) bool {
	ret := C.QTime_SetHMS(this.h, (C.int)(h), (C.int)(m), (C.int)(s))
	return (bool)(ret)
}

func (this *QTime) AddSecs(secs int) *QTime {
	ret := C.QTime_AddSecs(this.h, (C.int)(secs))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTime) SecsTo(param1 *QTime) int {
	ret := C.QTime_SecsTo(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QTime) AddMSecs(ms int) *QTime {
	ret := C.QTime_AddMSecs(this.h, (C.int)(ms))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTime) MsecsTo(param1 *QTime) int {
	ret := C.QTime_MsecsTo(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QTime) OperatorEqual(other *QTime) bool {
	ret := C.QTime_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTime) OperatorNotEqual(other *QTime) bool {
	ret := C.QTime_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTime) OperatorLesser(other *QTime) bool {
	ret := C.QTime_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTime) OperatorLesserOrEqual(other *QTime) bool {
	ret := C.QTime_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTime) OperatorGreater(other *QTime) bool {
	ret := C.QTime_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTime) OperatorGreaterOrEqual(other *QTime) bool {
	ret := C.QTime_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func QTime_FromMSecsSinceStartOfDay(msecs int) *QTime {
	ret := C.QTime_FromMSecsSinceStartOfDay((C.int)(msecs))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTime) MsecsSinceStartOfDay() int {
	ret := C.QTime_MsecsSinceStartOfDay(this.h)
	return (int)(ret)
}

func QTime_CurrentTime() *QTime {
	ret := C.QTime_CurrentTime()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTime_FromString(s string) *QTime {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QTime_FromString(s_Cstring, C.ulong(len(s)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTime_FromString2(s string, format string) *QTime {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QTime_FromString2(s_Cstring, C.ulong(len(s)), format_Cstring, C.ulong(len(format)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTime_IsValid2(h int, m int, s int) bool {
	ret := C.QTime_IsValid2((C.int)(h), (C.int)(m), (C.int)(s))
	return (bool)(ret)
}

func (this *QTime) Start() {
	C.QTime_Start(this.h)
}

func (this *QTime) Restart() int {
	ret := C.QTime_Restart(this.h)
	return (int)(ret)
}

func (this *QTime) Elapsed() int {
	ret := C.QTime_Elapsed(this.h)
	return (int)(ret)
}

func (this *QTime) ToString1(f uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTime_ToString1(this.h, (C.uintptr_t)(f), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTime) SetHMS4(h int, m int, s int, ms int) bool {
	ret := C.QTime_SetHMS4(this.h, (C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms))
	return (bool)(ret)
}

func QTime_FromString22(s string, f uintptr) *QTime {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QTime_FromString22(s_Cstring, C.ulong(len(s)), (C.uintptr_t)(f))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTime_IsValid4(h int, m int, s int, ms int) bool {
	ret := C.QTime_IsValid4((C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms))
	return (bool)(ret)
}

func (this *QTime) Delete() {
	C.QTime_Delete(this.h)
}

type QDateTime struct {
	h *C.QDateTime
}

func (this *QDateTime) cPointer() *C.QDateTime {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDateTime(h *C.QDateTime) *QDateTime {
	if h == nil {
		return nil
	}
	return &QDateTime{h: h}
}

func newQDateTime_U(h unsafe.Pointer) *QDateTime {
	return newQDateTime((*C.QDateTime)(h))
}

// NewQDateTime constructs a new QDateTime object.
func NewQDateTime(param1 *QDate) *QDateTime {
	ret := C.QDateTime_new(param1.cPointer())
	return newQDateTime(ret)
}

// NewQDateTime2 constructs a new QDateTime object.
func NewQDateTime2(param1 *QDate, param2 *QTime) *QDateTime {
	ret := C.QDateTime_new2(param1.cPointer(), param2.cPointer())
	return newQDateTime(ret)
}

// NewQDateTime3 constructs a new QDateTime object.
func NewQDateTime3(date *QDate, time *QTime, spec uintptr, offsetSeconds int) *QDateTime {
	ret := C.QDateTime_new3(date.cPointer(), time.cPointer(), (C.uintptr_t)(spec), (C.int)(offsetSeconds))
	return newQDateTime(ret)
}

// NewQDateTime4 constructs a new QDateTime object.
func NewQDateTime4(date *QDate, time *QTime, timeZone *QTimeZone) *QDateTime {
	ret := C.QDateTime_new4(date.cPointer(), time.cPointer(), timeZone.cPointer())
	return newQDateTime(ret)
}

// NewQDateTime5 constructs a new QDateTime object.
func NewQDateTime5(other *QDateTime) *QDateTime {
	ret := C.QDateTime_new5(other.cPointer())
	return newQDateTime(ret)
}

// NewQDateTime6 constructs a new QDateTime object.
func NewQDateTime6(param1 *QDate, param2 *QTime, spec uintptr) *QDateTime {
	ret := C.QDateTime_new6(param1.cPointer(), param2.cPointer(), (C.uintptr_t)(spec))
	return newQDateTime(ret)
}

func (this *QDateTime) OperatorAssign(other *QDateTime) {
	C.QDateTime_OperatorAssign(this.h, other.cPointer())
}

func (this *QDateTime) Swap(other *QDateTime) {
	C.QDateTime_Swap(this.h, other.cPointer())
}

func (this *QDateTime) IsNull() bool {
	ret := C.QDateTime_IsNull(this.h)
	return (bool)(ret)
}

func (this *QDateTime) IsValid() bool {
	ret := C.QDateTime_IsValid(this.h)
	return (bool)(ret)
}

func (this *QDateTime) Date() *QDate {
	ret := C.QDateTime_Date(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) Time() *QTime {
	ret := C.QDateTime_Time(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) TimeSpec() uintptr {
	ret := C.QDateTime_TimeSpec(this.h)
	return (uintptr)(ret)
}

func (this *QDateTime) OffsetFromUtc() int {
	ret := C.QDateTime_OffsetFromUtc(this.h)
	return (int)(ret)
}

func (this *QDateTime) TimeZone() *QTimeZone {
	ret := C.QDateTime_TimeZone(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTimeZone(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTimeZone) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) TimeZoneAbbreviation() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTime_TimeZoneAbbreviation(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateTime) IsDaylightTime() bool {
	ret := C.QDateTime_IsDaylightTime(this.h)
	return (bool)(ret)
}

func (this *QDateTime) ToMSecsSinceEpoch() int64 {
	ret := C.QDateTime_ToMSecsSinceEpoch(this.h)
	return (int64)(ret)
}

func (this *QDateTime) ToSecsSinceEpoch() int64 {
	ret := C.QDateTime_ToSecsSinceEpoch(this.h)
	return (int64)(ret)
}

func (this *QDateTime) SetDate(date *QDate) {
	C.QDateTime_SetDate(this.h, date.cPointer())
}

func (this *QDateTime) SetTime(time *QTime) {
	C.QDateTime_SetTime(this.h, time.cPointer())
}

func (this *QDateTime) SetTimeSpec(spec uintptr) {
	C.QDateTime_SetTimeSpec(this.h, (C.uintptr_t)(spec))
}

func (this *QDateTime) SetOffsetFromUtc(offsetSeconds int) {
	C.QDateTime_SetOffsetFromUtc(this.h, (C.int)(offsetSeconds))
}

func (this *QDateTime) SetTimeZone(toZone *QTimeZone) {
	C.QDateTime_SetTimeZone(this.h, toZone.cPointer())
}

func (this *QDateTime) SetMSecsSinceEpoch(msecs int64) {
	C.QDateTime_SetMSecsSinceEpoch(this.h, (C.longlong)(msecs))
}

func (this *QDateTime) SetSecsSinceEpoch(secs int64) {
	C.QDateTime_SetSecsSinceEpoch(this.h, (C.longlong)(secs))
}

func (this *QDateTime) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTime_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateTime) ToStringWithFormat(format string) string {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTime_ToStringWithFormat(this.h, format_Cstring, C.ulong(len(format)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateTime) ToString2(format string, cal QCalendar) string {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTime_ToString2(this.h, format_Cstring, C.ulong(len(format)), cal.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateTime) AddDays(days int64) *QDateTime {
	ret := C.QDateTime_AddDays(this.h, (C.longlong)(days))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) AddMonths(months int) *QDateTime {
	ret := C.QDateTime_AddMonths(this.h, (C.int)(months))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) AddYears(years int) *QDateTime {
	ret := C.QDateTime_AddYears(this.h, (C.int)(years))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) AddSecs(secs int64) *QDateTime {
	ret := C.QDateTime_AddSecs(this.h, (C.longlong)(secs))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) AddMSecs(msecs int64) *QDateTime {
	ret := C.QDateTime_AddMSecs(this.h, (C.longlong)(msecs))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) ToTimeSpec(spec uintptr) *QDateTime {
	ret := C.QDateTime_ToTimeSpec(this.h, (C.uintptr_t)(spec))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) ToLocalTime() *QDateTime {
	ret := C.QDateTime_ToLocalTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) ToUTC() *QDateTime {
	ret := C.QDateTime_ToUTC(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) ToOffsetFromUtc(offsetSeconds int) *QDateTime {
	ret := C.QDateTime_ToOffsetFromUtc(this.h, (C.int)(offsetSeconds))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) ToTimeZone(toZone *QTimeZone) *QDateTime {
	ret := C.QDateTime_ToTimeZone(this.h, toZone.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) DaysTo(param1 *QDateTime) int64 {
	ret := C.QDateTime_DaysTo(this.h, param1.cPointer())
	return (int64)(ret)
}

func (this *QDateTime) SecsTo(param1 *QDateTime) int64 {
	ret := C.QDateTime_SecsTo(this.h, param1.cPointer())
	return (int64)(ret)
}

func (this *QDateTime) MsecsTo(param1 *QDateTime) int64 {
	ret := C.QDateTime_MsecsTo(this.h, param1.cPointer())
	return (int64)(ret)
}

func (this *QDateTime) OperatorEqual(other *QDateTime) bool {
	ret := C.QDateTime_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDateTime) OperatorNotEqual(other *QDateTime) bool {
	ret := C.QDateTime_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDateTime) OperatorLesser(other *QDateTime) bool {
	ret := C.QDateTime_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDateTime) OperatorLesserOrEqual(other *QDateTime) bool {
	ret := C.QDateTime_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDateTime) OperatorGreater(other *QDateTime) bool {
	ret := C.QDateTime_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDateTime) OperatorGreaterOrEqual(other *QDateTime) bool {
	ret := C.QDateTime_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QDateTime) SetUtcOffset(seconds int) {
	C.QDateTime_SetUtcOffset(this.h, (C.int)(seconds))
}

func (this *QDateTime) UtcOffset() int {
	ret := C.QDateTime_UtcOffset(this.h)
	return (int)(ret)
}

func QDateTime_CurrentDateTime() *QDateTime {
	ret := C.QDateTime_CurrentDateTime()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_CurrentDateTimeUtc() *QDateTime {
	ret := C.QDateTime_CurrentDateTimeUtc()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromString(s string) *QDateTime {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QDateTime_FromString(s_Cstring, C.ulong(len(s)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromString2(s string, format string) *QDateTime {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QDateTime_FromString2(s_Cstring, C.ulong(len(s)), format_Cstring, C.ulong(len(format)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromString3(s string, format string, cal QCalendar) *QDateTime {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QDateTime_FromString3(s_Cstring, C.ulong(len(s)), format_Cstring, C.ulong(len(format)), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) ToTimeT() uint {
	ret := C.QDateTime_ToTimeT(this.h)
	return (uint)(ret)
}

func (this *QDateTime) SetTimeT(secsSince1Jan1970UTC uint) {
	C.QDateTime_SetTimeT(this.h, (C.uint)(secsSince1Jan1970UTC))
}

func QDateTime_FromTimeT(secsSince1Jan1970UTC uint) *QDateTime {
	ret := C.QDateTime_FromTimeT((C.uint)(secsSince1Jan1970UTC))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromTimeT2(secsSince1Jan1970UTC uint, spec uintptr) *QDateTime {
	ret := C.QDateTime_FromTimeT2((C.uint)(secsSince1Jan1970UTC), (C.uintptr_t)(spec))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromTimeT3(secsSince1Jan1970UTC uint, timeZone *QTimeZone) *QDateTime {
	ret := C.QDateTime_FromTimeT3((C.uint)(secsSince1Jan1970UTC), timeZone.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromMSecsSinceEpoch(msecs int64) *QDateTime {
	ret := C.QDateTime_FromMSecsSinceEpoch((C.longlong)(msecs))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromMSecsSinceEpoch2(msecs int64, spec uintptr) *QDateTime {
	ret := C.QDateTime_FromMSecsSinceEpoch2((C.longlong)(msecs), (C.uintptr_t)(spec))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromSecsSinceEpoch(secs int64) *QDateTime {
	ret := C.QDateTime_FromSecsSinceEpoch((C.longlong)(secs))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromMSecsSinceEpoch3(msecs int64, timeZone *QTimeZone) *QDateTime {
	ret := C.QDateTime_FromMSecsSinceEpoch3((C.longlong)(msecs), timeZone.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromSecsSinceEpoch2(secs int64, timeZone *QTimeZone) *QDateTime {
	ret := C.QDateTime_FromSecsSinceEpoch2((C.longlong)(secs), timeZone.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_CurrentMSecsSinceEpoch() int64 {
	ret := C.QDateTime_CurrentMSecsSinceEpoch()
	return (int64)(ret)
}

func QDateTime_CurrentSecsSinceEpoch() int64 {
	ret := C.QDateTime_CurrentSecsSinceEpoch()
	return (int64)(ret)
}

func (this *QDateTime) ToString1(format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTime_ToString1(this.h, (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDateTime_FromString22(s string, f uintptr) *QDateTime {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QDateTime_FromString22(s_Cstring, C.ulong(len(s)), (C.uintptr_t)(f))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromTimeT32(secsSince1Jan1970UTC uint, spec uintptr, offsetFromUtc int) *QDateTime {
	ret := C.QDateTime_FromTimeT32((C.uint)(secsSince1Jan1970UTC), (C.uintptr_t)(spec), (C.int)(offsetFromUtc))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromMSecsSinceEpoch32(msecs int64, spec uintptr, offsetFromUtc int) *QDateTime {
	ret := C.QDateTime_FromMSecsSinceEpoch32((C.longlong)(msecs), (C.uintptr_t)(spec), (C.int)(offsetFromUtc))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromSecsSinceEpoch22(secs int64, spe uintptr) *QDateTime {
	ret := C.QDateTime_FromSecsSinceEpoch22((C.longlong)(secs), (C.uintptr_t)(spe))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDateTime_FromSecsSinceEpoch3(secs int64, spe uintptr, offsetFromUtc int) *QDateTime {
	ret := C.QDateTime_FromSecsSinceEpoch3((C.longlong)(secs), (C.uintptr_t)(spe), (C.int)(offsetFromUtc))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTime) Delete() {
	C.QDateTime_Delete(this.h)
}
