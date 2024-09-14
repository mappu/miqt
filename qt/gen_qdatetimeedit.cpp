#include <QCalendar>
#include <QCalendarWidget>
#include <QDate>
#include <QDateEdit>
#include <QDateTime>
#include <QDateTimeEdit>
#include <QEvent>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTime>
#include <QTimeEdit>
#include <QWidget>
#include "qdatetimeedit.h"
#include "gen_qdatetimeedit.h"
#include "_cgo_export.h"

QDateTimeEdit* QDateTimeEdit_new() {
	return new QDateTimeEdit();
}

QDateTimeEdit* QDateTimeEdit_new2(QDateTime* dt) {
	return new QDateTimeEdit(*dt);
}

QDateTimeEdit* QDateTimeEdit_new3(QDate* d) {
	return new QDateTimeEdit(*d);
}

QDateTimeEdit* QDateTimeEdit_new4(QTime* t) {
	return new QDateTimeEdit(*t);
}

QDateTimeEdit* QDateTimeEdit_new5(QWidget* parent) {
	return new QDateTimeEdit(parent);
}

QDateTimeEdit* QDateTimeEdit_new6(QDateTime* dt, QWidget* parent) {
	return new QDateTimeEdit(*dt, parent);
}

QDateTimeEdit* QDateTimeEdit_new7(QDate* d, QWidget* parent) {
	return new QDateTimeEdit(*d, parent);
}

QDateTimeEdit* QDateTimeEdit_new8(QTime* t, QWidget* parent) {
	return new QDateTimeEdit(*t, parent);
}

QMetaObject* QDateTimeEdit_MetaObject(const QDateTimeEdit* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QDateTimeEdit_Tr(const char* s) {
	QString _ret = QDateTimeEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDateTimeEdit_TrUtf8(const char* s) {
	QString _ret = QDateTimeEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDateTime* QDateTimeEdit_DateTime(const QDateTimeEdit* self) {
	QDateTime _ret = self->dateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(_ret));
}

QDate* QDateTimeEdit_Date(const QDateTimeEdit* self) {
	QDate _ret = self->date();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(_ret));
}

QTime* QDateTimeEdit_Time(const QDateTimeEdit* self) {
	QTime _ret = self->time();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(_ret));
}

QCalendar* QDateTimeEdit_Calendar(const QDateTimeEdit* self) {
	QCalendar _ret = self->calendar();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCalendar*>(new QCalendar(_ret));
}

void QDateTimeEdit_SetCalendar(QDateTimeEdit* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

QDateTime* QDateTimeEdit_MinimumDateTime(const QDateTimeEdit* self) {
	QDateTime _ret = self->minimumDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(_ret));
}

void QDateTimeEdit_ClearMinimumDateTime(QDateTimeEdit* self) {
	self->clearMinimumDateTime();
}

void QDateTimeEdit_SetMinimumDateTime(QDateTimeEdit* self, QDateTime* dt) {
	self->setMinimumDateTime(*dt);
}

QDateTime* QDateTimeEdit_MaximumDateTime(const QDateTimeEdit* self) {
	QDateTime _ret = self->maximumDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(_ret));
}

void QDateTimeEdit_ClearMaximumDateTime(QDateTimeEdit* self) {
	self->clearMaximumDateTime();
}

void QDateTimeEdit_SetMaximumDateTime(QDateTimeEdit* self, QDateTime* dt) {
	self->setMaximumDateTime(*dt);
}

void QDateTimeEdit_SetDateTimeRange(QDateTimeEdit* self, QDateTime* min, QDateTime* max) {
	self->setDateTimeRange(*min, *max);
}

QDate* QDateTimeEdit_MinimumDate(const QDateTimeEdit* self) {
	QDate _ret = self->minimumDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(_ret));
}

void QDateTimeEdit_SetMinimumDate(QDateTimeEdit* self, QDate* min) {
	self->setMinimumDate(*min);
}

void QDateTimeEdit_ClearMinimumDate(QDateTimeEdit* self) {
	self->clearMinimumDate();
}

QDate* QDateTimeEdit_MaximumDate(const QDateTimeEdit* self) {
	QDate _ret = self->maximumDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(_ret));
}

void QDateTimeEdit_SetMaximumDate(QDateTimeEdit* self, QDate* max) {
	self->setMaximumDate(*max);
}

void QDateTimeEdit_ClearMaximumDate(QDateTimeEdit* self) {
	self->clearMaximumDate();
}

void QDateTimeEdit_SetDateRange(QDateTimeEdit* self, QDate* min, QDate* max) {
	self->setDateRange(*min, *max);
}

QTime* QDateTimeEdit_MinimumTime(const QDateTimeEdit* self) {
	QTime _ret = self->minimumTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(_ret));
}

