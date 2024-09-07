#include <QCalendar>
#include <QDate>
#include <QDateTime>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTime>
#include <QTimeZone>
#include "qdatetime.h"

#include "gen_qdatetime.h"

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
	return const_cast<const QDate*>(self)->isNull();
}

bool QDate_IsValid(QDate* self) {
	return const_cast<const QDate*>(self)->isValid();
}

int QDate_Year(QDate* self) {
	return const_cast<const QDate*>(self)->year();
}

int QDate_Month(QDate* self) {
	return const_cast<const QDate*>(self)->month();
}

int QDate_Day(QDate* self) {
	return const_cast<const QDate*>(self)->day();
}

int QDate_DayOfWeek(QDate* self) {
	return const_cast<const QDate*>(self)->dayOfWeek();
}

int QDate_DayOfYear(QDate* self) {
	return const_cast<const QDate*>(self)->dayOfYear();
}

int QDate_DaysInMonth(QDate* self) {
	return const_cast<const QDate*>(self)->daysInMonth();
}

int QDate_DaysInYear(QDate* self) {
	return const_cast<const QDate*>(self)->daysInYear();
}

int QDate_WeekNumber(QDate* self) {
	return const_cast<const QDate*>(self)->weekNumber();
}

int QDate_YearWithCal(QDate* self, QCalendar* cal) {
	return const_cast<const QDate*>(self)->year(*cal);
}

int QDate_MonthWithCal(QDate* self, QCalendar* cal) {
	return const_cast<const QDate*>(self)->month(*cal);
}

int QDate_DayWithCal(QDate* self, QCalendar* cal) {
	return const_cast<const QDate*>(self)->day(*cal);
}

int QDate_DayOfWeekWithCal(QDate* self, QCalendar* cal) {
	return const_cast<const QDate*>(self)->dayOfWeek(*cal);
}

int QDate_DayOfYearWithCal(QDate* self, QCalendar* cal) {
	return const_cast<const QDate*>(self)->dayOfYear(*cal);
}

int QDate_DaysInMonthWithCal(QDate* self, QCalendar* cal) {
	return const_cast<const QDate*>(self)->daysInMonth(*cal);
}

int QDate_DaysInYearWithCal(QDate* self, QCalendar* cal) {
	return const_cast<const QDate*>(self)->daysInYear(*cal);
}

