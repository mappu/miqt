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
#include "_cgo_export.h"

QCalendarWidget* QCalendarWidget_new() {
	return new QCalendarWidget();
}

QCalendarWidget* QCalendarWidget_new2(QWidget* parent) {
	return new QCalendarWidget(parent);
}

QMetaObject* QCalendarWidget_MetaObject(const QCalendarWidget* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QCalendarWidget_Tr(const char* s) {
	QString _ret = QCalendarWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendarWidget_TrUtf8(const char* s) {
	QString _ret = QCalendarWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QCalendarWidget_SizeHint(const QCalendarWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QCalendarWidget_MinimumSizeHint(const QCalendarWidget* self) {
	return new QSize(self->minimumSizeHint());
}

QDate* QCalendarWidget_SelectedDate(const QCalendarWidget* self) {
	return new QDate(self->selectedDate());
}

int QCalendarWidget_YearShown(const QCalendarWidget* self) {
	return self->yearShown();
}

int QCalendarWidget_MonthShown(const QCalendarWidget* self) {
	return self->monthShown();
}

QDate* QCalendarWidget_MinimumDate(const QCalendarWidget* self) {
	return new QDate(self->minimumDate());
}

void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date) {
	self->setMinimumDate(*date);
}

QDate* QCalendarWidget_MaximumDate(const QCalendarWidget* self) {
	return new QDate(self->maximumDate());
}

void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date) {
	self->setMaximumDate(*date);
}

int QCalendarWidget_FirstDayOfWeek(const QCalendarWidget* self) {
	Qt::DayOfWeek _ret = self->firstDayOfWeek();
	return static_cast<int>(_ret);
}

void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek) {
	self->setFirstDayOfWeek(static_cast<Qt::DayOfWeek>(dayOfWeek));
}

bool QCalendarWidget_IsNavigationBarVisible(const QCalendarWidget* self) {
	return self->isNavigationBarVisible();
}

bool QCalendarWidget_IsGridVisible(const QCalendarWidget* self) {
	return self->isGridVisible();
}

QCalendar* QCalendarWidget_Calendar(const QCalendarWidget* self) {
	return new QCalendar(self->calendar());
}

void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

int QCalendarWidget_SelectionMode(const QCalendarWidget* self) {
	QCalendarWidget::SelectionMode _ret = self->selectionMode();
	return static_cast<int>(_ret);
}

void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, int mode) {
	self->setSelectionMode(static_cast<QCalendarWidget::SelectionMode>(mode));
}

int QCalendarWidget_HorizontalHeaderFormat(const QCalendarWidget* self) {
	QCalendarWidget::HorizontalHeaderFormat _ret = self->horizontalHeaderFormat();
	return static_cast<int>(_ret);
}

void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, int format) {
	self->setHorizontalHeaderFormat(static_cast<QCalendarWidget::HorizontalHeaderFormat>(format));
}

int QCalendarWidget_VerticalHeaderFormat(const QCalendarWidget* self) {
	QCalendarWidget::VerticalHeaderFormat _ret = self->verticalHeaderFormat();
	return static_cast<int>(_ret);
}

void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, int format) {
	self->setVerticalHeaderFormat(static_cast<QCalendarWidget::VerticalHeaderFormat>(format));
}

QTextCharFormat* QCalendarWidget_HeaderTextFormat(const QCalendarWidget* self) {
	return new QTextCharFormat(self->headerTextFormat());
}

void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, QTextCharFormat* format) {
	self->setHeaderTextFormat(*format);
}

QTextCharFormat* QCalendarWidget_WeekdayTextFormat(const QCalendarWidget* self, int dayOfWeek) {
	return new QTextCharFormat(self->weekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek)));
}

void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, QTextCharFormat* format) {
	self->setWeekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek), *format);
}

QTextCharFormat* QCalendarWidget_DateTextFormatWithDate(const QCalendarWidget* self, QDate* date) {
	return new QTextCharFormat(self->dateTextFormat(*date));
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
		miqt_exec_callback_QCalendarWidget_SelectionChanged(slot);
	});
}

void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date) {
	self->clicked(*date);
}

void QCalendarWidget_connect_Clicked(QCalendarWidget* self, void* slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(const QDate&)>(&QCalendarWidget::clicked), self, [=](const QDate& date) {
		const QDate& date_ret = date;
		// Cast returned reference into pointer
		QDate* sigval1 = const_cast<QDate*>(&date_ret);
		miqt_exec_callback_QCalendarWidget_Clicked(slot, sigval1);
	});
}

void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date) {
	self->activated(*date);
}

void QCalendarWidget_connect_Activated(QCalendarWidget* self, void* slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(const QDate&)>(&QCalendarWidget::activated), self, [=](const QDate& date) {
		const QDate& date_ret = date;
		// Cast returned reference into pointer
		QDate* sigval1 = const_cast<QDate*>(&date_ret);
		miqt_exec_callback_QCalendarWidget_Activated(slot, sigval1);
	});
}

void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month) {
	self->currentPageChanged(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_connect_CurrentPageChanged(QCalendarWidget* self, void* slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(int, int)>(&QCalendarWidget::currentPageChanged), self, [=](int year, int month) {
		int sigval1 = year;
		int sigval2 = month;
		miqt_exec_callback_QCalendarWidget_CurrentPageChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string* QCalendarWidget_Tr2(const char* s, const char* c) {
	QString _ret = QCalendarWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendarWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCalendarWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendarWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QCalendarWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendarWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCalendarWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCalendarWidget_Delete(QCalendarWidget* self) {
	delete self;
}

