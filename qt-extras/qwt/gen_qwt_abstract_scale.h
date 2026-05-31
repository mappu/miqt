#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_ABSTRACT_SCALE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_ABSTRACT_SCALE_H

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
class QwtInterval;
class QwtScaleDiv;
class QwtScaleEngine;
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
typedef struct QwtInterval QwtInterval;
typedef struct QwtScaleDiv QwtScaleDiv;
typedef struct QwtScaleEngine QwtScaleEngine;
#endif

QwtAbstractScale* QwtAbstractScale_new(QWidget* parent);
QwtAbstractScale* QwtAbstractScale_new2();
void QwtAbstractScale_virtbase(QwtAbstractScale* src, QWidget** outptr_QWidget);
QMetaObject* QwtAbstractScale_metaObject(const QwtAbstractScale* self);
void* QwtAbstractScale_metacast(QwtAbstractScale* self, const char* param1);
struct miqt_string QwtAbstractScale_tr(const char* s);
struct miqt_string QwtAbstractScale_trUtf8(const char* s);
void QwtAbstractScale_setScale(QwtAbstractScale* self, double lowerBound, double upperBound);
void QwtAbstractScale_setScaleWithScale(QwtAbstractScale* self, QwtInterval* scale);
void QwtAbstractScale_setScale2(QwtAbstractScale* self, QwtScaleDiv* scale);
QwtScaleDiv* QwtAbstractScale_scaleDiv(const QwtAbstractScale* self);
void QwtAbstractScale_setLowerBound(QwtAbstractScale* self, double value);
double QwtAbstractScale_lowerBound(const QwtAbstractScale* self);
void QwtAbstractScale_setUpperBound(QwtAbstractScale* self, double value);
double QwtAbstractScale_upperBound(const QwtAbstractScale* self);
void QwtAbstractScale_setScaleStepSize(QwtAbstractScale* self, double stepSize);
double QwtAbstractScale_scaleStepSize(const QwtAbstractScale* self);
void QwtAbstractScale_setScaleMaxMajor(QwtAbstractScale* self, int ticks);
int QwtAbstractScale_scaleMaxMinor(const QwtAbstractScale* self);
void QwtAbstractScale_setScaleMaxMinor(QwtAbstractScale* self, int ticks);
int QwtAbstractScale_scaleMaxMajor(const QwtAbstractScale* self);
void QwtAbstractScale_setScaleEngine(QwtAbstractScale* self, QwtScaleEngine* scaleEngine);
QwtScaleEngine* QwtAbstractScale_scaleEngine(const QwtAbstractScale* self);
QwtScaleEngine* QwtAbstractScale_scaleEngine2(QwtAbstractScale* self);
int QwtAbstractScale_transform(const QwtAbstractScale* self, double param1);
double QwtAbstractScale_invTransform(const QwtAbstractScale* self, int param1);
bool QwtAbstractScale_isInverted(const QwtAbstractScale* self);
double QwtAbstractScale_minimum(const QwtAbstractScale* self);
double QwtAbstractScale_maximum(const QwtAbstractScale* self);
void QwtAbstractScale_scaleChange(QwtAbstractScale* self);
struct miqt_string QwtAbstractScale_tr2(const char* s, const char* c);
struct miqt_string QwtAbstractScale_tr3(const char* s, const char* c, int n);
struct miqt_string QwtAbstractScale_trUtf82(const char* s, const char* c);
struct miqt_string QwtAbstractScale_trUtf83(const char* s, const char* c, int n);

bool QwtAbstractScale_override_virtual_scaleChange(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_scaleChange(void* self);
bool QwtAbstractScale_override_virtual_devType(void* self, intptr_t slot);
int QwtAbstractScale_virtualbase_devType(const void* self);
bool QwtAbstractScale_override_virtual_setVisible(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_setVisible(void* self, bool visible);
bool QwtAbstractScale_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtAbstractScale_virtualbase_sizeHint(const void* self);
bool QwtAbstractScale_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtAbstractScale_virtualbase_minimumSizeHint(const void* self);
bool QwtAbstractScale_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtAbstractScale_virtualbase_heightForWidth(const void* self, int param1);
bool QwtAbstractScale_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtAbstractScale_virtualbase_hasHeightForWidth(const void* self);
bool QwtAbstractScale_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtAbstractScale_virtualbase_paintEngine(const void* self);
bool QwtAbstractScale_override_virtual_event(void* self, intptr_t slot);
bool QwtAbstractScale_virtualbase_event(void* self, QEvent* event);
bool QwtAbstractScale_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QwtAbstractScale_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QwtAbstractScale_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtAbstractScale_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtAbstractScale_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtAbstractScale_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QwtAbstractScale_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtAbstractScale_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtAbstractScale_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtAbstractScale_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtAbstractScale_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtAbstractScale_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QwtAbstractScale_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtAbstractScale_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtAbstractScale_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtAbstractScale_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtAbstractScale_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtAbstractScale_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtAbstractScale_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtAbstractScale_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtAbstractScale_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtAbstractScale_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtAbstractScale_override_virtual_showEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtAbstractScale_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtAbstractScale_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtAbstractScale_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtAbstractScale_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtAbstractScale_override_virtual_metric(void* self, intptr_t slot);
int QwtAbstractScale_virtualbase_metric(const void* self, int param1);
bool QwtAbstractScale_override_virtual_initPainter(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtAbstractScale_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtAbstractScale_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtAbstractScale_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtAbstractScale_virtualbase_sharedPainter(const void* self);
bool QwtAbstractScale_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtAbstractScale_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtAbstractScale_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtAbstractScale_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtAbstractScale_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtAbstractScale_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtAbstractScale_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtAbstractScale_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtAbstractScale_override_virtual_childEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtAbstractScale_override_virtual_customEvent(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_customEvent(void* self, QEvent* event);
bool QwtAbstractScale_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtAbstractScale_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtAbstractScale_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtAbstractScale_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
void QwtAbstractScale_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
QwtAbstractScaleDraw* QwtAbstractScale_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
QwtAbstractScaleDraw* QwtAbstractScale_protectedbase_abstractScaleDraw2(bool* _dynamic_cast_ok, void* self);
void QwtAbstractScale_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtAbstractScale_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtAbstractScale_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtAbstractScale_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtAbstractScale_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtAbstractScale_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtAbstractScale_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtAbstractScale_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtAbstractScale_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtAbstractScale_delete(QwtAbstractScale* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
