#pragma once
#ifndef MIQT_QT_GEN_QDATETIME_H
#define MIQT_QT_GEN_QDATETIME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCalendar;
class QDate;
class QDateTime;
class QTime;
class QTimeZone;
#else
typedef struct QCalendar QCalendar;
typedef struct QDate QDate;
typedef struct QDateTime QDateTime;
typedef struct QTime QTime;
typedef struct QTimeZone QTimeZone;
#endif

QDate* QDate_new();
QDate* QDate_new2(int y, int m, int d);
QDate* QDate_new3(int y, int m, int d, QCalendar* cal);
QDate* QDate_new4(QDate* param1);
bool QDate_isNull(const QDate* self);
bool QDate_isValid(const QDate* self);
int QDate_year(const QDate* self);
int QDate_month(const QDate* self);
int QDate_day(const QDate* self);
int QDate_dayOfWeek(const QDate* self);
int QDate_dayOfYear(const QDate* self);
int QDate_daysInMonth(const QDate* self);
int QDate_daysInYear(const QDate* self);
int QDate_weekNumber(const QDate* self);
int QDate_yearWithCal(const QDate* self, QCalendar* cal);
int QDate_monthWithCal(const QDate* self, QCalendar* cal);
int QDate_dayWithCal(const QDate* self, QCalendar* cal);
int QDate_dayOfWeekWithCal(const QDate* self, QCalendar* cal);
int QDate_dayOfYearWithCal(const QDate* self, QCalendar* cal);
int QDate_daysInMonthWithCal(const QDate* self, QCalendar* cal);
int QDate_daysInYearWithCal(const QDate* self, QCalendar* cal);
QDateTime* QDate_startOfDay(const QDate* self);
QDateTime* QDate_endOfDay(const QDate* self);
QDateTime* QDate_startOfDayWithZone(const QDate* self, QTimeZone* zone);
QDateTime* QDate_endOfDayWithZone(const QDate* self, QTimeZone* zone);
struct miqt_string QDate_shortMonthName(int month);
struct miqt_string QDate_shortDayName(int weekday);
struct miqt_string QDate_longMonthName(int month);
struct miqt_string QDate_longDayName(int weekday);
struct miqt_string QDate_toString(const QDate* self);
struct miqt_string QDate_toString2(const QDate* self, int format, QCalendar* cal);
struct miqt_string QDate_toStringWithFormat(const QDate* self, struct miqt_string format);
struct miqt_string QDate_toString3(const QDate* self, struct miqt_string format, QCalendar* cal);
bool QDate_setDate(QDate* self, int year, int month, int day);
bool QDate_setDate2(QDate* self, int year, int month, int day, QCalendar* cal);
void QDate_getDate(QDate* self, int* year, int* month, int* day);
void QDate_getDate2(const QDate* self, int* year, int* month, int* day);
QDate* QDate_addDays(const QDate* self, long long days);
QDate* QDate_addMonths(const QDate* self, int months);
QDate* QDate_addYears(const QDate* self, int years);
QDate* QDate_addMonths2(const QDate* self, int months, QCalendar* cal);
QDate* QDate_addYears2(const QDate* self, int years, QCalendar* cal);
long long QDate_daysTo(const QDate* self, QDate* param1);
bool QDate_operatorEqual(const QDate* self, QDate* other);
bool QDate_operatorNotEqual(const QDate* self, QDate* other);
bool QDate_operatorLesser(const QDate* self, QDate* other);
bool QDate_operatorLesserOrEqual(const QDate* self, QDate* other);
bool QDate_operatorGreater(const QDate* self, QDate* other);
bool QDate_operatorGreaterOrEqual(const QDate* self, QDate* other);
QDate* QDate_currentDate();
QDate* QDate_fromString(struct miqt_string s);
QDate* QDate_fromString2(struct miqt_string s, struct miqt_string format);
QDate* QDate_fromString3(struct miqt_string s, struct miqt_string format, QCalendar* cal);
bool QDate_isValid2(int y, int m, int d);
bool QDate_isLeapYear(int year);
QDate* QDate_fromJulianDay(long long jd_);
long long QDate_toJulianDay(const QDate* self);
int QDate_weekNumber1(const QDate* self, int* yearNum);
QDateTime* QDate_startOfDay1(const QDate* self, int spec);
QDateTime* QDate_startOfDay2(const QDate* self, int spec, int offsetSeconds);
QDateTime* QDate_endOfDay1(const QDate* self, int spec);
QDateTime* QDate_endOfDay2(const QDate* self, int spec, int offsetSeconds);
struct miqt_string QDate_shortMonthName2(int month, int type);
struct miqt_string QDate_shortDayName2(int weekday, int type);
struct miqt_string QDate_longMonthName2(int month, int type);
struct miqt_string QDate_longDayName2(int weekday, int type);
struct miqt_string QDate_toString1(const QDate* self, int format);
QDate* QDate_fromString22(struct miqt_string s, int f);
void QDate_delete(QDate* self);

