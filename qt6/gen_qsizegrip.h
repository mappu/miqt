#pragma once
#ifndef MIQT_QT6_GEN_QSIZEGRIP_H
#define MIQT_QT6_GEN_QSIZEGRIP_H

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
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
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
class QSizeGrip;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
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
typedef struct QSizeGrip QSizeGrip;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSizeGrip* QSizeGrip_new(QWidget* parent);
void QSizeGrip_virtbase(QSizeGrip* src, QWidget** outptr_QWidget);
QMetaObject* QSizeGrip_metaObject(const QSizeGrip* self);
void* QSizeGrip_metacast(QSizeGrip* self, const char* param1);
struct miqt_string QSizeGrip_tr(const char* s);
QSize* QSizeGrip_sizeHint(const QSizeGrip* self);
void QSizeGrip_setVisible(QSizeGrip* self, bool visible);
void QSizeGrip_paintEvent(QSizeGrip* self, QPaintEvent* param1);
void QSizeGrip_mousePressEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_mouseMoveEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_mouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent);
void QSizeGrip_moveEvent(QSizeGrip* self, QMoveEvent* moveEvent);
void QSizeGrip_showEvent(QSizeGrip* self, QShowEvent* showEvent);
void QSizeGrip_hideEvent(QSizeGrip* self, QHideEvent* hideEvent);
bool QSizeGrip_eventFilter(QSizeGrip* self, QObject* param1, QEvent* param2);
bool QSizeGrip_event(QSizeGrip* self, QEvent* param1);
struct miqt_string QSizeGrip_tr2(const char* s, const char* c);
struct miqt_string QSizeGrip_tr3(const char* s, const char* c, int n);

bool QSizeGrip_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QSizeGrip_virtualbase_sizeHint(const void* self);
bool QSizeGrip_override_virtual_setVisible(void* self, intptr_t slot);
void QSizeGrip_virtualbase_setVisible(void* self, bool visible);
bool QSizeGrip_override_virtual_paintEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QSizeGrip_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QSizeGrip_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QSizeGrip_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* mouseEvent);
bool QSizeGrip_override_virtual_moveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_moveEvent(void* self, QMoveEvent* moveEvent);
bool QSizeGrip_override_virtual_showEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_showEvent(void* self, QShowEvent* showEvent);
bool QSizeGrip_override_virtual_hideEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_hideEvent(void* self, QHideEvent* hideEvent);
bool QSizeGrip_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QSizeGrip_override_virtual_event(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_event(void* self, QEvent* param1);
bool QSizeGrip_override_virtual_devType(void* self, intptr_t slot);
int QSizeGrip_virtualbase_devType(const void* self);
bool QSizeGrip_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QSizeGrip_virtualbase_minimumSizeHint(const void* self);
bool QSizeGrip_override_virtual_heightForWidth(void* self, intptr_t slot);
int QSizeGrip_virtualbase_heightForWidth(const void* self, int param1);
bool QSizeGrip_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_hasHeightForWidth(const void* self);
bool QSizeGrip_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QSizeGrip_virtualbase_paintEngine(const void* self);
bool QSizeGrip_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QSizeGrip_override_virtual_wheelEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QSizeGrip_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QSizeGrip_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QSizeGrip_override_virtual_focusInEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QSizeGrip_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QSizeGrip_override_virtual_enterEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QSizeGrip_override_virtual_leaveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_leaveEvent(void* self, QEvent* event);
bool QSizeGrip_override_virtual_resizeEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QSizeGrip_override_virtual_closeEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QSizeGrip_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QSizeGrip_override_virtual_tabletEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QSizeGrip_override_virtual_actionEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QSizeGrip_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QSizeGrip_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QSizeGrip_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QSizeGrip_override_virtual_dropEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QSizeGrip_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QSizeGrip_override_virtual_changeEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_changeEvent(void* self, QEvent* param1);
bool QSizeGrip_override_virtual_metric(void* self, intptr_t slot);
int QSizeGrip_virtualbase_metric(const void* self, int param1);
bool QSizeGrip_override_virtual_initPainter(void* self, intptr_t slot);
void QSizeGrip_virtualbase_initPainter(const void* self, QPainter* painter);
bool QSizeGrip_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QSizeGrip_virtualbase_redirected(const void* self, QPoint* offset);
bool QSizeGrip_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QSizeGrip_virtualbase_sharedPainter(const void* self);
bool QSizeGrip_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QSizeGrip_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QSizeGrip_virtualbase_inputMethodQuery(const void* self, int param1);
bool QSizeGrip_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_focusNextPrevChild(void* self, bool next);
bool QSizeGrip_override_virtual_timerEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSizeGrip_override_virtual_childEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSizeGrip_override_virtual_customEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_customEvent(void* self, QEvent* event);
bool QSizeGrip_override_virtual_connectNotify(void* self, intptr_t slot);
void QSizeGrip_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSizeGrip_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSizeGrip_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QSizeGrip_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QSizeGrip_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QSizeGrip_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QSizeGrip_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QSizeGrip_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QSizeGrip_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSizeGrip_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSizeGrip_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSizeGrip_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSizeGrip_delete(QSizeGrip* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
