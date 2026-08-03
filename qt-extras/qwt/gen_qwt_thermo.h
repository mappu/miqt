#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_THERMO_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_THERMO_H

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
class QBrush;
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
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtAbstractScale;
class QwtAbstractScaleDraw;
class QwtColorMap;
class QwtScaleDraw;
class QwtThermo;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QBrush QBrush;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtAbstractScale QwtAbstractScale;
typedef struct QwtAbstractScaleDraw QwtAbstractScaleDraw;
typedef struct QwtColorMap QwtColorMap;
typedef struct QwtScaleDraw QwtScaleDraw;
typedef struct QwtThermo QwtThermo;
#endif

QwtThermo* QwtThermo_new(QWidget* parent);
QwtThermo* QwtThermo_new2();
void QwtThermo_virtbase(QwtThermo* src, QwtAbstractScale** outptr_QwtAbstractScale);
QMetaObject* QwtThermo_metaObject(const QwtThermo* self);
void* QwtThermo_metacast(QwtThermo* self, const char* param1);
struct miqt_string QwtThermo_tr(const char* s);
struct miqt_string QwtThermo_trUtf8(const char* s);
void QwtThermo_setOrientation(QwtThermo* self, int orientation);
int QwtThermo_orientation(const QwtThermo* self);
void QwtThermo_setScalePosition(QwtThermo* self, int scalePosition);
int QwtThermo_scalePosition(const QwtThermo* self);
void QwtThermo_setSpacing(QwtThermo* self, int spacing);
int QwtThermo_spacing(const QwtThermo* self);
void QwtThermo_setBorderWidth(QwtThermo* self, int borderWidth);
int QwtThermo_borderWidth(const QwtThermo* self);
void QwtThermo_setOriginMode(QwtThermo* self, int originMode);
int QwtThermo_originMode(const QwtThermo* self);
void QwtThermo_setOrigin(QwtThermo* self, double origin);
double QwtThermo_origin(const QwtThermo* self);
void QwtThermo_setFillBrush(QwtThermo* self, QBrush* fillBrush);
QBrush* QwtThermo_fillBrush(const QwtThermo* self);
void QwtThermo_setAlarmBrush(QwtThermo* self, QBrush* alarmBrush);
QBrush* QwtThermo_alarmBrush(const QwtThermo* self);
void QwtThermo_setAlarmLevel(QwtThermo* self, double alarmLevel);
double QwtThermo_alarmLevel(const QwtThermo* self);
void QwtThermo_setAlarmEnabled(QwtThermo* self, bool alarmEnabled);
bool QwtThermo_alarmEnabled(const QwtThermo* self);
void QwtThermo_setColorMap(QwtThermo* self, QwtColorMap* colorMap);
QwtColorMap* QwtThermo_colorMap(QwtThermo* self);
QwtColorMap* QwtThermo_colorMap2(const QwtThermo* self);
void QwtThermo_setPipeWidth(QwtThermo* self, int pipeWidth);
int QwtThermo_pipeWidth(const QwtThermo* self);
void QwtThermo_setRangeFlags(QwtThermo* self, int rangeFlags);
int QwtThermo_rangeFlags(const QwtThermo* self);
double QwtThermo_value(const QwtThermo* self);
QSize* QwtThermo_sizeHint(const QwtThermo* self);
QSize* QwtThermo_minimumSizeHint(const QwtThermo* self);
void QwtThermo_setScaleDraw(QwtThermo* self, QwtScaleDraw* scaleDraw);
QwtScaleDraw* QwtThermo_scaleDraw(const QwtThermo* self);
void QwtThermo_setValue(QwtThermo* self, double value);
void QwtThermo_drawLiquid(const QwtThermo* self, QPainter* param1, QRect* param2);
void QwtThermo_scaleChange(QwtThermo* self);
void QwtThermo_paintEvent(QwtThermo* self, QPaintEvent* param1);
void QwtThermo_resizeEvent(QwtThermo* self, QResizeEvent* param1);
void QwtThermo_changeEvent(QwtThermo* self, QEvent* param1);
struct miqt_string QwtThermo_tr2(const char* s, const char* c);
struct miqt_string QwtThermo_tr3(const char* s, const char* c, int n);
struct miqt_string QwtThermo_trUtf82(const char* s, const char* c);
struct miqt_string QwtThermo_trUtf83(const char* s, const char* c, int n);

bool QwtThermo_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtThermo_virtualbase_sizeHint(const void* self);
bool QwtThermo_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtThermo_virtualbase_minimumSizeHint(const void* self);
bool QwtThermo_override_virtual_setValue(void* self, intptr_t slot);
void QwtThermo_virtualbase_setValue(void* self, double value);
bool QwtThermo_override_virtual_drawLiquid(void* self, intptr_t slot);
void QwtThermo_virtualbase_drawLiquid(const void* self, QPainter* param1, QRect* param2);
bool QwtThermo_override_virtual_scaleChange(void* self, intptr_t slot);
void QwtThermo_virtualbase_scaleChange(void* self);
bool QwtThermo_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtThermo_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QwtThermo_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtThermo_override_virtual_devType(void* self, intptr_t slot);
int QwtThermo_virtualbase_devType(const void* self);
bool QwtThermo_override_virtual_setVisible(void* self, intptr_t slot);
void QwtThermo_virtualbase_setVisible(void* self, bool visible);
bool QwtThermo_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtThermo_virtualbase_heightForWidth(const void* self, int param1);
bool QwtThermo_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtThermo_virtualbase_hasHeightForWidth(const void* self);
bool QwtThermo_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtThermo_virtualbase_paintEngine(const void* self);
bool QwtThermo_override_virtual_event(void* self, intptr_t slot);
bool QwtThermo_virtualbase_event(void* self, QEvent* event);
bool QwtThermo_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QwtThermo_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QwtThermo_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtThermo_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtThermo_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtThermo_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QwtThermo_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtThermo_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtThermo_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtThermo_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtThermo_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtThermo_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtThermo_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtThermo_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtThermo_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtThermo_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtThermo_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtThermo_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtThermo_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtThermo_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtThermo_override_virtual_showEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtThermo_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtThermo_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtThermo_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtThermo_override_virtual_metric(void* self, intptr_t slot);
int QwtThermo_virtualbase_metric(const void* self, int param1);
bool QwtThermo_override_virtual_initPainter(void* self, intptr_t slot);
void QwtThermo_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtThermo_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtThermo_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtThermo_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtThermo_virtualbase_sharedPainter(const void* self);
bool QwtThermo_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtThermo_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtThermo_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtThermo_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtThermo_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtThermo_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtThermo_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtThermo_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtThermo_override_virtual_childEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtThermo_override_virtual_customEvent(void* self, intptr_t slot);
void QwtThermo_virtualbase_customEvent(void* self, QEvent* event);
bool QwtThermo_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtThermo_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtThermo_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtThermo_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QwtScaleDraw* QwtThermo_protectedbase_scaleDraw2(bool* _dynamic_cast_ok, void* self);
QRect* QwtThermo_protectedbase_pipeRect(bool* _dynamic_cast_ok, const void* self);
QRect* QwtThermo_protectedbase_fillRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QRect* QwtThermo_protectedbase_alarmRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
void QwtThermo_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
void QwtThermo_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
QwtAbstractScaleDraw* QwtThermo_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
void QwtThermo_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtThermo_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtThermo_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtThermo_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtThermo_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtThermo_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtThermo_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtThermo_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtThermo_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtThermo_delete(QwtThermo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