QTime* QTime_new();
QTime* QTime_new2(int h, int m);
QTime* QTime_new3(QTime* param1);
QTime* QTime_new4(int h, int m, int s);
QTime* QTime_new5(int h, int m, int s, int ms);
bool QTime_isNull(const QTime* self);
bool QTime_isValid(const QTime* self);
int QTime_hour(const QTime* self);
int QTime_minute(const QTime* self);
int QTime_second(const QTime* self);
int QTime_msec(const QTime* self);
struct miqt_string QTime_toString(const QTime* self);
struct miqt_string QTime_toStringWithFormat(const QTime* self, struct miqt_string format);
bool QTime_setHMS(QTime* self, int h, int m, int s);
QTime* QTime_addSecs(const QTime* self, int secs);
int QTime_secsTo(const QTime* self, QTime* param1);
QTime* QTime_addMSecs(const QTime* self, int ms);
int QTime_msecsTo(const QTime* self, QTime* param1);
bool QTime_operatorEqual(const QTime* self, QTime* other);
bool QTime_operatorNotEqual(const QTime* self, QTime* other);
bool QTime_operatorLesser(const QTime* self, QTime* other);
bool QTime_operatorLesserOrEqual(const QTime* self, QTime* other);
bool QTime_operatorGreater(const QTime* self, QTime* other);
bool QTime_operatorGreaterOrEqual(const QTime* self, QTime* other);
QTime* QTime_fromMSecsSinceStartOfDay(int msecs);
int QTime_msecsSinceStartOfDay(const QTime* self);
QTime* QTime_currentTime();
QTime* QTime_fromString(struct miqt_string s);
QTime* QTime_fromString2(struct miqt_string s, struct miqt_string format);
bool QTime_isValid2(int h, int m, int s);
void QTime_start(QTime* self);
int QTime_restart(QTime* self);
int QTime_elapsed(const QTime* self);
struct miqt_string QTime_toString1(const QTime* self, int f);
bool QTime_setHMS4(QTime* self, int h, int m, int s, int ms);
QTime* QTime_fromString22(struct miqt_string s, int f);
bool QTime_isValid4(int h, int m, int s, int ms);
void QTime_delete(QTime* self);

