#pragma once
#ifndef MIQT_QT_GEN_QSTATUSBAR_H
#define MIQT_QT_GEN_QSTATUSBAR_H

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
class QStatusBar;
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
typedef struct QStatusBar QStatusBar;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QStatusBar* QStatusBar_new(QWidget* parent);
QStatusBar* QStatusBar_new2();
void QStatusBar_virtbase(QStatusBar* src, QWidget** outptr_QWidget);
QMetaObject* QStatusBar_metaObject(const QStatusBar* self);
void* QStatusBar_metacast(QStatusBar* self, const char* param1);
struct miqt_string QStatusBar_tr(const char* s);
struct miqt_string QStatusBar_trUtf8(const char* s);
void QStatusBar_addWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_insertWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_addPermanentWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_insertPermanentWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_removeWidget(QStatusBar* self, QWidget* widget);
void QStatusBar_setSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled);
bool QStatusBar_isSizeGripEnabled(const QStatusBar* self);
struct miqt_string QStatusBar_currentMessage(const QStatusBar* self);
void QStatusBar_showMessage(QStatusBar* self, struct miqt_string text);
void QStatusBar_clearMessage(QStatusBar* self);
void QStatusBar_messageChanged(QStatusBar* self, struct miqt_string text);
void QStatusBar_connect_messageChanged(QStatusBar* self, intptr_t slot);
void QStatusBar_showEvent(QStatusBar* self, QShowEvent* param1);
void QStatusBar_paintEvent(QStatusBar* self, QPaintEvent* param1);
void QStatusBar_resizeEvent(QStatusBar* self, QResizeEvent* param1);
bool QStatusBar_event(QStatusBar* self, QEvent* param1);
struct miqt_string QStatusBar_tr2(const char* s, const char* c);
struct miqt_string QStatusBar_tr3(const char* s, const char* c, int n);
struct miqt_string QStatusBar_trUtf82(const char* s, const char* c);
struct miqt_string QStatusBar_trUtf83(const char* s, const char* c, int n);
void QStatusBar_addWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_insertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_addPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_insertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_showMessage2(QStatusBar* self, struct miqt_string text, int timeout);
bool QStatusBar_override_virtual_showEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QStatusBar_override_virtual_paintEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QStatusBar_override_virtual_resizeEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QStatusBar_override_virtual_event(void* self, intptr_t slot);
bool QStatusBar_virtualbase_event(void* self, QEvent* param1);
bool QStatusBar_override_virtual_devType(void* self, intptr_t slot);
int QStatusBar_virtualbase_devType(const void* self);
bool QStatusBar_override_virtual_setVisible(void* self, intptr_t slot);
void QStatusBar_virtualbase_setVisible(void* self, bool visible);
bool QStatusBar_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QStatusBar_virtualbase_sizeHint(const void* self);
bool QStatusBar_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QStatusBar_virtualbase_minimumSizeHint(const void* self);
bool QStatusBar_override_virtual_heightForWidth(void* self, intptr_t slot);
int QStatusBar_virtualbase_heightForWidth(const void* self, int param1);
bool QStatusBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QStatusBar_virtualbase_hasHeightForWidth(const void* self);
bool QStatusBar_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QStatusBar_virtualbase_paintEngine(const void* self);
bool QStatusBar_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QStatusBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QStatusBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QStatusBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QStatusBar_override_virtual_wheelEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QStatusBar_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QStatusBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QStatusBar_override_virtual_focusInEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QStatusBar_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QStatusBar_override_virtual_enterEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_enterEvent(void* self, QEvent* event);
bool QStatusBar_override_virtual_leaveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_leaveEvent(void* self, QEvent* event);
bool QStatusBar_override_virtual_moveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QStatusBar_override_virtual_closeEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QStatusBar_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QStatusBar_override_virtual_tabletEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QStatusBar_override_virtual_actionEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QStatusBar_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QStatusBar_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QStatusBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QStatusBar_override_virtual_dropEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QStatusBar_override_virtual_hideEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QStatusBar_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QStatusBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QStatusBar_override_virtual_changeEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_changeEvent(void* self, QEvent* param1);
bool QStatusBar_override_virtual_metric(void* self, intptr_t slot);
int QStatusBar_virtualbase_metric(const void* self, int param1);
bool QStatusBar_override_virtual_initPainter(void* self, intptr_t slot);
void QStatusBar_virtualbase_initPainter(const void* self, QPainter* painter);
bool QStatusBar_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QStatusBar_virtualbase_redirected(const void* self, QPoint* offset);
bool QStatusBar_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QStatusBar_virtualbase_sharedPainter(const void* self);
bool QStatusBar_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QStatusBar_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QStatusBar_virtualbase_inputMethodQuery(const void* self, int param1);
bool QStatusBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QStatusBar_virtualbase_focusNextPrevChild(void* self, bool next);
bool QStatusBar_override_virtual_eventFilter(void* self, intptr_t slot);
bool QStatusBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QStatusBar_override_virtual_timerEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QStatusBar_override_virtual_childEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_childEvent(void* self, QChildEvent* event);
bool QStatusBar_override_virtual_customEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_customEvent(void* self, QEvent* event);
bool QStatusBar_override_virtual_connectNotify(void* self, intptr_t slot);
void QStatusBar_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QStatusBar_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QStatusBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QStatusBar_delete(QStatusBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
