#ifndef GEN_QDATETIME_H
#define GEN_QDATETIME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
bool QDate_IsNull(QDate* self);
bool QDate_IsValid(QDate* self);
int QDate_Year(QDate* self);
int QDate_Month(QDate* self);
int QDate_Day(QDate* self);
int QDate_DayOfWeek(QDate* self);
int QDate_DayOfYear(QDate* self);
int QDate_DaysInMonth(QDate* self);
int QDate_DaysInYear(QDate* self);
int QDate_WeekNumber(QDate* self);
int QDate_YearWithCal(QDate* self, QCalendar* cal);
int QDate_MonthWithCal(QDate* self, QCalendar* cal);
int QDate_DayWithCal(QDate* self, QCalendar* cal);
int QDate_DayOfWeekWithCal(QDate* self, QCalendar* cal);
int QDate_DayOfYearWithCal(QDate* self, QCalendar* cal);
int QDate_DaysInMonthWithCal(QDate* self, QCalendar* cal);
int QDate_DaysInYearWithCal(QDate* self, QCalendar* cal);
QDateTime* QDate_StartOfDay(QDate* self);
QDateTime* QDate_EndOfDay(QDate* self);
QDateTime* QDate_StartOfDayWithZone(QDate* self, QTimeZone* zone);
QDateTime* QDate_EndOfDayWithZone(QDate* self, QTimeZone* zone);
void QDate_ShortMonthName(int month, char** _out, int* _out_Strlen);
void QDate_ShortDayName(int weekday, char** _out, int* _out_Strlen);
void QDate_LongMonthName(int month, char** _out, int* _out_Strlen);
void QDate_LongDayName(int weekday, char** _out, int* _out_Strlen);
void QDate_ToString(QDate* self, char** _out, int* _out_Strlen);
void QDate_ToString2(QDate* self, uintptr_t format, QCalendar* cal, char** _out, int* _out_Strlen);
void QDate_ToStringWithFormat(QDate* self, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen);
void QDate_ToString3(QDate* self, const char* format, size_t format_Strlen, QCalendar* cal, char** _out, int* _out_Strlen);
bool QDate_SetDate(QDate* self, int year, int month, int day);
bool QDate_SetDate2(QDate* self, int year, int month, int day, QCalendar* cal);
void QDate_GetDate(QDate* self, int* year, int* month, int* day);
void QDate_GetDate2(QDate* self, int* year, int* month, int* day);
QDate* QDate_AddDays(QDate* self, long long days);
QDate* QDate_AddMonths(QDate* self, int months);
QDate* QDate_AddYears(QDate* self, int years);
QDate* QDate_AddMonths2(QDate* self, int months, QCalendar* cal);
QDate* QDate_AddYears2(QDate* self, int years, QCalendar* cal);
long long QDate_DaysTo(QDate* self, QDate* param1);
bool QDate_OperatorEqual(QDate* self, QDate* other);
bool QDate_OperatorNotEqual(QDate* self, QDate* other);
bool QDate_OperatorLesser(QDate* self, QDate* other);
bool QDate_OperatorLesserOrEqual(QDate* self, QDate* other);
bool QDate_OperatorGreater(QDate* self, QDate* other);
bool QDate_OperatorGreaterOrEqual(QDate* self, QDate* other);
QDate* QDate_CurrentDate();
QDate* QDate_FromString(const char* s, size_t s_Strlen);
QDate* QDate_FromString2(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen);
QDate* QDate_FromString3(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen, QCalendar* cal);
bool QDate_IsValid2(int y, int m, int d);
bool QDate_IsLeapYear(int year);
QDate* QDate_FromJulianDay(long long jd_);
long long QDate_ToJulianDay(QDate* self);
int QDate_WeekNumber1(QDate* self, int* yearNum);
QDateTime* QDate_StartOfDay1(QDate* self, uintptr_t spec);
QDateTime* QDate_StartOfDay2(QDate* self, uintptr_t spec, int offsetSeconds);
QDateTime* QDate_EndOfDay1(QDate* self, uintptr_t spec);
QDateTime* QDate_EndOfDay2(QDate* self, uintptr_t spec, int offsetSeconds);
void QDate_ShortMonthName2(int month, uintptr_t typeVal, char** _out, int* _out_Strlen);
void QDate_ShortDayName2(int weekday, uintptr_t typeVal, char** _out, int* _out_Strlen);
void QDate_LongMonthName2(int month, uintptr_t typeVal, char** _out, int* _out_Strlen);
void QDate_LongDayName2(int weekday, uintptr_t typeVal, char** _out, int* _out_Strlen);
void QDate_ToString1(QDate* self, uintptr_t format, char** _out, int* _out_Strlen);
QDate* QDate_FromString22(const char* s, size_t s_Strlen, uintptr_t f);
void QDate_Delete(QDate* self);

