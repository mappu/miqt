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
	QDate__MonthNameType__DateFormat       QDate__MonthNameType = 0
	QDate__MonthNameType__StandaloneFormat QDate__MonthNameType = 1
)

type QDateTime__YearRange int

const (
	QDateTime__YearRange__First QDateTime__YearRange = -292275056
	QDateTime__YearRange__Last  QDateTime__YearRange = 292278994
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
	_ret := C.QDate_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QDate) IsValid() bool {
	_ret := C.QDate_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QDate) Year() int {
	_ret := C.QDate_Year(this.h)
	return (int)(_ret)
}

func (this *QDate) Month() int {
	_ret := C.QDate_Month(this.h)
	return (int)(_ret)
}

func (this *QDate) Day() int {
	_ret := C.QDate_Day(this.h)
	return (int)(_ret)
}

func (this *QDate) DayOfWeek() int {
	_ret := C.QDate_DayOfWeek(this.h)
	return (int)(_ret)
}

func (this *QDate) DayOfYear() int {
	_ret := C.QDate_DayOfYear(this.h)
	return (int)(_ret)
}

func (this *QDate) DaysInMonth() int {
	_ret := C.QDate_DaysInMonth(this.h)
	return (int)(_ret)
}

func (this *QDate) DaysInYear() int {
	_ret := C.QDate_DaysInYear(this.h)
	return (int)(_ret)
}

func (this *QDate) WeekNumber() int {
	_ret := C.QDate_WeekNumber(this.h)
	return (int)(_ret)
}

func (this *QDate) YearWithCal(cal QCalendar) int {
	_ret := C.QDate_YearWithCal(this.h, cal.cPointer())
	return (int)(_ret)
}

func (this *QDate) MonthWithCal(cal QCalendar) int {
	_ret := C.QDate_MonthWithCal(this.h, cal.cPointer())
	return (int)(_ret)
}

func (this *QDate) DayWithCal(cal QCalendar) int {
	_ret := C.QDate_DayWithCal(this.h, cal.cPointer())
	return (int)(_ret)
}

func (this *QDate) DayOfWeekWithCal(cal QCalendar) int {
	_ret := C.QDate_DayOfWeekWithCal(this.h, cal.cPointer())
	return (int)(_ret)
}

func (this *QDate) DayOfYearWithCal(cal QCalendar) int {
	_ret := C.QDate_DayOfYearWithCal(this.h, cal.cPointer())
	return (int)(_ret)
}

func (this *QDate) DaysInMonthWithCal(cal QCalendar) int {
	_ret := C.QDate_DaysInMonthWithCal(this.h, cal.cPointer())
	return (int)(_ret)
}

func (this *QDate) DaysInYearWithCal(cal QCalendar) int {
	_ret := C.QDate_DaysInYearWithCal(this.h, cal.cPointer())
	return (int)(_ret)
}

