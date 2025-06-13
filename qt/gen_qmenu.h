#pragma once
#ifndef MIQT_QT_GEN_QMENU_H
#define MIQT_QT_GEN_QMENU_H

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

QMenu* QMenu_new(QWidget* parent);
QMenu* QMenu_new2();
QMenu* QMenu_new3(struct miqt_string title);
QMenu* QMenu_new4(struct miqt_string title, QWidget* parent);
void QMenu_virtbase(QMenu* src, QWidget** outptr_QWidget);
QMetaObject* QMenu_metaObject(const QMenu* self);
void* QMenu_metacast(QMenu* self, const char* param1);
struct miqt_string QMenu_tr(const char* s);
struct miqt_string QMenu_trUtf8(const char* s);
QAction* QMenu_addAction(QMenu* self, struct miqt_string text);
QAction* QMenu_addAction2(QMenu* self, QIcon* icon, struct miqt_string text);
QAction* QMenu_addMenu(QMenu* self, QMenu* menu);
QMenu* QMenu_addMenuWithTitle(QMenu* self, struct miqt_string title);
QMenu* QMenu_addMenu2(QMenu* self, QIcon* icon, struct miqt_string title);
QAction* QMenu_addSeparator(QMenu* self);
QAction* QMenu_addSection(QMenu* self, struct miqt_string text);
QAction* QMenu_addSection2(QMenu* self, QIcon* icon, struct miqt_string text);
QAction* QMenu_insertMenu(QMenu* self, QAction* before, QMenu* menu);
QAction* QMenu_insertSeparator(QMenu* self, QAction* before);
QAction* QMenu_insertSection(QMenu* self, QAction* before, struct miqt_string text);
QAction* QMenu_insertSection2(QMenu* self, QAction* before, QIcon* icon, struct miqt_string text);
bool QMenu_isEmpty(const QMenu* self);
void QMenu_clear(QMenu* self);
void QMenu_setTearOffEnabled(QMenu* self, bool tearOffEnabled);
bool QMenu_isTearOffEnabled(const QMenu* self);
bool QMenu_isTearOffMenuVisible(const QMenu* self);
void QMenu_showTearOffMenu(QMenu* self);
void QMenu_showTearOffMenuWithPos(QMenu* self, QPoint* pos);
void QMenu_hideTearOffMenu(QMenu* self);
void QMenu_setDefaultAction(QMenu* self, QAction* defaultAction);
QAction* QMenu_defaultAction(const QMenu* self);
void QMenu_setActiveAction(QMenu* self, QAction* act);
QAction* QMenu_activeAction(const QMenu* self);
void QMenu_popup(QMenu* self, QPoint* pos);
QAction* QMenu_exec(QMenu* self);
QAction* QMenu_execWithPos(QMenu* self, QPoint* pos);
QAction* QMenu_exec2(struct miqt_array /* of QAction* */  actions, QPoint* pos);
QSize* QMenu_sizeHint(const QMenu* self);
QRect* QMenu_actionGeometry(const QMenu* self, QAction* param1);
QAction* QMenu_actionAt(const QMenu* self, QPoint* param1);
QAction* QMenu_menuAction(const QMenu* self);
struct miqt_string QMenu_title(const QMenu* self);
void QMenu_setTitle(QMenu* self, struct miqt_string title);
QIcon* QMenu_icon(const QMenu* self);
void QMenu_setIcon(QMenu* self, QIcon* icon);
void QMenu_setNoReplayFor(QMenu* self, QWidget* widget);
bool QMenu_separatorsCollapsible(const QMenu* self);
void QMenu_setSeparatorsCollapsible(QMenu* self, bool collapse);
bool QMenu_toolTipsVisible(const QMenu* self);
void QMenu_setToolTipsVisible(QMenu* self, bool visible);
void QMenu_aboutToShow(QMenu* self);
void QMenu_connect_aboutToShow(QMenu* self, intptr_t slot);
void QMenu_aboutToHide(QMenu* self);
void QMenu_connect_aboutToHide(QMenu* self, intptr_t slot);
void QMenu_triggered(QMenu* self, QAction* action);
void QMenu_connect_triggered(QMenu* self, intptr_t slot);
void QMenu_hovered(QMenu* self, QAction* action);
void QMenu_connect_hovered(QMenu* self, intptr_t slot);
void QMenu_changeEvent(QMenu* self, QEvent* param1);
void QMenu_keyPressEvent(QMenu* self, QKeyEvent* param1);
void QMenu_mouseReleaseEvent(QMenu* self, QMouseEvent* param1);
void QMenu_mousePressEvent(QMenu* self, QMouseEvent* param1);
void QMenu_mouseMoveEvent(QMenu* self, QMouseEvent* param1);
void QMenu_wheelEvent(QMenu* self, QWheelEvent* param1);
void QMenu_enterEvent(QMenu* self, QEvent* param1);
void QMenu_leaveEvent(QMenu* self, QEvent* param1);
void QMenu_hideEvent(QMenu* self, QHideEvent* param1);
void QMenu_paintEvent(QMenu* self, QPaintEvent* param1);
void QMenu_actionEvent(QMenu* self, QActionEvent* param1);
void QMenu_timerEvent(QMenu* self, QTimerEvent* param1);
bool QMenu_event(QMenu* self, QEvent* param1);
bool QMenu_focusNextPrevChild(QMenu* self, bool next);
struct miqt_string QMenu_tr2(const char* s, const char* c);
struct miqt_string QMenu_tr3(const char* s, const char* c, int n);
struct miqt_string QMenu_trUtf82(const char* s, const char* c);
struct miqt_string QMenu_trUtf83(const char* s, const char* c, int n);
void QMenu_popup2(QMenu* self, QPoint* pos, QAction* at);
QAction* QMenu_exec3(QMenu* self, QPoint* pos, QAction* at);
QAction* QMenu_exec4(struct miqt_array /* of QAction* */  actions, QPoint* pos, QAction* at);
QAction* QMenu_exec5(struct miqt_array /* of QAction* */  actions, QPoint* pos, QAction* at, QWidget* parent);

