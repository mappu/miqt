package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qlocale.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLocale struct {
	h *C.QLocale
}

func (this *QLocale) cPointer() *C.QLocale {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLocale(h *C.QLocale) *QLocale {
	if h == nil {
		return nil
	}
	return &QLocale{h: h}
}

func newQLocale_U(h unsafe.Pointer) *QLocale {
	return newQLocale((*C.QLocale)(h))
}

// NewQLocale constructs a new QLocale object.
func NewQLocale() *QLocale {
	ret := C.QLocale_new()
	return newQLocale(ret)
}

// NewQLocale2 constructs a new QLocale object.
func NewQLocale2(name string) *QLocale {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QLocale_new2(name_Cstring, C.ulong(len(name)))
	return newQLocale(ret)
}

// NewQLocale3 constructs a new QLocale object.
func NewQLocale3(language uintptr) *QLocale {
	ret := C.QLocale_new3((C.uintptr_t)(language))
	return newQLocale(ret)
}

// NewQLocale4 constructs a new QLocale object.
func NewQLocale4(language uintptr, script uintptr, country uintptr) *QLocale {
	ret := C.QLocale_new4((C.uintptr_t)(language), (C.uintptr_t)(script), (C.uintptr_t)(country))
	return newQLocale(ret)
}

// NewQLocale5 constructs a new QLocale object.
func NewQLocale5(other *QLocale) *QLocale {
	ret := C.QLocale_new5(other.cPointer())
	return newQLocale(ret)
}

// NewQLocale6 constructs a new QLocale object.
func NewQLocale6(language uintptr, country uintptr) *QLocale {
	ret := C.QLocale_new6((C.uintptr_t)(language), (C.uintptr_t)(country))
	return newQLocale(ret)
}

func (this *QLocale) OperatorAssign(other *QLocale) {
	C.QLocale_OperatorAssign(this.h, other.cPointer())
}

func (this *QLocale) Swap(other *QLocale) {
	C.QLocale_Swap(this.h, other.cPointer())
}

func (this *QLocale) Language() uintptr {
	ret := C.QLocale_Language(this.h)
	return (uintptr)(ret)
}

func (this *QLocale) Script() uintptr {
	ret := C.QLocale_Script(this.h)
	return (uintptr)(ret)
}

func (this *QLocale) Country() uintptr {
	ret := C.QLocale_Country(this.h)
	return (uintptr)(ret)
}

func (this *QLocale) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) Bcp47Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_Bcp47Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) NativeLanguageName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_NativeLanguageName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) NativeCountryName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_NativeCountryName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToShort(s string) int16 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToShort(this.h, s_Cstring, C.ulong(len(s)))
	return (int16)(ret)
}

func (this *QLocale) ToUShort(s string) uint16 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToUShort(this.h, s_Cstring, C.ulong(len(s)))
	return (uint16)(ret)
}

func (this *QLocale) ToInt(s string) int {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToInt(this.h, s_Cstring, C.ulong(len(s)))
	return (int)(ret)
}

func (this *QLocale) ToUInt(s string) uint {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToUInt(this.h, s_Cstring, C.ulong(len(s)))
	return (uint)(ret)
}

func (this *QLocale) ToLong(s string) int64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToLong(this.h, s_Cstring, C.ulong(len(s)))
	return (int64)(ret)
}

func (this *QLocale) ToULong(s string) uint64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToULong(this.h, s_Cstring, C.ulong(len(s)))
	return (uint64)(ret)
}

func (this *QLocale) ToLongLong(s string) int64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToLongLong(this.h, s_Cstring, C.ulong(len(s)))
	return (int64)(ret)
}

func (this *QLocale) ToULongLong(s string) uint64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToULongLong(this.h, s_Cstring, C.ulong(len(s)))
	return (uint64)(ret)
}

func (this *QLocale) ToFloat(s string) float32 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToFloat(this.h, s_Cstring, C.ulong(len(s)))
	return (float32)(ret)
}

