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

// newQCalendarWidget constructs the type using only CGO pointers.
func newQCalendarWidget(h *C.QCalendarWidget) *QCalendarWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QCalendarWidget_virtbase(h, &outptr_QWidget)

	return &QCalendarWidget{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQCalendarWidget constructs the type using only unsafe pointers.
func UnsafeNewQCalendarWidget(h unsafe.Pointer) *QCalendarWidget {
	return newQCalendarWidget((*C.QCalendarWidget)(h))
}

// NewQCalendarWidget constructs a new QCalendarWidget object.
func NewQCalendarWidget(parent *QWidget) *QCalendarWidget {

	return newQCalendarWidget(C.QCalendarWidget_new(parent.cPointer()))
}

// NewQCalendarWidget2 constructs a new QCalendarWidget object.
func NewQCalendarWidget2() *QCalendarWidget {

	return newQCalendarWidget(C.QCalendarWidget_new2())
}

func (this *QCalendarWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QCalendarWidget_metaObject(this.h))
}

func (this *QCalendarWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCalendarWidget_metacast(this.h, param1_Cstring))
}

func QCalendarWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCalendarWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendarWidget) SizeHint() *QSize {
	_goptr := newQSize(C.QCalendarWidget_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QCalendarWidget_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SelectedDate() *QDate {
	_goptr := newQDate(C.QCalendarWidget_selectedDate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) YearShown() int {
	return (int)(C.QCalendarWidget_yearShown(this.h))
}

func (this *QCalendarWidget) MonthShown() int {
	return (int)(C.QCalendarWidget_monthShown(this.h))
}

func (this *QCalendarWidget) MinimumDate() *QDate {
	_goptr := newQDate(C.QCalendarWidget_minimumDate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetMinimumDate(date *QDate) {
	C.QCalendarWidget_setMinimumDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) MaximumDate() *QDate {
	_goptr := newQDate(C.QCalendarWidget_maximumDate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetMaximumDate(date *QDate) {
	C.QCalendarWidget_setMaximumDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) FirstDayOfWeek() DayOfWeek {
	return (DayOfWeek)(C.QCalendarWidget_firstDayOfWeek(this.h))
}

func (this *QCalendarWidget) SetFirstDayOfWeek(dayOfWeek DayOfWeek) {
	C.QCalendarWidget_setFirstDayOfWeek(this.h, (C.int)(dayOfWeek))
}

func (this *QCalendarWidget) IsNavigationBarVisible() bool {
	return (bool)(C.QCalendarWidget_isNavigationBarVisible(this.h))
}

func (this *QCalendarWidget) IsGridVisible() bool {
	return (bool)(C.QCalendarWidget_isGridVisible(this.h))
}

func (this *QCalendarWidget) Calendar() *QCalendar {
	_goptr := newQCalendar(C.QCalendarWidget_calendar(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetCalendar(calendar QCalendar) {
	C.QCalendarWidget_setCalendar(this.h, calendar.cPointer())
}

func (this *QCalendarWidget) SelectionMode() QCalendarWidget__SelectionMode {
	return (QCalendarWidget__SelectionMode)(C.QCalendarWidget_selectionMode(this.h))
}

func (this *QCalendarWidget) SetSelectionMode(mode QCalendarWidget__SelectionMode) {
	C.QCalendarWidget_setSelectionMode(this.h, (C.int)(mode))
}

func (this *QCalendarWidget) HorizontalHeaderFormat() QCalendarWidget__HorizontalHeaderFormat {
	return (QCalendarWidget__HorizontalHeaderFormat)(C.QCalendarWidget_horizontalHeaderFormat(this.h))
}

func (this *QCalendarWidget) SetHorizontalHeaderFormat(format QCalendarWidget__HorizontalHeaderFormat) {
	C.QCalendarWidget_setHorizontalHeaderFormat(this.h, (C.int)(format))
}

func (this *QCalendarWidget) VerticalHeaderFormat() QCalendarWidget__VerticalHeaderFormat {
	return (QCalendarWidget__VerticalHeaderFormat)(C.QCalendarWidget_verticalHeaderFormat(this.h))
}

func (this *QCalendarWidget) SetVerticalHeaderFormat(format QCalendarWidget__VerticalHeaderFormat) {
	C.QCalendarWidget_setVerticalHeaderFormat(this.h, (C.int)(format))
}

func (this *QCalendarWidget) HeaderTextFormat() *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QCalendarWidget_headerTextFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetHeaderTextFormat(format *QTextCharFormat) {
	C.QCalendarWidget_setHeaderTextFormat(this.h, format.cPointer())
}

func (this *QCalendarWidget) WeekdayTextFormat(dayOfWeek DayOfWeek) *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QCalendarWidget_weekdayTextFormat(this.h, (C.int)(dayOfWeek)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetWeekdayTextFormat(dayOfWeek DayOfWeek, format *QTextCharFormat) {
	C.QCalendarWidget_setWeekdayTextFormat(this.h, (C.int)(dayOfWeek), format.cPointer())
}

func (this *QCalendarWidget) DateTextFormat() map[QDate]QTextCharFormat {
	var _mm C.struct_miqt_map = C.QCalendarWidget_dateTextFormat(this.h)
	_ret := make(map[QDate]QTextCharFormat, int(_mm.len))
	_Keys := (*[0xffff]*C.QDate)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QTextCharFormat)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_mapkey_goptr := newQDate(_Keys[i])
		_mapkey_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Key := *_mapkey_goptr

		_mapval_goptr := newQTextCharFormat(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QCalendarWidget) DateTextFormatWithDate(date *QDate) *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QCalendarWidget_dateTextFormatWithDate(this.h, date.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetDateTextFormat(date *QDate, format *QTextCharFormat) {
	C.QCalendarWidget_setDateTextFormat(this.h, date.cPointer(), format.cPointer())
}

func (this *QCalendarWidget) IsDateEditEnabled() bool {
	return (bool)(C.QCalendarWidget_isDateEditEnabled(this.h))
}

func (this *QCalendarWidget) SetDateEditEnabled(enable bool) {
	C.QCalendarWidget_setDateEditEnabled(this.h, (C.bool)(enable))
}

func (this *QCalendarWidget) DateEditAcceptDelay() int {
	return (int)(C.QCalendarWidget_dateEditAcceptDelay(this.h))
}

func (this *QCalendarWidget) SetDateEditAcceptDelay(delay int) {
	C.QCalendarWidget_setDateEditAcceptDelay(this.h, (C.int)(delay))
}

func (this *QCalendarWidget) SetSelectedDate(date *QDate) {
	C.QCalendarWidget_setSelectedDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) SetDateRange(min *QDate, max *QDate) {
	C.QCalendarWidget_setDateRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QCalendarWidget) SetCurrentPage(year int, month int) {
	C.QCalendarWidget_setCurrentPage(this.h, (C.int)(year), (C.int)(month))
}

func (this *QCalendarWidget) SetGridVisible(show bool) {
	C.QCalendarWidget_setGridVisible(this.h, (C.bool)(show))
}

func (this *QCalendarWidget) SetNavigationBarVisible(visible bool) {
	C.QCalendarWidget_setNavigationBarVisible(this.h, (C.bool)(visible))
}

func (this *QCalendarWidget) ShowNextMonth() {
	C.QCalendarWidget_showNextMonth(this.h)
}

func (this *QCalendarWidget) ShowPreviousMonth() {
	C.QCalendarWidget_showPreviousMonth(this.h)
}

func (this *QCalendarWidget) ShowNextYear() {
	C.QCalendarWidget_showNextYear(this.h)
}

func (this *QCalendarWidget) ShowPreviousYear() {
	C.QCalendarWidget_showPreviousYear(this.h)
}

func (this *QCalendarWidget) ShowSelectedDate() {
	C.QCalendarWidget_showSelectedDate(this.h)
}

func (this *QCalendarWidget) ShowToday() {
	C.QCalendarWidget_showToday(this.h)
}

func (this *QCalendarWidget) SelectionChanged() {
	C.QCalendarWidget_selectionChanged(this.h)
}
func (this *QCalendarWidget) OnSelectionChanged(slot func()) {
	C.QCalendarWidget_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_selectionChanged
func miqt_exec_callback_QCalendarWidget_selectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCalendarWidget) Clicked(date *QDate) {
	C.QCalendarWidget_clicked(this.h, date.cPointer())
}
func (this *QCalendarWidget) OnClicked(slot func(date *QDate)) {
	C.QCalendarWidget_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_clicked
func miqt_exec_callback_QCalendarWidget_clicked(cb C.intptr_t, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(date *QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDate(date)

	gofunc(slotval1)
}

func (this *QCalendarWidget) Activated(date *QDate) {
	C.QCalendarWidget_activated(this.h, date.cPointer())
}
func (this *QCalendarWidget) OnActivated(slot func(date *QDate)) {
	C.QCalendarWidget_connect_activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_activated
func miqt_exec_callback_QCalendarWidget_activated(cb C.intptr_t, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(date *QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDate(date)

	gofunc(slotval1)
}

func (this *QCalendarWidget) CurrentPageChanged(year int, month int) {
	C.QCalendarWidget_currentPageChanged(this.h, (C.int)(year), (C.int)(month))
}
func (this *QCalendarWidget) OnCurrentPageChanged(slot func(year int, month int)) {
	C.QCalendarWidget_connect_currentPageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_currentPageChanged
func miqt_exec_callback_QCalendarWidget_currentPageChanged(cb C.intptr_t, year C.int, month C.int) {
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
	var _ms C.struct_miqt_string = C.QCalendarWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCalendarWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCalendarWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCalendarWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendarWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QCalendarWidget_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCalendarWidget) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCalendarWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_sizeHint
func miqt_exec_callback_QCalendarWidget_sizeHint(self *C.QCalendarWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QCalendarWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCalendarWidget) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCalendarWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_minimumSizeHint
func miqt_exec_callback_QCalendarWidget_minimumSizeHint(self *C.QCalendarWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QCalendarWidget_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QCalendarWidget) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QCalendarWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_event
func miqt_exec_callback_QCalendarWidget_event(self *C.QCalendarWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QCalendarWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QCalendarWidget) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QCalendarWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_eventFilter
func miqt_exec_callback_QCalendarWidget_eventFilter(self *C.QCalendarWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QCalendarWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QCalendarWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_mousePressEvent
func miqt_exec_callback_QCalendarWidget_mousePressEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QCalendarWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QCalendarWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_resizeEvent
func miqt_exec_callback_QCalendarWidget_resizeEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QCalendarWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QCalendarWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_keyPressEvent
func miqt_exec_callback_QCalendarWidget_keyPressEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_PaintCell(painter *QPainter, rect *QRect, date *QDate) {

	C.QCalendarWidget_virtualbase_paintCell(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), date.cPointer())

}
func (this *QCalendarWidget) OnpaintCell(slot func(super func(painter *QPainter, rect *QRect, date *QDate), painter *QPainter, rect *QRect, date *QDate)) {
	ok := C.QCalendarWidget_override_virtual_paintCell(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_paintCell
func miqt_exec_callback_QCalendarWidget_paintCell(self *C.QCalendarWidget, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRect, date *QDate), painter *QPainter, rect *QRect, date *QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRect(rect)

	slotval3 := newQDate(date)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_PaintCell, slotval1, slotval2, slotval3)

}

func (this *QCalendarWidget) callVirtualBase_DevType() int {

	return (int)(C.QCalendarWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QCalendarWidget) OndevType(slot func(super func() int) int) {
	ok := C.QCalendarWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_devType
func miqt_exec_callback_QCalendarWidget_devType(self *C.QCalendarWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_SetVisible(visible bool) {

	C.QCalendarWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QCalendarWidget) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QCalendarWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_setVisible
func miqt_exec_callback_QCalendarWidget_setVisible(self *C.QCalendarWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QCalendarWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCalendarWidget) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QCalendarWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_heightForWidth
func miqt_exec_callback_QCalendarWidget_heightForWidth(self *C.QCalendarWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QCalendarWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QCalendarWidget) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QCalendarWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_hasHeightForWidth
func miqt_exec_callback_QCalendarWidget_hasHeightForWidth(self *C.QCalendarWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QCalendarWidget_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QCalendarWidget) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QCalendarWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_paintEngine
func miqt_exec_callback_QCalendarWidget_paintEngine(self *C.QCalendarWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QCalendarWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QCalendarWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_mouseReleaseEvent
func miqt_exec_callback_QCalendarWidget_mouseReleaseEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QCalendarWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QCalendarWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_mouseDoubleClickEvent
func miqt_exec_callback_QCalendarWidget_mouseDoubleClickEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QCalendarWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QCalendarWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_mouseMoveEvent
func miqt_exec_callback_QCalendarWidget_mouseMoveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QCalendarWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QCalendarWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_wheelEvent
func miqt_exec_callback_QCalendarWidget_wheelEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QCalendarWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QCalendarWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_keyReleaseEvent
func miqt_exec_callback_QCalendarWidget_keyReleaseEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QCalendarWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QCalendarWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_focusInEvent
func miqt_exec_callback_QCalendarWidget_focusInEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QCalendarWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QCalendarWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_focusOutEvent
func miqt_exec_callback_QCalendarWidget_focusOutEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QCalendarWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCalendarWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_enterEvent
func miqt_exec_callback_QCalendarWidget_enterEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QCalendarWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCalendarWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_leaveEvent
func miqt_exec_callback_QCalendarWidget_leaveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QCalendarWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QCalendarWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_paintEvent
func miqt_exec_callback_QCalendarWidget_paintEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QCalendarWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QCalendarWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_moveEvent
func miqt_exec_callback_QCalendarWidget_moveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QCalendarWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QCalendarWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_closeEvent
func miqt_exec_callback_QCalendarWidget_closeEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QCalendarWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QCalendarWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_contextMenuEvent
func miqt_exec_callback_QCalendarWidget_contextMenuEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QCalendarWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QCalendarWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_tabletEvent
func miqt_exec_callback_QCalendarWidget_tabletEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QCalendarWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QCalendarWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_actionEvent
func miqt_exec_callback_QCalendarWidget_actionEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QCalendarWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QCalendarWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_dragEnterEvent
func miqt_exec_callback_QCalendarWidget_dragEnterEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QCalendarWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QCalendarWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_dragMoveEvent
func miqt_exec_callback_QCalendarWidget_dragMoveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QCalendarWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QCalendarWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_dragLeaveEvent
func miqt_exec_callback_QCalendarWidget_dragLeaveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QCalendarWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QCalendarWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_dropEvent
func miqt_exec_callback_QCalendarWidget_dropEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QCalendarWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QCalendarWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_showEvent
func miqt_exec_callback_QCalendarWidget_showEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QCalendarWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QCalendarWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_hideEvent
func miqt_exec_callback_QCalendarWidget_hideEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QCalendarWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QCalendarWidget) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QCalendarWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_nativeEvent
func miqt_exec_callback_QCalendarWidget_nativeEvent(self *C.QCalendarWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QCalendarWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCalendarWidget) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QCalendarWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_changeEvent
func miqt_exec_callback_QCalendarWidget_changeEvent(self *C.QCalendarWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QCalendarWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCalendarWidget) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QCalendarWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_metric
func miqt_exec_callback_QCalendarWidget_metric(self *C.QCalendarWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QCalendarWidget_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QCalendarWidget) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QCalendarWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_initPainter
func miqt_exec_callback_QCalendarWidget_initPainter(self *C.QCalendarWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QCalendarWidget_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QCalendarWidget) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QCalendarWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_redirected
func miqt_exec_callback_QCalendarWidget_redirected(self *C.QCalendarWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QCalendarWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QCalendarWidget) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QCalendarWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_sharedPainter
func miqt_exec_callback_QCalendarWidget_sharedPainter(self *C.QCalendarWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QCalendarWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCalendarWidget) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QCalendarWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_inputMethodEvent
func miqt_exec_callback_QCalendarWidget_inputMethodEvent(self *C.QCalendarWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QCalendarWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCalendarWidget) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QCalendarWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_inputMethodQuery
func miqt_exec_callback_QCalendarWidget_inputMethodQuery(self *C.QCalendarWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QCalendarWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QCalendarWidget) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QCalendarWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_focusNextPrevChild
func miqt_exec_callback_QCalendarWidget_focusNextPrevChild(self *C.QCalendarWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QCalendarWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QCalendarWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_timerEvent
func miqt_exec_callback_QCalendarWidget_timerEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QCalendarWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QCalendarWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_childEvent
func miqt_exec_callback_QCalendarWidget_childEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QCalendarWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCalendarWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_customEvent
func miqt_exec_callback_QCalendarWidget_customEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QCalendarWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCalendarWidget) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCalendarWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_connectNotify
func miqt_exec_callback_QCalendarWidget_connectNotify(self *C.QCalendarWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QCalendarWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCalendarWidget) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCalendarWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCalendarWidget_disconnectNotify
func miqt_exec_callback_QCalendarWidget_disconnectNotify(self *C.QCalendarWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCalendarWidget) Delete() {
	C.QCalendarWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCalendarWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QCalendarWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