QDateTime* QDateTime_new(QDate* param1);
QDateTime* QDateTime_new2(QDate* param1, QTime* param2);
QDateTime* QDateTime_new3(QDate* date, QTime* time, int spec, int offsetSeconds);
QDateTime* QDateTime_new4(QDate* date, QTime* time, QTimeZone* timeZone);
QDateTime* QDateTime_new5(QDateTime* other);
QDateTime* QDateTime_new6(QDate* param1, QTime* param2, int spec);
void QDateTime_operatorAssign(QDateTime* self, QDateTime* other);
void QDateTime_swap(QDateTime* self, QDateTime* other);
bool QDateTime_isNull(const QDateTime* self);
bool QDateTime_isValid(const QDateTime* self);
QDate* QDateTime_date(const QDateTime* self);
QTime* QDateTime_time(const QDateTime* self);
int QDateTime_timeSpec(const QDateTime* self);
int QDateTime_offsetFromUtc(const QDateTime* self);
QTimeZone* QDateTime_timeZone(const QDateTime* self);
struct miqt_string QDateTime_timeZoneAbbreviation(const QDateTime* self);
bool QDateTime_isDaylightTime(const QDateTime* self);
long long QDateTime_toMSecsSinceEpoch(const QDateTime* self);
long long QDateTime_toSecsSinceEpoch(const QDateTime* self);
void QDateTime_setDate(QDateTime* self, QDate* date);
void QDateTime_setTime(QDateTime* self, QTime* time);
void QDateTime_setTimeSpec(QDateTime* self, int spec);
void QDateTime_setOffsetFromUtc(QDateTime* self, int offsetSeconds);
void QDateTime_setTimeZone(QDateTime* self, QTimeZone* toZone);
void QDateTime_setMSecsSinceEpoch(QDateTime* self, long long msecs);
void QDateTime_setSecsSinceEpoch(QDateTime* self, long long secs);
struct miqt_string QDateTime_toString(const QDateTime* self);
struct miqt_string QDateTime_toStringWithFormat(const QDateTime* self, struct miqt_string format);
struct miqt_string QDateTime_toString2(const QDateTime* self, struct miqt_string format, QCalendar* cal);
QDateTime* QDateTime_addDays(const QDateTime* self, long long days);
QDateTime* QDateTime_addMonths(const QDateTime* self, int months);
QDateTime* QDateTime_addYears(const QDateTime* self, int years);
QDateTime* QDateTime_addSecs(const QDateTime* self, long long secs);
QDateTime* QDateTime_addMSecs(const QDateTime* self, long long msecs);
QDateTime* QDateTime_toTimeSpec(const QDateTime* self, int spec);
QDateTime* QDateTime_toLocalTime(const QDateTime* self);
QDateTime* QDateTime_toUTC(const QDateTime* self);
QDateTime* QDateTime_toOffsetFromUtc(const QDateTime* self, int offsetSeconds);
QDateTime* QDateTime_toTimeZone(const QDateTime* self, QTimeZone* toZone);
long long QDateTime_daysTo(const QDateTime* self, QDateTime* param1);
long long QDateTime_secsTo(const QDateTime* self, QDateTime* param1);
long long QDateTime_msecsTo(const QDateTime* self, QDateTime* param1);
bool QDateTime_operatorEqual(const QDateTime* self, QDateTime* other);
bool QDateTime_operatorNotEqual(const QDateTime* self, QDateTime* other);
bool QDateTime_operatorLesser(const QDateTime* self, QDateTime* other);
bool QDateTime_operatorLesserOrEqual(const QDateTime* self, QDateTime* other);
bool QDateTime_operatorGreater(const QDateTime* self, QDateTime* other);
bool QDateTime_operatorGreaterOrEqual(const QDateTime* self, QDateTime* other);
void QDateTime_setUtcOffset(QDateTime* self, int seconds);
int QDateTime_utcOffset(const QDateTime* self);
QDateTime* QDateTime_currentDateTime();
QDateTime* QDateTime_currentDateTimeUtc();
QDateTime* QDateTime_fromString(struct miqt_string s);
QDateTime* QDateTime_fromString2(struct miqt_string s, struct miqt_string format);
QDateTime* QDateTime_fromString3(struct miqt_string s, struct miqt_string format, QCalendar* cal);
unsigned int QDateTime_toTimeT(const QDateTime* self);
void QDateTime_setTimeT(QDateTime* self, unsigned int secsSince1Jan1970UTC);
QDateTime* QDateTime_fromTimeT(unsigned int secsSince1Jan1970UTC);
QDateTime* QDateTime_fromTimeT2(unsigned int secsSince1Jan1970UTC, int spec);
QDateTime* QDateTime_fromTimeT3(unsigned int secsSince1Jan1970UTC, QTimeZone* timeZone);
QDateTime* QDateTime_fromMSecsSinceEpoch(long long msecs);
QDateTime* QDateTime_fromMSecsSinceEpoch2(long long msecs, int spec);
QDateTime* QDateTime_fromSecsSinceEpoch(long long secs);
QDateTime* QDateTime_fromMSecsSinceEpoch3(long long msecs, QTimeZone* timeZone);
QDateTime* QDateTime_fromSecsSinceEpoch2(long long secs, QTimeZone* timeZone);
long long QDateTime_currentMSecsSinceEpoch();
long long QDateTime_currentSecsSinceEpoch();
struct miqt_string QDateTime_toString1(const QDateTime* self, int format);
QDateTime* QDateTime_fromString22(struct miqt_string s, int f);
QDateTime* QDateTime_fromTimeT32(unsigned int secsSince1Jan1970UTC, int spec, int offsetFromUtc);
QDateTime* QDateTime_fromMSecsSinceEpoch32(long long msecs, int spec, int offsetFromUtc);
QDateTime* QDateTime_fromSecsSinceEpoch22(long long secs, int spe);
QDateTime* QDateTime_fromSecsSinceEpoch3(long long secs, int spe, int offsetFromUtc);
void QDateTime_delete(QDateTime* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