bool QMenu_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QMenu_virtualbase_sizeHint(const void* self);
bool QMenu_override_virtual_changeEvent(void* self, intptr_t slot);
void QMenu_virtualbase_changeEvent(void* self, QEvent* param1);
bool QMenu_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QMenu_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QMenu_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QMenu_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QMenu_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QMenu_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QMenu_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QMenu_override_virtual_wheelEvent(void* self, intptr_t slot);
void QMenu_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QMenu_override_virtual_enterEvent(void* self, intptr_t slot);
void QMenu_virtualbase_enterEvent(void* self, QEvent* param1);
bool QMenu_override_virtual_leaveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_leaveEvent(void* self, QEvent* param1);
bool QMenu_override_virtual_hideEvent(void* self, intptr_t slot);
void QMenu_virtualbase_hideEvent(void* self, QHideEvent* param1);
bool QMenu_override_virtual_paintEvent(void* self, intptr_t slot);
void QMenu_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QMenu_override_virtual_actionEvent(void* self, intptr_t slot);
void QMenu_virtualbase_actionEvent(void* self, QActionEvent* param1);
bool QMenu_override_virtual_timerEvent(void* self, intptr_t slot);
void QMenu_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QMenu_override_virtual_event(void* self, intptr_t slot);
bool QMenu_virtualbase_event(void* self, QEvent* param1);
bool QMenu_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QMenu_virtualbase_focusNextPrevChild(void* self, bool next);
bool QMenu_override_virtual_devType(void* self, intptr_t slot);
int QMenu_virtualbase_devType(const void* self);
bool QMenu_override_virtual_setVisible(void* self, intptr_t slot);
void QMenu_virtualbase_setVisible(void* self, bool visible);
bool QMenu_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QMenu_virtualbase_minimumSizeHint(const void* self);
bool QMenu_override_virtual_heightForWidth(void* self, intptr_t slot);
int QMenu_virtualbase_heightForWidth(const void* self, int param1);
bool QMenu_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QMenu_virtualbase_hasHeightForWidth(const void* self);
bool QMenu_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QMenu_virtualbase_paintEngine(const void* self);
bool QMenu_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QMenu_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QMenu_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QMenu_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QMenu_override_virtual_focusInEvent(void* self, intptr_t slot);
void QMenu_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QMenu_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QMenu_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QMenu_override_virtual_moveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QMenu_override_virtual_resizeEvent(void* self, intptr_t slot);
void QMenu_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QMenu_override_virtual_closeEvent(void* self, intptr_t slot);
void QMenu_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QMenu_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QMenu_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QMenu_override_virtual_tabletEvent(void* self, intptr_t slot);
void QMenu_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QMenu_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QMenu_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QMenu_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QMenu_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QMenu_override_virtual_dropEvent(void* self, intptr_t slot);
void QMenu_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QMenu_override_virtual_showEvent(void* self, intptr_t slot);
void QMenu_virtualbase_showEvent(void* self, QShowEvent* event);
bool QMenu_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QMenu_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QMenu_override_virtual_metric(void* self, intptr_t slot);
int QMenu_virtualbase_metric(const void* self, int param1);
bool QMenu_override_virtual_initPainter(void* self, intptr_t slot);
void QMenu_virtualbase_initPainter(const void* self, QPainter* painter);
bool QMenu_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QMenu_virtualbase_redirected(const void* self, QPoint* offset);
bool QMenu_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QMenu_virtualbase_sharedPainter(const void* self);
bool QMenu_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QMenu_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QMenu_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QMenu_virtualbase_inputMethodQuery(const void* self, int param1);
bool QMenu_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMenu_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QMenu_override_virtual_childEvent(void* self, intptr_t slot);
void QMenu_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMenu_override_virtual_customEvent(void* self, intptr_t slot);
void QMenu_virtualbase_customEvent(void* self, QEvent* event);
bool QMenu_override_virtual_connectNotify(void* self, intptr_t slot);
void QMenu_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMenu_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMenu_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

int QMenu_protectedbase_columnCount(bool* _dynamic_cast_ok, const void* self);
void QMenu_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionMenuItem* option, QAction* action);
void QMenu_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QMenu_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QMenu_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QMenu_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QMenu_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QMenu_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QMenu_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QMenu_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QMenu_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QMenu_delete(QMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
