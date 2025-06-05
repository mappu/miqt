#pragma once
#ifndef MIQT_QT_GEN_QTOOLBAR_H
#define MIQT_QT_GEN_QTOOLBAR_H

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
class QStyleOptionToolBar;
class QTabletEvent;
class QTimerEvent;
class QToolBar;
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
typedef struct QStyleOptionToolBar QStyleOptionToolBar;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolBar QToolBar;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QToolBar* QToolBar_new(QWidget* parent);
QToolBar* QToolBar_new2(struct miqt_string title);
QToolBar* QToolBar_new3();
QToolBar* QToolBar_new4(struct miqt_string title, QWidget* parent);
void QToolBar_virtbase(QToolBar* src, QWidget** outptr_QWidget);
QMetaObject* QToolBar_metaObject(const QToolBar* self);
void* QToolBar_metacast(QToolBar* self, const char* param1);
struct miqt_string QToolBar_tr(const char* s);
struct miqt_string QToolBar_trUtf8(const char* s);
void QToolBar_setMovable(QToolBar* self, bool movable);
bool QToolBar_isMovable(const QToolBar* self);
void QToolBar_setAllowedAreas(QToolBar* self, int areas);
int QToolBar_allowedAreas(const QToolBar* self);
bool QToolBar_isAreaAllowed(const QToolBar* self, int area);
void QToolBar_setOrientation(QToolBar* self, int orientation);
int QToolBar_orientation(const QToolBar* self);
void QToolBar_clear(QToolBar* self);
QAction* QToolBar_addAction(QToolBar* self, struct miqt_string text);
QAction* QToolBar_addAction2(QToolBar* self, QIcon* icon, struct miqt_string text);
QAction* QToolBar_addSeparator(QToolBar* self);
QAction* QToolBar_insertSeparator(QToolBar* self, QAction* before);
QAction* QToolBar_addWidget(QToolBar* self, QWidget* widget);
QAction* QToolBar_insertWidget(QToolBar* self, QAction* before, QWidget* widget);
QRect* QToolBar_actionGeometry(const QToolBar* self, QAction* action);
QAction* QToolBar_actionAt(const QToolBar* self, QPoint* p);
QAction* QToolBar_actionAt2(const QToolBar* self, int x, int y);
QAction* QToolBar_toggleViewAction(const QToolBar* self);
QSize* QToolBar_iconSize(const QToolBar* self);
int QToolBar_toolButtonStyle(const QToolBar* self);
QWidget* QToolBar_widgetForAction(const QToolBar* self, QAction* action);
bool QToolBar_isFloatable(const QToolBar* self);
void QToolBar_setFloatable(QToolBar* self, bool floatable);
bool QToolBar_isFloating(const QToolBar* self);
void QToolBar_setIconSize(QToolBar* self, QSize* iconSize);
void QToolBar_setToolButtonStyle(QToolBar* self, int toolButtonStyle);
void QToolBar_actionTriggered(QToolBar* self, QAction* action);
void QToolBar_connect_actionTriggered(QToolBar* self, intptr_t slot);
void QToolBar_movableChanged(QToolBar* self, bool movable);
void QToolBar_connect_movableChanged(QToolBar* self, intptr_t slot);
void QToolBar_allowedAreasChanged(QToolBar* self, int allowedAreas);
void QToolBar_connect_allowedAreasChanged(QToolBar* self, intptr_t slot);
void QToolBar_orientationChanged(QToolBar* self, int orientation);
void QToolBar_connect_orientationChanged(QToolBar* self, intptr_t slot);
void QToolBar_iconSizeChanged(QToolBar* self, QSize* iconSize);
void QToolBar_connect_iconSizeChanged(QToolBar* self, intptr_t slot);
void QToolBar_toolButtonStyleChanged(QToolBar* self, int toolButtonStyle);
void QToolBar_connect_toolButtonStyleChanged(QToolBar* self, intptr_t slot);
void QToolBar_topLevelChanged(QToolBar* self, bool topLevel);
void QToolBar_connect_topLevelChanged(QToolBar* self, intptr_t slot);
void QToolBar_visibilityChanged(QToolBar* self, bool visible);
void QToolBar_connect_visibilityChanged(QToolBar* self, intptr_t slot);
void QToolBar_actionEvent(QToolBar* self, QActionEvent* event);
void QToolBar_changeEvent(QToolBar* self, QEvent* event);
void QToolBar_paintEvent(QToolBar* self, QPaintEvent* event);
bool QToolBar_event(QToolBar* self, QEvent* event);
struct miqt_string QToolBar_tr2(const char* s, const char* c);
struct miqt_string QToolBar_tr3(const char* s, const char* c, int n);
struct miqt_string QToolBar_trUtf82(const char* s, const char* c);
struct miqt_string QToolBar_trUtf83(const char* s, const char* c, int n);

