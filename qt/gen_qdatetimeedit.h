#ifndef GEN_QDATETIMEEDIT_H
#define GEN_QDATETIMEEDIT_H

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
class QDateEdit;
class QDateTime;
class QDateTimeEdit;
class QEvent;
class QMetaObject;
class QSize;
class QTime;
class QTimeEdit;
class QWidget;
#else
typedef struct QCalendar QCalendar;
typedef struct QCalendarWidget QCalendarWidget;
typedef struct QDate QDate;
typedef struct QDateEdit QDateEdit;
typedef struct QDateTime QDateTime;
typedef struct QDateTimeEdit QDateTimeEdit;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QTime QTime;
typedef struct QTimeEdit QTimeEdit;
typedef struct QWidget QWidget;
#endif

QDateTimeEdit* QDateTimeEdit_new();
QDateTimeEdit* QDateTimeEdit_new2(QDateTime* dt);
QDateTimeEdit* QDateTimeEdit_new3(QDate* d);
QDateTimeEdit* QDateTimeEdit_new4(QTime* t);
QDateTimeEdit* QDateTimeEdit_new5(QWidget* parent);
QDateTimeEdit* QDateTimeEdit_new6(QDateTime* dt, QWidget* parent);
QDateTimeEdit* QDateTimeEdit_new7(QDate* d, QWidget* parent);
QDateTimeEdit* QDateTimeEdit_new8(QTime* t, QWidget* parent);
QMetaObject* QDateTimeEdit_MetaObject(QDateTimeEdit* self);
void QDateTimeEdit_Tr(const char* s, char** _out, int* _out_Strlen);
void QDateTimeEdit_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QDateTime* QDateTimeEdit_DateTime(QDateTimeEdit* self);
QDate* QDateTimeEdit_Date(QDateTimeEdit* self);
QTime* QDateTimeEdit_Time(QDateTimeEdit* self);
QCalendar* QDateTimeEdit_Calendar(QDateTimeEdit* self);
void QDateTimeEdit_SetCalendar(QDateTimeEdit* self, QCalendar* calendar);
QDateTime* QDateTimeEdit_MinimumDateTime(QDateTimeEdit* self);
void QDateTimeEdit_ClearMinimumDateTime(QDateTimeEdit* self);
void QDateTimeEdit_SetMinimumDateTime(QDateTimeEdit* self, QDateTime* dt);
QDateTime* QDateTimeEdit_MaximumDateTime(QDateTimeEdit* self);
void QDateTimeEdit_ClearMaximumDateTime(QDateTimeEdit* self);
void QDateTimeEdit_SetMaximumDateTime(QDateTimeEdit* self, QDateTime* dt);
void QDateTimeEdit_SetDateTimeRange(QDateTimeEdit* self, QDateTime* min, QDateTime* max);
QDate* QDateTimeEdit_MinimumDate(QDateTimeEdit* self);
void QDateTimeEdit_SetMinimumDate(QDateTimeEdit* self, QDate* min);
void QDateTimeEdit_ClearMinimumDate(QDateTimeEdit* self);
QDate* QDateTimeEdit_MaximumDate(QDateTimeEdit* self);
void QDateTimeEdit_SetMaximumDate(QDateTimeEdit* self, QDate* max);
void QDateTimeEdit_ClearMaximumDate(QDateTimeEdit* self);
void QDateTimeEdit_SetDateRange(QDateTimeEdit* self, QDate* min, QDate* max);
QTime* QDateTimeEdit_MinimumTime(QDateTimeEdit* self);
void QDateTimeEdit_SetMinimumTime(QDateTimeEdit* self, QTime* min);
void QDateTimeEdit_ClearMinimumTime(QDateTimeEdit* self);
QTime* QDateTimeEdit_MaximumTime(QDateTimeEdit* self);
void QDateTimeEdit_SetMaximumTime(QDateTimeEdit* self, QTime* max);
void QDateTimeEdit_ClearMaximumTime(QDateTimeEdit* self);
void QDateTimeEdit_SetTimeRange(QDateTimeEdit* self, QTime* min, QTime* max);
int QDateTimeEdit_DisplayedSections(QDateTimeEdit* self);
uintptr_t QDateTimeEdit_CurrentSection(QDateTimeEdit* self);
uintptr_t QDateTimeEdit_SectionAt(QDateTimeEdit* self, int index);
void QDateTimeEdit_SetCurrentSection(QDateTimeEdit* self, uintptr_t section);
int QDateTimeEdit_CurrentSectionIndex(QDateTimeEdit* self);
void QDateTimeEdit_SetCurrentSectionIndex(QDateTimeEdit* self, int index);
QCalendarWidget* QDateTimeEdit_CalendarWidget(QDateTimeEdit* self);
void QDateTimeEdit_SetCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget);
int QDateTimeEdit_SectionCount(QDateTimeEdit* self);
void QDateTimeEdit_SetSelectedSection(QDateTimeEdit* self, uintptr_t section);
void QDateTimeEdit_SectionText(QDateTimeEdit* self, uintptr_t section, char** _out, int* _out_Strlen);
void QDateTimeEdit_DisplayFormat(QDateTimeEdit* self, char** _out, int* _out_Strlen);
void QDateTimeEdit_SetDisplayFormat(QDateTimeEdit* self, const char* format, size_t format_Strlen);
bool QDateTimeEdit_CalendarPopup(QDateTimeEdit* self);
void QDateTimeEdit_SetCalendarPopup(QDateTimeEdit* self, bool enable);
uintptr_t QDateTimeEdit_TimeSpec(QDateTimeEdit* self);
void QDateTimeEdit_SetTimeSpec(QDateTimeEdit* self, uintptr_t spec);
QSize* QDateTimeEdit_SizeHint(QDateTimeEdit* self);
void QDateTimeEdit_Clear(QDateTimeEdit* self);
void QDateTimeEdit_StepBy(QDateTimeEdit* self, int steps);
bool QDateTimeEdit_Event(QDateTimeEdit* self, QEvent* event);
void QDateTimeEdit_DateTimeChanged(QDateTimeEdit* self, QDateTime* dateTime);
void QDateTimeEdit_connect_DateTimeChanged(QDateTimeEdit* self, void* slot);
void QDateTimeEdit_TimeChanged(QDateTimeEdit* self, QTime* time);
void QDateTimeEdit_connect_TimeChanged(QDateTimeEdit* self, void* slot);
void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date);
void QDateTimeEdit_connect_DateChanged(QDateTimeEdit* self, void* slot);
void QDateTimeEdit_SetDateTime(QDateTimeEdit* self, QDateTime* dateTime);
void QDateTimeEdit_SetDate(QDateTimeEdit* self, QDate* date);
void QDateTimeEdit_SetTime(QDateTimeEdit* self, QTime* time);
void QDateTimeEdit_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDateTimeEdit_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDateTimeEdit_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDateTimeEdit_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDateTimeEdit_Delete(QDateTimeEdit* self);