QTime* QTime_new();
QTime* QTime_new2(int h, int m);
QTime* QTime_new3(QTime* param1);
QTime* QTime_new4(int h, int m, int s);
QTime* QTime_new5(int h, int m, int s, int ms);
bool QTime_IsNull(QTime* self);
bool QTime_IsValid(QTime* self);
int QTime_Hour(QTime* self);
int QTime_Minute(QTime* self);
int QTime_Second(QTime* self);
int QTime_Msec(QTime* self);
void QTime_ToString(QTime* self, char** _out, int* _out_Strlen);
void QTime_ToStringWithFormat(QTime* self, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen);
bool QTime_SetHMS(QTime* self, int h, int m, int s);
QTime* QTime_AddSecs(QTime* self, int secs);
int QTime_SecsTo(QTime* self, QTime* param1);
QTime* QTime_AddMSecs(QTime* self, int ms);
int QTime_MsecsTo(QTime* self, QTime* param1);
bool QTime_OperatorEqual(QTime* self, QTime* other);
bool QTime_OperatorNotEqual(QTime* self, QTime* other);
bool QTime_OperatorLesser(QTime* self, QTime* other);
bool QTime_OperatorLesserOrEqual(QTime* self, QTime* other);
bool QTime_OperatorGreater(QTime* self, QTime* other);
bool QTime_OperatorGreaterOrEqual(QTime* self, QTime* other);
QTime* QTime_FromMSecsSinceStartOfDay(int msecs);
int QTime_MsecsSinceStartOfDay(QTime* self);
QTime* QTime_CurrentTime();
QTime* QTime_FromString(const char* s, size_t s_Strlen);
QTime* QTime_FromString2(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen);
bool QTime_IsValid2(int h, int m, int s);
void QTime_Start(QTime* self);
int QTime_Restart(QTime* self);
int QTime_Elapsed(QTime* self);
void QTime_ToString1(QTime* self, uintptr_t f, char** _out, int* _out_Strlen);
bool QTime_SetHMS4(QTime* self, int h, int m, int s, int ms);
QTime* QTime_FromString22(const char* s, size_t s_Strlen, uintptr_t f);
bool QTime_IsValid4(int h, int m, int s, int ms);
void QTime_Delete(QTime* self);

