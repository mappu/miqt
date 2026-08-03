#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_ANALOG_CLOCK_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_ANALOG_CLOCK_H

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
class QPointF;
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTime;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtAbstractScale;
class QwtAbstractScaleDraw;
class QwtAbstractSlider;
class QwtAnalogClock;
class QwtDial;
class QwtDialNeedle;
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
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTime QTime;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtAbstractScale QwtAbstractScale;
typedef struct QwtAbstractScaleDraw QwtAbstractScaleDraw;
typedef struct QwtAbstractSlider QwtAbstractSlider;
typedef struct QwtAnalogClock QwtAnalogClock;
typedef struct QwtDial QwtDial;
typedef struct QwtDialNeedle QwtDialNeedle;
#endif

QwtAnalogClock* QwtAnalogClock_new(QWidget* parent);
QwtAnalogClock* QwtAnalogClock_new2();
void QwtAnalogClock_virtbase(QwtAnalogClock* src, QwtDial** outptr_QwtDial);
QMetaObject* QwtAnalogClock_metaObject(const QwtAnalogClock* self);
void* QwtAnalogClock_metacast(QwtAnalogClock* self, const char* param1);
struct miqt_string QwtAnalogClock_tr(const char* s);
struct miqt_string QwtAnalogClock_trUtf8(const char* s);
void QwtAnalogClock_setHand(QwtAnalogClock* self, int param1, QwtDialNeedle* param2);
QwtDialNeedle* QwtAnalogClock_hand(const QwtAnalogClock* self, int param1);
QwtDialNeedle* QwtAnalogClock_handWithQwtAnalogClockHand(QwtAnalogClock* self, int param1);
void QwtAnalogClock_setCurrentTime(QwtAnalogClock* self);
void QwtAnalogClock_setTime(QwtAnalogClock* self, QTime* time);
void QwtAnalogClock_drawNeedle(const QwtAnalogClock* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5);
void QwtAnalogClock_drawHand(const QwtAnalogClock* self, QPainter* param1, int param2, QPointF* param3, double radius, double direction, int param6);
struct miqt_string QwtAnalogClock_tr2(const char* s, const char* c);
struct miqt_string QwtAnalogClock_tr3(const char* s, const char* c, int n);
struct miqt_string QwtAnalogClock_trUtf82(const char* s, const char* c);
struct miqt_string QwtAnalogClock_trUtf83(const char* s, const char* c, int n);

bool QwtAnalogClock_override_virtual_drawNeedle(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_drawNeedle(const void* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5);
bool QwtAnalogClock_override_virtual_drawHand(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_drawHand(const void* self, QPainter* param1, int param2, QPointF* param3, double radius, double direction, int param6);
bool QwtAnalogClock_override_virtual_setOrigin(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_setOrigin(void* self, double origin);
bool QwtAnalogClock_override_virtual_scaleInnerRect(void* self, intptr_t slot);
QRect* QwtAnalogClock_virtualbase_scaleInnerRect(const void* self);
bool QwtAnalogClock_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtAnalogClock_virtualbase_sizeHint(const void* self);
bool QwtAnalogClock_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtAnalogClock_virtualbase_minimumSizeHint(const void* self);
bool QwtAnalogClock_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QwtAnalogClock_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtAnalogClock_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtAnalogClock_override_virtual_drawFrame(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_drawFrame(void* self, QPainter* param1);
bool QwtAnalogClock_override_virtual_drawContents(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_drawContents(const void* self, QPainter* param1);
bool QwtAnalogClock_override_virtual_drawFocusIndicator(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_drawFocusIndicator(const void* self, QPainter* param1);
bool QwtAnalogClock_override_virtual_drawScale(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_drawScale(const void* self, QPainter* param1, QPointF* center, double radius);
bool QwtAnalogClock_override_virtual_drawScaleContents(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_drawScaleContents(const void* self, QPainter* painter, QPointF* center, double radius);
bool QwtAnalogClock_override_virtual_scrolledTo(void* self, intptr_t slot);
double QwtAnalogClock_virtualbase_scrolledTo(const void* self, QPoint* param1);
bool QwtAnalogClock_override_virtual_isScrollPosition(void* self, intptr_t slot);
bool QwtAnalogClock_virtualbase_isScrollPosition(const void* self, QPoint* param1);
bool QwtAnalogClock_override_virtual_sliderChange(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_sliderChange(void* self);
bool QwtAnalogClock_override_virtual_scaleChange(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_scaleChange(void* self);
bool QwtAnalogClock_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QwtAnalogClock_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtAnalogClock_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtAnalogClock_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QwtAnalogClock_override_virtual_devType(void* self, intptr_t slot);
int QwtAnalogClock_virtualbase_devType(const void* self);
bool QwtAnalogClock_override_virtual_setVisible(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_setVisible(void* self, bool visible);
bool QwtAnalogClock_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtAnalogClock_virtualbase_heightForWidth(const void* self, int param1);
bool QwtAnalogClock_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtAnalogClock_virtualbase_hasHeightForWidth(const void* self);
bool QwtAnalogClock_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtAnalogClock_virtualbase_paintEngine(const void* self);
bool QwtAnalogClock_override_virtual_event(void* self, intptr_t slot);
bool QwtAnalogClock_virtualbase_event(void* self, QEvent* event);
bool QwtAnalogClock_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtAnalogClock_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtAnalogClock_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtAnalogClock_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtAnalogClock_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtAnalogClock_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtAnalogClock_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtAnalogClock_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtAnalogClock_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtAnalogClock_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtAnalogClock_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtAnalogClock_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtAnalogClock_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtAnalogClock_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtAnalogClock_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtAnalogClock_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtAnalogClock_override_virtual_showEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtAnalogClock_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtAnalogClock_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtAnalogClock_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtAnalogClock_override_virtual_metric(void* self, intptr_t slot);
int QwtAnalogClock_virtualbase_metric(const void* self, int param1);
bool QwtAnalogClock_override_virtual_initPainter(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtAnalogClock_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtAnalogClock_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtAnalogClock_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtAnalogClock_virtualbase_sharedPainter(const void* self);
bool QwtAnalogClock_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtAnalogClock_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtAnalogClock_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtAnalogClock_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtAnalogClock_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtAnalogClock_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtAnalogClock_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtAnalogClock_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtAnalogClock_override_virtual_childEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtAnalogClock_override_virtual_customEvent(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_customEvent(void* self, QEvent* event);
bool QwtAnalogClock_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtAnalogClock_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtAnalogClock_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtAnalogClock_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
void QwtAnalogClock_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
double QwtAnalogClock_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
void QwtAnalogClock_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
void QwtAnalogClock_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
QwtAbstractScaleDraw* QwtAnalogClock_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
void QwtAnalogClock_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtAnalogClock_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtAnalogClock_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtAnalogClock_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtAnalogClock_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtAnalogClock_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtAnalogClock_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtAnalogClock_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtAnalogClock_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtAnalogClock_delete(QwtAnalogClock* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