QDateTime* QDate_StartOfDay(QDate* self) {
	QDateTime ret = const_cast<const QDate*>(self)->startOfDay();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDate_EndOfDay(QDate* self) {
	QDateTime ret = const_cast<const QDate*>(self)->endOfDay();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDate_StartOfDayWithZone(QDate* self, QTimeZone* zone) {
	QDateTime ret = const_cast<const QDate*>(self)->startOfDay(*zone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDate_EndOfDayWithZone(QDate* self, QTimeZone* zone) {
	QDateTime ret = const_cast<const QDate*>(self)->endOfDay(*zone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

void QDate_ShortMonthName(int month, char** _out, int* _out_Strlen) {
	QString ret = QDate::shortMonthName(static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_ShortDayName(int weekday, char** _out, int* _out_Strlen) {
	QString ret = QDate::shortDayName(static_cast<int>(weekday));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_LongMonthName(int month, char** _out, int* _out_Strlen) {
	QString ret = QDate::longMonthName(static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_LongDayName(int weekday, char** _out, int* _out_Strlen) {
	QString ret = QDate::longDayName(static_cast<int>(weekday));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_ToString(QDate* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QDate*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_ToString2(QDate* self, uintptr_t format, QCalendar* cal, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QDate*>(self)->toString(static_cast<Qt::DateFormat>(format), *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_ToStringWithFormat(QDate* self, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = const_cast<const QDate*>(self)->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_ToString3(QDate* self, const char* format, size_t format_Strlen, QCalendar* cal, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = const_cast<const QDate*>(self)->toString(format_QString, *cal);
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
	const_cast<const QDate*>(self)->getDate(static_cast<int*>(year), static_cast<int*>(month), static_cast<int*>(day));
}

QDate* QDate_AddDays(QDate* self, long long days) {
	QDate ret = const_cast<const QDate*>(self)->addDays(static_cast<qint64>(days));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_AddMonths(QDate* self, int months) {
	QDate ret = const_cast<const QDate*>(self)->addMonths(static_cast<int>(months));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_AddYears(QDate* self, int years) {
	QDate ret = const_cast<const QDate*>(self)->addYears(static_cast<int>(years));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_AddMonths2(QDate* self, int months, QCalendar* cal) {
	QDate ret = const_cast<const QDate*>(self)->addMonths(static_cast<int>(months), *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_AddYears2(QDate* self, int years, QCalendar* cal) {
	QDate ret = const_cast<const QDate*>(self)->addYears(static_cast<int>(years), *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

long long QDate_DaysTo(QDate* self, QDate* param1) {
	return const_cast<const QDate*>(self)->daysTo(*param1);
}

bool QDate_OperatorEqual(QDate* self, QDate* other) {
	return const_cast<const QDate*>(self)->operator==(*other);
}

bool QDate_OperatorNotEqual(QDate* self, QDate* other) {
	return const_cast<const QDate*>(self)->operator!=(*other);
}

bool QDate_OperatorLesser(QDate* self, QDate* other) {
	return const_cast<const QDate*>(self)->operator<(*other);
}

bool QDate_OperatorLesserOrEqual(QDate* self, QDate* other) {
	return const_cast<const QDate*>(self)->operator<=(*other);
}

bool QDate_OperatorGreater(QDate* self, QDate* other) {
	return const_cast<const QDate*>(self)->operator>(*other);
}

bool QDate_OperatorGreaterOrEqual(QDate* self, QDate* other) {
	return const_cast<const QDate*>(self)->operator>=(*other);
}

QDate* QDate_CurrentDate() {
	QDate ret = QDate::currentDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_FromString(const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QDate ret = QDate::fromString(s_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_FromString2(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDate ret = QDate::fromString(s_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QDate_FromString3(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
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

QDate* QDate_FromJulianDay(long long jd_) {
	QDate ret = QDate::fromJulianDay(static_cast<qint64>(jd_));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

long long QDate_ToJulianDay(QDate* self) {
	return const_cast<const QDate*>(self)->toJulianDay();
}

int QDate_WeekNumber1(QDate* self, int* yearNum) {
	return const_cast<const QDate*>(self)->weekNumber(static_cast<int*>(yearNum));
}

QDateTime* QDate_StartOfDay1(QDate* self, uintptr_t spec) {
	QDateTime ret = const_cast<const QDate*>(self)->startOfDay(static_cast<Qt::TimeSpec>(spec));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDate_StartOfDay2(QDate* self, uintptr_t spec, int offsetSeconds) {
	QDateTime ret = const_cast<const QDate*>(self)->startOfDay(static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDate_EndOfDay1(QDate* self, uintptr_t spec) {
	QDateTime ret = const_cast<const QDate*>(self)->endOfDay(static_cast<Qt::TimeSpec>(spec));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDate_EndOfDay2(QDate* self, uintptr_t spec, int offsetSeconds) {
	QDateTime ret = const_cast<const QDate*>(self)->endOfDay(static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

void QDate_ShortMonthName2(int month, uintptr_t typeVal, char** _out, int* _out_Strlen) {
	QString ret = QDate::shortMonthName(static_cast<int>(month), static_cast<QDate::MonthNameType>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_ShortDayName2(int weekday, uintptr_t typeVal, char** _out, int* _out_Strlen) {
	QString ret = QDate::shortDayName(static_cast<int>(weekday), static_cast<QDate::MonthNameType>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_LongMonthName2(int month, uintptr_t typeVal, char** _out, int* _out_Strlen) {
	QString ret = QDate::longMonthName(static_cast<int>(month), static_cast<QDate::MonthNameType>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_LongDayName2(int weekday, uintptr_t typeVal, char** _out, int* _out_Strlen) {
	QString ret = QDate::longDayName(static_cast<int>(weekday), static_cast<QDate::MonthNameType>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDate_ToString1(QDate* self, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QDate*>(self)->toString(static_cast<Qt::DateFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDate* QDate_FromString22(const char* s, size_t s_Strlen, uintptr_t f) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QDate ret = QDate::fromString(s_QString, static_cast<Qt::DateFormat>(f));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
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
	return const_cast<const QTime*>(self)->isNull();
}

bool QTime_IsValid(QTime* self) {
	return const_cast<const QTime*>(self)->isValid();
}

int QTime_Hour(QTime* self) {
	return const_cast<const QTime*>(self)->hour();
}

int QTime_Minute(QTime* self) {
	return const_cast<const QTime*>(self)->minute();
}

int QTime_Second(QTime* self) {
	return const_cast<const QTime*>(self)->second();
}

int QTime_Msec(QTime* self) {
	return const_cast<const QTime*>(self)->msec();
}

void QTime_ToString(QTime* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTime*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTime_ToStringWithFormat(QTime* self, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = const_cast<const QTime*>(self)->toString(format_QString);
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
	QTime ret = const_cast<const QTime*>(self)->addSecs(static_cast<int>(secs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

int QTime_SecsTo(QTime* self, QTime* param1) {
	return const_cast<const QTime*>(self)->secsTo(*param1);
}

QTime* QTime_AddMSecs(QTime* self, int ms) {
	QTime ret = const_cast<const QTime*>(self)->addMSecs(static_cast<int>(ms));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

int QTime_MsecsTo(QTime* self, QTime* param1) {
	return const_cast<const QTime*>(self)->msecsTo(*param1);
}

bool QTime_OperatorEqual(QTime* self, QTime* other) {
	return const_cast<const QTime*>(self)->operator==(*other);
}

bool QTime_OperatorNotEqual(QTime* self, QTime* other) {
	return const_cast<const QTime*>(self)->operator!=(*other);
}

bool QTime_OperatorLesser(QTime* self, QTime* other) {
	return const_cast<const QTime*>(self)->operator<(*other);
}

bool QTime_OperatorLesserOrEqual(QTime* self, QTime* other) {
	return const_cast<const QTime*>(self)->operator<=(*other);
}

bool QTime_OperatorGreater(QTime* self, QTime* other) {
	return const_cast<const QTime*>(self)->operator>(*other);
}

bool QTime_OperatorGreaterOrEqual(QTime* self, QTime* other) {
	return const_cast<const QTime*>(self)->operator>=(*other);
}

QTime* QTime_FromMSecsSinceStartOfDay(int msecs) {
	QTime ret = QTime::fromMSecsSinceStartOfDay(static_cast<int>(msecs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

int QTime_MsecsSinceStartOfDay(QTime* self) {
	return const_cast<const QTime*>(self)->msecsSinceStartOfDay();
}

QTime* QTime_CurrentTime() {
	QTime ret = QTime::currentTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QTime* QTime_FromString(const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QTime ret = QTime::fromString(s_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QTime* QTime_FromString2(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen) {
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
	return const_cast<const QTime*>(self)->elapsed();
}

void QTime_ToString1(QTime* self, uintptr_t f, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTime*>(self)->toString(static_cast<Qt::DateFormat>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTime_SetHMS4(QTime* self, int h, int m, int s, int ms) {
	return self->setHMS(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

QTime* QTime_FromString22(const char* s, size_t s_Strlen, uintptr_t f) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QTime ret = QTime::fromString(s_QString, static_cast<Qt::DateFormat>(f));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
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

QDateTime* QDateTime_new2(QDate* param1, QTime* param2) {
	return new QDateTime(*param1, *param2);
}

QDateTime* QDateTime_new3(QDate* date, QTime* time, uintptr_t spec, int offsetSeconds) {
	return new QDateTime(*date, *time, static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds));
}

QDateTime* QDateTime_new4(QDate* date, QTime* time, QTimeZone* timeZone) {
	return new QDateTime(*date, *time, *timeZone);
}

QDateTime* QDateTime_new5(QDateTime* other) {
	return new QDateTime(*other);
}

QDateTime* QDateTime_new6(QDate* param1, QTime* param2, uintptr_t spec) {
	return new QDateTime(*param1, *param2, static_cast<Qt::TimeSpec>(spec));
}

void QDateTime_OperatorAssign(QDateTime* self, QDateTime* other) {
	self->operator=(*other);
}

void QDateTime_Swap(QDateTime* self, QDateTime* other) {
	self->swap(*other);
}

bool QDateTime_IsNull(QDateTime* self) {
	return const_cast<const QDateTime*>(self)->isNull();
}

bool QDateTime_IsValid(QDateTime* self) {
	return const_cast<const QDateTime*>(self)->isValid();
}

QDate* QDateTime_Date(QDateTime* self) {
	QDate ret = const_cast<const QDateTime*>(self)->date();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QTime* QDateTime_Time(QDateTime* self) {
	QTime ret = const_cast<const QDateTime*>(self)->time();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

uintptr_t QDateTime_TimeSpec(QDateTime* self) {
	Qt::TimeSpec ret = const_cast<const QDateTime*>(self)->timeSpec();
	return static_cast<uintptr_t>(ret);
}

int QDateTime_OffsetFromUtc(QDateTime* self) {
	return const_cast<const QDateTime*>(self)->offsetFromUtc();
}

QTimeZone* QDateTime_TimeZone(QDateTime* self) {
	QTimeZone ret = const_cast<const QDateTime*>(self)->timeZone();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTimeZone*>(new QTimeZone(ret));
}

void QDateTime_TimeZoneAbbreviation(QDateTime* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QDateTime*>(self)->timeZoneAbbreviation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QDateTime_IsDaylightTime(QDateTime* self) {
	return const_cast<const QDateTime*>(self)->isDaylightTime();
}

long long QDateTime_ToMSecsSinceEpoch(QDateTime* self) {
	return const_cast<const QDateTime*>(self)->toMSecsSinceEpoch();
}

long long QDateTime_ToSecsSinceEpoch(QDateTime* self) {
	return const_cast<const QDateTime*>(self)->toSecsSinceEpoch();
}

void QDateTime_SetDate(QDateTime* self, QDate* date) {
	self->setDate(*date);
}

void QDateTime_SetTime(QDateTime* self, QTime* time) {
	self->setTime(*time);
}

void QDateTime_SetTimeSpec(QDateTime* self, uintptr_t spec) {
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

void QDateTime_ToString(QDateTime* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QDateTime*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateTime_ToStringWithFormat(QDateTime* self, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = const_cast<const QDateTime*>(self)->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDateTime_ToString2(QDateTime* self, const char* format, size_t format_Strlen, QCalendar* cal, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = const_cast<const QDateTime*>(self)->toString(format_QString, *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDateTime* QDateTime_AddDays(QDateTime* self, long long days) {
	QDateTime ret = const_cast<const QDateTime*>(self)->addDays(static_cast<qint64>(days));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_AddMonths(QDateTime* self, int months) {
	QDateTime ret = const_cast<const QDateTime*>(self)->addMonths(static_cast<int>(months));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_AddYears(QDateTime* self, int years) {
	QDateTime ret = const_cast<const QDateTime*>(self)->addYears(static_cast<int>(years));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_AddSecs(QDateTime* self, long long secs) {
	QDateTime ret = const_cast<const QDateTime*>(self)->addSecs(static_cast<qint64>(secs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_AddMSecs(QDateTime* self, long long msecs) {
	QDateTime ret = const_cast<const QDateTime*>(self)->addMSecs(static_cast<qint64>(msecs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_ToTimeSpec(QDateTime* self, uintptr_t spec) {
	QDateTime ret = const_cast<const QDateTime*>(self)->toTimeSpec(static_cast<Qt::TimeSpec>(spec));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_ToLocalTime(QDateTime* self) {
	QDateTime ret = const_cast<const QDateTime*>(self)->toLocalTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_ToUTC(QDateTime* self) {
	QDateTime ret = const_cast<const QDateTime*>(self)->toUTC();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_ToOffsetFromUtc(QDateTime* self, int offsetSeconds) {
	QDateTime ret = const_cast<const QDateTime*>(self)->toOffsetFromUtc(static_cast<int>(offsetSeconds));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_ToTimeZone(QDateTime* self, QTimeZone* toZone) {
	QDateTime ret = const_cast<const QDateTime*>(self)->toTimeZone(*toZone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

long long QDateTime_DaysTo(QDateTime* self, QDateTime* param1) {
	return const_cast<const QDateTime*>(self)->daysTo(*param1);
}

long long QDateTime_SecsTo(QDateTime* self, QDateTime* param1) {
	return const_cast<const QDateTime*>(self)->secsTo(*param1);
}

long long QDateTime_MsecsTo(QDateTime* self, QDateTime* param1) {
	return const_cast<const QDateTime*>(self)->msecsTo(*param1);
}

bool QDateTime_OperatorEqual(QDateTime* self, QDateTime* other) {
	return const_cast<const QDateTime*>(self)->operator==(*other);
}

bool QDateTime_OperatorNotEqual(QDateTime* self, QDateTime* other) {
	return const_cast<const QDateTime*>(self)->operator!=(*other);
}

bool QDateTime_OperatorLesser(QDateTime* self, QDateTime* other) {
	return const_cast<const QDateTime*>(self)->operator<(*other);
}

bool QDateTime_OperatorLesserOrEqual(QDateTime* self, QDateTime* other) {
	return const_cast<const QDateTime*>(self)->operator<=(*other);
}

bool QDateTime_OperatorGreater(QDateTime* self, QDateTime* other) {
	return const_cast<const QDateTime*>(self)->operator>(*other);
}

bool QDateTime_OperatorGreaterOrEqual(QDateTime* self, QDateTime* other) {
	return const_cast<const QDateTime*>(self)->operator>=(*other);
}

void QDateTime_SetUtcOffset(QDateTime* self, int seconds) {
	self->setUtcOffset(static_cast<int>(seconds));
}

int QDateTime_UtcOffset(QDateTime* self) {
	return const_cast<const QDateTime*>(self)->utcOffset();
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

QDateTime* QDateTime_FromString(const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QDateTime ret = QDateTime::fromString(s_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromString2(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDateTime ret = QDateTime::fromString(s_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromString3(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDateTime ret = QDateTime::fromString(s_QString, format_QString, *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

unsigned int QDateTime_ToTimeT(QDateTime* self) {
	return const_cast<const QDateTime*>(self)->toTime_t();
}

void QDateTime_SetTimeT(QDateTime* self, unsigned int secsSince1Jan1970UTC) {
	self->setTime_t(static_cast<uint>(secsSince1Jan1970UTC));
}

QDateTime* QDateTime_FromTimeT(unsigned int secsSince1Jan1970UTC) {
	QDateTime ret = QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromTimeT2(unsigned int secsSince1Jan1970UTC, uintptr_t spec) {
	QDateTime ret = QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), static_cast<Qt::TimeSpec>(spec));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromTimeT3(unsigned int secsSince1Jan1970UTC, QTimeZone* timeZone) {
	QDateTime ret = QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), *timeZone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromMSecsSinceEpoch(long long msecs) {
	QDateTime ret = QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromMSecsSinceEpoch2(long long msecs, uintptr_t spec) {
	QDateTime ret = QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs), static_cast<Qt::TimeSpec>(spec));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromSecsSinceEpoch(long long secs) {
	QDateTime ret = QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromMSecsSinceEpoch3(long long msecs, QTimeZone* timeZone) {
	QDateTime ret = QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs), *timeZone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromSecsSinceEpoch2(long long secs, QTimeZone* timeZone) {
	QDateTime ret = QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs), *timeZone);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

long long QDateTime_CurrentMSecsSinceEpoch() {
	return QDateTime::currentMSecsSinceEpoch();
}

long long QDateTime_CurrentSecsSinceEpoch() {
	return QDateTime::currentSecsSinceEpoch();
}

void QDateTime_ToString1(QDateTime* self, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QDateTime*>(self)->toString(static_cast<Qt::DateFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDateTime* QDateTime_FromString22(const char* s, size_t s_Strlen, uintptr_t f) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QDateTime ret = QDateTime::fromString(s_QString, static_cast<Qt::DateFormat>(f));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromTimeT32(unsigned int secsSince1Jan1970UTC, uintptr_t spec, int offsetFromUtc) {
	QDateTime ret = QDateTime::fromTime_t(static_cast<uint>(secsSince1Jan1970UTC), static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetFromUtc));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromMSecsSinceEpoch32(long long msecs, uintptr_t spec, int offsetFromUtc) {
	QDateTime ret = QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(msecs), static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetFromUtc));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromSecsSinceEpoch22(long long secs, uintptr_t spe) {
	QDateTime ret = QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs), static_cast<Qt::TimeSpec>(spe));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QDateTime_FromSecsSinceEpoch3(long long secs, uintptr_t spe, int offsetFromUtc) {
	QDateTime ret = QDateTime::fromSecsSinceEpoch(static_cast<qint64>(secs), static_cast<Qt::TimeSpec>(spe), static_cast<int>(offsetFromUtc));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

void QDateTime_Delete(QDateTime* self) {
	delete self;
}

