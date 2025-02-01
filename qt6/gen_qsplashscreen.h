#pragma once
#ifndef MIQT_QT6_GEN_QSPLASHSCREEN_H
#define MIQT_QT6_GEN_QSPLASHSCREEN_H

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
class QColor;
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
class QPixmap;
class QPoint;
class QResizeEvent;
class QScreen;
class QShowEvent;
class QSize;
class QSplashScreen;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
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
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSplashScreen QSplashScreen;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSplashScreen* QSplashScreen_new();
QSplashScreen* QSplashScreen_new2(QScreen* screen);
QSplashScreen* QSplashScreen_new3(QPixmap* pixmap);
QSplashScreen* QSplashScreen_new4(QPixmap* pixmap, int f);
QSplashScreen* QSplashScreen_new5(QScreen* screen, QPixmap* pixmap);
QSplashScreen* QSplashScreen_new6(QScreen* screen, QPixmap* pixmap, int f);
void QSplashScreen_virtbase(QSplashScreen* src, QWidget** outptr_QWidget);
QMetaObject* QSplashScreen_metaObject(const QSplashScreen* self);
void* QSplashScreen_metacast(QSplashScreen* self, const char* param1);
struct miqt_string QSplashScreen_tr(const char* s);
void QSplashScreen_setPixmap(QSplashScreen* self, QPixmap* pixmap);
QPixmap* QSplashScreen_pixmap(const QSplashScreen* self);
void QSplashScreen_finish(QSplashScreen* self, QWidget* w);
void QSplashScreen_repaint(QSplashScreen* self);
struct miqt_string QSplashScreen_message(const QSplashScreen* self);
void QSplashScreen_showMessage(QSplashScreen* self, struct miqt_string message);
void QSplashScreen_clearMessage(QSplashScreen* self);
void QSplashScreen_messageChanged(QSplashScreen* self, struct miqt_string message);
void QSplashScreen_connect_messageChanged(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_event(QSplashScreen* self, QEvent* e);
void QSplashScreen_drawContents(QSplashScreen* self, QPainter* painter);
void QSplashScreen_mousePressEvent(QSplashScreen* self, QMouseEvent* param1);
struct miqt_string QSplashScreen_tr2(const char* s, const char* c);
struct miqt_string QSplashScreen_tr3(const char* s, const char* c, int n);
void QSplashScreen_showMessage2(QSplashScreen* self, struct miqt_string message, int alignment);
void QSplashScreen_showMessage3(QSplashScreen* self, struct miqt_string message, int alignment, QColor* color);
bool QSplashScreen_override_virtual_event(void* self, intptr_t slot);
bool QSplashScreen_virtualbase_event(void* self, QEvent* e);
bool QSplashScreen_override_virtual_drawContents(void* self, intptr_t slot);
void QSplashScreen_virtualbase_drawContents(void* self, QPainter* painter);
bool QSplashScreen_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QSplashScreen_override_virtual_devType(void* self, intptr_t slot);
int QSplashScreen_virtualbase_devType(const void* self);
bool QSplashScreen_override_virtual_setVisible(void* self, intptr_t slot);
void QSplashScreen_virtualbase_setVisible(void* self, bool visible);
bool QSplashScreen_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QSplashScreen_virtualbase_sizeHint(const void* self);
bool QSplashScreen_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QSplashScreen_virtualbase_minimumSizeHint(const void* self);
bool QSplashScreen_override_virtual_heightForWidth(void* self, intptr_t slot);
int QSplashScreen_virtualbase_heightForWidth(const void* self, int param1);
bool QSplashScreen_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QSplashScreen_virtualbase_hasHeightForWidth(const void* self);
bool QSplashScreen_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QSplashScreen_virtualbase_paintEngine(const void* self);
bool QSplashScreen_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QSplashScreen_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QSplashScreen_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QSplashScreen_override_virtual_wheelEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QSplashScreen_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QSplashScreen_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QSplashScreen_override_virtual_focusInEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QSplashScreen_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QSplashScreen_override_virtual_enterEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QSplashScreen_override_virtual_leaveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_leaveEvent(void* self, QEvent* event);
bool QSplashScreen_override_virtual_paintEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QSplashScreen_override_virtual_moveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QSplashScreen_override_virtual_resizeEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QSplashScreen_override_virtual_closeEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QSplashScreen_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QSplashScreen_override_virtual_tabletEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QSplashScreen_override_virtual_actionEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QSplashScreen_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QSplashScreen_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QSplashScreen_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QSplashScreen_override_virtual_dropEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QSplashScreen_override_virtual_showEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_showEvent(void* self, QShowEvent* event);
bool QSplashScreen_override_virtual_hideEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QSplashScreen_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QSplashScreen_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QSplashScreen_override_virtual_changeEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_changeEvent(void* self, QEvent* param1);
bool QSplashScreen_override_virtual_metric(void* self, intptr_t slot);
int QSplashScreen_virtualbase_metric(const void* self, int param1);
bool QSplashScreen_override_virtual_initPainter(void* self, intptr_t slot);
void QSplashScreen_virtualbase_initPainter(const void* self, QPainter* painter);
bool QSplashScreen_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QSplashScreen_virtualbase_redirected(const void* self, QPoint* offset);
bool QSplashScreen_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QSplashScreen_virtualbase_sharedPainter(const void* self);
bool QSplashScreen_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QSplashScreen_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QSplashScreen_virtualbase_inputMethodQuery(const void* self, int param1);
bool QSplashScreen_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QSplashScreen_virtualbase_focusNextPrevChild(void* self, bool next);
bool QSplashScreen_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSplashScreen_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSplashScreen_override_virtual_timerEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSplashScreen_override_virtual_childEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSplashScreen_override_virtual_customEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_customEvent(void* self, QEvent* event);
bool QSplashScreen_override_virtual_connectNotify(void* self, intptr_t slot);
void QSplashScreen_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSplashScreen_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSplashScreen_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QSplashScreen_delete(QSplashScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
