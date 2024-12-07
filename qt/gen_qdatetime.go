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

type QDate__MonthNameType int

const (
	QDate__DateFormat       QDate__MonthNameType = 0
	QDate__StandaloneFormat QDate__MonthNameType = 1
)

type QDateTime__YearRange int

const (
	QDateTime__First QDateTime__YearRange = -292275056
	QDateTime__Last  QDateTime__YearRange = 292278994
)

type QDate struct {
	h          *C.QDate
	isSubclass bool
}

func (this *QDate) cPointer() *C.QDate {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDate) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDate constructs the type using only CGO pointers.
func newQDate(h *C.QDate) *QDate {
	if h == nil {
		return nil
	}
	return &QDate{h: h}
}

// UnsafeNewQDate constructs the type using only unsafe pointers.
func UnsafeNewQDate(h unsafe.Pointer) *QDate {
	if h == nil {
		return nil
	}

	return &QDate{h: (*C.QDate)(h)}
}

// NewQDate constructs a new QDate object.
func NewQDate() *QDate {
	var outptr_QDate *C.QDate = nil

	C.QDate_new(&outptr_QDate)
	ret := newQDate(outptr_QDate)
	ret.isSubclass = true
	return ret
}

// NewQDate2 constructs a new QDate object.
func NewQDate2(y int, m int, d int) *QDate {
	var outptr_QDate *C.QDate = nil

	C.QDate_new2((C.int)(y), (C.int)(m), (C.int)(d), &outptr_QDate)
	ret := newQDate(outptr_QDate)
	ret.isSubclass = true
	return ret
}

// NewQDate3 constructs a new QDate object.
func NewQDate3(y int, m int, d int, cal QCalendar) *QDate {
	var outptr_QDate *C.QDate = nil

	C.QDate_new3((C.int)(y), (C.int)(m), (C.int)(d), cal.cPointer(), &outptr_QDate)
	ret := newQDate(outptr_QDate)
	ret.isSubclass = true
	return ret
}

// NewQDate4 constructs a new QDate object.
func NewQDate4(param1 *QDate) *QDate {
	var outptr_QDate *C.QDate = nil

	C.QDate_new4(param1.cPointer(), &outptr_QDate)
	ret := newQDate(outptr_QDate)
	ret.isSubclass = true
	return ret
}

func (this *QDate) IsNull() bool {
	return (bool)(C.QDate_IsNull(this.h))
}

func (this *QDate) IsValid() bool {
	return (bool)(C.QDate_IsValid(this.h))
}

func (this *QDate) Year() int {
	return (int)(C.QDate_Year(this.h))
}

func (this *QDate) Month() int {
	return (int)(C.QDate_Month(this.h))
}

func (this *QDate) Day() int {
	return (int)(C.QDate_Day(this.h))
}

func (this *QDate) DayOfWeek() int {
	return (int)(C.QDate_DayOfWeek(this.h))
}

func (this *QDate) DayOfYear() int {
	return (int)(C.QDate_DayOfYear(this.h))
}

func (this *QDate) DaysInMonth() int {
	return (int)(C.QDate_DaysInMonth(this.h))
}

func (this *QDate) DaysInYear() int {
	return (int)(C.QDate_DaysInYear(this.h))
}

func (this *QDate) WeekNumber() int {
	return (int)(C.QDate_WeekNumber(this.h))
}

func (this *QDate) YearWithCal(cal QCalendar) int {
	return (int)(C.QDate_YearWithCal(this.h, cal.cPointer()))
}

