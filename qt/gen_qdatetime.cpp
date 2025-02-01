#include <QCalendar>
#include <QDate>
#include <QDateTime>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTime>
#include <QTimeZone>
#include <qdatetime.h>
#include "gen_qdatetime.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QDate* QDate_new() {
	return new QDate();
}

QDate* QDate_new2(int y, int m, int d) {
	return new QDate(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d));
}

QDate* QDate_new3(int y, int m, int d, QCalendar* cal) {
	return new QDate(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d), *cal);
}

QDate* QDate_new4(QDate* param1) {
	return new QDate(*param1);
}

bool QDate_isNull(const QDate* self) {
	return self->isNull();
}

bool QDate_isValid(const QDate* self) {
	return self->isValid();
}

int QDate_year(const QDate* self) {
	return self->year();
}

int QDate_month(const QDate* self) {
	return self->month();
}

int QDate_day(const QDate* self) {
	return self->day();
}

int QDate_dayOfWeek(const QDate* self) {
	return self->dayOfWeek();
}

int QDate_dayOfYear(const QDate* self) {
	return self->dayOfYear();
}

int QDate_daysInMonth(const QDate* self) {
	return self->daysInMonth();
}

int QDate_daysInYear(const QDate* self) {
	return self->daysInYear();
}

int QDate_weekNumber(const QDate* self) {
	return self->weekNumber();
}

int QDate_yearWithCal(const QDate* self, QCalendar* cal) {
	return self->year(*cal);
}

int QDate_monthWithCal(const QDate* self, QCalendar* cal) {
	return self->month(*cal);
}

int QDate_dayWithCal(const QDate* self, QCalendar* cal) {
	return self->day(*cal);
}

int QDate_dayOfWeekWithCal(const QDate* self, QCalendar* cal) {
	return self->dayOfWeek(*cal);
}

int QDate_dayOfYearWithCal(const QDate* self, QCalendar* cal) {
	return self->dayOfYear(*cal);
}

int QDate_daysInMonthWithCal(const QDate* self, QCalendar* cal) {
	return self->daysInMonth(*cal);
}

int QDate_daysInYearWithCal(const QDate* self, QCalendar* cal) {
	return self->daysInYear(*cal);
}

QDateTime* QDate_startOfDay(const QDate* self) {
	return new QDateTime(self->startOfDay());
}

QDateTime* QDate_endOfDay(const QDate* self) {
	return new QDateTime(self->endOfDay());
}

QDateTime* QDate_startOfDayWithZone(const QDate* self, QTimeZone* zone) {
	return new QDateTime(self->startOfDay(*zone));
}

QDateTime* QDate_endOfDayWithZone(const QDate* self, QTimeZone* zone) {
	return new QDateTime(self->endOfDay(*zone));
}