bool QToolBar_override_virtual_actionEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QToolBar_override_virtual_changeEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_changeEvent(void* self, QEvent* event);
bool QToolBar_override_virtual_paintEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QToolBar_override_virtual_event(void* self, intptr_t slot);
bool QToolBar_virtualbase_event(void* self, QEvent* event);
bool QToolBar_override_virtual_devType(void* self, intptr_t slot);
int QToolBar_virtualbase_devType(const void* self);
bool QToolBar_override_virtual_setVisible(void* self, intptr_t slot);
void QToolBar_virtualbase_setVisible(void* self, bool visible);
bool QToolBar_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QToolBar_virtualbase_sizeHint(const void* self);
bool QToolBar_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QToolBar_virtualbase_minimumSizeHint(const void* self);
bool QToolBar_override_virtual_heightForWidth(void* self, intptr_t slot);
int QToolBar_virtualbase_heightForWidth(const void* self, int param1);
bool QToolBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QToolBar_virtualbase_hasHeightForWidth(const void* self);
bool QToolBar_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QToolBar_virtualbase_paintEngine(const void* self);
bool QToolBar_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QToolBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QToolBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QToolBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QToolBar_override_virtual_wheelEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QToolBar_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QToolBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QToolBar_override_virtual_focusInEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QToolBar_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QToolBar_override_virtual_enterEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_enterEvent(void* self, QEvent* event);
bool QToolBar_override_virtual_leaveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_leaveEvent(void* self, QEvent* event);
bool QToolBar_override_virtual_moveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QToolBar_override_virtual_resizeEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QToolBar_override_virtual_closeEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QToolBar_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QToolBar_override_virtual_tabletEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QToolBar_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QToolBar_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QToolBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QToolBar_override_virtual_dropEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QToolBar_override_virtual_showEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_showEvent(void* self, QShowEvent* event);
bool QToolBar_override_virtual_hideEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QToolBar_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QToolBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QToolBar_override_virtual_metric(void* self, intptr_t slot);
int QToolBar_virtualbase_metric(const void* self, int param1);
bool QToolBar_override_virtual_initPainter(void* self, intptr_t slot);
void QToolBar_virtualbase_initPainter(const void* self, QPainter* painter);
bool QToolBar_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QToolBar_virtualbase_redirected(const void* self, QPoint* offset);
bool QToolBar_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QToolBar_virtualbase_sharedPainter(const void* self);
bool QToolBar_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QToolBar_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QToolBar_virtualbase_inputMethodQuery(const void* self, int param1);
bool QToolBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QToolBar_virtualbase_focusNextPrevChild(void* self, bool next);
bool QToolBar_override_virtual_eventFilter(void* self, intptr_t slot);
bool QToolBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QToolBar_override_virtual_timerEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QToolBar_override_virtual_childEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_childEvent(void* self, QChildEvent* event);
bool QToolBar_override_virtual_customEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_customEvent(void* self, QEvent* event);
bool QToolBar_override_virtual_connectNotify(void* self, intptr_t slot);
void QToolBar_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QToolBar_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QToolBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QToolBar_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionToolBar* option);
void QToolBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QToolBar_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QToolBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QToolBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QToolBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QToolBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QToolBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QToolBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QToolBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QToolBar_delete(QToolBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