QTimeEdit* QTimeEdit_new();
QTimeEdit* QTimeEdit_new2(QTime* time);
QTimeEdit* QTimeEdit_new3(QWidget* parent);
QTimeEdit* QTimeEdit_new4(QTime* time, QWidget* parent);
QMetaObject* QTimeEdit_MetaObject(QTimeEdit* self);
void QTimeEdit_Tr(const char* s, char** _out, int* _out_Strlen);
void QTimeEdit_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QTimeEdit_UserTimeChanged(QTimeEdit* self, QTime* time);
void QTimeEdit_connect_UserTimeChanged(QTimeEdit* self, void* slot);
void QTimeEdit_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTimeEdit_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTimeEdit_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTimeEdit_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTimeEdit_Delete(QTimeEdit* self);

QDateEdit* QDateEdit_new();
QDateEdit* QDateEdit_new2(QDate* date);
QDateEdit* QDateEdit_new3(QWidget* parent);
QDateEdit* QDateEdit_new4(QDate* date, QWidget* parent);
QMetaObject* QDateEdit_MetaObject(QDateEdit* self);
void QDateEdit_Tr(const char* s, char** _out, int* _out_Strlen);
void QDateEdit_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QDateEdit_UserDateChanged(QDateEdit* self, QDate* date);
void QDateEdit_connect_UserDateChanged(QDateEdit* self, void* slot);
void QDateEdit_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDateEdit_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDateEdit_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDateEdit_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDateEdit_Delete(QDateEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
