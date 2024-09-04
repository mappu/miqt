package qt

/*

#include "gen_qcalendarwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCalendarWidget__HorizontalHeaderFormat int

const (
	QCalendarWidget__HorizontalHeaderFormat__NoHorizontalHeader   QCalendarWidget__HorizontalHeaderFormat = 0
	QCalendarWidget__HorizontalHeaderFormat__SingleLetterDayNames QCalendarWidget__HorizontalHeaderFormat = 1
	QCalendarWidget__HorizontalHeaderFormat__ShortDayNames        QCalendarWidget__HorizontalHeaderFormat = 2
	QCalendarWidget__HorizontalHeaderFormat__LongDayNames         QCalendarWidget__HorizontalHeaderFormat = 3
)

type QCalendarWidget__VerticalHeaderFormat int

const (
	QCalendarWidget__VerticalHeaderFormat__NoVerticalHeader QCalendarWidget__VerticalHeaderFormat = 0
	QCalendarWidget__VerticalHeaderFormat__ISOWeekNumbers   QCalendarWidget__VerticalHeaderFormat = 1
)

type QCalendarWidget__SelectionMode int

const (
	QCalendarWidget__SelectionMode__NoSelection     QCalendarWidget__SelectionMode = 0
	QCalendarWidget__SelectionMode__SingleSelection QCalendarWidget__SelectionMode = 1
)

type QCalendarWidget struct {
	h *C.QCalendarWidget
	*QWidget
}

func (this *QCalendarWidget) cPointer() *C.QCalendarWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCalendarWidget(h *C.QCalendarWidget) *QCalendarWidget {
	if h == nil {
		return nil
	}
	return &QCalendarWidget{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQCalendarWidget_U(h unsafe.Pointer) *QCalendarWidget {
	return newQCalendarWidget((*C.QCalendarWidget)(h))
}

// NewQCalendarWidget constructs a new QCalendarWidget object.
func NewQCalendarWidget() *QCalendarWidget {
	ret := C.QCalendarWidget_new()
	return newQCalendarWidget(ret)
}

// NewQCalendarWidget2 constructs a new QCalendarWidget object.
func NewQCalendarWidget2(parent *QWidget) *QCalendarWidget {
	ret := C.QCalendarWidget_new2(parent.cPointer())
	return newQCalendarWidget(ret)
}

func (this *QCalendarWidget) MetaObject() *QMetaObject {
	ret := C.QCalendarWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QCalendarWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCalendarWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCalendarWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCalendarWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCalendarWidget) SizeHint() *QSize {
	ret := C.QCalendarWidget_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendarWidget) MinimumSizeHint() *QSize {
	ret := C.QCalendarWidget_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendarWidget) SelectedDate() *QDate {
	ret := C.QCalendarWidget_SelectedDate(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendarWidget) YearShown() int {
	ret := C.QCalendarWidget_YearShown(this.h)
	return (int)(ret)
}

func (this *QCalendarWidget) MonthShown() int {
	ret := C.QCalendarWidget_MonthShown(this.h)
	return (int)(ret)
}

func (this *QCalendarWidget) MinimumDate() *QDate {
	ret := C.QCalendarWidget_MinimumDate(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendarWidget) SetMinimumDate(date *QDate) {
	C.QCalendarWidget_SetMinimumDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) MaximumDate() *QDate {
	ret := C.QCalendarWidget_MaximumDate(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendarWidget) SetMaximumDate(date *QDate) {
	C.QCalendarWidget_SetMaximumDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) FirstDayOfWeek() DayOfWeek {
	ret := C.QCalendarWidget_FirstDayOfWeek(this.h)
	return (DayOfWeek)(ret)
}

func (this *QCalendarWidget) SetFirstDayOfWeek(dayOfWeek DayOfWeek) {
	C.QCalendarWidget_SetFirstDayOfWeek(this.h, (C.uintptr_t)(dayOfWeek))
}

func (this *QCalendarWidget) IsNavigationBarVisible() bool {
	ret := C.QCalendarWidget_IsNavigationBarVisible(this.h)
	return (bool)(ret)
}

func (this *QCalendarWidget) IsGridVisible() bool {
	ret := C.QCalendarWidget_IsGridVisible(this.h)
	return (bool)(ret)
}

func (this *QCalendarWidget) Calendar() *QCalendar {
	ret := C.QCalendarWidget_Calendar(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCalendar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCalendar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendarWidget) SetCalendar(calendar QCalendar) {
	C.QCalendarWidget_SetCalendar(this.h, calendar.cPointer())
}

func (this *QCalendarWidget) SelectionMode() QCalendarWidget__SelectionMode {
	ret := C.QCalendarWidget_SelectionMode(this.h)
	return (QCalendarWidget__SelectionMode)(ret)
}

func (this *QCalendarWidget) SetSelectionMode(mode QCalendarWidget__SelectionMode) {
	C.QCalendarWidget_SetSelectionMode(this.h, (C.uintptr_t)(mode))
}

func (this *QCalendarWidget) HorizontalHeaderFormat() QCalendarWidget__HorizontalHeaderFormat {
	ret := C.QCalendarWidget_HorizontalHeaderFormat(this.h)
	return (QCalendarWidget__HorizontalHeaderFormat)(ret)
}

func (this *QCalendarWidget) SetHorizontalHeaderFormat(format QCalendarWidget__HorizontalHeaderFormat) {
	C.QCalendarWidget_SetHorizontalHeaderFormat(this.h, (C.uintptr_t)(format))
}

func (this *QCalendarWidget) VerticalHeaderFormat() QCalendarWidget__VerticalHeaderFormat {
	ret := C.QCalendarWidget_VerticalHeaderFormat(this.h)
	return (QCalendarWidget__VerticalHeaderFormat)(ret)
}

func (this *QCalendarWidget) SetVerticalHeaderFormat(format QCalendarWidget__VerticalHeaderFormat) {
	C.QCalendarWidget_SetVerticalHeaderFormat(this.h, (C.uintptr_t)(format))
}

func (this *QCalendarWidget) HeaderTextFormat() *QTextCharFormat {
	ret := C.QCalendarWidget_HeaderTextFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCharFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCharFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendarWidget) SetHeaderTextFormat(format *QTextCharFormat) {
	C.QCalendarWidget_SetHeaderTextFormat(this.h, format.cPointer())
}

func (this *QCalendarWidget) WeekdayTextFormat(dayOfWeek DayOfWeek) *QTextCharFormat {
	ret := C.QCalendarWidget_WeekdayTextFormat(this.h, (C.uintptr_t)(dayOfWeek))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCharFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCharFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendarWidget) SetWeekdayTextFormat(dayOfWeek DayOfWeek, format *QTextCharFormat) {
	C.QCalendarWidget_SetWeekdayTextFormat(this.h, (C.uintptr_t)(dayOfWeek), format.cPointer())
}

func (this *QCalendarWidget) DateTextFormatWithDate(date *QDate) *QTextCharFormat {
	ret := C.QCalendarWidget_DateTextFormatWithDate(this.h, date.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCharFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCharFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCalendarWidget) SetDateTextFormat(date *QDate, format *QTextCharFormat) {
	C.QCalendarWidget_SetDateTextFormat(this.h, date.cPointer(), format.cPointer())
}

func (this *QCalendarWidget) IsDateEditEnabled() bool {
	ret := C.QCalendarWidget_IsDateEditEnabled(this.h)
	return (bool)(ret)
}

func (this *QCalendarWidget) SetDateEditEnabled(enable bool) {
	C.QCalendarWidget_SetDateEditEnabled(this.h, (C.bool)(enable))
}

func (this *QCalendarWidget) DateEditAcceptDelay() int {
	ret := C.QCalendarWidget_DateEditAcceptDelay(this.h)
	return (int)(ret)
}

func (this *QCalendarWidget) SetDateEditAcceptDelay(delay int) {
	C.QCalendarWidget_SetDateEditAcceptDelay(this.h, (C.int)(delay))
}

func (this *QCalendarWidget) SetSelectedDate(date *QDate) {
	C.QCalendarWidget_SetSelectedDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) SetDateRange(min *QDate, max *QDate) {
	C.QCalendarWidget_SetDateRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QCalendarWidget) SetCurrentPage(year int, month int) {
	C.QCalendarWidget_SetCurrentPage(this.h, (C.int)(year), (C.int)(month))
}

func (this *QCalendarWidget) SetGridVisible(show bool) {
	C.QCalendarWidget_SetGridVisible(this.h, (C.bool)(show))
}

func (this *QCalendarWidget) SetNavigationBarVisible(visible bool) {
	C.QCalendarWidget_SetNavigationBarVisible(this.h, (C.bool)(visible))
}

func (this *QCalendarWidget) ShowNextMonth() {
	C.QCalendarWidget_ShowNextMonth(this.h)
}

func (this *QCalendarWidget) ShowPreviousMonth() {
	C.QCalendarWidget_ShowPreviousMonth(this.h)
}

func (this *QCalendarWidget) ShowNextYear() {
	C.QCalendarWidget_ShowNextYear(this.h)
}

func (this *QCalendarWidget) ShowPreviousYear() {
	C.QCalendarWidget_ShowPreviousYear(this.h)
}

func (this *QCalendarWidget) ShowSelectedDate() {
	C.QCalendarWidget_ShowSelectedDate(this.h)
}

func (this *QCalendarWidget) ShowToday() {
	C.QCalendarWidget_ShowToday(this.h)
}

func (this *QCalendarWidget) SelectionChanged() {
	C.QCalendarWidget_SelectionChanged(this.h)
}

func (this *QCalendarWidget) OnSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCalendarWidget_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QCalendarWidget) Clicked(date *QDate) {
	C.QCalendarWidget_Clicked(this.h, date.cPointer())
}

func (this *QCalendarWidget) OnClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCalendarWidget_connect_Clicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QCalendarWidget) Activated(date *QDate) {
	C.QCalendarWidget_Activated(this.h, date.cPointer())
}

func (this *QCalendarWidget) OnActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCalendarWidget_connect_Activated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QCalendarWidget) CurrentPageChanged(year int, month int) {
	C.QCalendarWidget_CurrentPageChanged(this.h, (C.int)(year), (C.int)(month))
}

func (this *QCalendarWidget) OnCurrentPageChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCalendarWidget_connect_CurrentPageChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QCalendarWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCalendarWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCalendarWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCalendarWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCalendarWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCalendarWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCalendarWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCalendarWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCalendarWidget) Delete() {
	C.QCalendarWidget_Delete(this.h)
}