func (this *QLocale) ToDouble(s string) float64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToDouble(this.h, s_Cstring, C.ulong(len(s)))
	return (float64)(ret)
}

func (this *QLocale) ToString(i int64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString(this.h, (C.int64_t)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithQulonglong(i uint64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithQulonglong(this.h, (C.uint64_t)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithLong(i int64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithLong(this.h, (C.long)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithUlong(i uint64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithUlong(this.h, (C.ulong)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithShort(i int16) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithShort(this.h, (C.int16_t)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithUshort(i uint16) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithUshort(this.h, (C.uint16_t)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithInt(i int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithInt(this.h, (C.int)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithUint(i uint) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithUint(this.h, (C.uint)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithDouble(i float64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithDouble(this.h, (C.double)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithFloat(i float32) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithFloat(this.h, (C.float)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString2(date *QDate, formatStr string) string {
	formatStr_Cstring := C.CString(formatStr)
	defer C.free(unsafe.Pointer(formatStr_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString2(this.h, date.cPointer(), formatStr_Cstring, C.ulong(len(formatStr)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString3(time *QTime, formatStr string) string {
	formatStr_Cstring := C.CString(formatStr)
	defer C.free(unsafe.Pointer(formatStr_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString3(this.h, time.cPointer(), formatStr_Cstring, C.ulong(len(formatStr)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString4(dateTime *QDateTime, format string) string {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString4(this.h, dateTime.cPointer(), format_Cstring, C.ulong(len(format)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithDate(date *QDate) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithDate(this.h, date.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithTime(time *QTime) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithTime(this.h, time.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToStringWithDateTime(dateTime *QDateTime) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToStringWithDateTime(this.h, dateTime.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString9(date *QDate, format uintptr, cal QCalendar) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString9(this.h, date.cPointer(), (C.uintptr_t)(format), cal.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString10(dateTime *QDateTime, format uintptr, cal QCalendar) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString10(this.h, dateTime.cPointer(), (C.uintptr_t)(format), cal.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) DateFormat() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_DateFormat(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) TimeFormat() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_TimeFormat(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) DateTimeFormat() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_DateTimeFormat(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToDate(stringVal string) *QDate {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QLocale_ToDate(this.h, stringVal_Cstring, C.ulong(len(stringVal)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToTime(stringVal string) *QTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QLocale_ToTime(this.h, stringVal_Cstring, C.ulong(len(stringVal)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToDateTime(stringVal string) *QDateTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QLocale_ToDateTime(this.h, stringVal_Cstring, C.ulong(len(stringVal)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToDate2(stringVal string, format string) *QDate {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QLocale_ToDate2(this.h, stringVal_Cstring, C.ulong(len(stringVal)), format_Cstring, C.ulong(len(format)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToTime2(stringVal string, format string) *QTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QLocale_ToTime2(this.h, stringVal_Cstring, C.ulong(len(stringVal)), format_Cstring, C.ulong(len(format)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToDateTime2(stringVal string, format string) *QDateTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QLocale_ToDateTime2(this.h, stringVal_Cstring, C.ulong(len(stringVal)), format_Cstring, C.ulong(len(format)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToDate3(stringVal string, format uintptr, cal QCalendar) *QDate {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QLocale_ToDate3(this.h, stringVal_Cstring, C.ulong(len(stringVal)), (C.uintptr_t)(format), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToDateTime3(stringVal string, format uintptr, cal QCalendar) *QDateTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QLocale_ToDateTime3(this.h, stringVal_Cstring, C.ulong(len(stringVal)), (C.uintptr_t)(format), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToDate4(stringVal string, format string, cal QCalendar) *QDate {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QLocale_ToDate4(this.h, stringVal_Cstring, C.ulong(len(stringVal)), format_Cstring, C.ulong(len(format)), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToDateTime4(stringVal string, format string, cal QCalendar) *QDateTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QLocale_ToDateTime4(this.h, stringVal_Cstring, C.ulong(len(stringVal)), format_Cstring, C.ulong(len(format)), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToTime3(stringVal string, format uintptr, cal QCalendar) *QTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QLocale_ToTime3(this.h, stringVal_Cstring, C.ulong(len(stringVal)), (C.uintptr_t)(format), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToTime4(stringVal string, format string, cal QCalendar) *QTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QLocale_ToTime4(this.h, stringVal_Cstring, C.ulong(len(stringVal)), format_Cstring, C.ulong(len(format)), cal.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) DecimalPoint() *QChar {
	ret := C.QLocale_DecimalPoint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) GroupSeparator() *QChar {
	ret := C.QLocale_GroupSeparator(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) Percent() *QChar {
	ret := C.QLocale_Percent(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ZeroDigit() *QChar {
	ret := C.QLocale_ZeroDigit(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) NegativeSign() *QChar {
	ret := C.QLocale_NegativeSign(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) PositiveSign() *QChar {
	ret := C.QLocale_PositiveSign(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) Exponential() *QChar {
	ret := C.QLocale_Exponential(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) MonthName(param1 int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_MonthName(this.h, (C.int)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) StandaloneMonthName(param1 int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_StandaloneMonthName(this.h, (C.int)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) DayName(param1 int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_DayName(this.h, (C.int)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) StandaloneDayName(param1 int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_StandaloneDayName(this.h, (C.int)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) FirstDayOfWeek() uintptr {
	ret := C.QLocale_FirstDayOfWeek(this.h)
	return (uintptr)(ret)
}

func (this *QLocale) Weekdays() []uintptr {
	var _out *C.uintptr_t = nil
	var _out_len C.size_t = 0
	C.QLocale_Weekdays(this.h, &_out, &_out_len)
	ret := make([]uintptr, int(_out_len))
	_outCast := (*[0xffff]C.uintptr_t)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (uintptr)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) AmText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_AmText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) PmText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_PmText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) MeasurementSystem() uintptr {
	ret := C.QLocale_MeasurementSystem(this.h)
	return (uintptr)(ret)
}

func (this *QLocale) Collation() *QLocale {
	ret := C.QLocale_Collation(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLocale(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLocale) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) TextDirection() uintptr {
	ret := C.QLocale_TextDirection(this.h)
	return (uintptr)(ret)
}

func (this *QLocale) ToUpper(str string) string {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToUpper(this.h, str_Cstring, C.ulong(len(str)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToLower(str string) string {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToLower(this.h, str_Cstring, C.ulong(len(str)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) CurrencySymbol() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_CurrencySymbol(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString(param1 int64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString(this.h, (C.int64_t)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyStringWithQulonglong(param1 uint64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyStringWithQulonglong(this.h, (C.uint64_t)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyStringWithShort(param1 int16) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyStringWithShort(this.h, (C.int16_t)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyStringWithUshort(param1 uint16) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyStringWithUshort(this.h, (C.uint16_t)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyStringWithInt(param1 int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyStringWithInt(this.h, (C.int)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyStringWithUint(param1 uint) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyStringWithUint(this.h, (C.uint)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyStringWithDouble(param1 float64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyStringWithDouble(this.h, (C.double)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString2(param1 float64, symbol string, precision int) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString2(this.h, (C.double)(param1), symbol_Cstring, C.ulong(len(symbol)), (C.int)(precision), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyStringWithFloat(i float32) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyStringWithFloat(this.h, (C.float)(i), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString3(i float32, symbol string, precision int) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString3(this.h, (C.float)(i), symbol_Cstring, C.ulong(len(symbol)), (C.int)(precision), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) FormattedDataSize(bytes int64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_FormattedDataSize(this.h, (C.longlong)(bytes), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) FormattedDataSizeWithBytes(bytes int64) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_FormattedDataSizeWithBytes(this.h, (C.longlong)(bytes), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) UiLanguages() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QLocale_UiLanguages(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) OperatorEqual(other *QLocale) bool {
	ret := C.QLocale_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QLocale) OperatorNotEqual(other *QLocale) bool {
	ret := C.QLocale_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func QLocale_LanguageToString(language uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_LanguageToString((C.uintptr_t)(language), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLocale_CountryToString(country uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_CountryToString((C.uintptr_t)(country), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLocale_ScriptToString(script uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ScriptToString((C.uintptr_t)(script), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLocale_SetDefault(locale *QLocale) {
	C.QLocale_SetDefault(locale.cPointer())
}

func QLocale_C() *QLocale {
	ret := C.QLocale_C()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLocale(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLocale) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QLocale_System() *QLocale {
	ret := C.QLocale_System()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLocale(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLocale) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QLocale_MatchingLocales(language uintptr, script uintptr, country uintptr) []QLocale {
	var _out **C.QLocale = nil
	var _out_len C.size_t = 0
	C.QLocale_MatchingLocales((C.uintptr_t)(language), (C.uintptr_t)(script), (C.uintptr_t)(country), &_out, &_out_len)
	ret := make([]QLocale, int(_out_len))
	_outCast := (*[0xffff]*C.QLocale)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQLocale(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLocale_CountriesForLanguage(lang uintptr) []uintptr {
	var _out *C.uintptr_t = nil
	var _out_len C.size_t = 0
	C.QLocale_CountriesForLanguage((C.uintptr_t)(lang), &_out, &_out_len)
	ret := make([]uintptr, int(_out_len))
	_outCast := (*[0xffff]C.uintptr_t)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (uintptr)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) SetNumberOptions(options int) {
	C.QLocale_SetNumberOptions(this.h, (C.int)(options))
}

func (this *QLocale) NumberOptions() int {
	ret := C.QLocale_NumberOptions(this.h)
	return (int)(ret)
}

func (this *QLocale) QuoteString(str string) string {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_QuoteString(this.h, str_Cstring, C.ulong(len(str)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) CreateSeparatedList(strl []string) string {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strl_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(strl))))
	strl_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(strl))))
	defer C.free(unsafe.Pointer(strl_CArray))
	defer C.free(unsafe.Pointer(strl_Lengths))
	for i := range strl {
		single_cstring := C.CString(strl[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strl_CArray[i] = single_cstring
		strl_Lengths[i] = (C.size_t)(len(strl[i]))
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_CreateSeparatedList(this.h, &strl_CArray[0], &strl_Lengths[0], C.ulong(len(strl)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToShort2(s string, ok *bool) int16 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToShort2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (int16)(ret)
}

func (this *QLocale) ToUShort2(s string, ok *bool) uint16 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToUShort2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (uint16)(ret)
}

func (this *QLocale) ToInt2(s string, ok *bool) int {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToInt2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (int)(ret)
}

func (this *QLocale) ToUInt2(s string, ok *bool) uint {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToUInt2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (uint)(ret)
}

func (this *QLocale) ToLong2(s string, ok *bool) int64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToLong2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (int64)(ret)
}

func (this *QLocale) ToULong2(s string, ok *bool) uint64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToULong2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (uint64)(ret)
}

func (this *QLocale) ToLongLong2(s string, ok *bool) int64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToLongLong2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (int64)(ret)
}

func (this *QLocale) ToULongLong2(s string, ok *bool) uint64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToULongLong2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (uint64)(ret)
}

func (this *QLocale) ToFloat2(s string, ok *bool) float32 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToFloat2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (float32)(ret)
}

func (this *QLocale) ToDouble2(s string, ok *bool) float64 {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QLocale_ToDouble2(this.h, s_Cstring, C.ulong(len(s)), (*C.bool)(unsafe.Pointer(ok)))
	return (float64)(ret)
}

func (this *QLocale) ToString22(i float64, f byte) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString22(this.h, (C.double)(i), (C.char)(f), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString32(i float64, f byte, prec int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString32(this.h, (C.double)(i), (C.char)(f), (C.int)(prec), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString23(i float32, f byte) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString23(this.h, (C.float)(i), (C.char)(f), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString33(i float32, f byte, prec int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString33(this.h, (C.float)(i), (C.char)(f), (C.int)(prec), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString24(date *QDate, format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString24(this.h, date.cPointer(), (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString25(time *QTime, format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString25(this.h, time.cPointer(), (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToString26(dateTime *QDateTime, format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToString26(this.h, dateTime.cPointer(), (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) DateFormat1(format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_DateFormat1(this.h, (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) TimeFormat1(format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_TimeFormat1(this.h, (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) DateTimeFormat1(format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_DateTimeFormat1(this.h, (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToDate22(stringVal string, param2 uintptr) *QDate {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QLocale_ToDate22(this.h, stringVal_Cstring, C.ulong(len(stringVal)), (C.uintptr_t)(param2))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToTime22(stringVal string, param2 uintptr) *QTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QLocale_ToTime22(this.h, stringVal_Cstring, C.ulong(len(stringVal)), (C.uintptr_t)(param2))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) ToDateTime22(stringVal string, format uintptr) *QDateTime {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QLocale_ToDateTime22(this.h, stringVal_Cstring, C.ulong(len(stringVal)), (C.uintptr_t)(format))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLocale) MonthName2(param1 int, format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_MonthName2(this.h, (C.int)(param1), (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) StandaloneMonthName2(param1 int, format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_StandaloneMonthName2(this.h, (C.int)(param1), (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) DayName2(param1 int, format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_DayName2(this.h, (C.int)(param1), (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) StandaloneDayName2(param1 int, format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_StandaloneDayName2(this.h, (C.int)(param1), (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) CurrencySymbol1(param1 uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_CurrencySymbol1(this.h, (C.uintptr_t)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString22(param1 int64, symbol string) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString22(this.h, (C.int64_t)(param1), symbol_Cstring, C.ulong(len(symbol)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString23(param1 uint64, symbol string) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString23(this.h, (C.uint64_t)(param1), symbol_Cstring, C.ulong(len(symbol)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString24(param1 int16, symbol string) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString24(this.h, (C.int16_t)(param1), symbol_Cstring, C.ulong(len(symbol)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString25(param1 uint16, symbol string) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString25(this.h, (C.uint16_t)(param1), symbol_Cstring, C.ulong(len(symbol)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString26(param1 int, symbol string) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString26(this.h, (C.int)(param1), symbol_Cstring, C.ulong(len(symbol)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString27(param1 uint, symbol string) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString27(this.h, (C.uint)(param1), symbol_Cstring, C.ulong(len(symbol)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString28(param1 float64, symbol string) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString28(this.h, (C.double)(param1), symbol_Cstring, C.ulong(len(symbol)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) ToCurrencyString29(i float32, symbol string) string {
	symbol_Cstring := C.CString(symbol)
	defer C.free(unsafe.Pointer(symbol_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_ToCurrencyString29(this.h, (C.float)(i), symbol_Cstring, C.ulong(len(symbol)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) FormattedDataSize2(bytes int64, precision int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_FormattedDataSize2(this.h, (C.longlong)(bytes), (C.int)(precision), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) FormattedDataSize3(bytes int64, precision int, format int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_FormattedDataSize3(this.h, (C.longlong)(bytes), (C.int)(precision), (C.int)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) FormattedDataSize22(bytes int64, precision int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_FormattedDataSize22(this.h, (C.longlong)(bytes), (C.int)(precision), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) FormattedDataSize32(bytes int64, precision int, format int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_FormattedDataSize32(this.h, (C.longlong)(bytes), (C.int)(precision), (C.int)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) QuoteString2(str string, style uintptr) string {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLocale_QuoteString2(this.h, str_Cstring, C.ulong(len(str)), (C.uintptr_t)(style), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLocale) Delete() {
	C.QLocale_Delete(this.h)
}
