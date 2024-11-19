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

void QDate_new(QDate** outptr_QDate);
void QDate_new2(int y, int m, int d, QDate** outptr_QDate);
void QDate_new3(int y, int m, int d, QCalendar* cal, QDate** outptr_QDate);
void QDate_new4(QDate* param1, QDate** outptr_QDate);
bool QDate_IsNull(const QDate* self);
bool QDate_IsValid(const QDate* self);
int QDate_Year(const QDate* self);
int QDate_Month(const QDate* self);
int QDate_Day(const QDate* self);
int QDate_DayOfWeek(const QDate* self);
int QDate_DayOfYear(const QDate* self);
int QDate_DaysInMonth(const QDate* self);
int QDate_DaysInYear(const QDate* self);
int QDate_WeekNumber(const QDate* self);
int QDate_YearWithCal(const QDate* self, QCalendar* cal);
int QDate_MonthWithCal(const QDate* self, QCalendar* cal);
int QDate_DayWithCal(const QDate* self, QCalendar* cal);
int QDate_DayOfWeekWithCal(const QDate* self, QCalendar* cal);
int QDate_DayOfYearWithCal(const QDate* self, QCalendar* cal);
int QDate_DaysInMonthWithCal(const QDate* self, QCalendar* cal);
int QDate_DaysInYearWithCal(const QDate* self, QCalendar* cal);
QDateTime* QDate_StartOfDay(const QDate* self);
QDateTime* QDate_EndOfDay(const QDate* self);
QDateTime* QDate_StartOfDayWithZone(const QDate* self, QTimeZone* zone);
QDateTime* QDate_EndOfDayWithZone(const QDate* self, QTimeZone* zone);
struct miqt_string QDate_ToString(const QDate* self);
struct miqt_string QDate_ToStringWithFormat(const QDate* self, struct miqt_string format);
bool QDate_SetDate(QDate* self, int year, int month, int day);
bool QDate_SetDate2(QDate* self, int year, int month, int day, QCalendar* cal);
void QDate_GetDate(const QDate* self, int* year, int* month, int* day);
QDate* QDate_AddDays(const QDate* self, long long days);
QDate* QDate_AddMonths(const QDate* self, int months);
QDate* QDate_AddYears(const QDate* self, int years);
QDate* QDate_AddMonths2(const QDate* self, int months, QCalendar* cal);
QDate* QDate_AddYears2(const QDate* self, int years, QCalendar* cal);
long long QDate_DaysTo(const QDate* self, QDate* d);
QDate* QDate_CurrentDate();
QDate* QDate_FromStringWithStringVal(struct miqt_string stringVal);
QDate* QDate_FromString4(struct miqt_string stringVal, struct miqt_string format);
bool QDate_IsValid2(int y, int m, int d);
bool QDate_IsLeapYear(int year);
QDate* QDate_FromJulianDay(long long jd_);
long long QDate_ToJulianDay(const QDate* self);
int QDate_WeekNumber1(const QDate* self, int* yearNum);
QDateTime* QDate_StartOfDay1(const QDate* self, int spec);
QDateTime* QDate_StartOfDay2(const QDate* self, int spec, int offsetSeconds);
QDateTime* QDate_EndOfDay1(const QDate* self, int spec);
QDateTime* QDate_EndOfDay2(const QDate* self, int spec, int offsetSeconds);
struct miqt_string QDate_ToString1(const QDate* self, int format);
struct miqt_string QDate_ToString22(const QDate* self, struct miqt_string format, QCalendar* cal);
QDate* QDate_FromString23(struct miqt_string stringVal, int format);
QDate* QDate_FromString34(struct miqt_string stringVal, struct miqt_string format, QCalendar* cal);
void QDate_Delete(QDate* self, bool isSubclass);

void QTime_new(QTime** outptr_QTime);
void QTime_new2(int h, int m, QTime** outptr_QTime);
void QTime_new3(QTime* param1, QTime** outptr_QTime);
void QTime_new4(int h, int m, int s, QTime** outptr_QTime);
void QTime_new5(int h, int m, int s, int ms, QTime** outptr_QTime);
bool QTime_IsNull(const QTime* self);
bool QTime_IsValid(const QTime* self);
int QTime_Hour(const QTime* self);
int QTime_Minute(const QTime* self);
int QTime_Second(const QTime* self);
int QTime_Msec(const QTime* self);
struct miqt_string QTime_ToString(const QTime* self);
struct miqt_string QTime_ToStringWithFormat(const QTime* self, struct miqt_string format);
bool QTime_SetHMS(QTime* self, int h, int m, int s);
QTime* QTime_AddSecs(const QTime* self, int secs);
int QTime_SecsTo(const QTime* self, QTime* t);
QTime* QTime_AddMSecs(const QTime* self, int ms);
int QTime_MsecsTo(const QTime* self, QTime* t);
QTime* QTime_FromMSecsSinceStartOfDay(int msecs);
int QTime_MsecsSinceStartOfDay(const QTime* self);
QTime* QTime_CurrentTime();
QTime* QTime_FromStringWithStringVal(struct miqt_string stringVal);
QTime* QTime_FromString4(struct miqt_string stringVal, struct miqt_string format);
bool QTime_IsValid2(int h, int m, int s);
struct miqt_string QTime_ToString1(const QTime* self, int f);
bool QTime_SetHMS4(QTime* self, int h, int m, int s, int ms);
QTime* QTime_FromString23(struct miqt_string stringVal, int format);
bool QTime_IsValid4(int h, int m, int s, int ms);
void QTime_Delete(QTime* self, bool isSubclass);

