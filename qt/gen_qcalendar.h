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
class QDate;
#else
typedef struct QCalendar QCalendar;
typedef struct QDate QDate;
#endif

QCalendar* QCalendar_new();
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
int QCalendar_DayOfWeek(QCalendar* self, QDate* date);
void QCalendar_AvailableCalendars(char*** _out, int** _out_Lengths, size_t* _out_len);
int QCalendar_DaysInMonth2(QCalendar* self, int month, int year);
void QCalendar_Delete(QCalendar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
