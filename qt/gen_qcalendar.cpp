#include <QCalendar>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__YearMonthDay
#include <QDate>
#include <QList>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcalendar.h>
#include "gen_qcalendar.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCalendar* QCalendar_new() {
	return new QCalendar();
}

QCalendar* QCalendar_new2(int system) {
	return new QCalendar(static_cast<QCalendar::System>(system));
}

bool QCalendar_isValid(const QCalendar* self) {
	return self->isValid();
}

int QCalendar_daysInMonth(const QCalendar* self, int month) {
	return self->daysInMonth(static_cast<int>(month));
}

int QCalendar_daysInYear(const QCalendar* self, int year) {
	return self->daysInYear(static_cast<int>(year));
}

int QCalendar_monthsInYear(const QCalendar* self, int year) {
	return self->monthsInYear(static_cast<int>(year));
}

bool QCalendar_isDateValid(const QCalendar* self, int year, int month, int day) {
	return self->isDateValid(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
}

bool QCalendar_isLeapYear(const QCalendar* self, int year) {
	return self->isLeapYear(static_cast<int>(year));
}

bool QCalendar_isGregorian(const QCalendar* self) {
	return self->isGregorian();
}

bool QCalendar_isLunar(const QCalendar* self) {
	return self->isLunar();
}

bool QCalendar_isLuniSolar(const QCalendar* self) {
	return self->isLuniSolar();
}

bool QCalendar_isSolar(const QCalendar* self) {
	return self->isSolar();
}

bool QCalendar_isProleptic(const QCalendar* self) {
	return self->isProleptic();
}

bool QCalendar_hasYearZero(const QCalendar* self) {
	return self->hasYearZero();
}

int QCalendar_maximumDaysInMonth(const QCalendar* self) {
	return self->maximumDaysInMonth();
}

int QCalendar_minimumDaysInMonth(const QCalendar* self) {
	return self->minimumDaysInMonth();
}

int QCalendar_maximumMonthsInYear(const QCalendar* self) {
	return self->maximumMonthsInYear();
}

struct miqt_string QCalendar_name(const QCalendar* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDate* QCalendar_dateFromParts(const QCalendar* self, int year, int month, int day) {
	return new QDate(self->dateFromParts(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day)));
}

QDate* QCalendar_dateFromPartsWithParts(const QCalendar* self, QCalendar__YearMonthDay* parts) {
	return new QDate(self->dateFromParts(*parts));
}

QCalendar__YearMonthDay* QCalendar_partsFromDate(const QCalendar* self, QDate* date) {
	return new QCalendar::YearMonthDay(self->partsFromDate(*date));
}

int QCalendar_dayOfWeek(const QCalendar* self, QDate* date) {
	return self->dayOfWeek(*date);
}

struct miqt_string QCalendar_monthName(const QCalendar* self, QLocale* locale, int month) {
	QString _ret = self->monthName(*locale, static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneMonthName(const QCalendar* self, QLocale* locale, int month) {
	QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_weekDayName(const QCalendar* self, QLocale* locale, int day) {
	QString _ret = self->weekDayName(*locale, static_cast<int>(day));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneWeekDayName(const QCalendar* self, QLocale* locale, int day) {
	QString _ret = self->standaloneWeekDayName(*locale, static_cast<int>(day));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCalendar_availableCalendars() {
	QStringList _ret = QCalendar::availableCalendars();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QCalendar_daysInMonth2(const QCalendar* self, int month, int year) {
	return self->daysInMonth(static_cast<int>(month), static_cast<int>(year));
}

struct miqt_string QCalendar_monthName3(const QCalendar* self, QLocale* locale, int month, int year) {
	QString _ret = self->monthName(*locale, static_cast<int>(month), static_cast<int>(year));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_monthName4(const QCalendar* self, QLocale* locale, int month, int year, int format) {
	QString _ret = self->monthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneMonthName3(const QCalendar* self, QLocale* locale, int month, int year) {
	QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneMonthName4(const QCalendar* self, QLocale* locale, int month, int year, int format) {
	QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_weekDayName3(const QCalendar* self, QLocale* locale, int day, int format) {
	QString _ret = self->weekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneWeekDayName3(const QCalendar* self, QLocale* locale, int day, int format) {
	QString _ret = self->standaloneWeekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCalendar_delete(QCalendar* self) {
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

bool QCalendar__YearMonthDay_isValid(const QCalendar__YearMonthDay* self) {
	return self->isValid();
}

void QCalendar__YearMonthDay_delete(QCalendar__YearMonthDay* self) {
	delete self;
}

