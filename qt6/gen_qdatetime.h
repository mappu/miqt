#pragma once
#ifndef MIQT_QT6_GEN_QDATETIME_H
#define MIQT_QT6_GEN_QDATETIME_H

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
struct miqt_string QDate_toString(const QDate* self);
struct miqt_string QDate_toStringWithFormat(const QDate* self, struct miqt_string format);
bool QDate_setDate(QDate* self, int year, int month, int day);
bool QDate_setDate2(QDate* self, int year, int month, int day, QCalendar* cal);
void QDate_getDate(const QDate* self, int* year, int* month, int* day);
QDate* QDate_addDays(const QDate* self, long long days);
QDate* QDate_addMonths(const QDate* self, int months);
QDate* QDate_addYears(const QDate* self, int years);
QDate* QDate_addMonths2(const QDate* self, int months, QCalendar* cal);
QDate* QDate_addYears2(const QDate* self, int years, QCalendar* cal);
long long QDate_daysTo(const QDate* self, QDate* d);
QDate* QDate_currentDate();
QDate* QDate_fromStringWithString(struct miqt_string string);
QDate* QDate_fromString4(struct miqt_string string, struct miqt_string format);
bool QDate_isValid2(int y, int m, int d);
bool QDate_isLeapYear(int year);
QDate* QDate_fromJulianDay(long long jd_);
long long QDate_toJulianDay(const QDate* self);
int QDate_weekNumberWithYearNum(const QDate* self, int* yearNum);
QDateTime* QDate_startOfDayWithSpec(const QDate* self, int spec);
QDateTime* QDate_startOfDay2(const QDate* self, int spec, int offsetSeconds);
QDateTime* QDate_endOfDayWithSpec(const QDate* self, int spec);
QDateTime* QDate_endOfDay2(const QDate* self, int spec, int offsetSeconds);
struct miqt_string QDate_toString3(const QDate* self, int format);
struct miqt_string QDate_toString4(const QDate* self, struct miqt_string format, QCalendar* cal);
QDate* QDate_fromString8(struct miqt_string string, int format);
QDate* QDate_fromString9(struct miqt_string string, struct miqt_string format, QCalendar* cal);

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
int QTime_secsTo(const QTime* self, QTime* t);
QTime* QTime_addMSecs(const QTime* self, int ms);
int QTime_msecsTo(const QTime* self, QTime* t);
QTime* QTime_fromMSecsSinceStartOfDay(int msecs);
int QTime_msecsSinceStartOfDay(const QTime* self);
QTime* QTime_currentTime();
QTime* QTime_fromStringWithString(struct miqt_string string);
QTime* QTime_fromString4(struct miqt_string string, struct miqt_string format);
bool QTime_isValid2(int h, int m, int s);
struct miqt_string QTime_toStringWithQtDateFormat(const QTime* self, int f);
bool QTime_setHMS2(QTime* self, int h, int m, int s, int ms);
QTime* QTime_fromString6(struct miqt_string string, int format);
bool QTime_isValid3(int h, int m, int s, int ms);

void QTime_delete(QTime* self);

QDateTime* QDateTime_new();
QDateTime* QDateTime_new2(QDate* date, QTime* time);
QDateTime* QDateTime_new3(QDate* date, QTime* time, QTimeZone* timeZone);
QDateTime* QDateTime_new4(QDateTime* other);
QDateTime* QDateTime_new5(QDate* date, QTime* time, int spec);
QDateTime* QDateTime_new6(QDate* date, QTime* time, int spec, int offsetSeconds);
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
QDateTime* QDateTime_currentDateTime();
QDateTime* QDateTime_currentDateTimeUtc();
QDateTime* QDateTime_fromStringWithString(struct miqt_string string);
QDateTime* QDateTime_fromString4(struct miqt_string string, struct miqt_string format);
QDateTime* QDateTime_fromMSecsSinceEpoch(long long msecs);
QDateTime* QDateTime_fromSecsSinceEpoch(long long secs);
QDateTime* QDateTime_fromMSecsSinceEpoch2(long long msecs, QTimeZone* timeZone);
QDateTime* QDateTime_fromSecsSinceEpoch2(long long secs, QTimeZone* timeZone);
long long QDateTime_currentMSecsSinceEpoch();
long long QDateTime_currentSecsSinceEpoch();
struct miqt_string QDateTime_toString3(const QDateTime* self, int format);
struct miqt_string QDateTime_toString4(const QDateTime* self, struct miqt_string format, QCalendar* cal);
QDateTime* QDateTime_fromString8(struct miqt_string string, int format);
QDateTime* QDateTime_fromString9(struct miqt_string string, struct miqt_string format, QCalendar* cal);
QDateTime* QDateTime_fromMSecsSinceEpoch3(long long msecs, int spec);
QDateTime* QDateTime_fromMSecsSinceEpoch4(long long msecs, int spec, int offsetFromUtc);
QDateTime* QDateTime_fromSecsSinceEpoch3(long long secs, int spec);
QDateTime* QDateTime_fromSecsSinceEpoch4(long long secs, int spec, int offsetFromUtc);

void QDateTime_delete(QDateTime* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