QDateTime* QDateTime_new(QDate* param1);
QDateTime* QDateTime_new2(QDate* param1, QTime* param2);
QDateTime* QDateTime_new3(QDate* date, QTime* time, uintptr_t spec, int offsetSeconds);
QDateTime* QDateTime_new4(QDate* date, QTime* time, QTimeZone* timeZone);
QDateTime* QDateTime_new5(QDateTime* other);
QDateTime* QDateTime_new6(QDate* param1, QTime* param2, uintptr_t spec);
void QDateTime_OperatorAssign(QDateTime* self, QDateTime* other);
void QDateTime_Swap(QDateTime* self, QDateTime* other);
bool QDateTime_IsNull(QDateTime* self);
bool QDateTime_IsValid(QDateTime* self);
QDate* QDateTime_Date(QDateTime* self);
QTime* QDateTime_Time(QDateTime* self);
uintptr_t QDateTime_TimeSpec(QDateTime* self);
int QDateTime_OffsetFromUtc(QDateTime* self);
QTimeZone* QDateTime_TimeZone(QDateTime* self);
void QDateTime_TimeZoneAbbreviation(QDateTime* self, char** _out, int* _out_Strlen);
bool QDateTime_IsDaylightTime(QDateTime* self);
long long QDateTime_ToMSecsSinceEpoch(QDateTime* self);
long long QDateTime_ToSecsSinceEpoch(QDateTime* self);
void QDateTime_SetDate(QDateTime* self, QDate* date);
void QDateTime_SetTime(QDateTime* self, QTime* time);
void QDateTime_SetTimeSpec(QDateTime* self, uintptr_t spec);
void QDateTime_SetOffsetFromUtc(QDateTime* self, int offsetSeconds);
void QDateTime_SetTimeZone(QDateTime* self, QTimeZone* toZone);
void QDateTime_SetMSecsSinceEpoch(QDateTime* self, long long msecs);
void QDateTime_SetSecsSinceEpoch(QDateTime* self, long long secs);
void QDateTime_ToString(QDateTime* self, char** _out, int* _out_Strlen);
void QDateTime_ToStringWithFormat(QDateTime* self, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen);
void QDateTime_ToString2(QDateTime* self, const char* format, size_t format_Strlen, QCalendar* cal, char** _out, int* _out_Strlen);
QDateTime* QDateTime_AddDays(QDateTime* self, long long days);
QDateTime* QDateTime_AddMonths(QDateTime* self, int months);
QDateTime* QDateTime_AddYears(QDateTime* self, int years);
QDateTime* QDateTime_AddSecs(QDateTime* self, long long secs);
QDateTime* QDateTime_AddMSecs(QDateTime* self, long long msecs);
QDateTime* QDateTime_ToTimeSpec(QDateTime* self, uintptr_t spec);
QDateTime* QDateTime_ToLocalTime(QDateTime* self);
QDateTime* QDateTime_ToUTC(QDateTime* self);
QDateTime* QDateTime_ToOffsetFromUtc(QDateTime* self, int offsetSeconds);
QDateTime* QDateTime_ToTimeZone(QDateTime* self, QTimeZone* toZone);
long long QDateTime_DaysTo(QDateTime* self, QDateTime* param1);
long long QDateTime_SecsTo(QDateTime* self, QDateTime* param1);
long long QDateTime_MsecsTo(QDateTime* self, QDateTime* param1);
bool QDateTime_OperatorEqual(QDateTime* self, QDateTime* other);
bool QDateTime_OperatorNotEqual(QDateTime* self, QDateTime* other);
bool QDateTime_OperatorLesser(QDateTime* self, QDateTime* other);
bool QDateTime_OperatorLesserOrEqual(QDateTime* self, QDateTime* other);
bool QDateTime_OperatorGreater(QDateTime* self, QDateTime* other);
bool QDateTime_OperatorGreaterOrEqual(QDateTime* self, QDateTime* other);
void QDateTime_SetUtcOffset(QDateTime* self, int seconds);
int QDateTime_UtcOffset(QDateTime* self);
QDateTime* QDateTime_CurrentDateTime();
QDateTime* QDateTime_CurrentDateTimeUtc();
QDateTime* QDateTime_FromString(const char* s, size_t s_Strlen);
QDateTime* QDateTime_FromString2(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen);
QDateTime* QDateTime_FromString3(const char* s, size_t s_Strlen, const char* format, size_t format_Strlen, QCalendar* cal);
unsigned int QDateTime_ToTimeT(QDateTime* self);
void QDateTime_SetTimeT(QDateTime* self, unsigned int secsSince1Jan1970UTC);
QDateTime* QDateTime_FromTimeT(unsigned int secsSince1Jan1970UTC);
QDateTime* QDateTime_FromTimeT2(unsigned int secsSince1Jan1970UTC, uintptr_t spec);
QDateTime* QDateTime_FromTimeT3(unsigned int secsSince1Jan1970UTC, QTimeZone* timeZone);
QDateTime* QDateTime_FromMSecsSinceEpoch(long long msecs);
QDateTime* QDateTime_FromMSecsSinceEpoch2(long long msecs, uintptr_t spec);
QDateTime* QDateTime_FromSecsSinceEpoch(long long secs);
QDateTime* QDateTime_FromMSecsSinceEpoch3(long long msecs, QTimeZone* timeZone);
QDateTime* QDateTime_FromSecsSinceEpoch2(long long secs, QTimeZone* timeZone);
long long QDateTime_CurrentMSecsSinceEpoch();
long long QDateTime_CurrentSecsSinceEpoch();
void QDateTime_ToString1(QDateTime* self, uintptr_t format, char** _out, int* _out_Strlen);
QDateTime* QDateTime_FromString22(const char* s, size_t s_Strlen, uintptr_t f);
QDateTime* QDateTime_FromTimeT32(unsigned int secsSince1Jan1970UTC, uintptr_t spec, int offsetFromUtc);
QDateTime* QDateTime_FromMSecsSinceEpoch32(long long msecs, uintptr_t spec, int offsetFromUtc);
QDateTime* QDateTime_FromSecsSinceEpoch22(long long secs, uintptr_t spe);
QDateTime* QDateTime_FromSecsSinceEpoch3(long long secs, uintptr_t spe, int offsetFromUtc);
void QDateTime_Delete(QDateTime* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
