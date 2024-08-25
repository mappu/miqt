#include "gen_qdatetime.h"
#include "qdatetime.h"

#include <QCalendar>
#include <QDate>
#include <QDateTime>
#include <QString>
#include <QTime>
#include <QTimeZone>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

bool QDate_IsNull(QDate* self) {
	return self->isNull();
}

bool QDate_IsValid(QDate* self) {
	return self->isValid();
}

int QDate_Year(QDate* self) {
	return self->year();
}

int QDate_Month(QDate* self) {
	return self->month();
}

int QDate_Day(QDate* self) {
	return self->day();
}

int QDate_DayOfWeek(QDate* self) {
	return self->dayOfWeek();
}

int QDate_DayOfYear(QDate* self) {
	return self->dayOfYear();
}

int QDate_DaysInMonth(QDate* self) {
	return self->daysInMonth();
}

int QDate_DaysInYear(QDate* self) {
	return self->daysInYear();
}

int QDate_WeekNumber(QDate* self) {
	return self->weekNumber();
}

int QDate_YearWithCal(QDate* self, QCalendar* cal) {
	return self->year(*cal);
}

int QDate_MonthWithCal(QDate* self, QCalendar* cal) {
	return self->month(*cal);
}

int QDate_DayWithCal(QDate* self, QCalendar* cal) {
	return self->day(*cal);
}

int QDate_DayOfWeekWithCal(QDate* self, QCalendar* cal) {
	return self->dayOfWeek(*cal);
}

int QDate_DayOfYearWithCal(QDate* self, QCalendar* cal) {
	return self->dayOfYear(*cal);
}

int QDate_DaysInMonthWithCal(QDate* self, QCalendar* cal) {
	return self->daysInMonth(*cal);
}

int QDate_DaysInYearWithCal(QDate* self, QCalendar* cal) {
	return self->daysInYear(*cal);
}

