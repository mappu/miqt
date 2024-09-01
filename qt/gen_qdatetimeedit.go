package qt

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

func newQDateTimeEdit(h *C.QDateTimeEdit) *QDateTimeEdit {
	if h == nil {
		return nil
	}
	return &QDateTimeEdit{h: h, QAbstractSpinBox: newQAbstractSpinBox_U(unsafe.Pointer(h))}
}

func newQDateTimeEdit_U(h unsafe.Pointer) *QDateTimeEdit {
	return newQDateTimeEdit((*C.QDateTimeEdit)(h))
}

// NewQDateTimeEdit constructs a new QDateTimeEdit object.
func NewQDateTimeEdit() *QDateTimeEdit {
	ret := C.QDateTimeEdit_new()
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit2 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit2(dt *QDateTime) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new2(dt.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit3 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit3(d *QDate) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new3(d.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit4 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit4(t *QTime) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new4(t.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit5 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit5(parent *QWidget) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new5(parent.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit6 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit6(dt *QDateTime, parent *QWidget) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new6(dt.cPointer(), parent.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit7 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit7(d *QDate, parent *QWidget) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new7(d.cPointer(), parent.cPointer())
	return newQDateTimeEdit(ret)
}

// NewQDateTimeEdit8 constructs a new QDateTimeEdit object.
func NewQDateTimeEdit8(t *QTime, parent *QWidget) *QDateTimeEdit {
	ret := C.QDateTimeEdit_new8(t.cPointer(), parent.cPointer())
	return newQDateTimeEdit(ret)
}

func (this *QDateTimeEdit) MetaObject() *QMetaObject {
	ret := C.QDateTimeEdit_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDateTimeEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTimeEdit_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDateTimeEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTimeEdit_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateTimeEdit) DateTime() *QDateTime {
	ret := C.QDateTimeEdit_DateTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) Date() *QDate {
	ret := C.QDateTimeEdit_Date(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) Time() *QTime {
	ret := C.QDateTimeEdit_Time(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) Calendar() *QCalendar {
	ret := C.QDateTimeEdit_Calendar(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCalendar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCalendar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) SetCalendar(calendar QCalendar) {
	C.QDateTimeEdit_SetCalendar(this.h, calendar.cPointer())
}

func (this *QDateTimeEdit) MinimumDateTime() *QDateTime {
	ret := C.QDateTimeEdit_MinimumDateTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) ClearMinimumDateTime() {
	C.QDateTimeEdit_ClearMinimumDateTime(this.h)
}

func (this *QDateTimeEdit) SetMinimumDateTime(dt *QDateTime) {
	C.QDateTimeEdit_SetMinimumDateTime(this.h, dt.cPointer())
}

func (this *QDateTimeEdit) MaximumDateTime() *QDateTime {
	ret := C.QDateTimeEdit_MaximumDateTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	ret := C.QDateTimeEdit_MinimumDate(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) SetMinimumDate(min *QDate) {
	C.QDateTimeEdit_SetMinimumDate(this.h, min.cPointer())
}

func (this *QDateTimeEdit) ClearMinimumDate() {
	C.QDateTimeEdit_ClearMinimumDate(this.h)
}

func (this *QDateTimeEdit) MaximumDate() *QDate {
	ret := C.QDateTimeEdit_MaximumDate(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) SetMaximumDate(max *QDate) {
	C.QDateTimeEdit_SetMaximumDate(this.h, max.cPointer())
}

func (this *QDateTimeEdit) ClearMaximumDate() {
	C.QDateTimeEdit_ClearMaximumDate(this.h)
}

func (this *QDateTimeEdit) SetDateRange(min *QDate, max *QDate) {
	C.QDateTimeEdit_SetDateRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QDateTimeEdit) MinimumTime() *QTime {
	ret := C.QDateTimeEdit_MinimumTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) SetMinimumTime(min *QTime) {
	C.QDateTimeEdit_SetMinimumTime(this.h, min.cPointer())
}

func (this *QDateTimeEdit) ClearMinimumTime() {
	C.QDateTimeEdit_ClearMinimumTime(this.h)
}

func (this *QDateTimeEdit) MaximumTime() *QTime {
	ret := C.QDateTimeEdit_MaximumTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) SetMaximumTime(max *QTime) {
	C.QDateTimeEdit_SetMaximumTime(this.h, max.cPointer())
}

func (this *QDateTimeEdit) ClearMaximumTime() {
	C.QDateTimeEdit_ClearMaximumTime(this.h)
}

func (this *QDateTimeEdit) SetTimeRange(min *QTime, max *QTime) {
	C.QDateTimeEdit_SetTimeRange(this.h, min.cPointer(), max.cPointer())
}

func (this *QDateTimeEdit) DisplayedSections() int {
	ret := C.QDateTimeEdit_DisplayedSections(this.h)
	return (int)(ret)
}

func (this *QDateTimeEdit) CurrentSection() uintptr {
	ret := C.QDateTimeEdit_CurrentSection(this.h)
	return (uintptr)(ret)
}

func (this *QDateTimeEdit) SectionAt(index int) uintptr {
	ret := C.QDateTimeEdit_SectionAt(this.h, (C.int)(index))
	return (uintptr)(ret)
}

func (this *QDateTimeEdit) SetCurrentSection(section uintptr) {
	C.QDateTimeEdit_SetCurrentSection(this.h, (C.uintptr_t)(section))
}

func (this *QDateTimeEdit) CurrentSectionIndex() int {
	ret := C.QDateTimeEdit_CurrentSectionIndex(this.h)
	return (int)(ret)
}

func (this *QDateTimeEdit) SetCurrentSectionIndex(index int) {
	C.QDateTimeEdit_SetCurrentSectionIndex(this.h, (C.int)(index))
}

func (this *QDateTimeEdit) CalendarWidget() *QCalendarWidget {
	ret := C.QDateTimeEdit_CalendarWidget(this.h)
	return newQCalendarWidget_U(unsafe.Pointer(ret))
}

func (this *QDateTimeEdit) SetCalendarWidget(calendarWidget *QCalendarWidget) {
	C.QDateTimeEdit_SetCalendarWidget(this.h, calendarWidget.cPointer())
}

func (this *QDateTimeEdit) SectionCount() int {
	ret := C.QDateTimeEdit_SectionCount(this.h)
	return (int)(ret)
}

func (this *QDateTimeEdit) SetSelectedSection(section uintptr) {
	C.QDateTimeEdit_SetSelectedSection(this.h, (C.uintptr_t)(section))
}

func (this *QDateTimeEdit) SectionText(section uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTimeEdit_SectionText(this.h, (C.uintptr_t)(section), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateTimeEdit) DisplayFormat() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTimeEdit_DisplayFormat(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateTimeEdit) SetDisplayFormat(format string) {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	C.QDateTimeEdit_SetDisplayFormat(this.h, format_Cstring, C.ulong(len(format)))
}

func (this *QDateTimeEdit) CalendarPopup() bool {
	ret := C.QDateTimeEdit_CalendarPopup(this.h)
	return (bool)(ret)
}

func (this *QDateTimeEdit) SetCalendarPopup(enable bool) {
	C.QDateTimeEdit_SetCalendarPopup(this.h, (C.bool)(enable))
}

func (this *QDateTimeEdit) TimeSpec() uintptr {
	ret := C.QDateTimeEdit_TimeSpec(this.h)
	return (uintptr)(ret)
}

func (this *QDateTimeEdit) SetTimeSpec(spec uintptr) {
	C.QDateTimeEdit_SetTimeSpec(this.h, (C.uintptr_t)(spec))
}

func (this *QDateTimeEdit) SizeHint() *QSize {
	ret := C.QDateTimeEdit_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDateTimeEdit) Clear() {
	C.QDateTimeEdit_Clear(this.h)
}

func (this *QDateTimeEdit) StepBy(steps int) {
	C.QDateTimeEdit_StepBy(this.h, (C.int)(steps))
}

func (this *QDateTimeEdit) Event(event *QEvent) bool {
	ret := C.QDateTimeEdit_Event(this.h, event.cPointer())
	return (bool)(ret)
}

func (this *QDateTimeEdit) DateTimeChanged(dateTime *QDateTime) {
	C.QDateTimeEdit_DateTimeChanged(this.h, dateTime.cPointer())
}

func (this *QDateTimeEdit) OnDateTimeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDateTimeEdit_connect_DateTimeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDateTimeEdit) TimeChanged(time *QTime) {
	C.QDateTimeEdit_TimeChanged(this.h, time.cPointer())
}

func (this *QDateTimeEdit) OnTimeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDateTimeEdit_connect_TimeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDateTimeEdit) DateChanged(date *QDate) {
	C.QDateTimeEdit_DateChanged(this.h, date.cPointer())
}

func (this *QDateTimeEdit) OnDateChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDateTimeEdit_connect_DateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDateTimeEdit) SetDateTime(dateTime *QDateTime) {
	C.QDateTimeEdit_SetDateTime(this.h, dateTime.cPointer())
}

func (this *QDateTimeEdit) SetDate(date *QDate) {
	C.QDateTimeEdit_SetDate(this.h, date.cPointer())
}

func (this *QDateTimeEdit) SetTime(time *QTime) {
	C.QDateTimeEdit_SetTime(this.h, time.cPointer())
}

func QDateTimeEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTimeEdit_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDateTimeEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTimeEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDateTimeEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTimeEdit_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDateTimeEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateTimeEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateTimeEdit) Delete() {
	C.QDateTimeEdit_Delete(this.h)
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

func newQTimeEdit(h *C.QTimeEdit) *QTimeEdit {
	if h == nil {
		return nil
	}
	return &QTimeEdit{h: h, QDateTimeEdit: newQDateTimeEdit_U(unsafe.Pointer(h))}
}

func newQTimeEdit_U(h unsafe.Pointer) *QTimeEdit {
	return newQTimeEdit((*C.QTimeEdit)(h))
}

// NewQTimeEdit constructs a new QTimeEdit object.
func NewQTimeEdit() *QTimeEdit {
	ret := C.QTimeEdit_new()
	return newQTimeEdit(ret)
}

// NewQTimeEdit2 constructs a new QTimeEdit object.
func NewQTimeEdit2(time *QTime) *QTimeEdit {
	ret := C.QTimeEdit_new2(time.cPointer())
	return newQTimeEdit(ret)
}

// NewQTimeEdit3 constructs a new QTimeEdit object.
func NewQTimeEdit3(parent *QWidget) *QTimeEdit {
	ret := C.QTimeEdit_new3(parent.cPointer())
	return newQTimeEdit(ret)
}

// NewQTimeEdit4 constructs a new QTimeEdit object.
func NewQTimeEdit4(time *QTime, parent *QWidget) *QTimeEdit {
	ret := C.QTimeEdit_new4(time.cPointer(), parent.cPointer())
	return newQTimeEdit(ret)
}

func (this *QTimeEdit) MetaObject() *QMetaObject {
	ret := C.QTimeEdit_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTimeEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeEdit_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimeEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeEdit_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeEdit) UserTimeChanged(time *QTime) {
	C.QTimeEdit_UserTimeChanged(this.h, time.cPointer())
}

func (this *QTimeEdit) OnUserTimeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTimeEdit_connect_UserTimeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QTimeEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeEdit_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimeEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimeEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeEdit_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimeEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimeEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimeEdit) Delete() {
	C.QTimeEdit_Delete(this.h)
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

func newQDateEdit(h *C.QDateEdit) *QDateEdit {
	if h == nil {
		return nil
	}
	return &QDateEdit{h: h, QDateTimeEdit: newQDateTimeEdit_U(unsafe.Pointer(h))}
}

func newQDateEdit_U(h unsafe.Pointer) *QDateEdit {
	return newQDateEdit((*C.QDateEdit)(h))
}

// NewQDateEdit constructs a new QDateEdit object.
func NewQDateEdit() *QDateEdit {
	ret := C.QDateEdit_new()
	return newQDateEdit(ret)
}

// NewQDateEdit2 constructs a new QDateEdit object.
func NewQDateEdit2(date *QDate) *QDateEdit {
	ret := C.QDateEdit_new2(date.cPointer())
	return newQDateEdit(ret)
}

// NewQDateEdit3 constructs a new QDateEdit object.
func NewQDateEdit3(parent *QWidget) *QDateEdit {
	ret := C.QDateEdit_new3(parent.cPointer())
	return newQDateEdit(ret)
}

// NewQDateEdit4 constructs a new QDateEdit object.
func NewQDateEdit4(date *QDate, parent *QWidget) *QDateEdit {
	ret := C.QDateEdit_new4(date.cPointer(), parent.cPointer())
	return newQDateEdit(ret)
}

func (this *QDateEdit) MetaObject() *QMetaObject {
	ret := C.QDateEdit_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDateEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateEdit_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDateEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateEdit_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateEdit) UserDateChanged(date *QDate) {
	C.QDateEdit_UserDateChanged(this.h, date.cPointer())
}

func (this *QDateEdit) OnUserDateChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDateEdit_connect_UserDateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QDateEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateEdit_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDateEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDateEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateEdit_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDateEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDateEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDateEdit) Delete() {
	C.QDateEdit_Delete(this.h)
}
