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

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

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

bool QDate_IsNull(const QDate* self) {
	return self->isNull();
}

bool QDate_IsValid(const QDate* self) {
	return self->isValid();
}

int QDate_Year(const QDate* self) {
	return self->year();
}

int QDate_Month(const QDate* self) {
	return self->month();
}

int QDate_Day(const QDate* self) {
	return self->day();
}

int QDate_DayOfWeek(const QDate* self) {
	return self->dayOfWeek();
}

int QDate_DayOfYear(const QDate* self) {
	return self->dayOfYear();
}

int QDate_DaysInMonth(const QDate* self) {
	return self->daysInMonth();
}

int QDate_DaysInYear(const QDate* self) {
	return self->daysInYear();
}

int QDate_WeekNumber(const QDate* self) {
	return self->weekNumber();
}

int QDate_YearWithCal(const QDate* self, QCalendar* cal) {
	return self->year(*cal);
}

int QDate_MonthWithCal(const QDate* self, QCalendar* cal) {
	return self->month(*cal);
}

int QDate_DayWithCal(const QDate* self, QCalendar* cal) {
	return self->day(*cal);
}

int QDate_DayOfWeekWithCal(const QDate* self, QCalendar* cal) {
	return self->dayOfWeek(*cal);
}

int QDate_DayOfYearWithCal(const QDate* self, QCalendar* cal) {
	return self->dayOfYear(*cal);
}

int QDate_DaysInMonthWithCal(const QDate* self, QCalendar* cal) {
	return self->daysInMonth(*cal);
}

int QDate_DaysInYearWithCal(const QDate* self, QCalendar* cal) {
	return self->daysInYear(*cal);
}

QDateTime* QDate_StartOfDay(const QDate* self) {
	return new QDateTime(self->startOfDay());
}

QDateTime* QDate_EndOfDay(const QDate* self) {
	return new QDateTime(self->endOfDay());
}

QDateTime* QDate_StartOfDayWithZone(const QDate* self, QTimeZone* zone) {
	return new QDateTime(self->startOfDay(*zone));
}

QDateTime* QDate_EndOfDayWithZone(const QDate* self, QTimeZone* zone) {
	return new QDateTime(self->endOfDay(*zone));
}

