#pragma once
#ifndef MIQT_QT_GEN_QSLIDER_H
#define MIQT_QT_GEN_QSLIDER_H

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
class QSlider;
class QStyleOptionSlider;
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
typedef struct QSlider QSlider;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSlider* QSlider_new(QWidget* parent);
QSlider* QSlider_new2();
QSlider* QSlider_new3(int orientation);
QSlider* QSlider_new4(int orientation, QWidget* parent);
void QSlider_virtbase(QSlider* src, QAbstractSlider** outptr_QAbstractSlider);
QMetaObject* QSlider_metaObject(const QSlider* self);
void* QSlider_metacast(QSlider* self, const char* param1);
struct miqt_string QSlider_tr(const char* s);
struct miqt_string QSlider_trUtf8(const char* s);
QSize* QSlider_sizeHint(const QSlider* self);
QSize* QSlider_minimumSizeHint(const QSlider* self);
void QSlider_setTickPosition(QSlider* self, int position);
int QSlider_tickPosition(const QSlider* self);
void QSlider_setTickInterval(QSlider* self, int ti);
int QSlider_tickInterval(const QSlider* self);
bool QSlider_event(QSlider* self, QEvent* event);
void QSlider_paintEvent(QSlider* self, QPaintEvent* ev);
void QSlider_mousePressEvent(QSlider* self, QMouseEvent* ev);
void QSlider_mouseReleaseEvent(QSlider* self, QMouseEvent* ev);
void QSlider_mouseMoveEvent(QSlider* self, QMouseEvent* ev);
struct miqt_string QSlider_tr2(const char* s, const char* c);
struct miqt_string QSlider_tr3(const char* s, const char* c, int n);
struct miqt_string QSlider_trUtf82(const char* s, const char* c);
struct miqt_string QSlider_trUtf83(const char* s, const char* c, int n);
bool QSlider_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QSlider_virtualbase_sizeHint(const void* self);
bool QSlider_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QSlider_virtualbase_minimumSizeHint(const void* self);
bool QSlider_override_virtual_event(void* self, intptr_t slot);
bool QSlider_virtualbase_event(void* self, QEvent* event);
bool QSlider_override_virtual_paintEvent(void* self, intptr_t slot);
void QSlider_virtualbase_paintEvent(void* self, QPaintEvent* ev);
bool QSlider_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* ev);
bool QSlider_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* ev);
bool QSlider_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* ev);
bool QSlider_override_virtual_sliderChange(void* self, intptr_t slot);
void QSlider_virtualbase_sliderChange(void* self, int change);
bool QSlider_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* ev);
bool QSlider_override_virtual_timerEvent(void* self, intptr_t slot);
void QSlider_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QSlider_override_virtual_wheelEvent(void* self, intptr_t slot);
void QSlider_virtualbase_wheelEvent(void* self, QWheelEvent* e);
bool QSlider_override_virtual_changeEvent(void* self, intptr_t slot);
void QSlider_virtualbase_changeEvent(void* self, QEvent* e);
bool QSlider_override_virtual_devType(void* self, intptr_t slot);
int QSlider_virtualbase_devType(const void* self);
bool QSlider_override_virtual_setVisible(void* self, intptr_t slot);
void QSlider_virtualbase_setVisible(void* self, bool visible);
bool QSlider_override_virtual_heightForWidth(void* self, intptr_t slot);
int QSlider_virtualbase_heightForWidth(const void* self, int param1);
bool QSlider_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QSlider_virtualbase_hasHeightForWidth(const void* self);
bool QSlider_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QSlider_virtualbase_paintEngine(const void* self);
bool QSlider_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QSlider_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QSlider_override_virtual_focusInEvent(void* self, intptr_t slot);
void QSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QSlider_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QSlider_override_virtual_enterEvent(void* self, intptr_t slot);
void QSlider_virtualbase_enterEvent(void* self, QEvent* event);
bool QSlider_override_virtual_leaveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_leaveEvent(void* self, QEvent* event);
bool QSlider_override_virtual_moveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QSlider_override_virtual_resizeEvent(void* self, intptr_t slot);
void QSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QSlider_override_virtual_closeEvent(void* self, intptr_t slot);
void QSlider_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QSlider_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QSlider_override_virtual_tabletEvent(void* self, intptr_t slot);
void QSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QSlider_override_virtual_actionEvent(void* self, intptr_t slot);
void QSlider_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QSlider_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QSlider_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QSlider_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QSlider_override_virtual_dropEvent(void* self, intptr_t slot);
void QSlider_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QSlider_override_virtual_showEvent(void* self, intptr_t slot);
void QSlider_virtualbase_showEvent(void* self, QShowEvent* event);
bool QSlider_override_virtual_hideEvent(void* self, intptr_t slot);
void QSlider_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QSlider_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QSlider_override_virtual_metric(void* self, intptr_t slot);
int QSlider_virtualbase_metric(const void* self, int param1);
bool QSlider_override_virtual_initPainter(void* self, intptr_t slot);
void QSlider_virtualbase_initPainter(const void* self, QPainter* painter);
bool QSlider_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QSlider_virtualbase_redirected(const void* self, QPoint* offset);
bool QSlider_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QSlider_virtualbase_sharedPainter(const void* self);
bool QSlider_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QSlider_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QSlider_virtualbase_inputMethodQuery(const void* self, int param1);
bool QSlider_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QSlider_virtualbase_focusNextPrevChild(void* self, bool next);
bool QSlider_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSlider_override_virtual_childEvent(void* self, intptr_t slot);
void QSlider_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSlider_override_virtual_customEvent(void* self, intptr_t slot);
void QSlider_virtualbase_customEvent(void* self, QEvent* event);
bool QSlider_override_virtual_connectNotify(void* self, intptr_t slot);
void QSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSlider_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QSlider_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionSlider* option);
void QSlider_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action);
int QSlider_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self);
void QSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QSlider_delete(QSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
