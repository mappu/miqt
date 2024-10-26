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

func newQDateTimeEdit(h *C.QDateTimeEdit) *QDateTimeEdit {
	if h == nil {
		return nil
	}
	return &QDateTimeEdit{h: h, QAbstractSpinBox: UnsafeNewQAbstractSpinBox(unsafe.Pointer(h))}
}

func UnsafeNewQDateTimeEdit(h unsafe.Pointer) *QDateTimeEdit {
	return newQDateTimeEdit((*C.QDateTimeEdit)(h))
}

// NewQDateTimeEdit constructs a new QDateTimeEdit object.
func NewQDateTimeEdit(parent *QWidget) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new(parent.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit2 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit2() *QDateTimeEdit {
	ret := C.QDateTimeEdit_new2()
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit3 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit3(dt *QDateTime) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new3(dt.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit4 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit4(d QDate) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new4(d.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit5 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit5(t QTime) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new5(t.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit6 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit6(dt *QDateTime, parent *QWidget) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new6(dt.cPointer(), parent.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit7 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit7(d QDate, parent *QWidget) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new7(d.cPointer(), parent.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit8 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit8(t QTime, parent *QWidget) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new8(t.cPointer(), parent.cPointer())
	return newQDateTimeEdit(ret)
}

func (this *QDateTimeEdit) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDateTimeEdit_MetaObject(this.h)))
}

func (this *QDateTimeEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDateTimeEdit_Metacast(this.h, param1_Cstring))
}

func QDateTimeEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDateTimeEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTimeEdit) DateTime() *QDateTime {
	_ret := C.QDateTimeEdit_DateTime(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) Date() *QDate {
	_ret := C.QDateTimeEdit_Date(this.h)
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) Time() *QTime {
	_ret := C.QDateTimeEdit_Time(this.h)
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) Calendar() *QCalendar {
	_ret := C.QDateTimeEdit_Calendar(this.h)
	_goptr := newQCalendar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetCalendar(calendar QCalendar) {
	C.QDateTimeEdit_SetCalendar(this.h, calendar.cPointer())
}

func (this *QDateTimeEdit) MinimumDateTime() *QDateTime {
	_ret := C.QDateTimeEdit_MinimumDateTime(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) ClearMinimumDateTime() {
	C.QDateTimeEdit_ClearMinimumDateTime(this.h)
}

func (this *QDateTimeEdit) SetMinimumDateTime(dt *QDateTime) {
	C.QDateTimeEdit_SetMinimumDateTime(this.h, dt.cPointer())
}

func (this *QDateTimeEdit) MaximumDateTime() *QDateTime {
	_ret := C.QDateTimeEdit_MaximumDateTime(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) ClearMaximumDateTime() {
	C.QDateTimeEdit_ClearMaximumDateTime(this.h)
}

func (this *QDateTimeEdit) SetMaximumDateTime(dt *QDateTime) {
	C.QDateTimeEdit_SetMaximumDateTime(this.h, dt.cPointer())
}

func (this *QDateTimeEdit) SetDateTimeRange(min *QDateTime, max *QDateTime) {
	C.QDateTimeEdit_SetDateTimeRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QDateTimeEdit) MinimumDate() *QDate {
	_ret := C.QDateTimeEdit_MinimumDate(this.h)
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetMinimumDate(min QDate) {
	C.QDateTimeEdit_SetMinimumDate(this.h, min.cPointer())
}

func (this *QDateTimeEdit) ClearMinimumDate() {
	C.QDateTimeEdit_ClearMinimumDate(this.h)
}

func (this *QDateTimeEdit) MaximumDate() *QDate {
	_ret := C.QDateTimeEdit_MaximumDate(this.h)
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetMaximumDate(max QDate) {
	C.QDateTimeEdit_SetMaximumDate(this.h, max.cPointer())
}

func (this *QDateTimeEdit) ClearMaximumDate() {
	C.QDateTimeEdit_ClearMaximumDate(this.h)
}

func (this *QDateTimeEdit) SetDateRange(min QDate, max QDate) {
	C.QDateTimeEdit_SetDateRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QDateTimeEdit) MinimumTime() *QTime {
	_ret := C.QDateTimeEdit_MinimumTime(this.h)
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetMinimumTime(min QTime) {
	C.QDateTimeEdit_SetMinimumTime(this.h, min.cPointer())
}

func (this *QDateTimeEdit) ClearMinimumTime() {
	C.QDateTimeEdit_ClearMinimumTime(this.h)
}

func (this *QDateTimeEdit) MaximumTime() *QTime {
	_ret := C.QDateTimeEdit_MaximumTime(this.h)
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) SetMaximumTime(max QTime) {
	C.QDateTimeEdit_SetMaximumTime(this.h, max.cPointer())
}

func (this *QDateTimeEdit) ClearMaximumTime() {
	C.QDateTimeEdit_ClearMaximumTime(this.h)
}

func (this *QDateTimeEdit) SetTimeRange(min QTime, max QTime) {
	C.QDateTimeEdit_SetTimeRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QDateTimeEdit) DisplayedSections() QDateTimeEdit__Section {
	return (QDateTimeEdit__Section)(C.QDateTimeEdit_DisplayedSections(this.h))
}

func (this *QDateTimeEdit) CurrentSection() QDateTimeEdit__Section {
	return (QDateTimeEdit__Section)(C.QDateTimeEdit_CurrentSection(this.h))
}

func (this *QDateTimeEdit) SectionAt(index int) QDateTimeEdit__Section {
	return (QDateTimeEdit__Section)(C.QDateTimeEdit_SectionAt(this.h, (C.int)(index)))
}

func (this *QDateTimeEdit) SetCurrentSection(section QDateTimeEdit__Section) {
	C.QDateTimeEdit_SetCurrentSection(this.h, (C.int)(section))
}

func (this *QDateTimeEdit) CurrentSectionIndex() int {
	return (int)(C.QDateTimeEdit_CurrentSectionIndex(this.h))
}

func (this *QDateTimeEdit) SetCurrentSectionIndex(index int) {
	C.QDateTimeEdit_SetCurrentSectionIndex(this.h, (C.int)(index))
}

func (this *QDateTimeEdit) CalendarWidget() *QCalendarWidget {
	return UnsafeNewQCalendarWidget(unsafe.Pointer(C.QDateTimeEdit_CalendarWidget(this.h)))
}

func (this *QDateTimeEdit) SetCalendarWidget(calendarWidget *QCalendarWidget) {
	C.QDateTimeEdit_SetCalendarWidget(this.h, calendarWidget.cPointer())
}

func (this *QDateTimeEdit) SectionCount() int {
	return (int)(C.QDateTimeEdit_SectionCount(this.h))
}

func (this *QDateTimeEdit) SetSelectedSection(section QDateTimeEdit__Section) {
	C.QDateTimeEdit_SetSelectedSection(this.h, (C.int)(section))
}

func (this *QDateTimeEdit) SectionText(section QDateTimeEdit__Section) string {
	var _ms C.struct_miqt_string = C.QDateTimeEdit_SectionText(this.h, (C.int)(section))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTimeEdit) DisplayFormat() string {
	var _ms C.struct_miqt_string = C.QDateTimeEdit_DisplayFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateTimeEdit) SetDisplayFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QDateTimeEdit_SetDisplayFormat(this.h, format_ms)
}

func (this *QDateTimeEdit) CalendarPopup() bool {
	return (bool)(C.QDateTimeEdit_CalendarPopup(this.h))
}

func (this *QDateTimeEdit) SetCalendarPopup(enable bool) {
	C.QDateTimeEdit_SetCalendarPopup(this.h, (C.bool)(enable))
}

func (this *QDateTimeEdit) TimeSpec() TimeSpec {
	return (TimeSpec)(C.QDateTimeEdit_TimeSpec(this.h))
}

func (this *QDateTimeEdit) SetTimeSpec(spec TimeSpec) {
	C.QDateTimeEdit_SetTimeSpec(this.h, (C.int)(spec))
}

func (this *QDateTimeEdit) SizeHint() *QSize {
	_ret := C.QDateTimeEdit_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDateTimeEdit) Clear() {
	C.QDateTimeEdit_Clear(this.h)
}

func (this *QDateTimeEdit) StepBy(steps int) {
	C.QDateTimeEdit_StepBy(this.h, (C.int)(steps))
}

func (this *QDateTimeEdit) Event(event *QEvent) bool {
	return (bool)(C.QDateTimeEdit_Event(this.h, event.cPointer()))
}

func (this *QDateTimeEdit) DateTimeChanged(dateTime *QDateTime) {
	C.QDateTimeEdit_DateTimeChanged(this.h, dateTime.cPointer())
}
func (this *QDateTimeEdit) OnDateTimeChanged(slot func(dateTime *QDateTime)) {
	C.QDateTimeEdit_connect_DateTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeEdit_DateTimeChanged
func miqt_exec_callback_QDateTimeEdit_DateTimeChanged(cb C.intptr_t, dateTime *C.QDateTime) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dateTime *QDateTime))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDateTime(unsafe.Pointer(dateTime))

	gofunc(slotval1)
}

func (this *QDateTimeEdit) TimeChanged(time QTime) {
	C.QDateTimeEdit_TimeChanged(this.h, time.cPointer())
}
func (this *QDateTimeEdit) OnTimeChanged(slot func(time QTime)) {
	C.QDateTimeEdit_connect_TimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeEdit_TimeChanged
func miqt_exec_callback_QDateTimeEdit_TimeChanged(cb C.intptr_t, time *C.QTime) {
	gofunc, ok := cgo.Handle(cb).Value().(func(time QTime))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	time_ret := time
	time_goptr := newQTime(time_ret)
	time_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *time_goptr

	gofunc(slotval1)
}

func (this *QDateTimeEdit) DateChanged(date QDate) {
	C.QDateTimeEdit_DateChanged(this.h, date.cPointer())
}
func (this *QDateTimeEdit) OnDateChanged(slot func(date QDate)) {
	C.QDateTimeEdit_connect_DateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateTimeEdit_DateChanged
func miqt_exec_callback_QDateTimeEdit_DateChanged(cb C.intptr_t, date *C.QDate) {
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

func (this *QDateTimeEdit) SetDateTime(dateTime *QDateTime) {
	C.QDateTimeEdit_SetDateTime(this.h, dateTime.cPointer())
}

func (this *QDateTimeEdit) SetDate(date QDate) {
	C.QDateTimeEdit_SetDate(this.h, date.cPointer())
}

func (this *QDateTimeEdit) SetTime(time QTime) {
	C.QDateTimeEdit_SetTime(this.h, time.cPointer())
}

func QDateTimeEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateTimeEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDateTimeEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateTimeEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDateTimeEdit) Delete() {
	C.QDateTimeEdit_Delete(this.h)
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

func newQTimeEdit(h *C.QTimeEdit) *QTimeEdit {
	if h == nil {
		return nil
	}
	return &QTimeEdit{h: h, QDateTimeEdit: UnsafeNewQDateTimeEdit(unsafe.Pointer(h))}
}

func UnsafeNewQTimeEdit(h unsafe.Pointer) *QTimeEdit {
	return newQTimeEdit((*C.QTimeEdit)(h))
}

// NewQTimeEdit constructs a new QTimeEdit object.
func NewQTimeEdit(parent *QWidget) *QTimeEdit {
	ret := C.QTimeEdit_new(parent.cPointer())
	return newQTimeEdit(ret)
}

// NewQTimeEdit2 constructs a new QTimeEdit object.
func NewQTimeEdit2() *QTimeEdit {
	ret := C.QTimeEdit_new2()
	return newQTimeEdit(ret)
}

// NewQTimeEdit3 constructs a new QTimeEdit object.
func NewQTimeEdit3(time QTime) *QTimeEdit {
	ret := C.QTimeEdit_new3(time.cPointer())
	return newQTimeEdit(ret)
}

// NewQTimeEdit4 constructs a new QTimeEdit object.
func NewQTimeEdit4(time QTime, parent *QWidget) *QTimeEdit {
	ret := C.QTimeEdit_new4(time.cPointer(), parent.cPointer())
	return newQTimeEdit(ret)
}

func (this *QTimeEdit) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTimeEdit_MetaObject(this.h)))
}

func (this *QTimeEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTimeEdit_Metacast(this.h, param1_Cstring))
}

func QTimeEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTimeEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimeEdit) UserTimeChanged(time QTime) {
	C.QTimeEdit_UserTimeChanged(this.h, time.cPointer())
}
func (this *QTimeEdit) OnUserTimeChanged(slot func(time QTime)) {
	C.QTimeEdit_connect_UserTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimeEdit_UserTimeChanged
func miqt_exec_callback_QTimeEdit_UserTimeChanged(cb C.intptr_t, time *C.QTime) {
	gofunc, ok := cgo.Handle(cb).Value().(func(time QTime))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	time_ret := time
	time_goptr := newQTime(time_ret)
	time_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *time_goptr

	gofunc(slotval1)
}

func QTimeEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimeEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimeEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTimeEdit) Delete() {
	C.QTimeEdit_Delete(this.h)
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

func newQDateEdit(h *C.QDateEdit) *QDateEdit {
	if h == nil {
		return nil
	}
	return &QDateEdit{h: h, QDateTimeEdit: UnsafeNewQDateTimeEdit(unsafe.Pointer(h))}
}

func UnsafeNewQDateEdit(h unsafe.Pointer) *QDateEdit {
	return newQDateEdit((*C.QDateEdit)(h))
}

// NewQDateEdit constructs a new QDateEdit object.
func NewQDateEdit(parent *QWidget) *QDateEdit {
	ret := C.QDateEdit_new(parent.cPointer())
	return newQDateEdit(ret)
}

// NewQDateEdit2 constructs a new QDateEdit object.
func NewQDateEdit2() *QDateEdit {
	ret := C.QDateEdit_new2()
	return newQDateEdit(ret)
}

// NewQDateEdit3 constructs a new QDateEdit object.
func NewQDateEdit3(date QDate) *QDateEdit {
	ret := C.QDateEdit_new3(date.cPointer())
	return newQDateEdit(ret)
}

// NewQDateEdit4 constructs a new QDateEdit object.
func NewQDateEdit4(date QDate, parent *QWidget) *QDateEdit {
	ret := C.QDateEdit_new4(date.cPointer(), parent.cPointer())
	return newQDateEdit(ret)
}

func (this *QDateEdit) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDateEdit_MetaObject(this.h)))
}

func (this *QDateEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDateEdit_Metacast(this.h, param1_Cstring))
}

func QDateEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDateEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDateEdit) UserDateChanged(date QDate) {
	C.QDateEdit_UserDateChanged(this.h, date.cPointer())
}
func (this *QDateEdit) OnUserDateChanged(slot func(date QDate)) {
	C.QDateEdit_connect_UserDateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDateEdit_UserDateChanged
func miqt_exec_callback_QDateEdit_UserDateChanged(cb C.intptr_t, date *C.QDate) {
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

func QDateEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDateEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDateEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDateEdit) Delete() {
	C.QDateEdit_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDateEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QDateEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
