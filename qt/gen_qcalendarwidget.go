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
	h          *C.QCalendarWidget
	isSubclass bool
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
func newQCalendarWidget(h *C.QCalendarWidget, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QCalendarWidget {
	if h == nil {
		return nil
	}
	return &QCalendarWidget{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQCalendarWidget constructs the type using only unsafe pointers.
func UnsafeNewQCalendarWidget(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QCalendarWidget {
	if h == nil {
		return nil
	}

	return &QCalendarWidget{h: (*C.QCalendarWidget)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQCalendarWidget constructs a new QCalendarWidget object.
func NewQCalendarWidget(parent *QWidget) *QCalendarWidget {
	var outptr_QCalendarWidget *C.QCalendarWidget = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QCalendarWidget_new(parent.cPointer(), &outptr_QCalendarWidget, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQCalendarWidget(outptr_QCalendarWidget, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQCalendarWidget2 constructs a new QCalendarWidget object.
func NewQCalendarWidget2() *QCalendarWidget {
	var outptr_QCalendarWidget *C.QCalendarWidget = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QCalendarWidget_new2(&outptr_QCalendarWidget, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQCalendarWidget(outptr_QCalendarWidget, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
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

func QCalendarWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_TrUtf8(s_Cstring)
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

func (this *QCalendarWidget) SetMinimumDate(date *QDate) {
	C.QCalendarWidget_SetMinimumDate(this.h, date.cPointer())
}

func (this *QCalendarWidget) MaximumDate() *QDate {
	_ret := C.QCalendarWidget_MaximumDate(this.h)
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetMaximumDate(date *QDate) {
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
	_goptr := newQTextCharFormat(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetHeaderTextFormat(format *QTextCharFormat) {
	C.QCalendarWidget_SetHeaderTextFormat(this.h, format.cPointer())
}

func (this *QCalendarWidget) WeekdayTextFormat(dayOfWeek DayOfWeek) *QTextCharFormat {
	_ret := C.QCalendarWidget_WeekdayTextFormat(this.h, (C.int)(dayOfWeek))
	_goptr := newQTextCharFormat(_ret, nil)
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
		_mapval_goptr := newQTextCharFormat(_mapval_ret, nil)
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QCalendarWidget) DateTextFormatWithDate(date *QDate) *QTextCharFormat {
	_ret := C.QCalendarWidget_DateTextFormatWithDate(this.h, date.cPointer())
	_goptr := newQTextCharFormat(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCalendarWidget) SetDateTextFormat(date *QDate, format *QTextCharFormat) {
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

func (this *QCalendarWidget) Clicked(date *QDate) {
	C.QCalendarWidget_Clicked(this.h, date.cPointer())
}
func (this *QCalendarWidget) OnClicked(slot func(date *QDate)) {
	C.QCalendarWidget_connect_Clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_Clicked
func miqt_exec_callback_QCalendarWidget_Clicked(cb C.intptr_t, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(date *QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDate(unsafe.Pointer(date))

	gofunc(slotval1)
}

func (this *QCalendarWidget) Activated(date *QDate) {
	C.QCalendarWidget_Activated(this.h, date.cPointer())
}
func (this *QCalendarWidget) OnActivated(slot func(date *QDate)) {
	C.QCalendarWidget_connect_Activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_Activated
func miqt_exec_callback_QCalendarWidget_Activated(cb C.intptr_t, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(date *QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDate(unsafe.Pointer(date))

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

func QCalendarWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCalendarWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCalendarWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCalendarWidget) callVirtualBase_SizeHint() *QSize {

	_ret := C.QCalendarWidget_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCalendarWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_SizeHint
func miqt_exec_callback_QCalendarWidget_SizeHint(self *C.QCalendarWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QCalendarWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCalendarWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_MinimumSizeHint
func miqt_exec_callback_QCalendarWidget_MinimumSizeHint(self *C.QCalendarWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QCalendarWidget_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QCalendarWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_Event
func miqt_exec_callback_QCalendarWidget_Event(self *C.QCalendarWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QCalendarWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QCalendarWidget) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_EventFilter
func miqt_exec_callback_QCalendarWidget_EventFilter(self *C.QCalendarWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QCalendarWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_MousePressEvent
func miqt_exec_callback_QCalendarWidget_MousePressEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QCalendarWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_ResizeEvent
func miqt_exec_callback_QCalendarWidget_ResizeEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QCalendarWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_KeyPressEvent
func miqt_exec_callback_QCalendarWidget_KeyPressEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_PaintCell(painter *QPainter, rect *QRect, date *QDate) {

	C.QCalendarWidget_virtualbase_PaintCell(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), date.cPointer())

}
func (this *QCalendarWidget) OnPaintCell(slot func(super func(painter *QPainter, rect *QRect, date *QDate), painter *QPainter, rect *QRect, date *QDate)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_PaintCell(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_PaintCell
func miqt_exec_callback_QCalendarWidget_PaintCell(self *C.QCalendarWidget, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRect, date *QDate), painter *QPainter, rect *QRect, date *QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQRect(unsafe.Pointer(rect))
	slotval3 := UnsafeNewQDate(unsafe.Pointer(date))

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_PaintCell, slotval1, slotval2, slotval3)

}

func (this *QCalendarWidget) callVirtualBase_DevType() int {

	return (int)(C.QCalendarWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QCalendarWidget) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_DevType
func miqt_exec_callback_QCalendarWidget_DevType(self *C.QCalendarWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_SetVisible(visible bool) {

	C.QCalendarWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QCalendarWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_SetVisible
func miqt_exec_callback_QCalendarWidget_SetVisible(self *C.QCalendarWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QCalendarWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCalendarWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_HeightForWidth
func miqt_exec_callback_QCalendarWidget_HeightForWidth(self *C.QCalendarWidget, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QCalendarWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QCalendarWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_HasHeightForWidth
func miqt_exec_callback_QCalendarWidget_HasHeightForWidth(self *C.QCalendarWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QCalendarWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QCalendarWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QCalendarWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_PaintEngine
func miqt_exec_callback_QCalendarWidget_PaintEngine(self *C.QCalendarWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QCalendarWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_MouseReleaseEvent
func miqt_exec_callback_QCalendarWidget_MouseReleaseEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QCalendarWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_MouseDoubleClickEvent
func miqt_exec_callback_QCalendarWidget_MouseDoubleClickEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QCalendarWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_MouseMoveEvent
func miqt_exec_callback_QCalendarWidget_MouseMoveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QCalendarWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_WheelEvent
func miqt_exec_callback_QCalendarWidget_WheelEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QCalendarWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_KeyReleaseEvent
func miqt_exec_callback_QCalendarWidget_KeyReleaseEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QCalendarWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_FocusInEvent
func miqt_exec_callback_QCalendarWidget_FocusInEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QCalendarWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_FocusOutEvent
func miqt_exec_callback_QCalendarWidget_FocusOutEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QCalendarWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_EnterEvent
func miqt_exec_callback_QCalendarWidget_EnterEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QCalendarWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_LeaveEvent
func miqt_exec_callback_QCalendarWidget_LeaveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QCalendarWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_PaintEvent
func miqt_exec_callback_QCalendarWidget_PaintEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QCalendarWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_MoveEvent
func miqt_exec_callback_QCalendarWidget_MoveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QCalendarWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_CloseEvent
func miqt_exec_callback_QCalendarWidget_CloseEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QCalendarWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_ContextMenuEvent
func miqt_exec_callback_QCalendarWidget_ContextMenuEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QCalendarWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_TabletEvent
func miqt_exec_callback_QCalendarWidget_TabletEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QCalendarWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_ActionEvent
func miqt_exec_callback_QCalendarWidget_ActionEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QCalendarWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_DragEnterEvent
func miqt_exec_callback_QCalendarWidget_DragEnterEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QCalendarWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_DragMoveEvent
func miqt_exec_callback_QCalendarWidget_DragMoveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QCalendarWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_DragLeaveEvent
func miqt_exec_callback_QCalendarWidget_DragLeaveEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QCalendarWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_DropEvent
func miqt_exec_callback_QCalendarWidget_DropEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QCalendarWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_ShowEvent
func miqt_exec_callback_QCalendarWidget_ShowEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QCalendarWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCalendarWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_HideEvent
func miqt_exec_callback_QCalendarWidget_HideEvent(self *C.QCalendarWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QCalendarWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QCalendarWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_NativeEvent
func miqt_exec_callback_QCalendarWidget_NativeEvent(self *C.QCalendarWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	C.QCalendarWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCalendarWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_ChangeEvent
func miqt_exec_callback_QCalendarWidget_ChangeEvent(self *C.QCalendarWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QCalendarWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCalendarWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_Metric
func miqt_exec_callback_QCalendarWidget_Metric(self *C.QCalendarWidget, cb C.intptr_t, param1 C.int) C.int {
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

	C.QCalendarWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QCalendarWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_InitPainter
func miqt_exec_callback_QCalendarWidget_InitPainter(self *C.QCalendarWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QCalendarWidget_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QCalendarWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_Redirected
func miqt_exec_callback_QCalendarWidget_Redirected(self *C.QCalendarWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QCalendarWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QCalendarWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_SharedPainter
func miqt_exec_callback_QCalendarWidget_SharedPainter(self *C.QCalendarWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QCalendarWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QCalendarWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCalendarWidget) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_InputMethodEvent
func miqt_exec_callback_QCalendarWidget_InputMethodEvent(self *C.QCalendarWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QCalendarWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QCalendarWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QCalendarWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCalendarWidget) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_InputMethodQuery
func miqt_exec_callback_QCalendarWidget_InputMethodQuery(self *C.QCalendarWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QCalendarWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QCalendarWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCalendarWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarWidget_FocusNextPrevChild
func miqt_exec_callback_QCalendarWidget_FocusNextPrevChild(self *C.QCalendarWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QCalendarWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QCalendarWidget) Delete() {
	C.QCalendarWidget_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCalendarWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QCalendarWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