void QDateTimeEdit_SetMinimumTime(QDateTimeEdit* self, QTime* min) {
	self->setMinimumTime(*min);
}

void QDateTimeEdit_ClearMinimumTime(QDateTimeEdit* self) {
	self->clearMinimumTime();
}

QTime* QDateTimeEdit_MaximumTime(const QDateTimeEdit* self) {
	QTime _ret = self->maximumTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(_ret));
}

void QDateTimeEdit_SetMaximumTime(QDateTimeEdit* self, QTime* max) {
	self->setMaximumTime(*max);
}

void QDateTimeEdit_ClearMaximumTime(QDateTimeEdit* self) {
	self->clearMaximumTime();
}

void QDateTimeEdit_SetTimeRange(QDateTimeEdit* self, QTime* min, QTime* max) {
	self->setTimeRange(*min, *max);
}

int QDateTimeEdit_DisplayedSections(const QDateTimeEdit* self) {
	QDateTimeEdit::Sections _ret = self->displayedSections();
	return static_cast<int>(_ret);
}

uintptr_t QDateTimeEdit_CurrentSection(const QDateTimeEdit* self) {
	QDateTimeEdit::Section _ret = self->currentSection();
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QDateTimeEdit_SectionAt(const QDateTimeEdit* self, int index) {
	QDateTimeEdit::Section _ret = self->sectionAt(static_cast<int>(index));
	return static_cast<uintptr_t>(_ret);
}

void QDateTimeEdit_SetCurrentSection(QDateTimeEdit* self, uintptr_t section) {
	self->setCurrentSection(static_cast<QDateTimeEdit::Section>(section));
}

int QDateTimeEdit_CurrentSectionIndex(const QDateTimeEdit* self) {
	return self->currentSectionIndex();
}

void QDateTimeEdit_SetCurrentSectionIndex(QDateTimeEdit* self, int index) {
	self->setCurrentSectionIndex(static_cast<int>(index));
}

QCalendarWidget* QDateTimeEdit_CalendarWidget(const QDateTimeEdit* self) {
	return self->calendarWidget();
}

void QDateTimeEdit_SetCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget) {
	self->setCalendarWidget(calendarWidget);
}

int QDateTimeEdit_SectionCount(const QDateTimeEdit* self) {
	return self->sectionCount();
}

void QDateTimeEdit_SetSelectedSection(QDateTimeEdit* self, uintptr_t section) {
	self->setSelectedSection(static_cast<QDateTimeEdit::Section>(section));
}

struct miqt_string* QDateTimeEdit_SectionText(const QDateTimeEdit* self, uintptr_t section) {
	QString _ret = self->sectionText(static_cast<QDateTimeEdit::Section>(section));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDateTimeEdit_DisplayFormat(const QDateTimeEdit* self) {
	QString _ret = self->displayFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDateTimeEdit_SetDisplayFormat(QDateTimeEdit* self, struct miqt_string* format) {
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	self->setDisplayFormat(format_QString);
}

bool QDateTimeEdit_CalendarPopup(const QDateTimeEdit* self) {
	return self->calendarPopup();
}

void QDateTimeEdit_SetCalendarPopup(QDateTimeEdit* self, bool enable) {
	self->setCalendarPopup(enable);
}

uintptr_t QDateTimeEdit_TimeSpec(const QDateTimeEdit* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<uintptr_t>(_ret);
}

void QDateTimeEdit_SetTimeSpec(QDateTimeEdit* self, uintptr_t spec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

QSize* QDateTimeEdit_SizeHint(const QDateTimeEdit* self) {
	QSize _ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

void QDateTimeEdit_Clear(QDateTimeEdit* self) {
	self->clear();
}

void QDateTimeEdit_StepBy(QDateTimeEdit* self, int steps) {
	self->stepBy(static_cast<int>(steps));
}

bool QDateTimeEdit_Event(QDateTimeEdit* self, QEvent* event) {
	return self->event(event);
}

void QDateTimeEdit_DateTimeChanged(QDateTimeEdit* self, QDateTime* dateTime) {
	self->dateTimeChanged(*dateTime);
}

void QDateTimeEdit_connect_DateTimeChanged(QDateTimeEdit* self, void* slot) {
	QDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(const QDateTime&)>(&QDateTimeEdit::dateTimeChanged), self, [=](const QDateTime& dateTime) {
		const QDateTime& dateTime_ret = dateTime;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&dateTime_ret);
		miqt_exec_callback_QDateTimeEdit_DateTimeChanged(slot, sigval1);
	});
}

void QDateTimeEdit_TimeChanged(QDateTimeEdit* self, QTime* time) {
	self->timeChanged(*time);
}

void QDateTimeEdit_connect_TimeChanged(QDateTimeEdit* self, void* slot) {
	QDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(const QTime&)>(&QDateTimeEdit::timeChanged), self, [=](const QTime& time) {
		const QTime& time_ret = time;
		// Cast returned reference into pointer
		QTime* sigval1 = const_cast<QTime*>(&time_ret);
		miqt_exec_callback_QDateTimeEdit_TimeChanged(slot, sigval1);
	});
}

void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date) {
	self->dateChanged(*date);
}