func (this *QDate) StartOfDay() *QDateTime {
	_ret := C.QDate_StartOfDay(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDay() *QDateTime {
	_ret := C.QDate_EndOfDay(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) StartOfDayWithZone(zone *QTimeZone) *QDateTime {
	_ret := C.QDate_StartOfDayWithZone(this.h, zone.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDayWithZone(zone *QTimeZone) *QDateTime {
	_ret := C.QDate_EndOfDayWithZone(this.h, zone.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_ShortMonthName(month int) string {
	var _ms *C.struct_miqt_string = C.QDate_ShortMonthName((C.int)(month))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDate_ShortDayName(weekday int) string {
	var _ms *C.struct_miqt_string = C.QDate_ShortDayName((C.int)(weekday))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDate_LongMonthName(month int) string {
	var _ms *C.struct_miqt_string = C.QDate_LongMonthName((C.int)(month))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDate_LongDayName(weekday int) string {
	var _ms *C.struct_miqt_string = C.QDate_LongDayName((C.int)(weekday))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDate) ToString() string {
	var _ms *C.struct_miqt_string = C.QDate_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDate) ToString2(format DateFormat, cal QCalendar) string {
	var _ms *C.struct_miqt_string = C.QDate_ToString2(this.h, (C.uintptr_t)(format), cal.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDate) ToStringWithFormat(format string) string {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	var _ms *C.struct_miqt_string = C.QDate_ToStringWithFormat(this.h, (*C.struct_miqt_string)(format_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDate) ToString3(format string, cal QCalendar) string {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	var _ms *C.struct_miqt_string = C.QDate_ToString3(this.h, (*C.struct_miqt_string)(format_ms), cal.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDate) SetDate(year int, month int, day int) bool {
	_ret := C.QDate_SetDate(this.h, (C.int)(year), (C.int)(month), (C.int)(day))
	return (bool)(_ret)
}

func (this *QDate) SetDate2(year int, month int, day int, cal QCalendar) bool {
	_ret := C.QDate_SetDate2(this.h, (C.int)(year), (C.int)(month), (C.int)(day), cal.cPointer())
	return (bool)(_ret)
}

func (this *QDate) GetDate(year *int, month *int, day *int) {
	C.QDate_GetDate(this.h, (*C.int)(unsafe.Pointer(year)), (*C.int)(unsafe.Pointer(month)), (*C.int)(unsafe.Pointer(day)))
}

func (this *QDate) GetDate2(year *int, month *int, day *int) {
	C.QDate_GetDate2(this.h, (*C.int)(unsafe.Pointer(year)), (*C.int)(unsafe.Pointer(month)), (*C.int)(unsafe.Pointer(day)))
}

func (this *QDate) AddDays(days int64) *QDate {
	_ret := C.QDate_AddDays(this.h, (C.longlong)(days))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddMonths(months int) *QDate {
	_ret := C.QDate_AddMonths(this.h, (C.int)(months))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddYears(years int) *QDate {
	_ret := C.QDate_AddYears(this.h, (C.int)(years))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddMonths2(months int, cal QCalendar) *QDate {
	_ret := C.QDate_AddMonths2(this.h, (C.int)(months), cal.cPointer())
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddYears2(years int, cal QCalendar) *QDate {
	_ret := C.QDate_AddYears2(this.h, (C.int)(years), cal.cPointer())
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) DaysTo(param1 *QDate) int64 {
	_ret := C.QDate_DaysTo(this.h, param1.cPointer())
	return (int64)(_ret)
}

func (this *QDate) OperatorEqual(other *QDate) bool {
	_ret := C.QDate_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDate) OperatorNotEqual(other *QDate) bool {
	_ret := C.QDate_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDate) OperatorLesser(other *QDate) bool {
	_ret := C.QDate_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDate) OperatorLesserOrEqual(other *QDate) bool {
	_ret := C.QDate_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDate) OperatorGreater(other *QDate) bool {
	_ret := C.QDate_OperatorGreater(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDate) OperatorGreaterOrEqual(other *QDate) bool {
	_ret := C.QDate_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func QDate_CurrentDate() *QDate {
	_ret := C.QDate_CurrentDate()
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_FromString(s string) *QDate {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	_ret := C.QDate_FromString((*C.struct_miqt_string)(s_ms))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_FromString2(s string, format string) *QDate {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QDate_FromString2((*C.struct_miqt_string)(s_ms), (*C.struct_miqt_string)(format_ms))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_FromString3(s string, format string, cal QCalendar) *QDate {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QDate_FromString3((*C.struct_miqt_string)(s_ms), (*C.struct_miqt_string)(format_ms), cal.cPointer())
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_IsValid2(y int, m int, d int) bool {
	_ret := C.QDate_IsValid2((C.int)(y), (C.int)(m), (C.int)(d))
	return (bool)(_ret)
}

func QDate_IsLeapYear(year int) bool {
	_ret := C.QDate_IsLeapYear((C.int)(year))
	return (bool)(_ret)
}

func QDate_FromJulianDay(jd_ int64) *QDate {
	_ret := C.QDate_FromJulianDay((C.longlong)(jd_))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) ToJulianDay() int64 {
	_ret := C.QDate_ToJulianDay(this.h)
	return (int64)(_ret)
}

func (this *QDate) WeekNumber1(yearNum *int) int {
	_ret := C.QDate_WeekNumber1(this.h, (*C.int)(unsafe.Pointer(yearNum)))
	return (int)(_ret)
}

func (this *QDate) StartOfDay1(spec TimeSpec) *QDateTime {
	_ret := C.QDate_StartOfDay1(this.h, (C.uintptr_t)(spec))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) StartOfDay2(spec TimeSpec, offsetSeconds int) *QDateTime {
	_ret := C.QDate_StartOfDay2(this.h, (C.uintptr_t)(spec), (C.int)(offsetSeconds))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDay1(spec TimeSpec) *QDateTime {
	_ret := C.QDate_EndOfDay1(this.h, (C.uintptr_t)(spec))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDay2(spec TimeSpec, offsetSeconds int) *QDateTime {
	_ret := C.QDate_EndOfDay2(this.h, (C.uintptr_t)(spec), (C.int)(offsetSeconds))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_ShortMonthName2(month int, typeVal QDate__MonthNameType) string {
	var _ms *C.struct_miqt_string = C.QDate_ShortMonthName2((C.int)(month), (C.uintptr_t)(typeVal))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDate_ShortDayName2(weekday int, typeVal QDate__MonthNameType) string {
	var _ms *C.struct_miqt_string = C.QDate_ShortDayName2((C.int)(weekday), (C.uintptr_t)(typeVal))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDate_LongMonthName2(month int, typeVal QDate__MonthNameType) string {
	var _ms *C.struct_miqt_string = C.QDate_LongMonthName2((C.int)(month), (C.uintptr_t)(typeVal))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDate_LongDayName2(weekday int, typeVal QDate__MonthNameType) string {
	var _ms *C.struct_miqt_string = C.QDate_LongDayName2((C.int)(weekday), (C.uintptr_t)(typeVal))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDate) ToString1(format DateFormat) string {
	var _ms *C.struct_miqt_string = C.QDate_ToString1(this.h, (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDate_FromString22(s string, f DateFormat) *QDate {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	_ret := C.QDate_FromString22((*C.struct_miqt_string)(s_ms), (C.uintptr_t)(f))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDate) Delete() {
	C.QDate_Delete(this.h)
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
	_ret := C.QTime_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QTime) IsValid() bool {
	_ret := C.QTime_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QTime) Hour() int {
	_ret := C.QTime_Hour(this.h)
	return (int)(_ret)
}

func (this *QTime) Minute() int {
	_ret := C.QTime_Minute(this.h)
	return (int)(_ret)
}

func (this *QTime) Second() int {
	_ret := C.QTime_Second(this.h)
	return (int)(_ret)
}

func (this *QTime) Msec() int {
	_ret := C.QTime_Msec(this.h)
	return (int)(_ret)
}

func (this *QTime) ToString() string {
	var _ms *C.struct_miqt_string = C.QTime_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTime) ToStringWithFormat(format string) string {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	var _ms *C.struct_miqt_string = C.QTime_ToStringWithFormat(this.h, (*C.struct_miqt_string)(format_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTime) SetHMS(h int, m int, s int) bool {
	_ret := C.QTime_SetHMS(this.h, (C.int)(h), (C.int)(m), (C.int)(s))
	return (bool)(_ret)
}

func (this *QTime) AddSecs(secs int) *QTime {
	_ret := C.QTime_AddSecs(this.h, (C.int)(secs))
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTime) SecsTo(param1 *QTime) int {
	_ret := C.QTime_SecsTo(this.h, param1.cPointer())
	return (int)(_ret)
}

func (this *QTime) AddMSecs(ms int) *QTime {
	_ret := C.QTime_AddMSecs(this.h, (C.int)(ms))
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTime) MsecsTo(param1 *QTime) int {
	_ret := C.QTime_MsecsTo(this.h, param1.cPointer())
	return (int)(_ret)
}

func (this *QTime) OperatorEqual(other *QTime) bool {
	_ret := C.QTime_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QTime) OperatorNotEqual(other *QTime) bool {
	_ret := C.QTime_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QTime) OperatorLesser(other *QTime) bool {
	_ret := C.QTime_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QTime) OperatorLesserOrEqual(other *QTime) bool {
	_ret := C.QTime_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QTime) OperatorGreater(other *QTime) bool {
	_ret := C.QTime_OperatorGreater(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QTime) OperatorGreaterOrEqual(other *QTime) bool {
	_ret := C.QTime_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func QTime_FromMSecsSinceStartOfDay(msecs int) *QTime {
	_ret := C.QTime_FromMSecsSinceStartOfDay((C.int)(msecs))
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTime) MsecsSinceStartOfDay() int {
	_ret := C.QTime_MsecsSinceStartOfDay(this.h)
	return (int)(_ret)
}

func QTime_CurrentTime() *QTime {
	_ret := C.QTime_CurrentTime()
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_FromString(s string) *QTime {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	_ret := C.QTime_FromString((*C.struct_miqt_string)(s_ms))
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_FromString2(s string, format string) *QTime {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QTime_FromString2((*C.struct_miqt_string)(s_ms), (*C.struct_miqt_string)(format_ms))
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_IsValid2(h int, m int, s int) bool {
	_ret := C.QTime_IsValid2((C.int)(h), (C.int)(m), (C.int)(s))
	return (bool)(_ret)
}

func (this *QTime) Start() {
	C.QTime_Start(this.h)
}

func (this *QTime) Restart() int {
	_ret := C.QTime_Restart(this.h)
	return (int)(_ret)
}

func (this *QTime) Elapsed() int {
	_ret := C.QTime_Elapsed(this.h)
	return (int)(_ret)
}

func (this *QTime) ToString1(f DateFormat) string {
	var _ms *C.struct_miqt_string = C.QTime_ToString1(this.h, (C.uintptr_t)(f))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTime) SetHMS4(h int, m int, s int, ms int) bool {
	_ret := C.QTime_SetHMS4(this.h, (C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms))
	return (bool)(_ret)
}

func QTime_FromString22(s string, f DateFormat) *QTime {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	_ret := C.QTime_FromString22((*C.struct_miqt_string)(s_ms), (C.uintptr_t)(f))
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_IsValid4(h int, m int, s int, ms int) bool {
	_ret := C.QTime_IsValid4((C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms))
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QTime) Delete() {
	C.QTime_Delete(this.h)
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
func NewQDateTime3(date *QDate, time *QTime, spec TimeSpec, offsetSeconds int) *QDateTime {
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
func NewQDateTime6(param1 *QDate, param2 *QTime, spec TimeSpec) *QDateTime {
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
	_ret := C.QDateTime_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QDateTime) IsValid() bool {
	_ret := C.QDateTime_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QDateTime) Date() *QDate {
	_ret := C.QDateTime_Date(this.h)
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) Time() *QTime {
	_ret := C.QDateTime_Time(this.h)
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) TimeSpec() TimeSpec {
	_ret := C.QDateTime_TimeSpec(this.h)
	return (TimeSpec)(_ret)
}

func (this *QDateTime) OffsetFromUtc() int {
	_ret := C.QDateTime_OffsetFromUtc(this.h)
	return (int)(_ret)
}

func (this *QDateTime) TimeZone() *QTimeZone {
	_ret := C.QDateTime_TimeZone(this.h)
	_goptr := newQTimeZone(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) TimeZoneAbbreviation() string {
	var _ms *C.struct_miqt_string = C.QDateTime_TimeZoneAbbreviation(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDateTime) IsDaylightTime() bool {
	_ret := C.QDateTime_IsDaylightTime(this.h)
	return (bool)(_ret)
}

func (this *QDateTime) ToMSecsSinceEpoch() int64 {
	_ret := C.QDateTime_ToMSecsSinceEpoch(this.h)
	return (int64)(_ret)
}

func (this *QDateTime) ToSecsSinceEpoch() int64 {
	_ret := C.QDateTime_ToSecsSinceEpoch(this.h)
	return (int64)(_ret)
}

func (this *QDateTime) SetDate(date *QDate) {
	C.QDateTime_SetDate(this.h, date.cPointer())
}

func (this *QDateTime) SetTime(time *QTime) {
	C.QDateTime_SetTime(this.h, time.cPointer())
}

func (this *QDateTime) SetTimeSpec(spec TimeSpec) {
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
	var _ms *C.struct_miqt_string = C.QDateTime_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDateTime) ToStringWithFormat(format string) string {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	var _ms *C.struct_miqt_string = C.QDateTime_ToStringWithFormat(this.h, (*C.struct_miqt_string)(format_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDateTime) ToString2(format string, cal QCalendar) string {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	var _ms *C.struct_miqt_string = C.QDateTime_ToString2(this.h, (*C.struct_miqt_string)(format_ms), cal.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDateTime) AddDays(days int64) *QDateTime {
	_ret := C.QDateTime_AddDays(this.h, (C.longlong)(days))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddMonths(months int) *QDateTime {
	_ret := C.QDateTime_AddMonths(this.h, (C.int)(months))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddYears(years int) *QDateTime {
	_ret := C.QDateTime_AddYears(this.h, (C.int)(years))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddSecs(secs int64) *QDateTime {
	_ret := C.QDateTime_AddSecs(this.h, (C.longlong)(secs))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddMSecs(msecs int64) *QDateTime {
	_ret := C.QDateTime_AddMSecs(this.h, (C.longlong)(msecs))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToTimeSpec(spec TimeSpec) *QDateTime {
	_ret := C.QDateTime_ToTimeSpec(this.h, (C.uintptr_t)(spec))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToLocalTime() *QDateTime {
	_ret := C.QDateTime_ToLocalTime(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToUTC() *QDateTime {
	_ret := C.QDateTime_ToUTC(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToOffsetFromUtc(offsetSeconds int) *QDateTime {
	_ret := C.QDateTime_ToOffsetFromUtc(this.h, (C.int)(offsetSeconds))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToTimeZone(toZone *QTimeZone) *QDateTime {
	_ret := C.QDateTime_ToTimeZone(this.h, toZone.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) DaysTo(param1 *QDateTime) int64 {
	_ret := C.QDateTime_DaysTo(this.h, param1.cPointer())
	return (int64)(_ret)
}

func (this *QDateTime) SecsTo(param1 *QDateTime) int64 {
	_ret := C.QDateTime_SecsTo(this.h, param1.cPointer())
	return (int64)(_ret)
}

func (this *QDateTime) MsecsTo(param1 *QDateTime) int64 {
	_ret := C.QDateTime_MsecsTo(this.h, param1.cPointer())
	return (int64)(_ret)
}

func (this *QDateTime) OperatorEqual(other *QDateTime) bool {
	_ret := C.QDateTime_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDateTime) OperatorNotEqual(other *QDateTime) bool {
	_ret := C.QDateTime_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDateTime) OperatorLesser(other *QDateTime) bool {
	_ret := C.QDateTime_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDateTime) OperatorLesserOrEqual(other *QDateTime) bool {
	_ret := C.QDateTime_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDateTime) OperatorGreater(other *QDateTime) bool {
	_ret := C.QDateTime_OperatorGreater(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDateTime) OperatorGreaterOrEqual(other *QDateTime) bool {
	_ret := C.QDateTime_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QDateTime) SetUtcOffset(seconds int) {
	C.QDateTime_SetUtcOffset(this.h, (C.int)(seconds))
}

func (this *QDateTime) UtcOffset() int {
	_ret := C.QDateTime_UtcOffset(this.h)
	return (int)(_ret)
}

func QDateTime_CurrentDateTime() *QDateTime {
	_ret := C.QDateTime_CurrentDateTime()
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_CurrentDateTimeUtc() *QDateTime {
	_ret := C.QDateTime_CurrentDateTimeUtc()
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromString(s string) *QDateTime {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	_ret := C.QDateTime_FromString((*C.struct_miqt_string)(s_ms))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromString2(s string, format string) *QDateTime {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QDateTime_FromString2((*C.struct_miqt_string)(s_ms), (*C.struct_miqt_string)(format_ms))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromString3(s string, format string, cal QCalendar) *QDateTime {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QDateTime_FromString3((*C.struct_miqt_string)(s_ms), (*C.struct_miqt_string)(format_ms), cal.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToTimeT() uint {
	_ret := C.QDateTime_ToTimeT(this.h)
	return (uint)(_ret)
}

func (this *QDateTime) SetTimeT(secsSince1Jan1970UTC uint) {
	C.QDateTime_SetTimeT(this.h, (C.uint)(secsSince1Jan1970UTC))
}

func QDateTime_FromTimeT(secsSince1Jan1970UTC uint) *QDateTime {
	_ret := C.QDateTime_FromTimeT((C.uint)(secsSince1Jan1970UTC))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromTimeT2(secsSince1Jan1970UTC uint, spec TimeSpec) *QDateTime {
	_ret := C.QDateTime_FromTimeT2((C.uint)(secsSince1Jan1970UTC), (C.uintptr_t)(spec))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromTimeT3(secsSince1Jan1970UTC uint, timeZone *QTimeZone) *QDateTime {
	_ret := C.QDateTime_FromTimeT3((C.uint)(secsSince1Jan1970UTC), timeZone.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch(msecs int64) *QDateTime {
	_ret := C.QDateTime_FromMSecsSinceEpoch((C.longlong)(msecs))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch2(msecs int64, spec TimeSpec) *QDateTime {
	_ret := C.QDateTime_FromMSecsSinceEpoch2((C.longlong)(msecs), (C.uintptr_t)(spec))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch(secs int64) *QDateTime {
	_ret := C.QDateTime_FromSecsSinceEpoch((C.longlong)(secs))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch3(msecs int64, timeZone *QTimeZone) *QDateTime {
	_ret := C.QDateTime_FromMSecsSinceEpoch3((C.longlong)(msecs), timeZone.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch2(secs int64, timeZone *QTimeZone) *QDateTime {
	_ret := C.QDateTime_FromSecsSinceEpoch2((C.longlong)(secs), timeZone.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_CurrentMSecsSinceEpoch() int64 {
	_ret := C.QDateTime_CurrentMSecsSinceEpoch()
	return (int64)(_ret)
}

func QDateTime_CurrentSecsSinceEpoch() int64 {
	_ret := C.QDateTime_CurrentSecsSinceEpoch()
	return (int64)(_ret)
}

func (this *QDateTime) ToString1(format DateFormat) string {
	var _ms *C.struct_miqt_string = C.QDateTime_ToString1(this.h, (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDateTime_FromString22(s string, f DateFormat) *QDateTime {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	_ret := C.QDateTime_FromString22((*C.struct_miqt_string)(s_ms), (C.uintptr_t)(f))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromTimeT32(secsSince1Jan1970UTC uint, spec TimeSpec, offsetFromUtc int) *QDateTime {
	_ret := C.QDateTime_FromTimeT32((C.uint)(secsSince1Jan1970UTC), (C.uintptr_t)(spec), (C.int)(offsetFromUtc))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch32(msecs int64, spec TimeSpec, offsetFromUtc int) *QDateTime {
	_ret := C.QDateTime_FromMSecsSinceEpoch32((C.longlong)(msecs), (C.uintptr_t)(spec), (C.int)(offsetFromUtc))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch22(secs int64, spe TimeSpec) *QDateTime {
	_ret := C.QDateTime_FromSecsSinceEpoch22((C.longlong)(secs), (C.uintptr_t)(spe))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch3(secs int64, spe TimeSpec, offsetFromUtc int) *QDateTime {
	_ret := C.QDateTime_FromSecsSinceEpoch3((C.longlong)(secs), (C.uintptr_t)(spe), (C.int)(offsetFromUtc))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDateTime) Delete() {
	C.QDateTime_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDateTime) GoGC() {
	runtime.SetFinalizer(this, func(this *QDateTime) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
