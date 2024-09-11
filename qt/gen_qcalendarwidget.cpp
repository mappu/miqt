#include <QCalendar>
#include <QCalendarWidget>
#include <QDate>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCharFormat>
#include <QWidget>
#include "qcalendarwidget.h"

#include "gen_qcalendarwidget.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCalendarWidget* QCalendarWidget_new() {
	return new QCalendarWidget();
}

QCalendarWidget* QCalendarWidget_new2(QWidget* parent) {
	return new QCalendarWidget(parent);
}

QMetaObject* QCalendarWidget_MetaObject(const QCalendarWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void QCalendarWidget_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCalendarWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendarWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCalendarWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QCalendarWidget_SizeHint(const QCalendarWidget* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QCalendarWidget_MinimumSizeHint(const QCalendarWidget* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QDate* QCalendarWidget_SelectedDate(const QCalendarWidget* self) {
	QDate ret = self->selectedDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

int QCalendarWidget_YearShown(const QCalendarWidget* self) {
	return self->yearShown();
}

int QCalendarWidget_MonthShown(const QCalendarWidget* self) {
	return self->monthShown();
}

QDate* QCalendarWidget_MinimumDate(const QCalendarWidget* self) {
	QDate ret = self->minimumDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date) {
	self->setMinimumDate(*date);
}

QDate* QCalendarWidget_MaximumDate(const QCalendarWidget* self) {
	QDate ret = self->maximumDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date) {
	self->setMaximumDate(*date);
}

uintptr_t QCalendarWidget_FirstDayOfWeek(const QCalendarWidget* self) {
	Qt::DayOfWeek ret = self->firstDayOfWeek();
	return static_cast<uintptr_t>(ret);
}

void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, uintptr_t dayOfWeek) {
	self->setFirstDayOfWeek(static_cast<Qt::DayOfWeek>(dayOfWeek));
}

bool QCalendarWidget_IsNavigationBarVisible(const QCalendarWidget* self) {
	return self->isNavigationBarVisible();
}

bool QCalendarWidget_IsGridVisible(const QCalendarWidget* self) {
	return self->isGridVisible();
}

QCalendar* QCalendarWidget_Calendar(const QCalendarWidget* self) {
	QCalendar ret = self->calendar();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCalendar*>(new QCalendar(ret));
}

void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

uintptr_t QCalendarWidget_SelectionMode(const QCalendarWidget* self) {
	QCalendarWidget::SelectionMode ret = self->selectionMode();
	return static_cast<uintptr_t>(ret);
}

void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, uintptr_t mode) {
	self->setSelectionMode(static_cast<QCalendarWidget::SelectionMode>(mode));
}

uintptr_t QCalendarWidget_HorizontalHeaderFormat(const QCalendarWidget* self) {
	QCalendarWidget::HorizontalHeaderFormat ret = self->horizontalHeaderFormat();
	return static_cast<uintptr_t>(ret);
}

void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, uintptr_t format) {
	self->setHorizontalHeaderFormat(static_cast<QCalendarWidget::HorizontalHeaderFormat>(format));
}

uintptr_t QCalendarWidget_VerticalHeaderFormat(const QCalendarWidget* self) {
	QCalendarWidget::VerticalHeaderFormat ret = self->verticalHeaderFormat();
	return static_cast<uintptr_t>(ret);
}

void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, uintptr_t format) {
	self->setVerticalHeaderFormat(static_cast<QCalendarWidget::VerticalHeaderFormat>(format));
}

QTextCharFormat* QCalendarWidget_HeaderTextFormat(const QCalendarWidget* self) {
	QTextCharFormat ret = self->headerTextFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, QTextCharFormat* format) {
	self->setHeaderTextFormat(*format);
}

QTextCharFormat* QCalendarWidget_WeekdayTextFormat(const QCalendarWidget* self, uintptr_t dayOfWeek) {
	QTextCharFormat ret = self->weekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, uintptr_t dayOfWeek, QTextCharFormat* format) {
	self->setWeekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek), *format);
}

QTextCharFormat* QCalendarWidget_DateTextFormatWithDate(const QCalendarWidget* self, QDate* date) {
	QTextCharFormat ret = self->dateTextFormat(*date);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

void QCalendarWidget_SetDateTextFormat(QCalendarWidget* self, QDate* date, QTextCharFormat* format) {
	self->setDateTextFormat(*date, *format);
}

bool QCalendarWidget_IsDateEditEnabled(const QCalendarWidget* self) {
	return self->isDateEditEnabled();
}

void QCalendarWidget_SetDateEditEnabled(QCalendarWidget* self, bool enable) {
	self->setDateEditEnabled(enable);
}

int QCalendarWidget_DateEditAcceptDelay(const QCalendarWidget* self) {
	return self->dateEditAcceptDelay();
}

void QCalendarWidget_SetDateEditAcceptDelay(QCalendarWidget* self, int delay) {
	self->setDateEditAcceptDelay(static_cast<int>(delay));
}

void QCalendarWidget_SetSelectedDate(QCalendarWidget* self, QDate* date) {
	self->setSelectedDate(*date);
}

void QCalendarWidget_SetDateRange(QCalendarWidget* self, QDate* min, QDate* max) {
	self->setDateRange(*min, *max);
}

void QCalendarWidget_SetCurrentPage(QCalendarWidget* self, int year, int month) {
	self->setCurrentPage(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_SetGridVisible(QCalendarWidget* self, bool show) {
	self->setGridVisible(show);
}

void QCalendarWidget_SetNavigationBarVisible(QCalendarWidget* self, bool visible) {
	self->setNavigationBarVisible(visible);
}

void QCalendarWidget_ShowNextMonth(QCalendarWidget* self) {
	self->showNextMonth();
}

void QCalendarWidget_ShowPreviousMonth(QCalendarWidget* self) {
	self->showPreviousMonth();
}

void QCalendarWidget_ShowNextYear(QCalendarWidget* self) {
	self->showNextYear();
}

void QCalendarWidget_ShowPreviousYear(QCalendarWidget* self) {
	self->showPreviousYear();
}

void QCalendarWidget_ShowSelectedDate(QCalendarWidget* self) {
	self->showSelectedDate();
}

void QCalendarWidget_ShowToday(QCalendarWidget* self) {
	self->showToday();
}

void QCalendarWidget_SelectionChanged(QCalendarWidget* self) {
	self->selectionChanged();
}

void QCalendarWidget_connect_SelectionChanged(QCalendarWidget* self, void* slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)()>(&QCalendarWidget::selectionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date) {
	self->clicked(*date);
}

void QCalendarWidget_connect_Clicked(QCalendarWidget* self, void* slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(const QDate&)>(&QCalendarWidget::clicked), self, [=](const QDate& date) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date) {
	self->activated(*date);
}

void QCalendarWidget_connect_Activated(QCalendarWidget* self, void* slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(const QDate&)>(&QCalendarWidget::activated), self, [=](const QDate& date) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month) {
	self->currentPageChanged(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_connect_CurrentPageChanged(QCalendarWidget* self, void* slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(int, int)>(&QCalendarWidget::currentPageChanged), self, [=](int year, int month) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCalendarWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCalendarWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendarWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCalendarWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendarWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCalendarWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendarWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCalendarWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendarWidget_Delete(QCalendarWidget* self) {
	delete self;
}

