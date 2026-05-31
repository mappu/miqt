#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_WHEEL_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_WHEEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
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
class QRectF;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtWheel;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
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
typedef struct QRectF QRectF;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtWheel QwtWheel;
#endif

QwtWheel* QwtWheel_new(QWidget* parent);
QwtWheel* QwtWheel_new2();
void QwtWheel_virtbase(QwtWheel* src, QWidget** outptr_QWidget);
QMetaObject* QwtWheel_metaObject(const QwtWheel* self);
void* QwtWheel_metacast(QwtWheel* self, const char* param1);
struct miqt_string QwtWheel_tr(const char* s);
struct miqt_string QwtWheel_trUtf8(const char* s);
double QwtWheel_value(const QwtWheel* self);
void QwtWheel_setOrientation(QwtWheel* self, int orientation);
int QwtWheel_orientation(const QwtWheel* self);
double QwtWheel_totalAngle(const QwtWheel* self);
double QwtWheel_viewAngle(const QwtWheel* self);
void QwtWheel_setTickCount(QwtWheel* self, int tickCount);
int QwtWheel_tickCount(const QwtWheel* self);
void QwtWheel_setWheelWidth(QwtWheel* self, int wheelWidth);
int QwtWheel_wheelWidth(const QwtWheel* self);
void QwtWheel_setWheelBorderWidth(QwtWheel* self, int wheelBorderWidth);
int QwtWheel_wheelBorderWidth(const QwtWheel* self);
void QwtWheel_setBorderWidth(QwtWheel* self, int borderWidth);
int QwtWheel_borderWidth(const QwtWheel* self);
void QwtWheel_setInverted(QwtWheel* self, bool inverted);
bool QwtWheel_isInverted(const QwtWheel* self);
void QwtWheel_setWrapping(QwtWheel* self, bool wrapping);
bool QwtWheel_wrapping(const QwtWheel* self);
void QwtWheel_setSingleStep(QwtWheel* self, double singleStep);
double QwtWheel_singleStep(const QwtWheel* self);
void QwtWheel_setPageStepCount(QwtWheel* self, int pageStepCount);
int QwtWheel_pageStepCount(const QwtWheel* self);
void QwtWheel_setStepAlignment(QwtWheel* self, bool on);
bool QwtWheel_stepAlignment(const QwtWheel* self);
void QwtWheel_setRange(QwtWheel* self, double min, double max);
void QwtWheel_setMinimum(QwtWheel* self, double minimum);
double QwtWheel_minimum(const QwtWheel* self);
void QwtWheel_setMaximum(QwtWheel* self, double maximum);
double QwtWheel_maximum(const QwtWheel* self);
void QwtWheel_setUpdateInterval(QwtWheel* self, int updateInterval);
int QwtWheel_updateInterval(const QwtWheel* self);
void QwtWheel_setTracking(QwtWheel* self, bool tracking);
bool QwtWheel_isTracking(const QwtWheel* self);
double QwtWheel_mass(const QwtWheel* self);
void QwtWheel_setValue(QwtWheel* self, double value);
void QwtWheel_setTotalAngle(QwtWheel* self, double totalAngle);
void QwtWheel_setViewAngle(QwtWheel* self, double viewAngle);
void QwtWheel_setMass(QwtWheel* self, double mass);
void QwtWheel_valueChanged(QwtWheel* self, double value);
void QwtWheel_connect_valueChanged(QwtWheel* self, intptr_t slot);
void QwtWheel_wheelPressed(QwtWheel* self);
void QwtWheel_connect_wheelPressed(QwtWheel* self, intptr_t slot);
void QwtWheel_wheelReleased(QwtWheel* self);
void QwtWheel_connect_wheelReleased(QwtWheel* self, intptr_t slot);
void QwtWheel_wheelMoved(QwtWheel* self, double value);
void QwtWheel_connect_wheelMoved(QwtWheel* self, intptr_t slot);
void QwtWheel_paintEvent(QwtWheel* self, QPaintEvent* param1);
void QwtWheel_mousePressEvent(QwtWheel* self, QMouseEvent* param1);
void QwtWheel_mouseReleaseEvent(QwtWheel* self, QMouseEvent* param1);
void QwtWheel_mouseMoveEvent(QwtWheel* self, QMouseEvent* param1);
void QwtWheel_keyPressEvent(QwtWheel* self, QKeyEvent* param1);
void QwtWheel_wheelEvent(QwtWheel* self, QWheelEvent* param1);
void QwtWheel_timerEvent(QwtWheel* self, QTimerEvent* param1);
QSize* QwtWheel_sizeHint(const QwtWheel* self);
QSize* QwtWheel_minimumSizeHint(const QwtWheel* self);
void QwtWheel_drawTicks(QwtWheel* self, QPainter* param1, QRectF* param2);
void QwtWheel_drawWheelBackground(QwtWheel* self, QPainter* param1, QRectF* param2);
double QwtWheel_valueAt(const QwtWheel* self, QPoint* param1);
struct miqt_string QwtWheel_tr2(const char* s, const char* c);
struct miqt_string QwtWheel_tr3(const char* s, const char* c, int n);
struct miqt_string QwtWheel_trUtf82(const char* s, const char* c);
struct miqt_string QwtWheel_trUtf83(const char* s, const char* c, int n);