void QDateTime_new(QDateTime** outptr_QDateTime);
void QDateTime_new2(QDate* date, QTime* time, QDateTime** outptr_QDateTime);
void QDateTime_new3(QDate* date, QTime* time, QTimeZone* timeZone, QDateTime** outptr_QDateTime);
void QDateTime_new4(QDateTime* other, QDateTime** outptr_QDateTime);
void QDateTime_new5(QDate* date, QTime* time, int spec, QDateTime** outptr_QDateTime);
void QDateTime_new6(QDate* date, QTime* time, int spec, int offsetSeconds, QDateTime** outptr_QDateTime);
void QDateTime_OperatorAssign(QDateTime* self, QDateTime* other);
void QDateTime_Swap(QDateTime* self, QDateTime* other);
bool QDateTime_IsNull(const QDateTime* self);
bool QDateTime_IsValid(const QDateTime* self);
QDate* QDateTime_Date(const QDateTime* self);
QTime* QDateTime_Time(const QDateTime* self);
int QDateTime_TimeSpec(const QDateTime* self);
int QDateTime_OffsetFromUtc(const QDateTime* self);
QTimeZone* QDateTime_TimeZone(const QDateTime* self);
struct miqt_string QDateTime_TimeZoneAbbreviation(const QDateTime* self);
bool QDateTime_IsDaylightTime(const QDateTime* self);
long long QDateTime_ToMSecsSinceEpoch(const QDateTime* self);
long long QDateTime_ToSecsSinceEpoch(const QDateTime* self);
void QDateTime_SetDate(QDateTime* self, QDate* date);
void QDateTime_SetTime(QDateTime* self, QTime* time);
void QDateTime_SetTimeSpec(QDateTime* self, int spec);
void QDateTime_SetOffsetFromUtc(QDateTime* self, int offsetSeconds);
void QDateTime_SetTimeZone(QDateTime* self, QTimeZone* toZone);
void QDateTime_SetMSecsSinceEpoch(QDateTime* self, long long msecs);
void QDateTime_SetSecsSinceEpoch(QDateTime* self, long long secs);
struct miqt_string QDateTime_ToString(const QDateTime* self);
struct miqt_string QDateTime_ToStringWithFormat(const QDateTime* self, struct miqt_string format);
QDateTime* QDateTime_AddDays(const QDateTime* self, long long days);
QDateTime* QDateTime_AddMonths(const QDateTime* self, int months);
QDateTime* QDateTime_AddYears(const QDateTime* self, int years);
QDateTime* QDateTime_AddSecs(const QDateTime* self, long long secs);
QDateTime* QDateTime_AddMSecs(const QDateTime* self, long long msecs);
QDateTime* QDateTime_ToTimeSpec(const QDateTime* self, int spec);
QDateTime* QDateTime_ToLocalTime(const QDateTime* self);
QDateTime* QDateTime_ToUTC(const QDateTime* self);
QDateTime* QDateTime_ToOffsetFromUtc(const QDateTime* self, int offsetSeconds);
QDateTime* QDateTime_ToTimeZone(const QDateTime* self, QTimeZone* toZone);
long long QDateTime_DaysTo(const QDateTime* self, QDateTime* param1);
long long QDateTime_SecsTo(const QDateTime* self, QDateTime* param1);
long long QDateTime_MsecsTo(const QDateTime* self, QDateTime* param1);
QDateTime* QDateTime_CurrentDateTime();
QDateTime* QDateTime_CurrentDateTimeUtc();
QDateTime* QDateTime_FromStringWithStringVal(struct miqt_string stringVal);
QDateTime* QDateTime_FromString4(struct miqt_string stringVal, struct miqt_string format);
QDateTime* QDateTime_FromMSecsSinceEpoch(long long msecs);
QDateTime* QDateTime_FromSecsSinceEpoch(long long secs);
QDateTime* QDateTime_FromMSecsSinceEpoch2(long long msecs, QTimeZone* timeZone);
QDateTime* QDateTime_FromSecsSinceEpoch2(long long secs, QTimeZone* timeZone);
long long QDateTime_CurrentMSecsSinceEpoch();
long long QDateTime_CurrentSecsSinceEpoch();
struct miqt_string QDateTime_ToString1(const QDateTime* self, int format);
struct miqt_string QDateTime_ToString22(const QDateTime* self, struct miqt_string format, QCalendar* cal);
QDateTime* QDateTime_FromString23(struct miqt_string stringVal, int format);
QDateTime* QDateTime_FromString34(struct miqt_string stringVal, struct miqt_string format, QCalendar* cal);
QDateTime* QDateTime_FromMSecsSinceEpoch22(long long msecs, int spec);
QDateTime* QDateTime_FromMSecsSinceEpoch3(long long msecs, int spec, int offsetFromUtc);
QDateTime* QDateTime_FromSecsSinceEpoch22(long long secs, int spec);
QDateTime* QDateTime_FromSecsSinceEpoch3(long long secs, int spec, int offsetFromUtc);
void QDateTime_Delete(QDateTime* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
