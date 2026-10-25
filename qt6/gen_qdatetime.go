package qt6

/*

#include "gen_qdatetime.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDateTime__YearRange int

const (
	QDateTime__First QDateTime__YearRange = -292275056
	QDateTime__Last  QDateTime__YearRange = 292278994
)

type QDate struct {
	h  *C.QDate
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDate) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQDate((*C.QDate)(h))
}

// NewQDate constructs a new QDate object.
func NewQDate() *QDate {

	return newQDate(C.QDate_new())
}

// NewQDate2 constructs a new QDate object.
func NewQDate2(y int, m int, d int) *QDate {

	return newQDate(C.QDate_new2((C.int)(y), (C.int)(m), (C.int)(d)))
}

// NewQDate3 constructs a new QDate object.
func NewQDate3(y int, m int, d int, cal QCalendar) *QDate {
	defer runtime.KeepAlive(cal)

	return newQDate(C.QDate_new3((C.int)(y), (C.int)(m), (C.int)(d), cal.cPointer()))
}

// NewQDate4 constructs a new QDate object.
func NewQDate4(param1 *QDate) *QDate {
	defer runtime.KeepAlive(param1)

	return newQDate(C.QDate_new4(param1.cPointer()))
}

func (this *QDate) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDate_isNull(this.h))
}

func (this *QDate) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDate_isValid(this.h))
}

func (this *QDate) Year() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDate_year(this.h))
}

func (this *QDate) Month() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDate_month(this.h))
}

func (this *QDate) Day() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDate_day(this.h))
}

func (this *QDate) DayOfWeek() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDate_dayOfWeek(this.h))
}

func (this *QDate) DayOfYear() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDate_dayOfYear(this.h))
}

func (this *QDate) DaysInMonth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDate_daysInMonth(this.h))
}

func (this *QDate) DaysInYear() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDate_daysInYear(this.h))
}

func (this *QDate) WeekNumber() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDate_weekNumber(this.h))
}

func (this *QDate) YearWithCal(cal QCalendar) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	return (int)(C.QDate_yearWithCal(this.h, cal.cPointer()))
}

func (this *QDate) MonthWithCal(cal QCalendar) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	return (int)(C.QDate_monthWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DayWithCal(cal QCalendar) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	return (int)(C.QDate_dayWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DayOfWeekWithCal(cal QCalendar) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	return (int)(C.QDate_dayOfWeekWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DayOfYearWithCal(cal QCalendar) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	return (int)(C.QDate_dayOfYearWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DaysInMonthWithCal(cal QCalendar) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	return (int)(C.QDate_daysInMonthWithCal(this.h, cal.cPointer()))
}

func (this *QDate) DaysInYearWithCal(cal QCalendar) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	return (int)(C.QDate_daysInYearWithCal(this.h, cal.cPointer()))
}

func (this *QDate) StartOfDay() *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDate_startOfDay(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDay() *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDate_endOfDay(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) StartOfDayWithZone(zone *QTimeZone) *QDateTime {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(zone)
	_goptr := newQDateTime(C.QDate_startOfDayWithZone(this.h, zone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDayWithZone(zone *QTimeZone) *QDateTime {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(zone)
	_goptr := newQDateTime(C.QDate_endOfDayWithZone(this.h, zone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDate_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDate) ToStringWithFormat(format string) string {
	defer runtime.KeepAlive(this)
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QDate_toStringWithFormat(this.h, format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDate) SetDate(year int, month int, day int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDate_setDate(this.h, (C.int)(year), (C.int)(month), (C.int)(day)))
}

func (this *QDate) SetDate2(year int, month int, day int, cal QCalendar) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	return (bool)(C.QDate_setDate2(this.h, (C.int)(year), (C.int)(month), (C.int)(day), cal.cPointer()))
}

func (this *QDate) GetDate(year *int, month *int, day *int) {
	defer runtime.KeepAlive(this)
	C.QDate_getDate(this.h, (*C.int)(unsafe.Pointer(year)), (*C.int)(unsafe.Pointer(month)), (*C.int)(unsafe.Pointer(day)))
}

func (this *QDate) AddDays(days int64) *QDate {
	defer runtime.KeepAlive(this)
	_goptr := newQDate(C.QDate_addDays(this.h, (C.longlong)(days)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddMonths(months int) *QDate {
	defer runtime.KeepAlive(this)
	_goptr := newQDate(C.QDate_addMonths(this.h, (C.int)(months)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddYears(years int) *QDate {
	defer runtime.KeepAlive(this)
	_goptr := newQDate(C.QDate_addYears(this.h, (C.int)(years)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddMonths2(months int, cal QCalendar) *QDate {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	_goptr := newQDate(C.QDate_addMonths2(this.h, (C.int)(months), cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) AddYears2(years int, cal QCalendar) *QDate {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	_goptr := newQDate(C.QDate_addYears2(this.h, (C.int)(years), cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) DaysTo(d QDate) int64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(d)
	return (int64)(C.QDate_daysTo(this.h, d.cPointer()))
}

func QDate_CurrentDate() *QDate {
	_goptr := newQDate(C.QDate_currentDate())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_FromStringWithString(stringVal string) *QDate {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDate(C.QDate_fromStringWithString(stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_FromString4(stringVal string, format string) *QDate {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDate(C.QDate_fromString4(stringVal_ms, format_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_IsValid2(y int, m int, d int) bool {
	return (bool)(C.QDate_isValid2((C.int)(y), (C.int)(m), (C.int)(d)))
}

func QDate_IsLeapYear(year int) bool {
	return (bool)(C.QDate_isLeapYear((C.int)(year)))
}

func QDate_FromJulianDay(jd_ int64) *QDate {
	_goptr := newQDate(C.QDate_fromJulianDay((C.longlong)(jd_)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) ToJulianDay() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QDate_toJulianDay(this.h))
}

func (this *QDate) WeekNumberWithYearNum(yearNum *int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDate_weekNumberWithYearNum(this.h, (*C.int)(unsafe.Pointer(yearNum))))
}

func (this *QDate) StartOfDayWithSpec(spec TimeSpec) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDate_startOfDayWithSpec(this.h, (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) StartOfDay2(spec TimeSpec, offsetSeconds int) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDate_startOfDay2(this.h, (C.int)(spec), (C.int)(offsetSeconds)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDayWithSpec(spec TimeSpec) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDate_endOfDayWithSpec(this.h, (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) EndOfDay2(spec TimeSpec, offsetSeconds int) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDate_endOfDay2(this.h, (C.int)(spec), (C.int)(offsetSeconds)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDate) ToString3(format DateFormat) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDate_toString3(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDate) ToString4(format string, cal QCalendar) string {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QDate_toString4(this.h, format_ms, cal.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDate_FromString8(stringVal string, format DateFormat) *QDate {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDate(C.QDate_fromString8(stringVal_ms, (C.int)(format)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDate_FromString9(stringVal string, format string, cal QCalendar) *QDate {
	defer runtime.KeepAlive(cal)
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDate(C.QDate_fromString9(stringVal_ms, format_ms, cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDate) Delete() {
	C.QDate_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDate) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDate_delete((*C.QDate)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QTime struct {
	h  *C.QTime
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTime) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQTime((*C.QTime)(h))
}

// NewQTime constructs a new QTime object.
func NewQTime() *QTime {

	return newQTime(C.QTime_new())
}

// NewQTime2 constructs a new QTime object.
func NewQTime2(h int, m int) *QTime {

	return newQTime(C.QTime_new2((C.int)(h), (C.int)(m)))
}

// NewQTime3 constructs a new QTime object.
func NewQTime3(param1 *QTime) *QTime {
	defer runtime.KeepAlive(param1)

	return newQTime(C.QTime_new3(param1.cPointer()))
}

// NewQTime4 constructs a new QTime object.
func NewQTime4(h int, m int, s int) *QTime {

	return newQTime(C.QTime_new4((C.int)(h), (C.int)(m), (C.int)(s)))
}

// NewQTime5 constructs a new QTime object.
func NewQTime5(h int, m int, s int, ms int) *QTime {

	return newQTime(C.QTime_new5((C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms)))
}

func (this *QTime) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTime_isNull(this.h))
}

func (this *QTime) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTime_isValid(this.h))
}

func (this *QTime) Hour() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTime_hour(this.h))
}

func (this *QTime) Minute() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTime_minute(this.h))
}

func (this *QTime) Second() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTime_second(this.h))
}

func (this *QTime) Msec() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTime_msec(this.h))
}

func (this *QTime) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTime_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTime) ToStringWithFormat(format string) string {
	defer runtime.KeepAlive(this)
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QTime_toStringWithFormat(this.h, format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTime) SetHMS(h int, m int, s int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTime_setHMS(this.h, (C.int)(h), (C.int)(m), (C.int)(s)))
}

func (this *QTime) AddSecs(secs int) *QTime {
	defer runtime.KeepAlive(this)
	_goptr := newQTime(C.QTime_addSecs(this.h, (C.int)(secs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTime) SecsTo(t QTime) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(t)
	return (int)(C.QTime_secsTo(this.h, t.cPointer()))
}

func (this *QTime) AddMSecs(ms int) *QTime {
	defer runtime.KeepAlive(this)
	_goptr := newQTime(C.QTime_addMSecs(this.h, (C.int)(ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTime) MsecsTo(t QTime) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(t)
	return (int)(C.QTime_msecsTo(this.h, t.cPointer()))
}

func QTime_FromMSecsSinceStartOfDay(msecs int) *QTime {
	_goptr := newQTime(C.QTime_fromMSecsSinceStartOfDay((C.int)(msecs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTime) MsecsSinceStartOfDay() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTime_msecsSinceStartOfDay(this.h))
}

func QTime_CurrentTime() *QTime {
	_goptr := newQTime(C.QTime_currentTime())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_FromStringWithString(stringVal string) *QTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQTime(C.QTime_fromStringWithString(stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_FromString4(stringVal string, format string) *QTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQTime(C.QTime_fromString4(stringVal_ms, format_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_IsValid2(h int, m int, s int) bool {
	return (bool)(C.QTime_isValid2((C.int)(h), (C.int)(m), (C.int)(s)))
}

func (this *QTime) ToStringWithQtDateFormat(f DateFormat) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTime_toStringWithQtDateFormat(this.h, (C.int)(f))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTime) SetHMS2(h int, m int, s int, ms int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTime_setHMS2(this.h, (C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms)))
}

func QTime_FromString6(stringVal string, format DateFormat) *QTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQTime(C.QTime_fromString6(stringVal_ms, (C.int)(format)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTime_IsValid3(h int, m int, s int, ms int) bool {
	return (bool)(C.QTime_isValid3((C.int)(h), (C.int)(m), (C.int)(s), (C.int)(ms)))
}

// Delete this object from C++ memory.
func (this *QTime) Delete() {
	C.QTime_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTime) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTime_delete((*C.QTime)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDateTime struct {
	h  *C.QDateTime
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDateTime) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQDateTime((*C.QDateTime)(h))
}

// NewQDateTime constructs a new QDateTime object.
func NewQDateTime() *QDateTime {

	return newQDateTime(C.QDateTime_new())
}

// NewQDateTime2 constructs a new QDateTime object.
func NewQDateTime2(date QDate, time QTime) *QDateTime {
	defer runtime.KeepAlive(date)
	defer runtime.KeepAlive(time)

	return newQDateTime(C.QDateTime_new2(date.cPointer(), time.cPointer()))
}

// NewQDateTime3 constructs a new QDateTime object.
func NewQDateTime3(date QDate, time QTime, timeZone *QTimeZone) *QDateTime {
	defer runtime.KeepAlive(date)
	defer runtime.KeepAlive(time)
	defer runtime.KeepAlive(timeZone)

	return newQDateTime(C.QDateTime_new3(date.cPointer(), time.cPointer(), timeZone.cPointer()))
}

// NewQDateTime4 constructs a new QDateTime object.
func NewQDateTime4(other *QDateTime) *QDateTime {
	defer runtime.KeepAlive(other)

	return newQDateTime(C.QDateTime_new4(other.cPointer()))
}

// NewQDateTime5 constructs a new QDateTime object.
func NewQDateTime5(date QDate, time QTime, spec TimeSpec) *QDateTime {
	defer runtime.KeepAlive(date)
	defer runtime.KeepAlive(time)

	return newQDateTime(C.QDateTime_new5(date.cPointer(), time.cPointer(), (C.int)(spec)))
}

// NewQDateTime6 constructs a new QDateTime object.
func NewQDateTime6(date QDate, time QTime, spec TimeSpec, offsetSeconds int) *QDateTime {
	defer runtime.KeepAlive(date)
	defer runtime.KeepAlive(time)

	return newQDateTime(C.QDateTime_new6(date.cPointer(), time.cPointer(), (C.int)(spec), (C.int)(offsetSeconds)))
}

func (this *QDateTime) OperatorAssign(other *QDateTime) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDateTime_operatorAssign(this.h, other.cPointer())
}

func (this *QDateTime) Swap(other *QDateTime) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDateTime_swap(this.h, other.cPointer())
}

func (this *QDateTime) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDateTime_isNull(this.h))
}

func (this *QDateTime) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDateTime_isValid(this.h))
}

func (this *QDateTime) Date() *QDate {
	defer runtime.KeepAlive(this)
	_goptr := newQDate(C.QDateTime_date(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) Time() *QTime {
	defer runtime.KeepAlive(this)
	_goptr := newQTime(C.QDateTime_time(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) TimeSpec() TimeSpec {
	defer runtime.KeepAlive(this)
	return (TimeSpec)(C.QDateTime_timeSpec(this.h))
}

func (this *QDateTime) OffsetFromUtc() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDateTime_offsetFromUtc(this.h))
}

func (this *QDateTime) TimeZone() *QTimeZone {
	defer runtime.KeepAlive(this)
	_goptr := newQTimeZone(C.QDateTime_timeZone(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) TimeZoneAbbreviation() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDateTime_timeZoneAbbreviation(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTime) IsDaylightTime() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDateTime_isDaylightTime(this.h))
}

func (this *QDateTime) ToMSecsSinceEpoch() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QDateTime_toMSecsSinceEpoch(this.h))
}

func (this *QDateTime) ToSecsSinceEpoch() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QDateTime_toSecsSinceEpoch(this.h))
}

func (this *QDateTime) SetDate(date QDate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(date)
	C.QDateTime_setDate(this.h, date.cPointer())
}

func (this *QDateTime) SetTime(time QTime) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(time)
	C.QDateTime_setTime(this.h, time.cPointer())
}

func (this *QDateTime) SetTimeSpec(spec TimeSpec) {
	defer runtime.KeepAlive(this)
	C.QDateTime_setTimeSpec(this.h, (C.int)(spec))
}

func (this *QDateTime) SetOffsetFromUtc(offsetSeconds int) {
	defer runtime.KeepAlive(this)
	C.QDateTime_setOffsetFromUtc(this.h, (C.int)(offsetSeconds))
}

func (this *QDateTime) SetTimeZone(toZone *QTimeZone) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(toZone)
	C.QDateTime_setTimeZone(this.h, toZone.cPointer())
}

func (this *QDateTime) SetMSecsSinceEpoch(msecs int64) {
	defer runtime.KeepAlive(this)
	C.QDateTime_setMSecsSinceEpoch(this.h, (C.longlong)(msecs))
}

func (this *QDateTime) SetSecsSinceEpoch(secs int64) {
	defer runtime.KeepAlive(this)
	C.QDateTime_setSecsSinceEpoch(this.h, (C.longlong)(secs))
}

func (this *QDateTime) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDateTime_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTime) ToStringWithFormat(format string) string {
	defer runtime.KeepAlive(this)
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QDateTime_toStringWithFormat(this.h, format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTime) AddDays(days int64) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_addDays(this.h, (C.longlong)(days)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddMonths(months int) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_addMonths(this.h, (C.int)(months)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddYears(years int) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_addYears(this.h, (C.int)(years)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddSecs(secs int64) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_addSecs(this.h, (C.longlong)(secs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddMSecs(msecs int64) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_addMSecs(this.h, (C.longlong)(msecs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) AddDuration(msecs Milliseconds) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_addDuration(this.h, (C.int64_t)(msecs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToTimeSpec(spec TimeSpec) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_toTimeSpec(this.h, (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToLocalTime() *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_toLocalTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToUTC() *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_toUTC(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToOffsetFromUtc(offsetSeconds int) *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QDateTime_toOffsetFromUtc(this.h, (C.int)(offsetSeconds)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) ToTimeZone(toZone *QTimeZone) *QDateTime {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(toZone)
	_goptr := newQDateTime(C.QDateTime_toTimeZone(this.h, toZone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTime) DaysTo(param1 *QDateTime) int64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (int64)(C.QDateTime_daysTo(this.h, param1.cPointer()))
}

func (this *QDateTime) SecsTo(param1 *QDateTime) int64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (int64)(C.QDateTime_secsTo(this.h, param1.cPointer()))
}

func (this *QDateTime) MsecsTo(param1 *QDateTime) int64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (int64)(C.QDateTime_msecsTo(this.h, param1.cPointer()))
}

func QDateTime_CurrentDateTime() *QDateTime {
	_goptr := newQDateTime(C.QDateTime_currentDateTime())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_CurrentDateTimeUtc() *QDateTime {
	_goptr := newQDateTime(C.QDateTime_currentDateTimeUtc())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromStringWithString(stringVal string) *QDateTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDateTime(C.QDateTime_fromStringWithString(stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromString4(stringVal string, format string) *QDateTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDateTime(C.QDateTime_fromString4(stringVal_ms, format_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch(msecs int64) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_fromMSecsSinceEpoch((C.longlong)(msecs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch(secs int64) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_fromSecsSinceEpoch((C.longlong)(secs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch2(msecs int64, timeZone *QTimeZone) *QDateTime {
	defer runtime.KeepAlive(timeZone)
	_goptr := newQDateTime(C.QDateTime_fromMSecsSinceEpoch2((C.longlong)(msecs), timeZone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch2(secs int64, timeZone *QTimeZone) *QDateTime {
	defer runtime.KeepAlive(timeZone)
	_goptr := newQDateTime(C.QDateTime_fromSecsSinceEpoch2((C.longlong)(secs), timeZone.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_CurrentMSecsSinceEpoch() int64 {
	return (int64)(C.QDateTime_currentMSecsSinceEpoch())
}

func QDateTime_CurrentSecsSinceEpoch() int64 {
	return (int64)(C.QDateTime_currentSecsSinceEpoch())
}

func (this *QDateTime) OperatorPlusAssign(duration Milliseconds) *QDateTime {
	defer runtime.KeepAlive(this)
	_ret := newQDateTime(C.QDateTime_operatorPlusAssign(this.h, (C.int64_t)(duration)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDateTime) OperatorMinusAssign(duration Milliseconds) *QDateTime {
	defer runtime.KeepAlive(this)
	_ret := newQDateTime(C.QDateTime_operatorMinusAssign(this.h, (C.int64_t)(duration)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDateTime) ToString3(format DateFormat) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDateTime_toString3(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTime) ToString4(format string, cal QCalendar) string {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cal)
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QDateTime_toString4(this.h, format_ms, cal.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDateTime_FromString8(stringVal string, format DateFormat) *QDateTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDateTime(C.QDateTime_fromString8(stringVal_ms, (C.int)(format)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromString9(stringVal string, format string, cal QCalendar) *QDateTime {
	defer runtime.KeepAlive(cal)
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDateTime(C.QDateTime_fromString9(stringVal_ms, format_ms, cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch3(msecs int64, spec TimeSpec) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_fromMSecsSinceEpoch3((C.longlong)(msecs), (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromMSecsSinceEpoch4(msecs int64, spec TimeSpec, offsetFromUtc int) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_fromMSecsSinceEpoch4((C.longlong)(msecs), (C.int)(spec), (C.int)(offsetFromUtc)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch3(secs int64, spec TimeSpec) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_fromSecsSinceEpoch3((C.longlong)(secs), (C.int)(spec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDateTime_FromSecsSinceEpoch4(secs int64, spec TimeSpec, offsetFromUtc int) *QDateTime {
	_goptr := newQDateTime(C.QDateTime_fromSecsSinceEpoch4((C.longlong)(secs), (C.int)(spec), (C.int)(offsetFromUtc)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDateTime) Delete() {
	C.QDateTime_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDateTime) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDateTime_delete((*C.QDateTime)(gc[0]))
	})
	this.miqtSetGC(gc)
}