struct miqt_string QDate_ShortMonthName(int month) {
	QString _ret = QDate::shortMonthName(static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_ShortDayName(int weekday) {
	QString _ret = QDate::shortDayName(static_cast<int>(weekday));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_LongMonthName(int month) {
	QString _ret = QDate::longMonthName(static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_LongDayName(int weekday) {
	QString _ret = QDate::longDayName(static_cast<int>(weekday));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_ToString(const QDate* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_ToString2(const QDate* self, int format, QCalendar* cal) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format), *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_ToStringWithFormat(const QDate* self, struct miqt_string format) {
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

struct miqt_string QDate_ToString3(const QDate* self, struct miqt_string format, QCalendar* cal) {
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

bool QDate_SetDate(QDate* self, int year, int month, int day) {
	return self->setDate(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
}

bool QDate_SetDate2(QDate* self, int year, int month, int day, QCalendar* cal) {
	return self->setDate(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day), *cal);
}

void QDate_GetDate(QDate* self, int* year, int* month, int* day) {
	self->getDate(static_cast<int*>(year), static_cast<int*>(month), static_cast<int*>(day));
}

void QDate_GetDate2(const QDate* self, int* year, int* month, int* day) {
	self->getDate(static_cast<int*>(year), static_cast<int*>(month), static_cast<int*>(day));
}

QDate* QDate_AddDays(const QDate* self, long long days) {
	return new QDate(self->addDays(static_cast<qint64>(days)));
}

QDate* QDate_AddMonths(const QDate* self, int months) {
	return new QDate(self->addMonths(static_cast<int>(months)));
}

QDate* QDate_AddYears(const QDate* self, int years) {
	return new QDate(self->addYears(static_cast<int>(years)));
}

QDate* QDate_AddMonths2(const QDate* self, int months, QCalendar* cal) {
	return new QDate(self->addMonths(static_cast<int>(months), *cal));
}

QDate* QDate_AddYears2(const QDate* self, int years, QCalendar* cal) {
	return new QDate(self->addYears(static_cast<int>(years), *cal));
}

long long QDate_DaysTo(const QDate* self, QDate* param1) {
	qint64 _ret = self->daysTo(*param1);
	return static_cast<long long>(_ret);
}

bool QDate_OperatorEqual(const QDate* self, QDate* other) {
	return (*self == *other);
}

bool QDate_OperatorNotEqual(const QDate* self, QDate* other) {
	return (*self != *other);
}

bool QDate_OperatorLesser(const QDate* self, QDate* other) {
	return (*self < *other);
}

bool QDate_OperatorLesserOrEqual(const QDate* self, QDate* other) {
	return (*self <= *other);
}

bool QDate_OperatorGreater(const QDate* self, QDate* other) {
	return (*self > *other);
}

bool QDate_OperatorGreaterOrEqual(const QDate* self, QDate* other) {
	return (*self >= *other);
}

QDate* QDate_CurrentDate() {
	return new QDate(QDate::currentDate());
}

QDate* QDate_FromString(struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QDate(QDate::fromString(s_QString));
}

QDate* QDate_FromString2(struct miqt_string s, struct miqt_string format) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(QDate::fromString(s_QString, format_QString));
}

QDate* QDate_FromString3(struct miqt_string s, struct miqt_string format, QCalendar* cal) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(QDate::fromString(s_QString, format_QString, *cal));
}

bool QDate_IsValid2(int y, int m, int d) {
	return QDate::isValid(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d));
}

bool QDate_IsLeapYear(int year) {
	return QDate::isLeapYear(static_cast<int>(year));
}

QDate* QDate_FromJulianDay(long long jd_) {
	return new QDate(QDate::fromJulianDay(static_cast<qint64>(jd_)));
}

long long QDate_ToJulianDay(const QDate* self) {
	qint64 _ret = self->toJulianDay();
	return static_cast<long long>(_ret);
}

int QDate_WeekNumber1(const QDate* self, int* yearNum) {
	return self->weekNumber(static_cast<int*>(yearNum));
}

QDateTime* QDate_StartOfDay1(const QDate* self, int spec) {
	return new QDateTime(self->startOfDay(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDate_StartOfDay2(const QDate* self, int spec, int offsetSeconds) {
	return new QDateTime(self->startOfDay(static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds)));
}

QDateTime* QDate_EndOfDay1(const QDate* self, int spec) {
	return new QDateTime(self->endOfDay(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDate_EndOfDay2(const QDate* self, int spec, int offsetSeconds) {
	return new QDateTime(self->endOfDay(static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds)));
}

struct miqt_string QDate_ShortMonthName2(int month, int typeVal) {
	QString _ret = QDate::shortMonthName(static_cast<int>(month), static_cast<QDate::MonthNameType>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_ShortDayName2(int weekday, int typeVal) {
	QString _ret = QDate::shortDayName(static_cast<int>(weekday), static_cast<QDate::MonthNameType>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_LongMonthName2(int month, int typeVal) {
	QString _ret = QDate::longMonthName(static_cast<int>(month), static_cast<QDate::MonthNameType>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_LongDayName2(int weekday, int typeVal) {
	QString _ret = QDate::longDayName(static_cast<int>(weekday), static_cast<QDate::MonthNameType>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_ToString1(const QDate* self, int format) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDate* QDate_FromString22(struct miqt_string s, int f) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QDate(QDate::fromString(s_QString, static_cast<Qt::DateFormat>(f)));
}

void QDate_Delete(QDate* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QDate*>( self );
	} else {
		delete self;
	}
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

bool QTime_IsNull(const QTime* self) {
	return self->isNull();
}

bool QTime_IsValid(const QTime* self) {
	return self->isValid();
}

int QTime_Hour(const QTime* self) {
	return self->hour();
}

int QTime_Minute(const QTime* self) {
	return self->minute();
}

int QTime_Second(const QTime* self) {
	return self->second();
}

int QTime_Msec(const QTime* self) {
	return self->msec();
}

struct miqt_string QTime_ToString(const QTime* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTime_ToStringWithFormat(const QTime* self, struct miqt_string format) {
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

bool QTime_SetHMS(QTime* self, int h, int m, int s) {
	return self->setHMS(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s));
}

QTime* QTime_AddSecs(const QTime* self, int secs) {
	return new QTime(self->addSecs(static_cast<int>(secs)));
}

int QTime_SecsTo(const QTime* self, QTime* param1) {
	return self->secsTo(*param1);
}

QTime* QTime_AddMSecs(const QTime* self, int ms) {
	return new QTime(self->addMSecs(static_cast<int>(ms)));
}

int QTime_MsecsTo(const QTime* self, QTime* param1) {
	return self->msecsTo(*param1);
}

bool QTime_OperatorEqual(const QTime* self, QTime* other) {
	return (*self == *other);
}

bool QTime_OperatorNotEqual(const QTime* self, QTime* other) {
	return (*self != *other);
}

bool QTime_OperatorLesser(const QTime* self, QTime* other) {
	return (*self < *other);
}

bool QTime_OperatorLesserOrEqual(const QTime* self, QTime* other) {
	return (*self <= *other);
}

bool QTime_OperatorGreater(const QTime* self, QTime* other) {
	return (*self > *other);
}

bool QTime_OperatorGreaterOrEqual(const QTime* self, QTime* other) {
	return (*self >= *other);
}

QTime* QTime_FromMSecsSinceStartOfDay(int msecs) {
	return new QTime(QTime::fromMSecsSinceStartOfDay(static_cast<int>(msecs)));
}

int QTime_MsecsSinceStartOfDay(const QTime* self) {
	return self->msecsSinceStartOfDay();
}

QTime* QTime_CurrentTime() {
	return new QTime(QTime::currentTime());
}

QTime* QTime_FromString(struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QTime(QTime::fromString(s_QString));
}

QTime* QTime_FromString2(struct miqt_string s, struct miqt_string format) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QTime(QTime::fromString(s_QString, format_QString));
}

bool QTime_IsValid2(int h, int m, int s) {
	return QTime::isValid(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s));
}

void QTime_Start(QTime* self) {
	self->start();
}

int QTime_Restart(QTime* self) {
	return self->restart();
}

int QTime_Elapsed(const QTime* self) {
	return self->elapsed();
}

struct miqt_string QTime_ToString1(const QTime* self, int f) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTime_SetHMS4(QTime* self, int h, int m, int s, int ms) {
	return self->setHMS(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

QTime* QTime_FromString22(struct miqt_string s, int f) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QTime(QTime::fromString(s_QString, static_cast<Qt::DateFormat>(f)));
}

bool QTime_IsValid4(int h, int m, int s, int ms) {
	return QTime::isValid(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

void QTime_Delete(QTime* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTime*>( self );
	} else {
		delete self;
	}
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

void QDateTime_OperatorAssign(QDateTime* self, QDateTime* other) {
	self->operator=(*other);
}

void QDateTime_Swap(QDateTime* self, QDateTime* other) {
	self->swap(*other);
}

bool QDateTime_IsNull(const QDateTime* self) {
	return self->isNull();
}

bool QDateTime_IsValid(const QDateTime* self) {
	return self->isValid();
}

QDate* QDateTime_Date(const QDateTime* self) {
	return new QDate(self->date());
}

QTime* QDateTime_Time(const QDateTime* self) {
	return new QTime(self->time());
}

int QDateTime_TimeSpec(const QDateTime* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<int>(_ret);
}

int QDateTime_OffsetFromUtc(const QDateTime* self) {
	return self->offsetFromUtc();
}

QTimeZone* QDateTime_TimeZone(const QDateTime* self) {
	return new QTimeZone(self->timeZone());
}

struct miqt_string QDateTime_TimeZoneAbbreviation(const QDateTime* self) {
	QString _ret = self->timeZoneAbbreviation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDateTime_IsDaylightTime(const QDateTime* self) {
	return self->isDaylightTime();
}

long long QDateTime_ToMSecsSinceEpoch(const QDateTime* self) {
	qint64 _ret = self->toMSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

long long QDateTime_ToSecsSinceEpoch(const QDateTime* self) {
	qint64 _ret = self->toSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

void QDateTime_SetDate(QDateTime* self, QDate* date) {
	self->setDate(*date);
}

void QDateTime_SetTime(QDateTime* self, QTime* time) {
	self->setTime(*time);
}

void QDateTime_SetTimeSpec(QDateTime* self, int spec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

void QDateTime_SetOffsetFromUtc(QDateTime* self, int offsetSeconds) {
	self->setOffsetFromUtc(static_cast<int>(offsetSeconds));
}

void QDateTime_SetTimeZone(QDateTime* self, QTimeZone* toZone) {
	self->setTimeZone(*toZone);
}

void QDateTime_SetMSecsSinceEpoch(QDateTime* self, long long msecs) {
	self->setMSecsSinceEpoch(static_cast<qint64>(msecs));
}

void QDateTime_SetSecsSinceEpoch(QDateTime* self, long long secs) {
	self->setSecsSinceEpoch(static_cast<qint64>(secs));
}

struct miqt_string QDateTime_ToString(const QDateTime* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTime_ToStringWithFormat(const QDateTime* self, struct miqt_string format) {
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

struct miqt_string QDateTime_ToString2(const QDateTime* self, struct miqt_string format, QCalendar* cal) {
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

QDateTime* QDateTime_AddDays(const QDateTime* self, long long days) {
	return new QDateTime(self->addDays(static_cast<qint64>(days)));
}

QDateTime* QDateTime_AddMonths(const QDateTime* self, int months) {
	return new QDateTime(self->addMonths(static_cast<int>(months)));
}

QDateTime* QDateTime_AddYears(const QDateTime* self, int years) {
	return new QDateTime(self->addYears(static_cast<int>(years)));
}

QDateTime* QDateTime_AddSecs(const QDateTime* self, long long secs) {
	return new QDateTime(self->addSecs(static_cast<qint64>(secs)));
}

QDateTime* QDateTime_AddMSecs(const QDateTime* self, long long msecs) {
	return new QDateTime(self->addMSecs(static_cast<qint64>(msecs)));
}

QDateTime* QDateTime_ToTimeSpec(const QDateTime* self, int spec) {
	return new QDateTime(self->toTimeSpec(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_ToLocalTime(const QDateTime* self) {
	return new QDateTime(self->toLocalTime());
}

QDateTime* QDateTime_ToUTC(const QDateTime* self) {
	return new QDateTime(self->toUTC());
}

QDateTime* QDateTime_ToOffsetFromUtc(const QDateTime* self, int offsetSeconds) {
	return new QDateTime(self->toOffsetFromUtc(static_cast<int>(offsetSeconds)));
}

QDateTime* QDateTime_ToTimeZone(const QDateTime* self, QTimeZone* toZone) {
	return new QDateTime(self->toTimeZone(*toZone));
}

long long QDateTime_DaysTo(const QDateTime* self, QDateTime* param1) {
	qint64 _ret = self->daysTo(*param1);
	return static_cast<long long>(_ret);
}

long long QDateTime_SecsTo(const QDateTime* self, QDateTime* param1) {
	qint64 _ret = self->secsTo(*param1);
	return static_cast<long long>(_ret);
}

long long QDateTime_MsecsTo(const QDateTime* self, QDateTime* param1) {
	qint64 _ret = self->msecsTo(*param1);
	return static_cast<long long>(_ret);
}

bool QDateTime_OperatorEqual(const QDateTime* self, QDateTime* other) {
	return (*self == *other);
}

bool QDateTime_OperatorNotEqual(const QDateTime* self, QDateTime* other) {
	return (*self != *other);
}

bool QDateTime_OperatorLesser(const QDateTime* self, QDateTime* other) {
	return (*self < *other);
}

bool QDateTime_OperatorLesserOrEqual(const QDateTime* self, QDateTime* other) {
	return (*self <= *other);
}

bool QDateTime_OperatorGreater(const QDateTime* self, QDateTime* other) {
	return (*self > *other);
}

bool QDateTime_OperatorGreaterOrEqual(const QDateTime* self, QDateTime* other) {
	return (*self >= *other);
}

void QDateTime_SetUtcOffset(QDateTime* self, int seconds) {
	self->setUtcOffset(static_cast<int>(seconds));
}

int QDateTime_UtcOffset(const QDateTime* self) {
	return self->utcOffset();
}

QDateTime* QDateTime_CurrentDateTime() {
	return new QDateTime(QDateTime::currentDateTime());
}

QDateTime* QDateTime_CurrentDateTimeUtc() {
	return new QDateTime(QDateTime::currentDateTimeUtc());
}

QDateTime* QDateTime_FromString(struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QDateTime(QDateTime::fromString(s_QString));
}

QDateTime* QDateTime_FromString2(struct miqt_string s, struct miqt_string format) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(QDateTime::fromString(s_QString, format_QString));
}

QDateTime* QDateTime_FromString3(struct miqt_string s, struct miqt_string format, QCalendar* cal) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(QDateTime::fromString(s_QString, format_QString, *cal));
}

unsigned int QDateTime_ToTimeT(const QDateTime* self) {
	uint _ret = self->toTime_t();
	return static_cast<unsigned int>(_ret);
}

void QDateTime_SetTimeT(QDateTime* self, unsigned int secsSince1Jan1970UTC) {
	self->setTime_t(static_cast<uint>(secsSince1Jan1970UTC));
}

QDateTime* QDateTime_FromTimeT(unsigned int secsSince1Jan1970UTC) {
	return new QDateTime(QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC)));
}

QDateTime* QDateTime_FromTimeT2(unsigned int secsSince1Jan1970UTC, int spec) {
	return new QDateTime(QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_FromTimeT3(unsigned int secsSince1Jan1970UTC, QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), *timeZone));
}

QDateTime* QDateTime_FromMSecsSinceEpoch(long long msecs) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs)));
}

QDateTime* QDateTime_FromMSecsSinceEpoch2(long long msecs, int spec) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs), static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_FromSecsSinceEpoch(long long secs) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs)));
}

QDateTime* QDateTime_FromMSecsSinceEpoch3(long long msecs, QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs), *timeZone));
}

QDateTime* QDateTime_FromSecsSinceEpoch2(long long secs, QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs), *timeZone));
}

long long QDateTime_CurrentMSecsSinceEpoch() {
	qint64 _ret = QDateTime::currentMSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

long long QDateTime_CurrentSecsSinceEpoch() {
	qint64 _ret = QDateTime::currentSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

struct miqt_string QDateTime_ToString1(const QDateTime* self, int format) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QDateTime_FromString22(struct miqt_string s, int f) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QDateTime(QDateTime::fromString(s_QString, static_cast<Qt::DateFormat>(f)));
}

QDateTime* QDateTime_FromTimeT32(unsigned int secsSince1Jan1970UTC, int spec, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetFromUtc)));
}

QDateTime* QDateTime_FromMSecsSinceEpoch32(long long msecs, int spec, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs), static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetFromUtc)));
}

QDateTime* QDateTime_FromSecsSinceEpoch22(long long secs, int spe) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs), static_cast<Qt::TimeSpec>(spe)));
}

QDateTime* QDateTime_FromSecsSinceEpoch3(long long secs, int spe, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs), static_cast<Qt::TimeSpec>(spe), static_cast<int>(offsetFromUtc)));
}

void QDateTime_Delete(QDateTime* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QDateTime*>( self );
	} else {
		delete self;
	}
}

