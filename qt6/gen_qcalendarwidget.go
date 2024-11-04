package qt6

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
	QCalendarWidget__NoHorizontalHeader   QCalendarWidget__HorizontalHeaderFormat = 0
	QCalendarWidget__SingleLetterDayNames QCalendarWidget__HorizontalHeaderFormat = 1
	QCalendarWidget__ShortDayNames        QCalendarWidget__HorizontalHeaderFormat = 2
	QCalendarWidget__LongDayNames         QCalendarWidget__HorizontalHeaderFormat = 3
)

type QCalendarWidget__VerticalHeaderFormat int

const (
	QCalendarWidget__NoVerticalHeader QCalendarWidget__VerticalHeaderFormat = 0
	QCalendarWidget__ISOWeekNumbers   QCalendarWidget__VerticalHeaderFormat = 1
)

type QCalendarWidget__SelectionMode int

const (
	QCalendarWidget__NoSelection     QCalendarWidget__SelectionMode = 0
	QCalendarWidget__SingleSelection QCalendarWidget__SelectionMode = 1
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

func (this *QCalendarWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCalendarWidget(h *C.QCalendarWidget) *QCalendarWidget {
	if h == nil {
		return nil
	}
	return &QCalendarWidget{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQCalendarWidget(h unsafe.Pointer) *QCalendarWidget {
	return newQCalendarWidget((*C.QCalendarWidget)(h))
}

// NewQCalendarWidget constructs a new QCalendarWidget object.
func NewQCalendarWidget(parent *QWidget) *QCalendarWidget {
	ret := C.QCalendarWidget_new(parent.cPointer())
	return newQCalendarWidget(ret)
}

// NewQCalendarWidget2 constructs a new QCalendarWidget object.
func NewQCalendarWidget2() *QCalendarWidget {
	ret := C.QCalendarWidget_new2()
	return newQCalendarWidget(ret)
}

func (this *QCalendarWidget) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QCalendarWidget_MetaObject(this.h)))
}

func (this *QCalendarWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCalendarWidget_Metacast(this.h, param1_Cstring))
}

func QCalendarWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendarWidget) SizeHint() *QSize {
	_ret := C.QCalendarWidget_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) MinimumSizeHint() *QSize {
	_ret := C.QCalendarWidget_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SelectedDate() *QDate {
	_ret := C.QCalendarWidget_SelectedDate(this.h)
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) YearShown() int {
	return (int)(C.QCalendarWidget_YearShown(this.h))
}

func (this *QCalendarWidget) MonthShown() int {
	return (int)(C.QCalendarWidget_MonthShown(this.h))
}

func (this *QCalendarWidget) MinimumDate() *QDate {
	_ret := C.QCalendarWidget_MinimumDate(this.h)
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetMinimumDate(date QDate) {
	C.QCalendarWidget_SetMinimumDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) MaximumDate() *QDate {
	_ret := C.QCalendarWidget_MaximumDate(this.h)
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetMaximumDate(date QDate) {
	C.QCalendarWidget_SetMaximumDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) FirstDayOfWeek() DayOfWeek {
	return (DayOfWeek)(C.QCalendarWidget_FirstDayOfWeek(this.h))
}

func (this *QCalendarWidget) SetFirstDayOfWeek(dayOfWeek DayOfWeek) {
	C.QCalendarWidget_SetFirstDayOfWeek(this.h, (C.int)(dayOfWeek))
}

func (this *QCalendarWidget) IsNavigationBarVisible() bool {
	return (bool)(C.QCalendarWidget_IsNavigationBarVisible(this.h))
}

func (this *QCalendarWidget) IsGridVisible() bool {
	return (bool)(C.QCalendarWidget_IsGridVisible(this.h))
}

func (this *QCalendarWidget) Calendar() *QCalendar {
	_ret := C.QCalendarWidget_Calendar(this.h)
	_goptr := newQCalendar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetCalendar(calendar QCalendar) {
	C.QCalendarWidget_SetCalendar(this.h, calendar.cPointer())
}

func (this *QCalendarWidget) SelectionMode() QCalendarWidget__SelectionMode {
	return (QCalendarWidget__SelectionMode)(C.QCalendarWidget_SelectionMode(this.h))
}

func (this *QCalendarWidget) SetSelectionMode(mode QCalendarWidget__SelectionMode) {
	C.QCalendarWidget_SetSelectionMode(this.h, (C.int)(mode))
}

func (this *QCalendarWidget) HorizontalHeaderFormat() QCalendarWidget__HorizontalHeaderFormat {
	return (QCalendarWidget__HorizontalHeaderFormat)(C.QCalendarWidget_HorizontalHeaderFormat(this.h))
}

func (this *QCalendarWidget) SetHorizontalHeaderFormat(format QCalendarWidget__HorizontalHeaderFormat) {
	C.QCalendarWidget_SetHorizontalHeaderFormat(this.h, (C.int)(format))
}

func (this *QCalendarWidget) VerticalHeaderFormat() QCalendarWidget__VerticalHeaderFormat {
	return (QCalendarWidget__VerticalHeaderFormat)(C.QCalendarWidget_VerticalHeaderFormat(this.h))
}

func (this *QCalendarWidget) SetVerticalHeaderFormat(format QCalendarWidget__VerticalHeaderFormat) {
	C.QCalendarWidget_SetVerticalHeaderFormat(this.h, (C.int)(format))
}

func (this *QCalendarWidget) HeaderTextFormat() *QTextCharFormat {
	_ret := C.QCalendarWidget_HeaderTextFormat(this.h)
	_goptr := newQTextCharFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetHeaderTextFormat(format *QTextCharFormat) {
	C.QCalendarWidget_SetHeaderTextFormat(this.h, format.cPointer())
}

func (this *QCalendarWidget) WeekdayTextFormat(dayOfWeek DayOfWeek) *QTextCharFormat {
	_ret := C.QCalendarWidget_WeekdayTextFormat(this.h, (C.int)(dayOfWeek))
	_goptr := newQTextCharFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetWeekdayTextFormat(dayOfWeek DayOfWeek, format *QTextCharFormat) {
	C.QCalendarWidget_SetWeekdayTextFormat(this.h, (C.int)(dayOfWeek), format.cPointer())
}

func (this *QCalendarWidget) DateTextFormat() map[QDate]QTextCharFormat {
	var _mm C.struct_miqt_map = C.QCalendarWidget_DateTextFormat(this.h)
	_ret := make(map[QDate]QTextCharFormat, int(_mm.len))
	_Keys := (*[0xffff]*C.QDate)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QTextCharFormat)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_mapkey_ret := _Keys[i]
		_mapkey_goptr := newQDate(_mapkey_ret)
		_mapkey_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Key := *_mapkey_goptr

		_mapval_ret := _Values[i]
		_mapval_goptr := newQTextCharFormat(_mapval_ret)
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QCalendarWidget) DateTextFormatWithDate(date QDate) *QTextCharFormat {
	_ret := C.QCalendarWidget_DateTextFormatWithDate(this.h, date.cPointer())
	_goptr := newQTextCharFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetDateTextFormat(date QDate, format *QTextCharFormat) {
	C.QCalendarWidget_SetDateTextFormat(this.h, date.cPointer(), format.cPointer())
}

func (this *QCalendarWidget) IsDateEditEnabled() bool {
	return (bool)(C.QCalendarWidget_IsDateEditEnabled(this.h))
}

func (this *QCalendarWidget) SetDateEditEnabled(enable bool) {
	C.QCalendarWidget_SetDateEditEnabled(this.h, (C.bool)(enable))
}

func (this *QCalendarWidget) DateEditAcceptDelay() int {
	return (int)(C.QCalendarWidget_DateEditAcceptDelay(this.h))
}

func (this *QCalendarWidget) SetDateEditAcceptDelay(delay int) {
	C.QCalendarWidget_SetDateEditAcceptDelay(this.h, (C.int)(delay))
}

func (this *QCalendarWidget) SetSelectedDate(date QDate) {
	C.QCalendarWidget_SetSelectedDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) SetDateRange(min QDate, max QDate) {
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
	C.QCalendarWidget_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_SelectionChanged
func miqt_exec_callback_QCalendarWidget_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCalendarWidget) Clicked(date QDate) {
	C.QCalendarWidget_Clicked(this.h, date.cPointer())
}
func (this *QCalendarWidget) OnClicked(slot func(date QDate)) {
	C.QCalendarWidget_connect_Clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_Clicked
func miqt_exec_callback_QCalendarWidget_Clicked(cb C.intptr_t, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(date QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	date_ret := date
	date_goptr := newQDate(date_ret)
	date_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *date_goptr

	gofunc(slotval1)
}

func (this *QCalendarWidget) Activated(date QDate) {
	C.QCalendarWidget_Activated(this.h, date.cPointer())
}
func (this *QCalendarWidget) OnActivated(slot func(date QDate)) {
	C.QCalendarWidget_connect_Activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_Activated
func miqt_exec_callback_QCalendarWidget_Activated(cb C.intptr_t, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(date QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	date_ret := date
	date_goptr := newQDate(date_ret)
	date_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *date_goptr

	gofunc(slotval1)
}

func (this *QCalendarWidget) CurrentPageChanged(year int, month int) {
	C.QCalendarWidget_CurrentPageChanged(this.h, (C.int)(year), (C.int)(month))
}
func (this *QCalendarWidget) OnCurrentPageChanged(slot func(year int, month int)) {
	C.QCalendarWidget_connect_CurrentPageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_CurrentPageChanged
func miqt_exec_callback_QCalendarWidget_CurrentPageChanged(cb C.intptr_t, year C.int, month C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(year int, month int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(year)

	slotval2 := (int)(month)

	gofunc(slotval1, slotval2)
}

func QCalendarWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCalendarWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCalendarWidget) Delete() {
	C.QCalendarWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCalendarWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QCalendarWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
