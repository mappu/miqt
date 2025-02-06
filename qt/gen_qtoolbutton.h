#pragma once
#ifndef MIQT_QT_GEN_QTOOLBUTTON_H
#define MIQT_QT_GEN_QTOOLBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
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
class QInputMethodEvent;
class QKeyEvent;
class QMenu;
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
class QStyleOptionToolButton;
class QTabletEvent;
class QTimerEvent;
class QToolButton;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
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
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
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
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolButton QToolButton;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QToolButton* QToolButton_new(QWidget* parent);
QToolButton* QToolButton_new2();
void QToolButton_virtbase(QToolButton* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QToolButton_metaObject(const QToolButton* self);
void* QToolButton_metacast(QToolButton* self, const char* param1);
struct miqt_string QToolButton_tr(const char* s);
struct miqt_string QToolButton_trUtf8(const char* s);
QSize* QToolButton_sizeHint(const QToolButton* self);
QSize* QToolButton_minimumSizeHint(const QToolButton* self);
int QToolButton_toolButtonStyle(const QToolButton* self);
int QToolButton_arrowType(const QToolButton* self);
void QToolButton_setArrowType(QToolButton* self, int type);
void QToolButton_setMenu(QToolButton* self, QMenu* menu);
QMenu* QToolButton_menu(const QToolButton* self);
void QToolButton_setPopupMode(QToolButton* self, int mode);
int QToolButton_popupMode(const QToolButton* self);
QAction* QToolButton_defaultAction(const QToolButton* self);
void QToolButton_setAutoRaise(QToolButton* self, bool enable);
bool QToolButton_autoRaise(const QToolButton* self);
void QToolButton_showMenu(QToolButton* self);
void QToolButton_setToolButtonStyle(QToolButton* self, int style);
void QToolButton_setDefaultAction(QToolButton* self, QAction* defaultAction);
void QToolButton_triggered(QToolButton* self, QAction* param1);
void QToolButton_connect_triggered(QToolButton* self, intptr_t slot);
bool QToolButton_event(QToolButton* self, QEvent* e);
void QToolButton_mousePressEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_mouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_paintEvent(QToolButton* self, QPaintEvent* param1);
void QToolButton_actionEvent(QToolButton* self, QActionEvent* param1);
void QToolButton_enterEvent(QToolButton* self, QEvent* param1);
void QToolButton_leaveEvent(QToolButton* self, QEvent* param1);
void QToolButton_timerEvent(QToolButton* self, QTimerEvent* param1);
void QToolButton_changeEvent(QToolButton* self, QEvent* param1);
bool QToolButton_hitButton(const QToolButton* self, QPoint* pos);
void QToolButton_nextCheckState(QToolButton* self);
struct miqt_string QToolButton_tr2(const char* s, const char* c);
struct miqt_string QToolButton_tr3(const char* s, const char* c, int n);
struct miqt_string QToolButton_trUtf82(const char* s, const char* c);
struct miqt_string QToolButton_trUtf83(const char* s, const char* c, int n);
bool QToolButton_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QToolButton_virtualbase_sizeHint(const void* self);
bool QToolButton_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QToolButton_virtualbase_minimumSizeHint(const void* self);
bool QToolButton_override_virtual_event(void* self, intptr_t slot);
bool QToolButton_virtualbase_event(void* self, QEvent* e);
bool QToolButton_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QToolButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QToolButton_override_virtual_paintEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QToolButton_override_virtual_actionEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_actionEvent(void* self, QActionEvent* param1);
bool QToolButton_override_virtual_enterEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_enterEvent(void* self, QEvent* param1);
bool QToolButton_override_virtual_leaveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_leaveEvent(void* self, QEvent* param1);
bool QToolButton_override_virtual_timerEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QToolButton_override_virtual_changeEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_changeEvent(void* self, QEvent* param1);
bool QToolButton_override_virtual_hitButton(void* self, intptr_t slot);
bool QToolButton_virtualbase_hitButton(const void* self, QPoint* pos);
bool QToolButton_override_virtual_nextCheckState(void* self, intptr_t slot);
void QToolButton_virtualbase_nextCheckState(void* self);
bool QToolButton_override_virtual_checkStateSet(void* self, intptr_t slot);
void QToolButton_virtualbase_checkStateSet(void* self);
bool QToolButton_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_keyPressEvent(void* self, QKeyEvent* e);
bool QToolButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
bool QToolButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);
bool QToolButton_override_virtual_focusInEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_focusInEvent(void* self, QFocusEvent* e);
bool QToolButton_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_focusOutEvent(void* self, QFocusEvent* e);
bool QToolButton_override_virtual_devType(void* self, intptr_t slot);
int QToolButton_virtualbase_devType(const void* self);
bool QToolButton_override_virtual_setVisible(void* self, intptr_t slot);
void QToolButton_virtualbase_setVisible(void* self, bool visible);
bool QToolButton_override_virtual_heightForWidth(void* self, intptr_t slot);
int QToolButton_virtualbase_heightForWidth(const void* self, int param1);
bool QToolButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QToolButton_virtualbase_hasHeightForWidth(const void* self);
bool QToolButton_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QToolButton_virtualbase_paintEngine(const void* self);
bool QToolButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QToolButton_override_virtual_wheelEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QToolButton_override_virtual_moveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QToolButton_override_virtual_resizeEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QToolButton_override_virtual_closeEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QToolButton_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QToolButton_override_virtual_tabletEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QToolButton_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QToolButton_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QToolButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QToolButton_override_virtual_dropEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QToolButton_override_virtual_showEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_showEvent(void* self, QShowEvent* event);
bool QToolButton_override_virtual_hideEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QToolButton_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QToolButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QToolButton_override_virtual_metric(void* self, intptr_t slot);
int QToolButton_virtualbase_metric(const void* self, int param1);
bool QToolButton_override_virtual_initPainter(void* self, intptr_t slot);
void QToolButton_virtualbase_initPainter(const void* self, QPainter* painter);
bool QToolButton_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QToolButton_virtualbase_redirected(const void* self, QPoint* offset);
bool QToolButton_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QToolButton_virtualbase_sharedPainter(const void* self);
bool QToolButton_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QToolButton_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QToolButton_virtualbase_inputMethodQuery(const void* self, int param1);
bool QToolButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QToolButton_virtualbase_focusNextPrevChild(void* self, bool next);
bool QToolButton_override_virtual_eventFilter(void* self, intptr_t slot);
bool QToolButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QToolButton_override_virtual_childEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_childEvent(void* self, QChildEvent* event);
bool QToolButton_override_virtual_customEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_customEvent(void* self, QEvent* event);
bool QToolButton_override_virtual_connectNotify(void* self, intptr_t slot);
void QToolButton_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QToolButton_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QToolButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QToolButton_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionToolButton* option);
void QToolButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QToolButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QToolButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QToolButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QToolButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QToolButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QToolButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QToolButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QToolButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QToolButton_delete(QToolButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