func (this *QDate) MonthWithCal(cal QCalendar) int {
	return (int)(C.QDate_MonthWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DayWithCal(cal QCalendar) int {
	return (int)(C.QDate_DayWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DayOfWeekWithCal(cal QCalendar) int {
	return (int)(C.QDate_DayOfWeekWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DayOfYearWithCal(cal QCalendar) int {
	return (int)(C.QDate_DayOfYearWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DaysInMonthWithCal(cal QCalendar) int {
	return (int)(C.QDate_DaysInMonthWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DaysInYearWithCal(cal QCalendar) int {
	return (int)(C.QDate_DaysInYearWithCal(this.h, cal.cPointer()))
}

func (this *QDate) StartOfDay() *QDateTime {
	_goptr := newQDateTime(C.QDate_StartOfDay(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDay() *QDateTime {
	_goptr := newQDateTime(C.QDate_EndOfDay(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) StartOfDayWithZone(zone *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDate_StartOfDayWithZone(this.h, zone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDayWithZone(zone *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDate_EndOfDayWithZone(this.h, zone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_ShortMonthName(month int) string {
	var _ms C.struct_miqt_string = C.QDate_ShortMonthName((C.int)(month))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDate_ShortDayName(weekday int) string {
	var _ms C.struct_miqt_string = C.QDate_ShortDayName((C.int)(weekday))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDate_LongMonthName(month int) string {
	var _ms C.struct_miqt_string = C.QDate_LongMonthName((C.int)(month))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDate_LongDayName(weekday int) string {
	var _ms C.struct_miqt_string = C.QDate_LongDayName((C.int)(weekday))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDate) ToString() string {
	var _ms C.struct_miqt_string = C.QDate_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDate) ToString2(format DateFormat, cal QCalendar) string {
	var _ms C.struct_miqt_string = C.QDate_ToString2(this.h, (C.int)(format), cal.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDate) ToStringWithFormat(format string) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QDate_ToStringWithFormat(this.h, format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDate) ToString3(format string, cal QCalendar) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QDate_ToString3(this.h, format_ms, cal.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDate) SetDate(year int, month int, day int) bool {
	return (bool)(C.QDate_SetDate(this.h, (C.int)(year), (C.int)(month), (C.int)(day)))
}

func (this *QDate) SetDate2(year int, month int, day int, cal QCalendar) bool {
	return (bool)(C.QDate_SetDate2(this.h, (C.int)(year), (C.int)(month), (C.int)(day), cal.cPointer()))
}

func (this *QDate) GetDate(year *int, month *int, day *int) {
	C.QDate_GetDate(this.h, (*C.int)(unsafe.Pointer(year)), (*C.int)(unsafe.Pointer(month)), (*C.int)(unsafe.Pointer(day)))
}

func (this *QDate) GetDate2(year *int, month *int, day *int) {
	C.QDate_GetDate2(this.h, (*C.int)(unsafe.Pointer(year)), (*C.int)(unsafe.Pointer(month)), (*C.int)(unsafe.Pointer(day)))
}

func (this *QDate) AddDays(days int64) *QDate {
	_goptr := newQDate(C.QDate_AddDays(this.h, (C.longlong)(days)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddMonths(months int) *QDate {
	_goptr := newQDate(C.QDate_AddMonths(this.h, (C.int)(months)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddYears(years int) *QDate {
	_goptr := newQDate(C.QDate_AddYears(this.h, (C.int)(years)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddMonths2(months int, cal QCalendar) *QDate {
	_goptr := newQDate(C.QDate_AddMonths2(this.h, (C.int)(months), cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddYears2(years int, cal QCalendar) *QDate {
	_goptr := newQDate(C.QDate_AddYears2(this.h, (C.int)(years), cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) DaysTo(param1 *QDate) int64 {
	return (int64)(C.QDate_DaysTo(this.h, param1.cPointer()))
}

func (this *QDate) OperatorEqual(other *QDate) bool {
	return (bool)(C.QDate_OperatorEqual(this.h, other.cPointer()))
}

func (this *QDate) OperatorNotEqual(other *QDate) bool {
	return (bool)(C.QDate_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QDate) OperatorLesser(other *QDate) bool {
	return (bool)(C.QDate_OperatorLesser(this.h, other.cPointer()))
}

func (this *QDate) OperatorLesserOrEqual(other *QDate) bool {
	return (bool)(C.QDate_OperatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QDate) OperatorGreater(other *QDate) bool {
	return (bool)(C.QDate_OperatorGreater(this.h, other.cPointer()))
}

func (this *QDate) OperatorGreaterOrEqual(other *QDate) bool {
	return (bool)(C.QDate_OperatorGreaterOrEqual(this.h, other.cPointer()))
}

func QDate_CurrentDate() *QDate {
	_goptr := newQDate(C.QDate_CurrentDate())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_FromString(s string) *QDate {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	_goptr := newQDate(C.QDate_FromString(s_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_FromString2(s string, format string) *QDate {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDate(C.QDate_FromString2(s_ms, format_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_FromString3(s string, format string, cal QCalendar) *QDate {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDate(C.QDate_FromString3(s_ms, format_ms, cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_IsValid2(y int, m int, d int) bool {
	return (bool)(C.QDate_IsValid2((C.int)(y), (C.int)(m), (C.int)(d)))
}

func QDate_IsLeapYear(year int) bool {
	return (bool)(C.QDate_IsLeapYear((C.int)(year)))
}

func QDate_FromJulianDay(jd_ int64) *QDate {
	_goptr := newQDate(C.QDate_FromJulianDay((C.longlong)(jd_)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) ToJulianDay() int64 {
	return (int64)(C.QDate_ToJulianDay(this.h))
}

func (this *QDate) WeekNumber1(yearNum *int) int {
	return (int)(C.QDate_WeekNumber1(this.h, (*C.int)(unsafe.Pointer(yearNum))))
}

func (this *QDate) StartOfDay1(spec TimeSpec) *QDateTime {
	_goptr := newQDateTime(C.QDate_StartOfDay1(this.h, (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) StartOfDay2(spec TimeSpec, offsetSeconds int) *QDateTime {
	_goptr := newQDateTime(C.QDate_StartOfDay2(this.h, (C.int)(spec), (C.int)(offsetSeconds)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDay1(spec TimeSpec) *QDateTime {
	_goptr := newQDateTime(C.QDate_EndOfDay1(this.h, (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDay2(spec TimeSpec, offsetSeconds int) *QDateTime {
	_goptr := newQDateTime(C.QDate_EndOfDay2(this.h, (C.int)(spec), (C.int)(offsetSeconds)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_ShortMonthName2(month int, typeVal QDate__MonthNameType) string {
	var _ms C.struct_miqt_string = C.QDate_ShortMonthName2((C.int)(month), (C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDate_ShortDayName2(weekday int, typeVal QDate__MonthNameType) string {
	var _ms C.struct_miqt_string = C.QDate_ShortDayName2((C.int)(weekday), (C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDate_LongMonthName2(month int, typeVal QDate__MonthNameType) string {
	var _ms C.struct_miqt_string = C.QDate_LongMonthName2((C.int)(month), (C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDate_LongDayName2(weekday int, typeVal QDate__MonthNameType) string {
	var _ms C.struct_miqt_string = C.QDate_LongDayName2((C.int)(weekday), (C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDate) ToString1(format DateFormat) string {
	var _ms C.struct_miqt_string = C.QDate_ToString1(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDate_FromString22(s string, f DateFormat) *QDate {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	_goptr := newQDate(C.QDate_FromString22(s_ms, (C.int)(f)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDate) Delete() {
	C.QDate_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDate) GoGC() {
	runtime.SetFinalizer(this, func(this *QDate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTime struct {
	h          *C.QTime
	isSubclass bool
}

func (this *QTime) cPointer() *C.QTime {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTime) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTime constructs the type using only CGO pointers.
func newQTime(h *C.QTime) *QTime {
	if h == nil {
		return nil
	}
	return &QTime{h: h}
}

// UnsafeNewQTime constructs the type using only unsafe pointers.
func UnsafeNewQTime(h unsafe.Pointer) *QTime {
	if h == nil {
		return nil
	}

	return &QTime{h: (*C.QTime)(h)}
}

// NewQTime constructs a new QTime object.
func NewQTime() *QTime {
	var outptr_QTime *C.QTime = nil

	C.QTime_new(&outptr_QTime)
	ret := newQTime(outptr_QTime)
	ret.isSubclass = true
	return ret
}

// NewQTime2 constructs a new QTime object.
func NewQTime2(h int, m int) *QTime {
	var outptr_QTime *C.QTime = nil

	C.QTime_new2((C.int)(h), (C.int)(m), &outptr_QTime)
	ret := newQTime(outptr_QTime)
	ret.isSubclass = true
	return ret
}

// NewQTime3 constructs a new QTime object.
func NewQTime3(param1 *QTime) *QTime {
	var outptr_QTime *C.QTime = nil

	C.QTime_new3(param1.cPointer(), &outptr_QTime)
	ret := newQTime(outptr_QTime)
	ret.isSubclass = true
	return ret
}

// NewQTime4 constructs a new QTime object.
func NewQTime4(h int, m int, s int) *QTime {
	var outptr_QTime *C.QTime = nil

	C.QTime_new4((C.int)(h), (C.int)(m), (C.int)(s), &outptr_QTime)
	ret := newQTime(outptr_QTime)
	ret.isSubclass = true
	return ret
}

// NewQTime5 constructs a new QTime object.
func NewQTime5(h int, m int, s int, ms int) *QTime {
	var outptr_QTime *C.QTime = nil

	C.QTime_new5((C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms), &outptr_QTime)
	ret := newQTime(outptr_QTime)
	ret.isSubclass = true
	return ret
}

func (this *QTime) IsNull() bool {
	return (bool)(C.QTime_IsNull(this.h))
}

func (this *QTime) IsValid() bool {
	return (bool)(C.QTime_IsValid(this.h))
}

func (this *QTime) Hour() int {
	return (int)(C.QTime_Hour(this.h))
}

func (this *QTime) Minute() int {
	return (int)(C.QTime_Minute(this.h))
}

func (this *QTime) Second() int {
	return (int)(C.QTime_Second(this.h))
}

func (this *QTime) Msec() int {
	return (int)(C.QTime_Msec(this.h))
}

func (this *QTime) ToString() string {
	var _ms C.struct_miqt_string = C.QTime_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTime) ToStringWithFormat(format string) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QTime_ToStringWithFormat(this.h, format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTime) SetHMS(h int, m int, s int) bool {
	return (bool)(C.QTime_SetHMS(this.h, (C.int)(h), (C.int)(m), (C.int)(s)))
}

func (this *QTime) AddSecs(secs int) *QTime {
	_goptr := newQTime(C.QTime_AddSecs(this.h, (C.int)(secs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTime) SecsTo(param1 *QTime) int {
	return (int)(C.QTime_SecsTo(this.h, param1.cPointer()))
}

func (this *QTime) AddMSecs(ms int) *QTime {
	_goptr := newQTime(C.QTime_AddMSecs(this.h, (C.int)(ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTime) MsecsTo(param1 *QTime) int {
	return (int)(C.QTime_MsecsTo(this.h, param1.cPointer()))
}

func (this *QTime) OperatorEqual(other *QTime) bool {
	return (bool)(C.QTime_OperatorEqual(this.h, other.cPointer()))
}

func (this *QTime) OperatorNotEqual(other *QTime) bool {
	return (bool)(C.QTime_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QTime) OperatorLesser(other *QTime) bool {
	return (bool)(C.QTime_OperatorLesser(this.h, other.cPointer()))
}

func (this *QTime) OperatorLesserOrEqual(other *QTime) bool {
	return (bool)(C.QTime_OperatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QTime) OperatorGreater(other *QTime) bool {
	return (bool)(C.QTime_OperatorGreater(this.h, other.cPointer()))
}

func (this *QTime) OperatorGreaterOrEqual(other *QTime) bool {
	return (bool)(C.QTime_OperatorGreaterOrEqual(this.h, other.cPointer()))
}

func QTime_FromMSecsSinceStartOfDay(msecs int) *QTime {
	_goptr := newQTime(C.QTime_FromMSecsSinceStartOfDay((C.int)(msecs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTime) MsecsSinceStartOfDay() int {
	return (int)(C.QTime_MsecsSinceStartOfDay(this.h))
}

func QTime_CurrentTime() *QTime {
	_goptr := newQTime(C.QTime_CurrentTime())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_FromString(s string) *QTime {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	_goptr := newQTime(C.QTime_FromString(s_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_FromString2(s string, format string) *QTime {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQTime(C.QTime_FromString2(s_ms, format_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_IsValid2(h int, m int, s int) bool {
	return (bool)(C.QTime_IsValid2((C.int)(h), (C.int)(m), (C.int)(s)))
}

func (this *QTime) Start() {
	C.QTime_Start(this.h)
}

func (this *QTime) Restart() int {
	return (int)(C.QTime_Restart(this.h))
}

func (this *QTime) Elapsed() int {
	return (int)(C.QTime_Elapsed(this.h))
}

func (this *QTime) ToString1(f DateFormat) string {
	var _ms C.struct_miqt_string = C.QTime_ToString1(this.h, (C.int)(f))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTime) SetHMS4(h int, m int, s int, ms int) bool {
	return (bool)(C.QTime_SetHMS4(this.h, (C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms)))
}

func QTime_FromString22(s string, f DateFormat) *QTime {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	_goptr := newQTime(C.QTime_FromString22(s_ms, (C.int)(f)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_IsValid4(h int, m int, s int, ms int) bool {
	return (bool)(C.QTime_IsValid4((C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms)))
}

// Delete this object from C++ memory.
func (this *QTime) Delete() {
	C.QTime_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTime) GoGC() {
	runtime.SetFinalizer(this, func(this *QTime) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDateTime struct {
	h          *C.QDateTime
	isSubclass bool
}

func (this *QDateTime) cPointer() *C.QDateTime {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDateTime) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDateTime constructs the type using only CGO pointers.
func newQDateTime(h *C.QDateTime) *QDateTime {
	if h == nil {
		return nil
	}
	return &QDateTime{h: h}
}

// UnsafeNewQDateTime constructs the type using only unsafe pointers.
func UnsafeNewQDateTime(h unsafe.Pointer) *QDateTime {
	if h == nil {
		return nil
	}

	return &QDateTime{h: (*C.QDateTime)(h)}
}

// NewQDateTime constructs a new QDateTime object.
func NewQDateTime(param1 *QDate) *QDateTime {
	var outptr_QDateTime *C.QDateTime = nil

	C.QDateTime_new(param1.cPointer(), &outptr_QDateTime)
	ret := newQDateTime(outptr_QDateTime)
	ret.isSubclass = true
	return ret
}

// NewQDateTime2 constructs a new QDateTime object.
func NewQDateTime2(param1 *QDate, param2 *QTime) *QDateTime {
	var outptr_QDateTime *C.QDateTime = nil

	C.QDateTime_new2(param1.cPointer(), param2.cPointer(), &outptr_QDateTime)
	ret := newQDateTime(outptr_QDateTime)
	ret.isSubclass = true
	return ret
}

// NewQDateTime3 constructs a new QDateTime object.
func NewQDateTime3(date *QDate, time *QTime, spec TimeSpec, offsetSeconds int) *QDateTime {
	var outptr_QDateTime *C.QDateTime = nil

	C.QDateTime_new3(date.cPointer(), time.cPointer(), (C.int)(spec), (C.int)(offsetSeconds), &outptr_QDateTime)
	ret := newQDateTime(outptr_QDateTime)
	ret.isSubclass = true
	return ret
}

// NewQDateTime4 constructs a new QDateTime object.
func NewQDateTime4(date *QDate, time *QTime, timeZone *QTimeZone) *QDateTime {
	var outptr_QDateTime *C.QDateTime = nil

	C.QDateTime_new4(date.cPointer(), time.cPointer(), timeZone.cPointer(), &outptr_QDateTime)
	ret := newQDateTime(outptr_QDateTime)
	ret.isSubclass = true
	return ret
}

// NewQDateTime5 constructs a new QDateTime object.
func NewQDateTime5(other *QDateTime) *QDateTime {
	var outptr_QDateTime *C.QDateTime = nil

	C.QDateTime_new5(other.cPointer(), &outptr_QDateTime)
	ret := newQDateTime(outptr_QDateTime)
	ret.isSubclass = true
	return ret
}

// NewQDateTime6 constructs a new QDateTime object.
func NewQDateTime6(param1 *QDate, param2 *QTime, spec TimeSpec) *QDateTime {
	var outptr_QDateTime *C.QDateTime = nil

	C.QDateTime_new6(param1.cPointer(), param2.cPointer(), (C.int)(spec), &outptr_QDateTime)
	ret := newQDateTime(outptr_QDateTime)
	ret.isSubclass = true
	return ret
}

func (this *QDateTime) OperatorAssign(other *QDateTime) {
	C.QDateTime_OperatorAssign(this.h, other.cPointer())
}

func (this *QDateTime) Swap(other *QDateTime) {
	C.QDateTime_Swap(this.h, other.cPointer())
}

func (this *QDateTime) IsNull() bool {
	return (bool)(C.QDateTime_IsNull(this.h))
}

func (this *QDateTime) IsValid() bool {
	return (bool)(C.QDateTime_IsValid(this.h))
}

func (this *QDateTime) Date() *QDate {
	_goptr := newQDate(C.QDateTime_Date(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) Time() *QTime {
	_goptr := newQTime(C.QDateTime_Time(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) TimeSpec() TimeSpec {
	return (TimeSpec)(C.QDateTime_TimeSpec(this.h))
}

func (this *QDateTime) OffsetFromUtc() int {
	return (int)(C.QDateTime_OffsetFromUtc(this.h))
}

func (this *QDateTime) TimeZone() *QTimeZone {
	_goptr := newQTimeZone(C.QDateTime_TimeZone(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) TimeZoneAbbreviation() string {
	var _ms C.struct_miqt_string = C.QDateTime_TimeZoneAbbreviation(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTime) IsDaylightTime() bool {
	return (bool)(C.QDateTime_IsDaylightTime(this.h))
}

func (this *QDateTime) ToMSecsSinceEpoch() int64 {
	return (int64)(C.QDateTime_ToMSecsSinceEpoch(this.h))
}

func (this *QDateTime) ToSecsSinceEpoch() int64 {
	return (int64)(C.QDateTime_ToSecsSinceEpoch(this.h))
}

func (this *QDateTime) SetDate(date *QDate) {
	C.QDateTime_SetDate(this.h, date.cPointer())
}

func (this *QDateTime) SetTime(time *QTime) {
	C.QDateTime_SetTime(this.h, time.cPointer())
}

func (this *QDateTime) SetTimeSpec(spec TimeSpec) {
	C.QDateTime_SetTimeSpec(this.h, (C.int)(spec))
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
	var _ms C.struct_miqt_string = C.QDateTime_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTime) ToStringWithFormat(format string) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QDateTime_ToStringWithFormat(this.h, format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTime) ToString2(format string, cal QCalendar) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QDateTime_ToString2(this.h, format_ms, cal.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTime) AddDays(days int64) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_AddDays(this.h, (C.longlong)(days)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddMonths(months int) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_AddMonths(this.h, (C.int)(months)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddYears(years int) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_AddYears(this.h, (C.int)(years)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddSecs(secs int64) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_AddSecs(this.h, (C.longlong)(secs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddMSecs(msecs int64) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_AddMSecs(this.h, (C.longlong)(msecs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToTimeSpec(spec TimeSpec) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_ToTimeSpec(this.h, (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToLocalTime() *QDateTime {
	_goptr := newQDateTime(C.QDateTime_ToLocalTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToUTC() *QDateTime {
	_goptr := newQDateTime(C.QDateTime_ToUTC(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToOffsetFromUtc(offsetSeconds int) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_ToOffsetFromUtc(this.h, (C.int)(offsetSeconds)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToTimeZone(toZone *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_ToTimeZone(this.h, toZone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) DaysTo(param1 *QDateTime) int64 {
	return (int64)(C.QDateTime_DaysTo(this.h, param1.cPointer()))
}

func (this *QDateTime) SecsTo(param1 *QDateTime) int64 {
	return (int64)(C.QDateTime_SecsTo(this.h, param1.cPointer()))
}

func (this *QDateTime) MsecsTo(param1 *QDateTime) int64 {
	return (int64)(C.QDateTime_MsecsTo(this.h, param1.cPointer()))
}

func (this *QDateTime) OperatorEqual(other *QDateTime) bool {
	return (bool)(C.QDateTime_OperatorEqual(this.h, other.cPointer()))
}

func (this *QDateTime) OperatorNotEqual(other *QDateTime) bool {
	return (bool)(C.QDateTime_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QDateTime) OperatorLesser(other *QDateTime) bool {
	return (bool)(C.QDateTime_OperatorLesser(this.h, other.cPointer()))
}

func (this *QDateTime) OperatorLesserOrEqual(other *QDateTime) bool {
	return (bool)(C.QDateTime_OperatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QDateTime) OperatorGreater(other *QDateTime) bool {
	return (bool)(C.QDateTime_OperatorGreater(this.h, other.cPointer()))
}

func (this *QDateTime) OperatorGreaterOrEqual(other *QDateTime) bool {
	return (bool)(C.QDateTime_OperatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QDateTime) SetUtcOffset(seconds int) {
	C.QDateTime_SetUtcOffset(this.h, (C.int)(seconds))
}

func (this *QDateTime) UtcOffset() int {
	return (int)(C.QDateTime_UtcOffset(this.h))
}

func QDateTime_CurrentDateTime() *QDateTime {
	_goptr := newQDateTime(C.QDateTime_CurrentDateTime())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_CurrentDateTimeUtc() *QDateTime {
	_goptr := newQDateTime(C.QDateTime_CurrentDateTimeUtc())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromString(s string) *QDateTime {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	_goptr := newQDateTime(C.QDateTime_FromString(s_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromString2(s string, format string) *QDateTime {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDateTime(C.QDateTime_FromString2(s_ms, format_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromString3(s string, format string, cal QCalendar) *QDateTime {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDateTime(C.QDateTime_FromString3(s_ms, format_ms, cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToTimeT() uint {
	return (uint)(C.QDateTime_ToTimeT(this.h))
}

func (this *QDateTime) SetTimeT(secsSince1Jan1970UTC uint) {
	C.QDateTime_SetTimeT(this.h, (C.uint)(secsSince1Jan1970UTC))
}

func QDateTime_FromTimeT(secsSince1Jan1970UTC uint) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromTimeT((C.uint)(secsSince1Jan1970UTC)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromTimeT2(secsSince1Jan1970UTC uint, spec TimeSpec) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromTimeT2((C.uint)(secsSince1Jan1970UTC), (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromTimeT3(secsSince1Jan1970UTC uint, timeZone *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromTimeT3((C.uint)(secsSince1Jan1970UTC), timeZone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch(msecs int64) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromMSecsSinceEpoch((C.longlong)(msecs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch2(msecs int64, spec TimeSpec) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromMSecsSinceEpoch2((C.longlong)(msecs), (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch(secs int64) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromSecsSinceEpoch((C.longlong)(secs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch3(msecs int64, timeZone *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromMSecsSinceEpoch3((C.longlong)(msecs), timeZone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch2(secs int64, timeZone *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromSecsSinceEpoch2((C.longlong)(secs), timeZone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_CurrentMSecsSinceEpoch() int64 {
	return (int64)(C.QDateTime_CurrentMSecsSinceEpoch())
}

func QDateTime_CurrentSecsSinceEpoch() int64 {
	return (int64)(C.QDateTime_CurrentSecsSinceEpoch())
}

func (this *QDateTime) ToString1(format DateFormat) string {
	var _ms C.struct_miqt_string = C.QDateTime_ToString1(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDateTime_FromString22(s string, f DateFormat) *QDateTime {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	_goptr := newQDateTime(C.QDateTime_FromString22(s_ms, (C.int)(f)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromTimeT32(secsSince1Jan1970UTC uint, spec TimeSpec, offsetFromUtc int) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromTimeT32((C.uint)(secsSince1Jan1970UTC), (C.int)(spec), (C.int)(offsetFromUtc)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch32(msecs int64, spec TimeSpec, offsetFromUtc int) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromMSecsSinceEpoch32((C.longlong)(msecs), (C.int)(spec), (C.int)(offsetFromUtc)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch22(secs int64, spe TimeSpec) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromSecsSinceEpoch22((C.longlong)(secs), (C.int)(spe)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch3(secs int64, spe TimeSpec, offsetFromUtc int) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_FromSecsSinceEpoch3((C.longlong)(secs), (C.int)(spe), (C.int)(offsetFromUtc)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDateTime) Delete() {
	C.QDateTime_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDateTime) GoGC() {
	runtime.SetFinalizer(this, func(this *QDateTime) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
