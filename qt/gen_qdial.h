#pragma once
#ifndef MIQT_QT_GEN_QDIAL_H
#define MIQT_QT_GEN_QDIAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSlider;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDial;
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
#else
typedef struct QAbstractSlider QAbstractSlider;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDial QDial;
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
#endif

QDial* QDial_new(QWidget* parent);
QDial* QDial_new2();
void QDial_virtbase(QDial* src, QAbstractSlider** outptr_QAbstractSlider);
QMetaObject* QDial_metaObject(const QDial* self);
void* QDial_metacast(QDial* self, const char* param1);
struct miqt_string QDial_tr(const char* s);
struct miqt_string QDial_trUtf8(const char* s);
bool QDial_wrapping(const QDial* self);
int QDial_notchSize(const QDial* self);
void QDial_setNotchTarget(QDial* self, double target);
double QDial_notchTarget(const QDial* self);
bool QDial_notchesVisible(const QDial* self);
QSize* QDial_sizeHint(const QDial* self);
QSize* QDial_minimumSizeHint(const QDial* self);
void QDial_setNotchesVisible(QDial* self, bool visible);
void QDial_setWrapping(QDial* self, bool on);
bool QDial_event(QDial* self, QEvent* e);
void QDial_resizeEvent(QDial* self, QResizeEvent* re);
void QDial_paintEvent(QDial* self, QPaintEvent* pe);
void QDial_mousePressEvent(QDial* self, QMouseEvent* me);
void QDial_mouseReleaseEvent(QDial* self, QMouseEvent* me);
void QDial_mouseMoveEvent(QDial* self, QMouseEvent* me);
void QDial_sliderChange(QDial* self, int change);
struct miqt_string QDial_tr2(const char* s, const char* c);
struct miqt_string QDial_tr3(const char* s, const char* c, int n);
struct miqt_string QDial_trUtf82(const char* s, const char* c);
struct miqt_string QDial_trUtf83(const char* s, const char* c, int n);
bool QDial_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QDial_virtualbase_sizeHint(const void* self);
bool QDial_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QDial_virtualbase_minimumSizeHint(const void* self);
bool QDial_override_virtual_event(void* self, intptr_t slot);
bool QDial_virtualbase_event(void* self, QEvent* e);
bool QDial_override_virtual_resizeEvent(void* self, intptr_t slot);
void QDial_virtualbase_resizeEvent(void* self, QResizeEvent* re);
bool QDial_override_virtual_paintEvent(void* self, intptr_t slot);
void QDial_virtualbase_paintEvent(void* self, QPaintEvent* pe);
bool QDial_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QDial_virtualbase_mousePressEvent(void* self, QMouseEvent* me);
bool QDial_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QDial_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* me);
bool QDial_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QDial_virtualbase_mouseMoveEvent(void* self, QMouseEvent* me);
bool QDial_override_virtual_sliderChange(void* self, intptr_t slot);
void QDial_virtualbase_sliderChange(void* self, int change);
bool QDial_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QDial_virtualbase_keyPressEvent(void* self, QKeyEvent* ev);
bool QDial_override_virtual_timerEvent(void* self, intptr_t slot);
void QDial_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QDial_override_virtual_wheelEvent(void* self, intptr_t slot);
void QDial_virtualbase_wheelEvent(void* self, QWheelEvent* e);
bool QDial_override_virtual_changeEvent(void* self, intptr_t slot);
void QDial_virtualbase_changeEvent(void* self, QEvent* e);
bool QDial_override_virtual_devType(void* self, intptr_t slot);
int QDial_virtualbase_devType(const void* self);
bool QDial_override_virtual_setVisible(void* self, intptr_t slot);
void QDial_virtualbase_setVisible(void* self, bool visible);
bool QDial_override_virtual_heightForWidth(void* self, intptr_t slot);
int QDial_virtualbase_heightForWidth(const void* self, int param1);
bool QDial_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QDial_virtualbase_hasHeightForWidth(const void* self);
bool QDial_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QDial_virtualbase_paintEngine(const void* self);
bool QDial_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QDial_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QDial_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QDial_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QDial_override_virtual_focusInEvent(void* self, intptr_t slot);
void QDial_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QDial_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QDial_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QDial_override_virtual_enterEvent(void* self, intptr_t slot);
void QDial_virtualbase_enterEvent(void* self, QEvent* event);
bool QDial_override_virtual_leaveEvent(void* self, intptr_t slot);
void QDial_virtualbase_leaveEvent(void* self, QEvent* event);
bool QDial_override_virtual_moveEvent(void* self, intptr_t slot);
void QDial_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QDial_override_virtual_closeEvent(void* self, intptr_t slot);
void QDial_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QDial_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QDial_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QDial_override_virtual_tabletEvent(void* self, intptr_t slot);
void QDial_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QDial_override_virtual_actionEvent(void* self, intptr_t slot);
void QDial_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QDial_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QDial_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QDial_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QDial_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QDial_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QDial_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QDial_override_virtual_dropEvent(void* self, intptr_t slot);
void QDial_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QDial_override_virtual_showEvent(void* self, intptr_t slot);
void QDial_virtualbase_showEvent(void* self, QShowEvent* event);
bool QDial_override_virtual_hideEvent(void* self, intptr_t slot);
void QDial_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QDial_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QDial_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QDial_override_virtual_metric(void* self, intptr_t slot);
int QDial_virtualbase_metric(const void* self, int param1);
bool QDial_override_virtual_initPainter(void* self, intptr_t slot);
void QDial_virtualbase_initPainter(const void* self, QPainter* painter);
bool QDial_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QDial_virtualbase_redirected(const void* self, QPoint* offset);
bool QDial_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QDial_virtualbase_sharedPainter(const void* self);
bool QDial_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QDial_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QDial_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QDial_virtualbase_inputMethodQuery(const void* self, int param1);
bool QDial_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QDial_virtualbase_focusNextPrevChild(void* self, bool next);
bool QDial_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDial_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDial_override_virtual_childEvent(void* self, intptr_t slot);
void QDial_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDial_override_virtual_customEvent(void* self, intptr_t slot);
void QDial_virtualbase_customEvent(void* self, QEvent* event);
bool QDial_override_virtual_connectNotify(void* self, intptr_t slot);
void QDial_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDial_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDial_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QDial_delete(QDial* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
