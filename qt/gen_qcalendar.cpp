#include <QCalendar>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__YearMonthDay
#include <QDate>
#include <QList>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qcalendar.h"
#include "gen_qcalendar.h"
#include "_cgo_export.h"

QCalendar* QCalendar_new() {
	return new QCalendar();
}

QCalendar* QCalendar_new2(uintptr_t system) {
	return new QCalendar(static_cast<QCalendar::System>(system));
}

bool QCalendar_IsValid(const QCalendar* self) {
	return self->isValid();
}

int QCalendar_DaysInMonth(const QCalendar* self, int month) {
	return self->daysInMonth(static_cast<int>(month));
}

int QCalendar_DaysInYear(const QCalendar* self, int year) {
	return self->daysInYear(static_cast<int>(year));
}

int QCalendar_MonthsInYear(const QCalendar* self, int year) {
	return self->monthsInYear(static_cast<int>(year));
}

bool QCalendar_IsDateValid(const QCalendar* self, int year, int month, int day) {
	return self->isDateValid(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
}

bool QCalendar_IsLeapYear(const QCalendar* self, int year) {
	return self->isLeapYear(static_cast<int>(year));
}

bool QCalendar_IsGregorian(const QCalendar* self) {
	return self->isGregorian();
}

bool QCalendar_IsLunar(const QCalendar* self) {
	return self->isLunar();
}

bool QCalendar_IsLuniSolar(const QCalendar* self) {
	return self->isLuniSolar();
}

bool QCalendar_IsSolar(const QCalendar* self) {
	return self->isSolar();
}

bool QCalendar_IsProleptic(const QCalendar* self) {
	return self->isProleptic();
}

bool QCalendar_HasYearZero(const QCalendar* self) {
	return self->hasYearZero();
}

int QCalendar_MaximumDaysInMonth(const QCalendar* self) {
	return self->maximumDaysInMonth();
}

int QCalendar_MinimumDaysInMonth(const QCalendar* self) {
	return self->minimumDaysInMonth();
}

int QCalendar_MaximumMonthsInYear(const QCalendar* self) {
	return self->maximumMonthsInYear();
}

struct miqt_string* QCalendar_Name(const QCalendar* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDate* QCalendar_DateFromParts(const QCalendar* self, int year, int month, int day) {
	QDate _ret = self->dateFromParts(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(_ret));
}

QDate* QCalendar_DateFromPartsWithParts(const QCalendar* self, QCalendar__YearMonthDay* parts) {
	QDate _ret = self->dateFromParts(*parts);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(_ret));
}

QCalendar__YearMonthDay* QCalendar_PartsFromDate(const QCalendar* self, QDate* date) {
	QCalendar::YearMonthDay _ret = self->partsFromDate(*date);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCalendar::YearMonthDay*>(new QCalendar::YearMonthDay(_ret));
}

int QCalendar_DayOfWeek(const QCalendar* self, QDate* date) {
	return self->dayOfWeek(*date);
}

struct miqt_string* QCalendar_MonthName(const QCalendar* self, QLocale* locale, int month) {
	QString _ret = self->monthName(*locale, static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendar_StandaloneMonthName(const QCalendar* self, QLocale* locale, int month) {
	QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendar_WeekDayName(const QCalendar* self, QLocale* locale, int day) {
	QString _ret = self->weekDayName(*locale, static_cast<int>(day));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendar_StandaloneWeekDayName(const QCalendar* self, QLocale* locale, int day) {
	QString _ret = self->standaloneWeekDayName(*locale, static_cast<int>(day));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QCalendar_AvailableCalendars() {
	QStringList _ret = QCalendar::availableCalendars();
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

int QCalendar_DaysInMonth2(const QCalendar* self, int month, int year) {
	return self->daysInMonth(static_cast<int>(month), static_cast<int>(year));
}

struct miqt_string* QCalendar_MonthName3(const QCalendar* self, QLocale* locale, int month, int year) {
	QString _ret = self->monthName(*locale, static_cast<int>(month), static_cast<int>(year));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendar_MonthName4(const QCalendar* self, QLocale* locale, int month, int year, uintptr_t format) {
	QString _ret = self->monthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendar_StandaloneMonthName3(const QCalendar* self, QLocale* locale, int month, int year) {
	QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendar_StandaloneMonthName4(const QCalendar* self, QLocale* locale, int month, int year, uintptr_t format) {
	QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendar_WeekDayName3(const QCalendar* self, QLocale* locale, int day, uintptr_t format) {
	QString _ret = self->weekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCalendar_StandaloneWeekDayName3(const QCalendar* self, QLocale* locale, int day, uintptr_t format) {
	QString _ret = self->standaloneWeekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCalendar_Delete(QCalendar* self) {
	delete self;
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new() {
	return new QCalendar::YearMonthDay();
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new2(int y) {
	return new QCalendar::YearMonthDay(static_cast<int>(y));
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new3(int y, int m) {
	return new QCalendar::YearMonthDay(static_cast<int>(y), static_cast<int>(m));
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new4(int y, int m, int d) {
	return new QCalendar::YearMonthDay(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d));
}

bool QCalendar__YearMonthDay_IsValid(const QCalendar__YearMonthDay* self) {
	return self->isValid();
}

void QCalendar__YearMonthDay_Delete(QCalendar__YearMonthDay* self) {
	delete self;
}