struct miqt_string QDate_shortMonthName(int month) {
	QString _ret = QDate::shortMonthName(static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_shortDayName(int weekday) {
	QString _ret = QDate::shortDayName(static_cast<int>(weekday));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_longMonthName(int month) {
	QString _ret = QDate::longMonthName(static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_longDayName(int weekday) {
	QString _ret = QDate::longDayName(static_cast<int>(weekday));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_toString(const QDate* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_toString2(const QDate* self, int format, QCalendar* cal) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format), *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_toStringWithFormat(const QDate* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_toString3(const QDate* self, struct miqt_string format, QCalendar* cal) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString, *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDate_setDate(QDate* self, int year, int month, int day) {
	return self->setDate(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
}

bool QDate_setDate2(QDate* self, int year, int month, int day, QCalendar* cal) {
	return self->setDate(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day), *cal);
}

void QDate_getDate(QDate* self, int* year, int* month, int* day) {
	self->getDate(static_cast<int*>(year), static_cast<int*>(month), static_cast<int*>(day));
}

void QDate_getDate2(const QDate* self, int* year, int* month, int* day) {
	self->getDate(static_cast<int*>(year), static_cast<int*>(month), static_cast<int*>(day));
}

QDate* QDate_addDays(const QDate* self, long long days) {
	return new QDate(self->addDays(static_cast<qint64>(days)));
}

QDate* QDate_addMonths(const QDate* self, int months) {
	return new QDate(self->addMonths(static_cast<int>(months)));
}

QDate* QDate_addYears(const QDate* self, int years) {
	return new QDate(self->addYears(static_cast<int>(years)));
}

QDate* QDate_addMonths2(const QDate* self, int months, QCalendar* cal) {
	return new QDate(self->addMonths(static_cast<int>(months), *cal));
}

QDate* QDate_addYears2(const QDate* self, int years, QCalendar* cal) {
	return new QDate(self->addYears(static_cast<int>(years), *cal));
}

long long QDate_daysTo(const QDate* self, QDate* param1) {
	qint64 _ret = self->daysTo(*param1);
	return static_cast<long long>(_ret);
}

bool QDate_operatorEqual(const QDate* self, QDate* other) {
	return (*self == *other);
}

bool QDate_operatorNotEqual(const QDate* self, QDate* other) {
	return (*self != *other);
}

bool QDate_operatorLesser(const QDate* self, QDate* other) {
	return (*self < *other);
}

bool QDate_operatorLesserOrEqual(const QDate* self, QDate* other) {
	return (*self <= *other);
}

bool QDate_operatorGreater(const QDate* self, QDate* other) {
	return (*self > *other);
}

bool QDate_operatorGreaterOrEqual(const QDate* self, QDate* other) {
	return (*self >= *other);
}

QDate* QDate_currentDate() {
	return new QDate(QDate::currentDate());
}

QDate* QDate_fromString(struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QDate(QDate::fromString(s_QString));
}

QDate* QDate_fromString2(struct miqt_string s, struct miqt_string format) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(QDate::fromString(s_QString, format_QString));
}

QDate* QDate_fromString3(struct miqt_string s, struct miqt_string format, QCalendar* cal) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(QDate::fromString(s_QString, format_QString, *cal));
}

bool QDate_isValid2(int y, int m, int d) {
	return QDate::isValid(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d));
}

bool QDate_isLeapYear(int year) {
	return QDate::isLeapYear(static_cast<int>(year));
}

QDate* QDate_fromJulianDay(long long jd_) {
	return new QDate(QDate::fromJulianDay(static_cast<qint64>(jd_)));
}

long long QDate_toJulianDay(const QDate* self) {
	qint64 _ret = self->toJulianDay();
	return static_cast<long long>(_ret);
}

int QDate_weekNumber1(const QDate* self, int* yearNum) {
	return self->weekNumber(static_cast<int*>(yearNum));
}

QDateTime* QDate_startOfDay1(const QDate* self, int spec) {
	return new QDateTime(self->startOfDay(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDate_startOfDay2(const QDate* self, int spec, int offsetSeconds) {
	return new QDateTime(self->startOfDay(static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds)));
}

QDateTime* QDate_endOfDay1(const QDate* self, int spec) {
	return new QDateTime(self->endOfDay(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDate_endOfDay2(const QDate* self, int spec, int offsetSeconds) {
	return new QDateTime(self->endOfDay(static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds)));
}

struct miqt_string QDate_shortMonthName2(int month, int type) {
	QString _ret = QDate::shortMonthName(static_cast<int>(month), static_cast<QDate::MonthNameType>(type));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_shortDayName2(int weekday, int type) {
	QString _ret = QDate::shortDayName(static_cast<int>(weekday), static_cast<QDate::MonthNameType>(type));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_longMonthName2(int month, int type) {
	QString _ret = QDate::longMonthName(static_cast<int>(month), static_cast<QDate::MonthNameType>(type));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_longDayName2(int weekday, int type) {
	QString _ret = QDate::longDayName(static_cast<int>(weekday), static_cast<QDate::MonthNameType>(type));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_toString1(const QDate* self, int format) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDate* QDate_fromString22(struct miqt_string s, int f) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QDate(QDate::fromString(s_QString, static_cast<Qt::DateFormat>(f)));
}

void QDate_delete(QDate* self) {
	delete self;
}

QTime* QTime_new() {
	return new QTime();
}

QTime* QTime_new2(int h, int m) {
	return new QTime(static_cast<int>(h), static_cast<int>(m));
}

QTime* QTime_new3(QTime* param1) {
	return new QTime(*param1);
}

QTime* QTime_new4(int h, int m, int s) {
	return new QTime(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s));
}

QTime* QTime_new5(int h, int m, int s, int ms) {
	return new QTime(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

bool QTime_isNull(const QTime* self) {
	return self->isNull();
}

bool QTime_isValid(const QTime* self) {
	return self->isValid();
}

int QTime_hour(const QTime* self) {
	return self->hour();
}

int QTime_minute(const QTime* self) {
	return self->minute();
}

int QTime_second(const QTime* self) {
	return self->second();
}

int QTime_msec(const QTime* self) {
	return self->msec();
}

struct miqt_string QTime_toString(const QTime* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTime_toStringWithFormat(const QTime* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTime_setHMS(QTime* self, int h, int m, int s) {
	return self->setHMS(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s));
}

QTime* QTime_addSecs(const QTime* self, int secs) {
	return new QTime(self->addSecs(static_cast<int>(secs)));
}

int QTime_secsTo(const QTime* self, QTime* param1) {
	return self->secsTo(*param1);
}

QTime* QTime_addMSecs(const QTime* self, int ms) {
	return new QTime(self->addMSecs(static_cast<int>(ms)));
}

int QTime_msecsTo(const QTime* self, QTime* param1) {
	return self->msecsTo(*param1);
}

bool QTime_operatorEqual(const QTime* self, QTime* other) {
	return (*self == *other);
}

bool QTime_operatorNotEqual(const QTime* self, QTime* other) {
	return (*self != *other);
}

bool QTime_operatorLesser(const QTime* self, QTime* other) {
	return (*self < *other);
}

bool QTime_operatorLesserOrEqual(const QTime* self, QTime* other) {
	return (*self <= *other);
}

bool QTime_operatorGreater(const QTime* self, QTime* other) {
	return (*self > *other);
}

bool QTime_operatorGreaterOrEqual(const QTime* self, QTime* other) {
	return (*self >= *other);
}

QTime* QTime_fromMSecsSinceStartOfDay(int msecs) {
	return new QTime(QTime::fromMSecsSinceStartOfDay(static_cast<int>(msecs)));
}

int QTime_msecsSinceStartOfDay(const QTime* self) {
	return self->msecsSinceStartOfDay();
}

QTime* QTime_currentTime() {
	return new QTime(QTime::currentTime());
}

QTime* QTime_fromString(struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QTime(QTime::fromString(s_QString));
}

QTime* QTime_fromString2(struct miqt_string s, struct miqt_string format) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QTime(QTime::fromString(s_QString, format_QString));
}

bool QTime_isValid2(int h, int m, int s) {
	return QTime::isValid(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s));
}

void QTime_start(QTime* self) {
	self->start();
}

int QTime_restart(QTime* self) {
	return self->restart();
}

int QTime_elapsed(const QTime* self) {
	return self->elapsed();
}

struct miqt_string QTime_toString1(const QTime* self, int f) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTime_setHMS4(QTime* self, int h, int m, int s, int ms) {
	return self->setHMS(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

QTime* QTime_fromString22(struct miqt_string s, int f) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QTime(QTime::fromString(s_QString, static_cast<Qt::DateFormat>(f)));
}

bool QTime_isValid4(int h, int m, int s, int ms) {
	return QTime::isValid(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

void QTime_delete(QTime* self) {
	delete self;
}

QDateTime* QDateTime_new(QDate* param1) {
	return new QDateTime(*param1);
}

QDateTime* QDateTime_new2(QDate* param1, QTime* param2) {
	return new QDateTime(*param1, *param2);
}

QDateTime* QDateTime_new3(QDate* date, QTime* time, int spec, int offsetSeconds) {
	return new QDateTime(*date, *time, static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds));
}

QDateTime* QDateTime_new4(QDate* date, QTime* time, QTimeZone* timeZone) {
	return new QDateTime(*date, *time, *timeZone);
}

QDateTime* QDateTime_new5(QDateTime* other) {
	return new QDateTime(*other);
}

QDateTime* QDateTime_new6(QDate* param1, QTime* param2, int spec) {
	return new QDateTime(*param1, *param2, static_cast<Qt::TimeSpec>(spec));
}

void QDateTime_operatorAssign(QDateTime* self, QDateTime* other) {
	self->operator=(*other);
}

void QDateTime_swap(QDateTime* self, QDateTime* other) {
	self->swap(*other);
}

bool QDateTime_isNull(const QDateTime* self) {
	return self->isNull();
}

bool QDateTime_isValid(const QDateTime* self) {
	return self->isValid();
}

QDate* QDateTime_date(const QDateTime* self) {
	return new QDate(self->date());
}

QTime* QDateTime_time(const QDateTime* self) {
	return new QTime(self->time());
}

int QDateTime_timeSpec(const QDateTime* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<int>(_ret);
}

int QDateTime_offsetFromUtc(const QDateTime* self) {
	return self->offsetFromUtc();
}

QTimeZone* QDateTime_timeZone(const QDateTime* self) {
	return new QTimeZone(self->timeZone());
}

struct miqt_string QDateTime_timeZoneAbbreviation(const QDateTime* self) {
	QString _ret = self->timeZoneAbbreviation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDateTime_isDaylightTime(const QDateTime* self) {
	return self->isDaylightTime();
}

long long QDateTime_toMSecsSinceEpoch(const QDateTime* self) {
	qint64 _ret = self->toMSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

long long QDateTime_toSecsSinceEpoch(const QDateTime* self) {
	qint64 _ret = self->toSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

void QDateTime_setDate(QDateTime* self, QDate* date) {
	self->setDate(*date);
}

void QDateTime_setTime(QDateTime* self, QTime* time) {
	self->setTime(*time);
}

void QDateTime_setTimeSpec(QDateTime* self, int spec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

void QDateTime_setOffsetFromUtc(QDateTime* self, int offsetSeconds) {
	self->setOffsetFromUtc(static_cast<int>(offsetSeconds));
}

void QDateTime_setTimeZone(QDateTime* self, QTimeZone* toZone) {
	self->setTimeZone(*toZone);
}

void QDateTime_setMSecsSinceEpoch(QDateTime* self, long long msecs) {
	self->setMSecsSinceEpoch(static_cast<qint64>(msecs));
}

void QDateTime_setSecsSinceEpoch(QDateTime* self, long long secs) {
	self->setSecsSinceEpoch(static_cast<qint64>(secs));
}

struct miqt_string QDateTime_toString(const QDateTime* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTime_toStringWithFormat(const QDateTime* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTime_toString2(const QDateTime* self, struct miqt_string format, QCalendar* cal) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString, *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QDateTime_addDays(const QDateTime* self, long long days) {
	return new QDateTime(self->addDays(static_cast<qint64>(days)));
}

QDateTime* QDateTime_addMonths(const QDateTime* self, int months) {
	return new QDateTime(self->addMonths(static_cast<int>(months)));
}

QDateTime* QDateTime_addYears(const QDateTime* self, int years) {
	return new QDateTime(self->addYears(static_cast<int>(years)));
}

QDateTime* QDateTime_addSecs(const QDateTime* self, long long secs) {
	return new QDateTime(self->addSecs(static_cast<qint64>(secs)));
}

QDateTime* QDateTime_addMSecs(const QDateTime* self, long long msecs) {
	return new QDateTime(self->addMSecs(static_cast<qint64>(msecs)));
}

QDateTime* QDateTime_toTimeSpec(const QDateTime* self, int spec) {
	return new QDateTime(self->toTimeSpec(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_toLocalTime(const QDateTime* self) {
	return new QDateTime(self->toLocalTime());
}

QDateTime* QDateTime_toUTC(const QDateTime* self) {
	return new QDateTime(self->toUTC());
}

QDateTime* QDateTime_toOffsetFromUtc(const QDateTime* self, int offsetSeconds) {
	return new QDateTime(self->toOffsetFromUtc(static_cast<int>(offsetSeconds)));
}

QDateTime* QDateTime_toTimeZone(const QDateTime* self, QTimeZone* toZone) {
	return new QDateTime(self->toTimeZone(*toZone));
}

long long QDateTime_daysTo(const QDateTime* self, QDateTime* param1) {
	qint64 _ret = self->daysTo(*param1);
	return static_cast<long long>(_ret);
}

long long QDateTime_secsTo(const QDateTime* self, QDateTime* param1) {
	qint64 _ret = self->secsTo(*param1);
	return static_cast<long long>(_ret);
}

long long QDateTime_msecsTo(const QDateTime* self, QDateTime* param1) {
	qint64 _ret = self->msecsTo(*param1);
	return static_cast<long long>(_ret);
}

bool QDateTime_operatorEqual(const QDateTime* self, QDateTime* other) {
	return (*self == *other);
}

bool QDateTime_operatorNotEqual(const QDateTime* self, QDateTime* other) {
	return (*self != *other);
}

bool QDateTime_operatorLesser(const QDateTime* self, QDateTime* other) {
	return (*self < *other);
}

bool QDateTime_operatorLesserOrEqual(const QDateTime* self, QDateTime* other) {
	return (*self <= *other);
}

bool QDateTime_operatorGreater(const QDateTime* self, QDateTime* other) {
	return (*self > *other);
}

bool QDateTime_operatorGreaterOrEqual(const QDateTime* self, QDateTime* other) {
	return (*self >= *other);
}

void QDateTime_setUtcOffset(QDateTime* self, int seconds) {
	self->setUtcOffset(static_cast<int>(seconds));
}

int QDateTime_utcOffset(const QDateTime* self) {
	return self->utcOffset();
}

QDateTime* QDateTime_currentDateTime() {
	return new QDateTime(QDateTime::currentDateTime());
}

QDateTime* QDateTime_currentDateTimeUtc() {
	return new QDateTime(QDateTime::currentDateTimeUtc());
}

QDateTime* QDateTime_fromString(struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QDateTime(QDateTime::fromString(s_QString));
}

QDateTime* QDateTime_fromString2(struct miqt_string s, struct miqt_string format) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(QDateTime::fromString(s_QString, format_QString));
}

QDateTime* QDateTime_fromString3(struct miqt_string s, struct miqt_string format, QCalendar* cal) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(QDateTime::fromString(s_QString, format_QString, *cal));
}

unsigned int QDateTime_toTimeT(const QDateTime* self) {
	uint _ret = self->toTime_t();
	return static_cast<unsigned int>(_ret);
}

void QDateTime_setTimeT(QDateTime* self, unsigned int secsSince1Jan1970UTC) {
	self->setTime_t(static_cast<uint>(secsSince1Jan1970UTC));
}

QDateTime* QDateTime_fromTimeT(unsigned int secsSince1Jan1970UTC) {
	return new QDateTime(QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC)));
}

QDateTime* QDateTime_fromTimeT2(unsigned int secsSince1Jan1970UTC, int spec) {
	return new QDateTime(QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_fromTimeT3(unsigned int secsSince1Jan1970UTC, QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), *timeZone));
}

QDateTime* QDateTime_fromMSecsSinceEpoch(long long msecs) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs)));
}

QDateTime* QDateTime_fromMSecsSinceEpoch2(long long msecs, int spec) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs), static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_fromSecsSinceEpoch(long long secs) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs)));
}

QDateTime* QDateTime_fromMSecsSinceEpoch3(long long msecs, QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs), *timeZone));
}

QDateTime* QDateTime_fromSecsSinceEpoch2(long long secs, QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs), *timeZone));
}

long long QDateTime_currentMSecsSinceEpoch() {
	qint64 _ret = QDateTime::currentMSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

long long QDateTime_currentSecsSinceEpoch() {
	qint64 _ret = QDateTime::currentSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

struct miqt_string QDateTime_toString1(const QDateTime* self, int format) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QDateTime_fromString22(struct miqt_string s, int f) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QDateTime(QDateTime::fromString(s_QString, static_cast<Qt::DateFormat>(f)));
}

QDateTime* QDateTime_fromTimeT32(unsigned int secsSince1Jan1970UTC, int spec, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetFromUtc)));
}

QDateTime* QDateTime_fromMSecsSinceEpoch32(long long msecs, int spec, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs), static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetFromUtc)));
}

QDateTime* QDateTime_fromSecsSinceEpoch22(long long secs, int spe) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs), static_cast<Qt::TimeSpec>(spe)));
}

QDateTime* QDateTime_fromSecsSinceEpoch3(long long secs, int spe, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs), static_cast<Qt::TimeSpec>(spe), static_cast<int>(offsetFromUtc)));
}

void QDateTime_delete(QDateTime* self) {
	delete self;
}