bool QwtWheel_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtWheel_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QwtWheel_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtWheel_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtWheel_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QwtWheel_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QwtWheel_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QwtWheel_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtWheel_virtualbase_sizeHint(const void* self);
bool QwtWheel_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtWheel_virtualbase_minimumSizeHint(const void* self);
bool QwtWheel_override_virtual_drawTicks(void* self, intptr_t slot);
void QwtWheel_virtualbase_drawTicks(void* self, QPainter* param1, QRectF* param2);
bool QwtWheel_override_virtual_drawWheelBackground(void* self, intptr_t slot);
void QwtWheel_virtualbase_drawWheelBackground(void* self, QPainter* param1, QRectF* param2);
bool QwtWheel_override_virtual_valueAt(void* self, intptr_t slot);
double QwtWheel_virtualbase_valueAt(const void* self, QPoint* param1);
bool QwtWheel_override_virtual_devType(void* self, intptr_t slot);
int QwtWheel_virtualbase_devType(const void* self);
bool QwtWheel_override_virtual_setVisible(void* self, intptr_t slot);
void QwtWheel_virtualbase_setVisible(void* self, bool visible);
bool QwtWheel_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtWheel_virtualbase_heightForWidth(const void* self, int param1);
bool QwtWheel_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtWheel_virtualbase_hasHeightForWidth(const void* self);
bool QwtWheel_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtWheel_virtualbase_paintEngine(const void* self);
bool QwtWheel_override_virtual_event(void* self, intptr_t slot);
bool QwtWheel_virtualbase_event(void* self, QEvent* event);
bool QwtWheel_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtWheel_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtWheel_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtWheel_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtWheel_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtWheel_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtWheel_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtWheel_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtWheel_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtWheel_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtWheel_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtWheel_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtWheel_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtWheel_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtWheel_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtWheel_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtWheel_override_virtual_showEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtWheel_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtWheel_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtWheel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtWheel_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtWheel_override_virtual_metric(void* self, intptr_t slot);
int QwtWheel_virtualbase_metric(const void* self, int param1);
bool QwtWheel_override_virtual_initPainter(void* self, intptr_t slot);
void QwtWheel_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtWheel_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtWheel_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtWheel_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtWheel_virtualbase_sharedPainter(const void* self);
bool QwtWheel_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtWheel_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtWheel_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtWheel_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtWheel_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtWheel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtWheel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtWheel_override_virtual_childEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtWheel_override_virtual_customEvent(void* self, intptr_t slot);
void QwtWheel_virtualbase_customEvent(void* self, QEvent* event);
bool QwtWheel_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtWheel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtWheel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtWheel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtWheel_protectedbase_stopFlying(bool* _dynamic_cast_ok, void* self);
QRect* QwtWheel_protectedbase_wheelRect(bool* _dynamic_cast_ok, const void* self);
void QwtWheel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtWheel_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtWheel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtWheel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtWheel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtWheel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtWheel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtWheel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtWheel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtWheel_delete(QwtWheel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
