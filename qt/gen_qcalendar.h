#pragma once
#ifndef MIQT_QT_GEN_QCALENDAR_H
#define MIQT_QT_GEN_QCALENDAR_H

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
QCalendar* QCalendar_new2(int system);
bool QCalendar_isValid(const QCalendar* self);
int QCalendar_daysInMonth(const QCalendar* self, int month);
int QCalendar_daysInYear(const QCalendar* self, int year);
int QCalendar_monthsInYear(const QCalendar* self, int year);
bool QCalendar_isDateValid(const QCalendar* self, int year, int month, int day);
bool QCalendar_isLeapYear(const QCalendar* self, int year);
bool QCalendar_isGregorian(const QCalendar* self);
bool QCalendar_isLunar(const QCalendar* self);
bool QCalendar_isLuniSolar(const QCalendar* self);
bool QCalendar_isSolar(const QCalendar* self);
bool QCalendar_isProleptic(const QCalendar* self);
bool QCalendar_hasYearZero(const QCalendar* self);
int QCalendar_maximumDaysInMonth(const QCalendar* self);
int QCalendar_minimumDaysInMonth(const QCalendar* self);
int QCalendar_maximumMonthsInYear(const QCalendar* self);
struct miqt_string QCalendar_name(const QCalendar* self);
QDate* QCalendar_dateFromParts(const QCalendar* self, int year, int month, int day);
QDate* QCalendar_dateFromPartsWithParts(const QCalendar* self, QCalendar__YearMonthDay* parts);
QCalendar__YearMonthDay* QCalendar_partsFromDate(const QCalendar* self, QDate* date);
int QCalendar_dayOfWeek(const QCalendar* self, QDate* date);
struct miqt_string QCalendar_monthName(const QCalendar* self, QLocale* locale, int month);
struct miqt_string QCalendar_standaloneMonthName(const QCalendar* self, QLocale* locale, int month);
struct miqt_string QCalendar_weekDayName(const QCalendar* self, QLocale* locale, int day);
struct miqt_string QCalendar_standaloneWeekDayName(const QCalendar* self, QLocale* locale, int day);
struct miqt_array /* of struct miqt_string */  QCalendar_availableCalendars();
int QCalendar_daysInMonth2(const QCalendar* self, int month, int year);
struct miqt_string QCalendar_monthName2(const QCalendar* self, QLocale* locale, int month, int year);
struct miqt_string QCalendar_monthName3(const QCalendar* self, QLocale* locale, int month, int year, int format);
struct miqt_string QCalendar_standaloneMonthName2(const QCalendar* self, QLocale* locale, int month, int year);
struct miqt_string QCalendar_standaloneMonthName3(const QCalendar* self, QLocale* locale, int month, int year, int format);
struct miqt_string QCalendar_weekDayName2(const QCalendar* self, QLocale* locale, int day, int format);
struct miqt_string QCalendar_standaloneWeekDayName2(const QCalendar* self, QLocale* locale, int day, int format);

void QCalendar_delete(QCalendar* self);

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new();
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new2(int y);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new3(int y, int m);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new4(int y, int m, int d);
bool QCalendar__YearMonthDay_isValid(const QCalendar__YearMonthDay* self);
int QCalendar__YearMonthDay_year(const QCalendar__YearMonthDay* self);
void QCalendar__YearMonthDay_setYear(QCalendar__YearMonthDay* self, int year);
int QCalendar__YearMonthDay_month(const QCalendar__YearMonthDay* self);
void QCalendar__YearMonthDay_setMonth(QCalendar__YearMonthDay* self, int month);
int QCalendar__YearMonthDay_day(const QCalendar__YearMonthDay* self);
void QCalendar__YearMonthDay_setDay(QCalendar__YearMonthDay* self, int day);

void QCalendar__YearMonthDay_delete(QCalendar__YearMonthDay* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
