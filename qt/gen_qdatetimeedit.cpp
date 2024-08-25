#include "gen_qdatetimeedit.h"
#include "qdatetimeedit.h"

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
#include <QTime>
#include <QTimeEdit>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

QMetaObject* QDateTimeEdit_MetaObject(QDateTimeEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void QDateTimeEdit_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDateTimeEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateTimeEdit_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDateTimeEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDateTime* QDateTimeEdit_DateTime(QDateTimeEdit* self) {
	QDateTime ret = self->dateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDate* QDateTimeEdit_Date(QDateTimeEdit* self) {
	QDate ret = self->date();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QTime* QDateTimeEdit_Time(QDateTimeEdit* self) {
	QTime ret = self->time();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QCalendar* QDateTimeEdit_Calendar(QDateTimeEdit* self) {
	QCalendar ret = self->calendar();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCalendar*>(new QCalendar(ret));
}

void QDateTimeEdit_SetCalendar(QDateTimeEdit* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

QDateTime* QDateTimeEdit_MinimumDateTime(QDateTimeEdit* self) {
	QDateTime ret = self->minimumDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

void QDateTimeEdit_ClearMinimumDateTime(QDateTimeEdit* self) {
	self->clearMinimumDateTime();
}

void QDateTimeEdit_SetMinimumDateTime(QDateTimeEdit* self, QDateTime* dt) {
	self->setMinimumDateTime(*dt);
}

QDateTime* QDateTimeEdit_MaximumDateTime(QDateTimeEdit* self) {
	QDateTime ret = self->maximumDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
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

QDate* QDateTimeEdit_MinimumDate(QDateTimeEdit* self) {
	QDate ret = self->minimumDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

void QDateTimeEdit_SetMinimumDate(QDateTimeEdit* self, QDate* min) {
	self->setMinimumDate(*min);
}

void QDateTimeEdit_ClearMinimumDate(QDateTimeEdit* self) {
	self->clearMinimumDate();
}

QDate* QDateTimeEdit_MaximumDate(QDateTimeEdit* self) {
	QDate ret = self->maximumDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
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

QTime* QDateTimeEdit_MinimumTime(QDateTimeEdit* self) {
	QTime ret = self->minimumTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

void QDateTimeEdit_SetMinimumTime(QDateTimeEdit* self, QTime* min) {
	self->setMinimumTime(*min);
}

void QDateTimeEdit_ClearMinimumTime(QDateTimeEdit* self) {
	self->clearMinimumTime();
}

QTime* QDateTimeEdit_MaximumTime(QDateTimeEdit* self) {
	QTime ret = self->maximumTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
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

int QDateTimeEdit_CurrentSectionIndex(QDateTimeEdit* self) {
	return self->currentSectionIndex();
}

void QDateTimeEdit_SetCurrentSectionIndex(QDateTimeEdit* self, int index) {
	self->setCurrentSectionIndex(static_cast<int>(index));
}

QCalendarWidget* QDateTimeEdit_CalendarWidget(QDateTimeEdit* self) {
	return self->calendarWidget();
}

void QDateTimeEdit_SetCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget) {
	self->setCalendarWidget(calendarWidget);
}

int QDateTimeEdit_SectionCount(QDateTimeEdit* self) {
	return self->sectionCount();
}

void QDateTimeEdit_DisplayFormat(QDateTimeEdit* self, char** _out, int* _out_Strlen) {
	QString ret = self->displayFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateTimeEdit_SetDisplayFormat(QDateTimeEdit* self, const char* format, size_t format_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	self->setDisplayFormat(format_QString);
}

bool QDateTimeEdit_CalendarPopup(QDateTimeEdit* self) {
	return self->calendarPopup();
}

void QDateTimeEdit_SetCalendarPopup(QDateTimeEdit* self, bool enable) {
	self->setCalendarPopup(enable);
}

QSize* QDateTimeEdit_SizeHint(QDateTimeEdit* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
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
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDateTimeEdit_TimeChanged(QDateTimeEdit* self, QTime* time) {
	self->timeChanged(*time);
}

void QDateTimeEdit_connect_TimeChanged(QDateTimeEdit* self, void* slot) {
	QDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(const QTime&)>(&QDateTimeEdit::timeChanged), self, [=](const QTime& time) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date) {
	self->dateChanged(*date);
}

void QDateTimeEdit_connect_DateChanged(QDateTimeEdit* self, void* slot) {
	QDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(const QDate&)>(&QDateTimeEdit::dateChanged), self, [=](const QDate& date) {
		miqt_exec_callback(slot, 0, nullptr);
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

void QDateTimeEdit_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDateTimeEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateTimeEdit_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDateTimeEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateTimeEdit_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDateTimeEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateTimeEdit_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDateTimeEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QTimeEdit_MetaObject(QTimeEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void QTimeEdit_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTimeEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeEdit_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTimeEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeEdit_UserTimeChanged(QTimeEdit* self, QTime* time) {
	self->userTimeChanged(*time);
}

void QTimeEdit_connect_UserTimeChanged(QTimeEdit* self, void* slot) {
	QTimeEdit::connect(self, static_cast<void (QTimeEdit::*)(const QTime&)>(&QTimeEdit::userTimeChanged), self, [=](const QTime& time) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTimeEdit_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTimeEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeEdit_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTimeEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeEdit_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTimeEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeEdit_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTimeEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QDateEdit_MetaObject(QDateEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void QDateEdit_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDateEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateEdit_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDateEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateEdit_UserDateChanged(QDateEdit* self, QDate* date) {
	self->userDateChanged(*date);
}

void QDateEdit_connect_UserDateChanged(QDateEdit* self, void* slot) {
	QDateEdit::connect(self, static_cast<void (QDateEdit::*)(const QDate&)>(&QDateEdit::userDateChanged), self, [=](const QDate& date) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDateEdit_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDateEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateEdit_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDateEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateEdit_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDateEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateEdit_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDateEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateEdit_Delete(QDateEdit* self) {
	delete self;
}
