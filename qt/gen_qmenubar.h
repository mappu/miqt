#pragma once
#ifndef MIQT_QT_GEN_QMENUBAR_H
#define MIQT_QT_GEN_QMENUBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
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
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QMenu;
class QMenuBar;
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
class QStyleOptionMenuItem;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAction QAction;
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
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
typedef struct QMenuBar QMenuBar;
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
typedef struct QStyleOptionMenuItem QStyleOptionMenuItem;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QMenuBar* QMenuBar_new(QWidget* parent);
QMenuBar* QMenuBar_new2();
void QMenuBar_virtbase(QMenuBar* src, QWidget** outptr_QWidget);
QMetaObject* QMenuBar_metaObject(const QMenuBar* self);
void* QMenuBar_metacast(QMenuBar* self, const char* param1);
struct miqt_string QMenuBar_tr(const char* s);
struct miqt_string QMenuBar_trUtf8(const char* s);
QAction* QMenuBar_addAction(QMenuBar* self, struct miqt_string text);
QAction* QMenuBar_addMenu(QMenuBar* self, QMenu* menu);
QMenu* QMenuBar_addMenuWithTitle(QMenuBar* self, struct miqt_string title);
QMenu* QMenuBar_addMenu2(QMenuBar* self, QIcon* icon, struct miqt_string title);
QAction* QMenuBar_addSeparator(QMenuBar* self);
QAction* QMenuBar_insertSeparator(QMenuBar* self, QAction* before);
QAction* QMenuBar_insertMenu(QMenuBar* self, QAction* before, QMenu* menu);
void QMenuBar_clear(QMenuBar* self);
QAction* QMenuBar_activeAction(const QMenuBar* self);
void QMenuBar_setActiveAction(QMenuBar* self, QAction* action);
void QMenuBar_setDefaultUp(QMenuBar* self, bool defaultUp);
bool QMenuBar_isDefaultUp(const QMenuBar* self);
QSize* QMenuBar_sizeHint(const QMenuBar* self);
QSize* QMenuBar_minimumSizeHint(const QMenuBar* self);
int QMenuBar_heightForWidth(const QMenuBar* self, int param1);
QRect* QMenuBar_actionGeometry(const QMenuBar* self, QAction* param1);
QAction* QMenuBar_actionAt(const QMenuBar* self, QPoint* param1);
void QMenuBar_setCornerWidget(QMenuBar* self, QWidget* w);
QWidget* QMenuBar_cornerWidget(const QMenuBar* self);
bool QMenuBar_isNativeMenuBar(const QMenuBar* self);
void QMenuBar_setNativeMenuBar(QMenuBar* self, bool nativeMenuBar);
void QMenuBar_setVisible(QMenuBar* self, bool visible);
void QMenuBar_triggered(QMenuBar* self, QAction* action);
void QMenuBar_connect_triggered(QMenuBar* self, intptr_t slot);
void QMenuBar_hovered(QMenuBar* self, QAction* action);
void QMenuBar_connect_hovered(QMenuBar* self, intptr_t slot);
void QMenuBar_changeEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_keyPressEvent(QMenuBar* self, QKeyEvent* param1);
void QMenuBar_mouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_mousePressEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_mouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_leaveEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_paintEvent(QMenuBar* self, QPaintEvent* param1);
void QMenuBar_resizeEvent(QMenuBar* self, QResizeEvent* param1);
void QMenuBar_actionEvent(QMenuBar* self, QActionEvent* param1);
void QMenuBar_focusOutEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_focusInEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_timerEvent(QMenuBar* self, QTimerEvent* param1);
bool QMenuBar_eventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
bool QMenuBar_event(QMenuBar* self, QEvent* param1);
struct miqt_string QMenuBar_tr2(const char* s, const char* c);
struct miqt_string QMenuBar_tr3(const char* s, const char* c, int n);
struct miqt_string QMenuBar_trUtf82(const char* s, const char* c);
struct miqt_string QMenuBar_trUtf83(const char* s, const char* c, int n);
void QMenuBar_setCornerWidget2(QMenuBar* self, QWidget* w, int corner);
QWidget* QMenuBar_cornerWidget1(const QMenuBar* self, int corner);
bool QMenuBar_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QMenuBar_virtualbase_sizeHint(const void* self);
bool QMenuBar_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QMenuBar_virtualbase_minimumSizeHint(const void* self);
bool QMenuBar_override_virtual_heightForWidth(void* self, intptr_t slot);
int QMenuBar_virtualbase_heightForWidth(const void* self, int param1);
bool QMenuBar_override_virtual_setVisible(void* self, intptr_t slot);
void QMenuBar_virtualbase_setVisible(void* self, bool visible);
bool QMenuBar_override_virtual_changeEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_changeEvent(void* self, QEvent* param1);
bool QMenuBar_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QMenuBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QMenuBar_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QMenuBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QMenuBar_override_virtual_leaveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_leaveEvent(void* self, QEvent* param1);
bool QMenuBar_override_virtual_paintEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QMenuBar_override_virtual_resizeEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QMenuBar_override_virtual_actionEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_actionEvent(void* self, QActionEvent* param1);
bool QMenuBar_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);
bool QMenuBar_override_virtual_focusInEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_focusInEvent(void* self, QFocusEvent* param1);
bool QMenuBar_override_virtual_timerEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QMenuBar_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMenuBar_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QMenuBar_override_virtual_event(void* self, intptr_t slot);
bool QMenuBar_virtualbase_event(void* self, QEvent* param1);
bool QMenuBar_override_virtual_devType(void* self, intptr_t slot);
int QMenuBar_virtualbase_devType(const void* self);
bool QMenuBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QMenuBar_virtualbase_hasHeightForWidth(const void* self);
bool QMenuBar_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QMenuBar_virtualbase_paintEngine(const void* self);
bool QMenuBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QMenuBar_override_virtual_wheelEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QMenuBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QMenuBar_override_virtual_enterEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_enterEvent(void* self, QEvent* event);
bool QMenuBar_override_virtual_moveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QMenuBar_override_virtual_closeEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QMenuBar_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QMenuBar_override_virtual_tabletEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QMenuBar_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QMenuBar_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QMenuBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QMenuBar_override_virtual_dropEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QMenuBar_override_virtual_showEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_showEvent(void* self, QShowEvent* event);
bool QMenuBar_override_virtual_hideEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QMenuBar_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QMenuBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QMenuBar_override_virtual_metric(void* self, intptr_t slot);
int QMenuBar_virtualbase_metric(const void* self, int param1);
bool QMenuBar_override_virtual_initPainter(void* self, intptr_t slot);
void QMenuBar_virtualbase_initPainter(const void* self, QPainter* painter);
bool QMenuBar_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QMenuBar_virtualbase_redirected(const void* self, QPoint* offset);
bool QMenuBar_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QMenuBar_virtualbase_sharedPainter(const void* self);
bool QMenuBar_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QMenuBar_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QMenuBar_virtualbase_inputMethodQuery(const void* self, int param1);
bool QMenuBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QMenuBar_virtualbase_focusNextPrevChild(void* self, bool next);
bool QMenuBar_override_virtual_childEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMenuBar_override_virtual_customEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_customEvent(void* self, QEvent* event);
bool QMenuBar_override_virtual_connectNotify(void* self, intptr_t slot);
void QMenuBar_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMenuBar_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMenuBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QMenuBar_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionMenuItem* option, QAction* action);
void QMenuBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QMenuBar_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QMenuBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QMenuBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QMenuBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QMenuBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QMenuBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QMenuBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QMenuBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QMenuBar_delete(QMenuBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
