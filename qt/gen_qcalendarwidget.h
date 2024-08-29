#ifndef GEN_QCALENDARWIDGET_H
#define GEN_QCALENDARWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCalendar;
class QCalendarWidget;
class QDate;
class QMetaObject;
class QSize;
class QTextCharFormat;
class QWidget;
#else
typedef struct QCalendar QCalendar;
typedef struct QCalendarWidget QCalendarWidget;
typedef struct QDate QDate;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QWidget QWidget;
#endif

QCalendarWidget* QCalendarWidget_new();
QCalendarWidget* QCalendarWidget_new2(QWidget* parent);
QMetaObject* QCalendarWidget_MetaObject(QCalendarWidget* self);
void QCalendarWidget_Tr(const char* s, char** _out, int* _out_Strlen);
void QCalendarWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QCalendarWidget_SizeHint(QCalendarWidget* self);
QSize* QCalendarWidget_MinimumSizeHint(QCalendarWidget* self);
QDate* QCalendarWidget_SelectedDate(QCalendarWidget* self);
int QCalendarWidget_YearShown(QCalendarWidget* self);
int QCalendarWidget_MonthShown(QCalendarWidget* self);
QDate* QCalendarWidget_MinimumDate(QCalendarWidget* self);
void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date);
QDate* QCalendarWidget_MaximumDate(QCalendarWidget* self);
void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date);
uintptr_t QCalendarWidget_FirstDayOfWeek(QCalendarWidget* self);
void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, uintptr_t dayOfWeek);
bool QCalendarWidget_IsNavigationBarVisible(QCalendarWidget* self);
bool QCalendarWidget_IsGridVisible(QCalendarWidget* self);
QCalendar* QCalendarWidget_Calendar(QCalendarWidget* self);
void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar);
uintptr_t QCalendarWidget_SelectionMode(QCalendarWidget* self);
void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, uintptr_t mode);
uintptr_t QCalendarWidget_HorizontalHeaderFormat(QCalendarWidget* self);
void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, uintptr_t format);
uintptr_t QCalendarWidget_VerticalHeaderFormat(QCalendarWidget* self);
void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, uintptr_t format);
QTextCharFormat* QCalendarWidget_HeaderTextFormat(QCalendarWidget* self);
void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, QTextCharFormat* format);
QTextCharFormat* QCalendarWidget_WeekdayTextFormat(QCalendarWidget* self, uintptr_t dayOfWeek);
void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, uintptr_t dayOfWeek, QTextCharFormat* format);
QTextCharFormat* QCalendarWidget_DateTextFormatWithDate(QCalendarWidget* self, QDate* date);
void QCalendarWidget_SetDateTextFormat(QCalendarWidget* self, QDate* date, QTextCharFormat* format);
bool QCalendarWidget_IsDateEditEnabled(QCalendarWidget* self);
void QCalendarWidget_SetDateEditEnabled(QCalendarWidget* self, bool enable);
int QCalendarWidget_DateEditAcceptDelay(QCalendarWidget* self);
void QCalendarWidget_SetDateEditAcceptDelay(QCalendarWidget* self, int delay);
void QCalendarWidget_SetSelectedDate(QCalendarWidget* self, QDate* date);
void QCalendarWidget_SetDateRange(QCalendarWidget* self, QDate* min, QDate* max);
void QCalendarWidget_SetCurrentPage(QCalendarWidget* self, int year, int month);
void QCalendarWidget_SetGridVisible(QCalendarWidget* self, bool show);
void QCalendarWidget_SetNavigationBarVisible(QCalendarWidget* self, bool visible);
void QCalendarWidget_ShowNextMonth(QCalendarWidget* self);
void QCalendarWidget_ShowPreviousMonth(QCalendarWidget* self);
void QCalendarWidget_ShowNextYear(QCalendarWidget* self);
void QCalendarWidget_ShowPreviousYear(QCalendarWidget* self);
void QCalendarWidget_ShowSelectedDate(QCalendarWidget* self);
void QCalendarWidget_ShowToday(QCalendarWidget* self);
void QCalendarWidget_SelectionChanged(QCalendarWidget* self);
void QCalendarWidget_connect_SelectionChanged(QCalendarWidget* self, void* slot);
void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date);
void QCalendarWidget_connect_Clicked(QCalendarWidget* self, void* slot);
void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date);
void QCalendarWidget_connect_Activated(QCalendarWidget* self, void* slot);
void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month);
void QCalendarWidget_connect_CurrentPageChanged(QCalendarWidget* self, void* slot);
void QCalendarWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QCalendarWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QCalendarWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QCalendarWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QCalendarWidget_Delete(QCalendarWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
