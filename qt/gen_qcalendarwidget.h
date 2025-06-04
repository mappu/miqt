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
class QCalendar;
class QCalendarWidget;
class QChildEvent;
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
class QMetaMethod;
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
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QCalendar QCalendar;
typedef struct QCalendarWidget QCalendarWidget;
typedef struct QChildEvent QChildEvent;
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
typedef struct QMetaMethod QMetaMethod;
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
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QCalendarWidget* QCalendarWidget_new(QWidget* parent);
QCalendarWidget* QCalendarWidget_new2();
void QCalendarWidget_virtbase(QCalendarWidget* src, QWidget** outptr_QWidget);
QMetaObject* QCalendarWidget_metaObject(const QCalendarWidget* self);
void* QCalendarWidget_metacast(QCalendarWidget* self, const char* param1);
struct miqt_string QCalendarWidget_tr(const char* s);
struct miqt_string QCalendarWidget_trUtf8(const char* s);
QSize* QCalendarWidget_sizeHint(const QCalendarWidget* self);
QSize* QCalendarWidget_minimumSizeHint(const QCalendarWidget* self);
QDate* QCalendarWidget_selectedDate(const QCalendarWidget* self);
int QCalendarWidget_yearShown(const QCalendarWidget* self);
int QCalendarWidget_monthShown(const QCalendarWidget* self);
QDate* QCalendarWidget_minimumDate(const QCalendarWidget* self);
void QCalendarWidget_setMinimumDate(QCalendarWidget* self, QDate* date);
QDate* QCalendarWidget_maximumDate(const QCalendarWidget* self);
void QCalendarWidget_setMaximumDate(QCalendarWidget* self, QDate* date);
int QCalendarWidget_firstDayOfWeek(const QCalendarWidget* self);
void QCalendarWidget_setFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek);
bool QCalendarWidget_isNavigationBarVisible(const QCalendarWidget* self);
bool QCalendarWidget_isGridVisible(const QCalendarWidget* self);
QCalendar* QCalendarWidget_calendar(const QCalendarWidget* self);
void QCalendarWidget_setCalendar(QCalendarWidget* self, QCalendar* calendar);
int QCalendarWidget_selectionMode(const QCalendarWidget* self);
void QCalendarWidget_setSelectionMode(QCalendarWidget* self, int mode);
int QCalendarWidget_horizontalHeaderFormat(const QCalendarWidget* self);
void QCalendarWidget_setHorizontalHeaderFormat(QCalendarWidget* self, int format);
int QCalendarWidget_verticalHeaderFormat(const QCalendarWidget* self);
void QCalendarWidget_setVerticalHeaderFormat(QCalendarWidget* self, int format);
QTextCharFormat* QCalendarWidget_headerTextFormat(const QCalendarWidget* self);
void QCalendarWidget_setHeaderTextFormat(QCalendarWidget* self, QTextCharFormat* format);
QTextCharFormat* QCalendarWidget_weekdayTextFormat(const QCalendarWidget* self, int dayOfWeek);
void QCalendarWidget_setWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, QTextCharFormat* format);
struct miqt_map /* of QDate* to QTextCharFormat* */  QCalendarWidget_dateTextFormat(const QCalendarWidget* self);
QTextCharFormat* QCalendarWidget_dateTextFormatWithDate(const QCalendarWidget* self, QDate* date);
void QCalendarWidget_setDateTextFormat(QCalendarWidget* self, QDate* date, QTextCharFormat* format);
bool QCalendarWidget_isDateEditEnabled(const QCalendarWidget* self);
void QCalendarWidget_setDateEditEnabled(QCalendarWidget* self, bool enable);
int QCalendarWidget_dateEditAcceptDelay(const QCalendarWidget* self);
void QCalendarWidget_setDateEditAcceptDelay(QCalendarWidget* self, int delay);
bool QCalendarWidget_event(QCalendarWidget* self, QEvent* event);
bool QCalendarWidget_eventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
void QCalendarWidget_mousePressEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_resizeEvent(QCalendarWidget* self, QResizeEvent* event);
void QCalendarWidget_keyPressEvent(QCalendarWidget* self, QKeyEvent* event);
void QCalendarWidget_paintCell(const QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date);
void QCalendarWidget_setSelectedDate(QCalendarWidget* self, QDate* date);
void QCalendarWidget_setDateRange(QCalendarWidget* self, QDate* min, QDate* max);
void QCalendarWidget_setCurrentPage(QCalendarWidget* self, int year, int month);
void QCalendarWidget_setGridVisible(QCalendarWidget* self, bool show);
void QCalendarWidget_setNavigationBarVisible(QCalendarWidget* self, bool visible);
void QCalendarWidget_showNextMonth(QCalendarWidget* self);
void QCalendarWidget_showPreviousMonth(QCalendarWidget* self);
void QCalendarWidget_showNextYear(QCalendarWidget* self);
void QCalendarWidget_showPreviousYear(QCalendarWidget* self);
void QCalendarWidget_showSelectedDate(QCalendarWidget* self);
void QCalendarWidget_showToday(QCalendarWidget* self);
void QCalendarWidget_selectionChanged(QCalendarWidget* self);
void QCalendarWidget_connect_selectionChanged(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_clicked(QCalendarWidget* self, QDate* date);
void QCalendarWidget_connect_clicked(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_activated(QCalendarWidget* self, QDate* date);
void QCalendarWidget_connect_activated(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_currentPageChanged(QCalendarWidget* self, int year, int month);
void QCalendarWidget_connect_currentPageChanged(QCalendarWidget* self, intptr_t slot);
struct miqt_string QCalendarWidget_tr2(const char* s, const char* c);
struct miqt_string QCalendarWidget_tr3(const char* s, const char* c, int n);
struct miqt_string QCalendarWidget_trUtf82(const char* s, const char* c);
struct miqt_string QCalendarWidget_trUtf83(const char* s, const char* c, int n);

bool QCalendarWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QCalendarWidget_virtualbase_sizeHint(const void* self);
bool QCalendarWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QCalendarWidget_virtualbase_minimumSizeHint(const void* self);
bool QCalendarWidget_override_virtual_event(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_event(void* self, QEvent* event);
bool QCalendarWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCalendarWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QCalendarWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QCalendarWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QCalendarWidget_override_virtual_paintCell(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_paintCell(const void* self, QPainter* painter, QRect* rect, QDate* date);
bool QCalendarWidget_override_virtual_devType(void* self, intptr_t slot);
int QCalendarWidget_virtualbase_devType(const void* self);
bool QCalendarWidget_override_virtual_setVisible(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_setVisible(void* self, bool visible);
bool QCalendarWidget_override_virtual_heightForWidth(void* self, intptr_t slot);
int QCalendarWidget_virtualbase_heightForWidth(const void* self, int param1);
bool QCalendarWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_hasHeightForWidth(const void* self);
bool QCalendarWidget_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QCalendarWidget_virtualbase_paintEngine(const void* self);
bool QCalendarWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QCalendarWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QCalendarWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QCalendarWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QCalendarWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QCalendarWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QCalendarWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QCalendarWidget_override_virtual_enterEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_enterEvent(void* self, QEvent* event);
bool QCalendarWidget_override_virtual_leaveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_leaveEvent(void* self, QEvent* event);
bool QCalendarWidget_override_virtual_paintEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QCalendarWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QCalendarWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QCalendarWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QCalendarWidget_override_virtual_tabletEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QCalendarWidget_override_virtual_actionEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QCalendarWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QCalendarWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QCalendarWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QCalendarWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QCalendarWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool QCalendarWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QCalendarWidget_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QCalendarWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_changeEvent(void* self, QEvent* param1);
bool QCalendarWidget_override_virtual_metric(void* self, intptr_t slot);
int QCalendarWidget_virtualbase_metric(const void* self, int param1);
bool QCalendarWidget_override_virtual_initPainter(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_initPainter(const void* self, QPainter* painter);
bool QCalendarWidget_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QCalendarWidget_virtualbase_redirected(const void* self, QPoint* offset);
bool QCalendarWidget_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QCalendarWidget_virtualbase_sharedPainter(const void* self);
bool QCalendarWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QCalendarWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QCalendarWidget_virtualbase_inputMethodQuery(const void* self, int param1);
bool QCalendarWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QCalendarWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QCalendarWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCalendarWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCalendarWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QCalendarWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCalendarWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCalendarWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QCalendarWidget_protectedbase_updateCell(bool* _dynamic_cast_ok, void* self, QDate* date);
void QCalendarWidget_protectedbase_updateCells(bool* _dynamic_cast_ok, void* self);
void QCalendarWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QCalendarWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QCalendarWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QCalendarWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QCalendarWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QCalendarWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCalendarWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCalendarWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCalendarWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QCalendarWidget_delete(QCalendarWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
