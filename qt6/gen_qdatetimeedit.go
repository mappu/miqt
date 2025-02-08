package qt6

/*

#include "gen_qdatetimeedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDateTimeEdit__Section int

const (
	QDateTimeEdit__NoSection         QDateTimeEdit__Section = 0
	QDateTimeEdit__AmPmSection       QDateTimeEdit__Section = 1
	QDateTimeEdit__MSecSection       QDateTimeEdit__Section = 2
	QDateTimeEdit__SecondSection     QDateTimeEdit__Section = 4
	QDateTimeEdit__MinuteSection     QDateTimeEdit__Section = 8
	QDateTimeEdit__HourSection       QDateTimeEdit__Section = 16
	QDateTimeEdit__DaySection        QDateTimeEdit__Section = 256
	QDateTimeEdit__MonthSection      QDateTimeEdit__Section = 512
	QDateTimeEdit__YearSection       QDateTimeEdit__Section = 1024
	QDateTimeEdit__TimeSections_Mask QDateTimeEdit__Section = 31
	QDateTimeEdit__DateSections_Mask QDateTimeEdit__Section = 1792
)

type QDateTimeEdit struct {
	h *C.QDateTimeEdit
	*QAbstractSpinBox
}

func (this *QDateTimeEdit) cPointer() *C.QDateTimeEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDateTimeEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDateTimeEdit constructs the type using only CGO pointers.
func newQDateTimeEdit(h *C.QDateTimeEdit) *QDateTimeEdit {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSpinBox *C.QAbstractSpinBox = nil
	C.QDateTimeEdit_virtbase(h, &outptr_QAbstractSpinBox)

	return &QDateTimeEdit{h: h,
		QAbstractSpinBox: newQAbstractSpinBox(outptr_QAbstractSpinBox)}
}

// UnsafeNewQDateTimeEdit constructs the type using only unsafe pointers.
func UnsafeNewQDateTimeEdit(h unsafe.Pointer) *QDateTimeEdit {
	return newQDateTimeEdit((*C.QDateTimeEdit)(h))
}

// NewQDateTimeEdit constructs a new QDateTimeEdit object.
func NewQDateTimeEdit(parent *QWidget) *QDateTimeEdit {

	return newQDateTimeEdit(C.QDateTimeEdit_new(parent.cPointer()))
}

// NewQDateTimeEdit2 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit2() *QDateTimeEdit {

	return newQDateTimeEdit(C.QDateTimeEdit_new2())
}

// NewQDateTimeEdit3 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit3(dt *QDateTime) *QDateTimeEdit {

	return newQDateTimeEdit(C.QDateTimeEdit_new3(dt.cPointer()))
}

// NewQDateTimeEdit4 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit4(d QDate) *QDateTimeEdit {

	return newQDateTimeEdit(C.QDateTimeEdit_new4(d.cPointer()))
}

// NewQDateTimeEdit5 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit5(t QTime) *QDateTimeEdit {

	return newQDateTimeEdit(C.QDateTimeEdit_new5(t.cPointer()))
}

// NewQDateTimeEdit6 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit6(dt *QDateTime, parent *QWidget) *QDateTimeEdit {

	return newQDateTimeEdit(C.QDateTimeEdit_new6(dt.cPointer(), parent.cPointer()))
}

// NewQDateTimeEdit7 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit7(d QDate, parent *QWidget) *QDateTimeEdit {

	return newQDateTimeEdit(C.QDateTimeEdit_new7(d.cPointer(), parent.cPointer()))
}

// NewQDateTimeEdit8 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit8(t QTime, parent *QWidget) *QDateTimeEdit {

	return newQDateTimeEdit(C.QDateTimeEdit_new8(t.cPointer(), parent.cPointer()))
}

func (this *QDateTimeEdit) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDateTimeEdit_metaObject(this.h))
}

func (this *QDateTimeEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDateTimeEdit_metacast(this.h, param1_Cstring))
}

func QDateTimeEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDateTimeEdit_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTimeEdit) DateTime() *QDateTime {
	_goptr := newQDateTime(C.QDateTimeEdit_dateTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) Date() *QDate {
	_goptr := newQDate(C.QDateTimeEdit_date(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) Time() *QTime {
	_goptr := newQTime(C.QDateTimeEdit_time(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) Calendar() *QCalendar {
	_goptr := newQCalendar(C.QDateTimeEdit_calendar(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetCalendar(calendar QCalendar) {
	C.QDateTimeEdit_setCalendar(this.h, calendar.cPointer())
}

func (this *QDateTimeEdit) MinimumDateTime() *QDateTime {
	_goptr := newQDateTime(C.QDateTimeEdit_minimumDateTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) ClearMinimumDateTime() {
	C.QDateTimeEdit_clearMinimumDateTime(this.h)
}

func (this *QDateTimeEdit) SetMinimumDateTime(dt *QDateTime) {
	C.QDateTimeEdit_setMinimumDateTime(this.h, dt.cPointer())
}

func (this *QDateTimeEdit) MaximumDateTime() *QDateTime {
	_goptr := newQDateTime(C.QDateTimeEdit_maximumDateTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) ClearMaximumDateTime() {
	C.QDateTimeEdit_clearMaximumDateTime(this.h)
}

func (this *QDateTimeEdit) SetMaximumDateTime(dt *QDateTime) {
	C.QDateTimeEdit_setMaximumDateTime(this.h, dt.cPointer())
}

func (this *QDateTimeEdit) SetDateTimeRange(min *QDateTime, max *QDateTime) {
	C.QDateTimeEdit_setDateTimeRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QDateTimeEdit) MinimumDate() *QDate {
	_goptr := newQDate(C.QDateTimeEdit_minimumDate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetMinimumDate(min QDate) {
	C.QDateTimeEdit_setMinimumDate(this.h, min.cPointer())
}

func (this *QDateTimeEdit) ClearMinimumDate() {
	C.QDateTimeEdit_clearMinimumDate(this.h)
}

func (this *QDateTimeEdit) MaximumDate() *QDate {
	_goptr := newQDate(C.QDateTimeEdit_maximumDate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetMaximumDate(max QDate) {
	C.QDateTimeEdit_setMaximumDate(this.h, max.cPointer())
}

func (this *QDateTimeEdit) ClearMaximumDate() {
	C.QDateTimeEdit_clearMaximumDate(this.h)
}

func (this *QDateTimeEdit) SetDateRange(min QDate, max QDate) {
	C.QDateTimeEdit_setDateRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QDateTimeEdit) MinimumTime() *QTime {
	_goptr := newQTime(C.QDateTimeEdit_minimumTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetMinimumTime(min QTime) {
	C.QDateTimeEdit_setMinimumTime(this.h, min.cPointer())
}

func (this *QDateTimeEdit) ClearMinimumTime() {
	C.QDateTimeEdit_clearMinimumTime(this.h)
}

func (this *QDateTimeEdit) MaximumTime() *QTime {
	_goptr := newQTime(C.QDateTimeEdit_maximumTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetMaximumTime(max QTime) {
	C.QDateTimeEdit_setMaximumTime(this.h, max.cPointer())
}

func (this *QDateTimeEdit) ClearMaximumTime() {
	C.QDateTimeEdit_clearMaximumTime(this.h)
}

func (this *QDateTimeEdit) SetTimeRange(min QTime, max QTime) {
	C.QDateTimeEdit_setTimeRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QDateTimeEdit) DisplayedSections() QDateTimeEdit__Section {
	return (QDateTimeEdit__Section)(C.QDateTimeEdit_displayedSections(this.h))
}

func (this *QDateTimeEdit) CurrentSection() QDateTimeEdit__Section {
	return (QDateTimeEdit__Section)(C.QDateTimeEdit_currentSection(this.h))
}

func (this *QDateTimeEdit) SectionAt(index int) QDateTimeEdit__Section {
	return (QDateTimeEdit__Section)(C.QDateTimeEdit_sectionAt(this.h, (C.int)(index)))
}

func (this *QDateTimeEdit) SetCurrentSection(section QDateTimeEdit__Section) {
	C.QDateTimeEdit_setCurrentSection(this.h, (C.int)(section))
}

func (this *QDateTimeEdit) CurrentSectionIndex() int {
	return (int)(C.QDateTimeEdit_currentSectionIndex(this.h))
}

func (this *QDateTimeEdit) SetCurrentSectionIndex(index int) {
	C.QDateTimeEdit_setCurrentSectionIndex(this.h, (C.int)(index))
}

func (this *QDateTimeEdit) CalendarWidget() *QCalendarWidget {
	return newQCalendarWidget(C.QDateTimeEdit_calendarWidget(this.h))
}

func (this *QDateTimeEdit) SetCalendarWidget(calendarWidget *QCalendarWidget) {
	C.QDateTimeEdit_setCalendarWidget(this.h, calendarWidget.cPointer())
}

func (this *QDateTimeEdit) SectionCount() int {
	return (int)(C.QDateTimeEdit_sectionCount(this.h))
}

func (this *QDateTimeEdit) SetSelectedSection(section QDateTimeEdit__Section) {
	C.QDateTimeEdit_setSelectedSection(this.h, (C.int)(section))
}

func (this *QDateTimeEdit) SectionText(section QDateTimeEdit__Section) string {
	var _ms C.struct_miqt_string = C.QDateTimeEdit_sectionText(this.h, (C.int)(section))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTimeEdit) DisplayFormat() string {
	var _ms C.struct_miqt_string = C.QDateTimeEdit_displayFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTimeEdit) SetDisplayFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QDateTimeEdit_setDisplayFormat(this.h, format_ms)
}

func (this *QDateTimeEdit) CalendarPopup() bool {
	return (bool)(C.QDateTimeEdit_calendarPopup(this.h))
}

func (this *QDateTimeEdit) SetCalendarPopup(enable bool) {
	C.QDateTimeEdit_setCalendarPopup(this.h, (C.bool)(enable))
}

func (this *QDateTimeEdit) TimeSpec() TimeSpec {
	return (TimeSpec)(C.QDateTimeEdit_timeSpec(this.h))
}

func (this *QDateTimeEdit) SetTimeSpec(spec TimeSpec) {
	C.QDateTimeEdit_setTimeSpec(this.h, (C.int)(spec))
}

func (this *QDateTimeEdit) SizeHint() *QSize {
	_goptr := newQSize(C.QDateTimeEdit_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) Clear() {
	C.QDateTimeEdit_clear(this.h)
}

func (this *QDateTimeEdit) StepBy(steps int) {
	C.QDateTimeEdit_stepBy(this.h, (C.int)(steps))
}

func (this *QDateTimeEdit) Event(event *QEvent) bool {
	return (bool)(C.QDateTimeEdit_event(this.h, event.cPointer()))
}

func (this *QDateTimeEdit) DateTimeChanged(dateTime *QDateTime) {
	C.QDateTimeEdit_dateTimeChanged(this.h, dateTime.cPointer())
}
func (this *QDateTimeEdit) OnDateTimeChanged(slot func(dateTime *QDateTime)) {
	C.QDateTimeEdit_connect_dateTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeEdit_dateTimeChanged
func miqt_exec_callback_QDateTimeEdit_dateTimeChanged(cb C.intptr_t, dateTime *C.QDateTime) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dateTime *QDateTime))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDateTime(dateTime)

	gofunc(slotval1)
}

func (this *QDateTimeEdit) TimeChanged(time QTime) {
	C.QDateTimeEdit_timeChanged(this.h, time.cPointer())
}
func (this *QDateTimeEdit) OnTimeChanged(slot func(time QTime)) {
	C.QDateTimeEdit_connect_timeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeEdit_timeChanged
func miqt_exec_callback_QDateTimeEdit_timeChanged(cb C.intptr_t, time *C.QTime) {
	gofunc, ok := cgo.Handle(cb).Value().(func(time QTime))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	time_goptr := newQTime(time)
	time_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *time_goptr

	gofunc(slotval1)
}

func (this *QDateTimeEdit) DateChanged(date QDate) {
	C.QDateTimeEdit_dateChanged(this.h, date.cPointer())
}
func (this *QDateTimeEdit) OnDateChanged(slot func(date QDate)) {
	C.QDateTimeEdit_connect_dateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeEdit_dateChanged
func miqt_exec_callback_QDateTimeEdit_dateChanged(cb C.intptr_t, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(date QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	date_goptr := newQDate(date)
	date_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *date_goptr

	gofunc(slotval1)
}

func (this *QDateTimeEdit) SetDateTime(dateTime *QDateTime) {
	C.QDateTimeEdit_setDateTime(this.h, dateTime.cPointer())
}

func (this *QDateTimeEdit) SetDate(date QDate) {
	C.QDateTimeEdit_setDate(this.h, date.cPointer())
}

func (this *QDateTimeEdit) SetTime(time QTime) {
	C.QDateTimeEdit_setTime(this.h, time.cPointer())
}

func QDateTimeEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateTimeEdit_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDateTimeEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateTimeEdit_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// LineEdit can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) LineEdit() *QLineEdit {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQLineEdit(C.QDateTimeEdit_protectedbase_lineEdit(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLineEdit can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) SetLineEdit(edit *QLineEdit) {

	var _dynamic_cast_ok C.bool = false
	C.QDateTimeEdit_protectedbase_setLineEdit(&_dynamic_cast_ok, unsafe.Pointer(this.h), edit.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QDateTimeEdit_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QDateTimeEdit_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QDateTimeEdit_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDateTimeEdit_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDateTimeEdit_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QDateTimeEdit_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDateTimeEdit_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDateTimeEdit_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDateTimeEdit that was directly constructed.
func (this *QDateTimeEdit) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDateTimeEdit_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDateTimeEdit) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDateTimeEdit_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDateTimeEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDateTimeEdit_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_sizeHint
func miqt_exec_callback_QDateTimeEdit_sizeHint(self *C.QDateTimeEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDateTimeEdit) callVirtualBase_Clear() {

	C.QDateTimeEdit_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QDateTimeEdit) OnClear(slot func(super func())) {
	ok := C.QDateTimeEdit_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_clear
func miqt_exec_callback_QDateTimeEdit_clear(self *C.QDateTimeEdit, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_Clear)

}

func (this *QDateTimeEdit) callVirtualBase_StepBy(steps int) {

	C.QDateTimeEdit_virtualbase_stepBy(unsafe.Pointer(this.h), (C.int)(steps))

}
func (this *QDateTimeEdit) OnStepBy(slot func(super func(steps int), steps int)) {
	ok := C.QDateTimeEdit_override_virtual_stepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_stepBy
func miqt_exec_callback_QDateTimeEdit_stepBy(self *C.QDateTimeEdit, cb C.intptr_t, steps C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(steps int), steps int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(steps)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_StepBy, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDateTimeEdit_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDateTimeEdit) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDateTimeEdit_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_event
func miqt_exec_callback_QDateTimeEdit_event(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDateTimeEdit_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDateTimeEdit_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_keyPressEvent
func miqt_exec_callback_QDateTimeEdit_keyPressEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDateTimeEdit_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDateTimeEdit_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_wheelEvent
func miqt_exec_callback_QDateTimeEdit_wheelEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDateTimeEdit_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDateTimeEdit_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_focusInEvent
func miqt_exec_callback_QDateTimeEdit_focusInEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDateTimeEdit_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDateTimeEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDateTimeEdit_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_focusNextPrevChild
func miqt_exec_callback_QDateTimeEdit_focusNextPrevChild(self *C.QDateTimeEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QDateTimeEdit_virtualbase_validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QDateTimeEdit) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	ok := C.QDateTimeEdit_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_validate
func miqt_exec_callback_QDateTimeEdit_validate(self *C.QDateTimeEdit, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret
	slotval2 := (*int)(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	C.QDateTimeEdit_virtualbase_fixup(unsafe.Pointer(this.h), input_ms)

}
func (this *QDateTimeEdit) OnFixup(slot func(super func(input string), input string)) {
	ok := C.QDateTimeEdit_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_fixup
func miqt_exec_callback_QDateTimeEdit_fixup(self *C.QDateTimeEdit, cb C.intptr_t, input C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string), input string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_DateTimeFromText(text string) *QDateTime {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	_goptr := newQDateTime(C.QDateTimeEdit_virtualbase_dateTimeFromText(unsafe.Pointer(this.h), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDateTimeEdit) OnDateTimeFromText(slot func(super func(text string) *QDateTime, text string) *QDateTime) {
	ok := C.QDateTimeEdit_override_virtual_dateTimeFromText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_dateTimeFromText
func miqt_exec_callback_QDateTimeEdit_dateTimeFromText(self *C.QDateTimeEdit, cb C.intptr_t, text C.struct_miqt_string) *C.QDateTime {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string) *QDateTime, text string) *QDateTime)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_DateTimeFromText, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDateTimeEdit) callVirtualBase_TextFromDateTime(dt *QDateTime) string {

	var _ms C.struct_miqt_string = C.QDateTimeEdit_virtualbase_textFromDateTime(unsafe.Pointer(this.h), dt.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QDateTimeEdit) OnTextFromDateTime(slot func(super func(dt *QDateTime) string, dt *QDateTime) string) {
	ok := C.QDateTimeEdit_override_virtual_textFromDateTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_textFromDateTime
func miqt_exec_callback_QDateTimeEdit_textFromDateTime(self *C.QDateTimeEdit, cb C.intptr_t, dt *C.QDateTime) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dt *QDateTime) string, dt *QDateTime) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDateTime(dt)

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_TextFromDateTime, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QDateTimeEdit) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QDateTimeEdit_virtualbase_stepEnabled(unsafe.Pointer(this.h)))

}
func (this *QDateTimeEdit) OnStepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	ok := C.QDateTimeEdit_override_virtual_stepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_stepEnabled
func miqt_exec_callback_QDateTimeEdit_stepEnabled(self *C.QDateTimeEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_StepEnabled)

	return (C.int)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDateTimeEdit_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDateTimeEdit_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_mousePressEvent
func miqt_exec_callback_QDateTimeEdit_mousePressEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDateTimeEdit_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDateTimeEdit_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_paintEvent
func miqt_exec_callback_QDateTimeEdit_paintEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_InitStyleOption(option *QStyleOptionSpinBox) {

	C.QDateTimeEdit_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QDateTimeEdit) OnInitStyleOption(slot func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox)) {
	ok := C.QDateTimeEdit_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_initStyleOption
func miqt_exec_callback_QDateTimeEdit_initStyleOption(self *C.QDateTimeEdit, cb C.intptr_t, option *C.QStyleOptionSpinBox) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionSpinBox(option)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDateTimeEdit_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDateTimeEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDateTimeEdit_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_minimumSizeHint
func miqt_exec_callback_QDateTimeEdit_minimumSizeHint(self *C.QDateTimeEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDateTimeEdit) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDateTimeEdit_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDateTimeEdit) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDateTimeEdit_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_inputMethodQuery
func miqt_exec_callback_QDateTimeEdit_inputMethodQuery(self *C.QDateTimeEdit, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDateTimeEdit) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QDateTimeEdit_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QDateTimeEdit_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_resizeEvent
func miqt_exec_callback_QDateTimeEdit_resizeEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDateTimeEdit_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDateTimeEdit_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_keyReleaseEvent
func miqt_exec_callback_QDateTimeEdit_keyReleaseEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDateTimeEdit_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDateTimeEdit_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_focusOutEvent
func miqt_exec_callback_QDateTimeEdit_focusOutEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDateTimeEdit_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDateTimeEdit_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_contextMenuEvent
func miqt_exec_callback_QDateTimeEdit_contextMenuEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QDateTimeEdit_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDateTimeEdit_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_changeEvent
func miqt_exec_callback_QDateTimeEdit_changeEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDateTimeEdit_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDateTimeEdit_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_closeEvent
func miqt_exec_callback_QDateTimeEdit_closeEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDateTimeEdit_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDateTimeEdit_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_hideEvent
func miqt_exec_callback_QDateTimeEdit_hideEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDateTimeEdit_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDateTimeEdit_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_mouseReleaseEvent
func miqt_exec_callback_QDateTimeEdit_mouseReleaseEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDateTimeEdit_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDateTimeEdit_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_mouseMoveEvent
func miqt_exec_callback_QDateTimeEdit_mouseMoveEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDateTimeEdit_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDateTimeEdit_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_timerEvent
func miqt_exec_callback_QDateTimeEdit_timerEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDateTimeEdit_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDateTimeEdit_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_showEvent
func miqt_exec_callback_QDateTimeEdit_showEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_DevType() int {

	return (int)(C.QDateTimeEdit_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDateTimeEdit) OnDevType(slot func(super func() int) int) {
	ok := C.QDateTimeEdit_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_devType
func miqt_exec_callback_QDateTimeEdit_devType(self *C.QDateTimeEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_SetVisible(visible bool) {

	C.QDateTimeEdit_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDateTimeEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDateTimeEdit_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_setVisible
func miqt_exec_callback_QDateTimeEdit_setVisible(self *C.QDateTimeEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDateTimeEdit_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDateTimeEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDateTimeEdit_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_heightForWidth
func miqt_exec_callback_QDateTimeEdit_heightForWidth(self *C.QDateTimeEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDateTimeEdit_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDateTimeEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDateTimeEdit_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_hasHeightForWidth
func miqt_exec_callback_QDateTimeEdit_hasHeightForWidth(self *C.QDateTimeEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDateTimeEdit_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QDateTimeEdit) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDateTimeEdit_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_paintEngine
func miqt_exec_callback_QDateTimeEdit_paintEngine(self *C.QDateTimeEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDateTimeEdit) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDateTimeEdit_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDateTimeEdit_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_mouseDoubleClickEvent
func miqt_exec_callback_QDateTimeEdit_mouseDoubleClickEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QDateTimeEdit_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QDateTimeEdit_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_enterEvent
func miqt_exec_callback_QDateTimeEdit_enterEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDateTimeEdit_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDateTimeEdit_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_leaveEvent
func miqt_exec_callback_QDateTimeEdit_leaveEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDateTimeEdit_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDateTimeEdit_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_moveEvent
func miqt_exec_callback_QDateTimeEdit_moveEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDateTimeEdit_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDateTimeEdit_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_tabletEvent
func miqt_exec_callback_QDateTimeEdit_tabletEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDateTimeEdit_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDateTimeEdit_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_actionEvent
func miqt_exec_callback_QDateTimeEdit_actionEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDateTimeEdit_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDateTimeEdit_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_dragEnterEvent
func miqt_exec_callback_QDateTimeEdit_dragEnterEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDateTimeEdit_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDateTimeEdit_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_dragMoveEvent
func miqt_exec_callback_QDateTimeEdit_dragMoveEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDateTimeEdit_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDateTimeEdit_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_dragLeaveEvent
func miqt_exec_callback_QDateTimeEdit_dragLeaveEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDateTimeEdit_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDateTimeEdit_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_dropEvent
func miqt_exec_callback_QDateTimeEdit_dropEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDateTimeEdit_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDateTimeEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDateTimeEdit_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_nativeEvent
func miqt_exec_callback_QDateTimeEdit_nativeEvent(self *C.QDateTimeEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDateTimeEdit_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDateTimeEdit) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDateTimeEdit_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_metric
func miqt_exec_callback_QDateTimeEdit_metric(self *C.QDateTimeEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_InitPainter(painter *QPainter) {

	C.QDateTimeEdit_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDateTimeEdit) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDateTimeEdit_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_initPainter
func miqt_exec_callback_QDateTimeEdit_initPainter(self *C.QDateTimeEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDateTimeEdit_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDateTimeEdit) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDateTimeEdit_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_redirected
func miqt_exec_callback_QDateTimeEdit_redirected(self *C.QDateTimeEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDateTimeEdit) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QDateTimeEdit_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDateTimeEdit) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDateTimeEdit_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_sharedPainter
func miqt_exec_callback_QDateTimeEdit_sharedPainter(self *C.QDateTimeEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDateTimeEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDateTimeEdit_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDateTimeEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDateTimeEdit_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_inputMethodEvent
func miqt_exec_callback_QDateTimeEdit_inputMethodEvent(self *C.QDateTimeEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDateTimeEdit_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDateTimeEdit) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDateTimeEdit_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_eventFilter
func miqt_exec_callback_QDateTimeEdit_eventFilter(self *C.QDateTimeEdit, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDateTimeEdit{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDateTimeEdit) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDateTimeEdit_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDateTimeEdit_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_childEvent
func miqt_exec_callback_QDateTimeEdit_childEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDateTimeEdit_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateTimeEdit) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDateTimeEdit_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_customEvent
func miqt_exec_callback_QDateTimeEdit_customEvent(self *C.QDateTimeEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDateTimeEdit_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDateTimeEdit) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDateTimeEdit_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_connectNotify
func miqt_exec_callback_QDateTimeEdit_connectNotify(self *C.QDateTimeEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDateTimeEdit) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDateTimeEdit_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDateTimeEdit) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDateTimeEdit_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateTimeEdit_disconnectNotify
func miqt_exec_callback_QDateTimeEdit_disconnectNotify(self *C.QDateTimeEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDateTimeEdit{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDateTimeEdit) Delete() {
	C.QDateTimeEdit_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDateTimeEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QDateTimeEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTimeEdit struct {
	h *C.QTimeEdit
	*QDateTimeEdit
}

func (this *QTimeEdit) cPointer() *C.QTimeEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTimeEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTimeEdit constructs the type using only CGO pointers.
func newQTimeEdit(h *C.QTimeEdit) *QTimeEdit {
	if h == nil {
		return nil
	}
	var outptr_QDateTimeEdit *C.QDateTimeEdit = nil
	C.QTimeEdit_virtbase(h, &outptr_QDateTimeEdit)

	return &QTimeEdit{h: h,
		QDateTimeEdit: newQDateTimeEdit(outptr_QDateTimeEdit)}
}

// UnsafeNewQTimeEdit constructs the type using only unsafe pointers.
func UnsafeNewQTimeEdit(h unsafe.Pointer) *QTimeEdit {
	return newQTimeEdit((*C.QTimeEdit)(h))
}

// NewQTimeEdit constructs a new QTimeEdit object.
func NewQTimeEdit(parent *QWidget) *QTimeEdit {

	return newQTimeEdit(C.QTimeEdit_new(parent.cPointer()))
}

// NewQTimeEdit2 constructs a new QTimeEdit object.
func NewQTimeEdit2() *QTimeEdit {

	return newQTimeEdit(C.QTimeEdit_new2())
}

// NewQTimeEdit3 constructs a new QTimeEdit object.
func NewQTimeEdit3(time QTime) *QTimeEdit {

	return newQTimeEdit(C.QTimeEdit_new3(time.cPointer()))
}

// NewQTimeEdit4 constructs a new QTimeEdit object.
func NewQTimeEdit4(time QTime, parent *QWidget) *QTimeEdit {

	return newQTimeEdit(C.QTimeEdit_new4(time.cPointer(), parent.cPointer()))
}

func (this *QTimeEdit) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTimeEdit_metaObject(this.h))
}

func (this *QTimeEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTimeEdit_metacast(this.h, param1_Cstring))
}

func QTimeEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTimeEdit_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeEdit) UserTimeChanged(time QTime) {
	C.QTimeEdit_userTimeChanged(this.h, time.cPointer())
}
func (this *QTimeEdit) OnUserTimeChanged(slot func(time QTime)) {
	C.QTimeEdit_connect_userTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeEdit_userTimeChanged
func miqt_exec_callback_QTimeEdit_userTimeChanged(cb C.intptr_t, time *C.QTime) {
	gofunc, ok := cgo.Handle(cb).Value().(func(time QTime))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	time_goptr := newQTime(time)
	time_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *time_goptr

	gofunc(slotval1)
}

func QTimeEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeEdit_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeEdit_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// LineEdit can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) LineEdit() *QLineEdit {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQLineEdit(C.QTimeEdit_protectedbase_lineEdit(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLineEdit can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) SetLineEdit(edit *QLineEdit) {

	var _dynamic_cast_ok C.bool = false
	C.QTimeEdit_protectedbase_setLineEdit(&_dynamic_cast_ok, unsafe.Pointer(this.h), edit.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QTimeEdit_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QTimeEdit_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QTimeEdit_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTimeEdit_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTimeEdit_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTimeEdit_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTimeEdit_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTimeEdit_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTimeEdit that was directly constructed.
func (this *QTimeEdit) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTimeEdit_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTimeEdit) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTimeEdit_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTimeEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTimeEdit_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_sizeHint
func miqt_exec_callback_QTimeEdit_sizeHint(self *C.QTimeEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTimeEdit) callVirtualBase_Clear() {

	C.QTimeEdit_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QTimeEdit) OnClear(slot func(super func())) {
	ok := C.QTimeEdit_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_clear
func miqt_exec_callback_QTimeEdit_clear(self *C.QTimeEdit, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTimeEdit{h: self}).callVirtualBase_Clear)

}

func (this *QTimeEdit) callVirtualBase_StepBy(steps int) {

	C.QTimeEdit_virtualbase_stepBy(unsafe.Pointer(this.h), (C.int)(steps))

}
func (this *QTimeEdit) OnStepBy(slot func(super func(steps int), steps int)) {
	ok := C.QTimeEdit_override_virtual_stepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_stepBy
func miqt_exec_callback_QTimeEdit_stepBy(self *C.QTimeEdit, cb C.intptr_t, steps C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(steps int), steps int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(steps)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_StepBy, slotval1)

}

func (this *QTimeEdit) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTimeEdit_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTimeEdit) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTimeEdit_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_event
func miqt_exec_callback_QTimeEdit_event(self *C.QTimeEdit, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QTimeEdit_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTimeEdit_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_keyPressEvent
func miqt_exec_callback_QTimeEdit_keyPressEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QTimeEdit_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QTimeEdit_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_wheelEvent
func miqt_exec_callback_QTimeEdit_wheelEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTimeEdit_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTimeEdit_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_focusInEvent
func miqt_exec_callback_QTimeEdit_focusInEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTimeEdit_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTimeEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTimeEdit_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_focusNextPrevChild
func miqt_exec_callback_QTimeEdit_focusNextPrevChild(self *C.QTimeEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QTimeEdit_virtualbase_validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QTimeEdit) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	ok := C.QTimeEdit_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_validate
func miqt_exec_callback_QTimeEdit_validate(self *C.QTimeEdit, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret
	slotval2 := (*int)(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	C.QTimeEdit_virtualbase_fixup(unsafe.Pointer(this.h), input_ms)

}
func (this *QTimeEdit) OnFixup(slot func(super func(input string), input string)) {
	ok := C.QTimeEdit_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_fixup
func miqt_exec_callback_QTimeEdit_fixup(self *C.QTimeEdit, cb C.intptr_t, input C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string), input string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret

	gofunc((&QTimeEdit{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QTimeEdit) callVirtualBase_DateTimeFromText(text string) *QDateTime {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	_goptr := newQDateTime(C.QTimeEdit_virtualbase_dateTimeFromText(unsafe.Pointer(this.h), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTimeEdit) OnDateTimeFromText(slot func(super func(text string) *QDateTime, text string) *QDateTime) {
	ok := C.QTimeEdit_override_virtual_dateTimeFromText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_dateTimeFromText
func miqt_exec_callback_QTimeEdit_dateTimeFromText(self *C.QTimeEdit, cb C.intptr_t, text C.struct_miqt_string) *C.QDateTime {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string) *QDateTime, text string) *QDateTime)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_DateTimeFromText, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTimeEdit) callVirtualBase_TextFromDateTime(dt *QDateTime) string {

	var _ms C.struct_miqt_string = C.QTimeEdit_virtualbase_textFromDateTime(unsafe.Pointer(this.h), dt.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTimeEdit) OnTextFromDateTime(slot func(super func(dt *QDateTime) string, dt *QDateTime) string) {
	ok := C.QTimeEdit_override_virtual_textFromDateTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_textFromDateTime
func miqt_exec_callback_QTimeEdit_textFromDateTime(self *C.QTimeEdit, cb C.intptr_t, dt *C.QDateTime) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dt *QDateTime) string, dt *QDateTime) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDateTime(dt)

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_TextFromDateTime, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QTimeEdit) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QTimeEdit_virtualbase_stepEnabled(unsafe.Pointer(this.h)))

}
func (this *QTimeEdit) OnStepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	ok := C.QTimeEdit_override_virtual_stepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_stepEnabled
func miqt_exec_callback_QTimeEdit_stepEnabled(self *C.QTimeEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_StepEnabled)

	return (C.int)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QTimeEdit_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTimeEdit_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_mousePressEvent
func miqt_exec_callback_QTimeEdit_mousePressEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QTimeEdit_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QTimeEdit_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_paintEvent
func miqt_exec_callback_QTimeEdit_paintEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_InitStyleOption(option *QStyleOptionSpinBox) {

	C.QTimeEdit_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QTimeEdit) OnInitStyleOption(slot func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox)) {
	ok := C.QTimeEdit_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_initStyleOption
func miqt_exec_callback_QTimeEdit_initStyleOption(self *C.QTimeEdit, cb C.intptr_t, option *C.QStyleOptionSpinBox) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionSpinBox(option)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QTimeEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTimeEdit_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTimeEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTimeEdit_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_minimumSizeHint
func miqt_exec_callback_QTimeEdit_minimumSizeHint(self *C.QTimeEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTimeEdit) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTimeEdit_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTimeEdit) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QTimeEdit_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_inputMethodQuery
func miqt_exec_callback_QTimeEdit_inputMethodQuery(self *C.QTimeEdit, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTimeEdit) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QTimeEdit_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QTimeEdit_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_resizeEvent
func miqt_exec_callback_QTimeEdit_resizeEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTimeEdit_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTimeEdit_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_keyReleaseEvent
func miqt_exec_callback_QTimeEdit_keyReleaseEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTimeEdit_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTimeEdit_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_focusOutEvent
func miqt_exec_callback_QTimeEdit_focusOutEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QTimeEdit_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QTimeEdit_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_contextMenuEvent
func miqt_exec_callback_QTimeEdit_contextMenuEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QTimeEdit_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTimeEdit_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_changeEvent
func miqt_exec_callback_QTimeEdit_changeEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTimeEdit_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTimeEdit_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_closeEvent
func miqt_exec_callback_QTimeEdit_closeEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTimeEdit_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTimeEdit_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_hideEvent
func miqt_exec_callback_QTimeEdit_hideEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QTimeEdit_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTimeEdit_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_mouseReleaseEvent
func miqt_exec_callback_QTimeEdit_mouseReleaseEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QTimeEdit_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTimeEdit_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_mouseMoveEvent
func miqt_exec_callback_QTimeEdit_mouseMoveEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTimeEdit_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTimeEdit_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_timerEvent
func miqt_exec_callback_QTimeEdit_timerEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QTimeEdit_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QTimeEdit_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_showEvent
func miqt_exec_callback_QTimeEdit_showEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_DevType() int {

	return (int)(C.QTimeEdit_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTimeEdit) OnDevType(slot func(super func() int) int) {
	ok := C.QTimeEdit_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_devType
func miqt_exec_callback_QTimeEdit_devType(self *C.QTimeEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_SetVisible(visible bool) {

	C.QTimeEdit_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTimeEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTimeEdit_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_setVisible
func miqt_exec_callback_QTimeEdit_setVisible(self *C.QTimeEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTimeEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTimeEdit_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTimeEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTimeEdit_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_heightForWidth
func miqt_exec_callback_QTimeEdit_heightForWidth(self *C.QTimeEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTimeEdit_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTimeEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTimeEdit_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_hasHeightForWidth
func miqt_exec_callback_QTimeEdit_hasHeightForWidth(self *C.QTimeEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTimeEdit_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QTimeEdit) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTimeEdit_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_paintEngine
func miqt_exec_callback_QTimeEdit_paintEngine(self *C.QTimeEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTimeEdit) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTimeEdit_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTimeEdit_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_mouseDoubleClickEvent
func miqt_exec_callback_QTimeEdit_mouseDoubleClickEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QTimeEdit_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QTimeEdit_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_enterEvent
func miqt_exec_callback_QTimeEdit_enterEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTimeEdit_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTimeEdit_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_leaveEvent
func miqt_exec_callback_QTimeEdit_leaveEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTimeEdit_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTimeEdit_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_moveEvent
func miqt_exec_callback_QTimeEdit_moveEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTimeEdit_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTimeEdit_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_tabletEvent
func miqt_exec_callback_QTimeEdit_tabletEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTimeEdit_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTimeEdit_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_actionEvent
func miqt_exec_callback_QTimeEdit_actionEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QTimeEdit_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QTimeEdit_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_dragEnterEvent
func miqt_exec_callback_QTimeEdit_dragEnterEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTimeEdit_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QTimeEdit_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_dragMoveEvent
func miqt_exec_callback_QTimeEdit_dragMoveEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTimeEdit_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QTimeEdit_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_dragLeaveEvent
func miqt_exec_callback_QTimeEdit_dragLeaveEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTimeEdit_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QTimeEdit_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_dropEvent
func miqt_exec_callback_QTimeEdit_dropEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTimeEdit_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QTimeEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QTimeEdit_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_nativeEvent
func miqt_exec_callback_QTimeEdit_nativeEvent(self *C.QTimeEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTimeEdit_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTimeEdit) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTimeEdit_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_metric
func miqt_exec_callback_QTimeEdit_metric(self *C.QTimeEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_InitPainter(painter *QPainter) {

	C.QTimeEdit_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTimeEdit) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTimeEdit_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_initPainter
func miqt_exec_callback_QTimeEdit_initPainter(self *C.QTimeEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTimeEdit) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTimeEdit_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTimeEdit) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTimeEdit_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_redirected
func miqt_exec_callback_QTimeEdit_redirected(self *C.QTimeEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTimeEdit) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QTimeEdit_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTimeEdit) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTimeEdit_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_sharedPainter
func miqt_exec_callback_QTimeEdit_sharedPainter(self *C.QTimeEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTimeEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTimeEdit_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTimeEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QTimeEdit_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_inputMethodEvent
func miqt_exec_callback_QTimeEdit_inputMethodEvent(self *C.QTimeEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTimeEdit_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTimeEdit) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTimeEdit_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_eventFilter
func miqt_exec_callback_QTimeEdit_eventFilter(self *C.QTimeEdit, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTimeEdit{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTimeEdit) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTimeEdit_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTimeEdit_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_childEvent
func miqt_exec_callback_QTimeEdit_childEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTimeEdit_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimeEdit) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTimeEdit_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_customEvent
func miqt_exec_callback_QTimeEdit_customEvent(self *C.QTimeEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTimeEdit) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTimeEdit_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimeEdit) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTimeEdit_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_connectNotify
func miqt_exec_callback_QTimeEdit_connectNotify(self *C.QTimeEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTimeEdit) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTimeEdit_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimeEdit) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTimeEdit_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimeEdit_disconnectNotify
func miqt_exec_callback_QTimeEdit_disconnectNotify(self *C.QTimeEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTimeEdit{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTimeEdit) Delete() {
	C.QTimeEdit_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimeEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimeEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDateEdit struct {
	h *C.QDateEdit
	*QDateTimeEdit
}

func (this *QDateEdit) cPointer() *C.QDateEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDateEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDateEdit constructs the type using only CGO pointers.
func newQDateEdit(h *C.QDateEdit) *QDateEdit {
	if h == nil {
		return nil
	}
	var outptr_QDateTimeEdit *C.QDateTimeEdit = nil
	C.QDateEdit_virtbase(h, &outptr_QDateTimeEdit)

	return &QDateEdit{h: h,
		QDateTimeEdit: newQDateTimeEdit(outptr_QDateTimeEdit)}
}

// UnsafeNewQDateEdit constructs the type using only unsafe pointers.
func UnsafeNewQDateEdit(h unsafe.Pointer) *QDateEdit {
	return newQDateEdit((*C.QDateEdit)(h))
}

// NewQDateEdit constructs a new QDateEdit object.
func NewQDateEdit(parent *QWidget) *QDateEdit {

	return newQDateEdit(C.QDateEdit_new(parent.cPointer()))
}

// NewQDateEdit2 constructs a new QDateEdit object.
func NewQDateEdit2() *QDateEdit {

	return newQDateEdit(C.QDateEdit_new2())
}

// NewQDateEdit3 constructs a new QDateEdit object.
func NewQDateEdit3(date QDate) *QDateEdit {

	return newQDateEdit(C.QDateEdit_new3(date.cPointer()))
}

// NewQDateEdit4 constructs a new QDateEdit object.
func NewQDateEdit4(date QDate, parent *QWidget) *QDateEdit {

	return newQDateEdit(C.QDateEdit_new4(date.cPointer(), parent.cPointer()))
}

func (this *QDateEdit) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDateEdit_metaObject(this.h))
}

func (this *QDateEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDateEdit_metacast(this.h, param1_Cstring))
}

func QDateEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDateEdit_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateEdit) UserDateChanged(date QDate) {
	C.QDateEdit_userDateChanged(this.h, date.cPointer())
}
func (this *QDateEdit) OnUserDateChanged(slot func(date QDate)) {
	C.QDateEdit_connect_userDateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateEdit_userDateChanged
func miqt_exec_callback_QDateEdit_userDateChanged(cb C.intptr_t, date *C.QDate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(date QDate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	date_goptr := newQDate(date)
	date_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *date_goptr

	gofunc(slotval1)
}

func QDateEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateEdit_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDateEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateEdit_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// LineEdit can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) LineEdit() *QLineEdit {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQLineEdit(C.QDateEdit_protectedbase_lineEdit(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLineEdit can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) SetLineEdit(edit *QLineEdit) {

	var _dynamic_cast_ok C.bool = false
	C.QDateEdit_protectedbase_setLineEdit(&_dynamic_cast_ok, unsafe.Pointer(this.h), edit.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QDateEdit_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QDateEdit_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QDateEdit_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDateEdit_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDateEdit_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QDateEdit_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDateEdit_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDateEdit_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDateEdit that was directly constructed.
func (this *QDateEdit) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDateEdit_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDateEdit) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDateEdit_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDateEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDateEdit_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_sizeHint
func miqt_exec_callback_QDateEdit_sizeHint(self *C.QDateEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDateEdit) callVirtualBase_Clear() {

	C.QDateEdit_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QDateEdit) OnClear(slot func(super func())) {
	ok := C.QDateEdit_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_clear
func miqt_exec_callback_QDateEdit_clear(self *C.QDateEdit, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDateEdit{h: self}).callVirtualBase_Clear)

}

func (this *QDateEdit) callVirtualBase_StepBy(steps int) {

	C.QDateEdit_virtualbase_stepBy(unsafe.Pointer(this.h), (C.int)(steps))

}
func (this *QDateEdit) OnStepBy(slot func(super func(steps int), steps int)) {
	ok := C.QDateEdit_override_virtual_stepBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_stepBy
func miqt_exec_callback_QDateEdit_stepBy(self *C.QDateEdit, cb C.intptr_t, steps C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(steps int), steps int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(steps)

	gofunc((&QDateEdit{h: self}).callVirtualBase_StepBy, slotval1)

}

func (this *QDateEdit) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDateEdit_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDateEdit) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDateEdit_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_event
func miqt_exec_callback_QDateEdit_event(self *C.QDateEdit, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDateEdit_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDateEdit_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_keyPressEvent
func miqt_exec_callback_QDateEdit_keyPressEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDateEdit_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDateEdit_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_wheelEvent
func miqt_exec_callback_QDateEdit_wheelEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDateEdit_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDateEdit_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_focusInEvent
func miqt_exec_callback_QDateEdit_focusInEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDateEdit_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDateEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDateEdit_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_focusNextPrevChild
func miqt_exec_callback_QDateEdit_focusNextPrevChild(self *C.QDateEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QDateEdit_virtualbase_validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QDateEdit) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	ok := C.QDateEdit_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_validate
func miqt_exec_callback_QDateEdit_validate(self *C.QDateEdit, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret
	slotval2 := (*int)(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	C.QDateEdit_virtualbase_fixup(unsafe.Pointer(this.h), input_ms)

}
func (this *QDateEdit) OnFixup(slot func(super func(input string), input string)) {
	ok := C.QDateEdit_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_fixup
func miqt_exec_callback_QDateEdit_fixup(self *C.QDateEdit, cb C.intptr_t, input C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string), input string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret

	gofunc((&QDateEdit{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QDateEdit) callVirtualBase_DateTimeFromText(text string) *QDateTime {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	_goptr := newQDateTime(C.QDateEdit_virtualbase_dateTimeFromText(unsafe.Pointer(this.h), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDateEdit) OnDateTimeFromText(slot func(super func(text string) *QDateTime, text string) *QDateTime) {
	ok := C.QDateEdit_override_virtual_dateTimeFromText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_dateTimeFromText
func miqt_exec_callback_QDateEdit_dateTimeFromText(self *C.QDateEdit, cb C.intptr_t, text C.struct_miqt_string) *C.QDateTime {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string) *QDateTime, text string) *QDateTime)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_DateTimeFromText, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDateEdit) callVirtualBase_TextFromDateTime(dt *QDateTime) string {

	var _ms C.struct_miqt_string = C.QDateEdit_virtualbase_textFromDateTime(unsafe.Pointer(this.h), dt.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QDateEdit) OnTextFromDateTime(slot func(super func(dt *QDateTime) string, dt *QDateTime) string) {
	ok := C.QDateEdit_override_virtual_textFromDateTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_textFromDateTime
func miqt_exec_callback_QDateEdit_textFromDateTime(self *C.QDateEdit, cb C.intptr_t, dt *C.QDateTime) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dt *QDateTime) string, dt *QDateTime) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDateTime(dt)

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_TextFromDateTime, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QDateEdit) callVirtualBase_StepEnabled() QAbstractSpinBox__StepEnabledFlag {

	return (QAbstractSpinBox__StepEnabledFlag)(C.QDateEdit_virtualbase_stepEnabled(unsafe.Pointer(this.h)))

}
func (this *QDateEdit) OnStepEnabled(slot func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag) {
	ok := C.QDateEdit_override_virtual_stepEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_stepEnabled
func miqt_exec_callback_QDateEdit_stepEnabled(self *C.QDateEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSpinBox__StepEnabledFlag) QAbstractSpinBox__StepEnabledFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_StepEnabled)

	return (C.int)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDateEdit_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDateEdit_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_mousePressEvent
func miqt_exec_callback_QDateEdit_mousePressEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDateEdit_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDateEdit_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_paintEvent
func miqt_exec_callback_QDateEdit_paintEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_InitStyleOption(option *QStyleOptionSpinBox) {

	C.QDateEdit_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QDateEdit) OnInitStyleOption(slot func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox)) {
	ok := C.QDateEdit_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_initStyleOption
func miqt_exec_callback_QDateEdit_initStyleOption(self *C.QDateEdit, cb C.intptr_t, option *C.QStyleOptionSpinBox) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSpinBox), option *QStyleOptionSpinBox))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionSpinBox(option)

	gofunc((&QDateEdit{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QDateEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDateEdit_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDateEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDateEdit_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_minimumSizeHint
func miqt_exec_callback_QDateEdit_minimumSizeHint(self *C.QDateEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDateEdit) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDateEdit_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDateEdit) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDateEdit_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_inputMethodQuery
func miqt_exec_callback_QDateEdit_inputMethodQuery(self *C.QDateEdit, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDateEdit) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QDateEdit_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QDateEdit_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_resizeEvent
func miqt_exec_callback_QDateEdit_resizeEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDateEdit_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDateEdit_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_keyReleaseEvent
func miqt_exec_callback_QDateEdit_keyReleaseEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDateEdit_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDateEdit_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_focusOutEvent
func miqt_exec_callback_QDateEdit_focusOutEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDateEdit_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDateEdit_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_contextMenuEvent
func miqt_exec_callback_QDateEdit_contextMenuEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QDateEdit_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDateEdit_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_changeEvent
func miqt_exec_callback_QDateEdit_changeEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDateEdit_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDateEdit_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_closeEvent
func miqt_exec_callback_QDateEdit_closeEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDateEdit_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDateEdit_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_hideEvent
func miqt_exec_callback_QDateEdit_hideEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDateEdit_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDateEdit_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_mouseReleaseEvent
func miqt_exec_callback_QDateEdit_mouseReleaseEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDateEdit_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDateEdit_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_mouseMoveEvent
func miqt_exec_callback_QDateEdit_mouseMoveEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDateEdit_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDateEdit_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_timerEvent
func miqt_exec_callback_QDateEdit_timerEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDateEdit_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDateEdit_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_showEvent
func miqt_exec_callback_QDateEdit_showEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_DevType() int {

	return (int)(C.QDateEdit_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDateEdit) OnDevType(slot func(super func() int) int) {
	ok := C.QDateEdit_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_devType
func miqt_exec_callback_QDateEdit_devType(self *C.QDateEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_SetVisible(visible bool) {

	C.QDateEdit_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDateEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDateEdit_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_setVisible
func miqt_exec_callback_QDateEdit_setVisible(self *C.QDateEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDateEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDateEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDateEdit_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDateEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDateEdit_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_heightForWidth
func miqt_exec_callback_QDateEdit_heightForWidth(self *C.QDateEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDateEdit_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDateEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDateEdit_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_hasHeightForWidth
func miqt_exec_callback_QDateEdit_hasHeightForWidth(self *C.QDateEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDateEdit_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QDateEdit) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDateEdit_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_paintEngine
func miqt_exec_callback_QDateEdit_paintEngine(self *C.QDateEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDateEdit) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDateEdit_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDateEdit_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_mouseDoubleClickEvent
func miqt_exec_callback_QDateEdit_mouseDoubleClickEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QDateEdit_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QDateEdit_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_enterEvent
func miqt_exec_callback_QDateEdit_enterEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDateEdit_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDateEdit_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_leaveEvent
func miqt_exec_callback_QDateEdit_leaveEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDateEdit_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDateEdit_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_moveEvent
func miqt_exec_callback_QDateEdit_moveEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDateEdit_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDateEdit_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_tabletEvent
func miqt_exec_callback_QDateEdit_tabletEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDateEdit_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDateEdit_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_actionEvent
func miqt_exec_callback_QDateEdit_actionEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDateEdit_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDateEdit_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_dragEnterEvent
func miqt_exec_callback_QDateEdit_dragEnterEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDateEdit_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDateEdit_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_dragMoveEvent
func miqt_exec_callback_QDateEdit_dragMoveEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDateEdit_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDateEdit_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_dragLeaveEvent
func miqt_exec_callback_QDateEdit_dragLeaveEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDateEdit_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDateEdit_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_dropEvent
func miqt_exec_callback_QDateEdit_dropEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDateEdit_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDateEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDateEdit_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_nativeEvent
func miqt_exec_callback_QDateEdit_nativeEvent(self *C.QDateEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDateEdit_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDateEdit) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDateEdit_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_metric
func miqt_exec_callback_QDateEdit_metric(self *C.QDateEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_InitPainter(painter *QPainter) {

	C.QDateEdit_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDateEdit) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDateEdit_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_initPainter
func miqt_exec_callback_QDateEdit_initPainter(self *C.QDateEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDateEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDateEdit) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDateEdit_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDateEdit) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDateEdit_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_redirected
func miqt_exec_callback_QDateEdit_redirected(self *C.QDateEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDateEdit) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QDateEdit_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDateEdit) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDateEdit_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_sharedPainter
func miqt_exec_callback_QDateEdit_sharedPainter(self *C.QDateEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDateEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDateEdit_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDateEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDateEdit_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_inputMethodEvent
func miqt_exec_callback_QDateEdit_inputMethodEvent(self *C.QDateEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDateEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDateEdit_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDateEdit) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDateEdit_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_eventFilter
func miqt_exec_callback_QDateEdit_eventFilter(self *C.QDateEdit, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDateEdit{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDateEdit) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDateEdit_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDateEdit_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_childEvent
func miqt_exec_callback_QDateEdit_childEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDateEdit_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDateEdit) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDateEdit_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_customEvent
func miqt_exec_callback_QDateEdit_customEvent(self *C.QDateEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDateEdit{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDateEdit) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDateEdit_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDateEdit) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDateEdit_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_connectNotify
func miqt_exec_callback_QDateEdit_connectNotify(self *C.QDateEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDateEdit{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDateEdit) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDateEdit_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDateEdit) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDateEdit_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDateEdit_disconnectNotify
func miqt_exec_callback_QDateEdit_disconnectNotify(self *C.QDateEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDateEdit{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDateEdit) Delete() {
	C.QDateEdit_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDateEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QDateEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
