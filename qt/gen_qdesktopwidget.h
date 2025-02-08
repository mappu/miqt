#pragma once
#ifndef MIQT_QT_GEN_QDESKTOPWIDGET_H
#define MIQT_QT_GEN_QDESKTOPWIDGET_H

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
class QDesktopWidget;
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
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDesktopWidget QDesktopWidget;
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
#endif

QDesktopWidget* QDesktopWidget_new();
void QDesktopWidget_virtbase(QDesktopWidget* src, QWidget** outptr_QWidget);
QMetaObject* QDesktopWidget_metaObject(const QDesktopWidget* self);
void* QDesktopWidget_metacast(QDesktopWidget* self, const char* param1);
struct miqt_string QDesktopWidget_tr(const char* s);
struct miqt_string QDesktopWidget_trUtf8(const char* s);
int QDesktopWidget_screenNumber(const QDesktopWidget* self);
QRect* QDesktopWidget_screenGeometry(const QDesktopWidget* self, QWidget* widget);
QRect* QDesktopWidget_availableGeometry(const QDesktopWidget* self, QWidget* widget);
bool QDesktopWidget_isVirtualDesktop(const QDesktopWidget* self);
int QDesktopWidget_numScreens(const QDesktopWidget* self);
int QDesktopWidget_screenCount(const QDesktopWidget* self);
int QDesktopWidget_primaryScreen(const QDesktopWidget* self);
int QDesktopWidget_screenNumberWithQPoint(const QDesktopWidget* self, QPoint* param1);
QWidget* QDesktopWidget_screen(QDesktopWidget* self);
QRect* QDesktopWidget_screenGeometry2(const QDesktopWidget* self);
QRect* QDesktopWidget_screenGeometryWithPoint(const QDesktopWidget* self, QPoint* point);
QRect* QDesktopWidget_availableGeometry2(const QDesktopWidget* self);
QRect* QDesktopWidget_availableGeometryWithPoint(const QDesktopWidget* self, QPoint* point);
void QDesktopWidget_resized(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_resized(QDesktopWidget* self, intptr_t slot);
void QDesktopWidget_workAreaResized(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_workAreaResized(QDesktopWidget* self, intptr_t slot);
void QDesktopWidget_screenCountChanged(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_screenCountChanged(QDesktopWidget* self, intptr_t slot);
void QDesktopWidget_primaryScreenChanged(QDesktopWidget* self);
void QDesktopWidget_connect_primaryScreenChanged(QDesktopWidget* self, intptr_t slot);
void QDesktopWidget_resizeEvent(QDesktopWidget* self, QResizeEvent* e);
struct miqt_string QDesktopWidget_tr2(const char* s, const char* c);
struct miqt_string QDesktopWidget_tr3(const char* s, const char* c, int n);
struct miqt_string QDesktopWidget_trUtf82(const char* s, const char* c);
struct miqt_string QDesktopWidget_trUtf83(const char* s, const char* c, int n);
int QDesktopWidget_screenNumber1(const QDesktopWidget* self, QWidget* widget);
QWidget* QDesktopWidget_screen1(QDesktopWidget* self, int screen);
QRect* QDesktopWidget_screenGeometry1(const QDesktopWidget* self, int screen);
QRect* QDesktopWidget_availableGeometry1(const QDesktopWidget* self, int screen);
bool QDesktopWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_resizeEvent(void* self, QResizeEvent* e);
bool QDesktopWidget_override_virtual_devType(void* self, intptr_t slot);
int QDesktopWidget_virtualbase_devType(const void* self);
bool QDesktopWidget_override_virtual_setVisible(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_setVisible(void* self, bool visible);
bool QDesktopWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QDesktopWidget_virtualbase_sizeHint(const void* self);
bool QDesktopWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QDesktopWidget_virtualbase_minimumSizeHint(const void* self);
bool QDesktopWidget_override_virtual_heightForWidth(void* self, intptr_t slot);
int QDesktopWidget_virtualbase_heightForWidth(const void* self, int param1);
bool QDesktopWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QDesktopWidget_virtualbase_hasHeightForWidth(const void* self);
bool QDesktopWidget_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QDesktopWidget_virtualbase_paintEngine(const void* self);
bool QDesktopWidget_override_virtual_event(void* self, intptr_t slot);
bool QDesktopWidget_virtualbase_event(void* self, QEvent* event);
bool QDesktopWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QDesktopWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QDesktopWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QDesktopWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QDesktopWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QDesktopWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QDesktopWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QDesktopWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QDesktopWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QDesktopWidget_override_virtual_enterEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_enterEvent(void* self, QEvent* event);
bool QDesktopWidget_override_virtual_leaveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_leaveEvent(void* self, QEvent* event);
bool QDesktopWidget_override_virtual_paintEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QDesktopWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QDesktopWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QDesktopWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QDesktopWidget_override_virtual_tabletEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QDesktopWidget_override_virtual_actionEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QDesktopWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QDesktopWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QDesktopWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QDesktopWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QDesktopWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool QDesktopWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QDesktopWidget_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QDesktopWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QDesktopWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_changeEvent(void* self, QEvent* param1);
bool QDesktopWidget_override_virtual_metric(void* self, intptr_t slot);
int QDesktopWidget_virtualbase_metric(const void* self, int param1);
bool QDesktopWidget_override_virtual_initPainter(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_initPainter(const void* self, QPainter* painter);
bool QDesktopWidget_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QDesktopWidget_virtualbase_redirected(const void* self, QPoint* offset);
bool QDesktopWidget_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QDesktopWidget_virtualbase_sharedPainter(const void* self);
bool QDesktopWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QDesktopWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QDesktopWidget_virtualbase_inputMethodQuery(const void* self, int param1);
bool QDesktopWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QDesktopWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QDesktopWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesktopWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesktopWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesktopWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesktopWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QDesktopWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesktopWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QDesktopWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QDesktopWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QDesktopWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QDesktopWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QDesktopWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QDesktopWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesktopWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesktopWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesktopWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QDesktopWidget_delete(QDesktopWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
