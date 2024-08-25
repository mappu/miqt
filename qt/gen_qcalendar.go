package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcalendar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func (this *QCalendar) IsValid() bool {
	ret := C.QCalendar_IsValid(this.h)
	return (bool)(ret)
}

func (this *QCalendar) DaysInMonth(month int) int {
	ret := C.QCalendar_DaysInMonth(this.h, (C.int)(month))
	return (int)(ret)
}

func (this *QCalendar) DaysInYear(year int) int {
	ret := C.QCalendar_DaysInYear(this.h, (C.int)(year))
	return (int)(ret)
}

func (this *QCalendar) MonthsInYear(year int) int {
	ret := C.QCalendar_MonthsInYear(this.h, (C.int)(year))
	return (int)(ret)
}

func (this *QCalendar) IsDateValid(year int, month int, day int) bool {
	ret := C.QCalendar_IsDateValid(this.h, (C.int)(year), (C.int)(month), (C.int)(day))
	return (bool)(ret)
}

func (this *QCalendar) IsLeapYear(year int) bool {
	ret := C.QCalendar_IsLeapYear(this.h, (C.int)(year))
	return (bool)(ret)
}

func (this *QCalendar) IsGregorian() bool {
	ret := C.QCalendar_IsGregorian(this.h)
	return (bool)(ret)
}

func (this *QCalendar) IsLunar() bool {
	ret := C.QCalendar_IsLunar(this.h)
	return (bool)(ret)
}

func (this *QCalendar) IsLuniSolar() bool {
	ret := C.QCalendar_IsLuniSolar(this.h)
	return (bool)(ret)
}

func (this *QCalendar) IsSolar() bool {
	ret := C.QCalendar_IsSolar(this.h)
	return (bool)(ret)
}

func (this *QCalendar) IsProleptic() bool {
	ret := C.QCalendar_IsProleptic(this.h)
	return (bool)(ret)
}

func (this *QCalendar) HasYearZero() bool {
	ret := C.QCalendar_HasYearZero(this.h)
	return (bool)(ret)
}

func (this *QCalendar) MaximumDaysInMonth() int {
	ret := C.QCalendar_MaximumDaysInMonth(this.h)
	return (int)(ret)
}

func (this *QCalendar) MinimumDaysInMonth() int {
	ret := C.QCalendar_MinimumDaysInMonth(this.h)
	return (int)(ret)
}

func (this *QCalendar) MaximumMonthsInYear() int {
	ret := C.QCalendar_MaximumMonthsInYear(this.h)
	return (int)(ret)
}

func (this *QCalendar) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCalendar_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCalendar) DateFromParts(year int, month int, day int) *QDate {
	ret := C.QCalendar_DateFromParts(this.h, (C.int)(year), (C.int)(month), (C.int)(day))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendar) DayOfWeek(date QDate) int {
	ret := C.QCalendar_DayOfWeek(this.h, date.cPointer())
	return (int)(ret)
}

func QCalendar_AvailableCalendars() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCalendar_AvailableCalendars(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCalendar) DaysInMonth2(month int, year int) int {
	ret := C.QCalendar_DaysInMonth2(this.h, (C.int)(month), (C.int)(year))
	return (int)(ret)
}

func (this *QCalendar) Delete() {
	C.QCalendar_Delete(this.h)
}