void QDateTimeEdit_connect_DateChanged(QDateTimeEdit* self, void* slot) {
	QDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(const QDate&)>(&QDateTimeEdit::dateChanged), self, [=](const QDate& date) {
		const QDate& date_ret = date;
		// Cast returned reference into pointer
		QDate* sigval1 = const_cast<QDate*>(&date_ret);
		miqt_exec_callback_QDateTimeEdit_DateChanged(slot, sigval1);
	});
}

void QDateTimeEdit_SetDateTime(QDateTimeEdit* self, QDateTime* dateTime) {
	self->setDateTime(*dateTime);
}

void QDateTimeEdit_SetDate(QDateTimeEdit* self, QDate* date) {
	self->setDate(*date);
}

void QDateTimeEdit_SetTime(QDateTimeEdit* self, QTime* time) {
	self->setTime(*time);
}

struct miqt_string* QDateTimeEdit_Tr2(const char* s, const char* c) {
	QString _ret = QDateTimeEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDateTimeEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDateTimeEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDateTimeEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = QDateTimeEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDateTimeEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDateTimeEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDateTimeEdit_Delete(QDateTimeEdit* self) {
	delete self;
}

QTimeEdit* QTimeEdit_new() {
	return new QTimeEdit();
}

QTimeEdit* QTimeEdit_new2(QTime* time) {
	return new QTimeEdit(*time);
}

QTimeEdit* QTimeEdit_new3(QWidget* parent) {
	return new QTimeEdit(parent);
}

QTimeEdit* QTimeEdit_new4(QTime* time, QWidget* parent) {
	return new QTimeEdit(*time, parent);
}

QMetaObject* QTimeEdit_MetaObject(const QTimeEdit* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QTimeEdit_Tr(const char* s) {
	QString _ret = QTimeEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeEdit_TrUtf8(const char* s) {
	QString _ret = QTimeEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTimeEdit_UserTimeChanged(QTimeEdit* self, QTime* time) {
	self->userTimeChanged(*time);
}

void QTimeEdit_connect_UserTimeChanged(QTimeEdit* self, void* slot) {
	QTimeEdit::connect(self, static_cast<void (QTimeEdit::*)(const QTime&)>(&QTimeEdit::userTimeChanged), self, [=](const QTime& time) {
		const QTime& time_ret = time;
		// Cast returned reference into pointer
		QTime* sigval1 = const_cast<QTime*>(&time_ret);
		miqt_exec_callback_QTimeEdit_UserTimeChanged(slot, sigval1);
	});
}

struct miqt_string* QTimeEdit_Tr2(const char* s, const char* c) {
	QString _ret = QTimeEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTimeEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = QTimeEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTimeEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTimeEdit_Delete(QTimeEdit* self) {
	delete self;
}

QDateEdit* QDateEdit_new() {
	return new QDateEdit();
}

QDateEdit* QDateEdit_new2(QDate* date) {
	return new QDateEdit(*date);
}

QDateEdit* QDateEdit_new3(QWidget* parent) {
	return new QDateEdit(parent);
}

QDateEdit* QDateEdit_new4(QDate* date, QWidget* parent) {
	return new QDateEdit(*date, parent);
}

QMetaObject* QDateEdit_MetaObject(const QDateEdit* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QDateEdit_Tr(const char* s) {
	QString _ret = QDateEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDateEdit_TrUtf8(const char* s) {
	QString _ret = QDateEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDateEdit_UserDateChanged(QDateEdit* self, QDate* date) {
	self->userDateChanged(*date);
}

void QDateEdit_connect_UserDateChanged(QDateEdit* self, void* slot) {
	QDateEdit::connect(self, static_cast<void (QDateEdit::*)(const QDate&)>(&QDateEdit::userDateChanged), self, [=](const QDate& date) {
		const QDate& date_ret = date;
		// Cast returned reference into pointer
		QDate* sigval1 = const_cast<QDate*>(&date_ret);
		miqt_exec_callback_QDateEdit_UserDateChanged(slot, sigval1);
	});
}

struct miqt_string* QDateEdit_Tr2(const char* s, const char* c) {
	QString _ret = QDateEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDateEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDateEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDateEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = QDateEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDateEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDateEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDateEdit_Delete(QDateEdit* self) {
	delete self;
}

