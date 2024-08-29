#ifndef GEN_QCALENDAR_H
#define GEN_QCALENDAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCalendar;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__YearMonthDay)
typedef QCalendar::YearMonthDay QCalendar__YearMonthDay;
#else
class QCalendar__YearMonthDay;
#endif
class QDate;
class QLocale;
#else
typedef struct QCalendar QCalendar;
typedef struct QCalendar__YearMonthDay QCalendar__YearMonthDay;
typedef struct QDate QDate;
typedef struct QLocale QLocale;
#endif

QCalendar* QCalendar_new();
QCalendar* QCalendar_new2(uintptr_t system);
bool QCalendar_IsValid(QCalendar* self);
int QCalendar_DaysInMonth(QCalendar* self, int month);
int QCalendar_DaysInYear(QCalendar* self, int year);
int QCalendar_MonthsInYear(QCalendar* self, int year);
bool QCalendar_IsDateValid(QCalendar* self, int year, int month, int day);
bool QCalendar_IsLeapYear(QCalendar* self, int year);
bool QCalendar_IsGregorian(QCalendar* self);
bool QCalendar_IsLunar(QCalendar* self);
bool QCalendar_IsLuniSolar(QCalendar* self);
bool QCalendar_IsSolar(QCalendar* self);
bool QCalendar_IsProleptic(QCalendar* self);
bool QCalendar_HasYearZero(QCalendar* self);
int QCalendar_MaximumDaysInMonth(QCalendar* self);
int QCalendar_MinimumDaysInMonth(QCalendar* self);
int QCalendar_MaximumMonthsInYear(QCalendar* self);
void QCalendar_Name(QCalendar* self, char** _out, int* _out_Strlen);
QDate* QCalendar_DateFromParts(QCalendar* self, int year, int month, int day);
QDate* QCalendar_DateFromPartsWithParts(QCalendar* self, QCalendar__YearMonthDay* parts);
QCalendar__YearMonthDay* QCalendar_PartsFromDate(QCalendar* self, QDate* date);
int QCalendar_DayOfWeek(QCalendar* self, QDate* date);
void QCalendar_MonthName(QCalendar* self, QLocale* locale, int month, char** _out, int* _out_Strlen);
void QCalendar_StandaloneMonthName(QCalendar* self, QLocale* locale, int month, char** _out, int* _out_Strlen);
void QCalendar_WeekDayName(QCalendar* self, QLocale* locale, int day, char** _out, int* _out_Strlen);
void QCalendar_StandaloneWeekDayName(QCalendar* self, QLocale* locale, int day, char** _out, int* _out_Strlen);
void QCalendar_AvailableCalendars(char*** _out, int** _out_Lengths, size_t* _out_len);
int QCalendar_DaysInMonth2(QCalendar* self, int month, int year);
void QCalendar_MonthName3(QCalendar* self, QLocale* locale, int month, int year, char** _out, int* _out_Strlen);
void QCalendar_MonthName4(QCalendar* self, QLocale* locale, int month, int year, uintptr_t format, char** _out, int* _out_Strlen);
void QCalendar_StandaloneMonthName3(QCalendar* self, QLocale* locale, int month, int year, char** _out, int* _out_Strlen);
void QCalendar_StandaloneMonthName4(QCalendar* self, QLocale* locale, int month, int year, uintptr_t format, char** _out, int* _out_Strlen);
void QCalendar_WeekDayName3(QCalendar* self, QLocale* locale, int day, uintptr_t format, char** _out, int* _out_Strlen);
void QCalendar_StandaloneWeekDayName3(QCalendar* self, QLocale* locale, int day, uintptr_t format, char** _out, int* _out_Strlen);
void QCalendar_Delete(QCalendar* self);

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new();
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new2(int y);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new3(int y, int m);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new4(int y, int m, int d);
bool QCalendar__YearMonthDay_IsValid(QCalendar__YearMonthDay* self);
void QCalendar__YearMonthDay_Delete(QCalendar__YearMonthDay* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
