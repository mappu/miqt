#pragma once
#ifndef MIQT_QT_GEN_QCALENDARWIDGET_H
#define MIQT_QT_GEN_QCALENDARWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QActionEvent;
class QByteArray;
class QCalendar;
class QCalendarWidget;
class QCloseEvent;
class QContextMenuEvent;
class QDate;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTextCharFormat;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QByteArray QByteArray;
typedef struct QCalendar QCalendar;
typedef struct QCalendarWidget QCalendarWidget;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDate QDate;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QCalendarWidget_new(QWidget* parent, QCalendarWidget** outptr_QCalendarWidget, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QCalendarWidget_new2(QCalendarWidget** outptr_QCalendarWidget, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QCalendarWidget_MetaObject(const QCalendarWidget* self);
void* QCalendarWidget_Metacast(QCalendarWidget* self, const char* param1);
struct miqt_string QCalendarWidget_Tr(const char* s);
struct miqt_string QCalendarWidget_TrUtf8(const char* s);
QSize* QCalendarWidget_SizeHint(const QCalendarWidget* self);
QSize* QCalendarWidget_MinimumSizeHint(const QCalendarWidget* self);
QDate* QCalendarWidget_SelectedDate(const QCalendarWidget* self);
int QCalendarWidget_YearShown(const QCalendarWidget* self);
int QCalendarWidget_MonthShown(const QCalendarWidget* self);
QDate* QCalendarWidget_MinimumDate(const QCalendarWidget* self);
void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date);
QDate* QCalendarWidget_MaximumDate(const QCalendarWidget* self);
void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date);
int QCalendarWidget_FirstDayOfWeek(const QCalendarWidget* self);
void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek);
bool QCalendarWidget_IsNavigationBarVisible(const QCalendarWidget* self);
bool QCalendarWidget_IsGridVisible(const QCalendarWidget* self);
QCalendar* QCalendarWidget_Calendar(const QCalendarWidget* self);
void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar);
int QCalendarWidget_SelectionMode(const QCalendarWidget* self);
void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, int mode);
int QCalendarWidget_HorizontalHeaderFormat(const QCalendarWidget* self);
void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, int format);
int QCalendarWidget_VerticalHeaderFormat(const QCalendarWidget* self);
void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, int format);
QTextCharFormat* QCalendarWidget_HeaderTextFormat(const QCalendarWidget* self);
void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, QTextCharFormat* format);
QTextCharFormat* QCalendarWidget_WeekdayTextFormat(const QCalendarWidget* self, int dayOfWeek);
void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, QTextCharFormat* format);
struct miqt_map /* of QDate* to QTextCharFormat* */  QCalendarWidget_DateTextFormat(const QCalendarWidget* self);
QTextCharFormat* QCalendarWidget_DateTextFormatWithDate(const QCalendarWidget* self, QDate* date);
void QCalendarWidget_SetDateTextFormat(QCalendarWidget* self, QDate* date, QTextCharFormat* format);
bool QCalendarWidget_IsDateEditEnabled(const QCalendarWidget* self);
void QCalendarWidget_SetDateEditEnabled(QCalendarWidget* self, bool enable);
int QCalendarWidget_DateEditAcceptDelay(const QCalendarWidget* self);
void QCalendarWidget_SetDateEditAcceptDelay(QCalendarWidget* self, int delay);
bool QCalendarWidget_Event(QCalendarWidget* self, QEvent* event);
bool QCalendarWidget_EventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
void QCalendarWidget_MousePressEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_ResizeEvent(QCalendarWidget* self, QResizeEvent* event);
void QCalendarWidget_KeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
void QCalendarWidget_PaintCell(const QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date);
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
void QCalendarWidget_connect_SelectionChanged(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date);
void QCalendarWidget_connect_Clicked(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date);
void QCalendarWidget_connect_Activated(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month);
void QCalendarWidget_connect_CurrentPageChanged(QCalendarWidget* self, intptr_t slot);
struct miqt_string QCalendarWidget_Tr2(const char* s, const char* c);
struct miqt_string QCalendarWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QCalendarWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QCalendarWidget_TrUtf83(const char* s, const char* c, int n);
void QCalendarWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QCalendarWidget_virtualbase_SizeHint(const void* self);
void QCalendarWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QCalendarWidget_virtualbase_MinimumSizeHint(const void* self);
void QCalendarWidget_override_virtual_Event(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_Event(void* self, QEvent* event);
void QCalendarWidget_override_virtual_EventFilter(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QCalendarWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QCalendarWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QCalendarWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QCalendarWidget_override_virtual_PaintCell(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_PaintCell(const void* self, QPainter* painter, QRect* rect, QDate* date);
void QCalendarWidget_override_virtual_DevType(void* self, intptr_t slot);
int QCalendarWidget_virtualbase_DevType(const void* self);
void QCalendarWidget_override_virtual_SetVisible(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_SetVisible(void* self, bool visible);
void QCalendarWidget_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QCalendarWidget_virtualbase_HeightForWidth(const void* self, int param1);
void QCalendarWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_HasHeightForWidth(const void* self);
void QCalendarWidget_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QCalendarWidget_virtualbase_PaintEngine(const void* self);
void QCalendarWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QCalendarWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QCalendarWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QCalendarWidget_override_virtual_WheelEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QCalendarWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QCalendarWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QCalendarWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QCalendarWidget_override_virtual_EnterEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_EnterEvent(void* self, QEvent* event);
void QCalendarWidget_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_LeaveEvent(void* self, QEvent* event);
void QCalendarWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QCalendarWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QCalendarWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QCalendarWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QCalendarWidget_override_virtual_TabletEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QCalendarWidget_override_virtual_ActionEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QCalendarWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QCalendarWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QCalendarWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QCalendarWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_DropEvent(void* self, QDropEvent* event);
void QCalendarWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QCalendarWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
void QCalendarWidget_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QCalendarWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QCalendarWidget_override_virtual_Metric(void* self, intptr_t slot);
int QCalendarWidget_virtualbase_Metric(const void* self, int param1);
void QCalendarWidget_override_virtual_InitPainter(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_InitPainter(const void* self, QPainter* painter);
void QCalendarWidget_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QCalendarWidget_virtualbase_Redirected(const void* self, QPoint* offset);
void QCalendarWidget_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QCalendarWidget_virtualbase_SharedPainter(const void* self);
void QCalendarWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QCalendarWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QCalendarWidget_virtualbase_InputMethodQuery(const void* self, int param1);
void QCalendarWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
void QCalendarWidget_Delete(QCalendarWidget* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