QDateTime* QDate_StartOfDay(QDate* self, QTimeZone* zone) {
	QDateTime ret = self->startOfDay(*zone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDate_EndOfDay(QDate* self, QTimeZone* zone) {
	QDateTime ret = self->endOfDay(*zone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

void QDate_ToString(QDate* self, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = self->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_ToString2(QDate* self, const char* format, size_t format_Strlen, QCalendar* cal, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = self->toString(format_QString, *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

void QDate_GetDate2(QDate* self, int* year, int* month, int* day) {
	self->getDate(static_cast<int*>(year), static_cast<int*>(month), static_cast<int*>(day));
}

QDate* QDate_AddDays(QDate* self, int64_t days) {
	QDate ret = self->addDays((qint64)(days));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_AddMonths(QDate* self, int months) {
	QDate ret = self->addMonths(static_cast<int>(months));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_AddYears(QDate* self, int years) {
	QDate ret = self->addYears(static_cast<int>(years));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_AddMonths2(QDate* self, int months, QCalendar* cal) {
	QDate ret = self->addMonths(static_cast<int>(months), *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_AddYears2(QDate* self, int years, QCalendar* cal) {
	QDate ret = self->addYears(static_cast<int>(years), *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

int64_t QDate_DaysTo(QDate* self, QDate* param1) {
	return self->daysTo(*param1);
}

bool QDate_OperatorEqual(QDate* self, QDate* other) {
	return self->operator==(*other);
}

bool QDate_OperatorNotEqual(QDate* self, QDate* other) {
	return self->operator!=(*other);
}

bool QDate_OperatorLesser(QDate* self, QDate* other) {
	return self->operator<(*other);
}

bool QDate_OperatorLesserOrEqual(QDate* self, QDate* other) {
	return self->operator<=(*other);
}

bool QDate_OperatorGreater(QDate* self, QDate* other) {
	return self->operator>(*other);
}

bool QDate_OperatorGreaterOrEqual(QDate* self, QDate* other) {
	return self->operator>=(*other);
}

QDate* QDate_CurrentDate() {
	QDate ret = QDate::currentDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_FromString(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDate ret = QDate::fromString(s_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_FromString2(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDate ret = QDate::fromString(s_QString, format_QString, *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

bool QDate_IsValid2(int y, int m, int d) {
	return QDate::isValid(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d));
}

bool QDate_IsLeapYear(int year) {
	return QDate::isLeapYear(static_cast<int>(year));
}

QDate* QDate_FromJulianDay(int64_t jd_) {
	QDate ret = QDate::fromJulianDay((qint64)(jd_));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

int64_t QDate_ToJulianDay(QDate* self) {
	return self->toJulianDay();
}

int QDate_WeekNumber1(QDate* self, int* yearNum) {
	return self->weekNumber(static_cast<int*>(yearNum));
}

void QDate_Delete(QDate* self) {
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

bool QTime_IsNull(QTime* self) {
	return self->isNull();
}

bool QTime_IsValid(QTime* self) {
	return self->isValid();
}

int QTime_Hour(QTime* self) {
	return self->hour();
}

int QTime_Minute(QTime* self) {
	return self->minute();
}

int QTime_Second(QTime* self) {
	return self->second();
}

int QTime_Msec(QTime* self) {
	return self->msec();
}

void QTime_ToString(QTime* self, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = self->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTime_SetHMS(QTime* self, int h, int m, int s) {
	return self->setHMS(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s));
}

QTime* QTime_AddSecs(QTime* self, int secs) {
	QTime ret = self->addSecs(static_cast<int>(secs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

int QTime_SecsTo(QTime* self, QTime* param1) {
	return self->secsTo(*param1);
}

QTime* QTime_AddMSecs(QTime* self, int ms) {
	QTime ret = self->addMSecs(static_cast<int>(ms));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

int QTime_MsecsTo(QTime* self, QTime* param1) {
	return self->msecsTo(*param1);
}

bool QTime_OperatorEqual(QTime* self, QTime* other) {
	return self->operator==(*other);
}

bool QTime_OperatorNotEqual(QTime* self, QTime* other) {
	return self->operator!=(*other);
}

bool QTime_OperatorLesser(QTime* self, QTime* other) {
	return self->operator<(*other);
}

bool QTime_OperatorLesserOrEqual(QTime* self, QTime* other) {
	return self->operator<=(*other);
}

bool QTime_OperatorGreater(QTime* self, QTime* other) {
	return self->operator>(*other);
}

bool QTime_OperatorGreaterOrEqual(QTime* self, QTime* other) {
	return self->operator>=(*other);
}

QTime* QTime_FromMSecsSinceStartOfDay(int msecs) {
	QTime ret = QTime::fromMSecsSinceStartOfDay(static_cast<int>(msecs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

int QTime_MsecsSinceStartOfDay(QTime* self) {
	return self->msecsSinceStartOfDay();
}

QTime* QTime_CurrentTime() {
	QTime ret = QTime::currentTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QTime* QTime_FromString(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QTime ret = QTime::fromString(s_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
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

int QTime_Elapsed(QTime* self) {
	return self->elapsed();
}

bool QTime_SetHMS4(QTime* self, int h, int m, int s, int ms) {
	return self->setHMS(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

bool QTime_IsValid4(int h, int m, int s, int ms) {
	return QTime::isValid(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

void QTime_Delete(QTime* self) {
	delete self;
}

QDateTime* QDateTime_new(QDate* param1) {
	return new QDateTime(*param1);
}

QDateTime* QDateTime_new2(QDate* date, QTime* time, QTimeZone* timeZone) {
	return new QDateTime(*date, *time, *timeZone);
}

QDateTime* QDateTime_new3(QDateTime* other) {
	return new QDateTime(*other);
}

void QDateTime_OperatorAssign(QDateTime* self, QDateTime* other) {
	self->operator=(*other);
}

void QDateTime_Swap(QDateTime* self, QDateTime* other) {
	self->swap(*other);
}

bool QDateTime_IsNull(QDateTime* self) {
	return self->isNull();
}

bool QDateTime_IsValid(QDateTime* self) {
	return self->isValid();
}

QDate* QDateTime_Date(QDateTime* self) {
	QDate ret = self->date();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QTime* QDateTime_Time(QDateTime* self) {
	QTime ret = self->time();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

int QDateTime_OffsetFromUtc(QDateTime* self) {
	return self->offsetFromUtc();
}

QTimeZone* QDateTime_TimeZone(QDateTime* self) {
	QTimeZone ret = self->timeZone();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTimeZone*>(new QTimeZone(ret));
}

void QDateTime_TimeZoneAbbreviation(QDateTime* self, char** _out, int* _out_Strlen) {
	QString ret = self->timeZoneAbbreviation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QDateTime_IsDaylightTime(QDateTime* self) {
	return self->isDaylightTime();
}

int64_t QDateTime_ToMSecsSinceEpoch(QDateTime* self) {
	return self->toMSecsSinceEpoch();
}

int64_t QDateTime_ToSecsSinceEpoch(QDateTime* self) {
	return self->toSecsSinceEpoch();
}

void QDateTime_SetDate(QDateTime* self, QDate* date) {
	self->setDate(*date);
}

void QDateTime_SetTime(QDateTime* self, QTime* time) {
	self->setTime(*time);
}

void QDateTime_SetOffsetFromUtc(QDateTime* self, int offsetSeconds) {
	self->setOffsetFromUtc(static_cast<int>(offsetSeconds));
}

void QDateTime_SetTimeZone(QDateTime* self, QTimeZone* toZone) {
	self->setTimeZone(*toZone);
}

void QDateTime_SetMSecsSinceEpoch(QDateTime* self, int64_t msecs) {
	self->setMSecsSinceEpoch((qint64)(msecs));
}

void QDateTime_SetSecsSinceEpoch(QDateTime* self, int64_t secs) {
	self->setSecsSinceEpoch((qint64)(secs));
}

void QDateTime_ToString(QDateTime* self, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = self->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateTime_ToString2(QDateTime* self, const char* format, size_t format_Strlen, QCalendar* cal, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = self->toString(format_QString, *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDateTime* QDateTime_AddDays(QDateTime* self, int64_t days) {
	QDateTime ret = self->addDays((qint64)(days));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_AddMonths(QDateTime* self, int months) {
	QDateTime ret = self->addMonths(static_cast<int>(months));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_AddYears(QDateTime* self, int years) {
	QDateTime ret = self->addYears(static_cast<int>(years));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_AddSecs(QDateTime* self, int64_t secs) {
	QDateTime ret = self->addSecs((qint64)(secs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_AddMSecs(QDateTime* self, int64_t msecs) {
	QDateTime ret = self->addMSecs((qint64)(msecs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_ToLocalTime(QDateTime* self) {
	QDateTime ret = self->toLocalTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_ToUTC(QDateTime* self) {
	QDateTime ret = self->toUTC();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_ToOffsetFromUtc(QDateTime* self, int offsetSeconds) {
	QDateTime ret = self->toOffsetFromUtc(static_cast<int>(offsetSeconds));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_ToTimeZone(QDateTime* self, QTimeZone* toZone) {
	QDateTime ret = self->toTimeZone(*toZone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

int64_t QDateTime_DaysTo(QDateTime* self, QDateTime* param1) {
	return self->daysTo(*param1);
}

int64_t QDateTime_SecsTo(QDateTime* self, QDateTime* param1) {
	return self->secsTo(*param1);
}

int64_t QDateTime_MsecsTo(QDateTime* self, QDateTime* param1) {
	return self->msecsTo(*param1);
}

bool QDateTime_OperatorEqual(QDateTime* self, QDateTime* other) {
	return self->operator==(*other);
}

bool QDateTime_OperatorNotEqual(QDateTime* self, QDateTime* other) {
	return self->operator!=(*other);
}

bool QDateTime_OperatorLesser(QDateTime* self, QDateTime* other) {
	return self->operator<(*other);
}

bool QDateTime_OperatorLesserOrEqual(QDateTime* self, QDateTime* other) {
	return self->operator<=(*other);
}

bool QDateTime_OperatorGreater(QDateTime* self, QDateTime* other) {
	return self->operator>(*other);
}

bool QDateTime_OperatorGreaterOrEqual(QDateTime* self, QDateTime* other) {
	return self->operator>=(*other);
}

void QDateTime_SetUtcOffset(QDateTime* self, int seconds) {
	self->setUtcOffset(static_cast<int>(seconds));
}

int QDateTime_UtcOffset(QDateTime* self) {
	return self->utcOffset();
}

QDateTime* QDateTime_CurrentDateTime() {
	QDateTime ret = QDateTime::currentDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_CurrentDateTimeUtc() {
	QDateTime ret = QDateTime::currentDateTimeUtc();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromString(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDateTime ret = QDateTime::fromString(s_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromString2(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDateTime ret = QDateTime::fromString(s_QString, format_QString, *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

unsigned int QDateTime_ToTimeT(QDateTime* self) {
	return self->toTime_t();
}

void QDateTime_SetTimeT(QDateTime* self, unsigned int secsSince1Jan1970UTC) {
	self->setTime_t(static_cast<uint>(secsSince1Jan1970UTC));
}

QDateTime* QDateTime_FromTimeT(unsigned int secsSince1Jan1970UTC) {
	QDateTime ret = QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromTimeT2(unsigned int secsSince1Jan1970UTC, QTimeZone* timeZone) {
	QDateTime ret = QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), *timeZone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromMSecsSinceEpoch(int64_t msecs) {
	QDateTime ret = QDateTime::fromMSecsSinceEpoch((qint64)(msecs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromMSecsSinceEpoch2(int64_t msecs, QTimeZone* timeZone) {
	QDateTime ret = QDateTime::fromMSecsSinceEpoch((qint64)(msecs), *timeZone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromSecsSinceEpoch(int64_t secs, QTimeZone* timeZone) {
	QDateTime ret = QDateTime::fromSecsSinceEpoch((qint64)(secs), *timeZone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

int64_t QDateTime_CurrentMSecsSinceEpoch() {
	return QDateTime::currentMSecsSinceEpoch();
}

int64_t QDateTime_CurrentSecsSinceEpoch() {
	return QDateTime::currentSecsSinceEpoch();
}

void QDateTime_Delete(QDateTime* self) {
	delete self;
}

