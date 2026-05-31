package qwt

/*

#include "gen_qwt_date.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtDate__Week0Type int

const (
	QwtDate__FirstThursday QwtDate__Week0Type = 0
	QwtDate__FirstDay      QwtDate__Week0Type = 1
)

type QwtDate__IntervalType int

const (
	QwtDate__Millisecond QwtDate__IntervalType = 0
	QwtDate__Second      QwtDate__IntervalType = 1
	QwtDate__Minute      QwtDate__IntervalType = 2
	QwtDate__Hour        QwtDate__IntervalType = 3
	QwtDate__Day         QwtDate__IntervalType = 4
	QwtDate__Week        QwtDate__IntervalType = 5
	QwtDate__Month       QwtDate__IntervalType = 6
	QwtDate__Year        QwtDate__IntervalType = 7
)

type QwtDate__ int

const (
	QwtDate__JulianDayForEpoch QwtDate__ = 2440588
)

type QwtDate struct {
	h *C.QwtDate
}

func (this *QwtDate) cPointer() *C.QwtDate {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtDate) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtDate constructs the type using only CGO pointers.
func newQwtDate(h *C.QwtDate) *QwtDate {
	if h == nil {
		return nil
	}

	return &QwtDate{h: h}
}

// UnsafeNewQwtDate constructs the type using only unsafe pointers.
func UnsafeNewQwtDate(h unsafe.Pointer) *QwtDate {
	return newQwtDate((*C.QwtDate)(h))
}

func QwtDate_MinDate() *qt.QDate {
	_goptr := qt.UnsafeNewQDate(unsafe.Pointer(C.QwtDate_minDate()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtDate_MaxDate() *qt.QDate {
	_goptr := qt.UnsafeNewQDate(unsafe.Pointer(C.QwtDate_maxDate()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtDate_ToDateTime(value float64) *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QwtDate_toDateTime((C.double)(value))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtDate_ToDouble(param1 *qt.QDateTime) float64 {
	return (float64)(C.QwtDate_toDouble((*C.QDateTime)(param1.UnsafePointer())))
}

func QwtDate_Ceil(param1 *qt.QDateTime, param2 QwtDate__IntervalType) *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QwtDate_ceil((*C.QDateTime)(param1.UnsafePointer()), (C.int)(param2))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtDate_Floor(param1 *qt.QDateTime, param2 QwtDate__IntervalType) *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QwtDate_floor((*C.QDateTime)(param1.UnsafePointer()), (C.int)(param2))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtDate_DateOfWeek0(year int, param2 QwtDate__Week0Type) *qt.QDate {
	_goptr := qt.UnsafeNewQDate(unsafe.Pointer(C.QwtDate_dateOfWeek0((C.int)(year), (C.int)(param2))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtDate_WeekNumber(param1 *qt.QDate, param2 QwtDate__Week0Type) int {
	return (int)(C.QwtDate_weekNumber((*C.QDate)(param1.UnsafePointer()), (C.int)(param2)))
}

func QwtDate_UtcOffset(param1 *qt.QDateTime) int {
	return (int)(C.QwtDate_utcOffset((*C.QDateTime)(param1.UnsafePointer())))
}

func QwtDate_ToString(param1 *qt.QDateTime, format string, param3 QwtDate__Week0Type) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QwtDate_toString((*C.QDateTime)(param1.UnsafePointer()), format_ms, (C.int)(param3))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtDate_ToDateTime2(value float64, param2 qt.TimeSpec) *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QwtDate_toDateTime2((C.double)(value), (C.int)(param2))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QwtDate) Delete() {
	C.QwtDate_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtDate) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtDate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
