#ifndef GEN_QCALENDAR_H
#define GEN_QCALENDAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QCalendar;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__SystemId)
typedef QCalendar::SystemId QCalendar__SystemId;
#else
class QCalendar__SystemId;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__YearMonthDay)
typedef QCalendar::YearMonthDay QCalendar__YearMonthDay;
#else
class QCalendar__YearMonthDay;
#endif
class QDate;
class QLocale;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QCalendar QCalendar;
typedef struct QCalendar__SystemId QCalendar__SystemId;
typedef struct QCalendar__YearMonthDay QCalendar__YearMonthDay;
typedef struct QDate QDate;
typedef struct QLocale QLocale;
#endif

QCalendar* QCalendar_new();
QCalendar* QCalendar_new2(int system);
QCalendar* QCalendar_new3(QAnyStringView* name);
QCalendar* QCalendar_new4(QCalendar__SystemId* id);
bool QCalendar_IsValid(const QCalendar* self);
int QCalendar_DaysInMonth(const QCalendar* self, int month);
int QCalendar_DaysInYear(const QCalendar* self, int year);
int QCalendar_MonthsInYear(const QCalendar* self, int year);
bool QCalendar_IsDateValid(const QCalendar* self, int year, int month, int day);
bool QCalendar_IsLeapYear(const QCalendar* self, int year);
bool QCalendar_IsGregorian(const QCalendar* self);
bool QCalendar_IsLunar(const QCalendar* self);
bool QCalendar_IsLuniSolar(const QCalendar* self);
bool QCalendar_IsSolar(const QCalendar* self);
bool QCalendar_IsProleptic(const QCalendar* self);
bool QCalendar_HasYearZero(const QCalendar* self);
int QCalendar_MaximumDaysInMonth(const QCalendar* self);
int QCalendar_MinimumDaysInMonth(const QCalendar* self);
int QCalendar_MaximumMonthsInYear(const QCalendar* self);
struct miqt_string QCalendar_Name(const QCalendar* self);
QDate* QCalendar_DateFromParts(const QCalendar* self, int year, int month, int day);
QDate* QCalendar_DateFromPartsWithParts(const QCalendar* self, QCalendar__YearMonthDay* parts);
QCalendar__YearMonthDay* QCalendar_PartsFromDate(const QCalendar* self, QDate* date);
int QCalendar_DayOfWeek(const QCalendar* self, QDate* date);
struct miqt_string QCalendar_MonthName(const QCalendar* self, QLocale* locale, int month);
struct miqt_string QCalendar_StandaloneMonthName(const QCalendar* self, QLocale* locale, int month);
struct miqt_string QCalendar_WeekDayName(const QCalendar* self, QLocale* locale, int day);
struct miqt_string QCalendar_StandaloneWeekDayName(const QCalendar* self, QLocale* locale, int day);
struct miqt_array* QCalendar_AvailableCalendars();
int QCalendar_DaysInMonth2(const QCalendar* self, int month, int year);
struct miqt_string QCalendar_MonthName3(const QCalendar* self, QLocale* locale, int month, int year);
struct miqt_string QCalendar_MonthName4(const QCalendar* self, QLocale* locale, int month, int year, int format);
struct miqt_string QCalendar_StandaloneMonthName3(const QCalendar* self, QLocale* locale, int month, int year);
struct miqt_string QCalendar_StandaloneMonthName4(const QCalendar* self, QLocale* locale, int month, int year, int format);
struct miqt_string QCalendar_WeekDayName3(const QCalendar* self, QLocale* locale, int day, int format);
struct miqt_string QCalendar_StandaloneWeekDayName3(const QCalendar* self, QLocale* locale, int day, int format);
void QCalendar_Delete(QCalendar* self);

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new();
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new2(int y);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new3(int y, int m);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new4(int y, int m, int d);
bool QCalendar__YearMonthDay_IsValid(const QCalendar__YearMonthDay* self);
void QCalendar__YearMonthDay_Delete(QCalendar__YearMonthDay* self);

QCalendar__SystemId* QCalendar__SystemId_new();
size_t QCalendar__SystemId_Index(const QCalendar__SystemId* self);
bool QCalendar__SystemId_IsValid(const QCalendar__SystemId* self);
void QCalendar__SystemId_Delete(QCalendar__SystemId* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
